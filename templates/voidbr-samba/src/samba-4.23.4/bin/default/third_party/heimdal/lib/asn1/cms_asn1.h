/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/cms.asn1 */
/* Do not edit */

#ifndef __cms_asn1_h__
#define __cms_asn1_h__

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
/* OBJECT IDENTIFIER id-pkcs7 ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs7(7) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs7;
#define ASN1_OID_ID_PKCS7 (&asn1_oid_id_pkcs7)

/* OBJECT IDENTIFIER id-pkcs7-data ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs7(7) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs7_data;
#define ASN1_OID_ID_PKCS7_DATA (&asn1_oid_id_pkcs7_data)

/* OBJECT IDENTIFIER id-pkcs7-signedData ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs7(7) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs7_signedData;
#define ASN1_OID_ID_PKCS7_SIGNEDDATA (&asn1_oid_id_pkcs7_signedData)

/* OBJECT IDENTIFIER id-pkcs7-envelopedData ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs7(7) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs7_envelopedData;
#define ASN1_OID_ID_PKCS7_ENVELOPEDDATA (&asn1_oid_id_pkcs7_envelopedData)

/* OBJECT IDENTIFIER id-pkcs7-signedAndEnvelopedData ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs7(7) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs7_signedAndEnvelopedData;
#define ASN1_OID_ID_PKCS7_SIGNEDANDENVELOPEDDATA (&asn1_oid_id_pkcs7_signedAndEnvelopedData)

/* OBJECT IDENTIFIER id-pkcs7-digestedData ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs7(7) label-less(5) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs7_digestedData;
#define ASN1_OID_ID_PKCS7_DIGESTEDDATA (&asn1_oid_id_pkcs7_digestedData)

/* OBJECT IDENTIFIER id-pkcs7-encryptedData ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs7(7) label-less(6) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs7_encryptedData;
#define ASN1_OID_ID_PKCS7_ENCRYPTEDDATA (&asn1_oid_id_pkcs7_encryptedData)

typedef enum CMSVersion {
  cMSVersion_v0 = 0,
  cMSVersion_v1 = 1,
  cMSVersion_v2 = 2,
  cMSVersion_v3 = 3,
  cMSVersion_v4 = 4
} CMSVersion;

typedef AlgorithmIdentifier DigestAlgorithmIdentifier;

typedef struct DigestAlgorithmIdentifiers DigestAlgorithmIdentifiers;

typedef AlgorithmIdentifier SignatureAlgorithmIdentifier;

typedef heim_oid ContentType;

typedef heim_octet_string MessageDigest;

typedef struct ContentInfo ContentInfo;

typedef struct EncapsulatedContentInfo EncapsulatedContentInfo;

typedef struct CertificateSet CertificateSet;

typedef Certificate CertificateList;

typedef struct CertificateRevocationLists CertificateRevocationLists;

typedef struct IssuerAndSerialNumber IssuerAndSerialNumber;

typedef struct CMSIdentifier CMSIdentifier;

typedef CMSIdentifier SignerIdentifier;

typedef CMSIdentifier RecipientIdentifier;

typedef struct CMSAttributes CMSAttributes;

typedef heim_octet_string SignatureValue;

typedef struct SignerInfo SignerInfo;

typedef struct SignerInfos SignerInfos;

typedef struct SignedData SignedData;

typedef struct OriginatorInfo OriginatorInfo;

typedef AlgorithmIdentifier KeyEncryptionAlgorithmIdentifier;

typedef AlgorithmIdentifier ContentEncryptionAlgorithmIdentifier;

typedef heim_octet_string EncryptedKey;

typedef struct KeyTransRecipientInfo KeyTransRecipientInfo;

typedef KeyTransRecipientInfo RecipientInfo;

typedef struct RecipientInfos RecipientInfos;

typedef heim_octet_string EncryptedContent;

typedef struct EncryptedContentInfo EncryptedContentInfo;

typedef struct UnprotectedAttributes UnprotectedAttributes;

typedef struct CMSEncryptedData CMSEncryptedData;

typedef struct EnvelopedData EnvelopedData;

typedef struct CMSRC2CBCParameter CMSRC2CBCParameter;

typedef heim_octet_string CMSCBCParameter;

/*
CMSVersion ::= INTEGER {
  cMSVersion_v0(0),
  cMSVersion_v1(1),
  cMSVersion_v2(2),
  cMSVersion_v3(3),
  cMSVersion_v4(4)
}
*/

enum { asn1_tag_length_CMSVersion = 1,
       asn1_tag_class_CMSVersion = 0,
       asn1_tag_tag_CMSVersion = 2 };
ASN1EXP int    ASN1CALL decode_CMSVersion(const unsigned char *, size_t, CMSVersion *, size_t *);
ASN1EXP int    ASN1CALL encode_CMSVersion(unsigned char *, size_t, const CMSVersion *, size_t *);
ASN1EXP size_t ASN1CALL length_CMSVersion(const CMSVersion *);
ASN1EXP int    ASN1CALL copy_CMSVersion  (const CMSVersion *, CMSVersion *);
ASN1EXP void   ASN1CALL free_CMSVersion  (CMSVersion *);
ASN1EXP char * ASN1CALL print_CMSVersion (const CMSVersion *, int);


/*
DigestAlgorithmIdentifier ::= AlgorithmIdentifier
*/

enum { asn1_tag_length_DigestAlgorithmIdentifier = asn1_tag_length_AlgorithmIdentifier,
       asn1_tag_class_DigestAlgorithmIdentifier = asn1_tag_class_AlgorithmIdentifier,
       asn1_tag_tag_DigestAlgorithmIdentifier = asn1_tag_tag_AlgorithmIdentifier };

ASN1EXP int    ASN1CALL decode_DigestAlgorithmIdentifier(const unsigned char *, size_t, DigestAlgorithmIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestAlgorithmIdentifier(unsigned char *, size_t, const DigestAlgorithmIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestAlgorithmIdentifier(const DigestAlgorithmIdentifier *);
ASN1EXP int    ASN1CALL copy_DigestAlgorithmIdentifier  (const DigestAlgorithmIdentifier *, DigestAlgorithmIdentifier *);
ASN1EXP void   ASN1CALL free_DigestAlgorithmIdentifier  (DigestAlgorithmIdentifier *);
ASN1EXP char * ASN1CALL print_DigestAlgorithmIdentifier (const DigestAlgorithmIdentifier *, int);


/*
DigestAlgorithmIdentifiers ::= SET OF DigestAlgorithmIdentifier
*/

enum { asn1_tag_length_DigestAlgorithmIdentifiers = 1,
       asn1_tag_class_DigestAlgorithmIdentifiers = 0,
       asn1_tag_tag_DigestAlgorithmIdentifiers = 17 };
struct DigestAlgorithmIdentifiers {
  unsigned int len;
  DigestAlgorithmIdentifier *val;
};

ASN1EXP int   ASN1CALL add_DigestAlgorithmIdentifiers  (DigestAlgorithmIdentifiers *, const DigestAlgorithmIdentifier *);
ASN1EXP int   ASN1CALL remove_DigestAlgorithmIdentifiers  (DigestAlgorithmIdentifiers *, unsigned int);
ASN1EXP int    ASN1CALL decode_DigestAlgorithmIdentifiers(const unsigned char *, size_t, DigestAlgorithmIdentifiers *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestAlgorithmIdentifiers(unsigned char *, size_t, const DigestAlgorithmIdentifiers *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestAlgorithmIdentifiers(const DigestAlgorithmIdentifiers *);
ASN1EXP int    ASN1CALL copy_DigestAlgorithmIdentifiers  (const DigestAlgorithmIdentifiers *, DigestAlgorithmIdentifiers *);
ASN1EXP void   ASN1CALL free_DigestAlgorithmIdentifiers  (DigestAlgorithmIdentifiers *);
ASN1EXP char * ASN1CALL print_DigestAlgorithmIdentifiers (const DigestAlgorithmIdentifiers *, int);


/*
SignatureAlgorithmIdentifier ::= AlgorithmIdentifier
*/

enum { asn1_tag_length_SignatureAlgorithmIdentifier = asn1_tag_length_AlgorithmIdentifier,
       asn1_tag_class_SignatureAlgorithmIdentifier = asn1_tag_class_AlgorithmIdentifier,
       asn1_tag_tag_SignatureAlgorithmIdentifier = asn1_tag_tag_AlgorithmIdentifier };

ASN1EXP int    ASN1CALL decode_SignatureAlgorithmIdentifier(const unsigned char *, size_t, SignatureAlgorithmIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_SignatureAlgorithmIdentifier(unsigned char *, size_t, const SignatureAlgorithmIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_SignatureAlgorithmIdentifier(const SignatureAlgorithmIdentifier *);
ASN1EXP int    ASN1CALL copy_SignatureAlgorithmIdentifier  (const SignatureAlgorithmIdentifier *, SignatureAlgorithmIdentifier *);
ASN1EXP void   ASN1CALL free_SignatureAlgorithmIdentifier  (SignatureAlgorithmIdentifier *);
ASN1EXP char * ASN1CALL print_SignatureAlgorithmIdentifier (const SignatureAlgorithmIdentifier *, int);


/*
ContentType ::= OBJECT IDENTIFIER
*/

enum { asn1_tag_length_ContentType = 1,
       asn1_tag_class_ContentType = 0,
       asn1_tag_tag_ContentType = 6 };
ASN1EXP int    ASN1CALL decode_ContentType(const unsigned char *, size_t, ContentType *, size_t *);
ASN1EXP int    ASN1CALL encode_ContentType(unsigned char *, size_t, const ContentType *, size_t *);
ASN1EXP size_t ASN1CALL length_ContentType(const ContentType *);
ASN1EXP int    ASN1CALL copy_ContentType  (const ContentType *, ContentType *);
ASN1EXP void   ASN1CALL free_ContentType  (ContentType *);
ASN1EXP char * ASN1CALL print_ContentType (const ContentType *, int);


/*
MessageDigest ::= OCTET STRING
*/

enum { asn1_tag_length_MessageDigest = 1,
       asn1_tag_class_MessageDigest = 0,
       asn1_tag_tag_MessageDigest = 4 };
ASN1EXP int    ASN1CALL decode_MessageDigest(const unsigned char *, size_t, MessageDigest *, size_t *);
ASN1EXP int    ASN1CALL encode_MessageDigest(unsigned char *, size_t, const MessageDigest *, size_t *);
ASN1EXP size_t ASN1CALL length_MessageDigest(const MessageDigest *);
ASN1EXP int    ASN1CALL copy_MessageDigest  (const MessageDigest *, MessageDigest *);
ASN1EXP void   ASN1CALL free_MessageDigest  (MessageDigest *);
ASN1EXP char * ASN1CALL print_MessageDigest (const MessageDigest *, int);


/*
ContentInfo ::= SEQUENCE {
  contentType     ContentType,
  content         [0] HEIM_ANY OPTIONAL,
}
*/

enum { asn1_tag_length_ContentInfo = 1,
       asn1_tag_class_ContentInfo = 0,
       asn1_tag_tag_ContentInfo = 16 };
struct ContentInfo {
  ContentType contentType;
  HEIM_ANY *content;
};

ASN1EXP int    ASN1CALL decode_ContentInfo(const unsigned char *, size_t, ContentInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_ContentInfo(unsigned char *, size_t, const ContentInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_ContentInfo(const ContentInfo *);
ASN1EXP int    ASN1CALL copy_ContentInfo  (const ContentInfo *, ContentInfo *);
ASN1EXP void   ASN1CALL free_ContentInfo  (ContentInfo *);
ASN1EXP char * ASN1CALL print_ContentInfo (const ContentInfo *, int);


/*
EncapsulatedContentInfo ::= SEQUENCE {
  eContentType    ContentType,
  eContent        [0] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_EncapsulatedContentInfo = 1,
       asn1_tag_class_EncapsulatedContentInfo = 0,
       asn1_tag_tag_EncapsulatedContentInfo = 16 };
struct EncapsulatedContentInfo {
  ContentType eContentType;
  heim_octet_string *eContent;
};

ASN1EXP int    ASN1CALL decode_EncapsulatedContentInfo(const unsigned char *, size_t, EncapsulatedContentInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_EncapsulatedContentInfo(unsigned char *, size_t, const EncapsulatedContentInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_EncapsulatedContentInfo(const EncapsulatedContentInfo *);
ASN1EXP int    ASN1CALL copy_EncapsulatedContentInfo  (const EncapsulatedContentInfo *, EncapsulatedContentInfo *);
ASN1EXP void   ASN1CALL free_EncapsulatedContentInfo  (EncapsulatedContentInfo *);
ASN1EXP char * ASN1CALL print_EncapsulatedContentInfo (const EncapsulatedContentInfo *, int);


/*
CertificateSet ::= SET OF HEIM_ANY
*/

enum { asn1_tag_length_CertificateSet = 1,
       asn1_tag_class_CertificateSet = 0,
       asn1_tag_tag_CertificateSet = 17 };
struct CertificateSet {
  unsigned int len;
  HEIM_ANY *val;
};

ASN1EXP int    ASN1CALL decode_CertificateSet(const unsigned char *, size_t, CertificateSet *, size_t *);
ASN1EXP int    ASN1CALL encode_CertificateSet(unsigned char *, size_t, const CertificateSet *, size_t *);
ASN1EXP size_t ASN1CALL length_CertificateSet(const CertificateSet *);
ASN1EXP int    ASN1CALL copy_CertificateSet  (const CertificateSet *, CertificateSet *);
ASN1EXP void   ASN1CALL free_CertificateSet  (CertificateSet *);
ASN1EXP char * ASN1CALL print_CertificateSet (const CertificateSet *, int);


/*
CertificateList ::= Certificate
*/

enum { asn1_tag_length_CertificateList = asn1_tag_length_Certificate,
       asn1_tag_class_CertificateList = asn1_tag_class_Certificate,
       asn1_tag_tag_CertificateList = asn1_tag_tag_Certificate };

ASN1EXP int    ASN1CALL decode_CertificateList(const unsigned char *, size_t, CertificateList *, size_t *);
ASN1EXP int    ASN1CALL encode_CertificateList(unsigned char *, size_t, const CertificateList *, size_t *);
ASN1EXP size_t ASN1CALL length_CertificateList(const CertificateList *);
ASN1EXP int    ASN1CALL copy_CertificateList  (const CertificateList *, CertificateList *);
ASN1EXP void   ASN1CALL free_CertificateList  (CertificateList *);
ASN1EXP char * ASN1CALL print_CertificateList (const CertificateList *, int);


/*
CertificateRevocationLists ::= SET OF CertificateList
*/

enum { asn1_tag_length_CertificateRevocationLists = 1,
       asn1_tag_class_CertificateRevocationLists = 0,
       asn1_tag_tag_CertificateRevocationLists = 17 };
struct CertificateRevocationLists {
  unsigned int len;
  CertificateList *val;
};

ASN1EXP int    ASN1CALL decode_CertificateRevocationLists(const unsigned char *, size_t, CertificateRevocationLists *, size_t *);
ASN1EXP int    ASN1CALL encode_CertificateRevocationLists(unsigned char *, size_t, const CertificateRevocationLists *, size_t *);
ASN1EXP size_t ASN1CALL length_CertificateRevocationLists(const CertificateRevocationLists *);
ASN1EXP int    ASN1CALL copy_CertificateRevocationLists  (const CertificateRevocationLists *, CertificateRevocationLists *);
ASN1EXP void   ASN1CALL free_CertificateRevocationLists  (CertificateRevocationLists *);
ASN1EXP char * ASN1CALL print_CertificateRevocationLists (const CertificateRevocationLists *, int);


/*
IssuerAndSerialNumber ::= SEQUENCE {
  issuer          Name,
  serialNumber    CertificateSerialNumber,
}
*/

enum { asn1_tag_length_IssuerAndSerialNumber = 1,
       asn1_tag_class_IssuerAndSerialNumber = 0,
       asn1_tag_tag_IssuerAndSerialNumber = 16 };
struct IssuerAndSerialNumber {
  Name issuer;
  CertificateSerialNumber serialNumber;
};

ASN1EXP int    ASN1CALL decode_IssuerAndSerialNumber(const unsigned char *, size_t, IssuerAndSerialNumber *, size_t *);
ASN1EXP int    ASN1CALL encode_IssuerAndSerialNumber(unsigned char *, size_t, const IssuerAndSerialNumber *, size_t *);
ASN1EXP size_t ASN1CALL length_IssuerAndSerialNumber(const IssuerAndSerialNumber *);
ASN1EXP int    ASN1CALL copy_IssuerAndSerialNumber  (const IssuerAndSerialNumber *, IssuerAndSerialNumber *);
ASN1EXP void   ASN1CALL free_IssuerAndSerialNumber  (IssuerAndSerialNumber *);
ASN1EXP char * ASN1CALL print_IssuerAndSerialNumber (const IssuerAndSerialNumber *, int);


/*
CMSIdentifier ::= CHOICE {
  issuerAndSerialNumber   IssuerAndSerialNumber,
  subjectKeyIdentifier    [0] SubjectKeyIdentifier,
}
*/

enum { asn1_tag_length_CMSIdentifier = 1,
       asn1_tag_class_CMSIdentifier = 0,
       asn1_tag_tag_CMSIdentifier = 0 };
struct CMSIdentifier {
  enum CMSIdentifier_enum {
    choice_CMSIdentifier_issuerAndSerialNumber = 1,
    choice_CMSIdentifier_subjectKeyIdentifier
  } element;
  union {
    IssuerAndSerialNumber issuerAndSerialNumber;
    SubjectKeyIdentifier subjectKeyIdentifier;
  } u;
};

ASN1EXP int    ASN1CALL decode_CMSIdentifier(const unsigned char *, size_t, CMSIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_CMSIdentifier(unsigned char *, size_t, const CMSIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_CMSIdentifier(const CMSIdentifier *);
ASN1EXP int    ASN1CALL copy_CMSIdentifier  (const CMSIdentifier *, CMSIdentifier *);
ASN1EXP void   ASN1CALL free_CMSIdentifier  (CMSIdentifier *);
ASN1EXP char * ASN1CALL print_CMSIdentifier (const CMSIdentifier *, int);


/*
SignerIdentifier ::= CMSIdentifier
*/

enum { asn1_tag_length_SignerIdentifier = 1,
       asn1_tag_class_SignerIdentifier = 0,
       asn1_tag_tag_SignerIdentifier = 0 };

ASN1EXP int    ASN1CALL decode_SignerIdentifier(const unsigned char *, size_t, SignerIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_SignerIdentifier(unsigned char *, size_t, const SignerIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_SignerIdentifier(const SignerIdentifier *);
ASN1EXP int    ASN1CALL copy_SignerIdentifier  (const SignerIdentifier *, SignerIdentifier *);
ASN1EXP void   ASN1CALL free_SignerIdentifier  (SignerIdentifier *);
ASN1EXP char * ASN1CALL print_SignerIdentifier (const SignerIdentifier *, int);


/*
RecipientIdentifier ::= CMSIdentifier
*/

enum { asn1_tag_length_RecipientIdentifier = 1,
       asn1_tag_class_RecipientIdentifier = 0,
       asn1_tag_tag_RecipientIdentifier = 0 };

ASN1EXP int    ASN1CALL decode_RecipientIdentifier(const unsigned char *, size_t, RecipientIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_RecipientIdentifier(unsigned char *, size_t, const RecipientIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_RecipientIdentifier(const RecipientIdentifier *);
ASN1EXP int    ASN1CALL copy_RecipientIdentifier  (const RecipientIdentifier *, RecipientIdentifier *);
ASN1EXP void   ASN1CALL free_RecipientIdentifier  (RecipientIdentifier *);
ASN1EXP char * ASN1CALL print_RecipientIdentifier (const RecipientIdentifier *, int);


/*
CMSAttributes ::= SET OF Attribute
*/

enum { asn1_tag_length_CMSAttributes = 1,
       asn1_tag_class_CMSAttributes = 0,
       asn1_tag_tag_CMSAttributes = 17 };
struct CMSAttributes {
  unsigned int len;
  Attribute *val;
};

ASN1EXP int    ASN1CALL decode_CMSAttributes(const unsigned char *, size_t, CMSAttributes *, size_t *);
ASN1EXP int    ASN1CALL encode_CMSAttributes(unsigned char *, size_t, const CMSAttributes *, size_t *);
ASN1EXP size_t ASN1CALL length_CMSAttributes(const CMSAttributes *);
ASN1EXP int    ASN1CALL copy_CMSAttributes  (const CMSAttributes *, CMSAttributes *);
ASN1EXP void   ASN1CALL free_CMSAttributes  (CMSAttributes *);
ASN1EXP char * ASN1CALL print_CMSAttributes (const CMSAttributes *, int);


/*
SignatureValue ::= OCTET STRING
*/

enum { asn1_tag_length_SignatureValue = 1,
       asn1_tag_class_SignatureValue = 0,
       asn1_tag_tag_SignatureValue = 4 };
ASN1EXP int    ASN1CALL decode_SignatureValue(const unsigned char *, size_t, SignatureValue *, size_t *);
ASN1EXP int    ASN1CALL encode_SignatureValue(unsigned char *, size_t, const SignatureValue *, size_t *);
ASN1EXP size_t ASN1CALL length_SignatureValue(const SignatureValue *);
ASN1EXP int    ASN1CALL copy_SignatureValue  (const SignatureValue *, SignatureValue *);
ASN1EXP void   ASN1CALL free_SignatureValue  (SignatureValue *);
ASN1EXP char * ASN1CALL print_SignatureValue (const SignatureValue *, int);


/*
SignerInfo ::= SEQUENCE {
  version              CMSVersion,
  sid                  SignerIdentifier,
  digestAlgorithm      DigestAlgorithmIdentifier,
  signedAttrs          [0] IMPLICIT CMSAttributes OPTIONAL,
  signatureAlgorithm   SignatureAlgorithmIdentifier,
  signature            SignatureValue,
  unsignedAttrs        [1] IMPLICIT CMSAttributes OPTIONAL,
}
*/

enum { asn1_tag_length_SignerInfo = 1,
       asn1_tag_class_SignerInfo = 0,
       asn1_tag_tag_SignerInfo = 16 };
struct SignerInfo {
  CMSVersion version;
  SignerIdentifier sid;
  DigestAlgorithmIdentifier digestAlgorithm;
  CMSAttributes *signedAttrs;
  SignatureAlgorithmIdentifier signatureAlgorithm;
  SignatureValue signature;
  CMSAttributes *unsignedAttrs;
};

ASN1EXP int    ASN1CALL decode_SignerInfo(const unsigned char *, size_t, SignerInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_SignerInfo(unsigned char *, size_t, const SignerInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_SignerInfo(const SignerInfo *);
ASN1EXP int    ASN1CALL copy_SignerInfo  (const SignerInfo *, SignerInfo *);
ASN1EXP void   ASN1CALL free_SignerInfo  (SignerInfo *);
ASN1EXP char * ASN1CALL print_SignerInfo (const SignerInfo *, int);


/*
SignerInfos ::= SET OF SignerInfo
*/

enum { asn1_tag_length_SignerInfos = 1,
       asn1_tag_class_SignerInfos = 0,
       asn1_tag_tag_SignerInfos = 17 };
struct SignerInfos {
  unsigned int len;
  SignerInfo *val;
};

ASN1EXP int    ASN1CALL decode_SignerInfos(const unsigned char *, size_t, SignerInfos *, size_t *);
ASN1EXP int    ASN1CALL encode_SignerInfos(unsigned char *, size_t, const SignerInfos *, size_t *);
ASN1EXP size_t ASN1CALL length_SignerInfos(const SignerInfos *);
ASN1EXP int    ASN1CALL copy_SignerInfos  (const SignerInfos *, SignerInfos *);
ASN1EXP void   ASN1CALL free_SignerInfos  (SignerInfos *);
ASN1EXP char * ASN1CALL print_SignerInfos (const SignerInfos *, int);


/*
SignedData ::= SEQUENCE {
  version            CMSVersion,
  digestAlgorithms   DigestAlgorithmIdentifiers,
  encapContentInfo   EncapsulatedContentInfo,
  certificates       [0] IMPLICIT CertificateSet OPTIONAL,
  crls               [1] IMPLICIT CertificateRevocationLists OPTIONAL,
  signerInfos        SignerInfos,
}
*/

enum { asn1_tag_length_SignedData = 1,
       asn1_tag_class_SignedData = 0,
       asn1_tag_tag_SignedData = 16 };
struct SignedData {
  CMSVersion version;
  DigestAlgorithmIdentifiers digestAlgorithms;
  EncapsulatedContentInfo encapContentInfo;
  CertificateSet *certificates;
  CertificateRevocationLists *crls;
  SignerInfos signerInfos;
};

ASN1EXP int    ASN1CALL decode_SignedData(const unsigned char *, size_t, SignedData *, size_t *);
ASN1EXP int    ASN1CALL encode_SignedData(unsigned char *, size_t, const SignedData *, size_t *);
ASN1EXP size_t ASN1CALL length_SignedData(const SignedData *);
ASN1EXP int    ASN1CALL copy_SignedData  (const SignedData *, SignedData *);
ASN1EXP void   ASN1CALL free_SignedData  (SignedData *);
ASN1EXP char * ASN1CALL print_SignedData (const SignedData *, int);


/*
OriginatorInfo ::= SEQUENCE {
  certs           [0] IMPLICIT CertificateSet OPTIONAL,
  crls            [1] IMPLICIT CertificateRevocationLists OPTIONAL,
}
*/

enum { asn1_tag_length_OriginatorInfo = 1,
       asn1_tag_class_OriginatorInfo = 0,
       asn1_tag_tag_OriginatorInfo = 16 };
struct OriginatorInfo {
  CertificateSet *certs;
  CertificateRevocationLists *crls;
};

ASN1EXP int    ASN1CALL decode_OriginatorInfo(const unsigned char *, size_t, OriginatorInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_OriginatorInfo(unsigned char *, size_t, const OriginatorInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_OriginatorInfo(const OriginatorInfo *);
ASN1EXP int    ASN1CALL copy_OriginatorInfo  (const OriginatorInfo *, OriginatorInfo *);
ASN1EXP void   ASN1CALL free_OriginatorInfo  (OriginatorInfo *);
ASN1EXP char * ASN1CALL print_OriginatorInfo (const OriginatorInfo *, int);


/*
KeyEncryptionAlgorithmIdentifier ::= AlgorithmIdentifier
*/

enum { asn1_tag_length_KeyEncryptionAlgorithmIdentifier = asn1_tag_length_AlgorithmIdentifier,
       asn1_tag_class_KeyEncryptionAlgorithmIdentifier = asn1_tag_class_AlgorithmIdentifier,
       asn1_tag_tag_KeyEncryptionAlgorithmIdentifier = asn1_tag_tag_AlgorithmIdentifier };

ASN1EXP int    ASN1CALL decode_KeyEncryptionAlgorithmIdentifier(const unsigned char *, size_t, KeyEncryptionAlgorithmIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_KeyEncryptionAlgorithmIdentifier(unsigned char *, size_t, const KeyEncryptionAlgorithmIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_KeyEncryptionAlgorithmIdentifier(const KeyEncryptionAlgorithmIdentifier *);
ASN1EXP int    ASN1CALL copy_KeyEncryptionAlgorithmIdentifier  (const KeyEncryptionAlgorithmIdentifier *, KeyEncryptionAlgorithmIdentifier *);
ASN1EXP void   ASN1CALL free_KeyEncryptionAlgorithmIdentifier  (KeyEncryptionAlgorithmIdentifier *);
ASN1EXP char * ASN1CALL print_KeyEncryptionAlgorithmIdentifier (const KeyEncryptionAlgorithmIdentifier *, int);


/*
ContentEncryptionAlgorithmIdentifier ::= AlgorithmIdentifier
*/

enum { asn1_tag_length_ContentEncryptionAlgorithmIdentifier = asn1_tag_length_AlgorithmIdentifier,
       asn1_tag_class_ContentEncryptionAlgorithmIdentifier = asn1_tag_class_AlgorithmIdentifier,
       asn1_tag_tag_ContentEncryptionAlgorithmIdentifier = asn1_tag_tag_AlgorithmIdentifier };

ASN1EXP int    ASN1CALL decode_ContentEncryptionAlgorithmIdentifier(const unsigned char *, size_t, ContentEncryptionAlgorithmIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_ContentEncryptionAlgorithmIdentifier(unsigned char *, size_t, const ContentEncryptionAlgorithmIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_ContentEncryptionAlgorithmIdentifier(const ContentEncryptionAlgorithmIdentifier *);
ASN1EXP int    ASN1CALL copy_ContentEncryptionAlgorithmIdentifier  (const ContentEncryptionAlgorithmIdentifier *, ContentEncryptionAlgorithmIdentifier *);
ASN1EXP void   ASN1CALL free_ContentEncryptionAlgorithmIdentifier  (ContentEncryptionAlgorithmIdentifier *);
ASN1EXP char * ASN1CALL print_ContentEncryptionAlgorithmIdentifier (const ContentEncryptionAlgorithmIdentifier *, int);


/*
EncryptedKey ::= OCTET STRING
*/

enum { asn1_tag_length_EncryptedKey = 1,
       asn1_tag_class_EncryptedKey = 0,
       asn1_tag_tag_EncryptedKey = 4 };
ASN1EXP int    ASN1CALL decode_EncryptedKey(const unsigned char *, size_t, EncryptedKey *, size_t *);
ASN1EXP int    ASN1CALL encode_EncryptedKey(unsigned char *, size_t, const EncryptedKey *, size_t *);
ASN1EXP size_t ASN1CALL length_EncryptedKey(const EncryptedKey *);
ASN1EXP int    ASN1CALL copy_EncryptedKey  (const EncryptedKey *, EncryptedKey *);
ASN1EXP void   ASN1CALL free_EncryptedKey  (EncryptedKey *);
ASN1EXP char * ASN1CALL print_EncryptedKey (const EncryptedKey *, int);


/*
KeyTransRecipientInfo ::= SEQUENCE {
  version                  CMSVersion,
  rid                      RecipientIdentifier,
  keyEncryptionAlgorithm   KeyEncryptionAlgorithmIdentifier,
  encryptedKey             EncryptedKey,
}
*/

enum { asn1_tag_length_KeyTransRecipientInfo = 1,
       asn1_tag_class_KeyTransRecipientInfo = 0,
       asn1_tag_tag_KeyTransRecipientInfo = 16 };
struct KeyTransRecipientInfo {
  CMSVersion version;
  RecipientIdentifier rid;
  KeyEncryptionAlgorithmIdentifier keyEncryptionAlgorithm;
  EncryptedKey encryptedKey;
};

ASN1EXP int    ASN1CALL decode_KeyTransRecipientInfo(const unsigned char *, size_t, KeyTransRecipientInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_KeyTransRecipientInfo(unsigned char *, size_t, const KeyTransRecipientInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_KeyTransRecipientInfo(const KeyTransRecipientInfo *);
ASN1EXP int    ASN1CALL copy_KeyTransRecipientInfo  (const KeyTransRecipientInfo *, KeyTransRecipientInfo *);
ASN1EXP void   ASN1CALL free_KeyTransRecipientInfo  (KeyTransRecipientInfo *);
ASN1EXP char * ASN1CALL print_KeyTransRecipientInfo (const KeyTransRecipientInfo *, int);


/*
RecipientInfo ::= KeyTransRecipientInfo
*/

enum { asn1_tag_length_RecipientInfo = 1,
       asn1_tag_class_RecipientInfo = 0,
       asn1_tag_tag_RecipientInfo = 0 };

ASN1EXP int    ASN1CALL decode_RecipientInfo(const unsigned char *, size_t, RecipientInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_RecipientInfo(unsigned char *, size_t, const RecipientInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_RecipientInfo(const RecipientInfo *);
ASN1EXP int    ASN1CALL copy_RecipientInfo  (const RecipientInfo *, RecipientInfo *);
ASN1EXP void   ASN1CALL free_RecipientInfo  (RecipientInfo *);
ASN1EXP char * ASN1CALL print_RecipientInfo (const RecipientInfo *, int);


/*
RecipientInfos ::= SET OF RecipientInfo
*/

enum { asn1_tag_length_RecipientInfos = 1,
       asn1_tag_class_RecipientInfos = 0,
       asn1_tag_tag_RecipientInfos = 17 };
struct RecipientInfos {
  unsigned int len;
  RecipientInfo *val;
};

ASN1EXP int    ASN1CALL decode_RecipientInfos(const unsigned char *, size_t, RecipientInfos *, size_t *);
ASN1EXP int    ASN1CALL encode_RecipientInfos(unsigned char *, size_t, const RecipientInfos *, size_t *);
ASN1EXP size_t ASN1CALL length_RecipientInfos(const RecipientInfos *);
ASN1EXP int    ASN1CALL copy_RecipientInfos  (const RecipientInfos *, RecipientInfos *);
ASN1EXP void   ASN1CALL free_RecipientInfos  (RecipientInfos *);
ASN1EXP char * ASN1CALL print_RecipientInfos (const RecipientInfos *, int);


/*
EncryptedContent ::= OCTET STRING
*/

enum { asn1_tag_length_EncryptedContent = 1,
       asn1_tag_class_EncryptedContent = 0,
       asn1_tag_tag_EncryptedContent = 4 };
ASN1EXP int    ASN1CALL decode_EncryptedContent(const unsigned char *, size_t, EncryptedContent *, size_t *);
ASN1EXP int    ASN1CALL encode_EncryptedContent(unsigned char *, size_t, const EncryptedContent *, size_t *);
ASN1EXP size_t ASN1CALL length_EncryptedContent(const EncryptedContent *);
ASN1EXP int    ASN1CALL copy_EncryptedContent  (const EncryptedContent *, EncryptedContent *);
ASN1EXP void   ASN1CALL free_EncryptedContent  (EncryptedContent *);
ASN1EXP char * ASN1CALL print_EncryptedContent (const EncryptedContent *, int);


/*
EncryptedContentInfo ::= SEQUENCE {
  contentType                  ContentType,
  contentEncryptionAlgorithm   ContentEncryptionAlgorithmIdentifier,
  encryptedContent             [0] IMPLICIT OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_EncryptedContentInfo = 1,
       asn1_tag_class_EncryptedContentInfo = 0,
       asn1_tag_tag_EncryptedContentInfo = 16 };
struct EncryptedContentInfo {
  ContentType contentType;
  ContentEncryptionAlgorithmIdentifier contentEncryptionAlgorithm;
  heim_octet_string *encryptedContent;
};

ASN1EXP int    ASN1CALL decode_EncryptedContentInfo(const unsigned char *, size_t, EncryptedContentInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_EncryptedContentInfo(unsigned char *, size_t, const EncryptedContentInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_EncryptedContentInfo(const EncryptedContentInfo *);
ASN1EXP int    ASN1CALL copy_EncryptedContentInfo  (const EncryptedContentInfo *, EncryptedContentInfo *);
ASN1EXP void   ASN1CALL free_EncryptedContentInfo  (EncryptedContentInfo *);
ASN1EXP char * ASN1CALL print_EncryptedContentInfo (const EncryptedContentInfo *, int);


/*
UnprotectedAttributes ::= SET OF Attribute
*/

enum { asn1_tag_length_UnprotectedAttributes = 1,
       asn1_tag_class_UnprotectedAttributes = 0,
       asn1_tag_tag_UnprotectedAttributes = 17 };
struct UnprotectedAttributes {
  unsigned int len;
  Attribute *val;
};

ASN1EXP int    ASN1CALL decode_UnprotectedAttributes(const unsigned char *, size_t, UnprotectedAttributes *, size_t *);
ASN1EXP int    ASN1CALL encode_UnprotectedAttributes(unsigned char *, size_t, const UnprotectedAttributes *, size_t *);
ASN1EXP size_t ASN1CALL length_UnprotectedAttributes(const UnprotectedAttributes *);
ASN1EXP int    ASN1CALL copy_UnprotectedAttributes  (const UnprotectedAttributes *, UnprotectedAttributes *);
ASN1EXP void   ASN1CALL free_UnprotectedAttributes  (UnprotectedAttributes *);
ASN1EXP char * ASN1CALL print_UnprotectedAttributes (const UnprotectedAttributes *, int);


/*
CMSEncryptedData ::= SEQUENCE {
  version                CMSVersion,
  encryptedContentInfo   EncryptedContentInfo,
  unprotectedAttrs       [1] IMPLICIT UnprotectedAttributes OPTIONAL,
}
*/

enum { asn1_tag_length_CMSEncryptedData = 1,
       asn1_tag_class_CMSEncryptedData = 0,
       asn1_tag_tag_CMSEncryptedData = 16 };
struct CMSEncryptedData {
  CMSVersion version;
  EncryptedContentInfo encryptedContentInfo;
  UnprotectedAttributes *unprotectedAttrs;
};

ASN1EXP int    ASN1CALL decode_CMSEncryptedData(const unsigned char *, size_t, CMSEncryptedData *, size_t *);
ASN1EXP int    ASN1CALL encode_CMSEncryptedData(unsigned char *, size_t, const CMSEncryptedData *, size_t *);
ASN1EXP size_t ASN1CALL length_CMSEncryptedData(const CMSEncryptedData *);
ASN1EXP int    ASN1CALL copy_CMSEncryptedData  (const CMSEncryptedData *, CMSEncryptedData *);
ASN1EXP void   ASN1CALL free_CMSEncryptedData  (CMSEncryptedData *);
ASN1EXP char * ASN1CALL print_CMSEncryptedData (const CMSEncryptedData *, int);


/*
EnvelopedData ::= SEQUENCE {
  version                CMSVersion,
  originatorInfo         [0] IMPLICIT OriginatorInfo OPTIONAL,
  recipientInfos         RecipientInfos,
  encryptedContentInfo   EncryptedContentInfo,
  unprotectedAttrs       [1] IMPLICIT UnprotectedAttributes OPTIONAL,
}
*/

enum { asn1_tag_length_EnvelopedData = 1,
       asn1_tag_class_EnvelopedData = 0,
       asn1_tag_tag_EnvelopedData = 16 };
struct EnvelopedData {
  CMSVersion version;
  OriginatorInfo *originatorInfo;
  RecipientInfos recipientInfos;
  EncryptedContentInfo encryptedContentInfo;
  UnprotectedAttributes *unprotectedAttrs;
};

ASN1EXP int    ASN1CALL decode_EnvelopedData(const unsigned char *, size_t, EnvelopedData *, size_t *);
ASN1EXP int    ASN1CALL encode_EnvelopedData(unsigned char *, size_t, const EnvelopedData *, size_t *);
ASN1EXP size_t ASN1CALL length_EnvelopedData(const EnvelopedData *);
ASN1EXP int    ASN1CALL copy_EnvelopedData  (const EnvelopedData *, EnvelopedData *);
ASN1EXP void   ASN1CALL free_EnvelopedData  (EnvelopedData *);
ASN1EXP char * ASN1CALL print_EnvelopedData (const EnvelopedData *, int);


/*
CMSRC2CBCParameter ::= SEQUENCE {
  rc2ParameterVersion   INTEGER (0..4294967295),
  iv                    OCTET STRING,
}
*/

enum { asn1_tag_length_CMSRC2CBCParameter = 1,
       asn1_tag_class_CMSRC2CBCParameter = 0,
       asn1_tag_tag_CMSRC2CBCParameter = 16 };
struct CMSRC2CBCParameter {
  unsigned int rc2ParameterVersion;
  heim_octet_string iv;
};

ASN1EXP int    ASN1CALL decode_CMSRC2CBCParameter(const unsigned char *, size_t, CMSRC2CBCParameter *, size_t *);
ASN1EXP int    ASN1CALL encode_CMSRC2CBCParameter(unsigned char *, size_t, const CMSRC2CBCParameter *, size_t *);
ASN1EXP size_t ASN1CALL length_CMSRC2CBCParameter(const CMSRC2CBCParameter *);
ASN1EXP int    ASN1CALL copy_CMSRC2CBCParameter  (const CMSRC2CBCParameter *, CMSRC2CBCParameter *);
ASN1EXP void   ASN1CALL free_CMSRC2CBCParameter  (CMSRC2CBCParameter *);
ASN1EXP char * ASN1CALL print_CMSRC2CBCParameter (const CMSRC2CBCParameter *, int);


/*
CMSCBCParameter ::= OCTET STRING
*/

enum { asn1_tag_length_CMSCBCParameter = 1,
       asn1_tag_class_CMSCBCParameter = 0,
       asn1_tag_tag_CMSCBCParameter = 4 };
ASN1EXP int    ASN1CALL decode_CMSCBCParameter(const unsigned char *, size_t, CMSCBCParameter *, size_t *);
ASN1EXP int    ASN1CALL encode_CMSCBCParameter(unsigned char *, size_t, const CMSCBCParameter *, size_t *);
ASN1EXP size_t ASN1CALL length_CMSCBCParameter(const CMSCBCParameter *);
ASN1EXP int    ASN1CALL copy_CMSCBCParameter  (const CMSCBCParameter *, CMSCBCParameter *);
ASN1EXP void   ASN1CALL free_CMSCBCParameter  (CMSCBCParameter *);
ASN1EXP char * ASN1CALL print_CMSCBCParameter (const CMSCBCParameter *, int);


#endif /* __cms_asn1_h__ */
