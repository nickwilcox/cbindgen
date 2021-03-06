#define NOINLINE __attribute__((noinline))
#define NODISCARD [[nodiscard]]


#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

enum FillRule
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  A,
  B,
};
#ifndef __cplusplus
typedef uint8_t FillRule;
#endif // __cplusplus

/**
 * This will have a destructor manually implemented via variant_body, and
 * similarly a Drop impl in Rust.
 */
typedef struct {
  uintptr_t len;
  uint32_t *ptr;
} OwnedSlice_u32;

typedef struct {
  FillRule fill;
  OwnedSlice_u32 coordinates;
} Polygon_u32;

/**
 * This will have a destructor manually implemented via variant_body, and
 * similarly a Drop impl in Rust.
 */
typedef struct {
  uintptr_t len;
  int32_t *ptr;
} OwnedSlice_i32;

enum Foo_u32_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Bar_u32,
  Polygon1_u32,
  Slice1_u32,
  Slice2_u32,
  Slice3_u32,
  Slice4_u32,
};
#ifndef __cplusplus
typedef uint8_t Foo_u32_Tag;
#endif // __cplusplus

typedef struct {
  Polygon_u32 _0;
} Polygon1_Body_u32;

typedef struct {
  OwnedSlice_u32 _0;
} Slice1_Body_u32;

typedef struct {
  OwnedSlice_i32 _0;
} Slice2_Body_u32;

typedef struct {
  FillRule fill;
  OwnedSlice_u32 coords;
} Slice3_Body_u32;

typedef struct {
  FillRule fill;
  OwnedSlice_i32 coords;
} Slice4_Body_u32;

typedef struct {
  Foo_u32_Tag tag;
  union {
    Polygon1_Body_u32 polygon1;
    Slice1_Body_u32 slice1;
    Slice2_Body_u32 slice2;
    Slice3_Body_u32 slice3;
    Slice4_Body_u32 slice4;
  };
} Foo_u32;

typedef struct {
  FillRule fill;
  OwnedSlice_i32 coordinates;
} Polygon_i32;

enum Baz_i32_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Bar2_i32,
  Polygon21_i32,
  Slice21_i32,
  Slice22_i32,
  Slice23_i32,
  Slice24_i32,
};
#ifndef __cplusplus
typedef uint8_t Baz_i32_Tag;
#endif // __cplusplus

typedef struct {
  Baz_i32_Tag tag;
  Polygon_i32 _0;
} Polygon21_Body_i32;

typedef struct {
  Baz_i32_Tag tag;
  OwnedSlice_i32 _0;
} Slice21_Body_i32;

typedef struct {
  Baz_i32_Tag tag;
  OwnedSlice_i32 _0;
} Slice22_Body_i32;

typedef struct {
  Baz_i32_Tag tag;
  FillRule fill;
  OwnedSlice_i32 coords;
} Slice23_Body_i32;

typedef struct {
  Baz_i32_Tag tag;
  FillRule fill;
  OwnedSlice_i32 coords;
} Slice24_Body_i32;

typedef union {
  Baz_i32_Tag tag;
  Polygon21_Body_i32 polygon21;
  Slice21_Body_i32 slice21;
  Slice22_Body_i32 slice22;
  Slice23_Body_i32 slice23;
  Slice24_Body_i32 slice24;
} Baz_i32;

enum Taz_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Bar3,
  Taz1,
  Taz3,
};
#ifndef __cplusplus
typedef uint8_t Taz_Tag;
#endif // __cplusplus

typedef struct {
  Taz_Tag tag;
  int32_t _0;
} Taz1_Body;

typedef struct {
  Taz_Tag tag;
  OwnedSlice_i32 _0;
} Taz3_Body;

typedef union {
  Taz_Tag tag;
  Taz1_Body taz1;
  Taz3_Body taz3;
} Taz;

enum Tazz_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Bar4,
  Taz2,
};
#ifndef __cplusplus
typedef uint8_t Tazz_Tag;
#endif // __cplusplus

typedef struct {
  Tazz_Tag tag;
  int32_t _0;
} Taz2_Body;

typedef union {
  Tazz_Tag tag;
  Taz2_Body taz2;
} Tazz;

enum Tazzz_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Bar5,
  Taz5,
};
#ifndef __cplusplus
typedef uint8_t Tazzz_Tag;
#endif // __cplusplus

typedef struct {
  Tazzz_Tag tag;
  int32_t _0;
} Taz5_Body;

typedef union {
  Tazzz_Tag tag;
  Taz5_Body taz5;
} Tazzz;

enum Tazzzz_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Taz6,
  Taz7,
};
#ifndef __cplusplus
typedef uint8_t Tazzzz_Tag;
#endif // __cplusplus

typedef struct {
  Tazzzz_Tag tag;
  int32_t _0;
} Taz6_Body;

typedef struct {
  Tazzzz_Tag tag;
  uint32_t _0;
} Taz7_Body;

typedef union {
  Tazzzz_Tag tag;
  Taz6_Body taz6;
  Taz7_Body taz7;
} Tazzzz;

enum Qux_Tag
#ifdef __cplusplus
  : uint8_t
#endif // __cplusplus
 {
  Qux1,
  Qux2,
};
#ifndef __cplusplus
typedef uint8_t Qux_Tag;
#endif // __cplusplus

typedef struct {
  Qux_Tag tag;
  int32_t _0;
} Qux1_Body;

typedef struct {
  Qux_Tag tag;
  uint32_t _0;
} Qux2_Body;

typedef union {
  Qux_Tag tag;
  Qux1_Body qux1;
  Qux2_Body qux2;
} Qux;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void root(const Foo_u32 *a,
          const Baz_i32 *b,
          const Taz *c,
          Tazz d,
          const Tazzz *e,
          const Tazzzz *f,
          const Qux *g);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
