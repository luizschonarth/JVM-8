#ifndef _TYPES_HPP
#define _TYPES_HPP

#include <fstream>
#include <vector>

#define to_cp_info dynamic_pointer_cast<CP_Info>
#define to_attr_info dynamic_pointer_cast<Attribute_Info>

using namespace std;

// Common types definitions

typedef uint8_t  u1;
typedef uint16_t u2;
typedef uint32_t u4;
typedef uint64_t u8;
typedef vector<u1> bytestream;
typedef vector<u1>::iterator bytestream_it;

#endif // _TYPES_HPP