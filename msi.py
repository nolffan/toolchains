#!/usr/bin/env python3
"""List the files a Windows Installer package installs, from its streams.

    python3 msi.py STREAMDIR

STREAMDIR holds the package's streams as `7z x` writes them (`!_StringPool`,
`!_StringData`, `!_Columns`, `!File`, ...). Prints one line per file:

    <file key> TAB <cabinet name> TAB <install path, '/'-separated, from TARGETDIR>

The file key is the name the file has inside its cabinet. fetch.sh uses this
because Wine's msiexec cannot do an administrative install (`msiexec /a`),
which is the usual way to unpack a package without installing it.
"""
import os
import struct
import sys

MSITYPE_STRING = 0x0800
MSITYPE_TEMPORARY = 0x4000


def read(d, name):
    with open(os.path.join(d, name), 'rb') as f:
        return f.read()


def load_strings(d):
    pool = read(d, '!_StringPool')
    data = read(d, '!_StringData')
    codepage, flags = struct.unpack_from('<HH', pool, 0)
    enc = 'cp%d' % codepage if codepage else 'cp1252'
    words = struct.unpack_from('<%dH' % (len(pool) // 2), pool)
    strings = ['']
    i, off = 2, 0
    while i + 1 < len(words):
        length, refs = words[i], words[i + 1]
        if length == 0 and refs == 0:
            strings.append('')
            i += 2
            continue
        if length == 0:
            # Over 64K: the real length follows in the next entry.
            length = (words[i + 3] << 16) | words[i + 2]
            i += 4
        else:
            i += 2
        strings.append(data[off:off + length].decode(enc))
        off += length
    strref = 3 if flags & 0x8000 else 2
    return strings, strref


def columns_of(d, strings, strref):
    """{table: [(name, type), ...]} in column order, from !_Columns."""
    raw = read(d, '!_Columns')
    n = len(raw) // (2 * strref + 4)
    pos = 0

    def col(size):
        nonlocal pos
        vals = [int.from_bytes(raw[pos + k * size:pos + (k + 1) * size], 'little')
                for k in range(n)]
        pos += n * size
        return vals

    tables, numbers, names, types = col(strref), col(2), col(strref), col(2)
    out = {}
    for t, num, nm, ty in zip(tables, numbers, names, types):
        out.setdefault(strings[t], []).append((num ^ 0x8000, strings[nm], ty ^ 0x8000))
    return {t: [(nm, ty) for _, nm, ty in sorted(cols)] for t, cols in out.items()}


def table(d, name, strings, strref, columns):
    cols = [(nm, ty) for nm, ty in columns[name] if not ty & MSITYPE_TEMPORARY]
    sizes = [strref if ty & MSITYPE_STRING else (4 if ty & 0xff == 4 else 2)
             for _, ty in cols]
    raw = read(d, '!' + name)
    n = len(raw) // sum(sizes)
    rows = [dict() for _ in range(n)]
    pos = 0
    for (nm, ty), size in zip(cols, sizes):
        for k in range(n):
            v = int.from_bytes(raw[pos + k * size:pos + (k + 1) * size], 'little')
            if ty & MSITYPE_STRING:
                v = strings[v] if v else None
            elif v == 0:
                v = None
            else:
                v ^= 0x80000000 if size == 4 else 0x8000
            rows[k][nm] = v
        pos += n * size
    return rows


def long_name(s):
    """The long half of a `short|long` name."""
    return s.split('|')[-1]


def main():
    d = sys.argv[1]
    strings, strref = load_strings(d)
    columns = columns_of(d, strings, strref)
    get = lambda t: table(d, t, strings, strref, columns)

    dirs = {r['Directory']: r for r in get('Directory')}
    cache = {}

    def path_of(key):
        if key not in cache:
            r = dirs[key]
            target = r['DefaultDir'].split(':')[0]
            name = long_name(target)
            parent = r['Directory_Parent']
            if not parent or parent == key:
                cache[key] = ''
            else:
                base = path_of(parent)
                cache[key] = base if name == '.' else (base + '/' + name).lstrip('/')
        return cache[key]

    comps = {r['Component']: r for r in get('Component')}
    media = sorted(get('Media'), key=lambda r: r['DiskId'])

    def cabinet_of(seq):
        for m in media:
            if seq <= m['LastSequence']:
                return (m['Cabinet'] or '').lstrip('#')
        return ''

    for r in sorted(get('File'), key=lambda r: r['Sequence']):
        where = path_of(comps[r['Component_']]['Directory_'])
        path = (where + '/' + long_name(r['FileName'])).lstrip('/')
        print('%s\t%s\t%s' % (r['File'], cabinet_of(r['Sequence']), path))


if __name__ == '__main__':
    main()
