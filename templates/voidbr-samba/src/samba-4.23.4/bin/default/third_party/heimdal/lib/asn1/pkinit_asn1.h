/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/pkinit.asn1 */
/* Do not edit */

#ifndef __pkinit_asn1_h__
#define __pkinit_asn1_h__

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

#include <krb5_asn1.h>
#include <cms_asn1.h>
#include <rfc2459_asn1.h>
#include <heim_asn1.h>
/* OBJECT IDENTIFIER id-pkinit ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) pkinit(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkinit;
#define ASN1_OID_ID_PKINIT (&asn1_oid_id_pkinit)

/* OBJECT IDENTIFIER id-pkauthdata ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) pkinit(3) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkauthdata;
#define ASN1_OID_ID_PKAUTHDATA (&asn1_oid_id_pkauthdata)

/* OBJECT IDENTIFIER id-pkdhkeydata ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) pkinit(3) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkdhkeydata;
#define ASN1_OID_ID_PKDHKEYDATA (&asn1_oid_id_pkdhkeydata)

/* OBJECT IDENTIFIER id-pkrkeydata ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) pkinit(3) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkrkeydata;
#define ASN1_OID_ID_PKRKEYDATA (&asn1_oid_id_pkrkeydata)

/* OBJECT IDENTIFIER id-pkekuoid ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) pkinit(3) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkekuoid;
#define ASN1_OID_ID_PKEKUOID (&asn1_oid_id_pkekuoid)

/* OBJECT IDENTIFIER id-pkkdcekuoid ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) pkinit(3) label-less(5) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkkdcekuoid;
#define ASN1_OID_ID_PKKDCEKUOID (&asn1_oid_id_pkkdcekuoid)

/* OBJECT IDENTIFIER id-heim-eku-pkinit-certlife-is-max-life ::= { iso(1) member-body(2) se(752) su(43) heim-pkix(16) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_heim_eku_pkinit_certlife_is_max_life;
#define ASN1_OID_ID_HEIM_EKU_PKINIT_CERTLIFE_IS_MAX_LIFE (&asn1_oid_id_heim_eku_pkinit_certlife_is_max_life)

/* OBJECT IDENTIFIER id-apple-system-id ::= { label-less(1) label-less(2) label-less(840) label-less(113635) label-less(100) label-less(4) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_apple_system_id;
#define ASN1_OID_ID_APPLE_SYSTEM_ID (&asn1_oid_id_apple_system_id)

/* OBJECT IDENTIFIER id-pkinit-kdf ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) pkinit(3) label-less(6) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkinit_kdf;
#define ASN1_OID_ID_PKINIT_KDF (&asn1_oid_id_pkinit_kdf)

/* OBJECT IDENTIFIER id-pkinit-kdf-ah-sha1 ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) pkinit(3) label-less(6) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkinit_kdf_ah_sha1;
#define ASN1_OID_ID_PKINIT_KDF_AH_SHA1 (&asn1_oid_id_pkinit_kdf_ah_sha1)

/* OBJECT IDENTIFIER id-pkinit-kdf-ah-sha256 ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) pkinit(3) label-less(6) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkinit_kdf_ah_sha256;
#define ASN1_OID_ID_PKINIT_KDF_AH_SHA256 (&asn1_oid_id_pkinit_kdf_ah_sha256)

/* OBJECT IDENTIFIER id-pkinit-kdf-ah-sha512 ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) pkinit(3) label-less(6) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkinit_kdf_ah_sha512;
#define ASN1_OID_ID_PKINIT_KDF_AH_SHA512 (&asn1_oid_id_pkinit_kdf_ah_sha512)

/* OBJECT IDENTIFIER id-pkinit-san ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) x509-sanan(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkinit_san;
#define ASN1_OID_ID_PKINIT_SAN (&asn1_oid_id_pkinit_san)

/* OBJECT IDENTIFIER id-pkinit-ms-eku ::= { iso(1) org(3) dod(6) internet(1) private(4) enterprise(1) microsoft(311) label-less(20) label-less(2) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkinit_ms_eku;
#define ASN1_OID_ID_PKINIT_MS_EKU (&asn1_oid_id_pkinit_ms_eku)

/* OBJECT IDENTIFIER id-pkinit-ms-san ::= { iso(1) org(3) dod(6) internet(1) private(4) enterprise(1) microsoft(311) label-less(20) label-less(2) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkinit_ms_san;
#define ASN1_OID_ID_PKINIT_MS_SAN (&asn1_oid_id_pkinit_ms_san)

typedef heim_utf8_string MS_UPN_SAN;

#ifdef pa_pk_as_req
#undef pa_pk_as_req
#endif
enum { pa_pk_as_req = 16 };

#ifdef pa_pk_as_rep
#undef pa_pk_as_rep
#endif
enum { pa_pk_as_rep = 17 };

#ifdef td_trusted_certifiers
#undef td_trusted_certifiers
#endif
enum { td_trusted_certifiers = 104 };

#ifdef td_invalid_certificates
#undef td_invalid_certificates
#endif
enum { td_invalid_certificates = 105 };

#ifdef td_dh_parameters
#undef td_dh_parameters
#endif
enum { td_dh_parameters = 109 };

typedef heim_octet_string DHNonce;

typedef struct KDFAlgorithmId KDFAlgorithmId;

typedef struct TrustedCA TrustedCA;

typedef struct ExternalPrincipalIdentifier ExternalPrincipalIdentifier;

typedef struct ExternalPrincipalIdentifiers ExternalPrincipalIdentifiers;

typedef struct PA_PK_AS_REQ PA_PK_AS_REQ;

typedef struct PKAuthenticator PKAuthenticator;

typedef struct AuthPack AuthPack;

typedef ExternalPrincipalIdentifiers TD_TRUSTED_CERTIFIERS;

typedef ExternalPrincipalIdentifiers TD_INVALID_CERTIFICATES;

typedef struct AD_INITIAL_VERIFIED_CAS AD_INITIAL_VERIFIED_CAS;

typedef struct DHRepInfo DHRepInfo;

typedef struct PA_PK_AS_REP PA_PK_AS_REP;

typedef struct KDCDHKeyInfo KDCDHKeyInfo;

typedef struct ReplyKeyPack ReplyKeyPack;

typedef struct TD_DH_PARAMETERS TD_DH_PARAMETERS;

typedef struct PKAuthenticator_Win2k PKAuthenticator_Win2k;

typedef struct AuthPack_Win2k AuthPack_Win2k;

typedef struct TrustedCA_Win2k TrustedCA_Win2k;

typedef struct PA_PK_AS_REQ_Win2k PA_PK_AS_REQ_Win2k;

typedef struct PA_PK_AS_REP_Win2k PA_PK_AS_REP_Win2k;

typedef struct KDCDHKeyInfo_Win2k KDCDHKeyInfo_Win2k;

typedef struct ReplyKeyPack_Win2k ReplyKeyPack_Win2k;

typedef struct PA_PK_AS_REP_BTMM PA_PK_AS_REP_BTMM;

typedef struct PkinitSP80056AOtherInfo PkinitSP80056AOtherInfo;

typedef struct PkinitSuppPubInfo PkinitSuppPubInfo;

/*
MS-UPN-SAN ::= UTF8String
*/

enum { asn1_tag_length_MS_UPN_SAN = 1,
       asn1_tag_class_MS_UPN_SAN = 0,
       asn1_tag_tag_MS_UPN_SAN = 12 };
ASN1EXP int    ASN1CALL decode_MS_UPN_SAN(const unsigned char *, size_t, MS_UPN_SAN *, size_t *);
ASN1EXP int    ASN1CALL encode_MS_UPN_SAN(unsigned char *, size_t, const MS_UPN_SAN *, size_t *);
ASN1EXP size_t ASN1CALL length_MS_UPN_SAN(const MS_UPN_SAN *);
ASN1EXP int    ASN1CALL copy_MS_UPN_SAN  (const MS_UPN_SAN *, MS_UPN_SAN *);
ASN1EXP void   ASN1CALL free_MS_UPN_SAN  (MS_UPN_SAN *);
ASN1EXP char * ASN1CALL print_MS_UPN_SAN (const MS_UPN_SAN *, int);


/*
DHNonce ::= OCTET STRING
*/

enum { asn1_tag_length_DHNonce = 1,
       asn1_tag_class_DHNonce = 0,
       asn1_tag_tag_DHNonce = 4 };
ASN1EXP int    ASN1CALL decode_DHNonce(const unsigned char *, size_t, DHNonce *, size_t *);
ASN1EXP int    ASN1CALL encode_DHNonce(unsigned char *, size_t, const DHNonce *, size_t *);
ASN1EXP size_t ASN1CALL length_DHNonce(const DHNonce *);
ASN1EXP int    ASN1CALL copy_DHNonce  (const DHNonce *, DHNonce *);
ASN1EXP void   ASN1CALL free_DHNonce  (DHNonce *);
ASN1EXP char * ASN1CALL print_DHNonce (const DHNonce *, int);


/*
KDFAlgorithmId ::= SEQUENCE {
  kdf-id          [0]   OBJECT IDENTIFIER,
  ...,
}
*/

enum { asn1_tag_length_KDFAlgorithmId = 1,
       asn1_tag_class_KDFAlgorithmId = 0,
       asn1_tag_tag_KDFAlgorithmId = 16 };
struct KDFAlgorithmId {
  heim_oid kdf_id;
};

ASN1EXP int    ASN1CALL decode_KDFAlgorithmId(const unsigned char *, size_t, KDFAlgorithmId *, size_t *);
ASN1EXP int    ASN1CALL encode_KDFAlgorithmId(unsigned char *, size_t, const KDFAlgorithmId *, size_t *);
ASN1EXP size_t ASN1CALL length_KDFAlgorithmId(const KDFAlgorithmId *);
ASN1EXP int    ASN1CALL copy_KDFAlgorithmId  (const KDFAlgorithmId *, KDFAlgorithmId *);
ASN1EXP void   ASN1CALL free_KDFAlgorithmId  (KDFAlgorithmId *);
ASN1EXP char * ASN1CALL print_KDFAlgorithmId (const KDFAlgorithmId *, int);


/*
TrustedCA ::= SEQUENCE {
  caName                    [0] IMPLICIT OCTET STRING,
  certificateSerialNumber   [1] INTEGER OPTIONAL,
  subjectKeyIdentifier      [2] OCTET STRING OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_TrustedCA = 1,
       asn1_tag_class_TrustedCA = 0,
       asn1_tag_tag_TrustedCA = 16 };
struct TrustedCA {
  heim_octet_string caName;
  heim_integer *certificateSerialNumber;
  heim_octet_string *subjectKeyIdentifier;
};

ASN1EXP int    ASN1CALL decode_TrustedCA(const unsigned char *, size_t, TrustedCA *, size_t *);
ASN1EXP int    ASN1CALL encode_TrustedCA(unsigned char *, size_t, const TrustedCA *, size_t *);
ASN1EXP size_t ASN1CALL length_TrustedCA(const TrustedCA *);
ASN1EXP int    ASN1CALL copy_TrustedCA  (const TrustedCA *, TrustedCA *);
ASN1EXP void   ASN1CALL free_TrustedCA  (TrustedCA *);
ASN1EXP char * ASN1CALL print_TrustedCA (const TrustedCA *, int);


/*
ExternalPrincipalIdentifier ::= SEQUENCE {
  subjectName             [0] IMPLICIT OCTET STRING OPTIONAL,
  issuerAndSerialNumber   [1] IMPLICIT OCTET STRING OPTIONAL,
  subjectKeyIdentifier    [2] IMPLICIT OCTET STRING OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_ExternalPrincipalIdentifier = 1,
       asn1_tag_class_ExternalPrincipalIdentifier = 0,
       asn1_tag_tag_ExternalPrincipalIdentifier = 16 };
struct ExternalPrincipalIdentifier {
  heim_octet_string *subjectName;
  heim_octet_string *issuerAndSerialNumber;
  heim_octet_string *subjectKeyIdentifier;
};

ASN1EXP int    ASN1CALL decode_ExternalPrincipalIdentifier(const unsigned char *, size_t, ExternalPrincipalIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_ExternalPrincipalIdentifier(unsigned char *, size_t, const ExternalPrincipalIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_ExternalPrincipalIdentifier(const ExternalPrincipalIdentifier *);
ASN1EXP int    ASN1CALL copy_ExternalPrincipalIdentifier  (const ExternalPrincipalIdentifier *, ExternalPrincipalIdentifier *);
ASN1EXP void   ASN1CALL free_ExternalPrincipalIdentifier  (ExternalPrincipalIdentifier *);
ASN1EXP char * ASN1CALL print_ExternalPrincipalIdentifier (const ExternalPrincipalIdentifier *, int);


/*
ExternalPrincipalIdentifiers ::= SEQUENCE OF ExternalPrincipalIdentifier
*/

enum { asn1_tag_length_ExternalPrincipalIdentifiers = 1,
       asn1_tag_class_ExternalPrincipalIdentifiers = 0,
       asn1_tag_tag_ExternalPrincipalIdentifiers = 16 };
struct ExternalPrincipalIdentifiers {
  unsigned int len;
  ExternalPrincipalIdentifier *val;
};

ASN1EXP int    ASN1CALL decode_ExternalPrincipalIdentifiers(const unsigned char *, size_t, ExternalPrincipalIdentifiers *, size_t *);
ASN1EXP int    ASN1CALL encode_ExternalPrincipalIdentifiers(unsigned char *, size_t, const ExternalPrincipalIdentifiers *, size_t *);
ASN1EXP size_t ASN1CALL length_ExternalPrincipalIdentifiers(const ExternalPrincipalIdentifiers *);
ASN1EXP int    ASN1CALL copy_ExternalPrincipalIdentifiers  (const ExternalPrincipalIdentifiers *, ExternalPrincipalIdentifiers *);
ASN1EXP void   ASN1CALL free_ExternalPrincipalIdentifiers  (ExternalPrincipalIdentifiers *);
ASN1EXP char * ASN1CALL print_ExternalPrincipalIdentifiers (const ExternalPrincipalIdentifiers *, int);


/*
PA-PK-AS-REQ ::= SEQUENCE {
  signedAuthPack      [0] IMPLICIT OCTET STRING,
  trustedCertifiers   [1] ExternalPrincipalIdentifiers OPTIONAL,
  kdcPkId             [2] IMPLICIT OCTET STRING OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_PA_PK_AS_REQ = 1,
       asn1_tag_class_PA_PK_AS_REQ = 0,
       asn1_tag_tag_PA_PK_AS_REQ = 16 };
struct PA_PK_AS_REQ {
  heim_octet_string signedAuthPack;
  ExternalPrincipalIdentifiers *trustedCertifiers;
  heim_octet_string *kdcPkId;
};

ASN1EXP int    ASN1CALL decode_PA_PK_AS_REQ(const unsigned char *, size_t, PA_PK_AS_REQ *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_PK_AS_REQ(unsigned char *, size_t, const PA_PK_AS_REQ *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_PK_AS_REQ(const PA_PK_AS_REQ *);
ASN1EXP int    ASN1CALL copy_PA_PK_AS_REQ  (const PA_PK_AS_REQ *, PA_PK_AS_REQ *);
ASN1EXP void   ASN1CALL free_PA_PK_AS_REQ  (PA_PK_AS_REQ *);
ASN1EXP char * ASN1CALL print_PA_PK_AS_REQ (const PA_PK_AS_REQ *, int);


/*
PKAuthenticator ::= SEQUENCE {
  cusec            [0] INTEGER,
  ctime            [1] KerberosTime,
  nonce            [2] INTEGER (0..4294967295),
  paChecksum       [3] OCTET STRING OPTIONAL,
  freshnessToken   [4] OCTET STRING OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_PKAuthenticator = 1,
       asn1_tag_class_PKAuthenticator = 0,
       asn1_tag_tag_PKAuthenticator = 16 };
struct PKAuthenticator {
  heim_integer cusec;
  KerberosTime ctime;
  unsigned int nonce;
  heim_octet_string *paChecksum;
  heim_octet_string *freshnessToken;
};

ASN1EXP int    ASN1CALL decode_PKAuthenticator(const unsigned char *, size_t, PKAuthenticator *, size_t *);
ASN1EXP int    ASN1CALL encode_PKAuthenticator(unsigned char *, size_t, const PKAuthenticator *, size_t *);
ASN1EXP size_t ASN1CALL length_PKAuthenticator(const PKAuthenticator *);
ASN1EXP int    ASN1CALL copy_PKAuthenticator  (const PKAuthenticator *, PKAuthenticator *);
ASN1EXP void   ASN1CALL free_PKAuthenticator  (PKAuthenticator *);
ASN1EXP char * ASN1CALL print_PKAuthenticator (const PKAuthenticator *, int);


/*
AuthPack ::= SEQUENCE {
  pkAuthenticator     [0] PKAuthenticator,
  clientPublicValue   [1] SubjectPublicKeyInfo OPTIONAL,
  supportedCMSTypes   [2] SEQUENCE OF AlgorithmIdentifier OPTIONAL,
  clientDHNonce       [3] DHNonce OPTIONAL,
  ...,
  supportedKDFs       [4] SEQUENCE OF KDFAlgorithmId OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_AuthPack = 1,
       asn1_tag_class_AuthPack = 0,
       asn1_tag_tag_AuthPack = 16 };
struct AuthPack {
  PKAuthenticator pkAuthenticator;
  SubjectPublicKeyInfo *clientPublicValue;
  struct AuthPack_supportedCMSTypes {
    unsigned int len;
    AlgorithmIdentifier *val;
  } *supportedCMSTypes;
  DHNonce *clientDHNonce;
  struct AuthPack_supportedKDFs {
    unsigned int len;
    KDFAlgorithmId *val;
  } *supportedKDFs;
};

ASN1EXP int    ASN1CALL decode_AuthPack(const unsigned char *, size_t, AuthPack *, size_t *);
ASN1EXP int    ASN1CALL encode_AuthPack(unsigned char *, size_t, const AuthPack *, size_t *);
ASN1EXP size_t ASN1CALL length_AuthPack(const AuthPack *);
ASN1EXP int    ASN1CALL copy_AuthPack  (const AuthPack *, AuthPack *);
ASN1EXP void   ASN1CALL free_AuthPack  (AuthPack *);
ASN1EXP char * ASN1CALL print_AuthPack (const AuthPack *, int);


/*
TD-TRUSTED-CERTIFIERS ::= ExternalPrincipalIdentifiers
*/

enum { asn1_tag_length_TD_TRUSTED_CERTIFIERS = 1,
       asn1_tag_class_TD_TRUSTED_CERTIFIERS = 0,
       asn1_tag_tag_TD_TRUSTED_CERTIFIERS = 0 };

ASN1EXP int    ASN1CALL decode_TD_TRUSTED_CERTIFIERS(const unsigned char *, size_t, TD_TRUSTED_CERTIFIERS *, size_t *);
ASN1EXP int    ASN1CALL encode_TD_TRUSTED_CERTIFIERS(unsigned char *, size_t, const TD_TRUSTED_CERTIFIERS *, size_t *);
ASN1EXP size_t ASN1CALL length_TD_TRUSTED_CERTIFIERS(const TD_TRUSTED_CERTIFIERS *);
ASN1EXP int    ASN1CALL copy_TD_TRUSTED_CERTIFIERS  (const TD_TRUSTED_CERTIFIERS *, TD_TRUSTED_CERTIFIERS *);
ASN1EXP void   ASN1CALL free_TD_TRUSTED_CERTIFIERS  (TD_TRUSTED_CERTIFIERS *);
ASN1EXP char * ASN1CALL print_TD_TRUSTED_CERTIFIERS (const TD_TRUSTED_CERTIFIERS *, int);


/*
TD-INVALID-CERTIFICATES ::= ExternalPrincipalIdentifiers
*/

enum { asn1_tag_length_TD_INVALID_CERTIFICATES = 1,
       asn1_tag_class_TD_INVALID_CERTIFICATES = 0,
       asn1_tag_tag_TD_INVALID_CERTIFICATES = 0 };

ASN1EXP int    ASN1CALL decode_TD_INVALID_CERTIFICATES(const unsigned char *, size_t, TD_INVALID_CERTIFICATES *, size_t *);
ASN1EXP int    ASN1CALL encode_TD_INVALID_CERTIFICATES(unsigned char *, size_t, const TD_INVALID_CERTIFICATES *, size_t *);
ASN1EXP size_t ASN1CALL length_TD_INVALID_CERTIFICATES(const TD_INVALID_CERTIFICATES *);
ASN1EXP int    ASN1CALL copy_TD_INVALID_CERTIFICATES  (const TD_INVALID_CERTIFICATES *, TD_INVALID_CERTIFICATES *);
ASN1EXP void   ASN1CALL free_TD_INVALID_CERTIFICATES  (TD_INVALID_CERTIFICATES *);
ASN1EXP char * ASN1CALL print_TD_INVALID_CERTIFICATES (const TD_INVALID_CERTIFICATES *, int);


/*
AD-INITIAL-VERIFIED-CAS ::= SEQUENCE OF ExternalPrincipalIdentifier
*/

enum { asn1_tag_length_AD_INITIAL_VERIFIED_CAS = 1,
       asn1_tag_class_AD_INITIAL_VERIFIED_CAS = 0,
       asn1_tag_tag_AD_INITIAL_VERIFIED_CAS = 16 };
struct AD_INITIAL_VERIFIED_CAS {
  unsigned int len;
  ExternalPrincipalIdentifier *val;
};

ASN1EXP int    ASN1CALL decode_AD_INITIAL_VERIFIED_CAS(const unsigned char *, size_t, AD_INITIAL_VERIFIED_CAS *, size_t *);
ASN1EXP int    ASN1CALL encode_AD_INITIAL_VERIFIED_CAS(unsigned char *, size_t, const AD_INITIAL_VERIFIED_CAS *, size_t *);
ASN1EXP size_t ASN1CALL length_AD_INITIAL_VERIFIED_CAS(const AD_INITIAL_VERIFIED_CAS *);
ASN1EXP int    ASN1CALL copy_AD_INITIAL_VERIFIED_CAS  (const AD_INITIAL_VERIFIED_CAS *, AD_INITIAL_VERIFIED_CAS *);
ASN1EXP void   ASN1CALL free_AD_INITIAL_VERIFIED_CAS  (AD_INITIAL_VERIFIED_CAS *);
ASN1EXP char * ASN1CALL print_AD_INITIAL_VERIFIED_CAS (const AD_INITIAL_VERIFIED_CAS *, int);


/*
DHRepInfo ::= SEQUENCE {
  dhSignedData    [0] IMPLICIT OCTET STRING,
  serverDHNonce   [1] DHNonce OPTIONAL,
  ...,
  kdf             [2] KDFAlgorithmId OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_DHRepInfo = 1,
       asn1_tag_class_DHRepInfo = 0,
       asn1_tag_tag_DHRepInfo = 16 };
struct DHRepInfo {
  heim_octet_string dhSignedData;
  DHNonce *serverDHNonce;
  KDFAlgorithmId *kdf;
};

ASN1EXP int    ASN1CALL decode_DHRepInfo(const unsigned char *, size_t, DHRepInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_DHRepInfo(unsigned char *, size_t, const DHRepInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_DHRepInfo(const DHRepInfo *);
ASN1EXP int    ASN1CALL copy_DHRepInfo  (const DHRepInfo *, DHRepInfo *);
ASN1EXP void   ASN1CALL free_DHRepInfo  (DHRepInfo *);
ASN1EXP char * ASN1CALL print_DHRepInfo (const DHRepInfo *, int);


/*
PA-PK-AS-REP ::= CHOICE {
  dhInfo          [0] DHRepInfo,
  encKeyPack      [1] IMPLICIT OCTET STRING,
  ...,
}
*/

enum { asn1_tag_length_PA_PK_AS_REP = 1,
       asn1_tag_class_PA_PK_AS_REP = 0,
       asn1_tag_tag_PA_PK_AS_REP = 0 };
struct PA_PK_AS_REP {
  enum PA_PK_AS_REP_enum {
    choice_PA_PK_AS_REP_asn1_ellipsis = 0,
    choice_PA_PK_AS_REP_dhInfo,
    choice_PA_PK_AS_REP_encKeyPack
    /* ... */
  } element;
  union {
    DHRepInfo dhInfo;
    heim_octet_string encKeyPack;
    heim_octet_string asn1_ellipsis;
  } u;
};

ASN1EXP int    ASN1CALL decode_PA_PK_AS_REP(const unsigned char *, size_t, PA_PK_AS_REP *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_PK_AS_REP(unsigned char *, size_t, const PA_PK_AS_REP *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_PK_AS_REP(const PA_PK_AS_REP *);
ASN1EXP int    ASN1CALL copy_PA_PK_AS_REP  (const PA_PK_AS_REP *, PA_PK_AS_REP *);
ASN1EXP void   ASN1CALL free_PA_PK_AS_REP  (PA_PK_AS_REP *);
ASN1EXP char * ASN1CALL print_PA_PK_AS_REP (const PA_PK_AS_REP *, int);


/*
KDCDHKeyInfo ::= SEQUENCE {
  subjectPublicKey   [0]   BIT STRING {
  },
  nonce              [1] INTEGER (0..4294967295),
  dhKeyExpiration    [2] KerberosTime OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_KDCDHKeyInfo = 1,
       asn1_tag_class_KDCDHKeyInfo = 0,
       asn1_tag_tag_KDCDHKeyInfo = 16 };
struct KDCDHKeyInfo {
  heim_bit_string subjectPublicKey;
  unsigned int nonce;
  KerberosTime *dhKeyExpiration;
};

ASN1EXP int    ASN1CALL decode_KDCDHKeyInfo(const unsigned char *, size_t, KDCDHKeyInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_KDCDHKeyInfo(unsigned char *, size_t, const KDCDHKeyInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_KDCDHKeyInfo(const KDCDHKeyInfo *);
ASN1EXP int    ASN1CALL copy_KDCDHKeyInfo  (const KDCDHKeyInfo *, KDCDHKeyInfo *);
ASN1EXP void   ASN1CALL free_KDCDHKeyInfo  (KDCDHKeyInfo *);
ASN1EXP char * ASN1CALL print_KDCDHKeyInfo (const KDCDHKeyInfo *, int);


/*
ReplyKeyPack ::= SEQUENCE {
  replyKey        [0] EncryptionKey,
  asChecksum      [1] Checksum,
  ...,
}
*/

enum { asn1_tag_length_ReplyKeyPack = 1,
       asn1_tag_class_ReplyKeyPack = 0,
       asn1_tag_tag_ReplyKeyPack = 16 };
struct ReplyKeyPack {
  EncryptionKey replyKey;
  Checksum asChecksum;
};

ASN1EXP int    ASN1CALL decode_ReplyKeyPack(const unsigned char *, size_t, ReplyKeyPack *, size_t *);
ASN1EXP int    ASN1CALL encode_ReplyKeyPack(unsigned char *, size_t, const ReplyKeyPack *, size_t *);
ASN1EXP size_t ASN1CALL length_ReplyKeyPack(const ReplyKeyPack *);
ASN1EXP int    ASN1CALL copy_ReplyKeyPack  (const ReplyKeyPack *, ReplyKeyPack *);
ASN1EXP void   ASN1CALL free_ReplyKeyPack  (ReplyKeyPack *);
ASN1EXP char * ASN1CALL print_ReplyKeyPack (const ReplyKeyPack *, int);


/*
TD-DH-PARAMETERS ::= SEQUENCE OF AlgorithmIdentifier
*/

enum { asn1_tag_length_TD_DH_PARAMETERS = 1,
       asn1_tag_class_TD_DH_PARAMETERS = 0,
       asn1_tag_tag_TD_DH_PARAMETERS = 16 };
struct TD_DH_PARAMETERS {
  unsigned int len;
  AlgorithmIdentifier *val;
};

ASN1EXP int    ASN1CALL decode_TD_DH_PARAMETERS(const unsigned char *, size_t, TD_DH_PARAMETERS *, size_t *);
ASN1EXP int    ASN1CALL encode_TD_DH_PARAMETERS(unsigned char *, size_t, const TD_DH_PARAMETERS *, size_t *);
ASN1EXP size_t ASN1CALL length_TD_DH_PARAMETERS(const TD_DH_PARAMETERS *);
ASN1EXP int    ASN1CALL copy_TD_DH_PARAMETERS  (const TD_DH_PARAMETERS *, TD_DH_PARAMETERS *);
ASN1EXP void   ASN1CALL free_TD_DH_PARAMETERS  (TD_DH_PARAMETERS *);
ASN1EXP char * ASN1CALL print_TD_DH_PARAMETERS (const TD_DH_PARAMETERS *, int);


/*
PKAuthenticator-Win2k ::= SEQUENCE {
  kdcName         [0] PrincipalName,
  kdcRealm        [1] Realm,
  cusec           [2] INTEGER (0..4294967295),
  ctime           [3] KerberosTime,
  nonce           [4] INTEGER (-2147483648..2147483647),
}
*/

enum { asn1_tag_length_PKAuthenticator_Win2k = 1,
       asn1_tag_class_PKAuthenticator_Win2k = 0,
       asn1_tag_tag_PKAuthenticator_Win2k = 16 };
struct PKAuthenticator_Win2k {
  PrincipalName kdcName;
  Realm kdcRealm;
  unsigned int cusec;
  KerberosTime ctime;
  int nonce;
};

ASN1EXP int    ASN1CALL decode_PKAuthenticator_Win2k(const unsigned char *, size_t, PKAuthenticator_Win2k *, size_t *);
ASN1EXP int    ASN1CALL encode_PKAuthenticator_Win2k(unsigned char *, size_t, const PKAuthenticator_Win2k *, size_t *);
ASN1EXP size_t ASN1CALL length_PKAuthenticator_Win2k(const PKAuthenticator_Win2k *);
ASN1EXP int    ASN1CALL copy_PKAuthenticator_Win2k  (const PKAuthenticator_Win2k *, PKAuthenticator_Win2k *);
ASN1EXP void   ASN1CALL free_PKAuthenticator_Win2k  (PKAuthenticator_Win2k *);
ASN1EXP char * ASN1CALL print_PKAuthenticator_Win2k (const PKAuthenticator_Win2k *, int);


/*
AuthPack-Win2k ::= SEQUENCE {
  pkAuthenticator     [0] PKAuthenticator-Win2k,
  clientPublicValue   [1] SubjectPublicKeyInfo OPTIONAL,
}
*/

enum { asn1_tag_length_AuthPack_Win2k = 1,
       asn1_tag_class_AuthPack_Win2k = 0,
       asn1_tag_tag_AuthPack_Win2k = 16 };
struct AuthPack_Win2k {
  PKAuthenticator_Win2k pkAuthenticator;
  SubjectPublicKeyInfo *clientPublicValue;
};

ASN1EXP int    ASN1CALL decode_AuthPack_Win2k(const unsigned char *, size_t, AuthPack_Win2k *, size_t *);
ASN1EXP int    ASN1CALL encode_AuthPack_Win2k(unsigned char *, size_t, const AuthPack_Win2k *, size_t *);
ASN1EXP size_t ASN1CALL length_AuthPack_Win2k(const AuthPack_Win2k *);
ASN1EXP int    ASN1CALL copy_AuthPack_Win2k  (const AuthPack_Win2k *, AuthPack_Win2k *);
ASN1EXP void   ASN1CALL free_AuthPack_Win2k  (AuthPack_Win2k *);
ASN1EXP char * ASN1CALL print_AuthPack_Win2k (const AuthPack_Win2k *, int);


/*
TrustedCA-Win2k ::= CHOICE {
  caName            [1] HEIM_ANY,
  issuerAndSerial   [2] IssuerAndSerialNumber,
}
*/

enum { asn1_tag_length_TrustedCA_Win2k = 1,
       asn1_tag_class_TrustedCA_Win2k = 0,
       asn1_tag_tag_TrustedCA_Win2k = 0 };
struct TrustedCA_Win2k {
  enum TrustedCA_Win2k_enum {
    choice_TrustedCA_Win2k_caName = 1,
    choice_TrustedCA_Win2k_issuerAndSerial
  } element;
  union {
    HEIM_ANY caName;
    IssuerAndSerialNumber issuerAndSerial;
  } u;
};

ASN1EXP int    ASN1CALL decode_TrustedCA_Win2k(const unsigned char *, size_t, TrustedCA_Win2k *, size_t *);
ASN1EXP int    ASN1CALL encode_TrustedCA_Win2k(unsigned char *, size_t, const TrustedCA_Win2k *, size_t *);
ASN1EXP size_t ASN1CALL length_TrustedCA_Win2k(const TrustedCA_Win2k *);
ASN1EXP int    ASN1CALL copy_TrustedCA_Win2k  (const TrustedCA_Win2k *, TrustedCA_Win2k *);
ASN1EXP void   ASN1CALL free_TrustedCA_Win2k  (TrustedCA_Win2k *);
ASN1EXP char * ASN1CALL print_TrustedCA_Win2k (const TrustedCA_Win2k *, int);


/*
PA-PK-AS-REQ-Win2k ::= SEQUENCE {
  signed-auth-pack     [0] IMPLICIT OCTET STRING,
  trusted-certifiers   [2] SEQUENCE OF TrustedCA-Win2k OPTIONAL,
  kdc-cert             [3] IMPLICIT OCTET STRING OPTIONAL,
  encryption-cert      [4] IMPLICIT OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_PA_PK_AS_REQ_Win2k = 1,
       asn1_tag_class_PA_PK_AS_REQ_Win2k = 0,
       asn1_tag_tag_PA_PK_AS_REQ_Win2k = 16 };
struct PA_PK_AS_REQ_Win2k {
  heim_octet_string signed_auth_pack;
  struct PA_PK_AS_REQ_Win2k_trusted_certifiers {
    unsigned int len;
    TrustedCA_Win2k *val;
  } *trusted_certifiers;
  heim_octet_string *kdc_cert;
  heim_octet_string *encryption_cert;
};

ASN1EXP int    ASN1CALL decode_PA_PK_AS_REQ_Win2k(const unsigned char *, size_t, PA_PK_AS_REQ_Win2k *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_PK_AS_REQ_Win2k(unsigned char *, size_t, const PA_PK_AS_REQ_Win2k *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_PK_AS_REQ_Win2k(const PA_PK_AS_REQ_Win2k *);
ASN1EXP int    ASN1CALL copy_PA_PK_AS_REQ_Win2k  (const PA_PK_AS_REQ_Win2k *, PA_PK_AS_REQ_Win2k *);
ASN1EXP void   ASN1CALL free_PA_PK_AS_REQ_Win2k  (PA_PK_AS_REQ_Win2k *);
ASN1EXP char * ASN1CALL print_PA_PK_AS_REQ_Win2k (const PA_PK_AS_REQ_Win2k *, int);


/*
PA-PK-AS-REP-Win2k ::= CHOICE {
  dhSignedData    [0] IMPLICIT OCTET STRING,
  encKeyPack      [1] IMPLICIT OCTET STRING,
}
*/

enum { asn1_tag_length_PA_PK_AS_REP_Win2k = 1,
       asn1_tag_class_PA_PK_AS_REP_Win2k = 0,
       asn1_tag_tag_PA_PK_AS_REP_Win2k = 0 };
struct PA_PK_AS_REP_Win2k {
  enum PA_PK_AS_REP_Win2k_enum {
    choice_PA_PK_AS_REP_Win2k_dhSignedData = 1,
    choice_PA_PK_AS_REP_Win2k_encKeyPack
  } element;
  union {
    heim_octet_string dhSignedData;
    heim_octet_string encKeyPack;
  } u;
};

ASN1EXP int    ASN1CALL decode_PA_PK_AS_REP_Win2k(const unsigned char *, size_t, PA_PK_AS_REP_Win2k *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_PK_AS_REP_Win2k(unsigned char *, size_t, const PA_PK_AS_REP_Win2k *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_PK_AS_REP_Win2k(const PA_PK_AS_REP_Win2k *);
ASN1EXP int    ASN1CALL copy_PA_PK_AS_REP_Win2k  (const PA_PK_AS_REP_Win2k *, PA_PK_AS_REP_Win2k *);
ASN1EXP void   ASN1CALL free_PA_PK_AS_REP_Win2k  (PA_PK_AS_REP_Win2k *);
ASN1EXP char * ASN1CALL print_PA_PK_AS_REP_Win2k (const PA_PK_AS_REP_Win2k *, int);


/*
KDCDHKeyInfo-Win2k ::= SEQUENCE {
  nonce              [0] INTEGER (-2147483648..2147483647),
  subjectPublicKey   [2]   BIT STRING {
  },
}
*/

enum { asn1_tag_length_KDCDHKeyInfo_Win2k = 1,
       asn1_tag_class_KDCDHKeyInfo_Win2k = 0,
       asn1_tag_tag_KDCDHKeyInfo_Win2k = 16 };
struct KDCDHKeyInfo_Win2k {
  int nonce;
  heim_bit_string subjectPublicKey;
};

ASN1EXP int    ASN1CALL decode_KDCDHKeyInfo_Win2k(const unsigned char *, size_t, KDCDHKeyInfo_Win2k *, size_t *);
ASN1EXP int    ASN1CALL encode_KDCDHKeyInfo_Win2k(unsigned char *, size_t, const KDCDHKeyInfo_Win2k *, size_t *);
ASN1EXP size_t ASN1CALL length_KDCDHKeyInfo_Win2k(const KDCDHKeyInfo_Win2k *);
ASN1EXP int    ASN1CALL copy_KDCDHKeyInfo_Win2k  (const KDCDHKeyInfo_Win2k *, KDCDHKeyInfo_Win2k *);
ASN1EXP void   ASN1CALL free_KDCDHKeyInfo_Win2k  (KDCDHKeyInfo_Win2k *);
ASN1EXP char * ASN1CALL print_KDCDHKeyInfo_Win2k (const KDCDHKeyInfo_Win2k *, int);


/*
ReplyKeyPack-Win2k ::= SEQUENCE {
  replyKey        [0] EncryptionKey,
  nonce           [1] INTEGER (-2147483648..2147483647),
  ...,
}
*/

enum { asn1_tag_length_ReplyKeyPack_Win2k = 1,
       asn1_tag_class_ReplyKeyPack_Win2k = 0,
       asn1_tag_tag_ReplyKeyPack_Win2k = 16 };
struct ReplyKeyPack_Win2k {
  EncryptionKey replyKey;
  int nonce;
};

ASN1EXP int    ASN1CALL decode_ReplyKeyPack_Win2k(const unsigned char *, size_t, ReplyKeyPack_Win2k *, size_t *);
ASN1EXP int    ASN1CALL encode_ReplyKeyPack_Win2k(unsigned char *, size_t, const ReplyKeyPack_Win2k *, size_t *);
ASN1EXP size_t ASN1CALL length_ReplyKeyPack_Win2k(const ReplyKeyPack_Win2k *);
ASN1EXP int    ASN1CALL copy_ReplyKeyPack_Win2k  (const ReplyKeyPack_Win2k *, ReplyKeyPack_Win2k *);
ASN1EXP void   ASN1CALL free_ReplyKeyPack_Win2k  (ReplyKeyPack_Win2k *);
ASN1EXP char * ASN1CALL print_ReplyKeyPack_Win2k (const ReplyKeyPack_Win2k *, int);


/*
PA-PK-AS-REP-BTMM ::= SEQUENCE {
  dhSignedData    [0] HEIM_ANY OPTIONAL,
  encKeyPack      [1] HEIM_ANY OPTIONAL,
}
*/

enum { asn1_tag_length_PA_PK_AS_REP_BTMM = 1,
       asn1_tag_class_PA_PK_AS_REP_BTMM = 0,
       asn1_tag_tag_PA_PK_AS_REP_BTMM = 16 };
struct PA_PK_AS_REP_BTMM {
  HEIM_ANY *dhSignedData;
  HEIM_ANY *encKeyPack;
};

ASN1EXP int    ASN1CALL decode_PA_PK_AS_REP_BTMM(const unsigned char *, size_t, PA_PK_AS_REP_BTMM *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_PK_AS_REP_BTMM(unsigned char *, size_t, const PA_PK_AS_REP_BTMM *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_PK_AS_REP_BTMM(const PA_PK_AS_REP_BTMM *);
ASN1EXP int    ASN1CALL copy_PA_PK_AS_REP_BTMM  (const PA_PK_AS_REP_BTMM *, PA_PK_AS_REP_BTMM *);
ASN1EXP void   ASN1CALL free_PA_PK_AS_REP_BTMM  (PA_PK_AS_REP_BTMM *);
ASN1EXP char * ASN1CALL print_PA_PK_AS_REP_BTMM (const PA_PK_AS_REP_BTMM *, int);


/*
PkinitSP80056AOtherInfo ::= SEQUENCE {
  algorithmID     AlgorithmIdentifier,
  partyUInfo      [0] OCTET STRING,
  partyVInfo      [1] OCTET STRING,
  suppPubInfo     [2] OCTET STRING OPTIONAL,
  suppPrivInfo    [3] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_PkinitSP80056AOtherInfo = 1,
       asn1_tag_class_PkinitSP80056AOtherInfo = 0,
       asn1_tag_tag_PkinitSP80056AOtherInfo = 16 };
struct PkinitSP80056AOtherInfo {
  AlgorithmIdentifier algorithmID;
  heim_octet_string partyUInfo;
  heim_octet_string partyVInfo;
  heim_octet_string *suppPubInfo;
  heim_octet_string *suppPrivInfo;
};

ASN1EXP int    ASN1CALL decode_PkinitSP80056AOtherInfo(const unsigned char *, size_t, PkinitSP80056AOtherInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_PkinitSP80056AOtherInfo(unsigned char *, size_t, const PkinitSP80056AOtherInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_PkinitSP80056AOtherInfo(const PkinitSP80056AOtherInfo *);
ASN1EXP int    ASN1CALL copy_PkinitSP80056AOtherInfo  (const PkinitSP80056AOtherInfo *, PkinitSP80056AOtherInfo *);
ASN1EXP void   ASN1CALL free_PkinitSP80056AOtherInfo  (PkinitSP80056AOtherInfo *);
ASN1EXP char * ASN1CALL print_PkinitSP80056AOtherInfo (const PkinitSP80056AOtherInfo *, int);


/*
PkinitSuppPubInfo ::= SEQUENCE {
  enctype         [0] INTEGER (-2147483648..2147483647),
  as-REQ          [1] OCTET STRING,
  pk-as-rep       [2] OCTET STRING,
  ticket          [3] Ticket,
  ...,
}
*/

enum { asn1_tag_length_PkinitSuppPubInfo = 1,
       asn1_tag_class_PkinitSuppPubInfo = 0,
       asn1_tag_tag_PkinitSuppPubInfo = 16 };
struct PkinitSuppPubInfo {
  int enctype;
  heim_octet_string as_REQ;
  heim_octet_string pk_as_rep;
  Ticket ticket;
};

ASN1EXP int    ASN1CALL decode_PkinitSuppPubInfo(const unsigned char *, size_t, PkinitSuppPubInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_PkinitSuppPubInfo(unsigned char *, size_t, const PkinitSuppPubInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_PkinitSuppPubInfo(const PkinitSuppPubInfo *);
ASN1EXP int    ASN1CALL copy_PkinitSuppPubInfo  (const PkinitSuppPubInfo *, PkinitSuppPubInfo *);
ASN1EXP void   ASN1CALL free_PkinitSuppPubInfo  (PkinitSuppPubInfo *);
ASN1EXP char * ASN1CALL print_PkinitSuppPubInfo (const PkinitSuppPubInfo *, int);


#endif /* __pkinit_asn1_h__ */
