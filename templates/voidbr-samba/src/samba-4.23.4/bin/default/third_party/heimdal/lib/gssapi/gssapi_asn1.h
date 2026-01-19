/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/gssapi/mech/gssapi.asn1 */
/* Do not edit */

#ifndef __gssapi_asn1_h__
#define __gssapi_asn1_h__

#include <stddef.h>
#include <stdint.h>
#include <time.h>

#ifndef __asn1_common_definitions__
#define __asn1_common_definitions__

#ifndef __HEIM_BASE_DATA__
#define __HEIM_BASE_DATA__ 1
struct heim_base_data {
    size_t length;
    void *data;
};
typedef struct heim_base_data heim_octet_string;
#endif

typedef struct heim_integer {
  size_t length;
  void *data;
  int negative;
} heim_integer;

typedef char *heim_general_string;

typedef char *heim_utf8_string;

typedef struct heim_base_data heim_printable_string;

typedef struct heim_base_data heim_ia5_string;

typedef struct heim_bmp_string {
  size_t length;
  uint16_t *data;
} heim_bmp_string;

typedef struct heim_universal_string {
  size_t length;
  uint32_t *data;
} heim_universal_string;

typedef char *heim_visible_string;

typedef struct heim_oid {
  size_t length;
  unsigned *components;
} heim_oid;

typedef struct heim_bit_string {
  size_t length;
  void *data;
} heim_bit_string;

typedef struct heim_base_data heim_any;
typedef struct heim_base_data heim_any_set;
typedef struct heim_base_data HEIM_ANY;
typedef struct heim_base_data HEIM_ANY_SET;

enum asn1_print_flags {
   ASN1_PRINT_INDENT = 1,
};

#define ASN1_MALLOC_ENCODE(T, B, BL, S, L, R)                  \
  do {                                                         \
    (BL) = length_##T((S));                                    \
    (B) = calloc(1, (BL));                                     \
    if((B) == NULL) {                                          \
      *(L) = 0;                                                \
      (R) = ENOMEM;                                            \
    } else {                                                   \
      (R) = encode_##T(((unsigned char*)(B)) + (BL) - 1, (BL), \
                       (S), (L));                              \
      if((R) != 0) {                                           \
        free((B));                                             \
        (B) = NULL;                                            \
        *(L) = 0;                                              \
      }                                                        \
    }                                                          \
  } while (0)

#ifdef _WIN32
#ifndef ASN1_LIB
#define ASN1EXP  __declspec(dllimport)
#else
#define ASN1EXP
#endif
#define ASN1CALL __stdcall
#else
#define ASN1EXP
#define ASN1CALL
#endif
#ifndef ENOTSUP
/* Very old MSVC CRTs lack ENOTSUP */
#define ENOTSUP EINVAL
#endif
struct units;

#endif

#include <heim_asn1.h>
typedef struct GSSAPIContextToken GSSAPIContextToken;

/*
GSSAPIContextToken ::= [APPLICATION 0] IMPLICIT SEQUENCE {
  thisMech              OBJECT IDENTIFIER,
  innerContextToken   HEIM_ANY_SET,
}
*/

enum { asn1_tag_length_GSSAPIContextToken = 1,
       asn1_tag_class_GSSAPIContextToken = 1,
       asn1_tag_tag_GSSAPIContextToken = 0 };
struct GSSAPIContextToken {
  heim_oid thisMech;
  HEIM_ANY_SET innerContextToken;
};

ASN1EXP int    ASN1CALL decode_GSSAPIContextToken(const unsigned char *, size_t, GSSAPIContextToken *, size_t *);
ASN1EXP int    ASN1CALL encode_GSSAPIContextToken(unsigned char *, size_t, const GSSAPIContextToken *, size_t *);
ASN1EXP size_t ASN1CALL length_GSSAPIContextToken(const GSSAPIContextToken *);
ASN1EXP int    ASN1CALL copy_GSSAPIContextToken  (const GSSAPIContextToken *, GSSAPIContextToken *);
ASN1EXP void   ASN1CALL free_GSSAPIContextToken  (GSSAPIContextToken *);
ASN1EXP char * ASN1CALL print_GSSAPIContextToken (const GSSAPIContextToken *, int);


#endif /* __gssapi_asn1_h__ */
