 /* This file is generated by gen_types.py */
#include "gpuarray/types.h"
#include <stdlib.h> /* For NULL */


#ifdef _MSC_VER
typedef signed __int8 int8_t;
typedef unsigned __int8 uint8_t;
typedef signed __int16 int16_t;
typedef unsigned __int16 uint16_t;
typedef signed __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef signed __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
#include <stdint.h>
#endif

typedef struct _int128 {
    union int128_u {
        int8_t  as_int8[16];
        int16_t as_int16[8];
        int32_t as_int32[4];
        int64_t as_int64[2];
    } value;
} int128_t;

typedef struct _uint128 {
    union uint128_u {
        uint8_t  as_uint8[16];
        uint16_t as_uint16[8];
        uint32_t as_uint32[4];
        uint64_t as_uint64[2];
    } value;
} uint128_t;

typedef struct _quad {
  union {
    struct {
      int16_t exp;
      uint16_t hi;
      uint32_t lo;
    };
    uint128_t raw;
  } u;
} ga_quad;

typedef uint16_t half_t;

typedef struct _cfloat {
  float r;
  float i;
} ga_cfloat;

typedef struct _cdouble {
  double r;
  double i;
} ga_cdouble;

typedef struct _cquad {
  ga_quad r;
  ga_quad i;
} ga_cquad;


typedef struct {char c; uint8_t x; } st_bool;
#define BOOL_ALIGN (sizeof(st_bool) - sizeof(uint8_t))
typedef struct {char c; int8_t x; } st_byte;
#define BYTE_ALIGN (sizeof(st_byte) - sizeof(int8_t))
typedef struct {char c; uint8_t x; } st_ubyte;
#define UBYTE_ALIGN (sizeof(st_ubyte) - sizeof(uint8_t))
typedef struct {char c; int16_t x; } st_short;
#define SHORT_ALIGN (sizeof(st_short) - sizeof(int16_t))
typedef struct {char c; uint16_t x; } st_ushort;
#define USHORT_ALIGN (sizeof(st_ushort) - sizeof(uint16_t))
typedef struct {char c; int32_t x; } st_int;
#define INT_ALIGN (sizeof(st_int) - sizeof(int32_t))
typedef struct {char c; uint32_t x; } st_uint;
#define UINT_ALIGN (sizeof(st_uint) - sizeof(uint32_t))
typedef struct {char c; int64_t x; } st_long;
#define LONG_ALIGN (sizeof(st_long) - sizeof(int64_t))
typedef struct {char c; uint64_t x; } st_ulong;
#define ULONG_ALIGN (sizeof(st_ulong) - sizeof(uint64_t))
typedef struct {char c; int128_t x; } st_longlong;
#define LONGLONG_ALIGN (sizeof(st_longlong) - sizeof(int128_t))
typedef struct {char c; uint128_t x; } st_ulonglong;
#define ULONGLONG_ALIGN (sizeof(st_ulonglong) - sizeof(uint128_t))
typedef struct {char c; float x; } st_float;
#define FLOAT_ALIGN (sizeof(st_float) - sizeof(float))
typedef struct {char c; double x; } st_double;
#define DOUBLE_ALIGN (sizeof(st_double) - sizeof(double))
typedef struct {char c; ga_quad x; } st_quad;
#define QUAD_ALIGN (sizeof(st_quad) - sizeof(ga_quad))
typedef struct {char c; ga_cfloat x; } st_cfloat;
#define CFLOAT_ALIGN (sizeof(st_cfloat) - sizeof(ga_cfloat))
typedef struct {char c; ga_cdouble x; } st_cdouble;
#define CDOUBLE_ALIGN (sizeof(st_cdouble) - sizeof(ga_cdouble))
typedef struct {char c; ga_cquad x; } st_cquad;
#define CQUAD_ALIGN (sizeof(st_cquad) - sizeof(ga_cquad))
typedef struct {char c; half_t x; } st_half;
#define HALF_ALIGN (sizeof(st_half) - sizeof(half_t))
typedef struct {char c; size_t x; } st_size;
#define SIZE_ALIGN (sizeof(st_size) - sizeof(size_t))
typedef struct {char c; ssize_t x; } st_ssize;
#define SSIZE_ALIGN (sizeof(st_ssize) - sizeof(ssize_t))

const gpuarray_type scalar_types[] = {
  {"ga_bool", 1, BOOL_ALIGN, GA_BOOL},
  {"ga_byte", 1, BYTE_ALIGN, GA_BYTE},
  {"ga_ubyte", 1, UBYTE_ALIGN, GA_UBYTE},
  {"ga_short", 2, SHORT_ALIGN, GA_SHORT},
  {"ga_ushort", 2, USHORT_ALIGN, GA_USHORT},
  {"ga_int", 4, INT_ALIGN, GA_INT},
  {"ga_uint", 4, UINT_ALIGN, GA_UINT},
  {"ga_long", 8, LONG_ALIGN, GA_LONG},
  {"ga_ulong", 8, ULONG_ALIGN, GA_ULONG},
  {"ga_longlong", 16, LONGLONG_ALIGN, GA_LONGLONG},
  {"ga_ulonglong", 16, ULONGLONG_ALIGN, GA_ULONGLONG},
  {"ga_float", 4, FLOAT_ALIGN, GA_FLOAT},
  {"ga_double", 8, DOUBLE_ALIGN, GA_DOUBLE},
  {"ga_quad", 16, QUAD_ALIGN, GA_QUAD},
  {"ga_cfloat", 8, CFLOAT_ALIGN, GA_CFLOAT},
  {"ga_cdouble", 16, CDOUBLE_ALIGN, GA_CDOUBLE},
  {"ga_cquad", 32, CQUAD_ALIGN, GA_CQUAD},
  {NULL, 0, 0, -1},
  {NULL, 0, 0, -1},
  {NULL, 0, 0, -1},
  {NULL, 0, 0, -1},
  {NULL, 0, 0, -1},
  {NULL, 0, 0, -1},
  {"ga_half", 2, HALF_ALIGN, GA_HALF},
  {"ga_size", sizeof(size_t), SIZE_ALIGN, GA_SIZE},
  {"ga_ssize", sizeof(ssize_t), SSIZE_ALIGN, GA_SSIZE},
};

const gpuarray_type vector_types[] = {
  {"ga_byte2", 2, 0, GA_BYTE2},
  {"ga_ubyte2", 2, 0, GA_UBYTE2},
  {"ga_byte3", 3, 0, GA_BYTE3},
  {"ga_ubyte3", 3, 0, GA_UBYTE3},
  {"ga_byte4", 4, 0, GA_BYTE4},
  {"ga_ubyte4", 4, 0, GA_UBYTE4},
  {"ga_byte8", 8, 0, GA_BYTE8},
  {"ga_ubyte8", 8, 0, GA_UBYTE8},
  {"ga_byte16", 16, 0, GA_BYTE16},
  {"ga_ubyte16", 16, 0, GA_UBYTE16},
  {"ga_short2", 4, 0, GA_SHORT2},
  {"ga_ushort2", 4, 0, GA_USHORT2},
  {"ga_short3", 6, 0, GA_SHORT3},
  {"ga_ushort3", 6, 0, GA_USHORT3},
  {"ga_short4", 8, 0, GA_SHORT4},
  {"ga_ushort4", 8, 0, GA_USHORT4},
  {"ga_short8", 16, 0, GA_SHORT8},
  {"ga_ushort8", 16, 0, GA_USHORT8},
  {"ga_short16", 32, 0, GA_SHORT16},
  {"ga_ushort16", 32, 0, GA_USHORT16},
  {"ga_int2", 8, 0, GA_INT2},
  {"ga_uint2", 8, 0, GA_UINT2},
  {"ga_int3", 12, 0, GA_INT3},
  {"ga_uint3", 12, 0, GA_UINT3},
  {"ga_int4", 16, 0, GA_INT4},
  {"ga_uint4", 16, 0, GA_UINT4},
  {"ga_int8", 32, 0, GA_INT8},
  {"ga_uint8", 32, 0, GA_UINT8},
  {"ga_int16", 64, 0, GA_INT16},
  {"ga_uint16", 64, 0, GA_UINT16},
  {"ga_long2", 16, 0, GA_LONG2},
  {"ga_ulong2", 16, 0, GA_ULONG2},
  {"ga_long3", 24, 0, GA_LONG3},
  {"ga_ulong3", 24, 0, GA_ULONG3},
  {"ga_long4", 32, 0, GA_LONG4},
  {"ga_ulong4", 32, 0, GA_ULONG4},
  {"ga_long8", 64, 0, GA_LONG8},
  {"ga_ulong8", 64, 0, GA_ULONG8},
  {"ga_long16", 128, 0, GA_LONG16},
  {"ga_ulong16", 128, 0, GA_ULONG16},
  {"ga_float2", 8, 0, GA_FLOAT2},
  {"ga_float4", 16, 0, GA_FLOAT4},
  {"ga_float8", 32, 0, GA_FLOAT8},
  {"ga_float16", 64, 0, GA_FLOAT16},
  {"ga_double2", 16, 0, GA_DOUBLE2},
  {"ga_double4", 32, 0, GA_DOUBLE4},
  {"ga_double8", 64, 0, GA_DOUBLE8},
  {"ga_double16", 128, 0, GA_DOUBLE16},
  {"ga_half2", 4, 0, GA_HALF2},
  {"ga_half4", 8, 0, GA_HALF4},
  {"ga_half8", 16, 0, GA_HALF8},
  {"ga_half16", 32, 0, GA_HALF16},
};
