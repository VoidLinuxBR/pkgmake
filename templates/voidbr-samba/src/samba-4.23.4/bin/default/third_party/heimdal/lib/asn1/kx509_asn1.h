/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/kx509.asn1 */
/* Do not edit */

#ifndef __kx509_asn1_h__
#define __kx509_asn1_h__

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

#include <rfc2459_asn1.h>
#include <krb5_asn1.h>
typedef enum KX509_ERROR_CODE {
  KX509_STATUS_GOOD = 0,
  KX509_STATUS_CLIENT_BAD = 1,
  KX509_STATUS_CLIENT_FIX = 2,
  KX509_STATUS_CLIENT_TEMP = 3,
  KX509_STATUS_SERVER_BAD = 4,
  KX509_STATUS_SERVER_TEMP = 5,
  KX509_STATUS_SERVER_KEY = 7,
  KX509_STATUS_CLIENT_USE_CSR = 8
} KX509_ERROR_CODE;

typedef struct Kx509CSRPlus Kx509CSRPlus;

typedef struct Kx509Request Kx509Request;

typedef int Kx509ErrorCode;

typedef struct Kx509Response Kx509Response;

#ifdef kx509_krb5_error_base
#undef kx509_krb5_error_base
#endif
enum { kx509_krb5_error_base = 1000 };

/*
KX509-ERROR-CODE ::= INTEGER {
  KX509_STATUS_GOOD(0),
  KX509_STATUS_CLIENT_BAD(1),
  KX509_STATUS_CLIENT_FIX(2),
  KX509_STATUS_CLIENT_TEMP(3),
  KX509_STATUS_SERVER_BAD(4),
  KX509_STATUS_SERVER_TEMP(5),
  KX509_STATUS_SERVER_KEY(7),
  KX509_STATUS_CLIENT_USE_CSR(8)
}
*/

enum { asn1_tag_length_KX509_ERROR_CODE = 1,
       asn1_tag_class_KX509_ERROR_CODE = 0,
       asn1_tag_tag_KX509_ERROR_CODE = 2 };
ASN1EXP int    ASN1CALL decode_KX509_ERROR_CODE(const unsigned char *, size_t, KX509_ERROR_CODE *, size_t *);
ASN1EXP int    ASN1CALL encode_KX509_ERROR_CODE(unsigned char *, size_t, const KX509_ERROR_CODE *, size_t *);
ASN1EXP size_t ASN1CALL length_KX509_ERROR_CODE(const KX509_ERROR_CODE *);
ASN1EXP int    ASN1CALL copy_KX509_ERROR_CODE  (const KX509_ERROR_CODE *, KX509_ERROR_CODE *);
ASN1EXP void   ASN1CALL free_KX509_ERROR_CODE  (KX509_ERROR_CODE *);
ASN1EXP char * ASN1CALL print_KX509_ERROR_CODE (const KX509_ERROR_CODE *, int);


/*
Kx509CSRPlus ::= [APPLICATION 35] SEQUENCE {
  csr             OCTET STRING,
  exts            Extensions OPTIONAL,
  req-life        KerberosTime OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_Kx509CSRPlus = 2,
       asn1_tag_class_Kx509CSRPlus = 1,
       asn1_tag_tag_Kx509CSRPlus = 35 };
struct Kx509CSRPlus {
  heim_octet_string csr;
  Extensions *exts;
  KerberosTime *req_life;
};

ASN1EXP int    ASN1CALL decode_Kx509CSRPlus(const unsigned char *, size_t, Kx509CSRPlus *, size_t *);
ASN1EXP int    ASN1CALL encode_Kx509CSRPlus(unsigned char *, size_t, const Kx509CSRPlus *, size_t *);
ASN1EXP size_t ASN1CALL length_Kx509CSRPlus(const Kx509CSRPlus *);
ASN1EXP int    ASN1CALL copy_Kx509CSRPlus  (const Kx509CSRPlus *, Kx509CSRPlus *);
ASN1EXP void   ASN1CALL free_Kx509CSRPlus  (Kx509CSRPlus *);
ASN1EXP char * ASN1CALL print_Kx509CSRPlus (const Kx509CSRPlus *, int);


/*
Kx509Request ::= SEQUENCE {
  authenticator   OCTET STRING,
  pk-hash         OCTET STRING,
  pk-key          OCTET STRING,
}
*/

enum { asn1_tag_length_Kx509Request = 1,
       asn1_tag_class_Kx509Request = 0,
       asn1_tag_tag_Kx509Request = 16 };
struct Kx509Request {
  heim_octet_string authenticator;
  heim_octet_string pk_hash;
  heim_octet_string pk_key;
};

ASN1EXP int    ASN1CALL decode_Kx509Request(const unsigned char *, size_t, Kx509Request *, size_t *);
ASN1EXP int    ASN1CALL encode_Kx509Request(unsigned char *, size_t, const Kx509Request *, size_t *);
ASN1EXP size_t ASN1CALL length_Kx509Request(const Kx509Request *);
ASN1EXP int    ASN1CALL copy_Kx509Request  (const Kx509Request *, Kx509Request *);
ASN1EXP void   ASN1CALL free_Kx509Request  (Kx509Request *);
ASN1EXP char * ASN1CALL print_Kx509Request (const Kx509Request *, int);


/*
Kx509ErrorCode ::= INTEGER (-2147483648..2147483647)
*/

enum { asn1_tag_length_Kx509ErrorCode = 1,
       asn1_tag_class_Kx509ErrorCode = 0,
       asn1_tag_tag_Kx509ErrorCode = 2 };
ASN1EXP int    ASN1CALL decode_Kx509ErrorCode(const unsigned char *, size_t, Kx509ErrorCode *, size_t *);
ASN1EXP int    ASN1CALL encode_Kx509ErrorCode(unsigned char *, size_t, const Kx509ErrorCode *, size_t *);
ASN1EXP size_t ASN1CALL length_Kx509ErrorCode(const Kx509ErrorCode *);
ASN1EXP int    ASN1CALL copy_Kx509ErrorCode  (const Kx509ErrorCode *, Kx509ErrorCode *);
ASN1EXP void   ASN1CALL free_Kx509ErrorCode  (Kx509ErrorCode *);
ASN1EXP char * ASN1CALL print_Kx509ErrorCode (const Kx509ErrorCode *, int);


/*
Kx509Response ::= SEQUENCE {
  error-code      [0] Kx509ErrorCode,
  hash            [1] OCTET STRING OPTIONAL,
  certificate     [2] OCTET STRING OPTIONAL,
  e-text          [3]   VisibleString OPTIONAL,
}
*/

enum { asn1_tag_length_Kx509Response = 1,
       asn1_tag_class_Kx509Response = 0,
       asn1_tag_tag_Kx509Response = 16 };
struct Kx509Response {
  Kx509ErrorCode error_code;
  heim_octet_string *hash;
  heim_octet_string *certificate;
  heim_visible_string *e_text;
};

ASN1EXP int    ASN1CALL decode_Kx509Response(const unsigned char *, size_t, Kx509Response *, size_t *);
ASN1EXP int    ASN1CALL encode_Kx509Response(unsigned char *, size_t, const Kx509Response *, size_t *);
ASN1EXP size_t ASN1CALL length_Kx509Response(const Kx509Response *);
ASN1EXP int    ASN1CALL copy_Kx509Response  (const Kx509Response *, Kx509Response *);
ASN1EXP void   ASN1CALL free_Kx509Response  (Kx509Response *);
ASN1EXP char * ASN1CALL print_Kx509Response (const Kx509Response *, int);


#endif /* __kx509_asn1_h__ */
