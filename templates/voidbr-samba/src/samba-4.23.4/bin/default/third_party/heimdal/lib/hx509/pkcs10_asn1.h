/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/pkcs10.asn1 */
/* Do not edit */

#ifndef __pkcs10_asn1_h__
#define __pkcs10_asn1_h__

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
#include <heim_asn1.h>
typedef enum PKCS10_Version {
  pkcs10_v1 = 0
} PKCS10_Version;

typedef struct CertificationRequestInfo CertificationRequestInfo;

typedef struct CertificationRequest CertificationRequest;

typedef struct IOSCertificationRequestInfo IOSCertificationRequestInfo;

typedef struct IOSCertificationRequest IOSCertificationRequest;

/* OBJECT IDENTIFIER id-pkcs9-extReq-copy ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs-9(9) label-less(14) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs9_extReq_copy;
#define ASN1_OID_ID_PKCS9_EXTREQ_COPY (&asn1_oid_id_pkcs9_extReq_copy)

typedef Extensions CRIExtensions;

typedef struct CRIAttributeSet CRIAttributeSet;

/*
PKCS10-Version ::= INTEGER {
  pkcs10_v1(0)
}
*/

enum { asn1_tag_length_PKCS10_Version = 1,
       asn1_tag_class_PKCS10_Version = 0,
       asn1_tag_tag_PKCS10_Version = 2 };
ASN1EXP int    ASN1CALL decode_PKCS10_Version(const unsigned char *, size_t, PKCS10_Version *, size_t *);
ASN1EXP int    ASN1CALL encode_PKCS10_Version(unsigned char *, size_t, const PKCS10_Version *, size_t *);
ASN1EXP size_t ASN1CALL length_PKCS10_Version(const PKCS10_Version *);
ASN1EXP int    ASN1CALL copy_PKCS10_Version  (const PKCS10_Version *, PKCS10_Version *);
ASN1EXP void   ASN1CALL free_PKCS10_Version  (PKCS10_Version *);
ASN1EXP char * ASN1CALL print_PKCS10_Version (const PKCS10_Version *, int);


/*
CertificationRequestInfo ::= SEQUENCE {
  version         PKCS10-Version,
  subject         Name,
  subjectPKInfo   SubjectPublicKeyInfo,
  attributes      [0] IMPLICIT SET OF Attribute OPTIONAL,
}
*/

enum { asn1_tag_length_CertificationRequestInfo = 1,
       asn1_tag_class_CertificationRequestInfo = 0,
       asn1_tag_tag_CertificationRequestInfo = 16 };
struct CertificationRequestInfo {
  heim_octet_string _save;
  PKCS10_Version version;
  Name subject;
  SubjectPublicKeyInfo subjectPKInfo;
  struct CertificationRequestInfo_attributes {
    unsigned int len;
    Attribute *val;
  } *attributes;
};

ASN1EXP int    ASN1CALL decode_CertificationRequestInfo(const unsigned char *, size_t, CertificationRequestInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_CertificationRequestInfo(unsigned char *, size_t, const CertificationRequestInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_CertificationRequestInfo(const CertificationRequestInfo *);
ASN1EXP int    ASN1CALL copy_CertificationRequestInfo  (const CertificationRequestInfo *, CertificationRequestInfo *);
ASN1EXP void   ASN1CALL free_CertificationRequestInfo  (CertificationRequestInfo *);
ASN1EXP char * ASN1CALL print_CertificationRequestInfo (const CertificationRequestInfo *, int);


/*
CertificationRequest ::= SEQUENCE {
  certificationRequestInfo   CertificationRequestInfo,
  signatureAlgorithm         AlgorithmIdentifier,
  signature                    BIT STRING {
  },
}
*/

enum { asn1_tag_length_CertificationRequest = 1,
       asn1_tag_class_CertificationRequest = 0,
       asn1_tag_tag_CertificationRequest = 16 };
struct CertificationRequest {
  CertificationRequestInfo certificationRequestInfo;
  AlgorithmIdentifier signatureAlgorithm;
  heim_bit_string signature;
};

ASN1EXP int    ASN1CALL decode_CertificationRequest(const unsigned char *, size_t, CertificationRequest *, size_t *);
ASN1EXP int    ASN1CALL encode_CertificationRequest(unsigned char *, size_t, const CertificationRequest *, size_t *);
ASN1EXP size_t ASN1CALL length_CertificationRequest(const CertificationRequest *);
ASN1EXP int    ASN1CALL copy_CertificationRequest  (const CertificationRequest *, CertificationRequest *);
ASN1EXP void   ASN1CALL free_CertificationRequest  (CertificationRequest *);
ASN1EXP char * ASN1CALL print_CertificationRequest (const CertificationRequest *, int);


/*
CRIAttributeSet ::= SEQUENCE {
  type              OBJECT IDENTIFIER,
  values          SET OF HEIM_ANY,
}
*/

enum { asn1_tag_length_CRIAttributeSet = 1,
       asn1_tag_class_CRIAttributeSet = 0,
       asn1_tag_tag_CRIAttributeSet = 16 };
struct CRIAttributeSet {
  heim_oid type;
  struct CRIAttributeSet_values {
    unsigned int len;
    HEIM_ANY *val;
  } values;
struct {
enum { choice_CRIAttributeSet_iosnumunknown = 0,
choice_CRIAttributeSet_iosnum_id_pkcs9_extReq_copy,
} element;
unsigned int len;
union {
void *_any;
    CRIExtensions *at_extReq;
} *val;
} _ioschoice_values;
};

ASN1EXP int    ASN1CALL decode_CRIAttributeSet(const unsigned char *, size_t, CRIAttributeSet *, size_t *);
ASN1EXP int    ASN1CALL encode_CRIAttributeSet(unsigned char *, size_t, const CRIAttributeSet *, size_t *);
ASN1EXP size_t ASN1CALL length_CRIAttributeSet(const CRIAttributeSet *);
ASN1EXP int    ASN1CALL copy_CRIAttributeSet  (const CRIAttributeSet *, CRIAttributeSet *);
ASN1EXP void   ASN1CALL free_CRIAttributeSet  (CRIAttributeSet *);
ASN1EXP char * ASN1CALL print_CRIAttributeSet (const CRIAttributeSet *, int);


/*
IOSCertificationRequestInfo ::= SEQUENCE {
  version         PKCS10-Version,
  subject         Name,
  subjectPKInfo   SubjectPublicKeyInfo,
  attributes      [0] IMPLICIT SET OF CRIAttributeSet OPTIONAL,
}
*/

enum { asn1_tag_length_IOSCertificationRequestInfo = 1,
       asn1_tag_class_IOSCertificationRequestInfo = 0,
       asn1_tag_tag_IOSCertificationRequestInfo = 16 };
struct IOSCertificationRequestInfo {
  PKCS10_Version version;
  Name subject;
  SubjectPublicKeyInfo subjectPKInfo;
  struct IOSCertificationRequestInfo_attributes {
    unsigned int len;
    CRIAttributeSet *val;
  } *attributes;
};

ASN1EXP int    ASN1CALL decode_IOSCertificationRequestInfo(const unsigned char *, size_t, IOSCertificationRequestInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_IOSCertificationRequestInfo(unsigned char *, size_t, const IOSCertificationRequestInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_IOSCertificationRequestInfo(const IOSCertificationRequestInfo *);
ASN1EXP int    ASN1CALL copy_IOSCertificationRequestInfo  (const IOSCertificationRequestInfo *, IOSCertificationRequestInfo *);
ASN1EXP void   ASN1CALL free_IOSCertificationRequestInfo  (IOSCertificationRequestInfo *);
ASN1EXP char * ASN1CALL print_IOSCertificationRequestInfo (const IOSCertificationRequestInfo *, int);


/*
IOSCertificationRequest ::= SEQUENCE {
  certificationRequestInfo   IOSCertificationRequestInfo,
  signatureAlgorithm         AlgorithmIdentifier,
  signature                    BIT STRING {
  },
}
*/

enum { asn1_tag_length_IOSCertificationRequest = 1,
       asn1_tag_class_IOSCertificationRequest = 0,
       asn1_tag_tag_IOSCertificationRequest = 16 };
struct IOSCertificationRequest {
  IOSCertificationRequestInfo certificationRequestInfo;
  AlgorithmIdentifier signatureAlgorithm;
  heim_bit_string signature;
};

ASN1EXP int    ASN1CALL decode_IOSCertificationRequest(const unsigned char *, size_t, IOSCertificationRequest *, size_t *);
ASN1EXP int    ASN1CALL encode_IOSCertificationRequest(unsigned char *, size_t, const IOSCertificationRequest *, size_t *);
ASN1EXP size_t ASN1CALL length_IOSCertificationRequest(const IOSCertificationRequest *);
ASN1EXP int    ASN1CALL copy_IOSCertificationRequest  (const IOSCertificationRequest *, IOSCertificationRequest *);
ASN1EXP void   ASN1CALL free_IOSCertificationRequest  (IOSCertificationRequest *);
ASN1EXP char * ASN1CALL print_IOSCertificationRequest (const IOSCertificationRequest *, int);


/*
CRIExtensions ::= Extensions
*/

enum { asn1_tag_length_CRIExtensions = asn1_tag_length_Extensions,
       asn1_tag_class_CRIExtensions = asn1_tag_class_Extensions,
       asn1_tag_tag_CRIExtensions = asn1_tag_tag_Extensions };

ASN1EXP int    ASN1CALL decode_CRIExtensions(const unsigned char *, size_t, CRIExtensions *, size_t *);
ASN1EXP int    ASN1CALL encode_CRIExtensions(unsigned char *, size_t, const CRIExtensions *, size_t *);
ASN1EXP size_t ASN1CALL length_CRIExtensions(const CRIExtensions *);
ASN1EXP int    ASN1CALL copy_CRIExtensions  (const CRIExtensions *, CRIExtensions *);
ASN1EXP void   ASN1CALL free_CRIExtensions  (CRIExtensions *);
ASN1EXP char * ASN1CALL print_CRIExtensions (const CRIExtensions *, int);


#endif /* __pkcs10_asn1_h__ */
