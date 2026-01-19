/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/pkcs8.asn1 */
/* Do not edit */

#ifndef __pkcs8_asn1_h__
#define __pkcs8_asn1_h__

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
typedef AlgorithmIdentifier PKCS8PrivateKeyAlgorithmIdentifier;

typedef heim_octet_string PKCS8PrivateKey;

typedef struct PKCS8Attributes PKCS8Attributes;

typedef struct PKCS8PrivateKeyInfo PKCS8PrivateKeyInfo;

typedef heim_octet_string PKCS8EncryptedData;

typedef struct PKCS8EncryptedPrivateKeyInfo PKCS8EncryptedPrivateKeyInfo;

/*
PKCS8PrivateKeyAlgorithmIdentifier ::= AlgorithmIdentifier
*/

enum { asn1_tag_length_PKCS8PrivateKeyAlgorithmIdentifier = asn1_tag_length_AlgorithmIdentifier,
       asn1_tag_class_PKCS8PrivateKeyAlgorithmIdentifier = asn1_tag_class_AlgorithmIdentifier,
       asn1_tag_tag_PKCS8PrivateKeyAlgorithmIdentifier = asn1_tag_tag_AlgorithmIdentifier };

ASN1EXP int    ASN1CALL decode_PKCS8PrivateKeyAlgorithmIdentifier(const unsigned char *, size_t, PKCS8PrivateKeyAlgorithmIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_PKCS8PrivateKeyAlgorithmIdentifier(unsigned char *, size_t, const PKCS8PrivateKeyAlgorithmIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_PKCS8PrivateKeyAlgorithmIdentifier(const PKCS8PrivateKeyAlgorithmIdentifier *);
ASN1EXP int    ASN1CALL copy_PKCS8PrivateKeyAlgorithmIdentifier  (const PKCS8PrivateKeyAlgorithmIdentifier *, PKCS8PrivateKeyAlgorithmIdentifier *);
ASN1EXP void   ASN1CALL free_PKCS8PrivateKeyAlgorithmIdentifier  (PKCS8PrivateKeyAlgorithmIdentifier *);
ASN1EXP char * ASN1CALL print_PKCS8PrivateKeyAlgorithmIdentifier (const PKCS8PrivateKeyAlgorithmIdentifier *, int);


/*
PKCS8PrivateKey ::= OCTET STRING
*/

enum { asn1_tag_length_PKCS8PrivateKey = 1,
       asn1_tag_class_PKCS8PrivateKey = 0,
       asn1_tag_tag_PKCS8PrivateKey = 4 };
ASN1EXP int    ASN1CALL decode_PKCS8PrivateKey(const unsigned char *, size_t, PKCS8PrivateKey *, size_t *);
ASN1EXP int    ASN1CALL encode_PKCS8PrivateKey(unsigned char *, size_t, const PKCS8PrivateKey *, size_t *);
ASN1EXP size_t ASN1CALL length_PKCS8PrivateKey(const PKCS8PrivateKey *);
ASN1EXP int    ASN1CALL copy_PKCS8PrivateKey  (const PKCS8PrivateKey *, PKCS8PrivateKey *);
ASN1EXP void   ASN1CALL free_PKCS8PrivateKey  (PKCS8PrivateKey *);
ASN1EXP char * ASN1CALL print_PKCS8PrivateKey (const PKCS8PrivateKey *, int);


/*
PKCS8Attributes ::= SET OF Attribute
*/

enum { asn1_tag_length_PKCS8Attributes = 1,
       asn1_tag_class_PKCS8Attributes = 0,
       asn1_tag_tag_PKCS8Attributes = 17 };
struct PKCS8Attributes {
  unsigned int len;
  Attribute *val;
};

ASN1EXP int    ASN1CALL decode_PKCS8Attributes(const unsigned char *, size_t, PKCS8Attributes *, size_t *);
ASN1EXP int    ASN1CALL encode_PKCS8Attributes(unsigned char *, size_t, const PKCS8Attributes *, size_t *);
ASN1EXP size_t ASN1CALL length_PKCS8Attributes(const PKCS8Attributes *);
ASN1EXP int    ASN1CALL copy_PKCS8Attributes  (const PKCS8Attributes *, PKCS8Attributes *);
ASN1EXP void   ASN1CALL free_PKCS8Attributes  (PKCS8Attributes *);
ASN1EXP char * ASN1CALL print_PKCS8Attributes (const PKCS8Attributes *, int);


/*
PKCS8PrivateKeyInfo ::= SEQUENCE {
  version               INTEGER,
  privateKeyAlgorithm   PKCS8PrivateKeyAlgorithmIdentifier,
  privateKey            PKCS8PrivateKey,
  attributes            [0] IMPLICIT SET OF Attribute OPTIONAL,
}
*/

enum { asn1_tag_length_PKCS8PrivateKeyInfo = 1,
       asn1_tag_class_PKCS8PrivateKeyInfo = 0,
       asn1_tag_tag_PKCS8PrivateKeyInfo = 16 };
struct PKCS8PrivateKeyInfo {
  heim_integer version;
  PKCS8PrivateKeyAlgorithmIdentifier privateKeyAlgorithm;
  PKCS8PrivateKey privateKey;
  struct PKCS8PrivateKeyInfo_attributes {
    unsigned int len;
    Attribute *val;
  } *attributes;
};

ASN1EXP int    ASN1CALL decode_PKCS8PrivateKeyInfo(const unsigned char *, size_t, PKCS8PrivateKeyInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_PKCS8PrivateKeyInfo(unsigned char *, size_t, const PKCS8PrivateKeyInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_PKCS8PrivateKeyInfo(const PKCS8PrivateKeyInfo *);
ASN1EXP int    ASN1CALL copy_PKCS8PrivateKeyInfo  (const PKCS8PrivateKeyInfo *, PKCS8PrivateKeyInfo *);
ASN1EXP void   ASN1CALL free_PKCS8PrivateKeyInfo  (PKCS8PrivateKeyInfo *);
ASN1EXP char * ASN1CALL print_PKCS8PrivateKeyInfo (const PKCS8PrivateKeyInfo *, int);


/*
PKCS8EncryptedData ::= OCTET STRING
*/

enum { asn1_tag_length_PKCS8EncryptedData = 1,
       asn1_tag_class_PKCS8EncryptedData = 0,
       asn1_tag_tag_PKCS8EncryptedData = 4 };
ASN1EXP int    ASN1CALL decode_PKCS8EncryptedData(const unsigned char *, size_t, PKCS8EncryptedData *, size_t *);
ASN1EXP int    ASN1CALL encode_PKCS8EncryptedData(unsigned char *, size_t, const PKCS8EncryptedData *, size_t *);
ASN1EXP size_t ASN1CALL length_PKCS8EncryptedData(const PKCS8EncryptedData *);
ASN1EXP int    ASN1CALL copy_PKCS8EncryptedData  (const PKCS8EncryptedData *, PKCS8EncryptedData *);
ASN1EXP void   ASN1CALL free_PKCS8EncryptedData  (PKCS8EncryptedData *);
ASN1EXP char * ASN1CALL print_PKCS8EncryptedData (const PKCS8EncryptedData *, int);


/*
PKCS8EncryptedPrivateKeyInfo ::= SEQUENCE {
  encryptionAlgorithm   AlgorithmIdentifier,
  encryptedData         PKCS8EncryptedData,
}
*/

enum { asn1_tag_length_PKCS8EncryptedPrivateKeyInfo = 1,
       asn1_tag_class_PKCS8EncryptedPrivateKeyInfo = 0,
       asn1_tag_tag_PKCS8EncryptedPrivateKeyInfo = 16 };
struct PKCS8EncryptedPrivateKeyInfo {
  AlgorithmIdentifier encryptionAlgorithm;
  PKCS8EncryptedData encryptedData;
};

ASN1EXP int    ASN1CALL decode_PKCS8EncryptedPrivateKeyInfo(const unsigned char *, size_t, PKCS8EncryptedPrivateKeyInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_PKCS8EncryptedPrivateKeyInfo(unsigned char *, size_t, const PKCS8EncryptedPrivateKeyInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_PKCS8EncryptedPrivateKeyInfo(const PKCS8EncryptedPrivateKeyInfo *);
ASN1EXP int    ASN1CALL copy_PKCS8EncryptedPrivateKeyInfo  (const PKCS8EncryptedPrivateKeyInfo *, PKCS8EncryptedPrivateKeyInfo *);
ASN1EXP void   ASN1CALL free_PKCS8EncryptedPrivateKeyInfo  (PKCS8EncryptedPrivateKeyInfo *);
ASN1EXP char * ASN1CALL print_PKCS8EncryptedPrivateKeyInfo (const PKCS8EncryptedPrivateKeyInfo *, int);


#endif /* __pkcs8_asn1_h__ */
