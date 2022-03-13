#ifndef _CONSTANT_POOL_INFO_HPP
#define _CONSTANT_POOL_INFO_HPP

#include "types_definition.hpp"

// CONSTANT POOL TAGS
#define CONSTANT_Utf8                1
#define CONSTANT_Integer             3
#define CONSTANT_Float               4
#define CONSTANT_Long                5
#define CONSTANT_Double              6
#define CONSTANT_Class               7
#define CONSTANT_String              8
#define CONSTANT_Fieldref            9
#define CONSTANT_Methodref          10
#define CONSTANT_InterfaceMethodref 11
#define CONSTANT_NameAndType        12
#define CONSTANT_MethodHandle       15
#define CONSTANT_MethodType         16
#define CONSTANT_InvokeDynamic      18

using namespace std;

typedef struct CONSTANT_utf8_info {
    CONSTANT_utf8_info(ifstream &file);
    u1 tag; // 1
    u2 length;
    vector<u1> bytes;
} CONSTANT_utf8_info;

typedef struct CONSTANT_integer_info {
    CONSTANT_integer_info(ifstream &file);
    u1 tag; // 3
    u4 bytes;
} CONSTANT_integer_info;

typedef struct CONSTANT_float_info {
    CONSTANT_float_info(ifstream &file);
    u1 tag; // 4
    u4 bytes;
} CONSTANT_float_info;

typedef struct CONSTANT_long_info {
    CONSTANT_long_info(ifstream &file);
    u1 tag; // 5
    u4 high_bytes;
    u4 low_bytes;
} CONSTANT_long_info;

typedef struct CONSTANT_double_info {
    CONSTANT_double_info(ifstream &file);
    u1 tag; // 6
    u4 high_bytes;
    u4 low_bytes;
} CONSTANT_double_info;

// Class_file types definition
typedef struct CONSTANT_class_info {
    CONSTANT_class_info(ifstream &file);
    u1 tag; // 7
    u2 name_idx;
} CONSTANT_class_info;

typedef struct CONSTANT_string_info {
    CONSTANT_string_info(ifstream &file);
    u1 tag; // 8
    u2 str_idx;
} CONSTANT_string_info;

typedef struct CONSTANT_fieldref_info {
    CONSTANT_fieldref_info(ifstream &file);
    u1 tag; // 9
    u2 class_idx;
    u2 name_and_type_idx;
} CONSTANT_fieldref_info;

typedef struct CONSTANT_methodref_info {
    CONSTANT_methodref_info(ifstream &file);
    u1 tag; // 10
    u2 class_idx;
    u2 name_and_type_idx;
} CONSTANT_methodref_info;

typedef struct CONSTANT_interface_methodref_info {
    CONSTANT_interface_methodref_info(ifstream &file);
    u1 tag; // 11
    u2 class_idx;
    u2 name_and_type_idx;
} CONSTANT_interface_methodref_info;

typedef struct CONSTANT_name_and_type_info {
    CONSTANT_name_and_type_info(ifstream &file);
    u1 tag; // 12
    u2 name_idx;
    u2 descriptor_idx;
} CONSTANT_name_and_type_info;

typedef struct CONSTANT_method_handle_info {
    CONSTANT_method_handle_info(ifstream &file);
    u1 tag; // 15 
    u1 reference_kind;
    u2 reference_index;
} CONSTANT_method_handle_info;

typedef struct CONSTANT_method_type_info {
    CONSTANT_method_type_info(ifstream &file);
    u1 tag; // 16
    u2 descriptor_index;
} CONSTANT_method_type_info;

typedef struct CONSTANT_invoke_dynamic_info {
    CONSTANT_invoke_dynamic_info(ifstream &file);
    u1 tag; // 18
    u2 bootstrap_method_attr_index;
    u2 name_and_type_index;
} CONSTANT_invoke_dynamic_info;

#endif // _CONSTANT_POOL_INFO_HPP