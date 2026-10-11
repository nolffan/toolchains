MessageIdTypedef=DWORD
SeverityNames=(             
	Success=0x0:STATUS_SEVERITY_SUCCESS             
	Informational=0x1:STATUS_SEVERITY_INFORMATIONAL             
	Warning=0x2:STATUS_SEVERITY_WARNING             
	Error=0x3:STATUS_SEVERITY_ERROR             
)
FacilityNames=(             
	System=0x0:FACILITY_SYSTEM             
	Runtime=0x2:FACILITY_RUNTIME             
	Stubs=0x3:FACILITY_STUBS             
	Io=0x4:FACILITY_IO_ERROR_CODE             
)
LanguageNames=(English=0x409:MSG00409)


MessageId=1
Severity=Warning
Facility=System
SymbolicName=last_line_incomplete
Language=English
last line of file ends without a newline
.

MessageId=2
Severity=Warning
Facility=System
SymbolicName=last_line_backslash
Language=English
last line of file ends with a backslash
.

MessageId=3
Severity=Warning
Facility=System
SymbolicName=include_recursion
Language=English
#include file %%sq includes itself
.

MessageId=4
Severity=Warning
Facility=System
SymbolicName=out_of_memory
Language=English
out of memory
.

MessageId=5
Severity=Warning
Facility=System
SymbolicName=source_file_could_not_be_opened
Language=English
could not open source file %%sq
.

MessageId=6
Severity=Warning
Facility=System
SymbolicName=comment_unclosed_at_eof
Language=English
comment unclosed at end of file
.

MessageId=7
Severity=Warning
Facility=System
SymbolicName=bad_token
Language=English
unrecognized token
.

MessageId=8
Severity=Warning
Facility=System
SymbolicName=unclosed_string
Language=English
missing closing quote
.

MessageId=9
Severity=Warning
Facility=System
SymbolicName=nested_comment
Language=English
nested comment is not allowed
.

MessageId=10
Severity=Warning
Facility=System
SymbolicName=bad_use_of_sharp
Language=English
"#" not expected here
.

MessageId=11
Severity=Warning
Facility=System
SymbolicName=bad_pp_directive_keyword
Language=English
unrecognized preprocessing directive
.

MessageId=12
Severity=Warning
Facility=System
SymbolicName=end_of_flush
Language=English
parsing restarts here after previous syntax error
.

MessageId=13
Severity=Warning
Facility=System
SymbolicName=exp_file_name
Language=English
expected a file name
.

MessageId=14
Severity=Warning
Facility=System
SymbolicName=extra_text_in_pp_directive
Language=English
extra text after expected end of preprocessing directive
.

MessageId=15
Severity=Warning
Facility=System
SymbolicName=tag_15
Language=English
ec_removed_15
.

MessageId=16
Severity=Warning
Facility=System
SymbolicName=illegal_source_file_name
Language=English
%%sq is not a valid source file name
.

MessageId=17
Severity=Warning
Facility=System
SymbolicName=exp_rbracket
Language=English
expected a "]"
.

MessageId=18
Severity=Warning
Facility=System
SymbolicName=exp_rparen
Language=English
expected a ")"
.

MessageId=19
Severity=Warning
Facility=System
SymbolicName=extra_chars_on_number
Language=English
extra text after expected end of number
.

MessageId=20
Severity=Warning
Facility=System
SymbolicName=undefined_identifier
Language=English
identifier %%sq is undefined
.

MessageId=21
Severity=Warning
Facility=System
SymbolicName=useless_type_qualifiers
Language=English
type qualifiers are meaningless in this declaration
.

MessageId=22
Severity=Warning
Facility=System
SymbolicName=bad_hex_digit
Language=English
invalid hexadecimal number
.

MessageId=23
Severity=Warning
Facility=System
SymbolicName=integer_too_large
Language=English
integer constant is too large
.

MessageId=24
Severity=Warning
Facility=System
SymbolicName=bad_octal_digit
Language=English
invalid octal digit
.

MessageId=25
Severity=Warning
Facility=System
SymbolicName=zero_length_string
Language=English
quoted string should contain at least one character
.

MessageId=26
Severity=Warning
Facility=System
SymbolicName=too_many_characters
Language=English
too many characters in character constant
.

MessageId=27
Severity=Warning
Facility=System
SymbolicName=bad_character_value
Language=English
character value is out of range
.

MessageId=28
Severity=Warning
Facility=System
SymbolicName=expr_not_constant
Language=English
expression must have a constant value
.

MessageId=29
Severity=Warning
Facility=System
SymbolicName=exp_primary_expr
Language=English
expected an expression
.

MessageId=30
Severity=Warning
Facility=System
SymbolicName=bad_float_value
Language=English
floating constant is out of range
.

MessageId=31
Severity=Warning
Facility=System
SymbolicName=expr_not_integral
Language=English
expression must have integral type
.

MessageId=32
Severity=Warning
Facility=System
SymbolicName=expr_not_arithmetic
Language=English
expression must have arithmetic type
.

MessageId=33
Severity=Warning
Facility=System
SymbolicName=exp_line_number
Language=English
expected a line number
.

MessageId=34
Severity=Warning
Facility=System
SymbolicName=bad_line_number
Language=English
invalid line number
.

MessageId=35
Severity=Warning
Facility=System
SymbolicName=error_directive
Language=English
#error directive: %%s
.

MessageId=36
Severity=Warning
Facility=System
SymbolicName=missing_pp_if
Language=English
the #if for this directive is missing
.

MessageId=37
Severity=Warning
Facility=System
SymbolicName=missing_endif
Language=English
the #endif for this directive is missing
.

MessageId=38
Severity=Warning
Facility=System
SymbolicName=pp_else_already_appeared
Language=English
directive is not allowed -- an #else has already appeared
.

MessageId=39
Severity=Warning
Facility=System
SymbolicName=divide_by_zero
Language=English
division by zero
.

MessageId=40
Severity=Warning
Facility=System
SymbolicName=exp_identifier
Language=English
expected an identifier
.

MessageId=41
Severity=Warning
Facility=System
SymbolicName=expr_not_scalar
Language=English
expression must have arithmetic or pointer type
.

MessageId=42
Severity=Warning
Facility=System
SymbolicName=incompatible_operands
Language=English
operand types are incompatible (%%t1 and %%t2)
.

MessageId=43
Severity=Warning
Facility=System
SymbolicName=tag_43
Language=English
ec_removed_43
.

MessageId=44
Severity=Warning
Facility=System
SymbolicName=expr_not_pointer
Language=English
expression must have pointer type
.

MessageId=45
Severity=Warning
Facility=System
SymbolicName=cannot_undef_predef_macro
Language=English
#undef may not be used on this predefined name
.

MessageId=46
Severity=Warning
Facility=System
SymbolicName=cannot_redef_predef_macro
Language=English
this predefined name may not be redefined
.

MessageId=47
Severity=Warning
Facility=System
SymbolicName=bad_macro_redef
Language=English
incompatible redefinition of macro %%nod
.

MessageId=48
Severity=Warning
Facility=System
SymbolicName=tag_48
Language=English
ec_removed_48
.

MessageId=49
Severity=Warning
Facility=System
SymbolicName=duplicate_macro_param_name
Language=English
duplicate macro parameter name
.

MessageId=50
Severity=Warning
Facility=System
SymbolicName=paste_cannot_be_first
Language=English
"##" may not be first in a macro definition
.

MessageId=51
Severity=Warning
Facility=System
SymbolicName=paste_cannot_be_last
Language=English
"##" may not be last in a macro definition
.

MessageId=52
Severity=Warning
Facility=System
SymbolicName=exp_macro_param
Language=English
expected a macro parameter name
.

MessageId=53
Severity=Warning
Facility=System
SymbolicName=exp_colon
Language=English
expected a ":"
.

MessageId=54
Severity=Warning
Facility=System
SymbolicName=too_few_macro_args
Language=English
too few arguments in macro invocation
.

MessageId=55
Severity=Warning
Facility=System
SymbolicName=too_many_macro_args
Language=English
too many arguments in macro invocation
.

MessageId=56
Severity=Warning
Facility=System
SymbolicName=sizeof_function
Language=English
operand of sizeof may not be a function
.

MessageId=57
Severity=Warning
Facility=System
SymbolicName=bad_constant_operator
Language=English
this operator is not allowed in a constant expression
.

MessageId=58
Severity=Warning
Facility=System
SymbolicName=bad_pp_operator
Language=English
this operator is not allowed in a preprocessing expression
.

MessageId=59
Severity=Warning
Facility=System
SymbolicName=bad_constant_function_call
Language=English
function call is not allowed in a constant expression
.

MessageId=60
Severity=Warning
Facility=System
SymbolicName=bad_integral_operator
Language=English
this operator is not allowed in an integral constant expression
.

MessageId=61
Severity=Warning
Facility=System
SymbolicName=integer_overflow
Language=English
integer operation result is out of range
.

MessageId=62
Severity=Warning
Facility=System
SymbolicName=negative_shift_count
Language=English
shift count is negative
.

MessageId=63
Severity=Warning
Facility=System
SymbolicName=shift_count_too_large
Language=English
shift count is too large
.

MessageId=64
Severity=Warning
Facility=System
SymbolicName=useless_decl
Language=English
declaration does not declare anything
.

MessageId=65
Severity=Warning
Facility=System
SymbolicName=exp_semicolon
Language=English
expected a ";"
.

MessageId=66
Severity=Warning
Facility=System
SymbolicName=enum_value_out_of_int_range
Language=English
enumeration value is out of "int" range
.

MessageId=67
Severity=Warning
Facility=System
SymbolicName=exp_rbrace
Language=English
expected a "}"
.

MessageId=68
Severity=Warning
Facility=System
SymbolicName=integer_sign_change
Language=English
integer conversion resulted in a change of sign
.

MessageId=69
Severity=Warning
Facility=System
SymbolicName=integer_truncated
Language=English
integer conversion resulted in truncation
.

MessageId=70
Severity=Warning
Facility=System
SymbolicName=incomplete_type_not_allowed
Language=English
incomplete type is not allowed
.

MessageId=71
Severity=Warning
Facility=System
SymbolicName=sizeof_bit_field
Language=English
operand of sizeof may not be a bit field
.

MessageId=72
Severity=Warning
Facility=System
SymbolicName=tag_72
Language=English
ec_removed_72
.

MessageId=73
Severity=Warning
Facility=System
SymbolicName=tag_73
Language=English
ec_removed_73
.

MessageId=74
Severity=Warning
Facility=System
SymbolicName=tag_74
Language=English
ec_removed_74
.

MessageId=75
Severity=Warning
Facility=System
SymbolicName=bad_indirection_operand
Language=English
operand of "*" must be a pointer
.

MessageId=76
Severity=Warning
Facility=System
SymbolicName=empty_macro_argument
Language=English
argument to macro is empty
.

MessageId=77
Severity=Warning
Facility=System
SymbolicName=missing_decl_specifiers
Language=English
this declaration has no storage class or type specifier
.

MessageId=78
Severity=Warning
Facility=System
SymbolicName=initializer_in_param
Language=English
a parameter declaration may not have an initializer
.

MessageId=79
Severity=Warning
Facility=System
SymbolicName=exp_type_specifier
Language=English
expected a type specifier
.

MessageId=80
Severity=Warning
Facility=System
SymbolicName=storage_class_not_allowed
Language=English
a storage class may not be specified here
.

MessageId=81
Severity=Warning
Facility=System
SymbolicName=mult_storage_classes
Language=English
more than one storage class may not be specified
.

MessageId=82
Severity=Warning
Facility=System
SymbolicName=storage_class_not_first
Language=English
storage class is not first
.

MessageId=83
Severity=Warning
Facility=System
SymbolicName=dupl_type_qualifier
Language=English
type qualifier specified more than once
.

MessageId=84
Severity=Warning
Facility=System
SymbolicName=bad_combination_of_type_specifiers
Language=English
invalid combination of type specifiers
.

MessageId=85
Severity=Warning
Facility=System
SymbolicName=bad_param_storage_class
Language=English
invalid storage class for a parameter
.

MessageId=86
Severity=Warning
Facility=System
SymbolicName=bad_function_storage_class
Language=English
invalid storage class for a function
.

MessageId=87
Severity=Warning
Facility=System
SymbolicName=type_specifier_not_allowed
Language=English
a type specifier may not be used here
.

MessageId=88
Severity=Warning
Facility=System
SymbolicName=array_of_function
Language=English
array of functions is not allowed
.

MessageId=89
Severity=Warning
Facility=System
SymbolicName=array_of_void
Language=English
array of void is not allowed
.

MessageId=90
Severity=Warning
Facility=System
SymbolicName=function_returning_function
Language=English
function returning function is not allowed
.

MessageId=91
Severity=Warning
Facility=System
SymbolicName=function_returning_array
Language=English
function returning array is not allowed
.

MessageId=92
Severity=Warning
Facility=System
SymbolicName=param_id_list_needs_function_def
Language=English
identifier-list parameters may only be used in a function definition
.

MessageId=93
Severity=Warning
Facility=System
SymbolicName=function_type_must_come_from_declarator
Language=English
function type may not come from a typedef
.

MessageId=94
Severity=Warning
Facility=System
SymbolicName=array_size_must_be_positive
Language=English
the size of an array must be greater than zero
.

MessageId=95
Severity=Warning
Facility=System
SymbolicName=array_size_too_large
Language=English
array is too large
.

MessageId=96
Severity=Warning
Facility=System
SymbolicName=empty_translation_unit
Language=English
a translation unit must contain at least one declaration
.

MessageId=97
Severity=Warning
Facility=System
SymbolicName=bad_function_return_type
Language=English
a function may not return a value of this type
.

MessageId=98
Severity=Warning
Facility=System
SymbolicName=bad_array_element_type
Language=English
an array may not have elements of this type
.

MessageId=99
Severity=Warning
Facility=System
SymbolicName=decl_should_be_of_param
Language=English
a declaration here must declare a parameter
.

MessageId=100
Severity=Warning
Facility=System
SymbolicName=dupl_param_name
Language=English
duplicate parameter name
.

MessageId=101
Severity=Warning
Facility=System
SymbolicName=id_already_declared
Language=English
%%sq has already been declared in the current scope
.

MessageId=102
Severity=Warning
Facility=System
SymbolicName=nonstd_forward_decl_enum
Language=English
forward declaration of enum type is nonstandard
.

MessageId=103
Severity=Warning
Facility=System
SymbolicName=class_too_large
Language=English
class is too large
.

MessageId=104
Severity=Warning
Facility=System
SymbolicName=struct_too_large
Language=English
struct or union is too large
.

MessageId=105
Severity=Warning
Facility=System
SymbolicName=bad_bit_field_size
Language=English
invalid size for bit field
.

MessageId=106
Severity=Warning
Facility=System
SymbolicName=bad_bit_field_type
Language=English
invalid type for a bit field
.

MessageId=107
Severity=Warning
Facility=System
SymbolicName=zero_length_bit_field_must_be_unnamed
Language=English
zero-length bit field must be unnamed
.

MessageId=108
Severity=Warning
Facility=System
SymbolicName=signed_one_bit_field
Language=English
implicitly-signed bit field of length 1
.

MessageId=109
Severity=Warning
Facility=System
SymbolicName=expr_not_ptr_to_function
Language=English
expression must have (pointer-to-) function type
.

MessageId=110
Severity=Warning
Facility=System
SymbolicName=exp_definition_of_tag
Language=English
expected either a definition or a tag name
.

MessageId=111
Severity=Warning
Facility=System
SymbolicName=code_is_unreachable
Language=English
statement is unreachable
.

MessageId=112
Severity=Warning
Facility=System
SymbolicName=exp_while
Language=English
expected "while"
.

MessageId=113
Severity=Warning
Facility=System
SymbolicName=tag_113
Language=English
ec_removed_113
.

MessageId=114
Severity=Warning
Facility=System
SymbolicName=never_defined
Language=English
%%n was referenced but not defined
.

MessageId=115
Severity=Warning
Facility=System
SymbolicName=continue_must_be_in_loop
Language=English
a continue statement may only be used within a loop
.

MessageId=116
Severity=Warning
Facility=System
SymbolicName=break_must_be_in_loop_or_switch
Language=English
a break statement may only be used within a loop or switch
.

MessageId=117
Severity=Warning
Facility=System
SymbolicName=no_value_returned_in_non_void_function
Language=English
non-void %%n should return a value
.

MessageId=118
Severity=Warning
Facility=System
SymbolicName=value_returned_in_void_function
Language=English
a void function may not return a value
.

MessageId=119
Severity=Warning
Facility=System
SymbolicName=cast_to_bad_type
Language=English
cast to type %%t is not allowed
.

MessageId=120
Severity=Warning
Facility=System
SymbolicName=bad_return_value_type
Language=English
return value type does not match the function type
.

MessageId=121
Severity=Warning
Facility=System
SymbolicName=case_label_must_be_in_switch
Language=English
a case label may only be used within a switch
.

MessageId=122
Severity=Warning
Facility=System
SymbolicName=default_label_must_be_in_switch
Language=English
a default label may only be used within a switch
.

MessageId=123
Severity=Warning
Facility=System
SymbolicName=case_label_appears_more_than_once
Language=English
case label value has already appeared in this switch
.

MessageId=124
Severity=Warning
Facility=System
SymbolicName=default_label_appears_more_than_once
Language=English
default label has already appeared in this switch
.

MessageId=125
Severity=Warning
Facility=System
SymbolicName=exp_lparen
Language=English
expected a "("
.

MessageId=126
Severity=Warning
Facility=System
SymbolicName=expr_not_an_lvalue
Language=English
expression must be an lvalue
.

MessageId=127
Severity=Warning
Facility=System
SymbolicName=exp_statement
Language=English
expected a statement
.

MessageId=128
Severity=Warning
Facility=System
SymbolicName=loop_not_reachable
Language=English
loop is not reachable from preceding code
.

MessageId=129
Severity=Warning
Facility=System
SymbolicName=block_scope_function_must_be_extern
Language=English
a block-scope function may only have extern storage class
.

MessageId=130
Severity=Warning
Facility=System
SymbolicName=exp_lbrace
Language=English
expected a "{"
.

MessageId=131
Severity=Warning
Facility=System
SymbolicName=expr_not_ptr_to_class
Language=English
expression must have pointer-to-class type
.

MessageId=132
Severity=Warning
Facility=System
SymbolicName=expr_not_ptr_to_struct_or_union
Language=English
expression must have pointer-to-struct-or-union type
.

MessageId=133
Severity=Warning
Facility=System
SymbolicName=exp_member_name
Language=English
expected a member name
.

MessageId=134
Severity=Warning
Facility=System
SymbolicName=exp_field_name
Language=English
expected a field name
.

MessageId=135
Severity=Warning
Facility=System
SymbolicName=not_a_member
Language=English
%%n has no member %%sq
.

MessageId=136
Severity=Warning
Facility=System
SymbolicName=not_a_field
Language=English
%%n has no field %%sq
.

MessageId=137
Severity=Warning
Facility=System
SymbolicName=expr_not_a_modifiable_lvalue
Language=English
expression must be a modifiable lvalue
.

MessageId=138
Severity=Warning
Facility=System
SymbolicName=address_of_register_variable
Language=English
taking the address of a register variable is not allowed
.

MessageId=139
Severity=Warning
Facility=System
SymbolicName=address_of_bit_field
Language=English
taking the address of a bit field is not allowed
.

MessageId=140
Severity=Warning
Facility=System
SymbolicName=too_many_arguments
Language=English
too many arguments in function call
.

MessageId=141
Severity=Warning
Facility=System
SymbolicName=all_proto_params_must_be_named
Language=English
unnamed prototyped parameters not allowed when body is present
.

MessageId=142
Severity=Warning
Facility=System
SymbolicName=expr_not_pointer_to_object
Language=English
expression must have pointer-to-object type
.

MessageId=143
Severity=Warning
Facility=System
SymbolicName=program_too_large
Language=English
program too large or complicated to compile
.

MessageId=144
Severity=Warning
Facility=System
SymbolicName=bad_initializer_type
Language=English
a value of type %%t1 cannot be used to initialize an entity of type %%t2
.

MessageId=145
Severity=Warning
Facility=System
SymbolicName=cannot_initialize
Language=English
%%n may not be initialized
.

MessageId=146
Severity=Warning
Facility=System
SymbolicName=too_many_initializer_values
Language=English
too many initializer values
.

MessageId=147
Severity=Warning
Facility=System
SymbolicName=not_compatible_with_previous_decl
Language=English
declaration is incompatible with %%nfd
.

MessageId=148
Severity=Warning
Facility=System
SymbolicName=already_initialized
Language=English
%%n has already been initialized
.

MessageId=149
Severity=Warning
Facility=System
SymbolicName=bad_file_scope_storage_class
Language=English
a global-scope declaration may not have this storage class
.

MessageId=150
Severity=Warning
Facility=System
SymbolicName=type_cannot_be_param_name
Language=English
a type name may not be redeclared as a parameter
.

MessageId=151
Severity=Warning
Facility=System
SymbolicName=typedef_cannot_be_param_name
Language=English
a typedef name may not be redeclared as a parameter
.

MessageId=152
Severity=Warning
Facility=System
SymbolicName=non_zero_int_conv_to_pointer
Language=English
conversion of nonzero integer to pointer
.

MessageId=153
Severity=Warning
Facility=System
SymbolicName=expr_not_class
Language=English
expression must have class type
.

MessageId=154
Severity=Warning
Facility=System
SymbolicName=expr_not_struct_or_union
Language=English
expression must have struct or union type
.

MessageId=155
Severity=Warning
Facility=System
SymbolicName=old_fashioned_assignment_operator
Language=English
old-fashioned assignment operator
.

MessageId=156
Severity=Warning
Facility=System
SymbolicName=old_fashioned_initializer
Language=English
old-fashioned initializer
.

MessageId=157
Severity=Warning
Facility=System
SymbolicName=expr_not_integral_constant
Language=English
expression must be an integral constant expression
.

MessageId=158
Severity=Warning
Facility=System
SymbolicName=expr_not_an_lvalue_or_function_designator
Language=English
expression must be an lvalue or a function designator
.

MessageId=159
Severity=Warning
Facility=System
SymbolicName=decl_incompatible_with_previous_use
Language=English
declaration is incompatible with previous %%nod
.

MessageId=160
Severity=Warning
Facility=System
SymbolicName=external_name_clash
Language=English
name conflicts with previously used external name %%sq
.

MessageId=161
Severity=Warning
Facility=System
SymbolicName=unrecognized_pragma
Language=English
unrecognized #pragma
.

MessageId=162
Severity=Warning
Facility=System
SymbolicName=tag_162
Language=English
ec_removed_162
.

MessageId=163
Severity=Warning
Facility=System
SymbolicName=cannot_open_temp_file
Language=English
could not open temporary file %%sq
.

MessageId=164
Severity=Warning
Facility=System
SymbolicName=temp_file_dir_name_too_long
Language=English
name of directory for temporary files is too long (%%sq)
.

MessageId=165
Severity=Warning
Facility=System
SymbolicName=too_few_arguments
Language=English
too few arguments in function call
.

MessageId=166
Severity=Warning
Facility=System
SymbolicName=bad_float_constant
Language=English
invalid floating constant
.

MessageId=167
Severity=Warning
Facility=System
SymbolicName=incompatible_param
Language=English
argument of type %%t1 is incompatible with parameter of type %%t2
.

MessageId=168
Severity=Warning
Facility=System
SymbolicName=function_type_not_allowed
Language=English
a function type is not allowed here
.

MessageId=169
Severity=Warning
Facility=System
SymbolicName=exp_declaration
Language=English
expected a declaration
.

MessageId=170
Severity=Warning
Facility=System
SymbolicName=pointer_outside_base_object
Language=English
pointer points outside of underlying object
.

MessageId=171
Severity=Warning
Facility=System
SymbolicName=bad_cast
Language=English
invalid type conversion: %%t1 to %%t2
.

MessageId=172
Severity=Warning
Facility=System
SymbolicName=linkage_conflict
Language=English
external/internal linkage conflict with previous declaration
.

MessageId=173
Severity=Warning
Facility=System
SymbolicName=float_to_integer_conversion
Language=English
floating-point value does not fit in required integral type
.

MessageId=174
Severity=Warning
Facility=System
SymbolicName=expr_has_no_effect
Language=English
expression has no effect
.

MessageId=175
Severity=Warning
Facility=System
SymbolicName=subscript_out_of_range
Language=English
subscript out of range
.

MessageId=176
Severity=Warning
Facility=System
SymbolicName=tag_176
Language=English
ec_removed_176
.

MessageId=177
Severity=Warning
Facility=System
SymbolicName=declared_but_not_referenced
Language=English
%%n was declared but never referenced
.

MessageId=178
Severity=Warning
Facility=System
SymbolicName=pcc_address_of_array
Language=English
"&" applied to an array has no effect
.

MessageId=179
Severity=Warning
Facility=System
SymbolicName=mod_by_zero
Language=English
right operand of "%%%%" is zero
.

MessageId=180
Severity=Warning
Facility=System
SymbolicName=old_style_incompatible_param
Language=English
argument is incompatible with formal parameter
.

MessageId=181
Severity=Warning
Facility=System
SymbolicName=printf_arg_mismatch
Language=English
argument is incompatible with corresponding format string conversion
.

MessageId=182
Severity=Warning
Facility=System
SymbolicName=empty_include_search_path
Language=English
could not open source file %%sq (no directories in search list)
.

MessageId=183
Severity=Warning
Facility=System
SymbolicName=cast_not_integral
Language=English
type of cast must be integral
.

MessageId=184
Severity=Warning
Facility=System
SymbolicName=cast_not_scalar
Language=English
type of cast must be arithmetic or pointer
.

MessageId=185
Severity=Warning
Facility=System
SymbolicName=initialization_not_reachable
Language=English
dynamic initialization in unreachable code
.

MessageId=186
Severity=Warning
Facility=System
SymbolicName=unsigned_compare_with_zero
Language=English
pointless comparison of unsigned integer with zero
.

MessageId=187
Severity=Warning
Facility=System
SymbolicName=assign_where_compare_meant
Language=English
use of "=" where "==" may have been intended
.

MessageId=188
Severity=Warning
Facility=System
SymbolicName=mixed_enum_type
Language=English
enumerated type mixed with another type
.

MessageId=189
Severity=Warning
Facility=System
SymbolicName=file_write_error
Language=English
error while writing %%s file
.

MessageId=190
Severity=Warning
Facility=System
SymbolicName=bad_il_file
Language=English
invalid intermediate language file
.

MessageId=191
Severity=Warning
Facility=System
SymbolicName=cast_to_qualified_type
Language=English
type qualifier is meaningless on cast type
.

MessageId=192
Severity=Warning
Facility=System
SymbolicName=unrecognized_char_escape
Language=English
unrecognized character escape sequence
.

MessageId=193
Severity=Warning
Facility=System
SymbolicName=undefined_preproc_id
Language=English
zero used for undefined preprocessing identifier
.

MessageId=194
Severity=Warning
Facility=System
SymbolicName=exp_asm_string
Language=English
expected an asm string
.

MessageId=195
Severity=Warning
Facility=System
SymbolicName=asm_func_must_be_prototyped
Language=English
an asm function must be prototyped
.

MessageId=196
Severity=Warning
Facility=System
SymbolicName=bad_asm_func_ellipsis
Language=English
an asm function may not have an ellipsis
.

MessageId=197
Severity=Warning
Facility=System
SymbolicName=tag_197
Language=English
ec_removed_197
.

MessageId=198
Severity=Warning
Facility=System
SymbolicName=asm_func_has_storage_class
Language=English
an asm function may not have a storage class
.

MessageId=199
Severity=Warning
Facility=System
SymbolicName=tag_199
Language=English
ec_removed_199
.

MessageId=200
Severity=Warning
Facility=System
SymbolicName=tag_200
Language=English
ec_removed_200
.

MessageId=201
Severity=Warning
Facility=System
SymbolicName=tag_201
Language=English
ec_removed_201
.

MessageId=202
Severity=Warning
Facility=System
SymbolicName=asm_specifier_conflicts_with_prev
Language=English
invalid combination of asm control specifiers
.

MessageId=203
Severity=Warning
Facility=System
SymbolicName=extra_text_on_asm_control_line
Language=English
extra text after expected end of asm control line
.

MessageId=204
Severity=Warning
Facility=System
SymbolicName=tag_204
Language=English
ec_removed_204
.

MessageId=205
Severity=Warning
Facility=System
SymbolicName=asm_name_already_defined
Language=English
this asm name is already defined
.

MessageId=206
Severity=Warning
Facility=System
SymbolicName=tag_206
Language=English
ec_removed_206
.

MessageId=207
Severity=Warning
Facility=System
SymbolicName=tag_207
Language=English
ec_removed_207
.

MessageId=208
Severity=Warning
Facility=System
SymbolicName=exp_asm_type
Language=English
expected an asm type specification
.

MessageId=209
Severity=Warning
Facility=System
SymbolicName=tag_209
Language=English
ec_removed_209
.

MessageId=210
Severity=Warning
Facility=System
SymbolicName=tag_210
Language=English
ec_removed_210
.

MessageId=211
Severity=Warning
Facility=System
SymbolicName=tag_211
Language=English
ec_removed_211
.

MessageId=212
Severity=Warning
Facility=System
SymbolicName=tag_212
Language=English
ec_removed_212
.

MessageId=213
Severity=Warning
Facility=System
SymbolicName=tag_213
Language=English
ec_removed_213
.

MessageId=214
Severity=Warning
Facility=System
SymbolicName=tag_214
Language=English
ec_removed_214
.

MessageId=215
Severity=Warning
Facility=System
SymbolicName=tag_215
Language=English
ec_removed_215
.

MessageId=216
Severity=Warning
Facility=System
SymbolicName=tag_216
Language=English
ec_removed_216
.

MessageId=217
Severity=Warning
Facility=System
SymbolicName=tag_217
Language=English
ec_removed_217
.

MessageId=218
Severity=Warning
Facility=System
SymbolicName=tag_218
Language=English
ec_removed_218
.

MessageId=219
Severity=Warning
Facility=System
SymbolicName=no_asm_func_parm_decl
Language=English
old-style parameter declarations prohibited on asm functions
.

MessageId=220
Severity=Warning
Facility=System
SymbolicName=ignore_asm_func_ellipsis
Language=English
an ellipsis associated with an asm macro is ignored
.

MessageId=221
Severity=Warning
Facility=System
SymbolicName=exp_asm_storage_specifier
Language=English
expected an asm storage mode specifier
.

MessageId=222
Severity=Warning
Facility=System
SymbolicName=exp_asm_param
Language=English
expected an asm formal parameter
.

MessageId=223
Severity=Warning
Facility=System
SymbolicName=untyped_param_reference
Language=English
asm macro parameter not specified on storage mode line
.

MessageId=224
Severity=Warning
Facility=System
SymbolicName=left_brace_in_asm_function
Language=English
left brace unexpected in asm macro
.

MessageId=225
Severity=Warning
Facility=System
SymbolicName=right_brace_in_asm_function
Language=English
right brace unexpected in asm macro
.

MessageId=226
Severity=Warning
Facility=System
SymbolicName=asm_parm_must_be_basic
Language=English
asm macro parameter must have basic or pointer type
.

MessageId=227
Severity=Warning
Facility=System
SymbolicName=asm_bad_storage_specifier
Language=English
Invalid asm macro storage specifier: %%sq
.

MessageId=228
Severity=Warning
Facility=System
SymbolicName=inline_unmatched_end
Language=English
pragma has no corresponding begin
.

MessageId=229
Severity=Warning
Facility=System
SymbolicName=inline_begin_mismatch
Language=English
pragma does not match the corresponding begin at line %%s
.

MessageId=230
Severity=Warning
Facility=System
SymbolicName=inline_mod_name_mismatch
Language=English
name does not match the corresponding begin at line %%s
.

MessageId=231
Severity=Warning
Facility=System
SymbolicName=exp_assign_op
Language=English
expected a "="
.

MessageId=232
Severity=Warning
Facility=System
SymbolicName=paren_mismatch
Language=English
parentheses do not match
.

MessageId=233
Severity=Warning
Facility=System
SymbolicName=bad_comment_type
Language=English
unknown comment record type
.

MessageId=234
Severity=Warning
Facility=System
SymbolicName=no_16_bit_convention
Language=English
16-bit calling conventions are not supported
.

MessageId=235
Severity=Warning
Facility=System
SymbolicName=bad_call_convention
Language=English
invalid calling convention
.

MessageId=236
Severity=Warning
Facility=System
SymbolicName=exp_string
Language=English
expected a string
.

MessageId=237
Severity=Warning
Facility=System
SymbolicName=bad_alignment_constraint
Language=English
invalid alignment constraint
.

MessageId=238
Severity=Warning
Facility=System
SymbolicName=pack_bad_code
Language=English
use of the pack feature can cause mis-aligned accesses and result in inefficient code
.

MessageId=239
Severity=Warning
Facility=System
SymbolicName=floating_underflow
Language=English
floating point underflow
.

MessageId=240
Severity=Warning
Facility=System
SymbolicName=nonstd_varargs
Language=English
omission of ellipsis not a standard feature
.

MessageId=241
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_argument_file
Language=English
cannot open argument file 
.

MessageId=242
Severity=Warning
Facility=System
SymbolicName=cl_unrecognized_extension
Language=English
unrecognized extension option 
.

MessageId=243
Severity=Warning
Facility=System
SymbolicName=cl_asm_file_must_be_specified
Language=English
asm output file name must be specified if input is 
.

MessageId=244
Severity=Warning
Facility=System
SymbolicName=cl_invalid_assertion
Language=English
invalid assertion: 
.

MessageId=245
Severity=Warning
Facility=System
SymbolicName=cl_invalid_asm_output_file
Language=English
invalid asm output file 
.

MessageId=246
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_asm_output_file
Language=English
cannot open asm output file 
.

MessageId=247
Severity=Warning
Facility=System
SymbolicName=asm_bad_type_operand
Language=English
invalid operand for assembly type operator
.

MessageId=248
Severity=Warning
Facility=System
SymbolicName=asm_too_many_replacements
Language=English
too many C symbol replacements in an assembly language instruction
.

MessageId=249
Severity=Warning
Facility=System
SymbolicName=bad_asm_constant
Language=English
invalid constant in assembly language instruction
.

MessageId=250
Severity=Warning
Facility=System
SymbolicName=exp_on_off
Language=English
"on" or "off" expected
.

MessageId=251
Severity=Warning
Facility=System
SymbolicName=no_null_string
Language=English
invalid use of null string; pragma ignored
.

MessageId=252
Severity=Warning
Facility=System
SymbolicName=exp_identifier_or_string
Language=English
expected an identifier or a string
.

MessageId=253
Severity=Warning
Facility=System
SymbolicName=init_seg_defined
Language=English
initialization segment already defined
.

MessageId=254
Severity=Warning
Facility=System
SymbolicName=bad_init_seg_kind
Language=English
invalid initialization segment kind
.

MessageId=255
Severity=Warning
Facility=System
SymbolicName=alloc_text_defined
Language=English
text segment already specified
.

MessageId=256
Severity=Warning
Facility=System
SymbolicName=exp_function_name
Language=English
expected a function name
.

MessageId=257
Severity=Warning
Facility=System
SymbolicName=exp_struct_ref
Language=English
expected a structure reference
.

MessageId=258
Severity=Warning
Facility=System
SymbolicName=exp_class_tag_name
Language=English
expected a class type tag name
.

MessageId=259
Severity=Warning
Facility=System
SymbolicName=no_rtti_support
Language=English
run-time support for RTTI is disabled
.

MessageId=260
Severity=Warning
Facility=System
SymbolicName=not_this_asm
Language=English
%%s not supported in this environment
.

MessageId=261
Severity=Warning
Facility=System
SymbolicName=bad_dll_linkage
Language=English
inconsistent dll linkage
.

MessageId=262
Severity=Warning
Facility=System
SymbolicName=file_delete_error
Language=English
error while deleting file %%sq
.

MessageId=263
Severity=Warning
Facility=System
SymbolicName=integer_to_float_conversion
Language=English
integral value does not fit in required floating-point type
.

MessageId=264
Severity=Warning
Facility=System
SymbolicName=float_to_float_conversion
Language=English
floating-point value does not fit in required floating-point type
.

MessageId=265
Severity=Warning
Facility=System
SymbolicName=bad_float_operation_result
Language=English
floating-point operation result is out of range
.

MessageId=266
Severity=Warning
Facility=System
SymbolicName=implicit_func_decl
Language=English
function declared implicitly
.

MessageId=267
Severity=Warning
Facility=System
SymbolicName=too_few_printf_args
Language=English
the format string requires additional arguments
.

MessageId=268
Severity=Warning
Facility=System
SymbolicName=too_many_printf_args
Language=English
the format string ends before this argument
.

MessageId=269
Severity=Warning
Facility=System
SymbolicName=bad_printf_format_string
Language=English
invalid format string conversion
.

MessageId=270
Severity=Warning
Facility=System
SymbolicName=macro_recursion
Language=English
macro recursion
.

MessageId=271
Severity=Warning
Facility=System
SymbolicName=nonstd_extra_comma
Language=English
trailing comma is nonstandard
.

MessageId=272
Severity=Warning
Facility=System
SymbolicName=enum_bit_field_too_small
Language=English
bit field cannot contain all values of the enumerated type
.

MessageId=273
Severity=Warning
Facility=System
SymbolicName=nonstd_bit_field_type
Language=English
nonstandard type for a bit field
.

MessageId=274
Severity=Warning
Facility=System
SymbolicName=decl_in_prototype_scope
Language=English
declaration is not visible outside of function
.

MessageId=275
Severity=Warning
Facility=System
SymbolicName=decl_of_void_ignored
Language=English
old-fashioned typedef of "void" ignored
.

MessageId=276
Severity=Warning
Facility=System
SymbolicName=old_fashioned_field_selection
Language=English
left operand is not a struct or union containing this field
.

MessageId=277
Severity=Warning
Facility=System
SymbolicName=old_fashioned_ptr_field_selection
Language=English
pointer does not point to struct or union containing this field
.

MessageId=278
Severity=Warning
Facility=System
SymbolicName=var_retained_incomp_type
Language=English
variable %%sq was declared with a never-completed type
.

MessageId=279
Severity=Warning
Facility=System
SymbolicName=boolean_controlling_expr_is_constant
Language=English
controlling expression is constant
.

MessageId=280
Severity=Warning
Facility=System
SymbolicName=switch_selector_expr_is_constant
Language=English
selector expression is constant
.

MessageId=281
Severity=Warning
Facility=System
SymbolicName=bad_param_specifier
Language=English
invalid specifier on a parameter
.

MessageId=282
Severity=Warning
Facility=System
SymbolicName=bad_specifier_outside_class_decl
Language=English
invalid specifier outside a class declaration
.

MessageId=283
Severity=Warning
Facility=System
SymbolicName=dupl_decl_specifier
Language=English
duplicate specifier in declaration
.

MessageId=284
Severity=Warning
Facility=System
SymbolicName=base_class_not_allowed_for_union
Language=English
a union is not allowed to have a base class
.

MessageId=285
Severity=Warning
Facility=System
SymbolicName=access_already_specified
Language=English
multiple access control specifiers are not allowed
.

MessageId=286
Severity=Warning
Facility=System
SymbolicName=missing_class_definition
Language=English
class or struct definition is missing
.

MessageId=287
Severity=Warning
Facility=System
SymbolicName=name_not_member_of_class_or_base_classes
Language=English
qualified name is not a member of class %%t or its base classes
.

MessageId=288
Severity=Warning
Facility=System
SymbolicName=member_ref_requires_object
Language=English
a nonstatic member reference must be relative to a specific object
.

MessageId=289
Severity=Warning
Facility=System
SymbolicName=nonstatic_member_def_not_allowed
Language=English
a nonstatic data member may not be defined outside its class
.

MessageId=290
Severity=Warning
Facility=System
SymbolicName=already_defined
Language=English
%%n has already been defined
.

MessageId=291
Severity=Warning
Facility=System
SymbolicName=pointer_to_reference
Language=English
pointer to reference is not allowed
.

MessageId=292
Severity=Warning
Facility=System
SymbolicName=reference_to_reference
Language=English
reference to reference is not allowed
.

MessageId=293
Severity=Warning
Facility=System
SymbolicName=reference_to_void
Language=English
reference to void is not allowed
.

MessageId=294
Severity=Warning
Facility=System
SymbolicName=array_of_reference
Language=English
array of reference is not allowed
.

MessageId=295
Severity=Warning
Facility=System
SymbolicName=missing_initializer_on_reference
Language=English
reference %%n requires an initializer
.

MessageId=296
Severity=Warning
Facility=System
SymbolicName=exp_comma
Language=English
expected a ","
.

MessageId=297
Severity=Warning
Facility=System
SymbolicName=type_identifier_not_allowed
Language=English
type name is not allowed
.

MessageId=298
Severity=Warning
Facility=System
SymbolicName=type_definition_not_allowed
Language=English
type definition is not allowed
.

MessageId=299
Severity=Warning
Facility=System
SymbolicName=bad_type_name_redeclaration
Language=English
invalid redeclaration of type name %%nod
.

MessageId=300
Severity=Warning
Facility=System
SymbolicName=missing_initializer_on_const
Language=English
const %%n requires an initializer
.

MessageId=301
Severity=Warning
Facility=System
SymbolicName=this_used_incorrectly
Language=English
"this" may only be used inside a nonstatic member function
.

MessageId=302
Severity=Warning
Facility=System
SymbolicName=constant_value_not_known
Language=English
constant value is not known
.

MessageId=303
Severity=Warning
Facility=System
SymbolicName=missing_type_specifier
Language=English
explicit type is missing ("int" assumed)
.

MessageId=304
Severity=Warning
Facility=System
SymbolicName=missing_access_specifier
Language=English
access control not specified (%%sq by default)
.

MessageId=305
Severity=Warning
Facility=System
SymbolicName=not_a_class_or_struct_name
Language=English
not a class or struct name
.

MessageId=306
Severity=Warning
Facility=System
SymbolicName=dupl_base_class_name
Language=English
duplicate base class name
.

MessageId=307
Severity=Warning
Facility=System
SymbolicName=bad_base_class
Language=English
invalid base class
.

MessageId=308
Severity=Warning
Facility=System
SymbolicName=no_access_to_name
Language=English
%%n is inaccessible
.

MessageId=309
Severity=Warning
Facility=System
SymbolicName=ambiguous_name
Language=English
%%no is ambiguous
.

MessageId=310
Severity=Warning
Facility=System
SymbolicName=old_style_parameter_list
Language=English
old-style parameter list (anachronism)
.

MessageId=311
Severity=Warning
Facility=System
SymbolicName=declaration_after_statements
Language=English
declaration may not appear after executable statement in block
.

MessageId=312
Severity=Warning
Facility=System
SymbolicName=inaccessible_base_class
Language=English
conversion to inaccessible base class %%t is not allowed
.

MessageId=313
Severity=Warning
Facility=System
SymbolicName=tag_313
Language=English
ec_removed_313
.

MessageId=314
Severity=Warning
Facility=System
SymbolicName=tag_314
Language=English
ec_removed_314
.

MessageId=315
Severity=Warning
Facility=System
SymbolicName=tag_315
Language=English
ec_removed_315
.

MessageId=316
Severity=Warning
Facility=System
SymbolicName=tag_316
Language=English
ec_removed_316
.

MessageId=317
Severity=Warning
Facility=System
SymbolicName=improperly_terminated_macro_call
Language=English
improperly terminated macro invocation
.

MessageId=318
Severity=Warning
Facility=System
SymbolicName=tag_318
Language=English
ec_removed_318
.

MessageId=319
Severity=Warning
Facility=System
SymbolicName=id_must_be_class_or_namespace_name
Language=English
name followed by "::" must be a class or namespace name
.

MessageId=320
Severity=Warning
Facility=System
SymbolicName=bad_friend_decl
Language=English
invalid friend declaration
.

MessageId=321
Severity=Warning
Facility=System
SymbolicName=value_returned_in_constructor
Language=English
a constructor or destructor may not return a value
.

MessageId=322
Severity=Warning
Facility=System
SymbolicName=bad_destructor_decl
Language=English
invalid destructor declaration
.

MessageId=323
Severity=Warning
Facility=System
SymbolicName=class_and_member_name_conflict
Language=English
declaration of a member with the same name as its class
.

MessageId=324
Severity=Warning
Facility=System
SymbolicName=global_qualifier_not_allowed
Language=English
global-scope qualifier (leading "::") is not allowed
.

MessageId=325
Severity=Warning
Facility=System
SymbolicName=name_not_found_in_file_scope
Language=English
the global scope has no %%sq
.

MessageId=326
Severity=Warning
Facility=System
SymbolicName=qualified_name_not_allowed
Language=English
qualified name is not allowed
.

MessageId=327
Severity=Warning
Facility=System
SymbolicName=null_reference
Language=English
NULL reference is not allowed
.

MessageId=328
Severity=Warning
Facility=System
SymbolicName=brace_initialization_not_allowed
Language=English
initialization with "{...}" is not allowed for object of type %%t
.

MessageId=329
Severity=Warning
Facility=System
SymbolicName=ambiguous_base_class
Language=English
base class %%t is ambiguous
.

MessageId=330
Severity=Warning
Facility=System
SymbolicName=ambiguous_derived_class
Language=English
derived class %%t1 contains more than one instance of class %%t2
.

MessageId=331
Severity=Warning
Facility=System
SymbolicName=derived_class_from_virtual_base
Language=English
cannot convert pointer to base class %%t2 to pointer to derived class %%t1 -- base class is virtual
.

MessageId=332
Severity=Warning
Facility=System
SymbolicName=no_matching_constructor
Language=English
no instance of constructor %%no matches the argument list
.

MessageId=333
Severity=Warning
Facility=System
SymbolicName=ambiguous_copy_constructor
Language=English
copy constructor for class %%t is ambiguous
.

MessageId=334
Severity=Warning
Facility=System
SymbolicName=no_default_constructor
Language=English
no default constructor exists for class %%t
.

MessageId=335
Severity=Warning
Facility=System
SymbolicName=not_a_field_or_base_class
Language=English
%%sq is not a nonstatic data member or base class of class %%t
.

MessageId=336
Severity=Warning
Facility=System
SymbolicName=indirect_nonvirtual_base_class_not_allowed
Language=English
indirect nonvirtual base class is not allowed
.

MessageId=337
Severity=Warning
Facility=System
SymbolicName=bad_union_field
Language=English
invalid union member -- class %%t has a disallowed member function
.

MessageId=338
Severity=Warning
Facility=System
SymbolicName=tag_338
Language=English
ec_removed_338
.

MessageId=339
Severity=Warning
Facility=System
SymbolicName=bad_rvalue_array
Language=English
invalid use of non-lvalue array
.

MessageId=340
Severity=Warning
Facility=System
SymbolicName=exp_operator
Language=English
expected an operator
.

MessageId=341
Severity=Warning
Facility=System
SymbolicName=inherited_member_not_allowed
Language=English
inherited member is not allowed
.

MessageId=342
Severity=Warning
Facility=System
SymbolicName=indeterminate_overloaded_function
Language=English
cannot determine which instance of %%n is intended
.

MessageId=343
Severity=Warning
Facility=System
SymbolicName=bound_function_must_be_called
Language=English
a pointer to a bound function may only be used to call the function
.

MessageId=344
Severity=Warning
Facility=System
SymbolicName=duplicate_typedef
Language=English
typedef name has already been declared (with same type)
.

MessageId=345
Severity=Warning
Facility=System
SymbolicName=function_redefinition
Language=English
%%n has already been defined
.

MessageId=346
Severity=Warning
Facility=System
SymbolicName=tag_346
Language=English
ec_removed_346
.

MessageId=347
Severity=Warning
Facility=System
SymbolicName=no_matching_function
Language=English
no instance of %%n matches the argument list
.

MessageId=348
Severity=Warning
Facility=System
SymbolicName=type_def_not_allowed_in_func_type_decl
Language=English
type definition is not allowed in function return type declaration
.

MessageId=349
Severity=Warning
Facility=System
SymbolicName=default_arg_not_at_end
Language=English
default argument not at end of parameter list
.

MessageId=350
Severity=Warning
Facility=System
SymbolicName=default_arg_already_defined
Language=English
redefinition of default argument
.

MessageId=351
Severity=Warning
Facility=System
SymbolicName=ambiguous_overloaded_function
Language=English
more than one instance of %%n matches the argument list:
.

MessageId=352
Severity=Warning
Facility=System
SymbolicName=ambiguous_constructor
Language=English
more than one instance of constructor %%no matches the argument list:
.

MessageId=353
Severity=Warning
Facility=System
SymbolicName=bad_default_arg_type
Language=English
default argument of type %%t1 is incompatible with parameter of type %%t2
.

MessageId=354
Severity=Warning
Facility=System
SymbolicName=return_type_cannot_distinguish_functions
Language=English
cannot overload functions distinguished by return type alone
.

MessageId=355
Severity=Warning
Facility=System
SymbolicName=no_user_defined_conversion
Language=English
no suitable user-defined conversion from %%t1 to %%t2 exists
.

MessageId=356
Severity=Warning
Facility=System
SymbolicName=function_qualifier_not_allowed
Language=English
type qualifier is not allowed on this function
.

MessageId=357
Severity=Warning
Facility=System
SymbolicName=virtual_static_not_allowed
Language=English
only nonstatic member functions may be virtual
.

MessageId=358
Severity=Warning
Facility=System
SymbolicName=unqual_function_with_qual_object
Language=English
the object has cv-qualifiers that are not compatible with the member function
.

MessageId=359
Severity=Warning
Facility=System
SymbolicName=too_many_virtual_functions
Language=English
program too large to compile (too many virtual functions)
.

MessageId=360
Severity=Warning
Facility=System
SymbolicName=bad_return_type_on_virtual_function_override
Language=English
return type is not identical to nor covariant with return type %%t of overridden virtual function %%n
.

MessageId=361
Severity=Warning
Facility=System
SymbolicName=ambiguous_virtual_function_override
Language=English
override of virtual %%n is ambiguous
.

MessageId=362
Severity=Warning
Facility=System
SymbolicName=pure_specifier_on_nonvirtual_function
Language=English
pure specifier ("= 0") allowed only on virtual functions
.

MessageId=363
Severity=Warning
Facility=System
SymbolicName=bad_pure_specifier
Language=English
badly-formed pure specifier (only "= 0" is allowed)
.

MessageId=364
Severity=Warning
Facility=System
SymbolicName=bad_data_member_initialization
Language=English
data member initializer is not allowed
.

MessageId=365
Severity=Warning
Facility=System
SymbolicName=abstract_class_object_not_allowed
Language=English
object of abstract class type %%t is not allowed:
.

MessageId=366
Severity=Warning
Facility=System
SymbolicName=function_returning_abstract_class
Language=English
function returning abstract class %%t is not allowed:
.

MessageId=367
Severity=Warning
Facility=System
SymbolicName=duplicate_friend_decl
Language=English
duplicate friend declaration
.

MessageId=368
Severity=Warning
Facility=System
SymbolicName=inline_and_nonfunction
Language=English
inline specifier allowed on function declarations only
.

MessageId=369
Severity=Warning
Facility=System
SymbolicName=inline_not_allowed
Language=English
"inline" is not allowed
.

MessageId=370
Severity=Warning
Facility=System
SymbolicName=bad_storage_class_with_inline
Language=English
invalid storage class for an inline function
.

MessageId=371
Severity=Warning
Facility=System
SymbolicName=bad_member_storage_class
Language=English
invalid storage class for a class member
.

MessageId=372
Severity=Warning
Facility=System
SymbolicName=local_class_function_def_missing
Language=English
local class member %%n requires a definition
.

MessageId=373
Severity=Warning
Facility=System
SymbolicName=inaccessible_special_function
Language=English
%%nf is inaccessible
.

MessageId=374
Severity=Warning
Facility=System
SymbolicName=tag_374
Language=English
ec_removed_374
.

MessageId=375
Severity=Warning
Facility=System
SymbolicName=missing_const_copy_constructor
Language=English
class %%t has no copy constructor to copy a const object
.

MessageId=376
Severity=Warning
Facility=System
SymbolicName=definition_of_implicitly_declared_function
Language=English
defining an implicitly declared member function is not allowed
.

MessageId=377
Severity=Warning
Facility=System
SymbolicName=no_suitable_copy_constructor
Language=English
class %%t has no suitable copy constructor
.

MessageId=378
Severity=Warning
Facility=System
SymbolicName=linkage_specifier_not_allowed
Language=English
linkage specification is not allowed
.

MessageId=379
Severity=Warning
Facility=System
SymbolicName=bad_linkage_specifier
Language=English
unknown external linkage specification
.

MessageId=380
Severity=Warning
Facility=System
SymbolicName=incompatible_linkage_specifier
Language=English
linkage specification is incompatible with previous %%nod
.

MessageId=381
Severity=Warning
Facility=System
SymbolicName=overloaded_function_linkage
Language=English
more than one instance of overloaded function %%no has "C" linkage
.

MessageId=382
Severity=Warning
Facility=System
SymbolicName=ambiguous_default_constructor
Language=English
class %%t has more than one default constructor
.

MessageId=383
Severity=Warning
Facility=System
SymbolicName=temp_used_for_ref_init
Language=English
value copied to temporary, reference to temporary used
.

MessageId=384
Severity=Warning
Facility=System
SymbolicName=nonmember_operator_not_allowed
Language=English
"operator%%s" must be a member function
.

MessageId=385
Severity=Warning
Facility=System
SymbolicName=static_member_operator_not_allowed
Language=English
operator may not be a static member function
.

MessageId=386
Severity=Warning
Facility=System
SymbolicName=too_many_args_for_conversion
Language=English
no arguments allowed on user-defined conversion
.

MessageId=387
Severity=Warning
Facility=System
SymbolicName=too_many_args_for_operator
Language=English
too many parameters for this operator function
.

MessageId=388
Severity=Warning
Facility=System
SymbolicName=too_few_args_for_operator
Language=English
too few parameters for this operator function
.

MessageId=389
Severity=Warning
Facility=System
SymbolicName=no_params_with_class_type
Language=English
nonmember operator requires a parameter with class type
.

MessageId=390
Severity=Warning
Facility=System
SymbolicName=default_arg_expr_not_allowed
Language=English
default argument is not allowed
.

MessageId=391
Severity=Warning
Facility=System
SymbolicName=ambiguous_user_defined_conversion
Language=English
more than one user-defined conversion from %%t1 to %%t2 applies:
.

MessageId=392
Severity=Warning
Facility=System
SymbolicName=no_matching_operator_function
Language=English
no operator %%sq matches these operands
.

MessageId=393
Severity=Warning
Facility=System
SymbolicName=ambiguous_operator_function
Language=English
more than one operator %%sq matches these operands:
.

MessageId=394
Severity=Warning
Facility=System
SymbolicName=bad_arg_type_for_operator_new
Language=English
first parameter of allocation function must be of type "size_t"
.

MessageId=395
Severity=Warning
Facility=System
SymbolicName=bad_return_type_for_op_new
Language=English
allocation function requires "void *" return type
.

MessageId=396
Severity=Warning
Facility=System
SymbolicName=bad_return_type_for_op_delete
Language=English
deallocation function requires "void" return type
.

MessageId=397
Severity=Warning
Facility=System
SymbolicName=bad_first_arg_type_for_operator_delete
Language=English
first parameter of deallocation function must be of type "void *"
.

MessageId=398
Severity=Warning
Facility=System
SymbolicName=tag_398
Language=English
ec_removed_398
.

MessageId=399
Severity=Warning
Facility=System
SymbolicName=type_must_be_object_type
Language=English
type must be an object type
.

MessageId=400
Severity=Warning
Facility=System
SymbolicName=base_class_already_initialized
Language=English
base class %%t has already been initialized
.

MessageId=401
Severity=Warning
Facility=System
SymbolicName=base_class_init_anachronism
Language=English
base class name required -- %%t assumed (anachronism)
.

MessageId=402
Severity=Warning
Facility=System
SymbolicName=member_already_initialized
Language=English
%%n has already been initialized
.

MessageId=403
Severity=Warning
Facility=System
SymbolicName=missing_base_class_or_member_name
Language=English
name of member or base class is missing
.

MessageId=404
Severity=Warning
Facility=System
SymbolicName=assignment_to_this
Language=English
assignment to "this" (anachronism)
.

MessageId=405
Severity=Warning
Facility=System
SymbolicName=overload_anachronism
Language=English
"overload" keyword used (anachronism)
.

MessageId=406
Severity=Warning
Facility=System
SymbolicName=anon_union_member_access
Language=English
invalid anonymous union -- nonpublic member is not allowed
.

MessageId=407
Severity=Warning
Facility=System
SymbolicName=anon_union_member_function
Language=English
invalid anonymous union -- member function is not allowed
.

MessageId=408
Severity=Warning
Facility=System
SymbolicName=anon_union_storage_class
Language=English
anonymous union at global or namespace scope must be declared static
.

MessageId=409
Severity=Warning
Facility=System
SymbolicName=missing_initializer_on_fields
Language=English
%%nf provides no initializer for:
.

MessageId=410
Severity=Warning
Facility=System
SymbolicName=cannot_initialize_fields
Language=English
implicitly generated constructor for class %%t cannot initialize:
.

MessageId=411
Severity=Warning
Facility=System
SymbolicName=no_ctor_but_const_or_ref_member
Language=English
%%n defines no constructor to initialize the following:
.

MessageId=412
Severity=Warning
Facility=System
SymbolicName=var_with_uninitialized_member
Language=English
%%n has an uninitialized const or reference member
.

MessageId=413
Severity=Warning
Facility=System
SymbolicName=var_with_uninitialized_field
Language=English
%%n has an uninitialized const field
.

MessageId=414
Severity=Warning
Facility=System
SymbolicName=missing_const_assignment_operator
Language=English
class %%t has no assignment operator to copy a const object
.

MessageId=415
Severity=Warning
Facility=System
SymbolicName=no_suitable_assignment_operator
Language=English
class %%t has no suitable assignment operator
.

MessageId=416
Severity=Warning
Facility=System
SymbolicName=ambiguous_assignment_operator
Language=English
ambiguous assignment operator for class %%t
.

MessageId=417
Severity=Warning
Facility=System
SymbolicName=tag_417
Language=English
ec_removed_417
.

MessageId=418
Severity=Warning
Facility=System
SymbolicName=missing_typedef_name
Language=English
declaration requires a typedef name
.

MessageId=419
Severity=Warning
Facility=System
SymbolicName=tag_419
Language=English
ec_removed_419
.

MessageId=420
Severity=Warning
Facility=System
SymbolicName=virtual_not_allowed
Language=English
"virtual" is not allowed
.

MessageId=421
Severity=Warning
Facility=System
SymbolicName=static_not_allowed
Language=English
"static" is not allowed
.

MessageId=422
Severity=Warning
Facility=System
SymbolicName=bound_function_cast_anachronism
Language=English
cast of bound function to normal function pointer (anachronism)
.

MessageId=423
Severity=Warning
Facility=System
SymbolicName=expr_not_ptr_to_member
Language=English
expression must have pointer-to-member type
.

MessageId=424
Severity=Warning
Facility=System
SymbolicName=extra_semicolon
Language=English
extra ";" ignored
.

MessageId=425
Severity=Warning
Facility=System
SymbolicName=nonstd_const_member
Language=English
nonstandard member constant declaration (standard form is a static const integral member)
.

MessageId=426
Severity=Warning
Facility=System
SymbolicName=tag_426
Language=English
ec_removed_426
.

MessageId=427
Severity=Warning
Facility=System
SymbolicName=no_matching_new_function
Language=English
no instance of overloaded %%no matches the argument list
.

MessageId=428
Severity=Warning
Facility=System
SymbolicName=tag_428
Language=English
ec_removed_428
.

MessageId=429
Severity=Warning
Facility=System
SymbolicName=no_match_for_addr_of_overloaded_function
Language=English
no instance of %%n matches the required type
.

MessageId=430
Severity=Warning
Facility=System
SymbolicName=delete_count_anachronism
Language=English
delete array size expression used (anachronism)
.

MessageId=431
Severity=Warning
Facility=System
SymbolicName=tag_431
Language=English
ec_removed_431
.

MessageId=432
Severity=Warning
Facility=System
SymbolicName=cast_to_abstract_class
Language=English
a cast to abstract class %%t is not allowed:
.

MessageId=433
Severity=Warning
Facility=System
SymbolicName=bad_use_of_main
Language=English
function "main" may not be called or have its address taken
.

MessageId=434
Severity=Warning
Facility=System
SymbolicName=initializer_not_allowed_on_array_new
Language=English
a new-initializer may not be specified for an array
.

MessageId=435
Severity=Warning
Facility=System
SymbolicName=member_function_redecl_outside_class
Language=English
member function %%no may not be redeclared outside its class
.

MessageId=436
Severity=Warning
Facility=System
SymbolicName=ptr_to_incomplete_class_type_not_allowed
Language=English
pointer to incomplete class type is not allowed
.

MessageId=437
Severity=Warning
Facility=System
SymbolicName=ref_to_nested_function_var
Language=English
reference to local variable of enclosing function is not allowed
.

MessageId=438
Severity=Warning
Facility=System
SymbolicName=single_arg_postfix_incr_decr_anachronism
Language=English
single-argument function used for postfix %%sq (anachronism)
.

MessageId=439
Severity=Warning
Facility=System
SymbolicName=tag_439
Language=English
ec_removed_439
.

MessageId=440
Severity=Warning
Facility=System
SymbolicName=bad_default_assignment
Language=English
implicitly generated assignment operator cannot copy:
.

MessageId=441
Severity=Warning
Facility=System
SymbolicName=nonstd_array_cast
Language=English
cast to array type is nonstandard (treated as cast to %%t)
.

MessageId=442
Severity=Warning
Facility=System
SymbolicName=class_with_op_new_but_no_op_delete
Language=English
%%n has an operator new%%s() but no default operator delete%%s()
.

MessageId=443
Severity=Warning
Facility=System
SymbolicName=class_with_op_delete_but_no_op_new
Language=English
%%n has a default operator delete%%s() but no operator new%%s()
.

MessageId=444
Severity=Warning
Facility=System
SymbolicName=base_class_with_nonvirtual_dtor
Language=English
destructor for base class %%t is not virtual
.

MessageId=445
Severity=Warning
Facility=System
SymbolicName=tag_445
Language=English
ec_removed_445
.

MessageId=446
Severity=Warning
Facility=System
SymbolicName=member_function_redeclaration
Language=English
%%np has already been declared
.

MessageId=447
Severity=Warning
Facility=System
SymbolicName=inline_main
Language=English
function "main" may not be declared inline
.

MessageId=448
Severity=Warning
Facility=System
SymbolicName=class_and_member_function_name_conflict
Language=English
member function with the same name as its class must be a constructor
.

MessageId=449
Severity=Warning
Facility=System
SymbolicName=nested_class_anachronism
Language=English
using nested %%n (anachronism)
.

MessageId=450
Severity=Warning
Facility=System
SymbolicName=too_many_params_for_destructor
Language=English
a destructor may not have parameters
.

MessageId=451
Severity=Warning
Facility=System
SymbolicName=bad_constructor_param
Language=English
copy constructor for class %%t may not have a parameter of type %%t
.

MessageId=452
Severity=Warning
Facility=System
SymbolicName=incomplete_function_return_type
Language=English
%%n returns incomplete type %%t
.

MessageId=453
Severity=Warning
Facility=System
SymbolicName=protected_access_problem
Language=English
protected %%n is not accessible through a %%t pointer or object
.

MessageId=454
Severity=Warning
Facility=System
SymbolicName=param_not_allowed
Language=English
a parameter is not allowed
.

MessageId=455
Severity=Warning
Facility=System
SymbolicName=asm_decl_not_allowed
Language=English
an "asm" declaration is not allowed here
.

MessageId=456
Severity=Warning
Facility=System
SymbolicName=no_conversion_function
Language=English
no suitable conversion function from %%t1 to %%t2 exists
.

MessageId=457
Severity=Warning
Facility=System
SymbolicName=delete_of_incomplete_class
Language=English
delete of pointer to incomplete class
.

MessageId=458
Severity=Warning
Facility=System
SymbolicName=no_constructor_for_conversion
Language=English
no suitable constructor exists to convert from %%t1 to %%t2
.

MessageId=459
Severity=Warning
Facility=System
SymbolicName=ambiguous_constructor_for_conversion
Language=English
more than one constructor applies to convert from %%t1 to %%t2:
.

MessageId=460
Severity=Warning
Facility=System
SymbolicName=ambiguous_conversion_function
Language=English
more than one conversion function from %%t1 to %%t2 applies:
.

MessageId=461
Severity=Warning
Facility=System
SymbolicName=ambiguous_conversion_to_builtin
Language=English
more than one conversion function from %%t to a built-in type applies:
.

MessageId=462
Severity=Warning
Facility=System
SymbolicName=tag_462
Language=English
const %%n
.

MessageId=463
Severity=Warning
Facility=System
SymbolicName=tag_463
Language=English
reference %%n
.

MessageId=464
Severity=Warning
Facility=System
SymbolicName=tag_464
Language=English
%%npT
.

MessageId=465
Severity=Warning
Facility=System
SymbolicName=tag_465
Language=English
built-in operator %%sq
.

MessageId=466
Severity=Warning
Facility=System
SymbolicName=tag_466
Language=English
%%no (ambiguous by inheritance)
.

MessageId=467
Severity=Warning
Facility=System
SymbolicName=addr_of_constructor_or_destructor
Language=English
a constructor or destructor may not have its address taken
.

MessageId=468
Severity=Warning
Facility=System
SymbolicName=dollar_used_in_identifier
Language=English
dollar sign ("$") used in identifier
.

MessageId=469
Severity=Warning
Facility=System
SymbolicName=nonconst_ref_init_anachronism
Language=English
temporary used for initial value of reference to non-const (anachronism)
.

MessageId=470
Severity=Warning
Facility=System
SymbolicName=qualifier_in_member_declaration
Language=English
qualified name is not allowed in member declaration
.

MessageId=471
Severity=Warning
Facility=System
SymbolicName=mixed_enum_type_anachronism
Language=English
enumerated type mixed with another type (anachronism)
.

MessageId=472
Severity=Warning
Facility=System
SymbolicName=new_array_size_must_be_nonnegative
Language=English
the size of an array in "new" must be non-negative
.

MessageId=473
Severity=Warning
Facility=System
SymbolicName=return_ref_init_requires_temp
Language=English
returning reference to local temporary
.

MessageId=474
Severity=Warning
Facility=System
SymbolicName=tag_474
Language=English
ec_removed_474
.

MessageId=475
Severity=Warning
Facility=System
SymbolicName=enum_not_allowed
Language=English
"enum" declaration is not allowed
.

MessageId=476
Severity=Warning
Facility=System
SymbolicName=qualifier_dropped_in_ref_init
Language=English
qualifiers dropped in binding reference of type %%t1 to initializer of type %%t2
.

MessageId=477
Severity=Warning
Facility=System
SymbolicName=bad_nonconst_ref_init
Language=English
a reference of type %%t1 (not const-qualified) cannot be initialized with a value of type %%t2
.

MessageId=478
Severity=Warning
Facility=System
SymbolicName=delete_of_function_pointer
Language=English
a pointer to function may not be deleted
.

MessageId=479
Severity=Warning
Facility=System
SymbolicName=bad_conversion_function_decl
Language=English
conversion function must be a nonstatic member function
.

MessageId=480
Severity=Warning
Facility=System
SymbolicName=bad_template_declaration_scope
Language=English
template declaration is not allowed here
.

MessageId=481
Severity=Warning
Facility=System
SymbolicName=exp_lt
Language=English
expected a "<"
.

MessageId=482
Severity=Warning
Facility=System
SymbolicName=exp_gt
Language=English
expected a ">"
.

MessageId=483
Severity=Warning
Facility=System
SymbolicName=missing_template_param
Language=English
template parameter declaration is missing
.

MessageId=484
Severity=Warning
Facility=System
SymbolicName=missing_template_arg_list
Language=English
argument list for %%nf is missing
.

MessageId=485
Severity=Warning
Facility=System
SymbolicName=too_few_template_args
Language=English
too few arguments for %%nf
.

MessageId=486
Severity=Warning
Facility=System
SymbolicName=too_many_template_args
Language=English
too many arguments for %%nf
.

MessageId=487
Severity=Warning
Facility=System
SymbolicName=tag_487
Language=English
ec_removed_487
.

MessageId=488
Severity=Warning
Facility=System
SymbolicName=not_used_in_template_function_params
Language=English
%%n1 is not used in declaring the parameter types of %%n2
.

MessageId=489
Severity=Warning
Facility=System
SymbolicName=cfront_multiple_nested_types
Language=English
two nested types have the same name: %%no1 and %%nod2 (cfront compatibility)
.

MessageId=490
Severity=Warning
Facility=System
SymbolicName=cfront_global_defined_after_nested_type
Language=English
global %%no1 was declared after nested %%nod2 (cfront compatibility)
.

MessageId=491
Severity=Warning
Facility=System
SymbolicName=tag_491
Language=English
ec_removed_491
.

MessageId=492
Severity=Warning
Facility=System
SymbolicName=ambiguous_ptr_to_overloaded_function
Language=English
more than one instance of %%n matches the required type
.

MessageId=493
Severity=Warning
Facility=System
SymbolicName=nonstd_long_long
Language=English
the type "long long" is nonstandard
.

MessageId=494
Severity=Warning
Facility=System
SymbolicName=nonstd_friend_decl
Language=English
omission of %%sq is nonstandard
.

MessageId=495
Severity=Warning
Facility=System
SymbolicName=return_type_on_conversion_function
Language=English
return type may not be specified on a conversion function
.

MessageId=496
Severity=Warning
Facility=System
SymbolicName=tag_496
Language=English
detected during:
.

MessageId=497
Severity=Warning
Facility=System
SymbolicName=tag_497
Language=English
instantiation of %%nt %%p
.

MessageId=498
Severity=Warning
Facility=System
SymbolicName=tag_498
Language=English
implicit generation of %%nt %%p
.

MessageId=499
Severity=Warning
Facility=System
SymbolicName=runaway_recursive_instantiation
Language=English
excessive recursion at instantiation of %%n
.

MessageId=500
Severity=Warning
Facility=System
SymbolicName=bad_template_declaration
Language=English
%%sq is not a function or static data member
.

MessageId=501
Severity=Warning
Facility=System
SymbolicName=bad_nontype_template_arg
Language=English
argument of type %%t1 is incompatible with template parameter of type %%t2
.

MessageId=502
Severity=Warning
Facility=System
SymbolicName=init_needing_temp_not_allowed
Language=English
initialization requiring a temporary or conversion is not allowed
.

MessageId=503
Severity=Warning
Facility=System
SymbolicName=decl_hides_function_parameter
Language=English
declaration of %%sq hides function parameter
.

MessageId=504
Severity=Warning
Facility=System
SymbolicName=nonconst_ref_init_from_rvalue
Language=English
initial value of reference to non-const must be an lvalue
.

MessageId=505
Severity=Warning
Facility=System
SymbolicName=tag_505
Language=English
implicit definition of %%nt %%p
.

MessageId=506
Severity=Warning
Facility=System
SymbolicName=template_not_allowed
Language=English
"template" is not allowed
.

MessageId=507
Severity=Warning
Facility=System
SymbolicName=not_a_class_template
Language=English
%%t is not a class template
.

MessageId=508
Severity=Warning
Facility=System
SymbolicName=tag_508
Language=English
ec_removed_508
.

MessageId=509
Severity=Warning
Facility=System
SymbolicName=function_template_named_main
Language=English
"main" is not a valid name for a function template
.

MessageId=510
Severity=Warning
Facility=System
SymbolicName=union_nonunion_mismatch
Language=English
invalid reference to %%n (union/nonunion mismatch)
.

MessageId=511
Severity=Warning
Facility=System
SymbolicName=local_type_in_template_arg
Language=English
a template argument may not reference a local type
.

MessageId=512
Severity=Warning
Facility=System
SymbolicName=tag_kind_incompatible_with_declaration
Language=English
tag kind of %%s is incompatible with declaration of %%nfd
.

MessageId=513
Severity=Warning
Facility=System
SymbolicName=name_not_tag_in_file_scope
Language=English
the global scope has no tag named %%sq
.

MessageId=514
Severity=Warning
Facility=System
SymbolicName=not_a_tag_member
Language=English
%%n has no tag member named %%sq
.

MessageId=515
Severity=Warning
Facility=System
SymbolicName=ptr_to_member_typedef
Language=English
member function typedef (allowed for cfront compatibility)
.

MessageId=516
Severity=Warning
Facility=System
SymbolicName=bad_use_of_member_function_typedef
Language=English
%%n may be used only in pointer-to-member declaration
.

MessageId=517
Severity=Warning
Facility=System
SymbolicName=tag_517
Language=English
ec_removed_517
.

MessageId=518
Severity=Warning
Facility=System
SymbolicName=nonexternal_entity_in_template_arg
Language=English
a template argument may not reference a non-external entity
.

MessageId=519
Severity=Warning
Facility=System
SymbolicName=id_must_be_class_or_type_name
Language=English
name followed by "::~" must be a class name or a type name
.

MessageId=520
Severity=Warning
Facility=System
SymbolicName=destructor_name_mismatch
Language=English
destructor name does not match name of class %%t
.

MessageId=521
Severity=Warning
Facility=System
SymbolicName=destructor_type_mismatch
Language=English
type used as destructor name does not match type %%t
.

MessageId=522
Severity=Warning
Facility=System
SymbolicName=called_function_redeclared_inline
Language=English
%%n redeclared "inline" after being called
.

MessageId=523
Severity=Warning
Facility=System
SymbolicName=tag_523
Language=English
ec_removed_523
.

MessageId=524
Severity=Warning
Facility=System
SymbolicName=bad_storage_class_on_template_decl
Language=English
invalid storage class for a template declaration
.

MessageId=525
Severity=Warning
Facility=System
SymbolicName=no_access_to_type_cfront_mode
Language=English
%%n is an inaccessible type (allowed for compatibility)
.

MessageId=526
Severity=Warning
Facility=System
SymbolicName=tag_526
Language=English
ec_removed_526
.

MessageId=527
Severity=Warning
Facility=System
SymbolicName=invalid_instantiation_argument
Language=English
invalid explicit instantiation declaration
.

MessageId=528
Severity=Warning
Facility=System
SymbolicName=not_instantiatable_entity
Language=English
%%nf is not an entity that can be instantiated
.

MessageId=529
Severity=Warning
Facility=System
SymbolicName=compiler_generated_function_cannot_be_instantiated
Language=English
compiler generated %%n cannot be explicitly instantiated
.

MessageId=530
Severity=Warning
Facility=System
SymbolicName=inline_function_cannot_be_instantiated
Language=English
inline %%n cannot be explicitly instantiated
.

MessageId=531
Severity=Warning
Facility=System
SymbolicName=tag_531
Language=English
ec_removed_531
.

MessageId=532
Severity=Warning
Facility=System
SymbolicName=instantiation_requested_no_definition_supplied
Language=English
%%n cannot be instantiated -- no template definition was supplied
.

MessageId=533
Severity=Warning
Facility=System
SymbolicName=instantiation_requested_and_specialized
Language=English
%%n cannot be instantiated -- it has been explicitly specialized
.

MessageId=534
Severity=Warning
Facility=System
SymbolicName=tag_534
Language=English
ec_removed_534
.

MessageId=535
Severity=Warning
Facility=System
SymbolicName=tag_535
Language=English
ec_removed_535
.

MessageId=536
Severity=Warning
Facility=System
SymbolicName=no_match_for_type_of_overloaded_function
Language=English
no instance of %%n matches the specified type
.

MessageId=537
Severity=Warning
Facility=System
SymbolicName=nonstd_void_param_list
Language=English
declaring a void parameter list with a typedef is nonstandard
.

MessageId=538
Severity=Warning
Facility=System
SymbolicName=cfront_name_lookup_bug
Language=English
global %%n1 used instead of %%n2 (cfront compatibility)
.

MessageId=539
Severity=Warning
Facility=System
SymbolicName=redeclaration_of_template_param_name
Language=English
template parameter %%sq may not be redeclared in this scope
.

MessageId=540
Severity=Warning
Facility=System
SymbolicName=decl_hides_template_parameter
Language=English
declaration of %%sq hides template parameter
.

MessageId=541
Severity=Warning
Facility=System
SymbolicName=must_be_prototype_instantiation
Language=English
template argument list must match the parameter list
.

MessageId=542
Severity=Warning
Facility=System
SymbolicName=tag_542
Language=English
ec_removed_542
.

MessageId=543
Severity=Warning
Facility=System
SymbolicName=bad_extra_arg_for_postfix_operator
Language=English
extra parameter of postfix "operator%%s" must be of type "int"
.

MessageId=544
Severity=Warning
Facility=System
SymbolicName=function_type_required
Language=English
an operator name must be declared as a function
.

MessageId=545
Severity=Warning
Facility=System
SymbolicName=operator_name_not_allowed
Language=English
operator name is not allowed
.

MessageId=546
Severity=Warning
Facility=System
SymbolicName=bad_scope_for_specialization
Language=English
%%n cannot be specialized in the current scope
.

MessageId=547
Severity=Warning
Facility=System
SymbolicName=nonstd_member_function_address
Language=English
nonstandard form for taking the address of a member function
.

MessageId=548
Severity=Warning
Facility=System
SymbolicName=too_few_template_params
Language=English
too few template parameters -- does not match previous declaration
.

MessageId=549
Severity=Warning
Facility=System
SymbolicName=too_many_template_params
Language=English
too many template parameters -- does not match previous declaration
.

MessageId=550
Severity=Warning
Facility=System
SymbolicName=template_operator_delete
Language=English
function template for operator delete(void *) is not allowed
.

MessageId=551
Severity=Warning
Facility=System
SymbolicName=class_template_same_name_as_templ_param
Language=English
class template and template parameter may not have the same name
.

MessageId=552
Severity=Warning
Facility=System
SymbolicName=tag_552
Language=English
ec_removed_552
.

MessageId=553
Severity=Warning
Facility=System
SymbolicName=unnamed_type_in_template_arg
Language=English
a template argument may not reference an unnamed type
.

MessageId=554
Severity=Warning
Facility=System
SymbolicName=enum_type_not_allowed
Language=English
enumerated type is not allowed
.

MessageId=555
Severity=Warning
Facility=System
SymbolicName=qualified_reference_type
Language=English
type qualifier on a reference type is not allowed
.

MessageId=556
Severity=Warning
Facility=System
SymbolicName=incompatible_assignment_operands
Language=English
a value of type %%t1 cannot be assigned to an entity of type %%t2
.

MessageId=557
Severity=Warning
Facility=System
SymbolicName=unsigned_compare_with_negative
Language=English
pointless comparison of unsigned integer with a negative constant
.

MessageId=558
Severity=Warning
Facility=System
SymbolicName=converting_to_incomplete_class
Language=English
cannot convert to incomplete class %%t
.

MessageId=559
Severity=Warning
Facility=System
SymbolicName=missing_initializer_on_unnamed_const
Language=English
const object requires an initializer
.

MessageId=560
Severity=Warning
Facility=System
SymbolicName=unnamed_object_with_uninitialized_field
Language=English
object has an uninitialized const or reference member
.

MessageId=561
Severity=Warning
Facility=System
SymbolicName=nonstd_pp_directive
Language=English
nonstandard preprocessing directive
.

MessageId=562
Severity=Warning
Facility=System
SymbolicName=unexpected_template_arg_list
Language=English
%%n may not have a template argument list
.

MessageId=563
Severity=Warning
Facility=System
SymbolicName=missing_initializer_list
Language=English
initialization with "{...}" expected for aggregate object
.

MessageId=564
Severity=Warning
Facility=System
SymbolicName=incompatible_ptr_to_member_selection_operands
Language=English
pointer-to-member selection class types are incompatible (%%t1 and %%t2)
.

MessageId=565
Severity=Warning
Facility=System
SymbolicName=self_friendship
Language=English
pointless friend declaration
.

MessageId=566
Severity=Warning
Facility=System
SymbolicName=period_used_as_qualifier
Language=English
"." used in place of "::" to form a qualified name
.

MessageId=567
Severity=Warning
Facility=System
SymbolicName=const_function_anachronism
Language=English
non-const function called for const object (anachronism)
.

MessageId=568
Severity=Warning
Facility=System
SymbolicName=dependent_stmt_is_declaration
Language=English
a dependent statement may not be a declaration
.

MessageId=569
Severity=Warning
Facility=System
SymbolicName=void_param_not_allowed
Language=English
a parameter may not have void type
.

MessageId=570
Severity=Warning
Facility=System
SymbolicName=tag_570
Language=English
instantiation of %%na %%p
.

MessageId=571
Severity=Warning
Facility=System
SymbolicName=tag_571
Language=English
processing of template argument list for %%na %%p
.

MessageId=572
Severity=Warning
Facility=System
SymbolicName=bad_templ_arg_expr_operator
Language=English
this operator is not allowed in a template argument expression
.

MessageId=573
Severity=Warning
Facility=System
SymbolicName=missing_handler
Language=English
try block requires at least one handler
.

MessageId=574
Severity=Warning
Facility=System
SymbolicName=missing_exception_declaration
Language=English
handler requires an exception declaration
.

MessageId=575
Severity=Warning
Facility=System
SymbolicName=masked_by_default_handler
Language=English
handler is masked by default handler
.

MessageId=576
Severity=Warning
Facility=System
SymbolicName=masked_by_handler
Language=English
handler is potentially masked by previous handler for type %%t
.

MessageId=577
Severity=Warning
Facility=System
SymbolicName=local_type_used_in_exception
Language=English
use of a local type to specify an exception
.

MessageId=578
Severity=Warning
Facility=System
SymbolicName=redundant_exception_specification_type
Language=English
redundant type in exception specification
.

MessageId=579
Severity=Warning
Facility=System
SymbolicName=incompatible_exception_specification
Language=English
exception specification is incompatible with that of previous %%nd%%s=':'
.

MessageId=580
Severity=Warning
Facility=System
SymbolicName=tag_580
Language=English
previously specified: no exceptions will be thrown
.

MessageId=581
Severity=Warning
Facility=System
SymbolicName=tag_581
Language=English
previously omitted: %%t
.

MessageId=582
Severity=Warning
Facility=System
SymbolicName=tag_582
Language=English
previously specified but omitted here: %%t
.

MessageId=583
Severity=Warning
Facility=System
SymbolicName=no_exception_support
Language=English
C++ exception handler found but GX option not present
.

MessageId=584
Severity=Warning
Facility=System
SymbolicName=omitted_exception_specification
Language=English
omission of exception specification is incompatible with previous %%nd
.

MessageId=585
Severity=Warning
Facility=System
SymbolicName=cannot_create_instantiation_request_file
Language=English
could not create instantiation request file %%sq
.

MessageId=586
Severity=Warning
Facility=System
SymbolicName=non_arith_operation_in_templ_arg
Language=English
non-arithmetic operation not allowed in nontype template argument
.

MessageId=587
Severity=Warning
Facility=System
SymbolicName=local_type_in_nonlocal_var
Language=English
use of a local type to declare a nonlocal variable
.

MessageId=588
Severity=Warning
Facility=System
SymbolicName=local_type_in_function
Language=English
use of a local type to declare a function
.

MessageId=589
Severity=Warning
Facility=System
SymbolicName=branch_past_initialization
Language=English
transfer of control bypasses initialization of:
.

MessageId=590
Severity=Warning
Facility=System
SymbolicName=tag_590
Language=English
%%nd
.

MessageId=591
Severity=Warning
Facility=System
SymbolicName=branch_into_handler
Language=English
transfer of control into an exception handler
.

MessageId=592
Severity=Warning
Facility=System
SymbolicName=used_before_set
Language=English
%%n is used before its value is set
.

MessageId=593
Severity=Warning
Facility=System
SymbolicName=set_but_not_used
Language=English
%%n was set but never used
.

MessageId=594
Severity=Warning
Facility=System
SymbolicName=bad_scope_for_definition
Language=English
%%n cannot be defined in the current scope
.

MessageId=595
Severity=Warning
Facility=System
SymbolicName=exception_specification_not_allowed
Language=English
exception specification is not allowed
.

MessageId=596
Severity=Warning
Facility=System
SymbolicName=template_and_instance_linkage_conflict
Language=English
external/internal linkage conflict for %%nfd
.

MessageId=597
Severity=Warning
Facility=System
SymbolicName=conversion_function_not_usable
Language=English
%%nf will not be called for implicit or explicit conversions
.

MessageId=598
Severity=Warning
Facility=System
SymbolicName=tag_kind_incompatible_with_template_parameter
Language=English
tag kind of %%s is incompatible with template parameter of type %%t
.

MessageId=599
Severity=Warning
Facility=System
SymbolicName=template_operator_new
Language=English
function template for operator new(size_t) is not allowed
.

MessageId=600
Severity=Warning
Facility=System
SymbolicName=tag_600
Language=English
ec_removed_600
.

MessageId=601
Severity=Warning
Facility=System
SymbolicName=bad_member_type_in_ptr_to_member
Language=English
pointer to member of type %%t is not allowed
.

MessageId=602
Severity=Warning
Facility=System
SymbolicName=ellipsis_on_operator_function
Language=English
ellipsis is not allowed in operator function parameter list
.

MessageId=603
Severity=Warning
Facility=System
SymbolicName=unimplemented_keyword
Language=English
%%no is reserved for future use as a keyword
.

MessageId=604
Severity=Warning
Facility=System
SymbolicName=cl_invalid_macro_definition
Language=English
invalid macro definition: 
.

MessageId=605
Severity=Warning
Facility=System
SymbolicName=cl_invalid_macro_undefinition
Language=English
invalid macro undefinition: 
.

MessageId=606
Severity=Warning
Facility=System
SymbolicName=cl_invalid_preprocessor_output_file
Language=English
invalid preprocessor output file 
.

MessageId=607
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_preprocessor_output_file
Language=English
cannot open preprocessor output file 
.

MessageId=608
Severity=Warning
Facility=System
SymbolicName=cl_il_file_must_be_specified
Language=English
IL file name must be specified if input is 
.

MessageId=609
Severity=Warning
Facility=System
SymbolicName=cl_invalid_il_output_file
Language=English
invalid IL output file 
.

MessageId=610
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_il_output_file
Language=English
cannot open IL output file 
.

MessageId=611
Severity=Warning
Facility=System
SymbolicName=cl_invalid_C_output_file
Language=English
invalid C output file 
.

MessageId=612
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_C_output_file
Language=English
cannot open C output file 
.

MessageId=613
Severity=Warning
Facility=System
SymbolicName=cl_error_in_debug_option_argument
Language=English
error in debug option argument
.

MessageId=614
Severity=Warning
Facility=System
SymbolicName=cl_invalid_option
Language=English
invalid option: 
.

MessageId=615
Severity=Warning
Facility=System
SymbolicName=cl_back_end_requires_il_file
Language=English
back end requires name of IL file
.

MessageId=616
Severity=Warning
Facility=System
SymbolicName=cl_could_not_open_il_file
Language=English
could not open IL file 
.

MessageId=617
Severity=Warning
Facility=System
SymbolicName=cl_invalid_number
Language=English
invalid number: 
.

MessageId=618
Severity=Warning
Facility=System
SymbolicName=cl_incorrect_host_id
Language=English
incorrect host CPU id
.

MessageId=619
Severity=Warning
Facility=System
SymbolicName=cl_invalid_instantiation_mode
Language=English
invalid instantiation mode: 
.

MessageId=620
Severity=Warning
Facility=System
SymbolicName=tag_620
Language=English
ec_removed_620
.

MessageId=621
Severity=Warning
Facility=System
SymbolicName=cl_invalid_error_limit
Language=English
invalid error limit: 
.

MessageId=622
Severity=Warning
Facility=System
SymbolicName=cl_invalid_raw_listing_output_file
Language=English
invalid raw-listing output file 
.

MessageId=623
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_raw_listing_output_file
Language=English
cannot open raw-listing output file 
.

MessageId=624
Severity=Warning
Facility=System
SymbolicName=cl_invalid_xref_output_file
Language=English
invalid cross-reference output file 
.

MessageId=625
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_xref_output_file
Language=English
cannot open cross-reference output file 
.

MessageId=626
Severity=Warning
Facility=System
SymbolicName=cl_invalid_error_output_file
Language=English
invalid error output file 
.

MessageId=627
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_error_output_file
Language=English
cannot open error output file 
.

MessageId=628
Severity=Warning
Facility=System
SymbolicName=cl_vtbl_option_only_in_cplusplus
Language=English
virtual function tables can only be suppressed when compiling C++
.

MessageId=629
Severity=Warning
Facility=System
SymbolicName=cl_anachronism_option_only_in_cplusplus
Language=English
anachronism option can be used only when compiling C++
.

MessageId=630
Severity=Warning
Facility=System
SymbolicName=cl_instantiation_option_only_in_cplusplus
Language=English
instantiation mode option can be used only when compiling C++
.

MessageId=631
Severity=Warning
Facility=System
SymbolicName=cl_auto_instantiation_option_only_in_cplusplus
Language=English
automatic instantiation mode can be used only when compiling C++
.

MessageId=632
Severity=Warning
Facility=System
SymbolicName=cl_implicit_inclusion_option_only_in_cplusplus
Language=English
implicit template inclusion mode can be used only when compiling C++
.

MessageId=633
Severity=Warning
Facility=System
SymbolicName=cl_exceptions_option_only_in_cplusplus
Language=English
exception handling option can be used only when compiling C++
.

MessageId=634
Severity=Warning
Facility=System
SymbolicName=cl_strict_ansi_incompatible_with_pcc
Language=English
strict ANSI mode is incompatible with K&R mode
.

MessageId=635
Severity=Warning
Facility=System
SymbolicName=cl_strict_ansi_incompatible_with_cfront
Language=English
strict ANSI mode is incompatible with cfront mode
.

MessageId=636
Severity=Warning
Facility=System
SymbolicName=cl_missing_source_file_name
Language=English
missing source file name
.

MessageId=637
Severity=Warning
Facility=System
SymbolicName=cl_output_file_incompatible_with_multiple_inputs
Language=English
output files may not be specified when compiling several input files
.

MessageId=638
Severity=Warning
Facility=System
SymbolicName=cl_too_many_arguments
Language=English
too many arguments on command line
.

MessageId=639
Severity=Warning
Facility=System
SymbolicName=cl_no_output_file_needed
Language=English
an output file was specified, but none is needed
.

MessageId=640
Severity=Warning
Facility=System
SymbolicName=cl_il_display_requires_il_file_name
Language=English
IL display requires name of IL file
.

MessageId=641
Severity=Warning
Facility=System
SymbolicName=void_template_parameter
Language=English
a template parameter may not have void type
.

MessageId=642
Severity=Warning
Facility=System
SymbolicName=too_many_unused_instantiations
Language=English
excessive recursive instantiation of %%n due to instantiate-all mode
.

MessageId=643
Severity=Warning
Facility=System
SymbolicName=cl_strict_ansi_incompatible_with_anachronisms
Language=English
strict ANSI mode is incompatible with allowing anachronisms
.

MessageId=644
Severity=Warning
Facility=System
SymbolicName=void_throw
Language=English
a throw expression may not have void type
.

MessageId=645
Severity=Warning
Facility=System
SymbolicName=cl_tim_local_conflicts_with_auto_instantiation
Language=English
local instantiation mode is incompatible with automatic instantiation
.

MessageId=646
Severity=Warning
Facility=System
SymbolicName=abstract_class_param_type
Language=English
parameter of abstract class type %%t is not allowed:
.

MessageId=647
Severity=Warning
Facility=System
SymbolicName=array_of_abstract_class
Language=English
array of abstract class %%t is not allowed:
.

MessageId=648
Severity=Warning
Facility=System
SymbolicName=float_template_parameter
Language=English
floating-point template parameter is nonstandard
.

MessageId=649
Severity=Warning
Facility=System
SymbolicName=pragma_must_precede_declaration
Language=English
this pragma must immediately precede a declaration
.

MessageId=650
Severity=Warning
Facility=System
SymbolicName=pragma_must_precede_statement
Language=English
this pragma must immediately precede a statement
.

MessageId=651
Severity=Warning
Facility=System
SymbolicName=pragma_must_precede_decl_or_stmt
Language=English
this pragma must immediately precede a declaration or statement
.

MessageId=652
Severity=Warning
Facility=System
SymbolicName=pragma_may_not_be_used_here
Language=English
this kind of pragma may not be used here
.

MessageId=653
Severity=Warning
Facility=System
SymbolicName=tag_653
Language=English
ec_removed_653
.

MessageId=654
Severity=Warning
Facility=System
SymbolicName=partial_override
Language=English
overloaded virtual function %%no1 is only partially overridden in %%n2
.

MessageId=655
Severity=Warning
Facility=System
SymbolicName=specialization_of_called_inline_template_function
Language=English
specific definition of inline template function must precede its first use
.

MessageId=656
Severity=Warning
Facility=System
SymbolicName=cl_invalid_error_tag
Language=English
invalid error tag in diagnostic control option: 
.

MessageId=657
Severity=Warning
Facility=System
SymbolicName=cl_invalid_error_number
Language=English
invalid error number in diagnostic control option: 
.

MessageId=658
Severity=Warning
Facility=System
SymbolicName=param_type_ptr_to_array_of_unknown_bound
Language=English
parameter type involves pointer to array of unknown bound
.

MessageId=659
Severity=Warning
Facility=System
SymbolicName=param_type_ref_array_of_unknown_bound
Language=English
parameter type involves reference to array of unknown bound
.

MessageId=660
Severity=Warning
Facility=System
SymbolicName=ptr_to_member_cast_to_ptr_to_function
Language=English
pointer-to-member-function cast to pointer to function
.

MessageId=661
Severity=Warning
Facility=System
SymbolicName=no_named_fields
Language=English
struct or union declares no named members
.

MessageId=662
Severity=Warning
Facility=System
SymbolicName=nonstd_unnamed_field
Language=English
nonstandard unnamed field
.

MessageId=663
Severity=Warning
Facility=System
SymbolicName=nonstd_unnamed_member
Language=English
nonstandard unnamed member
.

MessageId=664
Severity=Warning
Facility=System
SymbolicName=tag_664
Language=English
ec_removed_664
.

MessageId=665
Severity=Warning
Facility=System
SymbolicName=cl_invalid_pch_output_file
Language=English
invalid precompiled header output file 
.

MessageId=666
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_pch_output_file
Language=English
cannot open precompiled header output file 
.

MessageId=667
Severity=Warning
Facility=System
SymbolicName=not_a_type_name
Language=English
%%sq is not a type name
.

MessageId=668
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_pch_input_file
Language=English
cannot open precompiled header input file 
.

MessageId=669
Severity=Warning
Facility=System
SymbolicName=invalid_pch_file
Language=English
precompiled header file %%sq is either invalid or not generated by this version of the compiler
.

MessageId=670
Severity=Warning
Facility=System
SymbolicName=pch_curr_directory_changed
Language=English
precompiled header file %%sq was not generated in this directory
.

MessageId=671
Severity=Warning
Facility=System
SymbolicName=pch_header_files_have_changed
Language=English
header files used to generate precompiled header file %%sq have changed
.

MessageId=672
Severity=Warning
Facility=System
SymbolicName=pch_cmd_line_option_mismatch
Language=English
the command line options do not match those used when precompiled header file %%sq was created
.

MessageId=673
Severity=Warning
Facility=System
SymbolicName=pch_file_prefix_mismatch
Language=English
the initial sequence of preprocessing directives is not compatible with those of precompiled header file %%sq
.

MessageId=674
Severity=Warning
Facility=System
SymbolicName=unable_to_get_mapped_memory
Language=English
unable to obtain mapped memory
.

MessageId=675
Severity=Warning
Facility=System
SymbolicName=using_pch
Language=English
"%%s": using precompiled header file "%%s"
.

MessageId=676
Severity=Warning
Facility=System
SymbolicName=creating_pch
Language=English
"%%s": creating precompiled header file "%%s"
.

MessageId=677
Severity=Warning
Facility=System
SymbolicName=memory_mismatch
Language=English
memory usage conflict with precompiled header file %%sq
.

MessageId=678
Severity=Warning
Facility=System
SymbolicName=cl_invalid_pch_size
Language=English
invalid PCH memory size 
.

MessageId=679
Severity=Warning
Facility=System
SymbolicName=cl_pch_must_be_first
Language=English
PCH options must appear first in the command line
.

MessageId=680
Severity=Warning
Facility=System
SymbolicName=out_of_memory_during_pch_allocation
Language=English
insufficient memory for PCH memory allocation
.

MessageId=681
Severity=Warning
Facility=System
SymbolicName=cl_pch_incompatible_with_multiple_inputs
Language=English
precompiled header files may not be used when compiling several input files
.

MessageId=682
Severity=Warning
Facility=System
SymbolicName=not_enough_preallocated_memory_fail
Language=English
insufficient preallocated memory for generation of precompiled header file (use option /Qpch_mem%%s)
.

MessageId=683
Severity=Warning
Facility=System
SymbolicName=program_entity_too_large_for_pch
Language=English
very large entity in program prevents generation of precompiled header file
.

MessageId=684
Severity=Warning
Facility=System
SymbolicName=cannot_chdir
Language=English
%%sq is not a valid directory
.

MessageId=685
Severity=Warning
Facility=System
SymbolicName=cannot_build_temp_file_name
Language=English
cannot build temporary file name
.

MessageId=686
Severity=Warning
Facility=System
SymbolicName=restrict_not_allowed
Language=English
"restrict" is not allowed
.

MessageId=687
Severity=Warning
Facility=System
SymbolicName=restrict_pointer_to_function
Language=English
a pointer or reference to function type may not be qualified by "restrict"
.

MessageId=688
Severity=Warning
Facility=System
SymbolicName=bad_declspec_modifier
Language=English
%%sq is an unrecognized __declspec attribute
.

MessageId=689
Severity=Warning
Facility=System
SymbolicName=calling_convention_not_allowed
Language=English
a calling convention modifier may not be specified here
.

MessageId=690
Severity=Warning
Facility=System
SymbolicName=conflicting_calling_conventions
Language=English
conflicting calling convention modifiers
.

MessageId=691
Severity=Warning
Facility=System
SymbolicName=cl_strict_ansi_incompatible_with_microsoft
Language=English
strict ANSI mode is incompatible with Microsoft mode
.

MessageId=692
Severity=Warning
Facility=System
SymbolicName=cl_cfront_incompatible_with_microsoft
Language=English
cfront mode is incompatible with Microsoft mode
.

MessageId=693
Severity=Warning
Facility=System
SymbolicName=calling_convention_ignored
Language=English
calling convention specified here is ignored
.

MessageId=694
Severity=Warning
Facility=System
SymbolicName=calling_convention_may_not_precede_nested_declarator
Language=English
a calling convention may not be followed by a nested declarator
.

MessageId=695
Severity=Warning
Facility=System
SymbolicName=calling_convention_ignored_for_type
Language=English
calling convention is ignored for this type
.

MessageId=696
Severity=Warning
Facility=System
SymbolicName=tag_696
Language=English
ec_removed_696
.

MessageId=697
Severity=Warning
Facility=System
SymbolicName=decl_modifiers_incompatible_with_previous_decl
Language=English
declaration modifiers are incompatible with previous declaration
.

MessageId=698
Severity=Warning
Facility=System
SymbolicName=decl_modifiers_invalid_for_this_decl
Language=English
the modifier %%sq is not allowed on this declaration
.

MessageId=699
Severity=Warning
Facility=System
SymbolicName=branch_into_try_block
Language=English
transfer of control into a try block
.

MessageId=700
Severity=Warning
Facility=System
SymbolicName=incompatible_inline_specifier_on_specific_decl
Language=English
inline specification is incompatible with previous %%nod
.

MessageId=701
Severity=Warning
Facility=System
SymbolicName=template_missing_closing_brace
Language=English
closing brace of template definition not found
.

MessageId=702
Severity=Warning
Facility=System
SymbolicName=cl_wchar_t_option_only_in_cplusplus
Language=English
wchar_t keyword option can be used only when compiling C++
.

MessageId=703
Severity=Warning
Facility=System
SymbolicName=bad_pack_alignment
Language=English
invalid alignment value
.

MessageId=704
Severity=Warning
Facility=System
SymbolicName=exp_int_constant
Language=English
expected an integer constant
.

MessageId=705
Severity=Warning
Facility=System
SymbolicName=call_of_pure_virtual
Language=English
call of pure virtual function
.

MessageId=706
Severity=Warning
Facility=System
SymbolicName=bad_ident_string
Language=English
invalid source file identifier string
.

MessageId=707
Severity=Warning
Facility=System
SymbolicName=template_friend_definition_not_allowed
Language=English
a class template cannot be defined in a friend declaration
.

MessageId=708
Severity=Warning
Facility=System
SymbolicName=asm_not_allowed
Language=English
"asm" is not allowed
.

MessageId=709
Severity=Warning
Facility=System
SymbolicName=bad_asm_function_def
Language=English
"asm" must be used with a function definition
.

MessageId=710
Severity=Warning
Facility=System
SymbolicName=nonstd_asm_function
Language=English
"asm" function is nonstandard
.

MessageId=711
Severity=Warning
Facility=System
SymbolicName=nonstd_ellipsis_only_param
Language=English
ellipsis with no explicit parameters is nonstandard
.

MessageId=712
Severity=Warning
Facility=System
SymbolicName=nonstd_address_of_ellipsis
Language=English
"&..." is nonstandard
.

MessageId=713
Severity=Warning
Facility=System
SymbolicName=bad_address_of_ellipsis
Language=English
invalid use of "&..."
.

MessageId=714
Severity=Warning
Facility=System
SymbolicName=tag_714
Language=English
ec_removed_714
.

MessageId=715
Severity=Warning
Facility=System
SymbolicName=const_volatile_ref_init_anachronism
Language=English
temporary used for initial value of reference to const volatile (anachronism)
.

MessageId=716
Severity=Warning
Facility=System
SymbolicName=bad_const_volatile_ref_init
Language=English
a reference of type %%t1 cannot be initialized with a value of type %%t2
.

MessageId=717
Severity=Warning
Facility=System
SymbolicName=const_volatile_ref_init_from_rvalue
Language=English
initial value of reference to const volatile must be an lvalue
.

MessageId=718
Severity=Warning
Facility=System
SymbolicName=cl_SVR4_C_option_only_in_ansi_C
Language=English
SVR4 C compatibility option can be used only when compiling ANSI C
.

MessageId=719
Severity=Warning
Facility=System
SymbolicName=using_out_of_scope_declaration
Language=English
using out-of-scope declaration of %%nd
.

MessageId=720
Severity=Warning
Facility=System
SymbolicName=cl_strict_ansi_incompatible_with_SVR4
Language=English
strict ANSI mode is incompatible with SVR4 C mode
.

MessageId=721
Severity=Warning
Facility=System
SymbolicName=cannot_inline_call
Language=English
call of %%nd cannot be inlined
.

MessageId=722
Severity=Warning
Facility=System
SymbolicName=cannot_inline
Language=English
%%n cannot be inlined
.

MessageId=723
Severity=Warning
Facility=System
SymbolicName=cl_invalid_pch_directory
Language=English
invalid PCH directory: 
.

MessageId=724
Severity=Warning
Facility=System
SymbolicName=exp_except_or_finally
Language=English
expected __except or __finally
.

MessageId=725
Severity=Warning
Facility=System
SymbolicName=leave_must_be_in_try
Language=English
a __leave statement may only be used within a __try
.

MessageId=726
Severity=Warning
Facility=System
SymbolicName=tag_726
Language=English
detected during instantiation of %%nt %%p
.

MessageId=727
Severity=Warning
Facility=System
SymbolicName=tag_727
Language=English
detected during implicit generation of %%nt %%p
.

MessageId=728
Severity=Warning
Facility=System
SymbolicName=tag_728
Language=English
detected during instantiation of %%na %%p
.

MessageId=729
Severity=Warning
Facility=System
SymbolicName=tag_729
Language=English
detected during processing of template argument list for %%na %%p
.

MessageId=730
Severity=Warning
Facility=System
SymbolicName=tag_730
Language=English
detected during implicit definition of %%nt %%p
.

MessageId=731
Severity=Warning
Facility=System
SymbolicName=not_found_on_pack_alignment_stack
Language=English
%%sq not found on pack alignment stack
.

MessageId=732
Severity=Warning
Facility=System
SymbolicName=empty_pack_alignment_stack
Language=English
empty pack alignment stack
.

MessageId=733
Severity=Warning
Facility=System
SymbolicName=cl_rtti_option_only_in_cplusplus
Language=English
RTTI option can be used only when compiling C++
.

MessageId=734
Severity=Warning
Facility=System
SymbolicName=inaccessible_elided_cctor
Language=English
%%nf, required for copy that was eliminated, is inaccessible
.

MessageId=735
Severity=Warning
Facility=System
SymbolicName=uncallable_elided_cctor
Language=English
%%nf, required for copy that was eliminated, is not callable because reference parameter cannot be bound to rvalue
.

MessageId=736
Severity=Warning
Facility=System
SymbolicName=typeid_needs_typeinfo
Language=English
<typeinfo> must be included before typeid is used
.

MessageId=737
Severity=Warning
Facility=System
SymbolicName=cannot_cast_away_const
Language=English
%%s cannot cast away const or other type qualifiers
.

MessageId=738
Severity=Warning
Facility=System
SymbolicName=bad_dynamic_cast_type
Language=English
the type in a dynamic_cast must be a pointer or reference to a complete class type, or void *
.

MessageId=739
Severity=Warning
Facility=System
SymbolicName=bad_ptr_dynamic_cast_operand
Language=English
the operand of a pointer dynamic_cast must be a pointer to a complete class type
.

MessageId=740
Severity=Warning
Facility=System
SymbolicName=bad_ref_dynamic_cast_operand
Language=English
the operand of a reference dynamic_cast must be an lvalue of a complete class type
.

MessageId=741
Severity=Warning
Facility=System
SymbolicName=dynamic_cast_operand_must_be_polymorphic
Language=English
the operand of a runtime dynamic_cast must have a polymorphic class type
.

MessageId=742
Severity=Warning
Facility=System
SymbolicName=cl_bool_option_only_in_cplusplus
Language=English
bool option can be used only when compiling C++
.

MessageId=743
Severity=Warning
Facility=System
SymbolicName=tag_743
Language=English
ec_removed_743
.

MessageId=744
Severity=Warning
Facility=System
SymbolicName=array_type_not_allowed
Language=English
an array type is not allowed here
.

MessageId=745
Severity=Warning
Facility=System
SymbolicName=exp_assign
Language=English
expected an "="
.

MessageId=746
Severity=Warning
Facility=System
SymbolicName=exp_declarator_in_condition_decl
Language=English
expected a declarator in condition declaration
.

MessageId=747
Severity=Warning
Facility=System
SymbolicName=redeclaration_of_condition_decl_name
Language=English
%%sq, declared in condition, may not be redeclared in this scope
.

MessageId=748
Severity=Warning
Facility=System
SymbolicName=default_template_arg_not_allowed
Language=English
default template arguments are not allowed for function templates
.

MessageId=749
Severity=Warning
Facility=System
SymbolicName=exp_comma_or_gt
Language=English
expected a "," or ">"
.

MessageId=750
Severity=Warning
Facility=System
SymbolicName=missing_template_param_list
Language=English
expected a template parameter list
.

MessageId=751
Severity=Warning
Facility=System
SymbolicName=incr_of_bool_deprecated
Language=English
incrementing a bool value is deprecated
.

MessageId=752
Severity=Warning
Facility=System
SymbolicName=bool_type_not_allowed
Language=English
bool type is not allowed
.

MessageId=753
Severity=Warning
Facility=System
SymbolicName=base_class_offset_too_large
Language=English
offset of base class %%no1 within class %%no2 is too large
.

MessageId=754
Severity=Warning
Facility=System
SymbolicName=expr_not_bool
Language=English
expression must have bool type (or be convertible to bool)
.

MessageId=755
Severity=Warning
Facility=System
SymbolicName=cl_array_new_and_delete_option_only_in_cplusplus
Language=English
array new and delete option can be used only when compiling C++
.

MessageId=756
Severity=Warning
Facility=System
SymbolicName=based_requires_variable_name
Language=English
%%n is not a variable name
.

MessageId=757
Severity=Warning
Facility=System
SymbolicName=based_not_allowed_here
Language=English
__based modifier is not allowed here
.

MessageId=758
Severity=Warning
Facility=System
SymbolicName=based_not_followed_by_star
Language=English
__based does not precede a pointer operator, __based ignored
.

MessageId=759
Severity=Warning
Facility=System
SymbolicName=based_var_must_be_ptr
Language=English
variable in __based modifier must have pointer type
.

MessageId=760
Severity=Warning
Facility=System
SymbolicName=bad_const_cast_type
Language=English
the type in a const_cast must be a pointer, reference, or pointer to member to an object type
.

MessageId=761
Severity=Warning
Facility=System
SymbolicName=bad_const_cast
Language=English
a const_cast can only adjust type qualifiers; it cannot change the underlying type
.

MessageId=762
Severity=Warning
Facility=System
SymbolicName=mutable_not_allowed
Language=English
mutable is not allowed
.

MessageId=763
Severity=Warning
Facility=System
SymbolicName=cannot_change_access
Language=English
redeclaration of %%n is not allowed to alter its access
.

MessageId=764
Severity=Warning
Facility=System
SymbolicName=nonstd_printf_format_string
Language=English
nonstandard format string conversion
.

MessageId=765
Severity=Warning
Facility=System
SymbolicName=probable_inadvertent_lbracket_digraph
Language=English
use of alternative token "<:" appears to be unintended
.

MessageId=766
Severity=Warning
Facility=System
SymbolicName=probable_inadvertent_sharp_digraph
Language=English
use of alternative token "%%%%:" appears to be unintended
.

MessageId=767
Severity=Warning
Facility=System
SymbolicName=namespace_def_not_allowed
Language=English
namespace definition is not allowed
.

MessageId=768
Severity=Warning
Facility=System
SymbolicName=missing_namespace_name
Language=English
name must be a namespace name
.

MessageId=769
Severity=Warning
Facility=System
SymbolicName=namespace_alias_def_not_allowed
Language=English
namespace alias definition is not allowed
.

MessageId=770
Severity=Warning
Facility=System
SymbolicName=namespace_qualified_name_required
Language=English
namespace-qualified name is required
.

MessageId=771
Severity=Warning
Facility=System
SymbolicName=namespace_name_not_allowed
Language=English
a namespace name is not allowed
.

MessageId=772
Severity=Warning
Facility=System
SymbolicName=bad_combination_of_dll_attributes
Language=English
invalid combination of DLL attributes
.

MessageId=773
Severity=Warning
Facility=System
SymbolicName=sym_not_a_class_template
Language=English
%%n is not a class template
.

MessageId=774
Severity=Warning
Facility=System
SymbolicName=array_of_incomplete_type
Language=English
array with incomplete element type is nonstandard
.

MessageId=775
Severity=Warning
Facility=System
SymbolicName=allocation_operator_in_namespace
Language=English
allocation operator may not be declared in a namespace
.

MessageId=776
Severity=Warning
Facility=System
SymbolicName=deallocation_operator_in_namespace
Language=English
deallocation operator may not be declared in a namespace
.

MessageId=777
Severity=Warning
Facility=System
SymbolicName=conflicts_with_using_decl
Language=English
%%np1 conflicts with using-declaration of %%np2
.

MessageId=778
Severity=Warning
Facility=System
SymbolicName=using_decl_conflicts_with_prev_decl
Language=English
using-declaration of %%np1 conflicts with %%npd2
.

MessageId=779
Severity=Warning
Facility=System
SymbolicName=cl_namespaces_option_only_in_cplusplus
Language=English
namespaces option can be used only when compiling C++
.

MessageId=780
Severity=Warning
Facility=System
SymbolicName=useless_using_declaration
Language=English
using-declaration ignored -- it refers to the current namespace
.

MessageId=781
Severity=Warning
Facility=System
SymbolicName=class_qualified_name_required
Language=English
a class-qualified name is required
.

MessageId=782
Severity=Warning
Facility=System
SymbolicName=tag_782
Language=English
argument types are: (%%s)
.

MessageId=783
Severity=Warning
Facility=System
SymbolicName=tag_783
Language=English
operand types are: %%s
.

MessageId=784
Severity=Warning
Facility=System
SymbolicName=tag_784
Language=English
ec_removed_784
.

MessageId=785
Severity=Warning
Facility=System
SymbolicName=not_an_actual_member
Language=English
%%n has no actual member %%sq
.

MessageId=786
Severity=Warning
Facility=System
SymbolicName=tag_786
Language=English
ec_removed_786
.

MessageId=787
Severity=Warning
Facility=System
SymbolicName=mem_attrib_incompatible
Language=English
incompatible memory attributes specified
.

MessageId=788
Severity=Warning
Facility=System
SymbolicName=mem_attrib_ignored
Language=English
memory attribute ignored
.

MessageId=789
Severity=Warning
Facility=System
SymbolicName=mem_attrib_may_not_precede_nested_declarator
Language=English
memory attribute may not be followed by a nested declarator
.

MessageId=790
Severity=Warning
Facility=System
SymbolicName=dupl_mem_attrib
Language=English
memory attribute specified more than once
.

MessageId=791
Severity=Warning
Facility=System
SymbolicName=dupl_calling_convention
Language=English
calling convention specified more than once
.

MessageId=792
Severity=Warning
Facility=System
SymbolicName=type_qualifier_not_allowed
Language=English
a type qualifier is not allowed
.

MessageId=793
Severity=Warning
Facility=System
SymbolicName=template_instance_already_used
Language=English
%%npd1 was used before its template was declared
.

MessageId=794
Severity=Warning
Facility=System
SymbolicName=static_nonstatic_with_same_param_types
Language=English
static and nonstatic member functions with same parameter types cannot be overloaded
.

MessageId=795
Severity=Warning
Facility=System
SymbolicName=no_prior_declaration
Language=English
no prior declaration of %%np
.

MessageId=796
Severity=Warning
Facility=System
SymbolicName=template_id_not_allowed
Language=English
a template-id is not allowed
.

MessageId=797
Severity=Warning
Facility=System
SymbolicName=class_qualified_name_not_allowed
Language=English
a class-qualified name is not allowed
.

MessageId=798
Severity=Warning
Facility=System
SymbolicName=bad_scope_for_redeclaration
Language=English
%%n may not be redeclared in the current scope
.

MessageId=799
Severity=Warning
Facility=System
SymbolicName=qualifier_in_namespace_member_decl
Language=English
qualified name is not allowed in namespace member declaration
.

MessageId=800
Severity=Warning
Facility=System
SymbolicName=sym_not_a_type_name
Language=English
%%n is not a type name
.

MessageId=801
Severity=Warning
Facility=System
SymbolicName=explicit_instantiation_not_in_namespace_scope
Language=English
explicit instantiation is not allowed in the current scope
.

MessageId=802
Severity=Warning
Facility=System
SymbolicName=bad_scope_for_explicit_instantiation
Language=English
%%n cannot be explicitly instantiated in the current scope
.

MessageId=803
Severity=Warning
Facility=System
SymbolicName=multiple_explicit_instantiations
Language=English
%%n explicitly instantiated more than once
.

MessageId=804
Severity=Warning
Facility=System
SymbolicName=typename_not_in_template
Language=English
typename may only be used within a template
.

MessageId=805
Severity=Warning
Facility=System
SymbolicName=cl_special_subscript_cost_option_only_in_cplusplus
Language=English
special_subscript_cost option can be used only when compiling C++
.

MessageId=806
Severity=Warning
Facility=System
SymbolicName=cl_typename_option_only_in_cplusplus
Language=English
typename option can be used only when compiling C++
.

MessageId=807
Severity=Warning
Facility=System
SymbolicName=cl_implicit_typename_option_only_in_cplusplus
Language=English
implicit typename option can be used only when compiling C++
.

MessageId=808
Severity=Warning
Facility=System
SymbolicName=nonstd_character_at_start_of_macro_def
Language=English
nonstandard character at start of object-like macro definition
.

MessageId=809
Severity=Warning
Facility=System
SymbolicName=exception_spec_override_incompat
Language=English
exception specification for virtual %%n1 is incompatible with that of overridden %%n2
.

MessageId=810
Severity=Warning
Facility=System
SymbolicName=pointer_conversion_loses_bits
Language=English
conversion from %%t1 to %%t2 may lose significant bits
.

MessageId=811
Severity=Warning
Facility=System
SymbolicName=generated_exception_spec_override_incompat
Language=English
exception specification for implicitly declared virtual %%n1 is incompatible with that of overridden %%n2
.

MessageId=812
Severity=Warning
Facility=System
SymbolicName=implicit_call_of_ambiguous_name
Language=English
%%no1, implicitly called from %%np2, is ambiguous
.

MessageId=813
Severity=Warning
Facility=System
SymbolicName=cl_explicit_option_only_in_cplusplus
Language=English
option "explicit" can be used only when compiling C++
.

MessageId=814
Severity=Warning
Facility=System
SymbolicName=explicit_not_allowed
Language=English
"explicit" is not allowed
.

MessageId=815
Severity=Warning
Facility=System
SymbolicName=conflicts_with_predeclared_type_info
Language=English
declaration conflicts with %%sq (reserved class name)
.

MessageId=816
Severity=Warning
Facility=System
SymbolicName=array_member_initialization
Language=English
only "()" is allowed as initializer for array %%n
.

MessageId=817
Severity=Warning
Facility=System
SymbolicName=virtual_function_template
Language=English
"virtual" is not allowed in a function template declaration
.

MessageId=818
Severity=Warning
Facility=System
SymbolicName=anon_union_class_member_template
Language=English
invalid anonymous union -- class member template is not allowed
.

MessageId=819
Severity=Warning
Facility=System
SymbolicName=template_depth_mismatch
Language=English
template nesting depth does not match the previous declaration of %%n
.

MessageId=820
Severity=Warning
Facility=System
SymbolicName=multiple_template_decls_not_allowed
Language=English
this declaration cannot have multiple "template <...>" clauses
.

MessageId=821
Severity=Warning
Facility=System
SymbolicName=cl_old_for_init_option_only_in_cplusplus
Language=English
option to control the for-init scope can be used only when compiling C++
.

MessageId=822
Severity=Warning
Facility=System
SymbolicName=redeclaration_of_for_init_decl_name
Language=English
%%sq, declared in for-loop initialization, may not be redeclared in this scope
.

MessageId=823
Severity=Warning
Facility=System
SymbolicName=hidden_by_old_for_init
Language=English
reference is to %%nd1 -- under old for-init scoping rules it would have been %%nd2
.

MessageId=824
Severity=Warning
Facility=System
SymbolicName=cl_for_init_diff_warning_option_only_in_cplusplus
Language=English
option to control warnings on for-init differences can be used only when compiling C++
.

MessageId=825
Severity=Warning
Facility=System
SymbolicName=unnamed_class_virtual_function_def_missing
Language=English
definition of virtual %%n is required here
.

MessageId=826
Severity=Warning
Facility=System
SymbolicName=svr4_token_pasting_comment
Language=English
empty comment interpreted as token-pasting operator "##"
.

MessageId=827
Severity=Warning
Facility=System
SymbolicName=storage_class_in_friend_decl
Language=English
a storage class is not allowed in a friend declaration
.

MessageId=828
Severity=Warning
Facility=System
SymbolicName=templ_param_list_not_allowed
Language=English
template parameter list for %%no is not allowed in this declaration
.

MessageId=829
Severity=Warning
Facility=System
SymbolicName=bad_member_template_sym
Language=English
%%n is not a valid member class or function template
.

MessageId=830
Severity=Warning
Facility=System
SymbolicName=bad_member_template_decl
Language=English
not a valid member class or function template declaration
.

MessageId=831
Severity=Warning
Facility=System
SymbolicName=specialization_follows_param_list
Language=English
a template declaration containing a template parameter list may not be followed by an explicit specialization declaration
.

MessageId=832
Severity=Warning
Facility=System
SymbolicName=specialization_of_referenced_template
Language=English
explicit specialization of %%n1 must precede the first use of %%n2
.

MessageId=833
Severity=Warning
Facility=System
SymbolicName=explicit_specialization_not_in_namespace_scope
Language=English
explicit specialization is not allowed in the current scope
.

MessageId=834
Severity=Warning
Facility=System
SymbolicName=partial_specialization_not_allowed
Language=English
partial specialization of %%n is not allowed
.

MessageId=835
Severity=Warning
Facility=System
SymbolicName=entity_cannot_be_specialized
Language=English
%%nf is not an entity that can be explicitly specialized
.

MessageId=836
Severity=Warning
Facility=System
SymbolicName=specialization_of_referenced_entity
Language=English
explicit specialization of %%n must precede its first use
.

MessageId=837
Severity=Warning
Facility=System
SymbolicName=template_param_in_elab_type
Language=English
template parameter %%sq may not be used in an elaborated type specifier
.

MessageId=838
Severity=Warning
Facility=System
SymbolicName=old_specialization_not_allowed
Language=English
specializing %%n requires "template<>" syntax
.

MessageId=839
Severity=Warning
Facility=System
SymbolicName=tag_839
Language=English
ec_removed_839
.

MessageId=840
Severity=Warning
Facility=System
SymbolicName=tag_840
Language=English
ec_removed_840
.

MessageId=841
Severity=Warning
Facility=System
SymbolicName=cl_old_specializations_option_only_in_cplusplus
Language=English
option "old_specializations" can be used only when compiling C++
.

MessageId=842
Severity=Warning
Facility=System
SymbolicName=nonstd_old_specialization
Language=English
specializing %%n without "template<>" syntax is nonstandard
.

MessageId=843
Severity=Warning
Facility=System
SymbolicName=bad_linkage_for_decl
Language=English
this declaration may not have extern "C" linkage
.

MessageId=844
Severity=Warning
Facility=System
SymbolicName=not_a_template_name
Language=English
%%sq is not a class or function template name in the current scope
.

MessageId=845
Severity=Warning
Facility=System
SymbolicName=nonstd_default_arg_on_function_template_redecl
Language=English
specifying a default argument when redeclaring an unreferenced function template is nonstandard
.

MessageId=846
Severity=Warning
Facility=System
SymbolicName=default_arg_on_function_template_not_allowed
Language=English
specifying a default argument when redeclaring an already referenced function template is not allowed
.

MessageId=847
Severity=Warning
Facility=System
SymbolicName=pm_derived_class_from_virtual_base
Language=English
cannot convert pointer to member of base class %%t2 to pointer to member of derived class %%t1 -- base class is virtual
.

MessageId=848
Severity=Warning
Facility=System
SymbolicName=bad_exception_specification_for_specialization
Language=English
exception specification is incompatible with that of %%nd%%s=':'
.

MessageId=849
Severity=Warning
Facility=System
SymbolicName=omitted_exception_specification_on_specialization
Language=English
omission of exception specification is incompatible with %%nd
.

MessageId=850
Severity=Warning
Facility=System
SymbolicName=unexpected_end_of_default_arg
Language=English
unexpected end of default argument expression
.

MessageId=851
Severity=Warning
Facility=System
SymbolicName=default_init_of_reference
Language=English
default-initialization of reference is not allowed
.

MessageId=852
Severity=Warning
Facility=System
SymbolicName=uninitialized_field_with_const_member
Language=English
uninitialized %%n has a const member
.

MessageId=853
Severity=Warning
Facility=System
SymbolicName=uninitialized_base_class_with_const_member
Language=English
uninitialized base class %%t has a const member
.

MessageId=854
Severity=Warning
Facility=System
SymbolicName=missing_default_constructor_on_const
Language=English
const %%n requires an initializer -- class %%t has no explicitly declared default constructor
.

MessageId=855
Severity=Warning
Facility=System
SymbolicName=missing_default_constructor_on_unnamed_const
Language=English
const object requires an initializer -- class %%t has no explicitly declared default constructor
.

MessageId=856
Severity=Warning
Facility=System
SymbolicName=cl_impl_extern_c_conv_option_only_in_cplusplus
Language=English
option "implicit_extern_c_type_conversion" can be used only when compiling C++
.

MessageId=857
Severity=Warning
Facility=System
SymbolicName=cl_strict_ansi_incompatible_with_long_preserving
Language=English
strict ANSI mode is incompatible with long preserving rules
.

MessageId=858
Severity=Warning
Facility=System
SymbolicName=useless_type_qualifier_on_return_type
Language=English
type qualifier on return type is meaningless
.

MessageId=859
Severity=Warning
Facility=System
SymbolicName=type_qualifier_on_void_return_type
Language=English
in a function definition a type qualifier on a "void" return type is not allowed
.

MessageId=860
Severity=Warning
Facility=System
SymbolicName=static_data_member_not_allowed
Language=English
static data member declaration is not allowed in this class
.

MessageId=861
Severity=Warning
Facility=System
SymbolicName=invalid_declaration
Language=English
template instantiation resulted in an invalid function declaration
.

MessageId=862
Severity=Warning
Facility=System
SymbolicName=ellipsis_not_allowed
Language=English
"..." is not allowed
.

MessageId=863
Severity=Warning
Facility=System
SymbolicName=cl_extern_inline_option_only_in_cplusplus
Language=English
option "extern_inline" can be used only when compiling C++
.

MessageId=864
Severity=Warning
Facility=System
SymbolicName=extern_inline_never_defined
Language=English
extern inline %%n was referenced but not defined
.

MessageId=865
Severity=Warning
Facility=System
SymbolicName=invalid_destructor_name
Language=English
invalid destructor name for type %%t
.

MessageId=866
Severity=Warning
Facility=System
SymbolicName=tag_866
Language=English
ec_removed_866
.

MessageId=867
Severity=Warning
Facility=System
SymbolicName=ambiguous_destructor
Language=English
destructor reference is ambiguous -- both %%n1 and %%n2 could be used
.

MessageId=868
Severity=Warning
Facility=System
SymbolicName=virtual_inline_never_defined
Language=English
virtual inline %%n was never defined
.

MessageId=869
Severity=Warning
Facility=System
SymbolicName=unreferenced_function_param
Language=English
%%n was never referenced
.

MessageId=870
Severity=Warning
Facility=System
SymbolicName=union_already_initialized
Language=English
only one member of a union may be specified in a constructor initializer list
.

MessageId=871
Severity=Warning
Facility=System
SymbolicName=no_array_new_and_delete_support
Language=English
support for "new[]" and "delete[]" is disabled
.

MessageId=872
Severity=Warning
Facility=System
SymbolicName=double_for_long_double
Language=English
"double" used for "long double" in generated C code
.

MessageId=873
Severity=Warning
Facility=System
SymbolicName=no_corresponding_delete
Language=English
%%n has no corresponding operator delete%%s (to be called if an exception is thrown during initialization of an allocated object)
.

MessageId=874
Severity=Warning
Facility=System
SymbolicName=useless_placement_delete
Language=English
support for placement delete is disabled
.

MessageId=875
Severity=Warning
Facility=System
SymbolicName=no_appropriate_delete
Language=English
no appropriate operator delete is visible
.

MessageId=876
Severity=Warning
Facility=System
SymbolicName=ptr_or_ref_to_incomplete_type
Language=English
pointer or reference to incomplete type is not allowed
.

MessageId=877
Severity=Warning
Facility=System
SymbolicName=bad_partial_specialization
Language=English
invalid partial specialization -- %%n is already fully specialized
.

MessageId=878
Severity=Warning
Facility=System
SymbolicName=incompatible_exception_specs
Language=English
incompatible exception specifications
.

MessageId=879
Severity=Warning
Facility=System
SymbolicName=returning_ref_to_local_variable
Language=English
returning reference to local variable
.

MessageId=880
Severity=Warning
Facility=System
SymbolicName=nonstd_implicit_int
Language=English
omission of explicit type is nonstandard ("int" assumed)
.

MessageId=881
Severity=Warning
Facility=System
SymbolicName=ambiguous_partial_spec
Language=English
more than one partial specialization matches the template argument list of %%n
.

MessageId=882
Severity=Warning
Facility=System
SymbolicName=tag_882
Language=English
%%no
.

MessageId=883
Severity=Warning
Facility=System
SymbolicName=partial_spec_is_primary_template
Language=English
a template argument list is not allowed in a declaration of a primary template
.

MessageId=884
Severity=Warning
Facility=System
SymbolicName=default_not_allowed_on_partial_spec
Language=English
partial specializations may not have default template arguments
.

MessageId=885
Severity=Warning
Facility=System
SymbolicName=not_used_in_partial_spec_arg_list
Language=English
%%n1 is not used in template argument list of %%n2
.

MessageId=886
Severity=Warning
Facility=System
SymbolicName=tag_886
Language=English
ec_removed_886
.

MessageId=887
Severity=Warning
Facility=System
SymbolicName=partial_spec_arg_depends_on_templ_param
Language=English
the template argument list of the partial specialization includes a nontype argument whose type depends on a template parameter
.

MessageId=888
Severity=Warning
Facility=System
SymbolicName=partial_spec_after_instantiation
Language=English
this partial specialization would have been used to instantiate %%n
.

MessageId=889
Severity=Warning
Facility=System
SymbolicName=partial_spec_after_instantiation_ambiguous
Language=English
this partial specialization would have been made the instantiation of %%n ambiguous
.

MessageId=890
Severity=Warning
Facility=System
SymbolicName=expr_not_integral_or_enum
Language=English
expression must have integral or enum type
.

MessageId=891
Severity=Warning
Facility=System
SymbolicName=expr_not_arithmetic_or_enum
Language=English
expression must have arithmetic or enum type
.

MessageId=892
Severity=Warning
Facility=System
SymbolicName=expr_not_arithmetic_or_enum_or_pointer
Language=English
expression must have arithmetic, enum, or pointer type
.

MessageId=893
Severity=Warning
Facility=System
SymbolicName=cast_not_integral_or_enum
Language=English
type of cast must be integral or enum
.

MessageId=894
Severity=Warning
Facility=System
SymbolicName=cast_not_arithmetic_or_enum_or_pointer
Language=English
type of cast must be arithmetic, enum, or pointer
.

MessageId=895
Severity=Warning
Facility=System
SymbolicName=expr_not_object_pointer
Language=English
expression must be a pointer to a complete object type
.

MessageId=896
Severity=Warning
Facility=System
SymbolicName=tag_896
Language=English
ec_removed_896
.

MessageId=897
Severity=Warning
Facility=System
SymbolicName=partial_spec_nontype_expr
Language=English
a partial specialization nontype argument must be the name of a nontype parameter or a constant
.

MessageId=898
Severity=Warning
Facility=System
SymbolicName=different_return_type_on_virtual_function_override
Language=English
return type is not identical to return type %%t of overridden virtual function %%n
.

MessageId=899
Severity=Warning
Facility=System
SymbolicName=cl_guiding_decls_option_only_in_cplusplus
Language=English
option "guiding_decls" can be used only when compiling C++
.

MessageId=900
Severity=Warning
Facility=System
SymbolicName=member_partial_spec_not_in_namespace
Language=English
a partial specialization of a class template must be declared in the namespace of which it is a member
.

MessageId=901
Severity=Warning
Facility=System
SymbolicName=pure_virtual_function
Language=English
%%n is a pure virtual function
.

MessageId=902
Severity=Warning
Facility=System
SymbolicName=no_overrider_for_pure_virtual_function
Language=English
pure virtual %%n has no overrider
.

MessageId=903
Severity=Warning
Facility=System
SymbolicName=decl_modifiers_ignored
Language=English
__declspec attributes ignored
.

MessageId=904
Severity=Warning
Facility=System
SymbolicName=invalid_char
Language=English
invalid character in input line
.

MessageId=905
Severity=Warning
Facility=System
SymbolicName=incomplete_return_type
Language=English
function returns incomplete type %%t
.

MessageId=906
Severity=Warning
Facility=System
SymbolicName=local_pragma_pack
Language=English
effect of this "#pragma pack" directive is local to %%n
.

MessageId=907
Severity=Warning
Facility=System
SymbolicName=not_a_template
Language=English
%%s is not a template
.

MessageId=908
Severity=Warning
Facility=System
SymbolicName=friend_partial_specialization
Language=English
a friend declaration may not declare a partial specialization
.

MessageId=909
Severity=Warning
Facility=System
SymbolicName=exception_specification_ignored
Language=English
exception specification ignored
.

MessageId=910
Severity=Warning
Facility=System
SymbolicName=unexpected_type_for_size_t
Language=English
declaration of "size_t" does not match the expected type %%t
.

MessageId=911
Severity=Warning
Facility=System
SymbolicName=exp_gt_not_shift_right
Language=English
space required between adjacent ">" delimiters of nested template argument lists (">>" is the right shift operator)
.

MessageId=912
Severity=Warning
Facility=System
SymbolicName=bad_multibyte_char_locale
Language=English
could not set locale %%sq to allow processing of multibyte characters
.

MessageId=913
Severity=Warning
Facility=System
SymbolicName=bad_multibyte_char
Language=English
invalid multibyte character sequence
.

MessageId=914
Severity=Warning
Facility=System
SymbolicName=bad_type_from_instantiation
Language=English
template instantiation resulted in unexpected function type of %%t1 (the meaning of a name may have changed since the template declaration -- the type of the template is %%t2)
.

MessageId=915
Severity=Warning
Facility=System
SymbolicName=ambiguous_guiding_decl
Language=English
ambiguous guiding declaration -- more than one function template %%no matches type %%t
.

MessageId=916
Severity=Warning
Facility=System
SymbolicName=non_integral_operation_in_templ_arg
Language=English
non-integral operation not allowed in nontype template argument
.

MessageId=917
Severity=Warning
Facility=System
SymbolicName=cl_embedded_cplusplus_option_only_in_cplusplus
Language=English
option "embedded_c++" can be used only when compiling C++
.

MessageId=918
Severity=Warning
Facility=System
SymbolicName=templates_in_embedded_cplusplus
Language=English
Embedded C++ does not support templates
.

MessageId=919
Severity=Warning
Facility=System
SymbolicName=exceptions_in_embedded_cplusplus
Language=English
Embedded C++ does not support exception handling
.

MessageId=920
Severity=Warning
Facility=System
SymbolicName=namespaces_in_embedded_cplusplus
Language=English
Embedded C++ does not support namespaces
.

MessageId=921
Severity=Warning
Facility=System
SymbolicName=rtti_in_embedded_cplusplus
Language=English
Embedded C++ does not support run-time type information
.

MessageId=922
Severity=Warning
Facility=System
SymbolicName=new_cast_in_embedded_cplusplus
Language=English
Embedded C++ does not support the new cast syntax
.

MessageId=923
Severity=Warning
Facility=System
SymbolicName=using_decl_in_embedded_cplusplus
Language=English
Embedded C++ does not support using-declarations
.

MessageId=924
Severity=Warning
Facility=System
SymbolicName=mutable_in_embedded_cplusplus
Language=English
Embedded C++ does not support "mutable"
.

MessageId=925
Severity=Warning
Facility=System
SymbolicName=multiple_inheritance_in_embedded_cplusplus
Language=English
Embedded C++ does not support multiple or virtual inheritance
.

MessageId=926
Severity=Warning
Facility=System
SymbolicName=cl_invalid_microsoft_version
Language=English
invalid Microsoft version number: 
.

MessageId=927
Severity=Warning
Facility=System
SymbolicName=inheritance_kind_already_set
Language=English
pointer-to-member representation %%sq has already been set for %%n
.

MessageId=928
Severity=Warning
Facility=System
SymbolicName=bad_constructor_type
Language=English
%%t1 cannot be used to designate constructor for %%t2
.

MessageId=929
Severity=Warning
Facility=System
SymbolicName=bad_suffix
Language=English
invalid suffix on integral constant
.

MessageId=930
Severity=Warning
Facility=System
SymbolicName=uuidof_requires_uuid_class_type
Language=English
operand of __uuidof must have a class or enum type for which __declspec(uuid("...")) has been specified
.

MessageId=931
Severity=Warning
Facility=System
SymbolicName=bad_uuid_string
Language=English
invalid GUID string in __declspec(uuid("..."))
.

MessageId=932
Severity=Warning
Facility=System
SymbolicName=cl_vla_option_only_in_C
Language=English
option "vla" can be used only when compiling C
.

MessageId=933
Severity=Warning
Facility=System
SymbolicName=vla_with_unspecified_bound_not_allowed
Language=English
variable length array with unspecified bound is not allowed
.

MessageId=934
Severity=Warning
Facility=System
SymbolicName=explicit_template_args_not_allowed
Language=English
an explicit template argument list is not allowed on this declaration
.

MessageId=935
Severity=Warning
Facility=System
SymbolicName=variably_modified_type_not_allowed
Language=English
an entity with linkage cannot have a type involving a variable length array
.

MessageId=936
Severity=Warning
Facility=System
SymbolicName=vla_is_not_auto
Language=English
a variable length array cannot have static storage duration
.

MessageId=937
Severity=Warning
Facility=System
SymbolicName=sym_not_a_template
Language=English
%%n is not a template
.

MessageId=938
Severity=Warning
Facility=System
SymbolicName=tag_938
Language=English
variable length array dimension (declared %%p)
.

MessageId=939
Severity=Warning
Facility=System
SymbolicName=expected_template_arg
Language=English
expected a template argument
.

MessageId=940
Severity=Warning
Facility=System
SymbolicName=tag_940
Language=English
ec_removed_940
.

MessageId=941
Severity=Warning
Facility=System
SymbolicName=no_params_with_class_or_enum_type
Language=English
nonmember operator requires a parameter with class or enum type
.

MessageId=942
Severity=Warning
Facility=System
SymbolicName=cl_enum_overloading_option_only_in_cplusplus
Language=English
option "enum_overloading" can be used only when compiling C++
.

MessageId=943
Severity=Warning
Facility=System
SymbolicName=tag_943
Language=English
ec_removed_943
.

MessageId=944
Severity=Warning
Facility=System
SymbolicName=destructor_qualifier_type_mismatch
Language=English
qualifier of destructor name %%t1 does not match type %%t2
.

MessageId=945
Severity=Warning
Facility=System
SymbolicName=type_qualifier_ignored
Language=English
type qualifier ignored
.

MessageId=946
Severity=Warning
Facility=System
SymbolicName=cl_nonstandard_qualifier_deduction_option_only_in_cplusplus
Language=English
option "nonstd_qualifier_deduction" can be used only when compiling C++
.

MessageId=947
Severity=Warning
Facility=System
SymbolicName=tag_947
Language=English
ec_removed_947
.

MessageId=948
Severity=Warning
Facility=System
SymbolicName=bad_declspec_property
Language=English
incorrect property specification; correct form is __declspec(property(get=name1,put=name2))
.

MessageId=949
Severity=Warning
Facility=System
SymbolicName=dupl_get_or_put
Language=English
property has already been specified
.

MessageId=950
Severity=Warning
Facility=System
SymbolicName=declspec_property_not_allowed
Language=English
__declspec(property) is not allowed on this declaration
.

MessageId=951
Severity=Warning
Facility=System
SymbolicName=no_get_property
Language=English
member is declared with __declspec(property), but no "get" function was specified
.

MessageId=952
Severity=Warning
Facility=System
SymbolicName=get_property_function_missing
Language=English
the __declspec(property) "get" function %%sq is missing
.

MessageId=953
Severity=Warning
Facility=System
SymbolicName=no_put_property
Language=English
member is declared with __declspec(property), but no "put" function was specified
.

MessageId=954
Severity=Warning
Facility=System
SymbolicName=put_property_function_missing
Language=English
the __declspec(property) "put" function %%sq is missing
.

MessageId=955
Severity=Warning
Facility=System
SymbolicName=dual_lookup_ambiguous_name
Language=English
ambiguous class member reference -- %%nd1 used in preference to %%nd2
.

MessageId=956
Severity=Warning
Facility=System
SymbolicName=bad_allocate_segname
Language=English
missing or invalid segment name in __declspec(allocate("..."))
.

MessageId=957
Severity=Warning
Facility=System
SymbolicName=declspec_allocate_not_allowed
Language=English
__declspec(allocate) is not allowed on this declaration
.

MessageId=958
Severity=Warning
Facility=System
SymbolicName=dupl_allocate_segname
Language=English
a segment name has already been specified
.

MessageId=959
Severity=Warning
Facility=System
SymbolicName=undeclared_segment_name
Language=English
segment name must be declared in a pragma
.

MessageId=960
Severity=Warning
Facility=System
SymbolicName=illegal_segment_pragma_redeclaration
Language=English
illegal segment pragma redeclaration
.

MessageId=961
Severity=Warning
Facility=System
SymbolicName=cl_invalid_import_wrapper_output_file
Language=English
invalid import wrapper output file 
.

MessageId=962
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_import_wrapper_output_file
Language=English
cannot open import wrapper output file 
.

MessageId=963
Severity=Warning
Facility=System
SymbolicName=no_emms_before_return
Language=English
no EMMS instruction before return
.

MessageId=964
Severity=Warning
Facility=System
SymbolicName=no_emms_before_call
Language=English
no EMMS instruction before call
.

MessageId=965
Severity=Warning
Facility=System
SymbolicName=no_emms_before_float_op
Language=English
no EMMS instruction before floating-point operation
.

MessageId=966
Severity=Warning
Facility=System
SymbolicName=mmx_float_mix
Language=English
mixing floating-point and MMX(TM) instructions may hurt performance
.

MessageId=967
Severity=Warning
Facility=System
SymbolicName=pointer_conversion_size_mismatch
Language=English
conversion from %%t1 to %%t2; sizes do not match
.

MessageId=968
Severity=Warning
Facility=System
SymbolicName=pm_virtual_base_from_derived_class
Language=English
cannot convert pointer to member of derived class %%t1 to pointer to member of base class %%t2 -- base class is virtual
.

MessageId=969
Severity=Warning
Facility=System
SymbolicName=cl_invalid_instantiation_directory
Language=English
invalid directory for instantiation files: 
.

MessageId=970
Severity=Warning
Facility=System
SymbolicName=cl_one_instantiation_per_object_option_only_in_cplusplus
Language=English
option "one_instantiation_per_object" can be used only when compiling C++
.

MessageId=971
Severity=Warning
Facility=System
SymbolicName=invalid_output_file
Language=English
invalid output file: %%sq
.

MessageId=972
Severity=Warning
Facility=System
SymbolicName=cannot_open_output_file
Language=English
cannot open output file: %%sq
.

MessageId=973
Severity=Warning
Facility=System
SymbolicName=cl_ii_file_name_incompatible_with_multiple_inputs
Language=English
an instantiation information file name may not be specified when compiling several input files
.

MessageId=974
Severity=Warning
Facility=System
SymbolicName=cl_one_instantiation_per_object_incompatible_with_multiple_inputs
Language=English
option "one_instantiation_per_object" may not be used when compiling several input files
.

MessageId=975
Severity=Warning
Facility=System
SymbolicName=cl_ambiguous_option
Language=English
more than one command line option matches the abbreviation "--%%s":
.

MessageId=976
Severity=Warning
Facility=System
SymbolicName=tag_976
Language=English
--%%s
.

MessageId=977
Severity=Warning
Facility=System
SymbolicName=cv_qualified_function_type
Language=English
type qualifiers on function types are ignored
.

MessageId=978
Severity=Warning
Facility=System
SymbolicName=cannot_open_definition_list_file
Language=English
cannot open definition list file: %%sq
.

MessageId=979
Severity=Warning
Facility=System
SymbolicName=cl_late_tiebreaker_option_only_in_cplusplus
Language=English
late/early tiebreaker option can be used only when compiling C++
.

MessageId=980
Severity=Warning
Facility=System
SymbolicName=intrinsic_argument_count
Language=English
wrong number of actual arguments to intrinsic function %%sq
.

MessageId=981
Severity=Warning
Facility=System
SymbolicName=order_of_evaluation_unspecified
Language=English
operands are evaluated in unspecified order
.

MessageId=982
Severity=Warning
Facility=System
SymbolicName=bad_mmx_type_declaration
Language=English
erroneous type declaration; check that your compiler and header files match
.

MessageId=983
Severity=Warning
Facility=System
SymbolicName=bad_cpu_name
Language=English
not a valid CPU name
.

MessageId=984
Severity=Warning
Facility=System
SymbolicName=too_many_segments
Language=English
too many segments in object file
.

MessageId=985
Severity=Warning
Facility=System
SymbolicName=name_truncated
Language=English
identifier %%sq was truncated in debug information
.

MessageId=986
Severity=Warning
Facility=System
SymbolicName=declaration_changes_in_ANSI_C
Language=English
declaration introduces new type in standard C
.

MessageId=987
Severity=Warning
Facility=System
SymbolicName=modifying_typedef
Language=English
typedef may not be modified in standard C
.

MessageId=988
Severity=Warning
Facility=System
SymbolicName=always_true_compare
Language=English
comparison always evaluates to true
.

MessageId=989
Severity=Warning
Facility=System
SymbolicName=always_false_compare
Language=English
comparison always evaluates to false
.

MessageId=990
Severity=Warning
Facility=System
SymbolicName=nonportable_path
Language=English
#include of %%sq may be non-portable
.

MessageId=991
Severity=Warning
Facility=System
SymbolicName=slash_comments_are_nonstandard
Language=English
//-style comments are nonstandard
.

MessageId=992
Severity=Warning
Facility=System
SymbolicName=nonstd_macro_recursion
Language=English
macro recursion is nonstandard
.

MessageId=993
Severity=Warning
Facility=System
SymbolicName=macro_replacement_in_string
Language=English
macro replacement within a string literal or character constant
.

MessageId=994
Severity=Warning
Facility=System
SymbolicName=pragma_qualifier_conflict
Language=English
invalid combination of pragma qualifiers
.

MessageId=995
Severity=Warning
Facility=System
SymbolicName=unknown_pragma_qualifier
Language=English
unknown pragma qualifier
.

MessageId=996
Severity=Warning
Facility=System
SymbolicName=intrinsic_argument_out_of_range
Language=English
value of immediate argument to intrinsic is out of range
.

MessageId=997
Severity=Warning
Facility=System
SymbolicName=no_emms_in_function
Language=English
function uses MMX(TM) instructions, but contains no EMMS instruction
.

MessageId=998
Severity=Warning
Facility=System
SymbolicName=ebx_in_stack_align
Language=English
reference to EBX in a function requiring stack alignment
.

MessageId=999
Severity=Warning
Facility=System
SymbolicName=bad_va_start
Language=English
incorrect use of va_start
.

MessageId=1000
Severity=Warning
Facility=System
SymbolicName=bad_va_arg
Language=English
incorrect use of va_arg
.

MessageId=1001
Severity=Warning
Facility=System
SymbolicName=bad_va_end
Language=English
incorrect use of va_end
.

MessageId=1002
Severity=Warning
Facility=System
SymbolicName=cl_pending_instantiations_option_only_in_cplusplus
Language=English
pending instantiations option can be used only when compiling C++
.

MessageId=1003
Severity=Warning
Facility=System
SymbolicName=cl_invalid_import_directory
Language=English
invalid directory for #import files: 
.

MessageId=1004
Severity=Warning
Facility=System
SymbolicName=cl_import_only_in_microsoft
Language=English
an import directory can be specified only in Microsoft mode
.

MessageId=1005
Severity=Warning
Facility=System
SymbolicName=ref_not_allowed_in_union
Language=English
a member with reference type is not allowed in a union
.

MessageId=1006
Severity=Warning
Facility=System
SymbolicName=typedef_not_allowed
Language=English
"typedef" may not be specified here
.

MessageId=1007
Severity=Warning
Facility=System
SymbolicName=redecl_changes_access
Language=English
redeclaration of %%n alters its access
.

MessageId=1008
Severity=Warning
Facility=System
SymbolicName=qualified_name_required
Language=English
a class or namespace qualified name is required
.

MessageId=1009
Severity=Warning
Facility=System
SymbolicName=implicit_int_on_main
Language=English
return type "int" omitted in declaration of function "main"
.

MessageId=1010
Severity=Warning
Facility=System
SymbolicName=invalid_inheritance_kind_for_class
Language=English
pointer-to-member representation %%sq is too restrictive for %%n
.

MessageId=1011
Severity=Warning
Facility=System
SymbolicName=implicit_return_from_non_void_function
Language=English
missing return statement at end of non-void %%n
.

MessageId=1012
Severity=Warning
Facility=System
SymbolicName=duplicate_using_decl
Language=English
duplicate using-declaration of %%no ignored
.

MessageId=1013
Severity=Warning
Facility=System
SymbolicName=unsigned_enum_bit_field_with_signed_enumerator
Language=English
enum bit-fields are always unsigned, but enum %%t includes negative enumerator
.

MessageId=1014
Severity=Warning
Facility=System
SymbolicName=cl_class_name_injection_option_only_in_cplusplus
Language=English
option "class_name_injection" can be used only when compiling C++
.

MessageId=1015
Severity=Warning
Facility=System
SymbolicName=cl_arg_dependent_lookup_option_only_in_cplusplus
Language=English
option "arg_dep_lookup" can be used only when compiling C++
.

MessageId=1016
Severity=Warning
Facility=System
SymbolicName=cl_friend_injection_option_only_in_cplusplus
Language=English
option "friend_injection" can be used only when compiling C++
.

MessageId=1017
Severity=Warning
Facility=System
SymbolicName=invalid_name_after_template
Language=English
name following "template" must be a member template
.

MessageId=1018
Severity=Warning
Facility=System
SymbolicName=tag_1018
Language=English
ec_removed_1018
.

MessageId=1019
Severity=Warning
Facility=System
SymbolicName=conflicting_section_attributes
Language=English
conflicting section attributes
.

MessageId=1020
Severity=Warning
Facility=System
SymbolicName=ignore_attributes_standard_section
Language=English
attributes for standard section %%sq ignored
.

MessageId=1021
Severity=Warning
Facility=System
SymbolicName=unexpected_section
Language=English
Unexpected section %%sq
.

MessageId=1022
Severity=Warning
Facility=System
SymbolicName=empty_pointer_size_stack
Language=English
#pragma pointer_size(pop...) : more pops than pushes
.

MessageId=1023
Severity=Warning
Facility=System
SymbolicName=no_matching_id_on_pointer_size_stack
Language=English
#pragma pointer_size(pop,...) : did not find previously pushed identifier %%sq
.

MessageId=1024
Severity=Warning
Facility=System
SymbolicName=bad_pointer_size
Language=English
expected pragma pointer_size parameter to be '32' or '64'
.

MessageId=1025
Severity=Warning
Facility=System
SymbolicName=unary_zero_extend
Language=English
zero extending result of unary operation
.

MessageId=1026
Severity=Warning
Facility=System
SymbolicName=pragma_not_global_scope
Language=English
pragma %%s should be at global scope
.

MessageId=1027
Severity=Warning
Facility=System
SymbolicName=mixed_ceh_and_seh
Language=English
__try in function containing objects with destructors
.

MessageId=1028
Severity=Warning
Facility=System
SymbolicName=unknown_warning_specifier
Language=English
unknown warning specifier
.

MessageId=1029
Severity=Warning
Facility=System
SymbolicName=warning_level_out_of_range
Language=English
warning level out of range, expected value between 1 and 4
.

MessageId=1030
Severity=Warning
Facility=System
SymbolicName=expected_warning_number
Language=English
expected a warning number
.

MessageId=1031
Severity=Warning
Facility=System
SymbolicName=pop_without_push
Language=English
pop without corresponding push
.

MessageId=1032
Severity=Warning
Facility=System
SymbolicName=omp_directive
Language=English
syntax error in omp directive
.

MessageId=1033
Severity=Warning
Facility=System
SymbolicName=omp_unsupported_directive
Language=English
unsupported omp directive
.

MessageId=1034
Severity=Warning
Facility=System
SymbolicName=omp_unimplemented_directive
Language=English
unimplemented omp directive
.

MessageId=1035
Severity=Warning
Facility=System
SymbolicName=omp_clause
Language=English
syntax error in %%s clause
.

MessageId=1036
Severity=Warning
Facility=System
SymbolicName=omp_unsupported_clause
Language=English
unsupported omp clause
.

MessageId=1037
Severity=Warning
Facility=System
SymbolicName=omp_unimplemented_clause
Language=English
unimplemented omp clause
.

MessageId=1038
Severity=Warning
Facility=System
SymbolicName=omp_clause_symbol
Language=English
invalid entity for this variable list in %%s clause
.

MessageId=1039
Severity=Warning
Facility=System
SymbolicName=omp_incompatible_clause
Language=English
%%s clause is incompatible with directive
.

MessageId=1040
Severity=Warning
Facility=System
SymbolicName=omp_two_if
Language=English
directive cannot contain more than one if clause
.

MessageId=1041
Severity=Warning
Facility=System
SymbolicName=omp_two_schedule
Language=English
directive cannot contain more than one schedule clause
.

MessageId=1042
Severity=Warning
Facility=System
SymbolicName=omp_two_nowait
Language=English
directive cannot contain more than one nowait clause
.

MessageId=1043
Severity=Warning
Facility=System
SymbolicName=omp_two_default
Language=English
directive cannot contain more than one default clause
.

MessageId=1044
Severity=Warning
Facility=System
SymbolicName=omp_no_cpp
Language=English
unsupported C++ object in data access clause
.

MessageId=1045
Severity=Warning
Facility=System
SymbolicName=omp_bad_for_init
Language=English
OpenMP for-init does not conform
.

MessageId=1046
Severity=Warning
Facility=System
SymbolicName=omp_bad_for_test
Language=English
OpenMP for-test does not conform
.

MessageId=1047
Severity=Warning
Facility=System
SymbolicName=omp_bad_for_incr
Language=English
OpenMP for-incr does not conform
.

MessageId=1048
Severity=Warning
Facility=System
SymbolicName=omp_nested_critical_same_name
Language=English
nested critical directives with same name
.

MessageId=1049
Severity=Warning
Facility=System
SymbolicName=omp_two_ordered
Language=English
directive cannot contain more than one ordered clause
.

MessageId=1050
Severity=Warning
Facility=System
SymbolicName=omp_expecting_for
Language=English
omp for directive requires a proceeding for statement
.

MessageId=1051
Severity=Warning
Facility=System
SymbolicName=negative_chunk_size
Language=English
negative chunk size not allowed
.

MessageId=1052
Severity=Warning
Facility=System
SymbolicName=misplaced_qualifier
Language=English
qualifier should be after "*"
.

MessageId=1053
Severity=Warning
Facility=System
SymbolicName=omp_break_in_region
Language=English
break cannot be used to exit %%s region
.

MessageId=1054
Severity=Warning
Facility=System
SymbolicName=omp_illegal_return
Language=English
illegal return in %%s construct
.

MessageId=1055
Severity=Warning
Facility=System
SymbolicName=omp_illegal_branch
Language=English
illegal branch into omp construct
.

MessageId=1056
Severity=Warning
Facility=System
SymbolicName=master_in_for
Language=English
master directive is not allowed in extent of for, sections, single, and taskq directives
.

MessageId=1057
Severity=Warning
Facility=System
SymbolicName=for_in_master
Language=English
for, sections, single, or taskq directive is not allowed in extent of critical, master, and ordered directives
.

MessageId=1058
Severity=Warning
Facility=System
SymbolicName=barrier_in_master
Language=English
barrier directive is not allowed in extent of for, sections, single, taskq, critical, master, and ordered directives
.

MessageId=1059
Severity=Warning
Facility=System
SymbolicName=omp_barrier_contain_in_nonblock
Language=English
the smallest statement containing a barrier or flush must be a block or compound statement
.

MessageId=1060
Severity=Warning
Facility=System
SymbolicName=omp_case_sensitive
Language=English
Open MP directives are case sensitive
.

MessageId=1061
Severity=Warning
Facility=System
SymbolicName=omp_directive_nonblock
Language=English
directive bound to nonblock
.

MessageId=1062
Severity=Warning
Facility=System
SymbolicName=omp_illegal_nesting_in_parallel
Language=English
for, sections, single, and taskq directives cannot be nested if bound to the same parallel directive
.

MessageId=1063
Severity=Warning
Facility=System
SymbolicName=omp_illegal_copyin
Language=English
copyin variable must be threadprivate
.

MessageId=1064
Severity=Warning
Facility=System
SymbolicName=omp_atomic_bad_op
Language=English
Illegal operation in atomic expression
.

MessageId=1065
Severity=Warning
Facility=System
SymbolicName=omp_atomic_bad_expr
Language=English
Atomic is bound to an illegal construct
.

MessageId=1066
Severity=Warning
Facility=System
SymbolicName=omp_illegal_default_none_var
Language=English
Illegal reference to variable under default none
.

MessageId=1067
Severity=Warning
Facility=System
SymbolicName=omp_bad_for_init_signed
Language=English
Open MP for-init variable should be signed integer type
.

MessageId=1068
Severity=Warning
Facility=System
SymbolicName=tag_1068
Language=English
ec_removed_1068
.

MessageId=1069
Severity=Warning
Facility=System
SymbolicName=omp_threadprivate_var_illegal_access_clause
Language=English
threadprivate variable cannot appear in private, firstprivate, lastprivate, captureprivate, shared, or reduction clauses
.

MessageId=1070
Severity=Warning
Facility=System
SymbolicName=omp_const_reduction_var
Language=English
reduction variable cannot be const-qualified
.

MessageId=1071
Severity=Warning
Facility=System
SymbolicName=float_not_supported
Language=English
Floating-point types are not supported by EFI target
.

MessageId=1072
Severity=Warning
Facility=System
SymbolicName=not_enough_preallocated_memory_recompile
Language=English
insufficient preallocated memory for generation of precompiled header file: producing %%s and recompiling
.

MessageId=1073
Severity=Warning
Facility=System
SymbolicName=could_not_create_pchs
Language=English
error creating pchs file
.

MessageId=1074
Severity=Warning
Facility=System
SymbolicName=omp_threadprivate_scope
Language=English
threadprivate directive must be at file or namespace scope or have static storage
.

MessageId=1075
Severity=Warning
Facility=System
SymbolicName=omp_bad_threadprivate_var
Language=English
threadprivate variable should not be incomplete or reference type
.

MessageId=1076
Severity=Warning
Facility=System
SymbolicName=local_class_friend_requires_prior_decl
Language=English
nonstandard local-class friend declaration -- no prior declaration in the enclosing scope
.

MessageId=1077
Severity=Warning
Facility=System
SymbolicName=nonstd_default_arg
Language=English
specifying a default argument on this declaration is nonstandard
.

MessageId=1078
Severity=Warning
Facility=System
SymbolicName=cl_nonstd_using_decl_option_only_in_cplusplus
Language=English
option "nonstd_using_decl" can be used only when compiling C++
.

MessageId=1079
Severity=Warning
Facility=System
SymbolicName=bad_return_type_on_main
Language=English
return type of function "main" must be "int"
.

MessageId=1080
Severity=Warning
Facility=System
SymbolicName=template_parameter_has_class_type
Language=English
a nontype template parameter may not have class type
.

MessageId=1081
Severity=Warning
Facility=System
SymbolicName=default_arg_on_member_decl
Language=English
a default template argument cannot be specified on the declaration of a member of a class template outside of its class
.

MessageId=1082
Severity=Warning
Facility=System
SymbolicName=return_from_ctor_function_try_block_handler
Language=English
a return statement is not allowed in a handler of a function try block of a constructor
.

MessageId=1083
Severity=Warning
Facility=System
SymbolicName=no_ordinary_and_extended_designators
Language=English
ordinary and extended designators cannot be combined in an initializer designation
.

MessageId=1084
Severity=Warning
Facility=System
SymbolicName=no_negative_designator_range
Language=English
the second subscript must not be smaller than the first
.

MessageId=1085
Severity=Warning
Facility=System
SymbolicName=cl_designators_option_only_in_C
Language=English
option "designators" can be used only when compiling C
.

MessageId=1086
Severity=Warning
Facility=System
SymbolicName=cl_extended_designators_option_only_in_C
Language=English
option "extended_designators" can be used only when compiling C
.

MessageId=1087
Severity=Warning
Facility=System
SymbolicName=extra_bits_ignored
Language=English
declared size for bit field is larger than the size of the bit field type; truncated to %%s bits
.

MessageId=1088
Severity=Warning
Facility=System
SymbolicName=constructor_type_mismatch
Language=English
type used as constructor name does not match type %%t
.

MessageId=1089
Severity=Warning
Facility=System
SymbolicName=type_with_no_linkage_in_var_with_linkage
Language=English
use of a type with no linkage to declare a variable with linkage
.

MessageId=1090
Severity=Warning
Facility=System
SymbolicName=type_with_no_linkage_in_function
Language=English
use of a type with no linkage to declare a function
.

MessageId=1091
Severity=Warning
Facility=System
SymbolicName=return_type_on_constructor
Language=English
return type may not be specified on a constructor
.

MessageId=1092
Severity=Warning
Facility=System
SymbolicName=return_type_on_destructor
Language=English
return type may not be specified on a destructor
.

MessageId=1093
Severity=Warning
Facility=System
SymbolicName=malformed_universal_character
Language=English
incorrectly formed universal character name
.

MessageId=1094
Severity=Warning
Facility=System
SymbolicName=invalid_UCN
Language=English
universal character name specifies an invalid character
.

MessageId=1095
Severity=Warning
Facility=System
SymbolicName=UCN_names_basic_char
Language=English
a universal character name cannot designate a character in the basic character set
.

MessageId=1096
Severity=Warning
Facility=System
SymbolicName=invalid_identifier_UCN
Language=English
this universal character is not allowed in an identifier
.

MessageId=1097
Severity=Warning
Facility=System
SymbolicName=VA_ARGS_not_allowed
Language=English
the identifier __VA_ARGS__ can only appear in the replacement lists of variadic macros
.

MessageId=1098
Severity=Warning
Facility=System
SymbolicName=friend_qualification_ignored
Language=English
the qualifier on this friend declaration is ignored
.

MessageId=1099
Severity=Warning
Facility=System
SymbolicName=no_range_designator_with_dynamic_init
Language=English
array range designators cannot be applied to dynamic initializers
.

MessageId=1100
Severity=Warning
Facility=System
SymbolicName=property_name_not_allowed
Language=English
property name cannot appear here
.

MessageId=1101
Severity=Warning
Facility=System
SymbolicName=inline_qualifier_ignored
Language=English
"inline" used as a function qualifier is ignored
.

MessageId=1102
Severity=Warning
Facility=System
SymbolicName=cl_compound_literals_option_only_in_C
Language=English
option "compound_literals" can be used only when compiling C
.

MessageId=1103
Severity=Warning
Facility=System
SymbolicName=vla_not_allowed
Language=English
a variable-length array type is not allowed
.

MessageId=1104
Severity=Warning
Facility=System
SymbolicName=bad_integral_compound_literal
Language=English
a compound literal is not allowed in an integral constant expression
.

MessageId=1105
Severity=Warning
Facility=System
SymbolicName=bad_compound_literal_type
Language=English
a compound literal of type %%t is not allowed
.

MessageId=1106
Severity=Warning
Facility=System
SymbolicName=friend_template_in_local_class
Language=English
a template friend declaration cannot be declared in a local class
.

MessageId=1107
Severity=Warning
Facility=System
SymbolicName=ambiguous_question_operator
Language=English
ambiguous "?" operation: second operand of type %%t1 can be converted to third operand type %%t2, and vice versa
.

MessageId=1108
Severity=Warning
Facility=System
SymbolicName=bad_call_of_class_object
Language=English
call of an object of a class type without appropriate operator() or conversion functions to pointer-to-function type
.

MessageId=1109
Severity=Warning
Facility=System
SymbolicName=tag_1109
Language=English
surrogate function from conversion %%np
.

MessageId=1110
Severity=Warning
Facility=System
SymbolicName=ambiguous_class_call
Language=English
there is more than one way an object of type %%t can be called for the argument list:
.

MessageId=1111
Severity=Warning
Facility=System
SymbolicName=similar_typedef
Language=English
typedef name has already been declared (with similar type)
.

MessageId=1112
Severity=Warning
Facility=System
SymbolicName=no_internal_linkage_for_new_or_delete
Language=English
operator new and operator delete cannot be given internal linkage
.

MessageId=1113
Severity=Warning
Facility=System
SymbolicName=no_mutable_allowed_on_anonymous_union
Language=English
storage class "mutable" is not allowed for anonymous unions
.

MessageId=1114
Severity=Warning
Facility=System
SymbolicName=bad_pch_file
Language=English
invalid precompiled header file
.

MessageId=1115
Severity=Warning
Facility=System
SymbolicName=abstract_class_catch_type
Language=English
abstract class type %%t is not allowed as catch type:
.

MessageId=1116
Severity=Warning
Facility=System
SymbolicName=bad_qualified_function_type
Language=English
a qualified function type cannot be used to declare a nonmember function or a static member function
.

MessageId=1117
Severity=Warning
Facility=System
SymbolicName=bad_qualified_function_type_parameter
Language=English
a qualified function type cannot be used to declare a parameter
.

MessageId=1118
Severity=Warning
Facility=System
SymbolicName=ptr_or_ref_to_qualified_function_type
Language=English
cannot create a pointer or reference to qualified function type
.

MessageId=1119
Severity=Warning
Facility=System
SymbolicName=nonstd_braces
Language=English
extra braces are nonstandard
.

MessageId=1120
Severity=Warning
Facility=System
SymbolicName=bad_cmd_line_macro
Language=English
invalid macro definition: 
.

MessageId=1121
Severity=Warning
Facility=System
SymbolicName=nonstandard_ptr_minus_ptr
Language=English
subtraction of pointer types %%t1 and %%t2 is nonstandard
.

MessageId=1122
Severity=Warning
Facility=System
SymbolicName=empty_template_param_list
Language=English
an empty template parameter list is not allowed in a template template parameter declaration
.

MessageId=1123
Severity=Warning
Facility=System
SymbolicName=exp_class
Language=English
expected "class"
.

MessageId=1124
Severity=Warning
Facility=System
SymbolicName=struct_not_allowed
Language=English
the "class" keyword must be used when declaring a template template parameter
.

MessageId=1125
Severity=Warning
Facility=System
SymbolicName=virtual_function_decl_hidden
Language=English
%%np2 is hidden by %%no1 -- virtual function override intended?
.

MessageId=1126
Severity=Warning
Facility=System
SymbolicName=no_qualified_friend_definition
Language=English
a qualified name is not allowed for a friend declaration that is a function definition
.

MessageId=1127
Severity=Warning
Facility=System
SymbolicName=not_compatible_with_templ_templ_param
Language=English
%%n1 is not compatible with %%n2
.

MessageId=1128
Severity=Warning
Facility=System
SymbolicName=storage_class_requires_function_or_variable
Language=English
a storage class may not be specified here
.

MessageId=1129
Severity=Warning
Facility=System
SymbolicName=member_using_must_be_visible_in_direct_base
Language=English
class member designated by a using-declaration must be visible in a direct base class
.

MessageId=1130
Severity=Warning
Facility=System
SymbolicName=tag_1130
Language=English
ec_removed_1130
.

MessageId=1131
Severity=Warning
Facility=System
SymbolicName=cl_sun_incompatible_with_cfront
Language=English
Sun mode is incompatible with cfront mode
.

MessageId=1132
Severity=Warning
Facility=System
SymbolicName=cl_strict_ansi_incompatible_with_sun
Language=English
strict ANSI mode is incompatible with Sun mode
.

MessageId=1133
Severity=Warning
Facility=System
SymbolicName=cl_sun_mode_only_in_cplusplus
Language=English
Sun mode is only allowed when compiling C++
.

MessageId=1134
Severity=Warning
Facility=System
SymbolicName=template_template_param_same_name_as_templ_param
Language=English
a template template parameter cannot have the same name as one of its template parameters
.

MessageId=1135
Severity=Warning
Facility=System
SymbolicName=recursive_def_arg_instantiation
Language=English
recursive instantiation of default argument
.

MessageId=1136
Severity=Warning
Facility=System
SymbolicName=tag_1136
Language=English
ec_removed_1136
.

MessageId=1137
Severity=Warning
Facility=System
SymbolicName=bad_template_name
Language=English
%%n is not an entity that can be defined
.

MessageId=1138
Severity=Warning
Facility=System
SymbolicName=destructor_name_must_be_qualified
Language=English
destructor name must be qualified
.

MessageId=1139
Severity=Warning
Facility=System
SymbolicName=no_typename_in_friend_class_decl
Language=English
friend class name may not be introduced with "typename"
.

MessageId=1140
Severity=Warning
Facility=System
SymbolicName=no_ctor_or_dtor_using_declaration
Language=English
a using-declaration may not name a constructor or destructor
.

MessageId=1141
Severity=Warning
Facility=System
SymbolicName=friend_is_nonreal_template
Language=English
a qualified friend template declaration must refer to a specific previously declared template
.

MessageId=1142
Severity=Warning
Facility=System
SymbolicName=bad_class_template_decl
Language=English
invalid specifier in class template declaration
.

MessageId=1143
Severity=Warning
Facility=System
SymbolicName=simple_incompatible_param
Language=English
argument is incompatible with formal parameter
.

MessageId=1144
Severity=Warning
Facility=System
SymbolicName=cl_dep_name_option_only_in_cplusplus
Language=English
option "dep_name" can be used only when compiling C++
.

MessageId=1145
Severity=Warning
Facility=System
SymbolicName=op_arrow_loop
Language=English
loop in sequence of "operator->" functions starting at class %%t1
.

MessageId=1146
Severity=Warning
Facility=System
SymbolicName=not_a_member_class
Language=English
%%n has no member class %%sq
.

MessageId=1147
Severity=Warning
Facility=System
SymbolicName=name_not_class_in_file_scope
Language=English
the global scope has no class named %%sq
.

MessageId=1148
Severity=Warning
Facility=System
SymbolicName=recursive_inst_of_templ_default_arg
Language=English
recursive instantiation of template default argument
.

MessageId=1149
Severity=Warning
Facility=System
SymbolicName=no_access_or_using_decl_in_union
Language=English
access declarations and using-declarations cannot appear in unions
.

MessageId=1150
Severity=Warning
Facility=System
SymbolicName=not_class_member
Language=English
%%no is not a class member
.

MessageId=1151
Severity=Warning
Facility=System
SymbolicName=nonstd_const_member_decl_not_allowed
Language=English
nonstandard member constant declaration is not allowed
.

MessageId=1152
Severity=Warning
Facility=System
SymbolicName=cl_ignore_std_option_only_in_cplusplus
Language=English
option "ignore_std" can be used only when compiling C++
.

MessageId=1153
Severity=Warning
Facility=System
SymbolicName=cl_parse_nonclass_templates_option_only_in_cplusplus
Language=English
option "parse_templates" can be used only when compiling C++
.

MessageId=1154
Severity=Warning
Facility=System
SymbolicName=cl_dep_name_requires_parse_nonclass_templates
Language=English
option "dep_name" cannot be used with "no_parse_templates"
.

MessageId=1155
Severity=Warning
Facility=System
SymbolicName=omp_section_in_sections
Language=English
section directive must be in lexical extent of sections directive
.

MessageId=1156
Severity=Warning
Facility=System
SymbolicName=omp_need_section
Language=English
sections directive requires at least one enclosed section directive
.

MessageId=1157
Severity=Warning
Facility=System
SymbolicName=omp_const_private_var
Language=English
private variable cannot be const-qualified
.

MessageId=1158
Severity=Warning
Facility=System
SymbolicName=omp_pointer_reduction_var
Language=English
reduction variable cannot be pointer or reference type
.

MessageId=1159
Severity=Warning
Facility=System
SymbolicName=omp_ordered_no_ordered
Language=English
ordered directive with no binding ordered clause
.

MessageId=1160
Severity=Warning
Facility=System
SymbolicName=omp_bad_private_var
Language=English
private variable must not be incomplete or reference type
.

MessageId=1161
Severity=Warning
Facility=System
SymbolicName=omp_illegal_branch_out
Language=English
illegal branch out of omp construct
.

MessageId=1162
Severity=Warning
Facility=System
SymbolicName=omp_bad_reduction_op
Language=English
reduction variable is incompatible with reduction operator
.

MessageId=1163
Severity=Warning
Facility=System
SymbolicName=ixp1200_type_restriction
Language=English
micro-C does not support char, short, float and double types
.

MessageId=1164
Severity=Warning
Facility=System
SymbolicName=ixp1200_conflicting_memory_attributes
Language=English
conflicting memory attributes
.

MessageId=1165
Severity=Warning
Facility=System
SymbolicName=ixp1200_bad_pointer
Language=English
pointer to improperly sized or aligned item
.

MessageId=1166
Severity=Warning
Facility=System
SymbolicName=ixp1200_float_not_supported
Language=English
floating point types are not supported
.

MessageId=1167
Severity=Warning
Facility=System
SymbolicName=ixp1200_pointer_to_func_not_supported
Language=English
pointers to functions are not supported
.

MessageId=1168
Severity=Warning
Facility=System
SymbolicName=ixp1200_redundant_memory_qual
Language=English
memory attributes are not meaningful on struct/union fields
.

MessageId=1169
Severity=Warning
Facility=System
SymbolicName=cl_incompatible_language_modes
Language=English
language modes specified are incompatible
.

MessageId=1170
Severity=Warning
Facility=System
SymbolicName=invalid_nested_class_redecl
Language=English
invalid redeclaration of nested class
.

MessageId=1171
Severity=Warning
Facility=System
SymbolicName=flexible_array_member_not_allowed
Language=English
type containing an unknown-size array is not allowed
.

MessageId=1172
Severity=Warning
Facility=System
SymbolicName=static_variable_in_inline_function
Language=English
a variable with static storage duration cannot be defined within an inline function
.

MessageId=1173
Severity=Warning
Facility=System
SymbolicName=bad_linkage_of_ref_within_inline_function
Language=English
an entity with internal linkage cannot be referenced within an inline function with external linkage
.

MessageId=1174
Severity=Warning
Facility=System
SymbolicName=type_generic_function_mismatch
Language=English
argument type %%t does not match this type-generic function macro
.

MessageId=1175
Severity=Warning
Facility=System
SymbolicName=tag_1175
Language=English
variable length array %%nod
.

MessageId=1176
Severity=Warning
Facility=System
SymbolicName=friend_cannot_add_default_arguments
Language=English
friend declaration cannot add default arguments to previous declaration
.

MessageId=1177
Severity=Warning
Facility=System
SymbolicName=cannot_be_declared_in_scope
Language=English
%%n cannot be declared in this scope
.

MessageId=1178
Severity=Warning
Facility=System
SymbolicName=id_can_only_appear_in_function
Language=English
the reserved identifier %%sq may only be used inside a function
.

MessageId=1179
Severity=Warning
Facility=System
SymbolicName=invalid_identifier_start_UCN
Language=English
this universal character cannot begin an identifier
.

MessageId=1180
Severity=Warning
Facility=System
SymbolicName=exp_string_literal
Language=English
expected a string literal
.

MessageId=1181
Severity=Warning
Facility=System
SymbolicName=unrecognized_stdc_pragma
Language=English
unrecognized STDC pragma
.

MessageId=1182
Severity=Warning
Facility=System
SymbolicName=bad_stdc_pragma_arg
Language=English
expected "ON", "OFF", or "DEFAULT"
.

MessageId=1183
Severity=Warning
Facility=System
SymbolicName=stdc_pragma_not_allowed_here
Language=English
a STDC pragma may only appear between declarations in the global scope or before any statements or declarations in a block scope
.

MessageId=1184
Severity=Warning
Facility=System
SymbolicName=bad_va_copy
Language=English
incorrect use of va_copy
.

MessageId=1185
Severity=Warning
Facility=System
SymbolicName=only_applies_to_float_types
Language=English
%%s can only be used with float, double, or long double types
.

MessageId=1186
Severity=Warning
Facility=System
SymbolicName=complex_type_not_allowed
Language=English
complex type is not allowed
.

MessageId=1187
Severity=Warning
Facility=System
SymbolicName=invalid_designator_kind
Language=English
invalid designator kind
.

MessageId=1188
Severity=Warning
Facility=System
SymbolicName=inexact_fp_conversion
Language=English
floating-point value cannot be represented exactly
.

MessageId=1189
Severity=Warning
Facility=System
SymbolicName=bad_complex_operation_result
Language=English
complex floating-point operation result is out of range
.

MessageId=1190
Severity=Warning
Facility=System
SymbolicName=real_imaginary_conversion
Language=English
conversion between real and imaginary yields zero
.

MessageId=1191
Severity=Warning
Facility=System
SymbolicName=cannot_initialize_flexible_array_member
Language=English
an initializer cannot be specified for a flexible array member
.

MessageId=1192
Severity=Warning
Facility=System
SymbolicName=imaginary_times_assign
Language=English
imaginary *= imaginary sets the left-hand operand to zero
.

MessageId=1193
Severity=Warning
Facility=System
SymbolicName=undeclared_parameter
Language=English
standard requires that %%n be given a type by a subsequent declaration ("int" assumed)
.

MessageId=1194
Severity=Warning
Facility=System
SymbolicName=inline_never_defined
Language=English
a definition is required for inline %%n
.

MessageId=1195
Severity=Warning
Facility=System
SymbolicName=conversion_to_pointer_loses_bits
Language=English
conversion from integer to smaller pointer
.

MessageId=1196
Severity=Warning
Facility=System
SymbolicName=missing_floating_point_type
Language=English
a float, double or long double type must be included in the type specifier for a _Complex or _Imaginary type
.

MessageId=1197
Severity=Warning
Facility=System
SymbolicName=unsupported_declspec_modifier
Language=English
%%sq is an unsupported __declspec attribute
.

MessageId=1198
Severity=Warning
Facility=System
SymbolicName=omp_mismatch_iter_var
Language=English
initialization, test, and iteration variable should be the same
.

MessageId=1199
Severity=Warning
Facility=System
SymbolicName=omp_cpp_operator_missing
Language=English
object requires a %%sq
.

MessageId=1200
Severity=Warning
Facility=System
SymbolicName=ipcp_arg_mismatch
Language=English
a constant with incorrect type reaches this point
.

MessageId=1201
Severity=Warning
Facility=System
SymbolicName=disabling_function_packaging
Language=English
too many functions; disabling COMDAT function packaging
.

MessageId=1202
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_constraint_char
Language=English
illegal character %%s in asm operand constraint
.

MessageId=1203
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_dgt_constraint1
Language=English
digit constraint must specify an output operand
.

MessageId=1204
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_dgt_constraint2
Language=English
digit illegal in output operand constraint
.

MessageId=1205
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_output_marker
Language=English
illegal '=' or '+' in input operand
.

MessageId=1206
Severity=Warning
Facility=System
SymbolicName=gnu_asm_cant_match_constraint
Language=English
cannot match asm operand constraint
.

MessageId=1207
Severity=Warning
Facility=System
SymbolicName=gnu_asm_max_ops_exceeded
Language=English
maximum number of operands exceeded for asm instruction
.

MessageId=1208
Severity=Warning
Facility=System
SymbolicName=gnu_asm_no_output_marker
Language=English
output operand constraint must begin with '=' or '+'
.

MessageId=1209
Severity=Warning
Facility=System
SymbolicName=gnu_asm_alternative_mismatch
Language=English
number of alternatives in asm operand constraints must match
.

MessageId=1210
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_subst_directive
Language=English
bad substitution directive in asm instruction
.

MessageId=1211
Severity=Warning
Facility=System
SymbolicName=gnu_asm_op_doesnt_exist
Language=English
substitution directive specifies non-existant operand in asm instruction
.

MessageId=1212
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_a_directive
Language=English
'a' modifier used on operand that cannot be printed as an address
.

MessageId=1213
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_cn_directive
Language=English
'c' or 'n' modifier used on operand that is not constant
.

MessageId=1214
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_h_directive
Language=English
'h' modifier used on operand that isn't stored in eax, ebx, ecx, or edx
.

MessageId=1215
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_modifier
Language=English
unrecognized modifier character %%s in substitution directive
.

MessageId=1216
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_register
Language=English
unknown register name %%s in asm statement
.

MessageId=1217
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_fpout
Language=English
floating point output constraint must specify a single register
.

MessageId=1218
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_fpout2
Language=English
floating point output operands must be grouped at top of stack
.

MessageId=1219
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_fpin
Language=English
floating point input operands must not leave empty spaces on the stack
.

MessageId=1220
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_fpin2
Language=English
popped floating point input operands must be grouped at top of stack
.

MessageId=1221
Severity=Warning
Facility=System
SymbolicName=gnu_asm_needs_ec
Language=English
fp output operand must use early clobber constraint
.

MessageId=1222
Severity=Warning
Facility=System
SymbolicName=gnu_asm_not_allocable
Language=English
can't allocate registers for asm instruction
.

MessageId=1223
Severity=Warning
Facility=System
SymbolicName=omp_two_num_threads
Language=English
directive cannot contain more than one num_threads clause
.

MessageId=1224
Severity=Warning
Facility=System
SymbolicName=warning_directive
Language=English
#warning directive: %%s
.

MessageId=1225
Severity=Warning
Facility=System
SymbolicName=omp_shared_for_var
Language=English
iteration variable should be private
.

MessageId=1226
Severity=Warning
Facility=System
SymbolicName=omp_bad_flush_var
Language=English
flush variable must not have a reference type
.

MessageId=1227
Severity=Warning
Facility=System
SymbolicName=deprecated_symbol
Language=English
symbol was declared as deprecated
.

MessageId=1228
Severity=Warning
Facility=System
SymbolicName=second_operand_omitted
Language=English
two-operand conditional expressions are not supported in default arguments
.

MessageId=1229
Severity=Warning
Facility=System
SymbolicName=flexible_array_member_alias
Language=English
type containing an unknown-size array may alias another element
.

MessageId=1230
Severity=Warning
Facility=System
SymbolicName=unsupported_feature
Language=English
Unsupported feature: %%s
.

MessageId=1231
Severity=Warning
Facility=System
SymbolicName=address_of_label
Language=English
no label with address taken exists in current scope
.

MessageId=1232
Severity=Warning
Facility=System
SymbolicName=address_of_label_not_support
Language=English
address of label not support in C++
.

MessageId=1233
Severity=Warning
Facility=System
SymbolicName=expr_not_complex
Language=English
expression must have complex type
.

MessageId=1234
Severity=Warning
Facility=System
SymbolicName=tag_1234
Language=English
ec_removed_1234
.

MessageId=1235
Severity=Warning
Facility=System
SymbolicName=unsupported_vla_type
Language=English
unsupported underlying vla type (non-POD (Plain Old Data) class type)
.

MessageId=1236
Severity=Warning
Facility=System
SymbolicName=empty_case_range
Language=English
empty case range
.

MessageId=1237
Severity=Warning
Facility=System
SymbolicName=ansi_case_range
Language=English
case ranges are an extension to standard C/C++
.

MessageId=1238
Severity=Warning
Facility=System
SymbolicName=use_of_incomplete_type
Language=English
declaration with incomplete element type is nonstandard
.

MessageId=1239
Severity=Warning
Facility=System
SymbolicName=no_previous_push_macro
Language=English
no previous #pragma push_macro for %%sq
.

MessageId=1240
Severity=Warning
Facility=System
SymbolicName=tag_1240
Language=English
ec_removed_1240
.

MessageId=1241
Severity=Warning
Facility=System
SymbolicName=tag_1241
Language=English
ec_removed_1241
.

MessageId=1242
Severity=Warning
Facility=System
SymbolicName=tag_1242
Language=English
ec_removed_1242
.

MessageId=1243
Severity=Warning
Facility=System
SymbolicName=tag_1243
Language=English
ec_removed_1243
.

MessageId=1244
Severity=Warning
Facility=System
SymbolicName=tag_1244
Language=English
ec_removed_1244
.

MessageId=1245
Severity=Warning
Facility=System
SymbolicName=tag_1245
Language=English
ec_removed_1245
.

MessageId=1246
Severity=Warning
Facility=System
SymbolicName=tag_1246
Language=English
ec_removed_1246
.

MessageId=1247
Severity=Warning
Facility=System
SymbolicName=tag_1247
Language=English
ec_removed_1247
.

MessageId=1248
Severity=Warning
Facility=System
SymbolicName=tag_1248
Language=English
ec_removed_1248
.

MessageId=1249
Severity=Warning
Facility=System
SymbolicName=tag_1249
Language=English
ec_removed_1249
.

MessageId=1250
Severity=Warning
Facility=System
SymbolicName=type_decl_in_anon_union
Language=English
types cannot be declared in anonymous unions
.

MessageId=1251
Severity=Warning
Facility=System
SymbolicName=returning_ptr_to_local_variable
Language=English
returning pointer to local variable
.

MessageId=1252
Severity=Warning
Facility=System
SymbolicName=returning_ptr_to_local_temp
Language=English
returning pointer to local temporary
.

MessageId=1253
Severity=Warning
Facility=System
SymbolicName=cl_export_template_option_only_in_cplusplus
Language=English
option "export" can be used only when compiling C++
.

MessageId=1254
Severity=Warning
Facility=System
SymbolicName=cl_export_template_requires_dep_name
Language=English
option "export" cannot be used with "no_dep_name"
.

MessageId=1255
Severity=Warning
Facility=System
SymbolicName=cl_export_template_requires_no_implicit_include
Language=English
option "export" cannot be used with "implicit_include"
.

MessageId=1256
Severity=Warning
Facility=System
SymbolicName=corresp_decl_incompatible
Language=English
declaration of %%n is incompatible with a declaration in another translation unit
.

MessageId=1257
Severity=Warning
Facility=System
SymbolicName=corresp_decl_at
Language=English
the other declaration is %%p
.

MessageId=1258
Severity=Warning
Facility=System
SymbolicName=tag_1258
Language=English
detected during compilation of secondary translation unit %%sq
.

MessageId=1259
Severity=Warning
Facility=System
SymbolicName=tag_1259
Language=English
compilation of secondary translation unit %%sq
.

MessageId=1260
Severity=Warning
Facility=System
SymbolicName=field_cannot_involve_vla_type
Language=English
a field declaration cannot have a type involving a variable length array
.

MessageId=1261
Severity=Warning
Facility=System
SymbolicName=entity_differs_in_other_trans_unit
Language=English
declaration of %%n had a different meaning during compilation of %%sq
.

MessageId=1262
Severity=Warning
Facility=System
SymbolicName=exp_template
Language=English
expected "template"
.

MessageId=1263
Severity=Warning
Facility=System
SymbolicName=export_on_instantiation
Language=English
"export" cannot be used on an explicit instantiation
.

MessageId=1264
Severity=Warning
Facility=System
SymbolicName=bad_decl_for_export
Language=English
"export" cannot be used on this declaration
.

MessageId=1265
Severity=Warning
Facility=System
SymbolicName=exported_in_unnamed_namespace
Language=English
a member of an unnamed namespace cannot be declared "export"
.

MessageId=1266
Severity=Warning
Facility=System
SymbolicName=export_after_definition
Language=English
a template cannot be declared "export" after it has been defined
.

MessageId=1267
Severity=Warning
Facility=System
SymbolicName=labeled_declaration
Language=English
a declaration cannot have a label
.

MessageId=1268
Severity=Warning
Facility=System
SymbolicName=no_export_support
Language=English
support for exported templates is disabled
.

MessageId=1269
Severity=Warning
Facility=System
SymbolicName=cannot_open_exported_template_file
Language=English
cannot open exported template file: %%sq
.

MessageId=1270
Severity=Warning
Facility=System
SymbolicName=entity_defined_in_other_trans_unit
Language=English
%%n already defined during compilation of %%sq
.

MessageId=1271
Severity=Warning
Facility=System
SymbolicName=entity_defined_twice
Language=English
%%n already defined in another translation unit
.

MessageId=1272
Severity=Warning
Facility=System
SymbolicName=based_var_cannot_be_local
Language=English
a non-static local variable may not be used in a __based specification
.

MessageId=1273
Severity=Warning
Facility=System
SymbolicName=cl_list_make_dependencies_incompatible_with_multiple_trans_units
Language=English
the option to list makefile dependencies may not be specified when compiling more than one translation unit
.

MessageId=1274
Severity=Warning
Facility=System
SymbolicName=tag_1274
Language=English
ec_removed_1274
.

MessageId=1275
Severity=Warning
Facility=System
SymbolicName=cl_pp_output_incompatible_with_multiple_trans_units
Language=English
the option to generate preprocessed output may not be specified when compiling more than one translation unit
.

MessageId=1276
Severity=Warning
Facility=System
SymbolicName=field_name_conflicts_with_class
Language=English
a field with the same name as its class cannot be declared in a class with a user-declared constructor
.

MessageId=1277
Severity=Warning
Facility=System
SymbolicName=cl_implicit_include_incompatible_with_multiple_trans_units
Language=English
"implicit_include" cannot be used when compiling more than one translation unit
.

MessageId=1278
Severity=Warning
Facility=System
SymbolicName=corrupted_export_template_file
Language=English
exported template file %%sq is corrupted
.

MessageId=1279
Severity=Warning
Facility=System
SymbolicName=exported_instantiation_and_specialized
Language=English
%%n cannot be instantiated -- it has been explicitly specialized in the translation unit containing the exported definition
.

MessageId=1280
Severity=Warning
Facility=System
SymbolicName=tag_1280
Language=English
object type is: %%s
.

MessageId=1281
Severity=Warning
Facility=System
SymbolicName=unqual_named_function_with_qual_object
Language=English
the object has cv-qualifiers that are not compatible with the member %%n
.

MessageId=1282
Severity=Warning
Facility=System
SymbolicName=no_matching_function_due_to_selector
Language=English
no instance of %%n matches the argument list and object (the object has cv-qualifiers that prevent a match)
.

MessageId=1283
Severity=Warning
Facility=System
SymbolicName=mode_incompatible_with_type
Language=English
an attribute specifies a mode incompatible with %%t
.

MessageId=1284
Severity=Warning
Facility=System
SymbolicName=no_type_of_specified_width
Language=English
there is no type with the width specified
.

MessageId=1285
Severity=Warning
Facility=System
SymbolicName=bad_attribute_alignment
Language=English
invalid alignment value specified by attribute
.

MessageId=1286
Severity=Warning
Facility=System
SymbolicName=attribute_does_not_apply_to_type
Language=English
invalid attribute for %%t
.

MessageId=1287
Severity=Warning
Facility=System
SymbolicName=attribute_does_not_apply
Language=English
invalid attribute for %%n
.

MessageId=1288
Severity=Warning
Facility=System
SymbolicName=attribute_does_not_apply_to_param
Language=English
invalid attribute for parameter
.

MessageId=1289
Severity=Warning
Facility=System
SymbolicName=arguments_provided_for_attribute
Language=English
attribute %%sq does not take arguments
.

MessageId=1290
Severity=Warning
Facility=System
SymbolicName=tag_1290
Language=English
ec_removed_1290
.

MessageId=1291
Severity=Warning
Facility=System
SymbolicName=exp_attribute_name
Language=English
expected an attribute name
.

MessageId=1292
Severity=Warning
Facility=System
SymbolicName=unrecognized_attribute
Language=English
attribute %%sq ignored
.

MessageId=1293
Severity=Warning
Facility=System
SymbolicName=attribute_not_allowed
Language=English
attributes may not appear here
.

MessageId=1294
Severity=Warning
Facility=System
SymbolicName=invalid_argument_to_attribute
Language=English
invalid argument to attribute %%sq
.

MessageId=1295
Severity=Warning
Facility=System
SymbolicName=packed_attribute_ignored_in_typedef
Language=English
the "packed" attribute is ignored in a typedef
.

MessageId=1296
Severity=Warning
Facility=System
SymbolicName=assigned_goto_requires_void_ptr
Language=English
in "goto *expr", expr must have type "void *"
.

MessageId=1297
Severity=Warning
Facility=System
SymbolicName=nonstd_assigned_goto
Language=English
"goto *expr" is nonstandard
.

MessageId=1298
Severity=Warning
Facility=System
SymbolicName=nonstd_address_of_label
Language=English
taking the address of a label is nonstandard
.

MessageId=1299
Severity=Warning
Facility=System
SymbolicName=cl_duplicate_file_name
Language=English
file name specified more than once: 
.

MessageId=1300
Severity=Warning
Facility=System
SymbolicName=tag_1300
Language=English
ec_removed_1300
.

MessageId=1301
Severity=Warning
Facility=System
SymbolicName=attribute_only_in_func_def
Language=English
attribute %%sq is only allowed in a function definition
.

MessageId=1302
Severity=Warning
Facility=System
SymbolicName=transparent_type_is_not_union
Language=English
the "transparent_union" attribute only applies to unions, and %%t is not a union
.

MessageId=1303
Severity=Warning
Facility=System
SymbolicName=transparent_attribute_ignored
Language=English
the "transparent_union" attribute is ignored on incomplete types
.

MessageId=1304
Severity=Warning
Facility=System
SymbolicName=union_cannot_be_transparent_sym
Language=English
%%t cannot be transparent because %%n does not have the same size as the union
.

MessageId=1305
Severity=Warning
Facility=System
SymbolicName=union_cannot_be_transparent
Language=English
%%t cannot be transparent because it has a field of type %%t which is not the same size as the union
.

MessageId=1306
Severity=Warning
Facility=System
SymbolicName=transparent_variable
Language=English
only parameters can be transparent
.

MessageId=1307
Severity=Warning
Facility=System
SymbolicName=attribute_does_not_apply_to_local_variable
Language=English
the %%sq attribute does not apply to local variables
.

MessageId=1308
Severity=Warning
Facility=System
SymbolicName=attributes_in_rout_defn
Language=English
attributes are not permitted in a function definition
.

MessageId=1309
Severity=Warning
Facility=System
SymbolicName=local_labels_only_in_statement_expressions
Language=English
declarations of local labels should only appear at the start of statement expressions
.

MessageId=1310
Severity=Warning
Facility=System
SymbolicName=invalid_case_range
Language=English
the second constant in a case range must be larger than the first
.

MessageId=1311
Severity=Warning
Facility=System
SymbolicName=asm_name_in_rout_defn
Language=English
an asm name is not permitted in a function definition
.

MessageId=1312
Severity=Warning
Facility=System
SymbolicName=asm_name_in_typedef
Language=English
an asm name is ignored in a typedef
.

MessageId=1313
Severity=Warning
Facility=System
SymbolicName=bad_reg_name
Language=English
unknown register name "%%s"
.

MessageId=1314
Severity=Warning
Facility=System
SymbolicName=asm_modifier_ignored
Language=English
modifier letter '%%s' ignored in asm operand
.

MessageId=1315
Severity=Warning
Facility=System
SymbolicName=bad_asm_constraint_modifier
Language=English
unknown asm constraint modifier '%%s'
.

MessageId=1316
Severity=Warning
Facility=System
SymbolicName=bad_asm_constraint_letter
Language=English
unknown asm constraint letter '%%s'
.

MessageId=1317
Severity=Warning
Facility=System
SymbolicName=missing_constraint_letter
Language=English
asm operand has no constraint letter
.

MessageId=1318
Severity=Warning
Facility=System
SymbolicName=asm_output_must_have_output_mod
Language=English
an asm output operand must have one of the '=' or '+' modifiers
.

MessageId=1319
Severity=Warning
Facility=System
SymbolicName=asm_input_must_not_have_output_mod
Language=English
an asm input operand may not have the '=' or '+' modifiers
.

MessageId=1320
Severity=Warning
Facility=System
SymbolicName=too_many_asm_operands
Language=English
too many operands to asm statement (maximum is 30; '+' modifier adds an implicit operand)
.

MessageId=1321
Severity=Warning
Facility=System
SymbolicName=too_many_asm_colons
Language=English
too many colons in asm statement
.

MessageId=1322
Severity=Warning
Facility=System
SymbolicName=register_used_twice
Language=English
register "%%s" used more than once
.

MessageId=1323
Severity=Warning
Facility=System
SymbolicName=register_used_and_clobbered
Language=English
register "%%s" is both used and clobbered
.

MessageId=1324
Severity=Warning
Facility=System
SymbolicName=register_clobbered_twice
Language=English
register "%%s" clobbered more than once
.

MessageId=1325
Severity=Warning
Facility=System
SymbolicName=fixed_register_used
Language=English
register "%%s" has a fixed purpose and may not be used in an asm statement
.

MessageId=1326
Severity=Warning
Facility=System
SymbolicName=fixed_register_clobbered
Language=English
register "%%s" has a fixed purpose and may not be clobbered in an asm statement
.

MessageId=1327
Severity=Warning
Facility=System
SymbolicName=empty_clobbers_list
Language=English
an empty clobbers list must be omitted entirely
.

MessageId=1328
Severity=Warning
Facility=System
SymbolicName=exp_asm_operand
Language=English
expected an asm operand
.

MessageId=1329
Severity=Warning
Facility=System
SymbolicName=exp_asm_clobber
Language=English
expected a register to clobber
.

MessageId=1330
Severity=Warning
Facility=System
SymbolicName=format_rout_not_varargs
Language=English
"format" attribute applied to %%n which does not have variable arguments
.

MessageId=1331
Severity=Warning
Facility=System
SymbolicName=subst_arg_is_not_variable
Language=English
first substitution argument is not the first variable argument
.

MessageId=1332
Severity=Warning
Facility=System
SymbolicName=fmt_arg_does_not_exist
Language=English
format argument index is greater than number of parameters
.

MessageId=1333
Severity=Warning
Facility=System
SymbolicName=fmt_arg_is_not_string
Language=English
format argument does not have string type
.

MessageId=1334
Severity=Warning
Facility=System
SymbolicName=template_not_in_template
Language=English
the "template" keyword used for syntactic disambiguation may only be used within a template
.

MessageId=1335
Severity=Warning
Facility=System
SymbolicName=tag_1335
Language=English
a debug option must be specified on the command-line for the db_opt pragma to be used
.

MessageId=1336
Severity=Warning
Facility=System
SymbolicName=tag_1336
Language=English
ec_removed_1336
.

MessageId=1337
Severity=Warning
Facility=System
SymbolicName=attr_requires_func_type
Language=English
attribute does not apply to non-function type %%t
.

MessageId=1338
Severity=Warning
Facility=System
SymbolicName=nonobject_pointer_arithmetic
Language=English
arithmetic on pointer to void or function type
.

MessageId=1339
Severity=Warning
Facility=System
SymbolicName=invalid_storage_class_in_for_init
Language=English
storage class must be auto or register
.

MessageId=1340
Severity=Warning
Facility=System
SymbolicName=va_arg_would_have_been_promoted
Language=English
%%t1 would have been promoted to %%t2 when passed through the ellipsis parameter; use the latter type instead
.

MessageId=1341
Severity=Warning
Facility=System
SymbolicName=not_a_base_class_member
Language=English
%%sq is not a base class member
.

MessageId=1342
Severity=Warning
Facility=System
SymbolicName=super_after_scope
Language=English
__super cannot appear after "::"
.

MessageId=1343
Severity=Warning
Facility=System
SymbolicName=super_not_in_class
Language=English
__super may only be used in a class scope
.

MessageId=1344
Severity=Warning
Facility=System
SymbolicName=unqualified_super
Language=English
__super must be followed by "::"
.

MessageId=1345
Severity=Warning
Facility=System
SymbolicName=multiline_string
Language=English
possible missing closing quote; scanning a multi-line string
.

MessageId=1346
Severity=Warning
Facility=System
SymbolicName=omp_task_in_taskq
Language=English
task directive must be in lexical extent of taskq directive
.

MessageId=1347
Severity=Warning
Facility=System
SymbolicName=omp_taskq_nearest
Language=English
taskq construct must be the nearest lexically enclosing construct for any task directive
.

MessageId=1348
Severity=Warning
Facility=System
SymbolicName=cl_invalid_dependency_file
Language=English
invalid makefile dependency file 
.

MessageId=1349
Severity=Warning
Facility=System
SymbolicName=cl_cannot_open_dependency_file
Language=English
cannot open makefile dependency file 
.

MessageId=1350
Severity=Warning
Facility=System
SymbolicName=cl_invalid_dependency_option
Language=English
dependency option must also be specified
.

MessageId=1351
Severity=Warning
Facility=System
SymbolicName=context_lines_skipped
Language=English
[ %%s instantiation contexts not shown ]
.

MessageId=1352
Severity=Warning
Facility=System
SymbolicName=mangled_name_too_long
Language=English
mangled name is too long
.

MessageId=1353
Severity=Warning
Facility=System
SymbolicName=ssp_two_stride
Language=English
directive cannot contain more than one stride clause
.

MessageId=1354
Severity=Warning
Facility=System
SymbolicName=ssp_compute_in_thread
Language=English
%%s directive must be in lexical extent of thread directive
.

MessageId=1355
Severity=Warning
Facility=System
SymbolicName=ssp_illegal_default_none_var
Language=English
Variable in ssp thread construct must appear in exactly one of shared, captureprivate, or sync clause
.

MessageId=1356
Severity=Warning
Facility=System
SymbolicName=ssp_directive_nonloop
Language=English
directive bound to non-loop
.

MessageId=1357
Severity=Warning
Facility=System
SymbolicName=optimizer_limit_exceeded
Language=English
optimization disabled due to excessive resource requirements; contact Intel Premier Support for assistance
.

MessageId=1358
Severity=Warning
Facility=System
SymbolicName=aliased_name_undeclared
Language=English
declaration aliased to unknown entity %%sq
.

MessageId=1359
Severity=Warning
Facility=System
SymbolicName=aliased_name_bad_kind
Language=English
declaration does not match its alias %%n
.

MessageId=1360
Severity=Warning
Facility=System
SymbolicName=alias_cannot_have_definition
Language=English
entity declared as alias cannot have definition
.

MessageId=1361
Severity=Warning
Facility=System
SymbolicName=vla_size_ignored
Language=English
variable-length array field type will be treated as zero-length array field type
.

MessageId=1362
Severity=Warning
Facility=System
SymbolicName=gcc_lvalue_cast_ignored
Language=English
nonstandard cast on lvalue ignored
.

MessageId=1363
Severity=Warning
Facility=System
SymbolicName=cl_invalid_flag_name
Language=English
unrecognized flag name 
.

MessageId=1364
Severity=Warning
Facility=System
SymbolicName=qualified_void_return_type
Language=English
void return type cannot be qualified
.

MessageId=1365
Severity=Warning
Facility=System
SymbolicName=auto_ignored
Language=English
the auto specifier is ignored here (invalid in standard C/C++)
.

MessageId=1366
Severity=Warning
Facility=System
SymbolicName=alignment_reduction_ignored
Language=English
a reduction in alignment without the "packed" attribute is ignored
.

MessageId=1367
Severity=Warning
Facility=System
SymbolicName=corresp_member_template_is_different_kind
Language=English
a member template corresponding to %%no is declared as a template of a different kind in another translation unit
.

MessageId=1368
Severity=Warning
Facility=System
SymbolicName=excess_initializers_ignored
Language=English
excess initializers are ignored
.

MessageId=1369
Severity=Warning
Facility=System
SymbolicName=va_start_requires_ellipsis_function
Language=English
va_start should only appear in a function with an ellipsis parameter
.

MessageId=1370
Severity=Warning
Facility=System
SymbolicName=cl_short_enums_requires_gcc_mode
Language=English
the "short_enums" option is only valid in GNU C mode
.

MessageId=1371
Severity=Warning
Facility=System
SymbolicName=bad_export_info_file
Language=English
invalid export information file %%sq1 at line number %%s2
.

MessageId=1372
Severity=Warning
Facility=System
SymbolicName=ignoring_inline_definition_because_of_alias
Language=English
inline function also declared as an alias; definition ignored
.

MessageId=1373
Severity=Warning
Facility=System
SymbolicName=omp_ordered_in_critical
Language=English
ordered directive is not allowed in extent of critical region bound to same parallel
.

MessageId=1374
Severity=Warning
Facility=System
SymbolicName=nounroll_take_no_args
Language=English
pragma nounroll does not take any arguments
.

MessageId=1375
Severity=Warning
Facility=System
SymbolicName=external_import_export
Language=English
%%s must have external linkage in order to be imported/exported
.

MessageId=1376
Severity=Warning
Facility=System
SymbolicName=omp_barrier_flush_context
Language=English
The smallest statement containing a %%sq pragma must be a block or compound statement
.

MessageId=1377
Severity=Warning
Facility=System
SymbolicName=omp_branch_out_of_construct
Language=English
%%sq1 branches to or from an OpenMP structured block are illegal
.

MessageId=1378
Severity=Warning
Facility=System
SymbolicName=omp_chunksize_variable_not_shared
Language=English
Variable %%no in OpenMP schedule clause should appear on shared list
.

MessageId=1379
Severity=Warning
Facility=System
SymbolicName=omp_copyin_only_on_threadprivate
Language=English
copyin variable %%no in OpenMP parallel pragma must appear earlier in threadprivate pragma
.

MessageId=1380
Severity=Warning
Facility=System
SymbolicName=omp_copyprivate_must_be_private
Language=English
variable %%no on COPYPRIVATE list must have private semantics in region
.

MessageId=1381
Severity=Warning
Facility=System
SymbolicName=omp_copyprivate_on_private_list
Language=English
variable %%no on COPYPRIVATE list cannot appear on a PRIVATE or FIRSTPRIVATE list also
.

MessageId=1382
Severity=Warning
Facility=System
SymbolicName=omp_index_must_be_shared_on_region
Language=English
Index variable %%no on OpenMP worksharing construct must be shared on the corresponding region pragma
.

MessageId=1383
Severity=Warning
Facility=System
SymbolicName=omp_index_var_only_private
Language=English
index variable %%no of for statement following an OpenMP for pragma must be private
.

MessageId=1384
Severity=Warning
Facility=System
SymbolicName=omp_reduction_var_shared
Language=English
reduction variable %%no must be shared on entry to this OpenMP pragma
.

MessageId=1385
Severity=Warning
Facility=System
SymbolicName=omp_threadprivate_only_on_copyin
Language=English
%%sq clause of OpenMP pragma cannot contain threadprivate variable %%no
.

MessageId=1386
Severity=Warning
Facility=System
SymbolicName=omp_variable_on_data_construct
Language=English
%%no must be specified in a variable list at enclosing OpenMP parallel pragma
.

MessageId=1387
Severity=Warning
Facility=System
SymbolicName=omp_variable_on_one_list
Language=English
%%no1 can only appear on one data scope attribute clause in an OpenMP pragma (except firstprivate and lastprivate)
.

MessageId=1388
Severity=Warning
Facility=System
SymbolicName=omp_section_outside_sections
Language=English
"section" OpenMP pragma must appear immediately inside a "sections" block
.

MessageId=1389
Severity=Warning
Facility=System
SymbolicName=omp_pfor_pragma_on_for
Language=English
a for statement must follow an OpenMP for pragma
.

MessageId=1390
Severity=Warning
Facility=System
SymbolicName=omp_chunksize_le_zero
Language=English
OpenMP chunksize must be greater than zero
.

MessageId=1391
Severity=Warning
Facility=System
SymbolicName=omp_illegal_directive_nesting
Language=English
the OpenMP %%sq1 pragma must not be enclosed by the %%sq2 pragma
.

MessageId=1392
Severity=Warning
Facility=System
SymbolicName=omp_reprivatized_variable
Language=English
variable %%no in firstprivate or lastprivate clause of an OpenMP pragma must be shared in the enclosing context
.

MessageId=1393
Severity=Warning
Facility=System
SymbolicName=omp_ordered_not_in_ordered_for
Language=English
"ordered" pragma must be enclosed by a %%sq1 OpenMP block which is ordered
.

MessageId=1394
Severity=Warning
Facility=System
SymbolicName=omp_ordered_inside_task
Language=English
"ordered" OpenMP pragma must be nested in "task"
.

MessageId=1395
Severity=Warning
Facility=System
SymbolicName=omp_task_inside_taskq
Language=English
task OpenMP pragma must bind to a taskq pragma in the current function
.

MessageId=1396
Severity=Warning
Facility=System
SymbolicName=omp_sections_not_on_block
Language=English
"sections" OpenMP pragma must be on a block
.

MessageId=1397
Severity=Warning
Facility=System
SymbolicName=omp_ordered_not_in_for
Language=English
"ordered" pragma must be enclosed by a %%s OpenMP block
.

MessageId=1398
Severity=Warning
Facility=System
SymbolicName=omp_stmt_in_sections_needs_section_pragma
Language=English
any block but the first must have "section" OpenMP pragma
.

MessageId=1399
Severity=Warning
Facility=System
SymbolicName=omp_should_be_section_pragma
Language=English
OpenMP pragma in "sections" should be "section", not %%sq1
.

MessageId=1400
Severity=Warning
Facility=System
SymbolicName=omp_dvsm_main_argc_argv
Language=English
NetGuide (DVSM) requires main to have at least two parameters (argc,argv)
.

MessageId=1401
Severity=Warning
Facility=System
SymbolicName=omp_for_index_signed_integer_type
Language=English
Index variable %%no for OpenMP for must be a signed integer type
.

MessageId=1402
Severity=Warning
Facility=System
SymbolicName=omp_pfor_increment_must_be_int
Language=English
OpenMP for increment must be an int
.

MessageId=1403
Severity=Warning
Facility=System
SymbolicName=omp_pfor_index_is_reference
Language=English
Index variable %%no in OpenMP "for" cannot be a reference type
.

MessageId=1404
Severity=Warning
Facility=System
SymbolicName=omp_pfor_init_integer
Language=English
Initial condition value of OpenMP for must be an int
.

MessageId=1405
Severity=Warning
Facility=System
SymbolicName=omp_pfor_needs_increment
Language=English
An OpenMP "for" must have a loop-invariant increment of integer type
.

MessageId=1406
Severity=Warning
Facility=System
SymbolicName=omp_pfor_needs_initializer
Language=English
the for statement following an OpenMP for pragma must have an initializer of the form <index> = <expr>
.

MessageId=1407
Severity=Warning
Facility=System
SymbolicName=omp_pfor_needs_terminator
Language=English
the for statement following an OpenMP for pragma must have a conditional of the form <index> {<,<=,>=,>} <expr>
.

MessageId=1408
Severity=Warning
Facility=System
SymbolicName=omp_pfor_terminator_integer
Language=English
Terminating condition value of OpenMP for must be an int
.

MessageId=1409
Severity=Warning
Facility=System
SymbolicName=omp_private_constructor
Language=English
Variable must have an accessible, unambiguous default constructor
.

MessageId=1410
Severity=Warning
Facility=System
SymbolicName=omp_no_chunk_allowed
Language=English
Chunk_size not allowed with schedule(runtime)
.

MessageId=1411
Severity=Warning
Facility=System
SymbolicName=omp_threadprivate_referenced
Language=English
Threadprivate directive must lexically precede all references to any variables in its list
.

MessageId=1412
Severity=Warning
Facility=System
SymbolicName=gnu_asm_bad_register_type
Language=English
variable type %%t1 not suitable for a register
.

MessageId=1413
Severity=Warning
Facility=System
SymbolicName=gnu_asm_register_mismatch
Language=English
register %%s's type does not match variable type %%t1
.

MessageId=1414
Severity=Warning
Facility=System
SymbolicName=statement_expression_in_function_only
Language=English
statement expressions are only allowed in block scope
.

MessageId=1415
Severity=Warning
Facility=System
SymbolicName=tag_1415
Language=English
from translation unit 
.

MessageId=1416
Severity=Warning
Facility=System
SymbolicName=asm_name_on_auto_variable
Language=English
an asm name is ignored on a non-register automatic variable
.

MessageId=1417
Severity=Warning
Facility=System
SymbolicName=omp_var_not_allowed
Language=English
%%s variable cannot be specified in this clause
.

MessageId=1418
Severity=Warning
Facility=System
SymbolicName=undeclared_external_def
Language=English
external definition with no prior declaration
.

MessageId=1419
Severity=Warning
Facility=System
SymbolicName=external_decl_in_primary_src
Language=English
external declaration in primary source file
.

MessageId=1420
Severity=Warning
Facility=System
SymbolicName=for_init_hides_declaration
Language=English
declaration in for-initializer hides a declaration in the surrounding scope
.

MessageId=1421
Severity=Warning
Facility=System
SymbolicName=for_init_hidden_declaration
Language=English
the hidden declaration is %%p
.

MessageId=1422
Severity=Warning
Facility=System
SymbolicName=path_file_not_found
Language=English
%%s not found; Intel(R) Threading Tools must be installed
.

MessageId=1423
Severity=Warning
Facility=System
SymbolicName=cannot_define_dllimport_static_data_member
Language=English
a static data member declared "dllimport" may not be defined
.

MessageId=1424
Severity=Warning
Facility=System
SymbolicName=intrin_const_param
Language=English
intrinsic parameter must be an immediate value
.

MessageId=1425
Severity=Warning
Facility=System
SymbolicName=omp_throw_in_region
Language=English
throw cannot be used to exit %%s region
.

MessageId=1426
Severity=Warning
Facility=System
SymbolicName=omp_nowait_conflict
Language=English
copyprivate and nowait cannot be used together
.

MessageId=1427
Severity=Warning
Facility=System
SymbolicName=const_qualifier_asm_ignored
Language=English
const qualifier on asm is ignored
.

MessageId=1428
Severity=Warning
Facility=System
SymbolicName=bad_dll_def
Language=English
definition of dllimport data not allowed
.

MessageId=1429
Severity=Warning
Facility=System
SymbolicName=declaration_hides_for_init
Language=English
variable declaration hides declaration in for-initializer
.

MessageId=1430
Severity=Warning
Facility=System
SymbolicName=typedef_in_elab_type
Language=English
typedef %%sq may not be used in an elaborated type specifier
.

MessageId=1431
Severity=Warning
Facility=System
SymbolicName=call_of_zero
Language=English
call of zero constant ignored
.

MessageId=1432
Severity=Warning
Facility=System
SymbolicName=gnu_style_asm
Language=English
cannot declare Gnu-style asm when -use_msasm is specified
.

MessageId=1433
Severity=Warning
Facility=System
SymbolicName=omp_questionable
Language=English
OpenMP %%s may not conform
.

MessageId=1434
Severity=Warning
Facility=System
SymbolicName=omp_invalid_default
Language=English
default value must be one of {shared,none}
.

MessageId=1435
Severity=Warning
Facility=System
SymbolicName=unimplemented_stdc_pragma
Language=English
unimplemented STDC pragma ignored
.

MessageId=1436
Severity=Warning
Facility=System
SymbolicName=nonstd_ignored_array_cast
Language=English
nonstandard cast to array type ignored
.

MessageId=1437
Severity=Warning
Facility=System
SymbolicName=expected_integer_constant
Language=English
argument must be an integer constant between 0 and %%s
.

MessageId=1438
Severity=Warning
Facility=System
SymbolicName=omp_privatized_reduction_variable
Language=English
variable %%no in private, firstprivate, or lastprivate clause of an OpenMP pragma must not be a reduction variable in the enclosing context
.

MessageId=1439
Severity=Warning
Facility=System
SymbolicName=unrecognized_upc_pragma
Language=English
unrecognized UPC pragma
.

MessageId=1440
Severity=Warning
Facility=System
SymbolicName=mismatched_shared_block_size
Language=English
shared block size does not match one previously specified
.

MessageId=1441
Severity=Warning
Facility=System
SymbolicName=ambiguous_block_size_spec
Language=English
bracketed expression is assumed to be a block size specification rather than an array dimension
.

MessageId=1442
Severity=Warning
Facility=System
SymbolicName=shared_block_size_must_be_positive
Language=English
the block size of a shared array must be greater than zero
.

MessageId=1443
Severity=Warning
Facility=System
SymbolicName=multiple_block_sizes
Language=English
multiple block sizes not allowed
.

MessageId=1444
Severity=Warning
Facility=System
SymbolicName=nonshared_strict_relaxed
Language=English
strict or relaxed requires shared
.

MessageId=1445
Severity=Warning
Facility=System
SymbolicName=threads_constant_not_allowed
Language=English
THREADS not allowed in this context
.

MessageId=1446
Severity=Warning
Facility=System
SymbolicName=shared_block_size_too_large
Language=English
block size specified exceeds the maximum value of %%s
.

MessageId=1447
Severity=Warning
Facility=System
SymbolicName=function_returning_shared
Language=English
function returning shared is not allowed
.

MessageId=1448
Severity=Warning
Facility=System
SymbolicName=tag_1448
Language=English
ec_removed_1448
.

MessageId=1449
Severity=Warning
Facility=System
SymbolicName=shared_nonthreads_dim
Language=English
one dimension of an array of a shared type must be a multiple of THREADS when the number of threads is nonconstant
.

MessageId=1450
Severity=Warning
Facility=System
SymbolicName=shared_inside_struct
Language=English
shared type inside a struct or union is not allowed
.

MessageId=1451
Severity=Warning
Facility=System
SymbolicName=shared_parameter
Language=English
parameters may not have shared types
.

MessageId=1452
Severity=Warning
Facility=System
SymbolicName=threads_dimension_requires_definite_block_size
Language=English
a dynamic THREADS dimension requires a definite block size
.

MessageId=1453
Severity=Warning
Facility=System
SymbolicName=bad_shared_storage_class
Language=English
shared variables must be static or extern
.

MessageId=1454
Severity=Warning
Facility=System
SymbolicName=nonshared_blocksizeof
Language=English
argument of upc_blocksizeof is a pointer to a shared type (not shared type itself)
.

MessageId=1455
Severity=Warning
Facility=System
SymbolicName=nested_upc_forall
Language=English
affinity expression ignored in nested upc_forall
.

MessageId=1456
Severity=Warning
Facility=System
SymbolicName=exit_forall
Language=English
branching into or out of a upc_forall loop is not allowed
.

MessageId=1457
Severity=Warning
Facility=System
SymbolicName=bad_affinity
Language=English
affinity expression must have a shared type or point to a shared type
.

MessageId=1458
Severity=Warning
Facility=System
SymbolicName=shared_affinity_type
Language=English
affinity has shared type (not pointer to shared)
.

MessageId=1459
Severity=Warning
Facility=System
SymbolicName=upc_shared_void_comparison
Language=English
shared void* types can only be compared for equality
.

MessageId=1460
Severity=Warning
Facility=System
SymbolicName=cl_upc_requires_ansi_c_dialect
Language=English
UPC mode is incompatible with C++ and K&R modes
.

MessageId=1461
Severity=Warning
Facility=System
SymbolicName=null_char_ignored
Language=English
null (zero) character in input line ignored
.

MessageId=1462
Severity=Warning
Facility=System
SymbolicName=null_char_in_string
Language=English
null (zero) character in string or character constant
.

MessageId=1463
Severity=Warning
Facility=System
SymbolicName=null_char_in_header_name
Language=English
null (zero) character in header name
.

MessageId=1464
Severity=Warning
Facility=System
SymbolicName=prototype_lost
Language=English
the prototype declaration of %%nfd is ignored after this unprototyped redeclaration
.

MessageId=1465
Severity=Warning
Facility=System
SymbolicName=tag_1465
Language=English
ec_removed_1465
.

MessageId=1466
Severity=Warning
Facility=System
SymbolicName=bad_linkage_for_redefine_extname
Language=English
%%npd must have external C linkage
.

MessageId=1467
Severity=Warning
Facility=System
SymbolicName=handler_redeclares_parameter
Language=English
parameter %%sq may not be redeclared in a catch clause of function try block
.

MessageId=1468
Severity=Warning
Facility=System
SymbolicName=specialization_out_of_namespace
Language=English
the initial explicit specialization of %%n must be declared in the namespace containing the template
.

MessageId=1469
Severity=Warning
Facility=System
SymbolicName=cc_clobber_ignored
Language=English
"cc" clobber ignored
.

MessageId=1470
Severity=Warning
Facility=System
SymbolicName=invalid_token_after_template
Language=English
"template" must be followed by an identifier
.

MessageId=1471
Severity=Warning
Facility=System
SymbolicName=mythread_constant_not_allowed
Language=English
MYTHREAD not allowed in this context
.

MessageId=1472
Severity=Warning
Facility=System
SymbolicName=bad_upc_shared_pointer_layout_qualifier
Language=English
layout qualifier cannot qualify pointer to shared
.

MessageId=1473
Severity=Warning
Facility=System
SymbolicName=bad_upc_shared_array_layout_qualifier
Language=English
layout qualifier cannot qualify an incomplete array
.

MessageId=1474
Severity=Warning
Facility=System
SymbolicName=decl_hides_catch_parameter
Language=English
declaration of %%sq hides handler parameter
.

MessageId=1475
Severity=Warning
Facility=System
SymbolicName=invalid_pragma_operator
Language=English
this pragma cannot be used in a _Pragma operator (a #pragma directive must be used)
.

MessageId=1476
Severity=Warning
Facility=System
SymbolicName=field_uses_tail_padding
Language=English
field uses tail padding of a base class
.

MessageId=1477
Severity=Warning
Facility=System
SymbolicName=gnu_may_use_bit_padding
Language=English
GNU C++ compilers may use bit field padding
.

MessageId=1478
Severity=Warning
Facility=System
SymbolicName=deprecated_entity
Language=English
use of %%nd is deprecated
.

MessageId=1479
Severity=Warning
Facility=System
SymbolicName=hidden_anonymous_union_field
Language=English
this anonymous union/struct field is hidden by %%nd
.

MessageId=1480
Severity=Warning
Facility=System
SymbolicName=field_with_asm_name_not_allowed
Language=English
an asm name is not allowed on a nonstatic member declaration
.

MessageId=1481
Severity=Warning
Facility=System
SymbolicName=nonlocal_label_reference
Language=English
labels can be referenced only in function definitions
.

MessageId=1482
Severity=Warning
Facility=System
SymbolicName=jump_out_of_finally
Language=English
 %%s : jump out of __finally block has undefined behaviour during termination handling
.

MessageId=1483
Severity=Warning
Facility=System
SymbolicName=branch_into_statement_expr
Language=English
transfer of control into a statement expression is not allowed
.

MessageId=1484
Severity=Warning
Facility=System
SymbolicName=branch_out_of_statement_expr
Language=English
transfer of control out of a statement expression is not allowed
.

MessageId=1485
Severity=Warning
Facility=System
SymbolicName=bad_statement_in_statement_expr
Language=English
this statement is not allowed inside of a statement expression
.

MessageId=1486
Severity=Warning
Facility=System
SymbolicName=class_def_in_statement_expr
Language=English
a non-POD (Plain Old Data) class definition is not allowed inside of a statement expression
.

MessageId=1487
Severity=Warning
Facility=System
SymbolicName=destr_in_statement_expr
Language=English
destructible entities are not allowed inside of a statement expression
.

MessageId=1488
Severity=Warning
Facility=System
SymbolicName=dyn_local_static_in_statement_expr
Language=English
a dynamically-initialized local static variable is not allowed inside of a statement expression
.

MessageId=1489
Severity=Warning
Facility=System
SymbolicName=vla_in_statement_expr
Language=English
a variable-length array is not allowed inside of a statement expression
.

MessageId=1490
Severity=Warning
Facility=System
SymbolicName=statement_expr_in_default_arg
Language=English
a statement expression is not allowed inside of a default argument
.

MessageId=1491
Severity=Warning
Facility=System
SymbolicName=hidden_by_old_for_init_ms
Language=English
definition from the enclosing scope %%nd1 :is used. definition from the for loop %%nd2 is ignored
.

MessageId=1492
Severity=Warning
Facility=System
SymbolicName=show_value_of_pragma_conform
Language=English
value of pragma conform(forScope, show) == %%sq
.

MessageId=1493
Severity=Warning
Facility=System
SymbolicName=push_pop_pragma_conform
Language=English
expected pragma parameter to be 'on' or 'off'
.

MessageId=1494
Severity=Warning
Facility=System
SymbolicName=pop_pragma_conform
Language=English
#pragma conform(pop,...) : did not find previously pushed identifer %%sq
.

MessageId=1495
Severity=Warning
Facility=System
SymbolicName=unexpected_identifier
Language=English
unexpected token 'identifier'
.

MessageId=1496
Severity=Warning
Facility=System
SymbolicName=omp_bad_threadshared_var
Language=English
threadshared variable should not be incomplete or reference type
.

MessageId=1497
Severity=Warning
Facility=System
SymbolicName=omp_threadshared_referenced
Language=English
threadshared directive must lexically precede all references to any variables in its list
.

MessageId=1498
Severity=Warning
Facility=System
SymbolicName=unrecognized_format_function_type
Language=English
unrecognized format function type %%sq ignored
.

MessageId=1499
Severity=Warning
Facility=System
SymbolicName=base_uses_tail_padding
Language=English
base class %%no1 uses tail padding of base class %%no2
.

MessageId=1500
Severity=Warning
Facility=System
SymbolicName=bad_variable_for_init_priority
Language=English
the "init_priority" attribute can only be used for definitions of static data members and namespace scope variables of class types
.

MessageId=1501
Severity=Warning
Facility=System
SymbolicName=init_priority_reserved
Language=English
requested initialization priority is reserved for internal use
.

MessageId=1502
Severity=Warning
Facility=System
SymbolicName=invalid_error_number
Language=English
invalid error number
.

MessageId=1503
Severity=Warning
Facility=System
SymbolicName=invalid_error_tag
Language=English
invalid error tag
.

MessageId=1504
Severity=Warning
Facility=System
SymbolicName=exp_error_argument
Language=English
expected an error number or error tag
.

MessageId=1505
Severity=Warning
Facility=System
SymbolicName=size_affected_by_tail_padding
Language=English
size of class is affected by tail padding
.

MessageId=1506
Severity=Warning
Facility=System
SymbolicName=unexpected_noprefetch_arguments
Language=English
unexpected argument for noprefetch
.

MessageId=1507
Severity=Warning
Facility=System
SymbolicName=expected_positive_integer
Language=English
expected positive integer
.

MessageId=1508
Severity=Warning
Facility=System
SymbolicName=cl_invalid_gnu_version
Language=English
invalid GNU version number: 
.

MessageId=1509
Severity=Warning
Facility=System
SymbolicName=no_gnu_virtual_base_gap
Language=English
GNU layout bug not emulated because it places virtual base %%no1 outside %%no2 object boundaries
.

MessageId=1510
Severity=Warning
Facility=System
SymbolicName=gnu_virtual_base_gap
Language=English
virtual base %%no1 placed outside %%no2 object boundaries
.

MessageId=1511
Severity=Warning
Facility=System
SymbolicName=ptr_func_ptr_data_conv
Language=English
nonstandard conversion between pointer to function and pointer to data
.

MessageId=1512
Severity=Warning
Facility=System
SymbolicName=interface_cannot_have_virtual_base
Language=English
interface types cannot have virtual base classes
.

MessageId=1513
Severity=Warning
Facility=System
SymbolicName=interface_cannot_have_private_or_protected
Language=English
interface types cannot specify "private" or "protected"
.

MessageId=1514
Severity=Warning
Facility=System
SymbolicName=interface_must_derive_from_interface
Language=English
interface types can only derive from other interface types
.

MessageId=1515
Severity=Warning
Facility=System
SymbolicName=type_is_interface
Language=English
%%t is an interface type
.

MessageId=1516
Severity=Warning
Facility=System
SymbolicName=interface_cannot_have_typedef
Language=English
interface types cannot have typedef members
.

MessageId=1517
Severity=Warning
Facility=System
SymbolicName=interface_cannot_have_ctor_or_dtor
Language=English
interface types cannot have user-declared constructors or destructors
.

MessageId=1518
Severity=Warning
Facility=System
SymbolicName=interface_cannot_have_operator
Language=English
interface types cannot have user-declared member operators
.

MessageId=1519
Severity=Warning
Facility=System
SymbolicName=interface_cannot_be_local
Language=English
interface types cannot be declared in functions
.

MessageId=1520
Severity=Warning
Facility=System
SymbolicName=interface_cannot_be_template
Language=English
cannot declare interface templates
.

MessageId=1521
Severity=Warning
Facility=System
SymbolicName=interface_cannot_have_data_member
Language=English
interface types cannot have data members
.

MessageId=1522
Severity=Warning
Facility=System
SymbolicName=interface_cannot_have_friend
Language=English
interface types cannot contain friend declarations
.

MessageId=1523
Severity=Warning
Facility=System
SymbolicName=interface_cannot_have_nested_class
Language=English
interface types cannot have nested classes
.

MessageId=1524
Severity=Warning
Facility=System
SymbolicName=interface_cannot_be_nested_class
Language=English
interface types cannot be nested class types
.

MessageId=1525
Severity=Warning
Facility=System
SymbolicName=interface_cannot_have_member_templates
Language=English
interface types cannot have member templates
.

MessageId=1526
Severity=Warning
Facility=System
SymbolicName=interface_cannot_have_static_members
Language=English
interface types cannot have static member functions
.

MessageId=1527
Severity=Warning
Facility=System
SymbolicName=invalid_microsoft_pragma_operator
Language=English
this pragma cannot be used in a __pragma operator (a #pragma directive must be used)
.

MessageId=1528
Severity=Warning
Facility=System
SymbolicName=qualifier_must_be_base_class
Language=English
qualifier must be base class of %%t
.

MessageId=1529
Severity=Warning
Facility=System
SymbolicName=invalid_selective_overrider_declaration
Language=English
declaration must correspond to a pure virtual member function in the indicated base class
.

MessageId=1530
Severity=Warning
Facility=System
SymbolicName=integer_overflow_class_internal
Language=English
integer overflow in internal computation due to size or complexity of %%t
.

MessageId=1531
Severity=Warning
Facility=System
SymbolicName=integer_overflow_internal
Language=English
integer overflow in internal computation
.

MessageId=1532
Severity=Warning
Facility=System
SymbolicName=invalid_type_for_w64
Language=English
__w64 can only be specified on int, long, and pointer types
.

MessageId=1533
Severity=Warning
Facility=System
SymbolicName=ilp64_will_narrow
Language=English
potentially narrowing conversion when compiled in an environment where int, long, or pointer types are 64 bits wide
.

MessageId=1534
Severity=Warning
Facility=System
SymbolicName=value_of_pragma_pack_show
Language=English
current value of pragma pack is %%s
.

MessageId=1535
Severity=Warning
Facility=System
SymbolicName=pragma_pack_show_args_ignored
Language=English
arguments for pragma pack(show) are ignored
.

MessageId=1536
Severity=Warning
Facility=System
SymbolicName=bad_alignment_specifier
Language=English
invalid alignment specifier value
.

MessageId=1537
Severity=Warning
Facility=System
SymbolicName=exp_int_literal
Language=English
expected an integer literal
.

MessageId=1538
Severity=Warning
Facility=System
SymbolicName=multiple_declspec_align
Language=English
earlier __declspec(align(...)) ignored
.

MessageId=1539
Severity=Warning
Facility=System
SymbolicName=exp_ms_attr_enum_value
Language=English
expected an argument value for the %%sq attribute parameter
.

MessageId=1540
Severity=Warning
Facility=System
SymbolicName=invalid_ms_attr_enum_value
Language=English
invalid argument value for the %%sq attribute parameter
.

MessageId=1541
Severity=Warning
Facility=System
SymbolicName=exp_ms_attr_bool_value
Language=English
expected a boolean value for the %%sq attribute parameter
.

MessageId=1542
Severity=Warning
Facility=System
SymbolicName=positional_after_named
Language=English
a positional argument cannot follow a named argument in an attribute
.

MessageId=1543
Severity=Warning
Facility=System
SymbolicName=invalid_ms_attr_name
Language=English
attribute %%sq1 has no parameter named %%sq2
.

MessageId=1544
Severity=Warning
Facility=System
SymbolicName=exp_ms_attr_arg_list
Language=English
expected an argument list for the %%sq attribute
.

MessageId=1545
Severity=Warning
Facility=System
SymbolicName=exp_comma_or_rbracket
Language=English
expected a "," or "]"
.

MessageId=1546
Severity=Warning
Facility=System
SymbolicName=duplicate_ms_attr_arg
Language=English
attribute argument %%sq has already been given a value
.

MessageId=1547
Severity=Warning
Facility=System
SymbolicName=cannot_assign_to_ms_attr
Language=English
a value cannot be assigned to the %%sq attribute
.

MessageId=1548
Severity=Warning
Facility=System
SymbolicName=ptr_incomplete_throw
Language=English
a throw expression may not have pointer-to-incomplete type
.

MessageId=1549
Severity=Warning
Facility=System
SymbolicName=alignof_incomplete_type
Language=English
alignment-of operator applied to incomplete type
.

MessageId=1550
Severity=Warning
Facility=System
SymbolicName=invalid_use_of_standalone_ms_attr
Language=English
%%sq may only be used as a standalone attribute
.

MessageId=1551
Severity=Warning
Facility=System
SymbolicName=invalid_use_of_ms_attr
Language=English
%%sq attribute cannot be used here
.

MessageId=1552
Severity=Warning
Facility=System
SymbolicName=unrecognized_ms_attr
Language=English
unrecognized attribute %%sq
.

MessageId=1553
Severity=Warning
Facility=System
SymbolicName=ms_attr_not_allowed
Language=English
attributes are not allowed here
.

MessageId=1554
Severity=Warning
Facility=System
SymbolicName=invalid_ms_attr_uuid_value
Language=English
invalid argument value for the %%sq attribute parameter
.

MessageId=1555
Severity=Warning
Facility=System
SymbolicName=too_many_ms_attr_args
Language=English
too many attribute arguments
.

MessageId=1556
Severity=Warning
Facility=System
SymbolicName=conv_from_inaccessible_base_class
Language=English
conversion from inaccessible base class %%t is not allowed
.

MessageId=1557
Severity=Warning
Facility=System
SymbolicName=cl_export_template_requires_distinct_templ_sigs
Language=English
option "export" requires distinct template signatures
.

MessageId=1558
Severity=Warning
Facility=System
SymbolicName=declspec_align_reduction_ignored
Language=English
reduction in alignment ignored
.

MessageId=1559
Severity=Warning
Facility=System
SymbolicName=infinities_not_supported
Language=English
target floating-point format does not support infinities
.

MessageId=1560
Severity=Warning
Facility=System
SymbolicName=bad_storage_for_template_instantiation
Language=English
storage class %%s applied to explicit template instantiation for %%n
.

MessageId=1561
Severity=Warning
Facility=System
SymbolicName=const_assigned_goto
Language=English
expr in "goto *expr" is constant
.

MessageId=1562
Severity=Warning
Facility=System
SymbolicName=bad_strong_using_scope
Language=English
a strong using-directive may only appear in a namespace scope
.

MessageId=1563
Severity=Warning
Facility=System
SymbolicName=taking_address_of_temporary
Language=English
taking the address of a temporary
.

MessageId=1564
Severity=Warning
Facility=System
SymbolicName=x87_fp_instruction_not_supported
Language=English
x87 fp instruction is not supported
.

MessageId=1565
Severity=Warning
Facility=System
SymbolicName=attribute_ignored_on_incomplete_class_decl
Language=English
attributes are ignored on a class declaration that is not also a definition
.

MessageId=1566
Severity=Warning
Facility=System
SymbolicName=alloc_is_not_allowed_in_filter_or_finally
Language=English
'_alloca' cannot be called from within a filter expression or __finally block
.

MessageId=1567
Severity=Warning
Facility=System
SymbolicName=alloc_is_not_allowed_in_catch_block
Language=English
'_alloca' cannot be called from within a catch block
.

MessageId=1568
Severity=Warning
Facility=System
SymbolicName=seh_intrinsic_function
Language=English
 %%s : bad context for intrinsic function
.

MessageId=1569
Severity=Warning
Facility=System
SymbolicName=duplicate_typedef_in_class
Language=English
class member typedef may not be redeclared
.

MessageId=1570
Severity=Warning
Facility=System
SymbolicName=only_one_form_exception_handling
Language=English
Only one form of exception handling permitted per function
.

MessageId=1571
Severity=Warning
Facility=System
SymbolicName=enum_const_cast
Language=English
const_cast to enum type is nonstandard
.

MessageId=1572
Severity=Warning
Facility=System
SymbolicName=floating_point_equality
Language=English
floating-point equality and inequality comparisons are unreliable
.

MessageId=1573
Severity=Warning
Facility=System
SymbolicName=exception_handling_disabled
Language=English
try block found but exception handling is disabled
.

MessageId=1574
Severity=Warning
Facility=System
SymbolicName=struct_class_union_not_supported_for_prefetch
Language=English
struct, class, and union are not supported for prefetch or noprefetch
.

MessageId=1575
Severity=Warning
Facility=System
SymbolicName=bit_field_initial_address
Language=English
bit field can not be statically initialized with an address
.

MessageId=1576
Severity=Warning
Facility=System
SymbolicName=gnu_asm_nested_dialect
Language=English
invalid 'asm': nested assembly dialect alternatives
.

MessageId=1577
Severity=Warning
Facility=System
SymbolicName=gnu_asm_unterminated_dialect
Language=English
invalid `asm': unterminated assembly dialect alternative
.

MessageId=1578
Severity=Warning
Facility=System
SymbolicName=global_reg_value_out_of_range
Language=English
bad __global_reg value, expecting value between 1 and 8, but not 4 in thumb mode
.

MessageId=1579
Severity=Warning
Facility=System
SymbolicName=global_reg_type_not_allowed
Language=English
__global_reg cannot be used with this type
.

MessageId=1580
Severity=Warning
Facility=System
SymbolicName=global_reg_scope_not_allowed
Language=English
__global_reg not allowed in this scope
.

MessageId=1581
Severity=Warning
Facility=System
SymbolicName=global_reg_storage_class_not_allowed
Language=English
__global_reg may not be used with this storage class
.

MessageId=1582
Severity=Warning
Facility=System
SymbolicName=global_reg_initialization_not_allowed
Language=English
__global_reg may not be initialized
.

MessageId=1583
Severity=Warning
Facility=System
SymbolicName=global_reg_address_of_variable
Language=English
taking the address of a global register variable is not allowed
.

MessageId=1584
Severity=Warning
Facility=System
SymbolicName=swi_value_out_of_range
Language=English
bad __swi, __swi_indirect value
.

MessageId=1585
Severity=Warning
Facility=System
SymbolicName=swi_function_declaration_required
Language=English
__swi and __swi_indirect are allowed for function declarations only
.

MessageId=1586
Severity=Warning
Facility=System
SymbolicName=value_in_regs_function_required
Language=English
__value_in_regs can only be used in function definition or declaration
.

MessageId=1587
Severity=Warning
Facility=System
SymbolicName=value_in_regs_copyconst
Language=English
__value_in_regs cannot be used with structure types having copy constructor
.

MessageId=1588
Severity=Warning
Facility=System
SymbolicName=value_in_regs_size_limit
Language=English
__value_in_regs return type size may not be more than 16 bytes
.

MessageId=1589
Severity=Warning
Facility=System
SymbolicName=arm_packed_ignored
Language=English
__packed is ignored
.

MessageId=1590
Severity=Warning
Facility=System
SymbolicName=arm_packed_inconsistent_type
Language=English
type is inconsistent with __packed
.

MessageId=1591
Severity=Warning
Facility=System
SymbolicName=value_in_regs_ignored
Language=English
__value_in_regs is ignored
.

MessageId=1592
Severity=Warning
Facility=System
SymbolicName=pch_through_header_not_found
Language=English
%%sq was specified with /Yc or /Yu; related #include not found
.

MessageId=1593
Severity=Warning
Facility=System
SymbolicName=pch_through_header_not_found_before_hdrstop
Language=English
%%sq was specified with /Yc or /Yu; related #include not found before #pragma hdrstop
.

MessageId=1594
Severity=Warning
Facility=System
SymbolicName=incomplete_class_return_type
Language=English
function returns incomplete class type %%t
.

MessageId=1595
Severity=Warning
Facility=System
SymbolicName=non_pod_passed_to_ellipsis
Language=English
non-POD (Plain Old Data) class type passed through ellipsis
.

MessageId=1596
Severity=Warning
Facility=System
SymbolicName=clomp_list_auto_promoted
Language=English
Made sharable: %%n
.

MessageId=1597
Severity=Warning
Facility=System
SymbolicName=clomp_list_not_sharable
Language=English
Not made sharable: %%n
.

MessageId=1598
Severity=Warning
Facility=System
SymbolicName=clomp_check_reference
Language=English
Check that argument associated with %%n at each call site is sharable
.

MessageId=1599
Severity=Warning
Facility=System
SymbolicName=local_variable_hidden
Language=English
declaration hides %%nd
.

MessageId=1600
Severity=Warning
Facility=System
SymbolicName=integer_reg_name
Language=English
using an integer to specify a register is not portable
.

MessageId=1601
Severity=Warning
Facility=System
SymbolicName=cdecl_varargs
Language=English
__cdecl must be used with "..."
.

MessageId=1602
Severity=Warning
Facility=System
SymbolicName=thiscall_member_function
Language=English
__thiscall can only be used on native member functions
.

MessageId=1603
Severity=Warning
Facility=System
SymbolicName=clrcall_ignored
Language=English
__clrcall not supported
.

MessageId=1604
Severity=Warning
Facility=System
SymbolicName=clrcall_nonmanaged_code
Language=English
__clrcall can only be called from managed code
.

MessageId=1605
Severity=Warning
Facility=System
SymbolicName=asm_syntax_error
Language=English
inline assembler syntax error
.

MessageId=1606
Severity=Warning
Facility=System
SymbolicName=mmx_instruction_not_supported
Language=English
MMX instructions are not supported on this platform
.

MessageId=1607
Severity=Warning
Facility=System
SymbolicName=dll_thread_conflict
Language=English
a thread-local variable cannot be declared with "dllimport" or "dllexport"
.

MessageId=1608
Severity=Warning
Facility=System
SymbolicName=cannot_initialize_destructible_flexible_array
Language=English
an initializer cannot be specified for a flexible array member whose elements have a nontrivial destructor
.

MessageId=1609
Severity=Warning
Facility=System
SymbolicName=cannot_initialize_indirect_flexible_array
Language=English
an initializer cannot be specified for an indirect flexible array member
.

MessageId=1610
Severity=Warning
Facility=System
SymbolicName=cannot_open_message_catalog
Language=English
Could not open message catalog %%s in NLSPATH/LANG. Using internal messages.
.

MessageId=1611
Severity=Warning
Facility=System
SymbolicName=mixed_string_concatenation
Language=English
narrow and wide string literals cannot be concatenated
.

MessageId=1612
Severity=Warning
Facility=System
SymbolicName=nonstd_qualifier_in_namespace_member_decl
Language=English
nonstandard qualified name in namespace member declaration
.

MessageId=1613
Severity=Warning
Facility=System
SymbolicName=const_ignored
Language=English
const qualifier ignored
.

MessageId=1614
Severity=Warning
Facility=System
SymbolicName=invalid_asm_qualifiers
Language=English
invalid GNU asm qualifiers
.

MessageId=1615
Severity=Warning
Facility=System
SymbolicName=non_pod_va_arg
Language=English
a non-POD (Plain Old Data) class type cannot be fetched by va_arg
.

MessageId=1616
Severity=Warning
Facility=System
SymbolicName=nonstd_fixed_point_suffix
Language=English
the 'u' or 'U' suffix must appear before the 'l' or 'L' suffix in a fixed-point literal
.

MessageId=1617
Severity=Warning
Facility=System
SymbolicName=cl_fixed_point_option_only_in_C
Language=English
option "fixed_point" can be used only when compiling C
.

MessageId=1618
Severity=Warning
Facility=System
SymbolicName=integer_may_not_fit_in_fixed_point_result
Language=English
integer operand may cause fixed-point overflow
.

MessageId=1619
Severity=Warning
Facility=System
SymbolicName=bad_fixed_point_value
Language=English
fixed-point constant is out of range
.

MessageId=1620
Severity=Warning
Facility=System
SymbolicName=inexact_fxp_conversion
Language=English
fixed-point value cannot be represented exactly
.

MessageId=1621
Severity=Warning
Facility=System
SymbolicName=c99_constant_in_unsigned_long_long_range
Language=English
constant is too large for long long; given unsigned long long type (nonstandard)
.

MessageId=1622
Severity=Warning
Facility=System
SymbolicName=bad_upc_shared_void_pointer_layout_qualifier
Language=English
layout qualifier cannot qualify pointer to shared void
.

MessageId=1623
Severity=Warning
Facility=System
SymbolicName=duplicate_threads_dim
Language=English
duplicate THREADS in multidimensional array type
.

MessageId=1624
Severity=Warning
Facility=System
SymbolicName=probable_guiding_friend
Language=English
%%nf declares a non-template function -- add <> to refer to a template instance
.

MessageId=1625
Severity=Warning
Facility=System
SymbolicName=operation_may_not_fit_in_fixed_point_result
Language=English
operation may cause fixed-point overflow
.

MessageId=1626
Severity=Warning
Facility=System
SymbolicName=expr_not_integral_or_enum_or_fixed_point
Language=English
expression must have integral, enum, or fixed-point type
.

MessageId=1627
Severity=Warning
Facility=System
SymbolicName=expr_not_integral_or_fixed_point
Language=English
expression must have integral or fixed-point type
.

MessageId=1628
Severity=Warning
Facility=System
SymbolicName=noreturn_function_does_return
Language=English
function declared with "noreturn" does return
.

MessageId=1629
Severity=Warning
Facility=System
SymbolicName=asm_name_conflict
Language=English
asm name ignored because it conflicts with a previous declaration
.

MessageId=1630
Severity=Warning
Facility=System
SymbolicName=implicit_fixed_point_to_floating_point_conversion
Language=English
fixed-point value implicitly converted to floating-point type
.

MessageId=1631
Severity=Warning
Facility=System
SymbolicName=no_classification_for_fixed_point_type
Language=English
fixed-point types have no classification
.

MessageId=1632
Severity=Warning
Facility=System
SymbolicName=fixed_template_parameter
Language=English
a template parameter may not have fixed-point type
.

MessageId=1633
Severity=Warning
Facility=System
SymbolicName=hex_fp_constant
Language=English
hexadecimal floating-point constants are not allowed
.

MessageId=1634
Severity=Warning
Facility=System
SymbolicName=cl_named_address_spaces_option_only_in_C
Language=English
option "named_address_spaces" can be used only when compiling C
.

MessageId=1635
Severity=Warning
Facility=System
SymbolicName=float_to_fixed_conversion
Language=English
floating-point value does not fit in required fixed-point type
.

MessageId=1636
Severity=Warning
Facility=System
SymbolicName=inexact_fixed_conversion
Language=English
value cannot be converted to fixed-point value exactly
.

MessageId=1637
Severity=Warning
Facility=System
SymbolicName=fixed_sign_change
Language=English
fixed-point conversion resulted in a change of sign
.

MessageId=1638
Severity=Warning
Facility=System
SymbolicName=integer_to_fixed_conversion
Language=English
integer value does not fit in required fixed-point type
.

MessageId=1639
Severity=Warning
Facility=System
SymbolicName=bad_fixed_operation_result
Language=English
fixed-point operation result is out of range
.

MessageId=1640
Severity=Warning
Facility=System
SymbolicName=multiple_named_address_spaces
Language=English
multiple named address spaces
.

MessageId=1641
Severity=Warning
Facility=System
SymbolicName=bad_storage_class_for_named_address_space_variable
Language=English
variable with automatic storage duration cannot be stored in a named address space
.

MessageId=1642
Severity=Warning
Facility=System
SymbolicName=type_with_named_address_space_not_allowed
Language=English
type cannot be qualified with named address space
.

MessageId=1643
Severity=Warning
Facility=System
SymbolicName=named_address_space_on_function_type
Language=English
function type cannot be qualified with named address space
.

MessageId=1644
Severity=Warning
Facility=System
SymbolicName=field_type_cannot_be_qualified_with_named_address_space
Language=English
field type cannot be qualified with named address space
.

MessageId=1645
Severity=Warning
Facility=System
SymbolicName=fixed_to_float_conversion
Language=English
fixed-point value does not fit in required floating-point type
.

MessageId=1646
Severity=Warning
Facility=System
SymbolicName=fixed_to_integer_conversion
Language=English
fixed-point value does not fit in required integer type
.

MessageId=1647
Severity=Warning
Facility=System
SymbolicName=fixed_to_fixed_conversion
Language=English
value does not fit in required fixed-point type
.

MessageId=1648
Severity=Warning
Facility=System
SymbolicName=cl_named_registers_option_only_in_C
Language=English
option "named_registers" can be used only when compiling C
.

MessageId=1649
Severity=Warning
Facility=System
SymbolicName=named_register_not_allowed
Language=English
a named-register storage class is not allowed here
.

MessageId=1650
Severity=Warning
Facility=System
SymbolicName=register_storage_class_conflict
Language=English
%%nd redeclared with incompatible named-register storage class
.

MessageId=1651
Severity=Warning
Facility=System
SymbolicName=aliased_variable_cannot_have_register_storage_class
Language=English
named-register storage class cannot be specified for aliased variable
.

MessageId=1652
Severity=Warning
Facility=System
SymbolicName=register_in_use
Language=English
named-register storage specifier is already in use
.

MessageId=1653
Severity=Warning
Facility=System
SymbolicName=embedded_c_option_incompatible_with_individual_feature_options
Language=English
option "embedded_c" cannot be combined with options to control individual Embedded C features
.

MessageId=1654
Severity=Warning
Facility=System
SymbolicName=cl_invalid_edg_base_directory
Language=English
invalid EDG_BASE directory: 
.

MessageId=1655
Severity=Warning
Facility=System
SymbolicName=cannot_open_predef_macro_file
Language=English
cannot open predefined macro file: %%sq
.

MessageId=1656
Severity=Warning
Facility=System
SymbolicName=bad_predef_macro_line
Language=English
invalid predefined macro entry at line %%s: %%s2
.

MessageId=1657
Severity=Warning
Facility=System
SymbolicName=bad_macro_mode_name
Language=English
invalid macro mode name %%sq
.

MessageId=1658
Severity=Warning
Facility=System
SymbolicName=bad_predef_macro_redef
Language=English
incompatible redefinition of predefined macro %%sq
.

MessageId=1659
Severity=Warning
Facility=System
SymbolicName=missing_named_register_storage_class
Language=English
redeclaration of %%nd is missing a named-register storage class
.

MessageId=1660
Severity=Warning
Facility=System
SymbolicName=register_too_small
Language=English
named register is too small for the type of the variable
.

MessageId=1661
Severity=Warning
Facility=System
SymbolicName=no_named_register_for_array
Language=English
arrays cannot be declared with named-register storage class
.

MessageId=1662
Severity=Warning
Facility=System
SymbolicName=cl_embedded_c_option_only_in_C
Language=English
option "embedded_c" can be used only when compiling C
.

MessageId=1663
Severity=Warning
Facility=System
SymbolicName=bad_msfp_pragma_arg
Language=English
expected "on" or "off"
.

MessageId=1664
Severity=Warning
Facility=System
SymbolicName=bad_float_control_pragma_arg
Language=English
expected "precise", "except", "push", or "pop"
.

MessageId=1665
Severity=Warning
Facility=System
SymbolicName=exp_comma_or_rparen
Language=English
expected a "," or ")"
.

MessageId=1666
Severity=Warning
Facility=System
SymbolicName=bad_fc_push_pragma_arg
Language=English
expected "push"
.

MessageId=1667
Severity=Warning
Facility=System
SymbolicName=must_turn_off_except
Language=English
exception semantics must be turned off before turning off this float_control mode
.

MessageId=1668
Severity=Warning
Facility=System
SymbolicName=must_turn_off_fenv_access
Language=English
fenv_access must be turned off before turning off this float_control mode
.

MessageId=1669
Severity=Warning
Facility=System
SymbolicName=must_be_precise
Language=English
exception semantics cannot be enabled except in precise, source, double, and extended modes
.

MessageId=1670
Severity=Warning
Facility=System
SymbolicName=msfp_pragma_not_allowed_here
Language=English
this pragma may only appear between declarations in the global scope or before any statements or declarations in a block scope
.

MessageId=1671
Severity=Warning
Facility=System
SymbolicName=cl_unsupported_fp_fast_arg
Language=English
unsupported floating-point model "fast" argument: 
.

MessageId=1672
Severity=Warning
Facility=System
SymbolicName=invalid_pragma_expr
Language=English
invalid expression in pragma will be ignored
.

MessageId=1673
Severity=Warning
Facility=System
SymbolicName=invalid_memref_locality
Language=English
invalid locality, should be "l1", "l2", "l3", or "mem"
.

MessageId=1674
Severity=Warning
Facility=System
SymbolicName=invalid_memref_latency
Language=English
invalid latency, should be "l1_latency", "l2_latency", "l3_latency", or "mem_latency"
.

MessageId=1675
Severity=Warning
Facility=System
SymbolicName=fenv_must_be_precise
Language=English
fenv_access cannot be enabled except in precise, source, double, and extended modes
.

MessageId=1676
Severity=Warning
Facility=System
SymbolicName=cl_unsupported_arg_fp
Language=English
unsupported argument to floating-point option: 
.

MessageId=1677
Severity=Warning
Facility=System
SymbolicName=illegal_float_control_pop
Language=English
cannot restore a non-precise floating-point mode while fenv_access is enabled
.

MessageId=1678
Severity=Warning
Facility=System
SymbolicName=cl_cannot_enable_speculation
Language=English
cannot enable speculation unless fenv_access and exception_semantics are disabled
.

MessageId=1679
Severity=Warning
Facility=System
SymbolicName=cl_fltacc_conflict
Language=English
floating-point accuracy option conflicts with the floating-point mode specification
.

MessageId=1680
Severity=Warning
Facility=System
SymbolicName=cl_eval_method_conflicts
Language=English
this option conflicts with the floating-point mode specification: 
.

MessageId=1681
Severity=Warning
Facility=System
SymbolicName=el_extended_not_supported
Language=English
the "extended" floating-point model is not supported on this platform
.

MessageId=1682
Severity=Warning
Facility=System
SymbolicName=impl_narrowing_64_bit_int
Language=English
implicit conversion of a 64-bit integral type to a smaller integral type (potential portability problem)
.

MessageId=1683
Severity=Warning
Facility=System
SymbolicName=expl_narrowing_64_bit_int
Language=English
explicit conversion of a 64-bit integral type to a smaller integral type (potential portability problem)
.

MessageId=1684
Severity=Warning
Facility=System
SymbolicName=pointer_conversion_to_same_size_int
Language=English
conversion from pointer to same-sized integral type (potential portability problem)
.

MessageId=1685
Severity=Warning
Facility=System
SymbolicName=base_class_export
Language=English
base class %%t is implicitly %%sq1 but the following declaration(s) are explicitly declared %%sq2; %%sq2 ignored:
.

MessageId=1686
Severity=Warning
Facility=System
SymbolicName=size_of_variable
Language=English
local variable exceeds maximum allowable size
.

MessageId=1687
Severity=Warning
Facility=System
SymbolicName=size_of_stack
Language=English
total size of local stack frame exceeds maximum allowable size
.

MessageId=1688
Severity=Warning
Facility=System
SymbolicName=size_of_param
Language=English
total size of parameter block exceeds maximum allowable size
.

MessageId=1689
Severity=Warning
Facility=System
SymbolicName=invalid_access_specifier
Language=English
invalid use of access specifier is ignored
.

MessageId=1690
Severity=Warning
Facility=System
SymbolicName=optimization_level_out_of_range
Language=English
optimization level must be between 0 and 3
.

MessageId=1691
Severity=Warning
Facility=System
SymbolicName=inapplicable_opt_level
Language=English
optimization level applies only to function definitions
.

MessageId=1692
Severity=Warning
Facility=System
SymbolicName=white_space_inside_splice
Language=English
white space between backslash and newline in line splice ignored
.

MessageId=1693
Severity=Warning
Facility=System
SymbolicName=except_not_allowed
Language=English
__except may not appear in termination block
.

MessageId=1694
Severity=Warning
Facility=System
SymbolicName=bad_byte_order
Language=English
byte order must be 'littleendian', 'bigendian', 'default', or 'default_header'
.

MessageId=1695
Severity=Warning
Facility=System
SymbolicName=byte_order_stack_empty
Language=English
byte order stack is empty, pop ignored
.

MessageId=1696
Severity=Warning
Facility=System
SymbolicName=impl_pointer_conversion_byte_order_mismatch
Language=English
implicit pointer conversion changes byte order
.

MessageId=1697
Severity=Warning
Facility=System
SymbolicName=pointer_conversion_byte_order_mismatch
Language=English
pointer conversion changes byte order
.

MessageId=1698
Severity=Warning
Facility=System
SymbolicName=extern_prefix_stack_empty
Language=English
extern prefix stack is empty, pop ignored
.

MessageId=1699
Severity=Warning
Facility=System
SymbolicName=invalid_extern_prefix
Language=English
pragma parameter must be 'push', 'pop', or prefix string
.

MessageId=1700
Severity=Warning
Facility=System
SymbolicName=adjacent_bitf_with_diff_byte_order
Language=English
adjacent bit fields have different byte order
.

MessageId=1701
Severity=Warning
Facility=System
SymbolicName=poisoned_identifier
Language=English
cannot use poisoned identifier
.

MessageId=1702
Severity=Warning
Facility=System
SymbolicName=poisoning_defined_macro
Language=English
poisoning an existing macro
.

MessageId=1703
Severity=Warning
Facility=System
SymbolicName=null_format_string
Language=English
NULL format string
.

MessageId=1704
Severity=Warning
Facility=System
SymbolicName=zero_length_format_string
Language=English
zero-length format string
.

MessageId=1705
Severity=Warning
Facility=System
SymbolicName=embedded_null_in_format_string
Language=English
embedded null character in format string
.

MessageId=1706
Severity=Warning
Facility=System
SymbolicName=bad_attr_placement
Language=English
byte order attributes are not supported here
.

MessageId=1707
Severity=Warning
Facility=System
SymbolicName=invalid_regexp
Language=English
invalid regular expression: 
.

MessageId=1708
Severity=Warning
Facility=System
SymbolicName=bad_prolog_file
Language=English
cannot open prolog file %%sq
.

MessageId=1709
Severity=Warning
Facility=System
SymbolicName=bad_epilog_file
Language=English
cannot open epilog file %%sq
.

MessageId=1710
Severity=Warning
Facility=System
SymbolicName=reference_to_static
Language=English
reference to statically allocated variable %%no
.

MessageId=1711
Severity=Warning
Facility=System
SymbolicName=assignment_to_static
Language=English
assignment to statically allocated variable %%no
.

MessageId=1712
Severity=Warning
Facility=System
SymbolicName=address_of_static
Language=English
address taken of statically allocated variable %%no
.

MessageId=1713
Severity=Warning
Facility=System
SymbolicName=named_address_space_not_allowed
Language=English
a named address space qualifier is not allowed here
.

MessageId=1714
Severity=Warning
Facility=System
SymbolicName=bad_initializer_for_array_with_unspecified_bound
Language=English
an empty initializer is invalid for an array with unspecified bound
.

MessageId=1715
Severity=Warning
Facility=System
SymbolicName=out_of_class_initializer_ignored
Language=English
%%n has already been initialized; the out-of-class initializer will be ignored
.

MessageId=1716
Severity=Warning
Facility=System
SymbolicName=named_address_space_for_parameter
Language=English
a parameter cannot be allocated in a named address space
.

MessageId=1717
Severity=Warning
Facility=System
SymbolicName=bad_float_or_fixed_suffix
Language=English
invalid suffix on fixed-point or floating-point constant
.

MessageId=1718
Severity=Warning
Facility=System
SymbolicName=register_in_address_space
Language=English
a register variable cannot be allocated in a named address space
.

MessageId=1719
Severity=Warning
Facility=System
SymbolicName=bad_stdc_fx_overflow_pragma_arg
Language=English
expected "SAT" or "DEFAULT"
.

MessageId=1720
Severity=Warning
Facility=System
SymbolicName=no_corresponding_member_delete
Language=English
%%n has no corresponding member operator delete%%s (to be called if an exception is thrown during initialization of an allocated object)
.

MessageId=1721
Severity=Warning
Facility=System
SymbolicName=function_returning_named_address_space
Language=English
a function return type cannot be qualified with a named address space
.

MessageId=1722
Severity=Warning
Facility=System
SymbolicName=attribute_after_parenthesized_initializer
Language=English
variable attributes appearing after a parenthesized initializer are ignored
.

MessageId=1723
Severity=Warning
Facility=System
SymbolicName=gcc_use_of_cast_as_lvalue
Language=English
the result of this cast cannot be used as an lvalue
.

MessageId=1724
Severity=Warning
Facility=System
SymbolicName=unsigned_fixed_point_negation
Language=English
negation of an unsigned fixed-point value
.

MessageId=1725
Severity=Warning
Facility=System
SymbolicName=operator_not_allowed
Language=English
this operator is not allowed at this point; use parentheses
.

MessageId=1726
Severity=Warning
Facility=System
SymbolicName=nonconstant_flexible_array_member_init
Language=English
flexible array member initializer must be constant
.

MessageId=1727
Severity=Warning
Facility=System
SymbolicName=register_name_on_nonregister
Language=English
register names can only be used for register variables
.

MessageId=1728
Severity=Warning
Facility=System
SymbolicName=void_named_register
Language=English
named-register variables cannot have void type
.

MessageId=1729
Severity=Warning
Facility=System
SymbolicName=declspec_invalid
Language=English
__declspec modifiers not valid for this declaration
.

MessageId=1730
Severity=Warning
Facility=System
SymbolicName=parameter_with_link_scope_specifier
Language=English
parameters cannot have link scope specifiers
.

MessageId=1731
Severity=Warning
Facility=System
SymbolicName=multiple_link_scope_specifiers
Language=English
multiple link scope specifiers
.

MessageId=1732
Severity=Warning
Facility=System
SymbolicName=link_scope_requires_external_linkage
Language=English
link scope specifiers can only appear on functions and variables with external linkage
.

MessageId=1733
Severity=Warning
Facility=System
SymbolicName=link_scope_relaxation
Language=English
a redeclaration cannot weaken a link scope
.

MessageId=1734
Severity=Warning
Facility=System
SymbolicName=invalid_link_scope
Language=English
link scope specifier not allowed on this declaration
.

MessageId=1735
Severity=Warning
Facility=System
SymbolicName=nonstd_qualifier_in_global_scope_decl
Language=English
nonstandard qualified name in global scope declaration
.

MessageId=1736
Severity=Warning
Facility=System
SymbolicName=dll_interface_conflict_none_assumed
Language=English
dllexport/dllimport conflict with %%nod; dllimport/dllexport dropped
.

MessageId=1737
Severity=Warning
Facility=System
SymbolicName=dll_interface_ignored_on_class_template
Language=English
dllexport and dllimport are ignored on class templates
.

MessageId=1738
Severity=Warning
Facility=System
SymbolicName=base_class_has_different_dll_interface
Language=English
base class dllexport/dllimport specification differs from that of the derived class
.

MessageId=1739
Severity=Warning
Facility=System
SymbolicName=redeclaration_adds_dll_interface
Language=English
redeclaration cannot add dllexport/dllimport to %%nod
.

MessageId=1740
Severity=Warning
Facility=System
SymbolicName=dll_interface_conflict_dllexport_assumed
Language=English
dllexport/dllimport conflict with %%nod; dllexport assumed
.

MessageId=1741
Severity=Warning
Facility=System
SymbolicName=dllimport_defined
Language=English
cannot define dllimport entity
.

MessageId=1742
Severity=Warning
Facility=System
SymbolicName=dll_interface_requires_external_linkage
Language=English
dllexport/dllimport requires external linkage
.

MessageId=1743
Severity=Warning
Facility=System
SymbolicName=class_and_member_have_dll_interface
Language=English
a member of a class declared with dllexport/dllimport cannot itself be declared with such a specifier
.

MessageId=1744
Severity=Warning
Facility=System
SymbolicName=field_without_dll_interface
Language=English
field of class type without a DLL interface used in a class with a DLL interface
.

MessageId=1745
Severity=Warning
Facility=System
SymbolicName=class_and_inherited_member_instance_have_dll_interface
Language=English
member %%nd already has an explicit dllexport/dllimport specifier
.

MessageId=1746
Severity=Warning
Facility=System
SymbolicName=arm_packed_mismatch
Language=English
__packed specifier does not match type definition
.

MessageId=1747
Severity=Warning
Facility=System
SymbolicName=asm_bad_symbol
Language=English
illegal symbol for assembly operand
.
