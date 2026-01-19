/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/rfc2459.asn1 */
/* Do not edit */

#ifndef __rfc2459_asn1_h__
#define __rfc2459_asn1_h__

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
#include <krb5_asn1.h>
typedef enum Version {
  rfc3280_version_1 = 0,
  rfc3280_version_2 = 1,
  rfc3280_version_3 = 2
} Version;

/* OBJECT IDENTIFIER id-pkcs-1 ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs_1;
#define ASN1_OID_ID_PKCS_1 (&asn1_oid_id_pkcs_1)

/* OBJECT IDENTIFIER id-pkcs1-rsaEncryption ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(1) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs1_rsaEncryption;
#define ASN1_OID_ID_PKCS1_RSAENCRYPTION (&asn1_oid_id_pkcs1_rsaEncryption)

/* OBJECT IDENTIFIER id-pkcs1-md2WithRSAEncryption ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(1) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs1_md2WithRSAEncryption;
#define ASN1_OID_ID_PKCS1_MD2WITHRSAENCRYPTION (&asn1_oid_id_pkcs1_md2WithRSAEncryption)

/* OBJECT IDENTIFIER id-pkcs1-md5WithRSAEncryption ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(1) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs1_md5WithRSAEncryption;
#define ASN1_OID_ID_PKCS1_MD5WITHRSAENCRYPTION (&asn1_oid_id_pkcs1_md5WithRSAEncryption)

/* OBJECT IDENTIFIER id-pkcs1-sha1WithRSAEncryption ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(1) label-less(5) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs1_sha1WithRSAEncryption;
#define ASN1_OID_ID_PKCS1_SHA1WITHRSAENCRYPTION (&asn1_oid_id_pkcs1_sha1WithRSAEncryption)

/* OBJECT IDENTIFIER id-pkcs1-sha256WithRSAEncryption ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(1) label-less(11) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs1_sha256WithRSAEncryption;
#define ASN1_OID_ID_PKCS1_SHA256WITHRSAENCRYPTION (&asn1_oid_id_pkcs1_sha256WithRSAEncryption)

/* OBJECT IDENTIFIER id-pkcs1-sha384WithRSAEncryption ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(1) label-less(12) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs1_sha384WithRSAEncryption;
#define ASN1_OID_ID_PKCS1_SHA384WITHRSAENCRYPTION (&asn1_oid_id_pkcs1_sha384WithRSAEncryption)

/* OBJECT IDENTIFIER id-pkcs1-sha512WithRSAEncryption ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(1) label-less(13) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs1_sha512WithRSAEncryption;
#define ASN1_OID_ID_PKCS1_SHA512WITHRSAENCRYPTION (&asn1_oid_id_pkcs1_sha512WithRSAEncryption)

/* OBJECT IDENTIFIER id-heim-rsa-pkcs1-x509 ::= { label-less(1) label-less(2) label-less(752) label-less(43) label-less(16) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_heim_rsa_pkcs1_x509;
#define ASN1_OID_ID_HEIM_RSA_PKCS1_X509 (&asn1_oid_id_heim_rsa_pkcs1_x509)

/* OBJECT IDENTIFIER id-pkcs-2 ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs_2;
#define ASN1_OID_ID_PKCS_2 (&asn1_oid_id_pkcs_2)

/* OBJECT IDENTIFIER id-pkcs2-md2 ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(2) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs2_md2;
#define ASN1_OID_ID_PKCS2_MD2 (&asn1_oid_id_pkcs2_md2)

/* OBJECT IDENTIFIER id-pkcs2-md4 ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(2) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs2_md4;
#define ASN1_OID_ID_PKCS2_MD4 (&asn1_oid_id_pkcs2_md4)

/* OBJECT IDENTIFIER id-pkcs2-md5 ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(2) label-less(5) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs2_md5;
#define ASN1_OID_ID_PKCS2_MD5 (&asn1_oid_id_pkcs2_md5)

/* OBJECT IDENTIFIER id-rsa-digestAlgorithm ::= { iso(1) member-body(2) us(840) rsadsi(113549) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_rsa_digestAlgorithm;
#define ASN1_OID_ID_RSA_DIGESTALGORITHM (&asn1_oid_id_rsa_digestAlgorithm)

/* OBJECT IDENTIFIER id-rsa-digest-md2 ::= { iso(1) member-body(2) us(840) rsadsi(113549) label-less(2) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_rsa_digest_md2;
#define ASN1_OID_ID_RSA_DIGEST_MD2 (&asn1_oid_id_rsa_digest_md2)

/* OBJECT IDENTIFIER id-rsa-digest-md4 ::= { iso(1) member-body(2) us(840) rsadsi(113549) label-less(2) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_rsa_digest_md4;
#define ASN1_OID_ID_RSA_DIGEST_MD4 (&asn1_oid_id_rsa_digest_md4)

/* OBJECT IDENTIFIER id-rsa-digest-md5 ::= { iso(1) member-body(2) us(840) rsadsi(113549) label-less(2) label-less(5) } */
extern ASN1EXP const heim_oid asn1_oid_id_rsa_digest_md5;
#define ASN1_OID_ID_RSA_DIGEST_MD5 (&asn1_oid_id_rsa_digest_md5)

/* OBJECT IDENTIFIER id-pkcs-3 ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs_3;
#define ASN1_OID_ID_PKCS_3 (&asn1_oid_id_pkcs_3)

/* OBJECT IDENTIFIER id-pkcs3-rc2-cbc ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(3) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs3_rc2_cbc;
#define ASN1_OID_ID_PKCS3_RC2_CBC (&asn1_oid_id_pkcs3_rc2_cbc)

/* OBJECT IDENTIFIER id-pkcs3-rc4 ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(3) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs3_rc4;
#define ASN1_OID_ID_PKCS3_RC4 (&asn1_oid_id_pkcs3_rc4)

/* OBJECT IDENTIFIER id-pkcs3-des-ede3-cbc ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(3) label-less(7) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkcs3_des_ede3_cbc;
#define ASN1_OID_ID_PKCS3_DES_EDE3_CBC (&asn1_oid_id_pkcs3_des_ede3_cbc)

/* OBJECT IDENTIFIER id-rsadsi-encalg ::= { iso(1) member-body(2) us(840) rsadsi(113549) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_rsadsi_encalg;
#define ASN1_OID_ID_RSADSI_ENCALG (&asn1_oid_id_rsadsi_encalg)

/* OBJECT IDENTIFIER id-rsadsi-rc2-cbc ::= { iso(1) member-body(2) us(840) rsadsi(113549) label-less(3) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_rsadsi_rc2_cbc;
#define ASN1_OID_ID_RSADSI_RC2_CBC (&asn1_oid_id_rsadsi_rc2_cbc)

/* OBJECT IDENTIFIER id-rsadsi-des-ede3-cbc ::= { iso(1) member-body(2) us(840) rsadsi(113549) label-less(3) label-less(7) } */
extern ASN1EXP const heim_oid asn1_oid_id_rsadsi_des_ede3_cbc;
#define ASN1_OID_ID_RSADSI_DES_EDE3_CBC (&asn1_oid_id_rsadsi_des_ede3_cbc)

/* OBJECT IDENTIFIER id-secsig-sha-1 ::= { iso(1) identified-organization(3) oiw(14) secsig(3) algorithm(2) label-less(26) } */
extern ASN1EXP const heim_oid asn1_oid_id_secsig_sha_1;
#define ASN1_OID_ID_SECSIG_SHA_1 (&asn1_oid_id_secsig_sha_1)

/* OBJECT IDENTIFIER id-secsig-sha-1WithRSAEncryption ::= { iso(1) identified-organization(3) oiw(14) secsig(3) algorithm(2) label-less(29) } */
extern ASN1EXP const heim_oid asn1_oid_id_secsig_sha_1WithRSAEncryption;
#define ASN1_OID_ID_SECSIG_SHA_1WITHRSAENCRYPTION (&asn1_oid_id_secsig_sha_1WithRSAEncryption)

/* OBJECT IDENTIFIER id-nistAlgorithm ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) gov(101) csor(3) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_nistAlgorithm;
#define ASN1_OID_ID_NISTALGORITHM (&asn1_oid_id_nistAlgorithm)

/* OBJECT IDENTIFIER id-nist-aes-algs ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) gov(101) csor(3) label-less(4) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_nist_aes_algs;
#define ASN1_OID_ID_NIST_AES_ALGS (&asn1_oid_id_nist_aes_algs)

/* OBJECT IDENTIFIER id-aes-128-cbc ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) gov(101) csor(3) label-less(4) label-less(1) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_aes_128_cbc;
#define ASN1_OID_ID_AES_128_CBC (&asn1_oid_id_aes_128_cbc)

/* OBJECT IDENTIFIER id-aes-192-cbc ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) gov(101) csor(3) label-less(4) label-less(1) label-less(22) } */
extern ASN1EXP const heim_oid asn1_oid_id_aes_192_cbc;
#define ASN1_OID_ID_AES_192_CBC (&asn1_oid_id_aes_192_cbc)

/* OBJECT IDENTIFIER id-aes-256-cbc ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) gov(101) csor(3) label-less(4) label-less(1) label-less(42) } */
extern ASN1EXP const heim_oid asn1_oid_id_aes_256_cbc;
#define ASN1_OID_ID_AES_256_CBC (&asn1_oid_id_aes_256_cbc)

/* OBJECT IDENTIFIER id-nist-sha-algs ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) gov(101) csor(3) label-less(4) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_nist_sha_algs;
#define ASN1_OID_ID_NIST_SHA_ALGS (&asn1_oid_id_nist_sha_algs)

/* OBJECT IDENTIFIER id-sha256 ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) gov(101) csor(3) label-less(4) label-less(2) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_sha256;
#define ASN1_OID_ID_SHA256 (&asn1_oid_id_sha256)

/* OBJECT IDENTIFIER id-sha224 ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) gov(101) csor(3) label-less(4) label-less(2) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_sha224;
#define ASN1_OID_ID_SHA224 (&asn1_oid_id_sha224)

/* OBJECT IDENTIFIER id-sha384 ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) gov(101) csor(3) label-less(4) label-less(2) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_sha384;
#define ASN1_OID_ID_SHA384 (&asn1_oid_id_sha384)

/* OBJECT IDENTIFIER id-sha512 ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) gov(101) csor(3) label-less(4) label-less(2) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_sha512;
#define ASN1_OID_ID_SHA512 (&asn1_oid_id_sha512)

/* OBJECT IDENTIFIER id-dhpublicnumber ::= { iso(1) member-body(2) us(840) ansi-x942(10046) number-type(2) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_dhpublicnumber;
#define ASN1_OID_ID_DHPUBLICNUMBER (&asn1_oid_id_dhpublicnumber)

/* OBJECT IDENTIFIER id-ecPublicKey ::= { iso(1) member-body(2) us(840) ansi-X9-62(10045) keyType(2) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_ecPublicKey;
#define ASN1_OID_ID_ECPUBLICKEY (&asn1_oid_id_ecPublicKey)

/* OBJECT IDENTIFIER id-ecDH ::= { iso(1) identified-organization(3) certicom(132) schemes(1) ecdh(12) } */
extern ASN1EXP const heim_oid asn1_oid_id_ecDH;
#define ASN1_OID_ID_ECDH (&asn1_oid_id_ecDH)

/* OBJECT IDENTIFIER id-ecMQV ::= { iso(1) identified-organization(3) certicom(132) schemes(1) ecmqv(13) } */
extern ASN1EXP const heim_oid asn1_oid_id_ecMQV;
#define ASN1_OID_ID_ECMQV (&asn1_oid_id_ecMQV)

/* OBJECT IDENTIFIER id-ecdsa-with-SHA512 ::= { iso(1) member-body(2) us(840) ansi-X9-62(10045) signatures(4) ecdsa-with-SHA2(3) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_ecdsa_with_SHA512;
#define ASN1_OID_ID_ECDSA_WITH_SHA512 (&asn1_oid_id_ecdsa_with_SHA512)

/* OBJECT IDENTIFIER id-ecdsa-with-SHA384 ::= { iso(1) member-body(2) us(840) ansi-X9-62(10045) signatures(4) ecdsa-with-SHA2(3) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_ecdsa_with_SHA384;
#define ASN1_OID_ID_ECDSA_WITH_SHA384 (&asn1_oid_id_ecdsa_with_SHA384)

/* OBJECT IDENTIFIER id-ecdsa-with-SHA256 ::= { iso(1) member-body(2) us(840) ansi-X9-62(10045) signatures(4) ecdsa-with-SHA2(3) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_ecdsa_with_SHA256;
#define ASN1_OID_ID_ECDSA_WITH_SHA256 (&asn1_oid_id_ecdsa_with_SHA256)

/* OBJECT IDENTIFIER id-ecdsa-with-SHA224 ::= { iso(1) member-body(2) us(840) ansi-X9-62(10045) signatures(4) ecdsa-with-SHA2(3) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_ecdsa_with_SHA224;
#define ASN1_OID_ID_ECDSA_WITH_SHA224 (&asn1_oid_id_ecdsa_with_SHA224)

/* OBJECT IDENTIFIER id-ecdsa-with-SHA1 ::= { iso(1) member-body(2) us(840) ansi-X9-62(10045) signatures(4) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_ecdsa_with_SHA1;
#define ASN1_OID_ID_ECDSA_WITH_SHA1 (&asn1_oid_id_ecdsa_with_SHA1)

/* OBJECT IDENTIFIER id-ec-group-secp256r1 ::= { iso(1) member-body(2) us(840) ansi-X9-62(10045) curves(3) prime(1) label-less(7) } */
extern ASN1EXP const heim_oid asn1_oid_id_ec_group_secp256r1;
#define ASN1_OID_ID_EC_GROUP_SECP256R1 (&asn1_oid_id_ec_group_secp256r1)

/* OBJECT IDENTIFIER id-ec-group-secp160r1 ::= { iso(1) identified-organization(3) certicom(132) label-less(0) label-less(8) } */
extern ASN1EXP const heim_oid asn1_oid_id_ec_group_secp160r1;
#define ASN1_OID_ID_EC_GROUP_SECP160R1 (&asn1_oid_id_ec_group_secp160r1)

/* OBJECT IDENTIFIER id-ec-group-secp160r2 ::= { iso(1) identified-organization(3) certicom(132) label-less(0) label-less(30) } */
extern ASN1EXP const heim_oid asn1_oid_id_ec_group_secp160r2;
#define ASN1_OID_ID_EC_GROUP_SECP160R2 (&asn1_oid_id_ec_group_secp160r2)

/* OBJECT IDENTIFIER id-ec-group-secp224r1 ::= { iso(1) identified-organization(3) certicom(132) label-less(0) label-less(33) } */
extern ASN1EXP const heim_oid asn1_oid_id_ec_group_secp224r1;
#define ASN1_OID_ID_EC_GROUP_SECP224R1 (&asn1_oid_id_ec_group_secp224r1)

/* OBJECT IDENTIFIER id-ec-group-secp384r1 ::= { iso(1) identified-organization(3) certicom(132) label-less(0) label-less(34) } */
extern ASN1EXP const heim_oid asn1_oid_id_ec_group_secp384r1;
#define ASN1_OID_ID_EC_GROUP_SECP384R1 (&asn1_oid_id_ec_group_secp384r1)

/* OBJECT IDENTIFIER id-ec-group-secp521r1 ::= { iso(1) identified-organization(3) certicom(132) label-less(0) label-less(35) } */
extern ASN1EXP const heim_oid asn1_oid_id_ec_group_secp521r1;
#define ASN1_OID_ID_EC_GROUP_SECP521R1 (&asn1_oid_id_ec_group_secp521r1)

/* OBJECT IDENTIFIER id-x9-57 ::= { iso(1) member-body(2) us(840) ansi-x942(10046) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_x9_57;
#define ASN1_OID_ID_X9_57 (&asn1_oid_id_x9_57)

/* OBJECT IDENTIFIER id-dsa ::= { iso(1) member-body(2) us(840) ansi-x942(10046) label-less(4) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_dsa;
#define ASN1_OID_ID_DSA (&asn1_oid_id_dsa)

/* OBJECT IDENTIFIER id-dsa-with-sha1 ::= { iso(1) member-body(2) us(840) ansi-x942(10046) label-less(4) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_dsa_with_sha1;
#define ASN1_OID_ID_DSA_WITH_SHA1 (&asn1_oid_id_dsa_with_sha1)

/* OBJECT IDENTIFIER id-x520-at ::= { joint-iso-ccitt(2) ds(5) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_x520_at;
#define ASN1_OID_ID_X520_AT (&asn1_oid_id_x520_at)

/* OBJECT IDENTIFIER id-at-commonName ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_commonName;
#define ASN1_OID_ID_AT_COMMONNAME (&asn1_oid_id_at_commonName)

/* OBJECT IDENTIFIER id-at-surname ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_surname;
#define ASN1_OID_ID_AT_SURNAME (&asn1_oid_id_at_surname)

/* OBJECT IDENTIFIER id-at-serialNumber ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(5) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_serialNumber;
#define ASN1_OID_ID_AT_SERIALNUMBER (&asn1_oid_id_at_serialNumber)

/* OBJECT IDENTIFIER id-at-countryName ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(6) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_countryName;
#define ASN1_OID_ID_AT_COUNTRYNAME (&asn1_oid_id_at_countryName)

/* OBJECT IDENTIFIER id-at-localityName ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(7) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_localityName;
#define ASN1_OID_ID_AT_LOCALITYNAME (&asn1_oid_id_at_localityName)

/* OBJECT IDENTIFIER id-at-stateOrProvinceName ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(8) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_stateOrProvinceName;
#define ASN1_OID_ID_AT_STATEORPROVINCENAME (&asn1_oid_id_at_stateOrProvinceName)

/* OBJECT IDENTIFIER id-at-streetAddress ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(9) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_streetAddress;
#define ASN1_OID_ID_AT_STREETADDRESS (&asn1_oid_id_at_streetAddress)

/* OBJECT IDENTIFIER id-at-organizationName ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(10) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_organizationName;
#define ASN1_OID_ID_AT_ORGANIZATIONNAME (&asn1_oid_id_at_organizationName)

/* OBJECT IDENTIFIER id-at-organizationalUnitName ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(11) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_organizationalUnitName;
#define ASN1_OID_ID_AT_ORGANIZATIONALUNITNAME (&asn1_oid_id_at_organizationalUnitName)

/* OBJECT IDENTIFIER id-at-title ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(12) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_title;
#define ASN1_OID_ID_AT_TITLE (&asn1_oid_id_at_title)

/* OBJECT IDENTIFIER id-at-description ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(13) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_description;
#define ASN1_OID_ID_AT_DESCRIPTION (&asn1_oid_id_at_description)

/* OBJECT IDENTIFIER id-at-name ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(41) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_name;
#define ASN1_OID_ID_AT_NAME (&asn1_oid_id_at_name)

/* OBJECT IDENTIFIER id-at-givenName ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(42) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_givenName;
#define ASN1_OID_ID_AT_GIVENNAME (&asn1_oid_id_at_givenName)

/* OBJECT IDENTIFIER id-at-initials ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(43) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_initials;
#define ASN1_OID_ID_AT_INITIALS (&asn1_oid_id_at_initials)

/* OBJECT IDENTIFIER id-at-generationQualifier ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(44) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_generationQualifier;
#define ASN1_OID_ID_AT_GENERATIONQUALIFIER (&asn1_oid_id_at_generationQualifier)

/* OBJECT IDENTIFIER id-at-dnQualifier ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(46) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_dnQualifier;
#define ASN1_OID_ID_AT_DNQUALIFIER (&asn1_oid_id_at_dnQualifier)

/* OBJECT IDENTIFIER id-at-pseudonym ::= { joint-iso-ccitt(2) ds(5) label-less(4) label-less(65) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_pseudonym;
#define ASN1_OID_ID_AT_PSEUDONYM (&asn1_oid_id_at_pseudonym)

/* OBJECT IDENTIFIER id-Userid ::= { label-less(0) label-less(9) label-less(2342) label-less(19200300) label-less(100) label-less(1) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_Userid;
#define ASN1_OID_ID_USERID (&asn1_oid_id_Userid)

/* OBJECT IDENTIFIER id-domainComponent ::= { label-less(0) label-less(9) label-less(2342) label-less(19200300) label-less(100) label-less(1) label-less(25) } */
extern ASN1EXP const heim_oid asn1_oid_id_domainComponent;
#define ASN1_OID_ID_DOMAINCOMPONENT (&asn1_oid_id_domainComponent)

/* OBJECT IDENTIFIER id-at-emailAddress ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) label-less(9) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_at_emailAddress;
#define ASN1_OID_ID_AT_EMAILADDRESS (&asn1_oid_id_at_emailAddress)

/* OBJECT IDENTIFIER id-x509-ce ::= { joint-iso-ccitt(2) ds(5) label-less(29) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce;
#define ASN1_OID_ID_X509_CE (&asn1_oid_id_x509_ce)

typedef struct AlgorithmIdentifier AlgorithmIdentifier;

typedef heim_oid AttributeType;

typedef HEIM_ANY AttributeValue;

typedef struct DirectoryString DirectoryString;

typedef struct AttributeValues AttributeValues;

typedef struct Attribute Attribute;

typedef struct AttributeTypeAndValue AttributeTypeAndValue;

typedef struct RelativeDistinguishedName RelativeDistinguishedName;

typedef struct RDNSequence RDNSequence;

typedef struct Name Name;

typedef heim_integer CertificateSerialNumber;

typedef struct Time Time;

typedef struct Validity Validity;

typedef heim_bit_string UniqueIdentifier;

typedef struct SubjectPublicKeyInfo SubjectPublicKeyInfo;

typedef struct Extensions Extensions;

typedef struct TBSCertificate TBSCertificate;

typedef struct Certificate Certificate;

typedef struct Certificates Certificates;

typedef struct ValidationParms ValidationParms;

typedef struct DomainParameters DomainParameters;

typedef struct DHParameter DHParameter;

typedef heim_integer DHPublicKey;

typedef struct GeneralName GeneralName;

typedef struct GeneralNames GeneralNames;

/* OBJECT IDENTIFIER id-x509-ce-keyUsage ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(15) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_keyUsage;
#define ASN1_OID_ID_X509_CE_KEYUSAGE (&asn1_oid_id_x509_ce_keyUsage)

typedef struct KeyUsage {
  unsigned int digitalSignature:1;
  unsigned int nonRepudiation:1;
  unsigned int keyEncipherment:1;
  unsigned int dataEncipherment:1;
  unsigned int keyAgreement:1;
  unsigned int keyCertSign:1;
  unsigned int cRLSign:1;
  unsigned int encipherOnly:1;
  unsigned int decipherOnly:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int _unused14:1;
  unsigned int _unused15:1;
  unsigned int _unused16:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int _unused30:1;
  unsigned int _unused31:1;
} KeyUsage;


typedef struct PrivateKeyUsagePeriod PrivateKeyUsagePeriod;

typedef heim_oid CertPolicyId;

typedef heim_oid PolicyQualifierId;

typedef struct PolicyQualifierInfos PolicyQualifierInfos;

typedef struct PolicyInformation PolicyInformation;

typedef struct CertificatePolicies CertificatePolicies;

typedef heim_ia5_string CPSuri;

typedef struct DisplayText DisplayText;

typedef struct NoticeReference NoticeReference;

typedef struct UserNotice UserNotice;

typedef struct PolicyMapping PolicyMapping;

typedef struct PolicyMappings PolicyMappings;

/* OBJECT IDENTIFIER id-x509-ce-authorityKeyIdentifier ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(35) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_authorityKeyIdentifier;
#define ASN1_OID_ID_X509_CE_AUTHORITYKEYIDENTIFIER (&asn1_oid_id_x509_ce_authorityKeyIdentifier)

typedef heim_octet_string KeyIdentifier;

typedef struct AuthorityKeyIdentifier AuthorityKeyIdentifier;

/* OBJECT IDENTIFIER id-x509-ce-subjectKeyIdentifier ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(14) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_subjectKeyIdentifier;
#define ASN1_OID_ID_X509_CE_SUBJECTKEYIDENTIFIER (&asn1_oid_id_x509_ce_subjectKeyIdentifier)

typedef KeyIdentifier SubjectKeyIdentifier;

/* OBJECT IDENTIFIER id-x509-ce-basicConstraints ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(19) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_basicConstraints;
#define ASN1_OID_ID_X509_CE_BASICCONSTRAINTS (&asn1_oid_id_x509_ce_basicConstraints)

typedef struct BasicConstraints BasicConstraints;

/* OBJECT IDENTIFIER id-x509-ce-nameConstraints ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(30) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_nameConstraints;
#define ASN1_OID_ID_X509_CE_NAMECONSTRAINTS (&asn1_oid_id_x509_ce_nameConstraints)

typedef unsigned int BaseDistance;

typedef struct GeneralSubtree GeneralSubtree;

typedef struct GeneralSubtrees GeneralSubtrees;

typedef struct NameConstraints NameConstraints;

/* OBJECT IDENTIFIER id-x509-ce-privateKeyUsagePeriod ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(16) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_privateKeyUsagePeriod;
#define ASN1_OID_ID_X509_CE_PRIVATEKEYUSAGEPERIOD (&asn1_oid_id_x509_ce_privateKeyUsagePeriod)

/* OBJECT IDENTIFIER id-x509-ce-certificatePolicies ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(32) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_certificatePolicies;
#define ASN1_OID_ID_X509_CE_CERTIFICATEPOLICIES (&asn1_oid_id_x509_ce_certificatePolicies)

/* OBJECT IDENTIFIER id-x509-ce-certificatePolicies-anyPolicy ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(32) label-less(0) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_certificatePolicies_anyPolicy;
#define ASN1_OID_ID_X509_CE_CERTIFICATEPOLICIES_ANYPOLICY (&asn1_oid_id_x509_ce_certificatePolicies_anyPolicy)

/* OBJECT IDENTIFIER id-x509-ce-policyMappings ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(33) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_policyMappings;
#define ASN1_OID_ID_X509_CE_POLICYMAPPINGS (&asn1_oid_id_x509_ce_policyMappings)

/* OBJECT IDENTIFIER id-x509-ce-subjectAltName ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(17) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_subjectAltName;
#define ASN1_OID_ID_X509_CE_SUBJECTALTNAME (&asn1_oid_id_x509_ce_subjectAltName)

/* OBJECT IDENTIFIER id-x509-ce-issuerAltName ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(18) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_issuerAltName;
#define ASN1_OID_ID_X509_CE_ISSUERALTNAME (&asn1_oid_id_x509_ce_issuerAltName)

/* OBJECT IDENTIFIER id-x509-ce-subjectDirectoryAttributes ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(9) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_subjectDirectoryAttributes;
#define ASN1_OID_ID_X509_CE_SUBJECTDIRECTORYATTRIBUTES (&asn1_oid_id_x509_ce_subjectDirectoryAttributes)

/* OBJECT IDENTIFIER id-x509-ce-policyConstraints ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(36) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_policyConstraints;
#define ASN1_OID_ID_X509_CE_POLICYCONSTRAINTS (&asn1_oid_id_x509_ce_policyConstraints)

/* OBJECT IDENTIFIER id-x509-ce-extKeyUsage ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(37) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_extKeyUsage;
#define ASN1_OID_ID_X509_CE_EXTKEYUSAGE (&asn1_oid_id_x509_ce_extKeyUsage)

/* OBJECT IDENTIFIER id-x509-ce-anyExtendedKeyUsage ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(37) label-less(0) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_anyExtendedKeyUsage;
#define ASN1_OID_ID_X509_CE_ANYEXTENDEDKEYUSAGE (&asn1_oid_id_x509_ce_anyExtendedKeyUsage)

typedef struct ExtKeyUsage ExtKeyUsage;

/* OBJECT IDENTIFIER id-x509-ce-cRLReasons ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(21) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_cRLReasons;
#define ASN1_OID_ID_X509_CE_CRLREASONS (&asn1_oid_id_x509_ce_cRLReasons)

/* OBJECT IDENTIFIER id-x509-ce-cRLDistributionPoints ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(31) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_cRLDistributionPoints;
#define ASN1_OID_ID_X509_CE_CRLDISTRIBUTIONPOINTS (&asn1_oid_id_x509_ce_cRLDistributionPoints)

/* OBJECT IDENTIFIER id-x509-ce-deltaCRLIndicator ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(27) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_deltaCRLIndicator;
#define ASN1_OID_ID_X509_CE_DELTACRLINDICATOR (&asn1_oid_id_x509_ce_deltaCRLIndicator)

/* OBJECT IDENTIFIER id-x509-ce-issuingDistributionPoint ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(28) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_issuingDistributionPoint;
#define ASN1_OID_ID_X509_CE_ISSUINGDISTRIBUTIONPOINT (&asn1_oid_id_x509_ce_issuingDistributionPoint)

/* OBJECT IDENTIFIER id-x509-ce-holdInstructionCode ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(23) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_holdInstructionCode;
#define ASN1_OID_ID_X509_CE_HOLDINSTRUCTIONCODE (&asn1_oid_id_x509_ce_holdInstructionCode)

/* OBJECT IDENTIFIER id-x509-ce-invalidityDate ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(24) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_invalidityDate;
#define ASN1_OID_ID_X509_CE_INVALIDITYDATE (&asn1_oid_id_x509_ce_invalidityDate)

/* OBJECT IDENTIFIER id-x509-ce-certificateIssuer ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(29) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_certificateIssuer;
#define ASN1_OID_ID_X509_CE_CERTIFICATEISSUER (&asn1_oid_id_x509_ce_certificateIssuer)

/* OBJECT IDENTIFIER id-x509-ce-inhibitAnyPolicy ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(54) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_inhibitAnyPolicy;
#define ASN1_OID_ID_X509_CE_INHIBITANYPOLICY (&asn1_oid_id_x509_ce_inhibitAnyPolicy)

/* OBJECT IDENTIFIER id-heim-ce-pkinit-princ-max-life ::= { iso(1) member-body(2) se(752) su(43) heim-pkix(16) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_heim_ce_pkinit_princ_max_life;
#define ASN1_OID_ID_HEIM_CE_PKINIT_PRINC_MAX_LIFE (&asn1_oid_id_heim_ce_pkinit_princ_max_life)

typedef struct DistributionPointReasonFlags {
  unsigned int unused:1;
  unsigned int keyCompromise:1;
  unsigned int cACompromise:1;
  unsigned int affiliationChanged:1;
  unsigned int superseded:1;
  unsigned int cessationOfOperation:1;
  unsigned int certificateHold:1;
  unsigned int privilegeWithdrawn:1;
  unsigned int aACompromise:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int _unused14:1;
  unsigned int _unused15:1;
  unsigned int _unused16:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int _unused30:1;
  unsigned int _unused31:1;
} DistributionPointReasonFlags;


typedef struct DistributionPointName DistributionPointName;

typedef struct DistributionPoint DistributionPoint;

typedef struct CRLDistributionPoints CRLDistributionPoints;

typedef struct DSASigValue DSASigValue;

typedef heim_integer DSAPublicKey;

typedef struct DSAParams DSAParams;

typedef heim_octet_string ECPoint;

typedef struct ECParameters ECParameters;

typedef struct ECDSA_Sig_Value ECDSA_Sig_Value;

typedef struct RSAPublicKey RSAPublicKey;

typedef struct RSAPrivateKey RSAPrivateKey;

typedef struct DigestInfo DigestInfo;

typedef struct TBSCRLCertList TBSCRLCertList;

typedef struct CRLCertificateList CRLCertificateList;

/* OBJECT IDENTIFIER id-x509-ce-cRLNumber ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(20) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_cRLNumber;
#define ASN1_OID_ID_X509_CE_CRLNUMBER (&asn1_oid_id_x509_ce_cRLNumber)

/* OBJECT IDENTIFIER id-x509-ce-freshestCRL ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(46) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_freshestCRL;
#define ASN1_OID_ID_X509_CE_FRESHESTCRL (&asn1_oid_id_x509_ce_freshestCRL)

/* OBJECT IDENTIFIER id-x509-ce-cRLReason ::= { joint-iso-ccitt(2) ds(5) label-less(29) label-less(21) } */
extern ASN1EXP const heim_oid asn1_oid_id_x509_ce_cRLReason;
#define ASN1_OID_ID_X509_CE_CRLREASON (&asn1_oid_id_x509_ce_cRLReason)

typedef enum CRLReason {
  unspecified = 0,
  keyCompromise = 1,
  cACompromise = 2,
  affiliationChanged = 3,
  superseded = 4,
  cessationOfOperation = 5,
  certificateHold = 6,
  removeFromCRL = 8,
  privilegeWithdrawn = 9,
  aACompromise = 10
} CRLReason;

typedef heim_utf8_string PKIXXmppAddr;

typedef heim_ia5_string SRVName;

/* OBJECT IDENTIFIER id-pkix ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix;
#define ASN1_OID_ID_PKIX (&asn1_oid_id_pkix)

/* OBJECT IDENTIFIER id-pkix-on ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(8) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_on;
#define ASN1_OID_ID_PKIX_ON (&asn1_oid_id_pkix_on)

/* OBJECT IDENTIFIER id-pkix-on-xmppAddr ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(8) label-less(5) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_on_xmppAddr;
#define ASN1_OID_ID_PKIX_ON_XMPPADDR (&asn1_oid_id_pkix_on_xmppAddr)

/* OBJECT IDENTIFIER id-pkix-on-dnsSRV ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(8) label-less(7) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_on_dnsSRV;
#define ASN1_OID_ID_PKIX_ON_DNSSRV (&asn1_oid_id_pkix_on_dnsSRV)

/* OBJECT IDENTIFIER id-pkix-on-hardwareModuleName ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(8) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_on_hardwareModuleName;
#define ASN1_OID_ID_PKIX_ON_HARDWAREMODULENAME (&asn1_oid_id_pkix_on_hardwareModuleName)

typedef struct HardwareModuleName HardwareModuleName;

/* OBJECT IDENTIFIER id-pkix-on-pkinit-san ::= { iso(1) org(3) dod(6) internet(1) security(5) kerberosv5(2) x509-sanan(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_on_pkinit_san;
#define ASN1_OID_ID_PKIX_ON_PKINIT_SAN (&asn1_oid_id_pkix_on_pkinit_san)

typedef struct KRB5PrincipalName KRB5PrincipalName;

/* OBJECT IDENTIFIER id-pkix-on-permanentIdentifier ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(8) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_on_permanentIdentifier;
#define ASN1_OID_ID_PKIX_ON_PERMANENTIDENTIFIER (&asn1_oid_id_pkix_on_permanentIdentifier)

typedef struct PermanentIdentifier PermanentIdentifier;

/* OBJECT IDENTIFIER id-pkix-kp ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp;
#define ASN1_OID_ID_PKIX_KP (&asn1_oid_id_pkix_kp)

/* OBJECT IDENTIFIER id-pkix-kp-serverAuth ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_serverAuth;
#define ASN1_OID_ID_PKIX_KP_SERVERAUTH (&asn1_oid_id_pkix_kp_serverAuth)

/* OBJECT IDENTIFIER id-pkix-kp-clientAuth ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_clientAuth;
#define ASN1_OID_ID_PKIX_KP_CLIENTAUTH (&asn1_oid_id_pkix_kp_clientAuth)

/* OBJECT IDENTIFIER id-pkix-kp-codeSigning ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_codeSigning;
#define ASN1_OID_ID_PKIX_KP_CODESIGNING (&asn1_oid_id_pkix_kp_codeSigning)

/* OBJECT IDENTIFIER id-pkix-kp-emailProtection ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_emailProtection;
#define ASN1_OID_ID_PKIX_KP_EMAILPROTECTION (&asn1_oid_id_pkix_kp_emailProtection)

/* OBJECT IDENTIFIER id-pkix-kp-ipsecEndSystem ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(5) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_ipsecEndSystem;
#define ASN1_OID_ID_PKIX_KP_IPSECENDSYSTEM (&asn1_oid_id_pkix_kp_ipsecEndSystem)

/* OBJECT IDENTIFIER id-pkix-kp-ipsecTunnel ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(6) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_ipsecTunnel;
#define ASN1_OID_ID_PKIX_KP_IPSECTUNNEL (&asn1_oid_id_pkix_kp_ipsecTunnel)

/* OBJECT IDENTIFIER id-pkix-kp-ipsecUser ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(7) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_ipsecUser;
#define ASN1_OID_ID_PKIX_KP_IPSECUSER (&asn1_oid_id_pkix_kp_ipsecUser)

/* OBJECT IDENTIFIER id-pkix-kp-timeStamping ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(8) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_timeStamping;
#define ASN1_OID_ID_PKIX_KP_TIMESTAMPING (&asn1_oid_id_pkix_kp_timeStamping)

/* OBJECT IDENTIFIER id-pkix-kp-OCSPSigning ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(9) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_OCSPSigning;
#define ASN1_OID_ID_PKIX_KP_OCSPSIGNING (&asn1_oid_id_pkix_kp_OCSPSigning)

/* OBJECT IDENTIFIER id-pkix-kp-DVCS ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(10) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_DVCS;
#define ASN1_OID_ID_PKIX_KP_DVCS (&asn1_oid_id_pkix_kp_DVCS)

/* OBJECT IDENTIFIER id-pkix-kp-ipsecIKE ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(17) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_ipsecIKE;
#define ASN1_OID_ID_PKIX_KP_IPSECIKE (&asn1_oid_id_pkix_kp_ipsecIKE)

/* OBJECT IDENTIFIER id-pkix-kp-capwapAC ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(18) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_capwapAC;
#define ASN1_OID_ID_PKIX_KP_CAPWAPAC (&asn1_oid_id_pkix_kp_capwapAC)

/* OBJECT IDENTIFIER id-pkix-kp-capwapWTP ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(19) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_capwapWTP;
#define ASN1_OID_ID_PKIX_KP_CAPWAPWTP (&asn1_oid_id_pkix_kp_capwapWTP)

/* OBJECT IDENTIFIER id-pkix-kp-sipDomain ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(20) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_sipDomain;
#define ASN1_OID_ID_PKIX_KP_SIPDOMAIN (&asn1_oid_id_pkix_kp_sipDomain)

/* OBJECT IDENTIFIER id-pkix-kp-secureShellClient ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(21) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_secureShellClient;
#define ASN1_OID_ID_PKIX_KP_SECURESHELLCLIENT (&asn1_oid_id_pkix_kp_secureShellClient)

/* OBJECT IDENTIFIER id-pkix-kp-secureShellServer ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(22) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_secureShellServer;
#define ASN1_OID_ID_PKIX_KP_SECURESHELLSERVER (&asn1_oid_id_pkix_kp_secureShellServer)

/* OBJECT IDENTIFIER id-pkix-kp-sendRouter ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(23) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_sendRouter;
#define ASN1_OID_ID_PKIX_KP_SENDROUTER (&asn1_oid_id_pkix_kp_sendRouter)

/* OBJECT IDENTIFIER id-pkix-kp-sendProxiedRouter ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(24) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_sendProxiedRouter;
#define ASN1_OID_ID_PKIX_KP_SENDPROXIEDROUTER (&asn1_oid_id_pkix_kp_sendProxiedRouter)

/* OBJECT IDENTIFIER id-pkix-kp-sendOwner ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(25) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_sendOwner;
#define ASN1_OID_ID_PKIX_KP_SENDOWNER (&asn1_oid_id_pkix_kp_sendOwner)

/* OBJECT IDENTIFIER id-pkix-kp-sendProxiedOwner ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(26) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_sendProxiedOwner;
#define ASN1_OID_ID_PKIX_KP_SENDPROXIEDOWNER (&asn1_oid_id_pkix_kp_sendProxiedOwner)

/* OBJECT IDENTIFIER id-pkix-kp-cmcCA ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(27) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_cmcCA;
#define ASN1_OID_ID_PKIX_KP_CMCCA (&asn1_oid_id_pkix_kp_cmcCA)

/* OBJECT IDENTIFIER id-pkix-kp-cmcRA ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(28) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_cmcRA;
#define ASN1_OID_ID_PKIX_KP_CMCRA (&asn1_oid_id_pkix_kp_cmcRA)

/* OBJECT IDENTIFIER id-pkix-kp-cmcArchive ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(29) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_cmcArchive;
#define ASN1_OID_ID_PKIX_KP_CMCARCHIVE (&asn1_oid_id_pkix_kp_cmcArchive)

/* OBJECT IDENTIFIER id-pkix-kp-bgpsec-router ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(3) label-less(30) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_kp_bgpsec_router;
#define ASN1_OID_ID_PKIX_KP_BGPSEC_ROUTER (&asn1_oid_id_pkix_kp_bgpsec_router)

/* OBJECT IDENTIFIER id-msft ::= { label-less(1) label-less(3) label-less(6) label-less(1) label-less(4) label-less(1) label-less(311) } */
extern ASN1EXP const heim_oid asn1_oid_id_msft;
#define ASN1_OID_ID_MSFT (&asn1_oid_id_msft)

/* OBJECT IDENTIFIER id-msft-kp-msCodeInd ::= { label-less(1) label-less(3) label-less(6) label-less(1) label-less(4) label-less(1) label-less(311) label-less(2) label-less(1) label-less(21) } */
extern ASN1EXP const heim_oid asn1_oid_id_msft_kp_msCodeInd;
#define ASN1_OID_ID_MSFT_KP_MSCODEIND (&asn1_oid_id_msft_kp_msCodeInd)

/* OBJECT IDENTIFIER id-msft-kp-msCodeCom ::= { label-less(1) label-less(3) label-less(6) label-less(1) label-less(4) label-less(1) label-less(311) label-less(2) label-less(1) label-less(22) } */
extern ASN1EXP const heim_oid asn1_oid_id_msft_kp_msCodeCom;
#define ASN1_OID_ID_MSFT_KP_MSCODECOM (&asn1_oid_id_msft_kp_msCodeCom)

/* OBJECT IDENTIFIER id-msft-kp-msCTLSign ::= { label-less(1) label-less(3) label-less(6) label-less(1) label-less(4) label-less(1) label-less(311) label-less(10) label-less(3) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_msft_kp_msCTLSign;
#define ASN1_OID_ID_MSFT_KP_MSCTLSIGN (&asn1_oid_id_msft_kp_msCTLSign)

/* OBJECT IDENTIFIER id-msft-kp-msSGC ::= { label-less(1) label-less(3) label-less(6) label-less(1) label-less(4) label-less(1) label-less(311) label-less(10) label-less(3) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_msft_kp_msSGC;
#define ASN1_OID_ID_MSFT_KP_MSSGC (&asn1_oid_id_msft_kp_msSGC)

/* OBJECT IDENTIFIER id-msft-kp-msEFS ::= { label-less(1) label-less(3) label-less(6) label-less(1) label-less(4) label-less(1) label-less(311) label-less(10) label-less(3) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_msft_kp_msEFS;
#define ASN1_OID_ID_MSFT_KP_MSEFS (&asn1_oid_id_msft_kp_msEFS)

/* OBJECT IDENTIFIER id-msft-kp-msSmartcardLogin ::= { label-less(1) label-less(3) label-less(6) label-less(1) label-less(4) label-less(1) label-less(311) label-less(20) label-less(2) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_msft_kp_msSmartcardLogin;
#define ASN1_OID_ID_MSFT_KP_MSSMARTCARDLOGIN (&asn1_oid_id_msft_kp_msSmartcardLogin)

/* OBJECT IDENTIFIER id-msft-kp-msUPN ::= { label-less(1) label-less(3) label-less(6) label-less(1) label-less(4) label-less(1) label-less(311) label-less(20) label-less(2) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_msft_kp_msUPN;
#define ASN1_OID_ID_MSFT_KP_MSUPN (&asn1_oid_id_msft_kp_msUPN)

/* OBJECT IDENTIFIER id-pkix-pe ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_pe;
#define ASN1_OID_ID_PKIX_PE (&asn1_oid_id_pkix_pe)

/* OBJECT IDENTIFIER id-pkix-pe-authorityInfoAccess ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(1) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_pe_authorityInfoAccess;
#define ASN1_OID_ID_PKIX_PE_AUTHORITYINFOACCESS (&asn1_oid_id_pkix_pe_authorityInfoAccess)

typedef struct AccessDescription AccessDescription;

typedef struct AuthorityInfoAccessSyntax AuthorityInfoAccessSyntax;

/* OBJECT IDENTIFIER id-pkix-pe-proxyCertInfo ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(1) label-less(14) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_pe_proxyCertInfo;
#define ASN1_OID_ID_PKIX_PE_PROXYCERTINFO (&asn1_oid_id_pkix_pe_proxyCertInfo)

/* OBJECT IDENTIFIER id-pkix-pe-subjectInfoAccess ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(1) label-less(11) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_pe_subjectInfoAccess;
#define ASN1_OID_ID_PKIX_PE_SUBJECTINFOACCESS (&asn1_oid_id_pkix_pe_subjectInfoAccess)

typedef struct SubjectInfoAccessSyntax SubjectInfoAccessSyntax;

/* OBJECT IDENTIFIER id-pkix-ppl ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(21) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ppl;
#define ASN1_OID_ID_PKIX_PPL (&asn1_oid_id_pkix_ppl)

/* OBJECT IDENTIFIER id-pkix-ppl-anyLanguage ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(21) label-less(0) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ppl_anyLanguage;
#define ASN1_OID_ID_PKIX_PPL_ANYLANGUAGE (&asn1_oid_id_pkix_ppl_anyLanguage)

/* OBJECT IDENTIFIER id-pkix-ppl-inheritAll ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(21) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ppl_inheritAll;
#define ASN1_OID_ID_PKIX_PPL_INHERITALL (&asn1_oid_id_pkix_ppl_inheritAll)

/* OBJECT IDENTIFIER id-pkix-ppl-independent ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(21) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ppl_independent;
#define ASN1_OID_ID_PKIX_PPL_INDEPENDENT (&asn1_oid_id_pkix_ppl_independent)

typedef struct ProxyPolicy ProxyPolicy;

typedef struct ProxyCertInfo ProxyCertInfo;

/* OBJECT IDENTIFIER tcg ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) } */
extern ASN1EXP const heim_oid asn1_oid_tcg;
#define ASN1_OID_TCG (&asn1_oid_tcg)

/* OBJECT IDENTIFIER tcg-attribute ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_attribute;
#define ASN1_OID_TCG_ATTRIBUTE (&asn1_oid_tcg_attribute)

/* OBJECT IDENTIFIER tcg-kp ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(8) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_kp;
#define ASN1_OID_TCG_KP (&asn1_oid_tcg_kp)

/* OBJECT IDENTIFIER tcg-at-tpmManufacturer ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(2) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_at_tpmManufacturer;
#define ASN1_OID_TCG_AT_TPMMANUFACTURER (&asn1_oid_tcg_at_tpmManufacturer)

/* OBJECT IDENTIFIER tcg-at-tpmModel ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(2) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_at_tpmModel;
#define ASN1_OID_TCG_AT_TPMMODEL (&asn1_oid_tcg_at_tpmModel)

/* OBJECT IDENTIFIER tcg-at-tpmVersion ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(2) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_at_tpmVersion;
#define ASN1_OID_TCG_AT_TPMVERSION (&asn1_oid_tcg_at_tpmVersion)

/* OBJECT IDENTIFIER tcg-at-tpmSpecification ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(2) label-less(16) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_at_tpmSpecification;
#define ASN1_OID_TCG_AT_TPMSPECIFICATION (&asn1_oid_tcg_at_tpmSpecification)

/* OBJECT IDENTIFIER tcg-at-tpmSecurityAssertions ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(2) label-less(18) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_at_tpmSecurityAssertions;
#define ASN1_OID_TCG_AT_TPMSECURITYASSERTIONS (&asn1_oid_tcg_at_tpmSecurityAssertions)

/* OBJECT IDENTIFIER tcg-kp-EKCertificate ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(8) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_kp_EKCertificate;
#define ASN1_OID_TCG_KP_EKCERTIFICATE (&asn1_oid_tcg_kp_EKCertificate)

/* OBJECT IDENTIFIER tcg-tpm20 ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(1) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_tpm20;
#define ASN1_OID_TCG_TPM20 (&asn1_oid_tcg_tpm20)

/* OBJECT IDENTIFIER tcg-on-ekPermIdSha256 ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(12) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_on_ekPermIdSha256;
#define ASN1_OID_TCG_ON_EKPERMIDSHA256 (&asn1_oid_tcg_on_ekPermIdSha256)

/* OBJECT IDENTIFIER tcg-cap-verifiedTPMResidency ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(11) label-less(1) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_cap_verifiedTPMResidency;
#define ASN1_OID_TCG_CAP_VERIFIEDTPMRESIDENCY (&asn1_oid_tcg_cap_verifiedTPMResidency)

/* OBJECT IDENTIFIER tcg-cap-verifiedTPMFixed ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(11) label-less(1) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_cap_verifiedTPMFixed;
#define ASN1_OID_TCG_CAP_VERIFIEDTPMFIXED (&asn1_oid_tcg_cap_verifiedTPMFixed)

/* OBJECT IDENTIFIER tcg-cap-verifiedTPMRestricted ::= { joint-iso-itu-t(2) international-organizations(23) tcg(133) label-less(11) label-less(1) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_tcg_cap_verifiedTPMRestricted;
#define ASN1_OID_TCG_CAP_VERIFIEDTPMRESTRICTED (&asn1_oid_tcg_cap_verifiedTPMRestricted)

typedef enum EKGenerationType {
  ekgt_internal = 0,
  ekgt_injected = 1,
  ekgt_internalRevocable = 2,
  ekgt_injectedRevocable = 3
} EKGenerationType;

typedef enum EKGenerationLocation {
  tpmManufacturer = 0,
  platformManufacturer = 1,
  ekCertSigner = 2
} EKGenerationLocation;

typedef EKGenerationLocation EKCertificateGenerationLocation;

typedef enum EvaluationAssuranceLevel {
  ealevell = 1,
  ealevel2 = 2,
  ealevel3 = 3,
  ealevel4 = 4,
  ealevel5 = 5,
  ealevel6 = 6,
  ealevel7 = 7
} EvaluationAssuranceLevel;

typedef enum SecurityLevel {
  sllevel1 = 1,
  sllevel2 = 2,
  sllevel3 = 3,
  sllevel4 = 4
} SecurityLevel;

typedef enum StrengthOfFunction {
  sof_basic = 0,
  sof_medium = 1,
  sof_high = 2
} StrengthOfFunction;

typedef struct URIReference URIReference;

typedef enum EvaluationStatus {
  designedToMeet = 0,
  evaluationInProgress = 1,
  evaluationCompleted = 2
} EvaluationStatus;

typedef struct TPMSpecification TPMSpecification;

typedef struct CommonCriteriaMeasures CommonCriteriaMeasures;

typedef struct FIPSLevel FIPSLevel;

typedef enum TPMVersion {
  tpm_v1 = 0
} TPMVersion;

typedef struct TPMSecurityAssertions TPMSecurityAssertions;

/* OBJECT IDENTIFIER id-pkix-on-pkinit-ms-san ::= { iso(1) org(3) dod(6) internet(1) private(4) enterprise(1) microsoft(311) label-less(20) label-less(2) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_on_pkinit_ms_san;
#define ASN1_OID_ID_PKIX_ON_PKINIT_MS_SAN (&asn1_oid_id_pkix_on_pkinit_ms_san)

typedef heim_utf8_string AliasUTF8String;

typedef heim_utf8_string AliasIA5String;

typedef heim_printable_string AliasPrintableString;

typedef struct OtherName OtherName;

typedef DirectoryString X520name;

typedef DirectoryString X520CommonName;

typedef DirectoryString X520LocalityName;

typedef DirectoryString X520OrganizationName;

typedef DirectoryString X520StateOrProvinceName;

typedef DirectoryString X520OrganizationalUnitName;

typedef struct SingleAttribute SingleAttribute;

typedef struct AttributeSet AttributeSet;

typedef struct SubjectDirectoryAttributes SubjectDirectoryAttributes;

typedef unsigned int SkipCerts;

typedef struct PolicyConstraints PolicyConstraints;

typedef unsigned int HeimPkinitPrincMaxLifeSecs;

typedef struct Extension Extension;

/* OBJECT IDENTIFIER id-uspkicommon-card-id ::= { label-less(2) label-less(16) label-less(840) label-less(1) label-less(101) label-less(3) label-less(6) label-less(6) } */
extern ASN1EXP const heim_oid asn1_oid_id_uspkicommon_card_id;
#define ASN1_OID_ID_USPKICOMMON_CARD_ID (&asn1_oid_id_uspkicommon_card_id)

/* OBJECT IDENTIFIER id-uspkicommon-piv-interim ::= { label-less(2) label-less(16) label-less(840) label-less(1) label-less(101) label-less(3) label-less(6) label-less(9) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_uspkicommon_piv_interim;
#define ASN1_OID_ID_USPKICOMMON_PIV_INTERIM (&asn1_oid_id_uspkicommon_piv_interim)

/* OBJECT IDENTIFIER id-netscape ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) netscape(113730) } */
extern ASN1EXP const heim_oid asn1_oid_id_netscape;
#define ASN1_OID_ID_NETSCAPE (&asn1_oid_id_netscape)

/* OBJECT IDENTIFIER id-netscape-cert-comment ::= { joint-iso-itu-t(2) country(16) us(840) organization(1) netscape(113730) label-less(1) label-less(13) } */
extern ASN1EXP const heim_oid asn1_oid_id_netscape_cert_comment;
#define ASN1_OID_ID_NETSCAPE_CERT_COMMENT (&asn1_oid_id_netscape_cert_comment)

/* OBJECT IDENTIFIER id-ms-cert-enroll-domaincontroller ::= { label-less(1) label-less(3) label-less(6) label-less(1) label-less(4) label-less(1) label-less(311) label-less(20) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_ms_cert_enroll_domaincontroller;
#define ASN1_OID_ID_MS_CERT_ENROLL_DOMAINCONTROLLER (&asn1_oid_id_ms_cert_enroll_domaincontroller)

#ifdef ub_name
#undef ub_name
#endif
enum { ub_name = 32768 };

#ifdef ub_common_name
#undef ub_common_name
#endif
enum { ub_common_name = 64 };

#ifdef ub_locality_name
#undef ub_locality_name
#endif
enum { ub_locality_name = 128 };

#ifdef ub_state_name
#undef ub_state_name
#endif
enum { ub_state_name = 128 };

#ifdef ub_organization_name
#undef ub_organization_name
#endif
enum { ub_organization_name = 64 };

#ifdef ub_organizational_unit_name
#undef ub_organizational_unit_name
#endif
enum { ub_organizational_unit_name = 64 };

#ifdef ub_title
#undef ub_title
#endif
enum { ub_title = 64 };

#ifdef ub_serial_number
#undef ub_serial_number
#endif
enum { ub_serial_number = 64 };

#ifdef ub_match
#undef ub_match
#endif
enum { ub_match = 128 };

#ifdef ub_emailaddress_length
#undef ub_emailaddress_length
#endif
enum { ub_emailaddress_length = 255 };

#ifdef ub_common_name_length
#undef ub_common_name_length
#endif
enum { ub_common_name_length = 64 };

#ifdef ub_country_name_alpha_length
#undef ub_country_name_alpha_length
#endif
enum { ub_country_name_alpha_length = 2 };

#ifdef ub_country_name_numeric_length
#undef ub_country_name_numeric_length
#endif
enum { ub_country_name_numeric_length = 3 };

#ifdef ub_domain_defined_attributes
#undef ub_domain_defined_attributes
#endif
enum { ub_domain_defined_attributes = 4 };

#ifdef ub_domain_defined_attribute_type_length
#undef ub_domain_defined_attribute_type_length
#endif
enum { ub_domain_defined_attribute_type_length = 8 };

#ifdef ub_domain_defined_attribute_value_length
#undef ub_domain_defined_attribute_value_length
#endif
enum { ub_domain_defined_attribute_value_length = 128 };

#ifdef ub_domain_name_length
#undef ub_domain_name_length
#endif
enum { ub_domain_name_length = 16 };

#ifdef ub_extension_attributes
#undef ub_extension_attributes
#endif
enum { ub_extension_attributes = 256 };

#ifdef ub_e163_4_number_length
#undef ub_e163_4_number_length
#endif
enum { ub_e163_4_number_length = 15 };

#ifdef ub_e163_4_sub_address_length
#undef ub_e163_4_sub_address_length
#endif
enum { ub_e163_4_sub_address_length = 40 };

#ifdef ub_generation_qualifier_length
#undef ub_generation_qualifier_length
#endif
enum { ub_generation_qualifier_length = 3 };

#ifdef ub_given_name_length
#undef ub_given_name_length
#endif
enum { ub_given_name_length = 16 };

#ifdef ub_initials_length
#undef ub_initials_length
#endif
enum { ub_initials_length = 5 };

#ifdef ub_integer_options
#undef ub_integer_options
#endif
enum { ub_integer_options = 256 };

#ifdef ub_numeric_user_id_length
#undef ub_numeric_user_id_length
#endif
enum { ub_numeric_user_id_length = 32 };

#ifdef ub_organization_name_length
#undef ub_organization_name_length
#endif
enum { ub_organization_name_length = 64 };

#ifdef ub_organizational_unit_name_length
#undef ub_organizational_unit_name_length
#endif
enum { ub_organizational_unit_name_length = 32 };

#ifdef ub_organizational_units
#undef ub_organizational_units
#endif
enum { ub_organizational_units = 4 };

#ifdef ub_pds_name_length
#undef ub_pds_name_length
#endif
enum { ub_pds_name_length = 16 };

#ifdef ub_pds_parameter_length
#undef ub_pds_parameter_length
#endif
enum { ub_pds_parameter_length = 30 };

#ifdef ub_pds_physical_address_lines
#undef ub_pds_physical_address_lines
#endif
enum { ub_pds_physical_address_lines = 6 };

#ifdef ub_postal_code_length
#undef ub_postal_code_length
#endif
enum { ub_postal_code_length = 16 };

#ifdef ub_pseudonym
#undef ub_pseudonym
#endif
enum { ub_pseudonym = 128 };

#ifdef ub_surname_length
#undef ub_surname_length
#endif
enum { ub_surname_length = 40 };

#ifdef ub_terminal_id_length
#undef ub_terminal_id_length
#endif
enum { ub_terminal_id_length = 24 };

#ifdef ub_unformatted_address_length
#undef ub_unformatted_address_length
#endif
enum { ub_unformatted_address_length = 180 };

#ifdef ub_x121_address_length
#undef ub_x121_address_length
#endif
enum { ub_x121_address_length = 16 };

/* OBJECT IDENTIFIER id-pkix-qt ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_qt;
#define ASN1_OID_ID_PKIX_QT (&asn1_oid_id_pkix_qt)

/* OBJECT IDENTIFIER id-pkix-qt-cps ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(2) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_qt_cps;
#define ASN1_OID_ID_PKIX_QT_CPS (&asn1_oid_id_pkix_qt_cps)

/* OBJECT IDENTIFIER id-pkix-qt-unotice ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(2) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_qt_unotice;
#define ASN1_OID_ID_PKIX_QT_UNOTICE (&asn1_oid_id_pkix_qt_unotice)

/* OBJECT IDENTIFIER id-pkix-ad ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(48) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ad;
#define ASN1_OID_ID_PKIX_AD (&asn1_oid_id_pkix_ad)

/* OBJECT IDENTIFIER id-pkix-ad-ocsp ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(48) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ad_ocsp;
#define ASN1_OID_ID_PKIX_AD_OCSP (&asn1_oid_id_pkix_ad_ocsp)

/* OBJECT IDENTIFIER id-pkix-ad-caIssuers ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(48) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ad_caIssuers;
#define ASN1_OID_ID_PKIX_AD_CAISSUERS (&asn1_oid_id_pkix_ad_caIssuers)

/* OBJECT IDENTIFIER id-pkix-ad-timeStamping ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(48) label-less(3) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ad_timeStamping;
#define ASN1_OID_ID_PKIX_AD_TIMESTAMPING (&asn1_oid_id_pkix_ad_timeStamping)

/* OBJECT IDENTIFIER id-pkix-ad-caRepository ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) label-less(48) label-less(5) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ad_caRepository;
#define ASN1_OID_ID_PKIX_AD_CAREPOSITORY (&asn1_oid_id_pkix_ad_caRepository)

typedef struct PolicyQualifierInfo PolicyQualifierInfo;

/*
Version ::= INTEGER {
  rfc3280_version_1(0),
  rfc3280_version_2(1),
  rfc3280_version_3(2)
}
*/

enum { asn1_tag_length_Version = 1,
       asn1_tag_class_Version = 0,
       asn1_tag_tag_Version = 2 };
ASN1EXP int    ASN1CALL decode_Version(const unsigned char *, size_t, Version *, size_t *);
ASN1EXP int    ASN1CALL encode_Version(unsigned char *, size_t, const Version *, size_t *);
ASN1EXP size_t ASN1CALL length_Version(const Version *);
ASN1EXP int    ASN1CALL copy_Version  (const Version *, Version *);
ASN1EXP void   ASN1CALL free_Version  (Version *);
ASN1EXP char * ASN1CALL print_Version (const Version *, int);


/*
AttributeType ::= OBJECT IDENTIFIER
*/

enum { asn1_tag_length_AttributeType = 1,
       asn1_tag_class_AttributeType = 0,
       asn1_tag_tag_AttributeType = 6 };
ASN1EXP int    ASN1CALL decode_AttributeType(const unsigned char *, size_t, AttributeType *, size_t *);
ASN1EXP int    ASN1CALL encode_AttributeType(unsigned char *, size_t, const AttributeType *, size_t *);
ASN1EXP size_t ASN1CALL length_AttributeType(const AttributeType *);
ASN1EXP int    ASN1CALL copy_AttributeType  (const AttributeType *, AttributeType *);
ASN1EXP void   ASN1CALL free_AttributeType  (AttributeType *);
ASN1EXP char * ASN1CALL print_AttributeType (const AttributeType *, int);


/*
AlgorithmIdentifier ::= SEQUENCE {
  algorithm         OBJECT IDENTIFIER,
  parameters      HEIM_ANY OPTIONAL,
}
*/

enum { asn1_tag_length_AlgorithmIdentifier = 1,
       asn1_tag_class_AlgorithmIdentifier = 0,
       asn1_tag_tag_AlgorithmIdentifier = 16 };
struct AlgorithmIdentifier {
  heim_oid algorithm;
  HEIM_ANY *parameters;
};

ASN1EXP int    ASN1CALL decode_AlgorithmIdentifier(const unsigned char *, size_t, AlgorithmIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_AlgorithmIdentifier(unsigned char *, size_t, const AlgorithmIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_AlgorithmIdentifier(const AlgorithmIdentifier *);
ASN1EXP int    ASN1CALL copy_AlgorithmIdentifier  (const AlgorithmIdentifier *, AlgorithmIdentifier *);
ASN1EXP void   ASN1CALL free_AlgorithmIdentifier  (AlgorithmIdentifier *);
ASN1EXP char * ASN1CALL print_AlgorithmIdentifier (const AlgorithmIdentifier *, int);


/*
AttributeValue ::= HEIM_ANY
*/


ASN1EXP int    ASN1CALL decode_AttributeValue(const unsigned char *, size_t, AttributeValue *, size_t *);
ASN1EXP int    ASN1CALL encode_AttributeValue(unsigned char *, size_t, const AttributeValue *, size_t *);
ASN1EXP size_t ASN1CALL length_AttributeValue(const AttributeValue *);
ASN1EXP int    ASN1CALL copy_AttributeValue  (const AttributeValue *, AttributeValue *);
ASN1EXP void   ASN1CALL free_AttributeValue  (AttributeValue *);
ASN1EXP char * ASN1CALL print_AttributeValue (const AttributeValue *, int);


/*
DirectoryString ::= CHOICE {
  ia5String           IA5String,
  teletexString     TeletexString,
  printableString     PrintableString,
  universalString     UniversalString,
  utf8String          UTF8String,
  bmpString           BMPString,
}
*/

enum { asn1_tag_length_DirectoryString = 1,
       asn1_tag_class_DirectoryString = 0,
       asn1_tag_tag_DirectoryString = 0 };
struct DirectoryString {
  enum DirectoryString_enum {
    choice_DirectoryString_ia5String = 1,
    choice_DirectoryString_teletexString,
    choice_DirectoryString_printableString,
    choice_DirectoryString_universalString,
    choice_DirectoryString_utf8String,
    choice_DirectoryString_bmpString
  } element;
  union {
    heim_ia5_string ia5String;
    heim_general_string teletexString;
    heim_printable_string printableString;
    heim_universal_string universalString;
    heim_utf8_string utf8String;
    heim_bmp_string bmpString;
  } u;
};

ASN1EXP int    ASN1CALL decode_DirectoryString(const unsigned char *, size_t, DirectoryString *, size_t *);
ASN1EXP int    ASN1CALL encode_DirectoryString(unsigned char *, size_t, const DirectoryString *, size_t *);
ASN1EXP size_t ASN1CALL length_DirectoryString(const DirectoryString *);
ASN1EXP int    ASN1CALL copy_DirectoryString  (const DirectoryString *, DirectoryString *);
ASN1EXP void   ASN1CALL free_DirectoryString  (DirectoryString *);
ASN1EXP char * ASN1CALL print_DirectoryString (const DirectoryString *, int);


/*
AttributeValues ::= SET OF AttributeValue
*/

enum { asn1_tag_length_AttributeValues = 1,
       asn1_tag_class_AttributeValues = 0,
       asn1_tag_tag_AttributeValues = 17 };
struct AttributeValues {
  unsigned int len;
  AttributeValue *val;
};

ASN1EXP int   ASN1CALL add_AttributeValues  (AttributeValues *, const AttributeValue *);
ASN1EXP int   ASN1CALL remove_AttributeValues  (AttributeValues *, unsigned int);
ASN1EXP int    ASN1CALL decode_AttributeValues(const unsigned char *, size_t, AttributeValues *, size_t *);
ASN1EXP int    ASN1CALL encode_AttributeValues(unsigned char *, size_t, const AttributeValues *, size_t *);
ASN1EXP size_t ASN1CALL length_AttributeValues(const AttributeValues *);
ASN1EXP int    ASN1CALL copy_AttributeValues  (const AttributeValues *, AttributeValues *);
ASN1EXP void   ASN1CALL free_AttributeValues  (AttributeValues *);
ASN1EXP char * ASN1CALL print_AttributeValues (const AttributeValues *, int);


/*
Attribute ::= SEQUENCE {
  type            AttributeType,
  value           AttributeValues,
}
*/

enum { asn1_tag_length_Attribute = 1,
       asn1_tag_class_Attribute = 0,
       asn1_tag_tag_Attribute = 16 };
struct Attribute {
  AttributeType type;
  AttributeValues value;
};

ASN1EXP int    ASN1CALL decode_Attribute(const unsigned char *, size_t, Attribute *, size_t *);
ASN1EXP int    ASN1CALL encode_Attribute(unsigned char *, size_t, const Attribute *, size_t *);
ASN1EXP size_t ASN1CALL length_Attribute(const Attribute *);
ASN1EXP int    ASN1CALL copy_Attribute  (const Attribute *, Attribute *);
ASN1EXP void   ASN1CALL free_Attribute  (Attribute *);
ASN1EXP char * ASN1CALL print_Attribute (const Attribute *, int);


/*
AttributeTypeAndValue ::= SEQUENCE {
  type            AttributeType,
  value           DirectoryString,
}
*/

enum { asn1_tag_length_AttributeTypeAndValue = 1,
       asn1_tag_class_AttributeTypeAndValue = 0,
       asn1_tag_tag_AttributeTypeAndValue = 16 };
struct AttributeTypeAndValue {
  AttributeType type;
  DirectoryString value;
};

ASN1EXP int    ASN1CALL decode_AttributeTypeAndValue(const unsigned char *, size_t, AttributeTypeAndValue *, size_t *);
ASN1EXP int    ASN1CALL encode_AttributeTypeAndValue(unsigned char *, size_t, const AttributeTypeAndValue *, size_t *);
ASN1EXP size_t ASN1CALL length_AttributeTypeAndValue(const AttributeTypeAndValue *);
ASN1EXP int    ASN1CALL copy_AttributeTypeAndValue  (const AttributeTypeAndValue *, AttributeTypeAndValue *);
ASN1EXP void   ASN1CALL free_AttributeTypeAndValue  (AttributeTypeAndValue *);
ASN1EXP char * ASN1CALL print_AttributeTypeAndValue (const AttributeTypeAndValue *, int);


/*
RelativeDistinguishedName ::= SET OF AttributeTypeAndValue
*/

enum { asn1_tag_length_RelativeDistinguishedName = 1,
       asn1_tag_class_RelativeDistinguishedName = 0,
       asn1_tag_tag_RelativeDistinguishedName = 17 };
struct RelativeDistinguishedName {
  unsigned int len;
  AttributeTypeAndValue *val;
};

ASN1EXP int    ASN1CALL decode_RelativeDistinguishedName(const unsigned char *, size_t, RelativeDistinguishedName *, size_t *);
ASN1EXP int    ASN1CALL encode_RelativeDistinguishedName(unsigned char *, size_t, const RelativeDistinguishedName *, size_t *);
ASN1EXP size_t ASN1CALL length_RelativeDistinguishedName(const RelativeDistinguishedName *);
ASN1EXP int    ASN1CALL copy_RelativeDistinguishedName  (const RelativeDistinguishedName *, RelativeDistinguishedName *);
ASN1EXP void   ASN1CALL free_RelativeDistinguishedName  (RelativeDistinguishedName *);
ASN1EXP char * ASN1CALL print_RelativeDistinguishedName (const RelativeDistinguishedName *, int);


/*
RDNSequence ::= SEQUENCE OF RelativeDistinguishedName
*/

enum { asn1_tag_length_RDNSequence = 1,
       asn1_tag_class_RDNSequence = 0,
       asn1_tag_tag_RDNSequence = 16 };
struct RDNSequence {
  unsigned int len;
  RelativeDistinguishedName *val;
};

ASN1EXP int   ASN1CALL add_RDNSequence  (RDNSequence *, const RelativeDistinguishedName *);
ASN1EXP int   ASN1CALL remove_RDNSequence  (RDNSequence *, unsigned int);
ASN1EXP int    ASN1CALL decode_RDNSequence(const unsigned char *, size_t, RDNSequence *, size_t *);
ASN1EXP int    ASN1CALL encode_RDNSequence(unsigned char *, size_t, const RDNSequence *, size_t *);
ASN1EXP size_t ASN1CALL length_RDNSequence(const RDNSequence *);
ASN1EXP int    ASN1CALL copy_RDNSequence  (const RDNSequence *, RDNSequence *);
ASN1EXP void   ASN1CALL free_RDNSequence  (RDNSequence *);
ASN1EXP char * ASN1CALL print_RDNSequence (const RDNSequence *, int);


/*
Name ::= CHOICE {
  rdnSequence     RDNSequence,
}
*/

enum { asn1_tag_length_Name = 1,
       asn1_tag_class_Name = 0,
       asn1_tag_tag_Name = 0 };
struct Name {
  heim_octet_string _save;
  enum Name_enum {
    choice_Name_rdnSequence = 1
  } element;
  union {
    RDNSequence rdnSequence;
  } u;
};

ASN1EXP int    ASN1CALL decode_Name(const unsigned char *, size_t, Name *, size_t *);
ASN1EXP int    ASN1CALL encode_Name(unsigned char *, size_t, const Name *, size_t *);
ASN1EXP size_t ASN1CALL length_Name(const Name *);
ASN1EXP int    ASN1CALL copy_Name  (const Name *, Name *);
ASN1EXP void   ASN1CALL free_Name  (Name *);
ASN1EXP char * ASN1CALL print_Name (const Name *, int);


/*
CertificateSerialNumber ::= INTEGER
*/

enum { asn1_tag_length_CertificateSerialNumber = 1,
       asn1_tag_class_CertificateSerialNumber = 0,
       asn1_tag_tag_CertificateSerialNumber = 2 };
ASN1EXP int    ASN1CALL decode_CertificateSerialNumber(const unsigned char *, size_t, CertificateSerialNumber *, size_t *);
ASN1EXP int    ASN1CALL encode_CertificateSerialNumber(unsigned char *, size_t, const CertificateSerialNumber *, size_t *);
ASN1EXP size_t ASN1CALL length_CertificateSerialNumber(const CertificateSerialNumber *);
ASN1EXP int    ASN1CALL copy_CertificateSerialNumber  (const CertificateSerialNumber *, CertificateSerialNumber *);
ASN1EXP void   ASN1CALL free_CertificateSerialNumber  (CertificateSerialNumber *);
ASN1EXP char * ASN1CALL print_CertificateSerialNumber (const CertificateSerialNumber *, int);


/*
Time ::= CHOICE {
  utcTime         UTCTime,
  generalTime     GeneralizedTime,
}
*/

enum { asn1_tag_length_Time = 1,
       asn1_tag_class_Time = 0,
       asn1_tag_tag_Time = 0 };
struct Time {
  enum Time_enum {
    choice_Time_utcTime = 1,
    choice_Time_generalTime
  } element;
  union {
    time_t utcTime;
    time_t generalTime;
  } u;
};

ASN1EXP int    ASN1CALL decode_Time(const unsigned char *, size_t, Time *, size_t *);
ASN1EXP int    ASN1CALL encode_Time(unsigned char *, size_t, const Time *, size_t *);
ASN1EXP size_t ASN1CALL length_Time(const Time *);
ASN1EXP int    ASN1CALL copy_Time  (const Time *, Time *);
ASN1EXP void   ASN1CALL free_Time  (Time *);
ASN1EXP char * ASN1CALL print_Time (const Time *, int);


/*
Validity ::= SEQUENCE {
  notBefore       Time,
  notAfter        Time,
}
*/

enum { asn1_tag_length_Validity = 1,
       asn1_tag_class_Validity = 0,
       asn1_tag_tag_Validity = 16 };
struct Validity {
  Time notBefore;
  Time notAfter;
};

ASN1EXP int    ASN1CALL decode_Validity(const unsigned char *, size_t, Validity *, size_t *);
ASN1EXP int    ASN1CALL encode_Validity(unsigned char *, size_t, const Validity *, size_t *);
ASN1EXP size_t ASN1CALL length_Validity(const Validity *);
ASN1EXP int    ASN1CALL copy_Validity  (const Validity *, Validity *);
ASN1EXP void   ASN1CALL free_Validity  (Validity *);
ASN1EXP char * ASN1CALL print_Validity (const Validity *, int);


/*
UniqueIdentifier ::= BIT STRING {
}
*/

enum { asn1_tag_length_UniqueIdentifier = 1,
       asn1_tag_class_UniqueIdentifier = 0,
       asn1_tag_tag_UniqueIdentifier = 3 };
ASN1EXP int    ASN1CALL decode_UniqueIdentifier(const unsigned char *, size_t, UniqueIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_UniqueIdentifier(unsigned char *, size_t, const UniqueIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_UniqueIdentifier(const UniqueIdentifier *);
ASN1EXP int    ASN1CALL copy_UniqueIdentifier  (const UniqueIdentifier *, UniqueIdentifier *);
ASN1EXP void   ASN1CALL free_UniqueIdentifier  (UniqueIdentifier *);
ASN1EXP char * ASN1CALL print_UniqueIdentifier (const UniqueIdentifier *, int);


/*
SubjectPublicKeyInfo ::= SEQUENCE {
  algorithm          AlgorithmIdentifier,
  subjectPublicKey     BIT STRING {
  },
}
*/

enum { asn1_tag_length_SubjectPublicKeyInfo = 1,
       asn1_tag_class_SubjectPublicKeyInfo = 0,
       asn1_tag_tag_SubjectPublicKeyInfo = 16 };
struct SubjectPublicKeyInfo {
  AlgorithmIdentifier algorithm;
  heim_bit_string subjectPublicKey;
};

ASN1EXP int    ASN1CALL decode_SubjectPublicKeyInfo(const unsigned char *, size_t, SubjectPublicKeyInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_SubjectPublicKeyInfo(unsigned char *, size_t, const SubjectPublicKeyInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_SubjectPublicKeyInfo(const SubjectPublicKeyInfo *);
ASN1EXP int    ASN1CALL copy_SubjectPublicKeyInfo  (const SubjectPublicKeyInfo *, SubjectPublicKeyInfo *);
ASN1EXP void   ASN1CALL free_SubjectPublicKeyInfo  (SubjectPublicKeyInfo *);
ASN1EXP char * ASN1CALL print_SubjectPublicKeyInfo (const SubjectPublicKeyInfo *, int);


/*
Extension ::= SEQUENCE {
  extnID            OBJECT IDENTIFIER,
  critical        BOOLEAN,
  extnValue       OCTET STRING,
}
*/

enum { asn1_tag_length_Extension = 1,
       asn1_tag_class_Extension = 0,
       asn1_tag_tag_Extension = 16 };
struct Extension {
  heim_oid extnID;
  int critical;
  heim_octet_string extnValue;
struct {
enum { choice_Extension_iosnumunknown = 0,
choice_Extension_iosnum_id_heim_ce_pkinit_princ_max_life,
choice_Extension_iosnum_id_pkix_pe_authorityInfoAccess,
choice_Extension_iosnum_id_pkix_pe_subjectInfoAccess,
choice_Extension_iosnum_id_pkix_pe_proxyCertInfo,
choice_Extension_iosnum_id_x509_ce_subjectDirectoryAttributes,
choice_Extension_iosnum_id_x509_ce_subjectKeyIdentifier,
choice_Extension_iosnum_id_x509_ce_keyUsage,
choice_Extension_iosnum_id_x509_ce_privateKeyUsagePeriod,
choice_Extension_iosnum_id_x509_ce_subjectAltName,
choice_Extension_iosnum_id_x509_ce_issuerAltName,
choice_Extension_iosnum_id_x509_ce_basicConstraints,
choice_Extension_iosnum_id_x509_ce_nameConstraints,
choice_Extension_iosnum_id_x509_ce_cRLDistributionPoints,
choice_Extension_iosnum_id_x509_ce_certificatePolicies,
choice_Extension_iosnum_id_x509_ce_policyMappings,
choice_Extension_iosnum_id_x509_ce_authorityKeyIdentifier,
choice_Extension_iosnum_id_x509_ce_policyConstraints,
choice_Extension_iosnum_id_x509_ce_extKeyUsage,
choice_Extension_iosnum_id_x509_ce_freshestCRL,
choice_Extension_iosnum_id_x509_ce_inhibitAnyPolicy,
} element;
union {
void *_any;
    HeimPkinitPrincMaxLifeSecs *ext_HeimPkinitPrincMaxLife;
    AuthorityInfoAccessSyntax *ext_AuthorityInfoAccess;
    SubjectInfoAccessSyntax *ext_SubjectInfoAccessSyntax;
    ProxyCertInfo *ext_ProxyCertInfo;
    SubjectDirectoryAttributes *ext_SubjectDirectoryAttributes;
    SubjectKeyIdentifier *ext_SubjectKeyIdentifier;
    KeyUsage *ext_KeyUsage;
    PrivateKeyUsagePeriod *ext_PrivateKeyUsagePeriod;
    GeneralNames *ext_SubjectAltName;
    GeneralNames *ext_IssuerAltName;
    BasicConstraints *ext_BasicConstraints;
    NameConstraints *ext_NameConstraints;
    CRLDistributionPoints *ext_CRLDistributionPoints;
    CertificatePolicies *ext_CertificatePolicies;
    PolicyMappings *ext_PolicyMappings;
    AuthorityKeyIdentifier *ext_AuthorityKeyIdentifier;
    PolicyConstraints *ext_PolicyConstraints;
    ExtKeyUsage *ext_ExtKeyUsage;
    CRLDistributionPoints *ext_FreshestCRL;
    SkipCerts *ext_InhibitAnyPolicy;
} u;
} _ioschoice_extnValue;
};

ASN1EXP int    ASN1CALL decode_Extension(const unsigned char *, size_t, Extension *, size_t *);
ASN1EXP int    ASN1CALL encode_Extension(unsigned char *, size_t, const Extension *, size_t *);
ASN1EXP size_t ASN1CALL length_Extension(const Extension *);
ASN1EXP int    ASN1CALL copy_Extension  (const Extension *, Extension *);
ASN1EXP void   ASN1CALL free_Extension  (Extension *);
ASN1EXP char * ASN1CALL print_Extension (const Extension *, int);


/*
Extensions ::= SEQUENCE OF Extension
*/

enum { asn1_tag_length_Extensions = 1,
       asn1_tag_class_Extensions = 0,
       asn1_tag_tag_Extensions = 16 };
struct Extensions {
  unsigned int len;
  Extension *val;
};

ASN1EXP int   ASN1CALL add_Extensions  (Extensions *, const Extension *);
ASN1EXP int   ASN1CALL remove_Extensions  (Extensions *, unsigned int);
ASN1EXP int    ASN1CALL decode_Extensions(const unsigned char *, size_t, Extensions *, size_t *);
ASN1EXP int    ASN1CALL encode_Extensions(unsigned char *, size_t, const Extensions *, size_t *);
ASN1EXP size_t ASN1CALL length_Extensions(const Extensions *);
ASN1EXP int    ASN1CALL copy_Extensions  (const Extensions *, Extensions *);
ASN1EXP void   ASN1CALL free_Extensions  (Extensions *);
ASN1EXP char * ASN1CALL print_Extensions (const Extensions *, int);


/*
TBSCertificate ::= SEQUENCE {
  version                [0] Version OPTIONAL,
  serialNumber           CertificateSerialNumber,
  signature              AlgorithmIdentifier,
  issuer                 Name,
  validity               Validity,
  subject                Name,
  subjectPublicKeyInfo   SubjectPublicKeyInfo,
  issuerUniqueID         [1] IMPLICIT   BIT STRING {
  } OPTIONAL,
  subjectUniqueID        [2] IMPLICIT   BIT STRING {
  } OPTIONAL,
  extensions             [3] Extensions OPTIONAL,
}
*/

enum { asn1_tag_length_TBSCertificate = 1,
       asn1_tag_class_TBSCertificate = 0,
       asn1_tag_tag_TBSCertificate = 16 };
struct TBSCertificate {
  heim_octet_string _save;
  Version *version;
  CertificateSerialNumber serialNumber;
  AlgorithmIdentifier signature;
  Name issuer;
  Validity validity;
  Name subject;
  SubjectPublicKeyInfo subjectPublicKeyInfo;
  heim_bit_string *issuerUniqueID;
  heim_bit_string *subjectUniqueID;
  Extensions *extensions;
};

ASN1EXP int    ASN1CALL decode_TBSCertificate(const unsigned char *, size_t, TBSCertificate *, size_t *);
ASN1EXP int    ASN1CALL encode_TBSCertificate(unsigned char *, size_t, const TBSCertificate *, size_t *);
ASN1EXP size_t ASN1CALL length_TBSCertificate(const TBSCertificate *);
ASN1EXP int    ASN1CALL copy_TBSCertificate  (const TBSCertificate *, TBSCertificate *);
ASN1EXP void   ASN1CALL free_TBSCertificate  (TBSCertificate *);
ASN1EXP char * ASN1CALL print_TBSCertificate (const TBSCertificate *, int);


/*
Certificate ::= SEQUENCE {
  tbsCertificate       TBSCertificate,
  signatureAlgorithm   AlgorithmIdentifier,
  signatureValue         BIT STRING {
  },
}
*/

enum { asn1_tag_length_Certificate = 1,
       asn1_tag_class_Certificate = 0,
       asn1_tag_tag_Certificate = 16 };
struct Certificate {
  TBSCertificate tbsCertificate;
  AlgorithmIdentifier signatureAlgorithm;
  heim_bit_string signatureValue;
};

ASN1EXP int    ASN1CALL decode_Certificate(const unsigned char *, size_t, Certificate *, size_t *);
ASN1EXP int    ASN1CALL encode_Certificate(unsigned char *, size_t, const Certificate *, size_t *);
ASN1EXP size_t ASN1CALL length_Certificate(const Certificate *);
ASN1EXP int    ASN1CALL copy_Certificate  (const Certificate *, Certificate *);
ASN1EXP void   ASN1CALL free_Certificate  (Certificate *);
ASN1EXP char * ASN1CALL print_Certificate (const Certificate *, int);


/*
Certificates ::= SEQUENCE OF Certificate
*/

enum { asn1_tag_length_Certificates = 1,
       asn1_tag_class_Certificates = 0,
       asn1_tag_tag_Certificates = 16 };
struct Certificates {
  unsigned int len;
  Certificate *val;
};

ASN1EXP int   ASN1CALL add_Certificates  (Certificates *, const Certificate *);
ASN1EXP int   ASN1CALL remove_Certificates  (Certificates *, unsigned int);
ASN1EXP int    ASN1CALL decode_Certificates(const unsigned char *, size_t, Certificates *, size_t *);
ASN1EXP int    ASN1CALL encode_Certificates(unsigned char *, size_t, const Certificates *, size_t *);
ASN1EXP size_t ASN1CALL length_Certificates(const Certificates *);
ASN1EXP int    ASN1CALL copy_Certificates  (const Certificates *, Certificates *);
ASN1EXP void   ASN1CALL free_Certificates  (Certificates *);
ASN1EXP char * ASN1CALL print_Certificates (const Certificates *, int);


/*
ValidationParms ::= SEQUENCE {
  seed              BIT STRING {
  },
  pgenCounter     INTEGER,
}
*/

enum { asn1_tag_length_ValidationParms = 1,
       asn1_tag_class_ValidationParms = 0,
       asn1_tag_tag_ValidationParms = 16 };
struct ValidationParms {
  heim_bit_string seed;
  heim_integer pgenCounter;
};

ASN1EXP int    ASN1CALL decode_ValidationParms(const unsigned char *, size_t, ValidationParms *, size_t *);
ASN1EXP int    ASN1CALL encode_ValidationParms(unsigned char *, size_t, const ValidationParms *, size_t *);
ASN1EXP size_t ASN1CALL length_ValidationParms(const ValidationParms *);
ASN1EXP int    ASN1CALL copy_ValidationParms  (const ValidationParms *, ValidationParms *);
ASN1EXP void   ASN1CALL free_ValidationParms  (ValidationParms *);
ASN1EXP char * ASN1CALL print_ValidationParms (const ValidationParms *, int);


/*
DomainParameters ::= SEQUENCE {
  p                 INTEGER,
  g                 INTEGER,
  q                 INTEGER OPTIONAL,
  j                 INTEGER OPTIONAL,
  validationParms   ValidationParms OPTIONAL,
}
*/

enum { asn1_tag_length_DomainParameters = 1,
       asn1_tag_class_DomainParameters = 0,
       asn1_tag_tag_DomainParameters = 16 };
struct DomainParameters {
  heim_integer p;
  heim_integer g;
  heim_integer *q;
  heim_integer *j;
  ValidationParms *validationParms;
};

ASN1EXP int    ASN1CALL decode_DomainParameters(const unsigned char *, size_t, DomainParameters *, size_t *);
ASN1EXP int    ASN1CALL encode_DomainParameters(unsigned char *, size_t, const DomainParameters *, size_t *);
ASN1EXP size_t ASN1CALL length_DomainParameters(const DomainParameters *);
ASN1EXP int    ASN1CALL copy_DomainParameters  (const DomainParameters *, DomainParameters *);
ASN1EXP void   ASN1CALL free_DomainParameters  (DomainParameters *);
ASN1EXP char * ASN1CALL print_DomainParameters (const DomainParameters *, int);


/*
DHParameter ::= SEQUENCE {
  prime                INTEGER,
  base                 INTEGER,
  privateValueLength   INTEGER OPTIONAL,
}
*/

enum { asn1_tag_length_DHParameter = 1,
       asn1_tag_class_DHParameter = 0,
       asn1_tag_tag_DHParameter = 16 };
struct DHParameter {
  heim_integer prime;
  heim_integer base;
  heim_integer *privateValueLength;
};

ASN1EXP int    ASN1CALL decode_DHParameter(const unsigned char *, size_t, DHParameter *, size_t *);
ASN1EXP int    ASN1CALL encode_DHParameter(unsigned char *, size_t, const DHParameter *, size_t *);
ASN1EXP size_t ASN1CALL length_DHParameter(const DHParameter *);
ASN1EXP int    ASN1CALL copy_DHParameter  (const DHParameter *, DHParameter *);
ASN1EXP void   ASN1CALL free_DHParameter  (DHParameter *);
ASN1EXP char * ASN1CALL print_DHParameter (const DHParameter *, int);


/*
DHPublicKey ::= INTEGER
*/

enum { asn1_tag_length_DHPublicKey = 1,
       asn1_tag_class_DHPublicKey = 0,
       asn1_tag_tag_DHPublicKey = 2 };
ASN1EXP int    ASN1CALL decode_DHPublicKey(const unsigned char *, size_t, DHPublicKey *, size_t *);
ASN1EXP int    ASN1CALL encode_DHPublicKey(unsigned char *, size_t, const DHPublicKey *, size_t *);
ASN1EXP size_t ASN1CALL length_DHPublicKey(const DHPublicKey *);
ASN1EXP int    ASN1CALL copy_DHPublicKey  (const DHPublicKey *, DHPublicKey *);
ASN1EXP void   ASN1CALL free_DHPublicKey  (DHPublicKey *);
ASN1EXP char * ASN1CALL print_DHPublicKey (const DHPublicKey *, int);


/*
OtherName ::= SEQUENCE {
  type-id           OBJECT IDENTIFIER,
  value           [0] HEIM_ANY,
}
*/

enum { asn1_tag_length_OtherName = 1,
       asn1_tag_class_OtherName = 0,
       asn1_tag_tag_OtherName = 16 };
struct OtherName {
  heim_oid type_id;
  HEIM_ANY value;
struct {
enum { choice_OtherName_iosnumunknown = 0,
choice_OtherName_iosnum_id_pkix_on_pkinit_ms_san,
choice_OtherName_iosnum_id_pkix_on_pkinit_san,
choice_OtherName_iosnum_id_pkix_on_permanentIdentifier,
choice_OtherName_iosnum_id_pkix_on_hardwareModuleName,
choice_OtherName_iosnum_id_pkix_on_xmppAddr,
choice_OtherName_iosnum_id_pkix_on_dnsSRV,
} element;
union {
void *_any;
    AliasUTF8String *on_pkinit_ms_san;
    KRB5PrincipalName *on_krb5PrincipalName;
    PermanentIdentifier *on_permanentIdentifier;
    HardwareModuleName *on_hardwareModuleName;
    AliasUTF8String *on_xmppAddr;
    AliasIA5String *on_dnsSRV;
} u;
} _ioschoice_value;
};

ASN1EXP int    ASN1CALL decode_OtherName(const unsigned char *, size_t, OtherName *, size_t *);
ASN1EXP int    ASN1CALL encode_OtherName(unsigned char *, size_t, const OtherName *, size_t *);
ASN1EXP size_t ASN1CALL length_OtherName(const OtherName *);
ASN1EXP int    ASN1CALL copy_OtherName  (const OtherName *, OtherName *);
ASN1EXP void   ASN1CALL free_OtherName  (OtherName *);
ASN1EXP char * ASN1CALL print_OtherName (const OtherName *, int);


/*
GeneralName ::= CHOICE {
  otherName                   [0] IMPLICIT OtherName,
  rfc822Name                  [1] IMPLICIT   IA5String,
  dNSName                     [2] IMPLICIT   IA5String,
  directoryName               [4] IMPLICIT Name,
  uniformResourceIdentifier   [6] IMPLICIT   IA5String,
  iPAddress                   [7] IMPLICIT OCTET STRING,
  registeredID                [8] IMPLICIT   OBJECT IDENTIFIER,
}
*/

enum { asn1_tag_length_GeneralName = 1,
       asn1_tag_class_GeneralName = 0,
       asn1_tag_tag_GeneralName = 0 };
struct GeneralName {
  enum GeneralName_enum {
    choice_GeneralName_otherName = 1,
    choice_GeneralName_rfc822Name,
    choice_GeneralName_dNSName,
    choice_GeneralName_directoryName,
    choice_GeneralName_uniformResourceIdentifier,
    choice_GeneralName_iPAddress,
    choice_GeneralName_registeredID
  } element;
  union {
    OtherName otherName;
    heim_ia5_string rfc822Name;
    heim_ia5_string dNSName;
    Name directoryName;
    heim_ia5_string uniformResourceIdentifier;
    heim_octet_string iPAddress;
    heim_oid registeredID;
  } u;
};

ASN1EXP int    ASN1CALL decode_GeneralName(const unsigned char *, size_t, GeneralName *, size_t *);
ASN1EXP int    ASN1CALL encode_GeneralName(unsigned char *, size_t, const GeneralName *, size_t *);
ASN1EXP size_t ASN1CALL length_GeneralName(const GeneralName *);
ASN1EXP int    ASN1CALL copy_GeneralName  (const GeneralName *, GeneralName *);
ASN1EXP void   ASN1CALL free_GeneralName  (GeneralName *);
ASN1EXP char * ASN1CALL print_GeneralName (const GeneralName *, int);


/*
GeneralNames ::= SEQUENCE OF GeneralName
*/

enum { asn1_tag_length_GeneralNames = 1,
       asn1_tag_class_GeneralNames = 0,
       asn1_tag_tag_GeneralNames = 16 };
struct GeneralNames {
  unsigned int len;
  GeneralName *val;
};

ASN1EXP int   ASN1CALL add_GeneralNames  (GeneralNames *, const GeneralName *);
ASN1EXP int   ASN1CALL remove_GeneralNames  (GeneralNames *, unsigned int);
ASN1EXP int    ASN1CALL decode_GeneralNames(const unsigned char *, size_t, GeneralNames *, size_t *);
ASN1EXP int    ASN1CALL encode_GeneralNames(unsigned char *, size_t, const GeneralNames *, size_t *);
ASN1EXP size_t ASN1CALL length_GeneralNames(const GeneralNames *);
ASN1EXP int    ASN1CALL copy_GeneralNames  (const GeneralNames *, GeneralNames *);
ASN1EXP void   ASN1CALL free_GeneralNames  (GeneralNames *);
ASN1EXP char * ASN1CALL print_GeneralNames (const GeneralNames *, int);


/*
KeyUsage ::= BIT STRING {
  digitalSignature(0),
  nonRepudiation(1),
  keyEncipherment(2),
  dataEncipherment(3),
  keyAgreement(4),
  keyCertSign(5),
  cRLSign(6),
  encipherOnly(7),
  decipherOnly(8)
}
*/

enum { asn1_tag_length_KeyUsage = 1,
       asn1_tag_class_KeyUsage = 0,
       asn1_tag_tag_KeyUsage = 3 };
uint64_t KeyUsage2int(KeyUsage);
KeyUsage int2KeyUsage(uint64_t);
const struct units * asn1_KeyUsage_units(void);
ASN1EXP int    ASN1CALL decode_KeyUsage(const unsigned char *, size_t, KeyUsage *, size_t *);
ASN1EXP int    ASN1CALL encode_KeyUsage(unsigned char *, size_t, const KeyUsage *, size_t *);
ASN1EXP size_t ASN1CALL length_KeyUsage(const KeyUsage *);
ASN1EXP int    ASN1CALL copy_KeyUsage  (const KeyUsage *, KeyUsage *);
ASN1EXP void   ASN1CALL free_KeyUsage  (KeyUsage *);
ASN1EXP char * ASN1CALL print_KeyUsage (const KeyUsage *, int);


/*
PrivateKeyUsagePeriod ::= SEQUENCE {
  notBefore       [0] IMPLICIT GeneralizedTime OPTIONAL,
  notAfter        [1] IMPLICIT GeneralizedTime OPTIONAL,
}
*/

enum { asn1_tag_length_PrivateKeyUsagePeriod = 1,
       asn1_tag_class_PrivateKeyUsagePeriod = 0,
       asn1_tag_tag_PrivateKeyUsagePeriod = 16 };
struct PrivateKeyUsagePeriod {
  time_t *notBefore;
  time_t *notAfter;
};

ASN1EXP int    ASN1CALL decode_PrivateKeyUsagePeriod(const unsigned char *, size_t, PrivateKeyUsagePeriod *, size_t *);
ASN1EXP int    ASN1CALL encode_PrivateKeyUsagePeriod(unsigned char *, size_t, const PrivateKeyUsagePeriod *, size_t *);
ASN1EXP size_t ASN1CALL length_PrivateKeyUsagePeriod(const PrivateKeyUsagePeriod *);
ASN1EXP int    ASN1CALL copy_PrivateKeyUsagePeriod  (const PrivateKeyUsagePeriod *, PrivateKeyUsagePeriod *);
ASN1EXP void   ASN1CALL free_PrivateKeyUsagePeriod  (PrivateKeyUsagePeriod *);
ASN1EXP char * ASN1CALL print_PrivateKeyUsagePeriod (const PrivateKeyUsagePeriod *, int);


/*
CertPolicyId ::= OBJECT IDENTIFIER
*/

enum { asn1_tag_length_CertPolicyId = 1,
       asn1_tag_class_CertPolicyId = 0,
       asn1_tag_tag_CertPolicyId = 6 };
ASN1EXP int    ASN1CALL decode_CertPolicyId(const unsigned char *, size_t, CertPolicyId *, size_t *);
ASN1EXP int    ASN1CALL encode_CertPolicyId(unsigned char *, size_t, const CertPolicyId *, size_t *);
ASN1EXP size_t ASN1CALL length_CertPolicyId(const CertPolicyId *);
ASN1EXP int    ASN1CALL copy_CertPolicyId  (const CertPolicyId *, CertPolicyId *);
ASN1EXP void   ASN1CALL free_CertPolicyId  (CertPolicyId *);
ASN1EXP char * ASN1CALL print_CertPolicyId (const CertPolicyId *, int);


/*
PolicyQualifierId ::= OBJECT IDENTIFIER
*/

enum { asn1_tag_length_PolicyQualifierId = 1,
       asn1_tag_class_PolicyQualifierId = 0,
       asn1_tag_tag_PolicyQualifierId = 6 };
ASN1EXP int    ASN1CALL decode_PolicyQualifierId(const unsigned char *, size_t, PolicyQualifierId *, size_t *);
ASN1EXP int    ASN1CALL encode_PolicyQualifierId(unsigned char *, size_t, const PolicyQualifierId *, size_t *);
ASN1EXP size_t ASN1CALL length_PolicyQualifierId(const PolicyQualifierId *);
ASN1EXP int    ASN1CALL copy_PolicyQualifierId  (const PolicyQualifierId *, PolicyQualifierId *);
ASN1EXP void   ASN1CALL free_PolicyQualifierId  (PolicyQualifierId *);
ASN1EXP char * ASN1CALL print_PolicyQualifierId (const PolicyQualifierId *, int);


/*
PolicyQualifierInfo ::= SEQUENCE {
  policyQualifierId     OBJECT IDENTIFIER,
  qualifier           HEIM_ANY,
}
*/

enum { asn1_tag_length_PolicyQualifierInfo = 1,
       asn1_tag_class_PolicyQualifierInfo = 0,
       asn1_tag_tag_PolicyQualifierInfo = 16 };
struct PolicyQualifierInfo {
  heim_oid policyQualifierId;
  HEIM_ANY qualifier;
struct {
enum { choice_PolicyQualifierInfo_iosnumunknown = 0,
choice_PolicyQualifierInfo_iosnum_id_pkix_qt_cps,
choice_PolicyQualifierInfo_iosnum_id_pkix_qt_unotice,
} element;
union {
void *_any;
    AliasIA5String *pq_CPS;
    UserNotice *pq_UserNotice;
} u;
} _ioschoice_qualifier;
};

ASN1EXP int    ASN1CALL decode_PolicyQualifierInfo(const unsigned char *, size_t, PolicyQualifierInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_PolicyQualifierInfo(unsigned char *, size_t, const PolicyQualifierInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_PolicyQualifierInfo(const PolicyQualifierInfo *);
ASN1EXP int    ASN1CALL copy_PolicyQualifierInfo  (const PolicyQualifierInfo *, PolicyQualifierInfo *);
ASN1EXP void   ASN1CALL free_PolicyQualifierInfo  (PolicyQualifierInfo *);
ASN1EXP char * ASN1CALL print_PolicyQualifierInfo (const PolicyQualifierInfo *, int);


/*
PolicyQualifierInfos ::= SEQUENCE OF PolicyQualifierInfo
*/

enum { asn1_tag_length_PolicyQualifierInfos = 1,
       asn1_tag_class_PolicyQualifierInfos = 0,
       asn1_tag_tag_PolicyQualifierInfos = 16 };
struct PolicyQualifierInfos {
  unsigned int len;
  PolicyQualifierInfo *val;
};

ASN1EXP int   ASN1CALL add_PolicyQualifierInfos  (PolicyQualifierInfos *, const PolicyQualifierInfo *);
ASN1EXP int   ASN1CALL remove_PolicyQualifierInfos  (PolicyQualifierInfos *, unsigned int);
ASN1EXP int    ASN1CALL decode_PolicyQualifierInfos(const unsigned char *, size_t, PolicyQualifierInfos *, size_t *);
ASN1EXP int    ASN1CALL encode_PolicyQualifierInfos(unsigned char *, size_t, const PolicyQualifierInfos *, size_t *);
ASN1EXP size_t ASN1CALL length_PolicyQualifierInfos(const PolicyQualifierInfos *);
ASN1EXP int    ASN1CALL copy_PolicyQualifierInfos  (const PolicyQualifierInfos *, PolicyQualifierInfos *);
ASN1EXP void   ASN1CALL free_PolicyQualifierInfos  (PolicyQualifierInfos *);
ASN1EXP char * ASN1CALL print_PolicyQualifierInfos (const PolicyQualifierInfos *, int);


/*
PolicyInformation ::= SEQUENCE {
  policyIdentifier   CertPolicyId,
  policyQualifiers   PolicyQualifierInfos OPTIONAL,
}
*/

enum { asn1_tag_length_PolicyInformation = 1,
       asn1_tag_class_PolicyInformation = 0,
       asn1_tag_tag_PolicyInformation = 16 };
struct PolicyInformation {
  CertPolicyId policyIdentifier;
  PolicyQualifierInfos *policyQualifiers;
};

ASN1EXP int    ASN1CALL decode_PolicyInformation(const unsigned char *, size_t, PolicyInformation *, size_t *);
ASN1EXP int    ASN1CALL encode_PolicyInformation(unsigned char *, size_t, const PolicyInformation *, size_t *);
ASN1EXP size_t ASN1CALL length_PolicyInformation(const PolicyInformation *);
ASN1EXP int    ASN1CALL copy_PolicyInformation  (const PolicyInformation *, PolicyInformation *);
ASN1EXP void   ASN1CALL free_PolicyInformation  (PolicyInformation *);
ASN1EXP char * ASN1CALL print_PolicyInformation (const PolicyInformation *, int);


/*
CertificatePolicies ::= SEQUENCE OF PolicyInformation
*/

enum { asn1_tag_length_CertificatePolicies = 1,
       asn1_tag_class_CertificatePolicies = 0,
       asn1_tag_tag_CertificatePolicies = 16 };
struct CertificatePolicies {
  unsigned int len;
  PolicyInformation *val;
};

ASN1EXP int   ASN1CALL add_CertificatePolicies  (CertificatePolicies *, const PolicyInformation *);
ASN1EXP int   ASN1CALL remove_CertificatePolicies  (CertificatePolicies *, unsigned int);
ASN1EXP int    ASN1CALL decode_CertificatePolicies(const unsigned char *, size_t, CertificatePolicies *, size_t *);
ASN1EXP int    ASN1CALL encode_CertificatePolicies(unsigned char *, size_t, const CertificatePolicies *, size_t *);
ASN1EXP size_t ASN1CALL length_CertificatePolicies(const CertificatePolicies *);
ASN1EXP int    ASN1CALL copy_CertificatePolicies  (const CertificatePolicies *, CertificatePolicies *);
ASN1EXP void   ASN1CALL free_CertificatePolicies  (CertificatePolicies *);
ASN1EXP char * ASN1CALL print_CertificatePolicies (const CertificatePolicies *, int);


/*
CPSuri ::= IA5String
*/

enum { asn1_tag_length_CPSuri = 1,
       asn1_tag_class_CPSuri = 0,
       asn1_tag_tag_CPSuri = 22 };
ASN1EXP int    ASN1CALL decode_CPSuri(const unsigned char *, size_t, CPSuri *, size_t *);
ASN1EXP int    ASN1CALL encode_CPSuri(unsigned char *, size_t, const CPSuri *, size_t *);
ASN1EXP size_t ASN1CALL length_CPSuri(const CPSuri *);
ASN1EXP int    ASN1CALL copy_CPSuri  (const CPSuri *, CPSuri *);
ASN1EXP void   ASN1CALL free_CPSuri  (CPSuri *);
ASN1EXP char * ASN1CALL print_CPSuri (const CPSuri *, int);


/*
DisplayText ::= CHOICE {
  ia5String         IA5String,
  visibleString     VisibleString,
  bmpString         BMPString,
  utf8String        UTF8String,
}
*/

enum { asn1_tag_length_DisplayText = 1,
       asn1_tag_class_DisplayText = 0,
       asn1_tag_tag_DisplayText = 0 };
struct DisplayText {
  enum DisplayText_enum {
    choice_DisplayText_ia5String = 1,
    choice_DisplayText_visibleString,
    choice_DisplayText_bmpString,
    choice_DisplayText_utf8String
  } element;
  union {
    heim_ia5_string ia5String;
    heim_visible_string visibleString;
    heim_bmp_string bmpString;
    heim_utf8_string utf8String;
  } u;
};

ASN1EXP int    ASN1CALL decode_DisplayText(const unsigned char *, size_t, DisplayText *, size_t *);
ASN1EXP int    ASN1CALL encode_DisplayText(unsigned char *, size_t, const DisplayText *, size_t *);
ASN1EXP size_t ASN1CALL length_DisplayText(const DisplayText *);
ASN1EXP int    ASN1CALL copy_DisplayText  (const DisplayText *, DisplayText *);
ASN1EXP void   ASN1CALL free_DisplayText  (DisplayText *);
ASN1EXP char * ASN1CALL print_DisplayText (const DisplayText *, int);


/*
NoticeReference ::= SEQUENCE {
  organization    DisplayText,
  noticeNumbers   SEQUENCE OF INTEGER,
}
*/

enum { asn1_tag_length_NoticeReference = 1,
       asn1_tag_class_NoticeReference = 0,
       asn1_tag_tag_NoticeReference = 16 };
struct NoticeReference {
  DisplayText organization;
  struct NoticeReference_noticeNumbers {
    unsigned int len;
    heim_integer *val;
  } noticeNumbers;
};

ASN1EXP int    ASN1CALL decode_NoticeReference(const unsigned char *, size_t, NoticeReference *, size_t *);
ASN1EXP int    ASN1CALL encode_NoticeReference(unsigned char *, size_t, const NoticeReference *, size_t *);
ASN1EXP size_t ASN1CALL length_NoticeReference(const NoticeReference *);
ASN1EXP int    ASN1CALL copy_NoticeReference  (const NoticeReference *, NoticeReference *);
ASN1EXP void   ASN1CALL free_NoticeReference  (NoticeReference *);
ASN1EXP char * ASN1CALL print_NoticeReference (const NoticeReference *, int);


/*
UserNotice ::= SEQUENCE {
  noticeRef       NoticeReference OPTIONAL,
  explicitText    DisplayText OPTIONAL,
}
*/

enum { asn1_tag_length_UserNotice = 1,
       asn1_tag_class_UserNotice = 0,
       asn1_tag_tag_UserNotice = 16 };
struct UserNotice {
  NoticeReference *noticeRef;
  DisplayText *explicitText;
};

ASN1EXP int    ASN1CALL decode_UserNotice(const unsigned char *, size_t, UserNotice *, size_t *);
ASN1EXP int    ASN1CALL encode_UserNotice(unsigned char *, size_t, const UserNotice *, size_t *);
ASN1EXP size_t ASN1CALL length_UserNotice(const UserNotice *);
ASN1EXP int    ASN1CALL copy_UserNotice  (const UserNotice *, UserNotice *);
ASN1EXP void   ASN1CALL free_UserNotice  (UserNotice *);
ASN1EXP char * ASN1CALL print_UserNotice (const UserNotice *, int);


/*
PolicyMapping ::= SEQUENCE {
  issuerDomainPolicy    CertPolicyId,
  subjectDomainPolicy   CertPolicyId,
}
*/

enum { asn1_tag_length_PolicyMapping = 1,
       asn1_tag_class_PolicyMapping = 0,
       asn1_tag_tag_PolicyMapping = 16 };
struct PolicyMapping {
  CertPolicyId issuerDomainPolicy;
  CertPolicyId subjectDomainPolicy;
};

ASN1EXP int    ASN1CALL decode_PolicyMapping(const unsigned char *, size_t, PolicyMapping *, size_t *);
ASN1EXP int    ASN1CALL encode_PolicyMapping(unsigned char *, size_t, const PolicyMapping *, size_t *);
ASN1EXP size_t ASN1CALL length_PolicyMapping(const PolicyMapping *);
ASN1EXP int    ASN1CALL copy_PolicyMapping  (const PolicyMapping *, PolicyMapping *);
ASN1EXP void   ASN1CALL free_PolicyMapping  (PolicyMapping *);
ASN1EXP char * ASN1CALL print_PolicyMapping (const PolicyMapping *, int);


/*
PolicyMappings ::= SEQUENCE OF PolicyMapping
*/

enum { asn1_tag_length_PolicyMappings = 1,
       asn1_tag_class_PolicyMappings = 0,
       asn1_tag_tag_PolicyMappings = 16 };
struct PolicyMappings {
  unsigned int len;
  PolicyMapping *val;
};

ASN1EXP int   ASN1CALL add_PolicyMappings  (PolicyMappings *, const PolicyMapping *);
ASN1EXP int   ASN1CALL remove_PolicyMappings  (PolicyMappings *, unsigned int);
ASN1EXP int    ASN1CALL decode_PolicyMappings(const unsigned char *, size_t, PolicyMappings *, size_t *);
ASN1EXP int    ASN1CALL encode_PolicyMappings(unsigned char *, size_t, const PolicyMappings *, size_t *);
ASN1EXP size_t ASN1CALL length_PolicyMappings(const PolicyMappings *);
ASN1EXP int    ASN1CALL copy_PolicyMappings  (const PolicyMappings *, PolicyMappings *);
ASN1EXP void   ASN1CALL free_PolicyMappings  (PolicyMappings *);
ASN1EXP char * ASN1CALL print_PolicyMappings (const PolicyMappings *, int);


/*
KeyIdentifier ::= OCTET STRING
*/

enum { asn1_tag_length_KeyIdentifier = 1,
       asn1_tag_class_KeyIdentifier = 0,
       asn1_tag_tag_KeyIdentifier = 4 };
ASN1EXP int    ASN1CALL decode_KeyIdentifier(const unsigned char *, size_t, KeyIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_KeyIdentifier(unsigned char *, size_t, const KeyIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_KeyIdentifier(const KeyIdentifier *);
ASN1EXP int    ASN1CALL copy_KeyIdentifier  (const KeyIdentifier *, KeyIdentifier *);
ASN1EXP void   ASN1CALL free_KeyIdentifier  (KeyIdentifier *);
ASN1EXP char * ASN1CALL print_KeyIdentifier (const KeyIdentifier *, int);


/*
AuthorityKeyIdentifier ::= SEQUENCE {
  keyIdentifier               [0] IMPLICIT OCTET STRING OPTIONAL,
  authorityCertIssuer         [1] IMPLICIT SEQUENCE OF GeneralName OPTIONAL,
  authorityCertSerialNumber   [2] IMPLICIT INTEGER OPTIONAL,
}
*/

enum { asn1_tag_length_AuthorityKeyIdentifier = 1,
       asn1_tag_class_AuthorityKeyIdentifier = 0,
       asn1_tag_tag_AuthorityKeyIdentifier = 16 };
struct AuthorityKeyIdentifier {
  heim_octet_string *keyIdentifier;
  struct AuthorityKeyIdentifier_authorityCertIssuer {
    unsigned int len;
    GeneralName *val;
  } *authorityCertIssuer;
  heim_integer *authorityCertSerialNumber;
};

ASN1EXP int    ASN1CALL decode_AuthorityKeyIdentifier(const unsigned char *, size_t, AuthorityKeyIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_AuthorityKeyIdentifier(unsigned char *, size_t, const AuthorityKeyIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_AuthorityKeyIdentifier(const AuthorityKeyIdentifier *);
ASN1EXP int    ASN1CALL copy_AuthorityKeyIdentifier  (const AuthorityKeyIdentifier *, AuthorityKeyIdentifier *);
ASN1EXP void   ASN1CALL free_AuthorityKeyIdentifier  (AuthorityKeyIdentifier *);
ASN1EXP char * ASN1CALL print_AuthorityKeyIdentifier (const AuthorityKeyIdentifier *, int);


/*
SubjectKeyIdentifier ::= KeyIdentifier
*/

enum { asn1_tag_length_SubjectKeyIdentifier = 1,
       asn1_tag_class_SubjectKeyIdentifier = 0,
       asn1_tag_tag_SubjectKeyIdentifier = 0 };

ASN1EXP int    ASN1CALL decode_SubjectKeyIdentifier(const unsigned char *, size_t, SubjectKeyIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_SubjectKeyIdentifier(unsigned char *, size_t, const SubjectKeyIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_SubjectKeyIdentifier(const SubjectKeyIdentifier *);
ASN1EXP int    ASN1CALL copy_SubjectKeyIdentifier  (const SubjectKeyIdentifier *, SubjectKeyIdentifier *);
ASN1EXP void   ASN1CALL free_SubjectKeyIdentifier  (SubjectKeyIdentifier *);
ASN1EXP char * ASN1CALL print_SubjectKeyIdentifier (const SubjectKeyIdentifier *, int);


/*
BasicConstraints ::= SEQUENCE {
  cA                  BOOLEAN,
  pathLenConstraint   INTEGER (0..4294967295) OPTIONAL,
}
*/

enum { asn1_tag_length_BasicConstraints = 1,
       asn1_tag_class_BasicConstraints = 0,
       asn1_tag_tag_BasicConstraints = 16 };
struct BasicConstraints {
  int cA;
  unsigned int *pathLenConstraint;
};

ASN1EXP int    ASN1CALL decode_BasicConstraints(const unsigned char *, size_t, BasicConstraints *, size_t *);
ASN1EXP int    ASN1CALL encode_BasicConstraints(unsigned char *, size_t, const BasicConstraints *, size_t *);
ASN1EXP size_t ASN1CALL length_BasicConstraints(const BasicConstraints *);
ASN1EXP int    ASN1CALL copy_BasicConstraints  (const BasicConstraints *, BasicConstraints *);
ASN1EXP void   ASN1CALL free_BasicConstraints  (BasicConstraints *);
ASN1EXP char * ASN1CALL print_BasicConstraints (const BasicConstraints *, int);


/*
BaseDistance ::= INTEGER (0..4294967295)
*/

enum { asn1_tag_length_BaseDistance = 1,
       asn1_tag_class_BaseDistance = 0,
       asn1_tag_tag_BaseDistance = 2 };
ASN1EXP int    ASN1CALL decode_BaseDistance(const unsigned char *, size_t, BaseDistance *, size_t *);
ASN1EXP int    ASN1CALL encode_BaseDistance(unsigned char *, size_t, const BaseDistance *, size_t *);
ASN1EXP size_t ASN1CALL length_BaseDistance(const BaseDistance *);
ASN1EXP int    ASN1CALL copy_BaseDistance  (const BaseDistance *, BaseDistance *);
ASN1EXP void   ASN1CALL free_BaseDistance  (BaseDistance *);
ASN1EXP char * ASN1CALL print_BaseDistance (const BaseDistance *, int);


/*
GeneralSubtree ::= SEQUENCE {
  base            GeneralName,
  minimum         [0] IMPLICIT BaseDistance,
  maximum         [1] IMPLICIT BaseDistance OPTIONAL,
}
*/

enum { asn1_tag_length_GeneralSubtree = 1,
       asn1_tag_class_GeneralSubtree = 0,
       asn1_tag_tag_GeneralSubtree = 16 };
struct GeneralSubtree {
  GeneralName base;
  BaseDistance minimum;
  BaseDistance *maximum;
};

ASN1EXP int    ASN1CALL decode_GeneralSubtree(const unsigned char *, size_t, GeneralSubtree *, size_t *);
ASN1EXP int    ASN1CALL encode_GeneralSubtree(unsigned char *, size_t, const GeneralSubtree *, size_t *);
ASN1EXP size_t ASN1CALL length_GeneralSubtree(const GeneralSubtree *);
ASN1EXP int    ASN1CALL copy_GeneralSubtree  (const GeneralSubtree *, GeneralSubtree *);
ASN1EXP void   ASN1CALL free_GeneralSubtree  (GeneralSubtree *);
ASN1EXP char * ASN1CALL print_GeneralSubtree (const GeneralSubtree *, int);


/*
GeneralSubtrees ::= SEQUENCE OF GeneralSubtree
*/

enum { asn1_tag_length_GeneralSubtrees = 1,
       asn1_tag_class_GeneralSubtrees = 0,
       asn1_tag_tag_GeneralSubtrees = 16 };
struct GeneralSubtrees {
  unsigned int len;
  GeneralSubtree *val;
};

ASN1EXP int    ASN1CALL decode_GeneralSubtrees(const unsigned char *, size_t, GeneralSubtrees *, size_t *);
ASN1EXP int    ASN1CALL encode_GeneralSubtrees(unsigned char *, size_t, const GeneralSubtrees *, size_t *);
ASN1EXP size_t ASN1CALL length_GeneralSubtrees(const GeneralSubtrees *);
ASN1EXP int    ASN1CALL copy_GeneralSubtrees  (const GeneralSubtrees *, GeneralSubtrees *);
ASN1EXP void   ASN1CALL free_GeneralSubtrees  (GeneralSubtrees *);
ASN1EXP char * ASN1CALL print_GeneralSubtrees (const GeneralSubtrees *, int);


/*
NameConstraints ::= SEQUENCE {
  permittedSubtrees   [0] IMPLICIT SEQUENCE OF GeneralSubtree OPTIONAL,
  excludedSubtrees    [1] IMPLICIT SEQUENCE OF GeneralSubtree OPTIONAL,
}
*/

enum { asn1_tag_length_NameConstraints = 1,
       asn1_tag_class_NameConstraints = 0,
       asn1_tag_tag_NameConstraints = 16 };
struct NameConstraints {
  struct NameConstraints_permittedSubtrees {
    unsigned int len;
    GeneralSubtree *val;
  } *permittedSubtrees;
  struct NameConstraints_excludedSubtrees {
    unsigned int len;
    GeneralSubtree *val;
  } *excludedSubtrees;
};

ASN1EXP int    ASN1CALL decode_NameConstraints(const unsigned char *, size_t, NameConstraints *, size_t *);
ASN1EXP int    ASN1CALL encode_NameConstraints(unsigned char *, size_t, const NameConstraints *, size_t *);
ASN1EXP size_t ASN1CALL length_NameConstraints(const NameConstraints *);
ASN1EXP int    ASN1CALL copy_NameConstraints  (const NameConstraints *, NameConstraints *);
ASN1EXP void   ASN1CALL free_NameConstraints  (NameConstraints *);
ASN1EXP char * ASN1CALL print_NameConstraints (const NameConstraints *, int);


/*
ExtKeyUsage ::= SEQUENCE OF OBJECT IDENTIFIER
*/

enum { asn1_tag_length_ExtKeyUsage = 1,
       asn1_tag_class_ExtKeyUsage = 0,
       asn1_tag_tag_ExtKeyUsage = 16 };
struct ExtKeyUsage {
  unsigned int len;
  heim_oid *val;
};

ASN1EXP int    ASN1CALL decode_ExtKeyUsage(const unsigned char *, size_t, ExtKeyUsage *, size_t *);
ASN1EXP int    ASN1CALL encode_ExtKeyUsage(unsigned char *, size_t, const ExtKeyUsage *, size_t *);
ASN1EXP size_t ASN1CALL length_ExtKeyUsage(const ExtKeyUsage *);
ASN1EXP int    ASN1CALL copy_ExtKeyUsage  (const ExtKeyUsage *, ExtKeyUsage *);
ASN1EXP void   ASN1CALL free_ExtKeyUsage  (ExtKeyUsage *);
ASN1EXP char * ASN1CALL print_ExtKeyUsage (const ExtKeyUsage *, int);


/*
DistributionPointReasonFlags ::= BIT STRING {
  unused(0),
  keyCompromise(1),
  cACompromise(2),
  affiliationChanged(3),
  superseded(4),
  cessationOfOperation(5),
  certificateHold(6),
  privilegeWithdrawn(7),
  aACompromise(8)
}
*/

enum { asn1_tag_length_DistributionPointReasonFlags = 1,
       asn1_tag_class_DistributionPointReasonFlags = 0,
       asn1_tag_tag_DistributionPointReasonFlags = 3 };
uint64_t DistributionPointReasonFlags2int(DistributionPointReasonFlags);
DistributionPointReasonFlags int2DistributionPointReasonFlags(uint64_t);
const struct units * asn1_DistributionPointReasonFlags_units(void);
ASN1EXP int    ASN1CALL decode_DistributionPointReasonFlags(const unsigned char *, size_t, DistributionPointReasonFlags *, size_t *);
ASN1EXP int    ASN1CALL encode_DistributionPointReasonFlags(unsigned char *, size_t, const DistributionPointReasonFlags *, size_t *);
ASN1EXP size_t ASN1CALL length_DistributionPointReasonFlags(const DistributionPointReasonFlags *);
ASN1EXP int    ASN1CALL copy_DistributionPointReasonFlags  (const DistributionPointReasonFlags *, DistributionPointReasonFlags *);
ASN1EXP void   ASN1CALL free_DistributionPointReasonFlags  (DistributionPointReasonFlags *);
ASN1EXP char * ASN1CALL print_DistributionPointReasonFlags (const DistributionPointReasonFlags *, int);


/*
DistributionPointName ::= CHOICE {
  fullName                  [0] IMPLICIT SEQUENCE OF GeneralName,
  nameRelativeToCRLIssuer   [1] RelativeDistinguishedName,
}
*/

enum { asn1_tag_length_DistributionPointName = 1,
       asn1_tag_class_DistributionPointName = 0,
       asn1_tag_tag_DistributionPointName = 0 };
struct DistributionPointName {
  enum DistributionPointName_enum {
    choice_DistributionPointName_fullName = 1,
    choice_DistributionPointName_nameRelativeToCRLIssuer
  } element;
  union {
    struct DistributionPointName_fullName {
      unsigned int len;
      GeneralName *val;
    } fullName;
    RelativeDistinguishedName nameRelativeToCRLIssuer;
  } u;
};

ASN1EXP int    ASN1CALL decode_DistributionPointName(const unsigned char *, size_t, DistributionPointName *, size_t *);
ASN1EXP int    ASN1CALL encode_DistributionPointName(unsigned char *, size_t, const DistributionPointName *, size_t *);
ASN1EXP size_t ASN1CALL length_DistributionPointName(const DistributionPointName *);
ASN1EXP int    ASN1CALL copy_DistributionPointName  (const DistributionPointName *, DistributionPointName *);
ASN1EXP void   ASN1CALL free_DistributionPointName  (DistributionPointName *);
ASN1EXP char * ASN1CALL print_DistributionPointName (const DistributionPointName *, int);


/*
DistributionPoint ::= SEQUENCE {
  distributionPoint   [0] IMPLICIT DistributionPointName OPTIONAL,
  reasons             [1] IMPLICIT DistributionPointReasonFlags OPTIONAL,
  cRLIssuer           [2] IMPLICIT GeneralNames OPTIONAL,
}
*/

enum { asn1_tag_length_DistributionPoint = 1,
       asn1_tag_class_DistributionPoint = 0,
       asn1_tag_tag_DistributionPoint = 16 };
struct DistributionPoint {
  DistributionPointName *distributionPoint;
  DistributionPointReasonFlags *reasons;
  GeneralNames *cRLIssuer;
};

ASN1EXP int    ASN1CALL decode_DistributionPoint(const unsigned char *, size_t, DistributionPoint *, size_t *);
ASN1EXP int    ASN1CALL encode_DistributionPoint(unsigned char *, size_t, const DistributionPoint *, size_t *);
ASN1EXP size_t ASN1CALL length_DistributionPoint(const DistributionPoint *);
ASN1EXP int    ASN1CALL copy_DistributionPoint  (const DistributionPoint *, DistributionPoint *);
ASN1EXP void   ASN1CALL free_DistributionPoint  (DistributionPoint *);
ASN1EXP char * ASN1CALL print_DistributionPoint (const DistributionPoint *, int);


/*
CRLDistributionPoints ::= SEQUENCE OF DistributionPoint
*/

enum { asn1_tag_length_CRLDistributionPoints = 1,
       asn1_tag_class_CRLDistributionPoints = 0,
       asn1_tag_tag_CRLDistributionPoints = 16 };
struct CRLDistributionPoints {
  unsigned int len;
  DistributionPoint *val;
};

ASN1EXP int   ASN1CALL add_CRLDistributionPoints  (CRLDistributionPoints *, const DistributionPoint *);
ASN1EXP int   ASN1CALL remove_CRLDistributionPoints  (CRLDistributionPoints *, unsigned int);
ASN1EXP int    ASN1CALL decode_CRLDistributionPoints(const unsigned char *, size_t, CRLDistributionPoints *, size_t *);
ASN1EXP int    ASN1CALL encode_CRLDistributionPoints(unsigned char *, size_t, const CRLDistributionPoints *, size_t *);
ASN1EXP size_t ASN1CALL length_CRLDistributionPoints(const CRLDistributionPoints *);
ASN1EXP int    ASN1CALL copy_CRLDistributionPoints  (const CRLDistributionPoints *, CRLDistributionPoints *);
ASN1EXP void   ASN1CALL free_CRLDistributionPoints  (CRLDistributionPoints *);
ASN1EXP char * ASN1CALL print_CRLDistributionPoints (const CRLDistributionPoints *, int);


/*
DSASigValue ::= SEQUENCE {
  r               INTEGER,
  s               INTEGER,
}
*/

enum { asn1_tag_length_DSASigValue = 1,
       asn1_tag_class_DSASigValue = 0,
       asn1_tag_tag_DSASigValue = 16 };
struct DSASigValue {
  heim_integer r;
  heim_integer s;
};

ASN1EXP int    ASN1CALL decode_DSASigValue(const unsigned char *, size_t, DSASigValue *, size_t *);
ASN1EXP int    ASN1CALL encode_DSASigValue(unsigned char *, size_t, const DSASigValue *, size_t *);
ASN1EXP size_t ASN1CALL length_DSASigValue(const DSASigValue *);
ASN1EXP int    ASN1CALL copy_DSASigValue  (const DSASigValue *, DSASigValue *);
ASN1EXP void   ASN1CALL free_DSASigValue  (DSASigValue *);
ASN1EXP char * ASN1CALL print_DSASigValue (const DSASigValue *, int);


/*
DSAPublicKey ::= INTEGER
*/

enum { asn1_tag_length_DSAPublicKey = 1,
       asn1_tag_class_DSAPublicKey = 0,
       asn1_tag_tag_DSAPublicKey = 2 };
ASN1EXP int    ASN1CALL decode_DSAPublicKey(const unsigned char *, size_t, DSAPublicKey *, size_t *);
ASN1EXP int    ASN1CALL encode_DSAPublicKey(unsigned char *, size_t, const DSAPublicKey *, size_t *);
ASN1EXP size_t ASN1CALL length_DSAPublicKey(const DSAPublicKey *);
ASN1EXP int    ASN1CALL copy_DSAPublicKey  (const DSAPublicKey *, DSAPublicKey *);
ASN1EXP void   ASN1CALL free_DSAPublicKey  (DSAPublicKey *);
ASN1EXP char * ASN1CALL print_DSAPublicKey (const DSAPublicKey *, int);


/*
DSAParams ::= SEQUENCE {
  p               INTEGER,
  q               INTEGER,
  g               INTEGER,
}
*/

enum { asn1_tag_length_DSAParams = 1,
       asn1_tag_class_DSAParams = 0,
       asn1_tag_tag_DSAParams = 16 };
struct DSAParams {
  heim_integer p;
  heim_integer q;
  heim_integer g;
};

ASN1EXP int    ASN1CALL decode_DSAParams(const unsigned char *, size_t, DSAParams *, size_t *);
ASN1EXP int    ASN1CALL encode_DSAParams(unsigned char *, size_t, const DSAParams *, size_t *);
ASN1EXP size_t ASN1CALL length_DSAParams(const DSAParams *);
ASN1EXP int    ASN1CALL copy_DSAParams  (const DSAParams *, DSAParams *);
ASN1EXP void   ASN1CALL free_DSAParams  (DSAParams *);
ASN1EXP char * ASN1CALL print_DSAParams (const DSAParams *, int);


/*
ECPoint ::= OCTET STRING
*/

enum { asn1_tag_length_ECPoint = 1,
       asn1_tag_class_ECPoint = 0,
       asn1_tag_tag_ECPoint = 4 };
ASN1EXP int    ASN1CALL decode_ECPoint(const unsigned char *, size_t, ECPoint *, size_t *);
ASN1EXP int    ASN1CALL encode_ECPoint(unsigned char *, size_t, const ECPoint *, size_t *);
ASN1EXP size_t ASN1CALL length_ECPoint(const ECPoint *);
ASN1EXP int    ASN1CALL copy_ECPoint  (const ECPoint *, ECPoint *);
ASN1EXP void   ASN1CALL free_ECPoint  (ECPoint *);
ASN1EXP char * ASN1CALL print_ECPoint (const ECPoint *, int);


/*
ECParameters ::= CHOICE {
  namedCurve        OBJECT IDENTIFIER,
}
*/

enum { asn1_tag_length_ECParameters = 1,
       asn1_tag_class_ECParameters = 0,
       asn1_tag_tag_ECParameters = 0 };
struct ECParameters {
  enum ECParameters_enum {
    choice_ECParameters_namedCurve = 1
  } element;
  union {
    heim_oid namedCurve;
  } u;
};

ASN1EXP int    ASN1CALL decode_ECParameters(const unsigned char *, size_t, ECParameters *, size_t *);
ASN1EXP int    ASN1CALL encode_ECParameters(unsigned char *, size_t, const ECParameters *, size_t *);
ASN1EXP size_t ASN1CALL length_ECParameters(const ECParameters *);
ASN1EXP int    ASN1CALL copy_ECParameters  (const ECParameters *, ECParameters *);
ASN1EXP void   ASN1CALL free_ECParameters  (ECParameters *);
ASN1EXP char * ASN1CALL print_ECParameters (const ECParameters *, int);


/*
ECDSA-Sig-Value ::= SEQUENCE {
  r               INTEGER,
  s               INTEGER,
}
*/

enum { asn1_tag_length_ECDSA_Sig_Value = 1,
       asn1_tag_class_ECDSA_Sig_Value = 0,
       asn1_tag_tag_ECDSA_Sig_Value = 16 };
struct ECDSA_Sig_Value {
  heim_integer r;
  heim_integer s;
};

ASN1EXP int    ASN1CALL decode_ECDSA_Sig_Value(const unsigned char *, size_t, ECDSA_Sig_Value *, size_t *);
ASN1EXP int    ASN1CALL encode_ECDSA_Sig_Value(unsigned char *, size_t, const ECDSA_Sig_Value *, size_t *);
ASN1EXP size_t ASN1CALL length_ECDSA_Sig_Value(const ECDSA_Sig_Value *);
ASN1EXP int    ASN1CALL copy_ECDSA_Sig_Value  (const ECDSA_Sig_Value *, ECDSA_Sig_Value *);
ASN1EXP void   ASN1CALL free_ECDSA_Sig_Value  (ECDSA_Sig_Value *);
ASN1EXP char * ASN1CALL print_ECDSA_Sig_Value (const ECDSA_Sig_Value *, int);


/*
RSAPublicKey ::= SEQUENCE {
  modulus          INTEGER,
  publicExponent   INTEGER,
}
*/

enum { asn1_tag_length_RSAPublicKey = 1,
       asn1_tag_class_RSAPublicKey = 0,
       asn1_tag_tag_RSAPublicKey = 16 };
struct RSAPublicKey {
  heim_integer modulus;
  heim_integer publicExponent;
};

ASN1EXP int    ASN1CALL decode_RSAPublicKey(const unsigned char *, size_t, RSAPublicKey *, size_t *);
ASN1EXP int    ASN1CALL encode_RSAPublicKey(unsigned char *, size_t, const RSAPublicKey *, size_t *);
ASN1EXP size_t ASN1CALL length_RSAPublicKey(const RSAPublicKey *);
ASN1EXP int    ASN1CALL copy_RSAPublicKey  (const RSAPublicKey *, RSAPublicKey *);
ASN1EXP void   ASN1CALL free_RSAPublicKey  (RSAPublicKey *);
ASN1EXP char * ASN1CALL print_RSAPublicKey (const RSAPublicKey *, int);


/*
RSAPrivateKey ::= SEQUENCE {
  version           INTEGER (0..4294967295),
  modulus           INTEGER,
  publicExponent    INTEGER,
  privateExponent   INTEGER,
  prime1            INTEGER,
  prime2            INTEGER,
  exponent1         INTEGER,
  exponent2         INTEGER,
  coefficient       INTEGER,
}
*/

enum { asn1_tag_length_RSAPrivateKey = 1,
       asn1_tag_class_RSAPrivateKey = 0,
       asn1_tag_tag_RSAPrivateKey = 16 };
struct RSAPrivateKey {
  unsigned int version;
  heim_integer modulus;
  heim_integer publicExponent;
  heim_integer privateExponent;
  heim_integer prime1;
  heim_integer prime2;
  heim_integer exponent1;
  heim_integer exponent2;
  heim_integer coefficient;
};

ASN1EXP int    ASN1CALL decode_RSAPrivateKey(const unsigned char *, size_t, RSAPrivateKey *, size_t *);
ASN1EXP int    ASN1CALL encode_RSAPrivateKey(unsigned char *, size_t, const RSAPrivateKey *, size_t *);
ASN1EXP size_t ASN1CALL length_RSAPrivateKey(const RSAPrivateKey *);
ASN1EXP int    ASN1CALL copy_RSAPrivateKey  (const RSAPrivateKey *, RSAPrivateKey *);
ASN1EXP void   ASN1CALL free_RSAPrivateKey  (RSAPrivateKey *);
ASN1EXP char * ASN1CALL print_RSAPrivateKey (const RSAPrivateKey *, int);


/*
DigestInfo ::= SEQUENCE {
  digestAlgorithm   AlgorithmIdentifier,
  digest            OCTET STRING,
}
*/

enum { asn1_tag_length_DigestInfo = 1,
       asn1_tag_class_DigestInfo = 0,
       asn1_tag_tag_DigestInfo = 16 };
struct DigestInfo {
  AlgorithmIdentifier digestAlgorithm;
  heim_octet_string digest;
};

ASN1EXP int    ASN1CALL decode_DigestInfo(const unsigned char *, size_t, DigestInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestInfo(unsigned char *, size_t, const DigestInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestInfo(const DigestInfo *);
ASN1EXP int    ASN1CALL copy_DigestInfo  (const DigestInfo *, DigestInfo *);
ASN1EXP void   ASN1CALL free_DigestInfo  (DigestInfo *);
ASN1EXP char * ASN1CALL print_DigestInfo (const DigestInfo *, int);


/*
TBSCRLCertList ::= SEQUENCE {
  version               Version OPTIONAL,
  signature             AlgorithmIdentifier,
  issuer                Name,
  thisUpdate            Time,
  nextUpdate            Time OPTIONAL,
  revokedCertificates   SEQUENCE OF SEQUENCE {
  userCertificate      CertificateSerialNumber,
  revocationDate       Time,
  crlEntryExtensions   Extensions OPTIONAL,
} OPTIONAL,
  crlExtensions         [0] Extensions OPTIONAL,
}
*/

enum { asn1_tag_length_TBSCRLCertList = 1,
       asn1_tag_class_TBSCRLCertList = 0,
       asn1_tag_tag_TBSCRLCertList = 16 };
struct TBSCRLCertList {
  heim_octet_string _save;
  Version *version;
  AlgorithmIdentifier signature;
  Name issuer;
  Time thisUpdate;
  Time *nextUpdate;
  struct TBSCRLCertList_revokedCertificates {
    unsigned int len;
    struct TBSCRLCertList_revokedCertificates_val {
      CertificateSerialNumber userCertificate;
      Time revocationDate;
      Extensions *crlEntryExtensions;
    } *val;
  } *revokedCertificates;
  Extensions *crlExtensions;
};

ASN1EXP int    ASN1CALL decode_TBSCRLCertList(const unsigned char *, size_t, TBSCRLCertList *, size_t *);
ASN1EXP int    ASN1CALL encode_TBSCRLCertList(unsigned char *, size_t, const TBSCRLCertList *, size_t *);
ASN1EXP size_t ASN1CALL length_TBSCRLCertList(const TBSCRLCertList *);
ASN1EXP int    ASN1CALL copy_TBSCRLCertList  (const TBSCRLCertList *, TBSCRLCertList *);
ASN1EXP void   ASN1CALL free_TBSCRLCertList  (TBSCRLCertList *);
ASN1EXP char * ASN1CALL print_TBSCRLCertList (const TBSCRLCertList *, int);


/*
CRLCertificateList ::= SEQUENCE {
  tbsCertList          TBSCRLCertList,
  signatureAlgorithm   AlgorithmIdentifier,
  signatureValue         BIT STRING {
  },
}
*/

enum { asn1_tag_length_CRLCertificateList = 1,
       asn1_tag_class_CRLCertificateList = 0,
       asn1_tag_tag_CRLCertificateList = 16 };
struct CRLCertificateList {
  TBSCRLCertList tbsCertList;
  AlgorithmIdentifier signatureAlgorithm;
  heim_bit_string signatureValue;
};

ASN1EXP int    ASN1CALL decode_CRLCertificateList(const unsigned char *, size_t, CRLCertificateList *, size_t *);
ASN1EXP int    ASN1CALL encode_CRLCertificateList(unsigned char *, size_t, const CRLCertificateList *, size_t *);
ASN1EXP size_t ASN1CALL length_CRLCertificateList(const CRLCertificateList *);
ASN1EXP int    ASN1CALL copy_CRLCertificateList  (const CRLCertificateList *, CRLCertificateList *);
ASN1EXP void   ASN1CALL free_CRLCertificateList  (CRLCertificateList *);
ASN1EXP char * ASN1CALL print_CRLCertificateList (const CRLCertificateList *, int);


/*
CRLReason ::= INTEGER {
  unspecified(0),
  keyCompromise(1),
  cACompromise(2),
  affiliationChanged(3),
  superseded(4),
  cessationOfOperation(5),
  certificateHold(6),
  removeFromCRL(8),
  privilegeWithdrawn(9),
  aACompromise(10)
}
*/

enum { asn1_tag_length_CRLReason = 1,
       asn1_tag_class_CRLReason = 0,
       asn1_tag_tag_CRLReason = 10 };
ASN1EXP int    ASN1CALL decode_CRLReason(const unsigned char *, size_t, CRLReason *, size_t *);
ASN1EXP int    ASN1CALL encode_CRLReason(unsigned char *, size_t, const CRLReason *, size_t *);
ASN1EXP size_t ASN1CALL length_CRLReason(const CRLReason *);
ASN1EXP int    ASN1CALL copy_CRLReason  (const CRLReason *, CRLReason *);
ASN1EXP void   ASN1CALL free_CRLReason  (CRLReason *);
ASN1EXP char * ASN1CALL print_CRLReason (const CRLReason *, int);


/*
PKIXXmppAddr ::= UTF8String
*/

enum { asn1_tag_length_PKIXXmppAddr = 1,
       asn1_tag_class_PKIXXmppAddr = 0,
       asn1_tag_tag_PKIXXmppAddr = 12 };
ASN1EXP int    ASN1CALL decode_PKIXXmppAddr(const unsigned char *, size_t, PKIXXmppAddr *, size_t *);
ASN1EXP int    ASN1CALL encode_PKIXXmppAddr(unsigned char *, size_t, const PKIXXmppAddr *, size_t *);
ASN1EXP size_t ASN1CALL length_PKIXXmppAddr(const PKIXXmppAddr *);
ASN1EXP int    ASN1CALL copy_PKIXXmppAddr  (const PKIXXmppAddr *, PKIXXmppAddr *);
ASN1EXP void   ASN1CALL free_PKIXXmppAddr  (PKIXXmppAddr *);
ASN1EXP char * ASN1CALL print_PKIXXmppAddr (const PKIXXmppAddr *, int);


/*
SRVName ::= IA5String
*/

enum { asn1_tag_length_SRVName = 1,
       asn1_tag_class_SRVName = 0,
       asn1_tag_tag_SRVName = 22 };
ASN1EXP int    ASN1CALL decode_SRVName(const unsigned char *, size_t, SRVName *, size_t *);
ASN1EXP int    ASN1CALL encode_SRVName(unsigned char *, size_t, const SRVName *, size_t *);
ASN1EXP size_t ASN1CALL length_SRVName(const SRVName *);
ASN1EXP int    ASN1CALL copy_SRVName  (const SRVName *, SRVName *);
ASN1EXP void   ASN1CALL free_SRVName  (SRVName *);
ASN1EXP char * ASN1CALL print_SRVName (const SRVName *, int);


/*
HardwareModuleName ::= SEQUENCE {
  hwType            OBJECT IDENTIFIER,
  hwSerialNum     OCTET STRING,
}
*/

enum { asn1_tag_length_HardwareModuleName = 1,
       asn1_tag_class_HardwareModuleName = 0,
       asn1_tag_tag_HardwareModuleName = 16 };
struct HardwareModuleName {
  heim_oid hwType;
  heim_octet_string hwSerialNum;
};

ASN1EXP int    ASN1CALL decode_HardwareModuleName(const unsigned char *, size_t, HardwareModuleName *, size_t *);
ASN1EXP int    ASN1CALL encode_HardwareModuleName(unsigned char *, size_t, const HardwareModuleName *, size_t *);
ASN1EXP size_t ASN1CALL length_HardwareModuleName(const HardwareModuleName *);
ASN1EXP int    ASN1CALL copy_HardwareModuleName  (const HardwareModuleName *, HardwareModuleName *);
ASN1EXP void   ASN1CALL free_HardwareModuleName  (HardwareModuleName *);
ASN1EXP char * ASN1CALL print_HardwareModuleName (const HardwareModuleName *, int);


/*
KRB5PrincipalName ::= SEQUENCE {
  realm           [0] Realm,
  principalName   [1] PrincipalName,
}
*/

enum { asn1_tag_length_KRB5PrincipalName = 1,
       asn1_tag_class_KRB5PrincipalName = 0,
       asn1_tag_tag_KRB5PrincipalName = 16 };
struct KRB5PrincipalName {
  Realm realm;
  PrincipalName principalName;
};

ASN1EXP int    ASN1CALL decode_KRB5PrincipalName(const unsigned char *, size_t, KRB5PrincipalName *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB5PrincipalName(unsigned char *, size_t, const KRB5PrincipalName *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB5PrincipalName(const KRB5PrincipalName *);
ASN1EXP int    ASN1CALL copy_KRB5PrincipalName  (const KRB5PrincipalName *, KRB5PrincipalName *);
ASN1EXP void   ASN1CALL free_KRB5PrincipalName  (KRB5PrincipalName *);
ASN1EXP char * ASN1CALL print_KRB5PrincipalName (const KRB5PrincipalName *, int);


/*
PermanentIdentifier ::= SEQUENCE {
  identifierValue     UTF8String OPTIONAL,
  assigner            OBJECT IDENTIFIER OPTIONAL,
}
*/

enum { asn1_tag_length_PermanentIdentifier = 1,
       asn1_tag_class_PermanentIdentifier = 0,
       asn1_tag_tag_PermanentIdentifier = 16 };
struct PermanentIdentifier {
  heim_utf8_string *identifierValue;
  heim_oid *assigner;
};

ASN1EXP int    ASN1CALL decode_PermanentIdentifier(const unsigned char *, size_t, PermanentIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_PermanentIdentifier(unsigned char *, size_t, const PermanentIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_PermanentIdentifier(const PermanentIdentifier *);
ASN1EXP int    ASN1CALL copy_PermanentIdentifier  (const PermanentIdentifier *, PermanentIdentifier *);
ASN1EXP void   ASN1CALL free_PermanentIdentifier  (PermanentIdentifier *);
ASN1EXP char * ASN1CALL print_PermanentIdentifier (const PermanentIdentifier *, int);


/*
AccessDescription ::= SEQUENCE {
  accessMethod       OBJECT IDENTIFIER,
  accessLocation   GeneralName,
}
*/

enum { asn1_tag_length_AccessDescription = 1,
       asn1_tag_class_AccessDescription = 0,
       asn1_tag_tag_AccessDescription = 16 };
struct AccessDescription {
  heim_oid accessMethod;
  GeneralName accessLocation;
};

ASN1EXP int    ASN1CALL decode_AccessDescription(const unsigned char *, size_t, AccessDescription *, size_t *);
ASN1EXP int    ASN1CALL encode_AccessDescription(unsigned char *, size_t, const AccessDescription *, size_t *);
ASN1EXP size_t ASN1CALL length_AccessDescription(const AccessDescription *);
ASN1EXP int    ASN1CALL copy_AccessDescription  (const AccessDescription *, AccessDescription *);
ASN1EXP void   ASN1CALL free_AccessDescription  (AccessDescription *);
ASN1EXP char * ASN1CALL print_AccessDescription (const AccessDescription *, int);


/*
AuthorityInfoAccessSyntax ::= SEQUENCE OF AccessDescription
*/

enum { asn1_tag_length_AuthorityInfoAccessSyntax = 1,
       asn1_tag_class_AuthorityInfoAccessSyntax = 0,
       asn1_tag_tag_AuthorityInfoAccessSyntax = 16 };
struct AuthorityInfoAccessSyntax {
  unsigned int len;
  AccessDescription *val;
};

ASN1EXP int    ASN1CALL decode_AuthorityInfoAccessSyntax(const unsigned char *, size_t, AuthorityInfoAccessSyntax *, size_t *);
ASN1EXP int    ASN1CALL encode_AuthorityInfoAccessSyntax(unsigned char *, size_t, const AuthorityInfoAccessSyntax *, size_t *);
ASN1EXP size_t ASN1CALL length_AuthorityInfoAccessSyntax(const AuthorityInfoAccessSyntax *);
ASN1EXP int    ASN1CALL copy_AuthorityInfoAccessSyntax  (const AuthorityInfoAccessSyntax *, AuthorityInfoAccessSyntax *);
ASN1EXP void   ASN1CALL free_AuthorityInfoAccessSyntax  (AuthorityInfoAccessSyntax *);
ASN1EXP char * ASN1CALL print_AuthorityInfoAccessSyntax (const AuthorityInfoAccessSyntax *, int);


/*
SubjectInfoAccessSyntax ::= SEQUENCE OF AccessDescription
*/

enum { asn1_tag_length_SubjectInfoAccessSyntax = 1,
       asn1_tag_class_SubjectInfoAccessSyntax = 0,
       asn1_tag_tag_SubjectInfoAccessSyntax = 16 };
struct SubjectInfoAccessSyntax {
  unsigned int len;
  AccessDescription *val;
};

ASN1EXP int    ASN1CALL decode_SubjectInfoAccessSyntax(const unsigned char *, size_t, SubjectInfoAccessSyntax *, size_t *);
ASN1EXP int    ASN1CALL encode_SubjectInfoAccessSyntax(unsigned char *, size_t, const SubjectInfoAccessSyntax *, size_t *);
ASN1EXP size_t ASN1CALL length_SubjectInfoAccessSyntax(const SubjectInfoAccessSyntax *);
ASN1EXP int    ASN1CALL copy_SubjectInfoAccessSyntax  (const SubjectInfoAccessSyntax *, SubjectInfoAccessSyntax *);
ASN1EXP void   ASN1CALL free_SubjectInfoAccessSyntax  (SubjectInfoAccessSyntax *);
ASN1EXP char * ASN1CALL print_SubjectInfoAccessSyntax (const SubjectInfoAccessSyntax *, int);


/*
ProxyPolicy ::= SEQUENCE {
  policyLanguage     OBJECT IDENTIFIER,
  policy           OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_ProxyPolicy = 1,
       asn1_tag_class_ProxyPolicy = 0,
       asn1_tag_tag_ProxyPolicy = 16 };
struct ProxyPolicy {
  heim_oid policyLanguage;
  heim_octet_string *policy;
};

ASN1EXP int    ASN1CALL decode_ProxyPolicy(const unsigned char *, size_t, ProxyPolicy *, size_t *);
ASN1EXP int    ASN1CALL encode_ProxyPolicy(unsigned char *, size_t, const ProxyPolicy *, size_t *);
ASN1EXP size_t ASN1CALL length_ProxyPolicy(const ProxyPolicy *);
ASN1EXP int    ASN1CALL copy_ProxyPolicy  (const ProxyPolicy *, ProxyPolicy *);
ASN1EXP void   ASN1CALL free_ProxyPolicy  (ProxyPolicy *);
ASN1EXP char * ASN1CALL print_ProxyPolicy (const ProxyPolicy *, int);


/*
ProxyCertInfo ::= SEQUENCE {
  pCPathLenConstraint   INTEGER (0..4294967295) OPTIONAL,
  proxyPolicy           ProxyPolicy,
}
*/

enum { asn1_tag_length_ProxyCertInfo = 1,
       asn1_tag_class_ProxyCertInfo = 0,
       asn1_tag_tag_ProxyCertInfo = 16 };
struct ProxyCertInfo {
  unsigned int *pCPathLenConstraint;
  ProxyPolicy proxyPolicy;
};

ASN1EXP int    ASN1CALL decode_ProxyCertInfo(const unsigned char *, size_t, ProxyCertInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_ProxyCertInfo(unsigned char *, size_t, const ProxyCertInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_ProxyCertInfo(const ProxyCertInfo *);
ASN1EXP int    ASN1CALL copy_ProxyCertInfo  (const ProxyCertInfo *, ProxyCertInfo *);
ASN1EXP void   ASN1CALL free_ProxyCertInfo  (ProxyCertInfo *);
ASN1EXP char * ASN1CALL print_ProxyCertInfo (const ProxyCertInfo *, int);


/*
TPMSecurityAssertions ::= SEQUENCE {
  version                           TPMVersion,
  fieldUpgradable                   BOOLEAN,
  ekGenerationType                  [0] EKGenerationType OPTIONAL,
  ekGenerationLocation              [1] EKGenerationLocation OPTIONAL,
  ekCertificateGenerationLocation   [2] EKCertificateGenerationLocation OPTIONAL,
  ccInfo                            [3] CommonCriteriaMeasures OPTIONAL,
  fipsLevel                         [4] FIPSLevel OPTIONAL,
  iso9000Certified                  [5] BOOLEAN,
  iso9000Uri                          IA5String OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_TPMSecurityAssertions = 1,
       asn1_tag_class_TPMSecurityAssertions = 0,
       asn1_tag_tag_TPMSecurityAssertions = 16 };
struct TPMSecurityAssertions {
  TPMVersion version;
  int fieldUpgradable;
  EKGenerationType *ekGenerationType;
  EKGenerationLocation *ekGenerationLocation;
  EKCertificateGenerationLocation *ekCertificateGenerationLocation;
  CommonCriteriaMeasures *ccInfo;
  FIPSLevel *fipsLevel;
  int iso9000Certified;
  heim_ia5_string *iso9000Uri;
};

ASN1EXP int    ASN1CALL decode_TPMSecurityAssertions(const unsigned char *, size_t, TPMSecurityAssertions *, size_t *);
ASN1EXP int    ASN1CALL encode_TPMSecurityAssertions(unsigned char *, size_t, const TPMSecurityAssertions *, size_t *);
ASN1EXP size_t ASN1CALL length_TPMSecurityAssertions(const TPMSecurityAssertions *);
ASN1EXP int    ASN1CALL copy_TPMSecurityAssertions  (const TPMSecurityAssertions *, TPMSecurityAssertions *);
ASN1EXP void   ASN1CALL free_TPMSecurityAssertions  (TPMSecurityAssertions *);
ASN1EXP char * ASN1CALL print_TPMSecurityAssertions (const TPMSecurityAssertions *, int);


/*
AliasUTF8String ::= UTF8String
*/

enum { asn1_tag_length_AliasUTF8String = 1,
       asn1_tag_class_AliasUTF8String = 0,
       asn1_tag_tag_AliasUTF8String = 12 };
ASN1EXP int    ASN1CALL decode_AliasUTF8String(const unsigned char *, size_t, AliasUTF8String *, size_t *);
ASN1EXP int    ASN1CALL encode_AliasUTF8String(unsigned char *, size_t, const AliasUTF8String *, size_t *);
ASN1EXP size_t ASN1CALL length_AliasUTF8String(const AliasUTF8String *);
ASN1EXP int    ASN1CALL copy_AliasUTF8String  (const AliasUTF8String *, AliasUTF8String *);
ASN1EXP void   ASN1CALL free_AliasUTF8String  (AliasUTF8String *);
ASN1EXP char * ASN1CALL print_AliasUTF8String (const AliasUTF8String *, int);


/*
TPMSpecification ::= SEQUENCE {
  family            UTF8String,
  level           INTEGER (0..4294967295),
  revision        INTEGER (0..4294967295),
  ...,
}
*/

enum { asn1_tag_length_TPMSpecification = 1,
       asn1_tag_class_TPMSpecification = 0,
       asn1_tag_tag_TPMSpecification = 16 };
struct TPMSpecification {
  heim_utf8_string family;
  unsigned int level;
  unsigned int revision;
};

ASN1EXP int    ASN1CALL decode_TPMSpecification(const unsigned char *, size_t, TPMSpecification *, size_t *);
ASN1EXP int    ASN1CALL encode_TPMSpecification(unsigned char *, size_t, const TPMSpecification *, size_t *);
ASN1EXP size_t ASN1CALL length_TPMSpecification(const TPMSpecification *);
ASN1EXP int    ASN1CALL copy_TPMSpecification  (const TPMSpecification *, TPMSpecification *);
ASN1EXP void   ASN1CALL free_TPMSpecification  (TPMSpecification *);
ASN1EXP char * ASN1CALL print_TPMSpecification (const TPMSpecification *, int);


/*
EKGenerationType ::= INTEGER {
  ekgt_internal(0),
  ekgt_injected(1),
  ekgt_internalRevocable(2),
  ekgt_injectedRevocable(3)
}
*/

enum { asn1_tag_length_EKGenerationType = 1,
       asn1_tag_class_EKGenerationType = 0,
       asn1_tag_tag_EKGenerationType = 10 };
ASN1EXP int    ASN1CALL decode_EKGenerationType(const unsigned char *, size_t, EKGenerationType *, size_t *);
ASN1EXP int    ASN1CALL encode_EKGenerationType(unsigned char *, size_t, const EKGenerationType *, size_t *);
ASN1EXP size_t ASN1CALL length_EKGenerationType(const EKGenerationType *);
ASN1EXP int    ASN1CALL copy_EKGenerationType  (const EKGenerationType *, EKGenerationType *);
ASN1EXP void   ASN1CALL free_EKGenerationType  (EKGenerationType *);
ASN1EXP char * ASN1CALL print_EKGenerationType (const EKGenerationType *, int);


/*
EKGenerationLocation ::= INTEGER {
  tpmManufacturer(0),
  platformManufacturer(1),
  ekCertSigner(2)
}
*/

enum { asn1_tag_length_EKGenerationLocation = 1,
       asn1_tag_class_EKGenerationLocation = 0,
       asn1_tag_tag_EKGenerationLocation = 10 };
ASN1EXP int    ASN1CALL decode_EKGenerationLocation(const unsigned char *, size_t, EKGenerationLocation *, size_t *);
ASN1EXP int    ASN1CALL encode_EKGenerationLocation(unsigned char *, size_t, const EKGenerationLocation *, size_t *);
ASN1EXP size_t ASN1CALL length_EKGenerationLocation(const EKGenerationLocation *);
ASN1EXP int    ASN1CALL copy_EKGenerationLocation  (const EKGenerationLocation *, EKGenerationLocation *);
ASN1EXP void   ASN1CALL free_EKGenerationLocation  (EKGenerationLocation *);
ASN1EXP char * ASN1CALL print_EKGenerationLocation (const EKGenerationLocation *, int);


/*
EKCertificateGenerationLocation ::= EKGenerationLocation
*/

enum { asn1_tag_length_EKCertificateGenerationLocation = 1,
       asn1_tag_class_EKCertificateGenerationLocation = 0,
       asn1_tag_tag_EKCertificateGenerationLocation = 0 };

ASN1EXP int    ASN1CALL decode_EKCertificateGenerationLocation(const unsigned char *, size_t, EKCertificateGenerationLocation *, size_t *);
ASN1EXP int    ASN1CALL encode_EKCertificateGenerationLocation(unsigned char *, size_t, const EKCertificateGenerationLocation *, size_t *);
ASN1EXP size_t ASN1CALL length_EKCertificateGenerationLocation(const EKCertificateGenerationLocation *);
ASN1EXP int    ASN1CALL copy_EKCertificateGenerationLocation  (const EKCertificateGenerationLocation *, EKCertificateGenerationLocation *);
ASN1EXP void   ASN1CALL free_EKCertificateGenerationLocation  (EKCertificateGenerationLocation *);
ASN1EXP char * ASN1CALL print_EKCertificateGenerationLocation (const EKCertificateGenerationLocation *, int);


/*
EvaluationAssuranceLevel ::= INTEGER {
  ealevell(1),
  ealevel2(2),
  ealevel3(3),
  ealevel4(4),
  ealevel5(5),
  ealevel6(6),
  ealevel7(7)
}
*/

enum { asn1_tag_length_EvaluationAssuranceLevel = 1,
       asn1_tag_class_EvaluationAssuranceLevel = 0,
       asn1_tag_tag_EvaluationAssuranceLevel = 10 };
ASN1EXP int    ASN1CALL decode_EvaluationAssuranceLevel(const unsigned char *, size_t, EvaluationAssuranceLevel *, size_t *);
ASN1EXP int    ASN1CALL encode_EvaluationAssuranceLevel(unsigned char *, size_t, const EvaluationAssuranceLevel *, size_t *);
ASN1EXP size_t ASN1CALL length_EvaluationAssuranceLevel(const EvaluationAssuranceLevel *);
ASN1EXP int    ASN1CALL copy_EvaluationAssuranceLevel  (const EvaluationAssuranceLevel *, EvaluationAssuranceLevel *);
ASN1EXP void   ASN1CALL free_EvaluationAssuranceLevel  (EvaluationAssuranceLevel *);
ASN1EXP char * ASN1CALL print_EvaluationAssuranceLevel (const EvaluationAssuranceLevel *, int);


/*
SecurityLevel ::= INTEGER {
  sllevel1(1),
  sllevel2(2),
  sllevel3(3),
  sllevel4(4)
}
*/

enum { asn1_tag_length_SecurityLevel = 1,
       asn1_tag_class_SecurityLevel = 0,
       asn1_tag_tag_SecurityLevel = 10 };
ASN1EXP int    ASN1CALL decode_SecurityLevel(const unsigned char *, size_t, SecurityLevel *, size_t *);
ASN1EXP int    ASN1CALL encode_SecurityLevel(unsigned char *, size_t, const SecurityLevel *, size_t *);
ASN1EXP size_t ASN1CALL length_SecurityLevel(const SecurityLevel *);
ASN1EXP int    ASN1CALL copy_SecurityLevel  (const SecurityLevel *, SecurityLevel *);
ASN1EXP void   ASN1CALL free_SecurityLevel  (SecurityLevel *);
ASN1EXP char * ASN1CALL print_SecurityLevel (const SecurityLevel *, int);


/*
StrengthOfFunction ::= INTEGER {
  sof_basic(0),
  sof_medium(1),
  sof_high(2)
}
*/

enum { asn1_tag_length_StrengthOfFunction = 1,
       asn1_tag_class_StrengthOfFunction = 0,
       asn1_tag_tag_StrengthOfFunction = 10 };
ASN1EXP int    ASN1CALL decode_StrengthOfFunction(const unsigned char *, size_t, StrengthOfFunction *, size_t *);
ASN1EXP int    ASN1CALL encode_StrengthOfFunction(unsigned char *, size_t, const StrengthOfFunction *, size_t *);
ASN1EXP size_t ASN1CALL length_StrengthOfFunction(const StrengthOfFunction *);
ASN1EXP int    ASN1CALL copy_StrengthOfFunction  (const StrengthOfFunction *, StrengthOfFunction *);
ASN1EXP void   ASN1CALL free_StrengthOfFunction  (StrengthOfFunction *);
ASN1EXP char * ASN1CALL print_StrengthOfFunction (const StrengthOfFunction *, int);


/*
URIReference ::= SEQUENCE {
  uniformResourceIdentifier     IA5String,
  hashAlgorithm               AlgorithmIdentifier OPTIONAL,
  hashValue                     BIT STRING {
  } OPTIONAL,
}
*/

enum { asn1_tag_length_URIReference = 1,
       asn1_tag_class_URIReference = 0,
       asn1_tag_tag_URIReference = 16 };
struct URIReference {
  heim_ia5_string uniformResourceIdentifier;
  AlgorithmIdentifier *hashAlgorithm;
  heim_bit_string *hashValue;
};

ASN1EXP int    ASN1CALL decode_URIReference(const unsigned char *, size_t, URIReference *, size_t *);
ASN1EXP int    ASN1CALL encode_URIReference(unsigned char *, size_t, const URIReference *, size_t *);
ASN1EXP size_t ASN1CALL length_URIReference(const URIReference *);
ASN1EXP int    ASN1CALL copy_URIReference  (const URIReference *, URIReference *);
ASN1EXP void   ASN1CALL free_URIReference  (URIReference *);
ASN1EXP char * ASN1CALL print_URIReference (const URIReference *, int);


/*
EvaluationStatus ::= INTEGER {
  designedToMeet(0),
  evaluationInProgress(1),
  evaluationCompleted(2)
}
*/

enum { asn1_tag_length_EvaluationStatus = 1,
       asn1_tag_class_EvaluationStatus = 0,
       asn1_tag_tag_EvaluationStatus = 10 };
ASN1EXP int    ASN1CALL decode_EvaluationStatus(const unsigned char *, size_t, EvaluationStatus *, size_t *);
ASN1EXP int    ASN1CALL encode_EvaluationStatus(unsigned char *, size_t, const EvaluationStatus *, size_t *);
ASN1EXP size_t ASN1CALL length_EvaluationStatus(const EvaluationStatus *);
ASN1EXP int    ASN1CALL copy_EvaluationStatus  (const EvaluationStatus *, EvaluationStatus *);
ASN1EXP void   ASN1CALL free_EvaluationStatus  (EvaluationStatus *);
ASN1EXP char * ASN1CALL print_EvaluationStatus (const EvaluationStatus *, int);


/*
CommonCriteriaMeasures ::= SEQUENCE {
  version                IA5String,
  assurancelevel       EvaluationAssuranceLevel,
  evaluationStatus     EvaluationStatus,
  plus                 BOOLEAN,
  strengthOfFunction   [0] IMPLICIT StrengthOfFunction OPTIONAL,
  profileOid           [1] IMPLICIT   OBJECT IDENTIFIER OPTIONAL,
  profileUri           [2] IMPLICIT URIReference OPTIONAL,
  targetOid            [3] IMPLICIT   OBJECT IDENTIFIER OPTIONAL,
  targetUri            [4] IMPLICIT URIReference OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_CommonCriteriaMeasures = 1,
       asn1_tag_class_CommonCriteriaMeasures = 0,
       asn1_tag_tag_CommonCriteriaMeasures = 16 };
struct CommonCriteriaMeasures {
  heim_ia5_string version;
  EvaluationAssuranceLevel assurancelevel;
  EvaluationStatus evaluationStatus;
  int plus;
  StrengthOfFunction *strengthOfFunction;
  heim_oid *profileOid;
  URIReference *profileUri;
  heim_oid *targetOid;
  URIReference *targetUri;
};

ASN1EXP int    ASN1CALL decode_CommonCriteriaMeasures(const unsigned char *, size_t, CommonCriteriaMeasures *, size_t *);
ASN1EXP int    ASN1CALL encode_CommonCriteriaMeasures(unsigned char *, size_t, const CommonCriteriaMeasures *, size_t *);
ASN1EXP size_t ASN1CALL length_CommonCriteriaMeasures(const CommonCriteriaMeasures *);
ASN1EXP int    ASN1CALL copy_CommonCriteriaMeasures  (const CommonCriteriaMeasures *, CommonCriteriaMeasures *);
ASN1EXP void   ASN1CALL free_CommonCriteriaMeasures  (CommonCriteriaMeasures *);
ASN1EXP char * ASN1CALL print_CommonCriteriaMeasures (const CommonCriteriaMeasures *, int);


/*
FIPSLevel ::= SEQUENCE {
  version           IA5String,
  level           SecurityLevel,
  plus            BOOLEAN,
  ...,
}
*/

enum { asn1_tag_length_FIPSLevel = 1,
       asn1_tag_class_FIPSLevel = 0,
       asn1_tag_tag_FIPSLevel = 16 };
struct FIPSLevel {
  heim_ia5_string version;
  SecurityLevel level;
  int plus;
};

ASN1EXP int    ASN1CALL decode_FIPSLevel(const unsigned char *, size_t, FIPSLevel *, size_t *);
ASN1EXP int    ASN1CALL encode_FIPSLevel(unsigned char *, size_t, const FIPSLevel *, size_t *);
ASN1EXP size_t ASN1CALL length_FIPSLevel(const FIPSLevel *);
ASN1EXP int    ASN1CALL copy_FIPSLevel  (const FIPSLevel *, FIPSLevel *);
ASN1EXP void   ASN1CALL free_FIPSLevel  (FIPSLevel *);
ASN1EXP char * ASN1CALL print_FIPSLevel (const FIPSLevel *, int);


/*
TPMVersion ::= INTEGER {
  tpm_v1(0)
}
*/

enum { asn1_tag_length_TPMVersion = 1,
       asn1_tag_class_TPMVersion = 0,
       asn1_tag_tag_TPMVersion = 2 };
ASN1EXP int    ASN1CALL decode_TPMVersion(const unsigned char *, size_t, TPMVersion *, size_t *);
ASN1EXP int    ASN1CALL encode_TPMVersion(unsigned char *, size_t, const TPMVersion *, size_t *);
ASN1EXP size_t ASN1CALL length_TPMVersion(const TPMVersion *);
ASN1EXP int    ASN1CALL copy_TPMVersion  (const TPMVersion *, TPMVersion *);
ASN1EXP void   ASN1CALL free_TPMVersion  (TPMVersion *);
ASN1EXP char * ASN1CALL print_TPMVersion (const TPMVersion *, int);


/*
AliasIA5String ::= UTF8String
*/

enum { asn1_tag_length_AliasIA5String = 1,
       asn1_tag_class_AliasIA5String = 0,
       asn1_tag_tag_AliasIA5String = 12 };
ASN1EXP int    ASN1CALL decode_AliasIA5String(const unsigned char *, size_t, AliasIA5String *, size_t *);
ASN1EXP int    ASN1CALL encode_AliasIA5String(unsigned char *, size_t, const AliasIA5String *, size_t *);
ASN1EXP size_t ASN1CALL length_AliasIA5String(const AliasIA5String *);
ASN1EXP int    ASN1CALL copy_AliasIA5String  (const AliasIA5String *, AliasIA5String *);
ASN1EXP void   ASN1CALL free_AliasIA5String  (AliasIA5String *);
ASN1EXP char * ASN1CALL print_AliasIA5String (const AliasIA5String *, int);


/*
AliasPrintableString ::= PrintableString
*/

enum { asn1_tag_length_AliasPrintableString = 1,
       asn1_tag_class_AliasPrintableString = 0,
       asn1_tag_tag_AliasPrintableString = 19 };
ASN1EXP int    ASN1CALL decode_AliasPrintableString(const unsigned char *, size_t, AliasPrintableString *, size_t *);
ASN1EXP int    ASN1CALL encode_AliasPrintableString(unsigned char *, size_t, const AliasPrintableString *, size_t *);
ASN1EXP size_t ASN1CALL length_AliasPrintableString(const AliasPrintableString *);
ASN1EXP int    ASN1CALL copy_AliasPrintableString  (const AliasPrintableString *, AliasPrintableString *);
ASN1EXP void   ASN1CALL free_AliasPrintableString  (AliasPrintableString *);
ASN1EXP char * ASN1CALL print_AliasPrintableString (const AliasPrintableString *, int);


/*
X520name ::= DirectoryString
*/

enum { asn1_tag_length_X520name = 1,
       asn1_tag_class_X520name = 0,
       asn1_tag_tag_X520name = 0 };

ASN1EXP int    ASN1CALL decode_X520name(const unsigned char *, size_t, X520name *, size_t *);
ASN1EXP int    ASN1CALL encode_X520name(unsigned char *, size_t, const X520name *, size_t *);
ASN1EXP size_t ASN1CALL length_X520name(const X520name *);
ASN1EXP int    ASN1CALL copy_X520name  (const X520name *, X520name *);
ASN1EXP void   ASN1CALL free_X520name  (X520name *);
ASN1EXP char * ASN1CALL print_X520name (const X520name *, int);


/*
X520CommonName ::= DirectoryString
*/

enum { asn1_tag_length_X520CommonName = 1,
       asn1_tag_class_X520CommonName = 0,
       asn1_tag_tag_X520CommonName = 0 };

ASN1EXP int    ASN1CALL decode_X520CommonName(const unsigned char *, size_t, X520CommonName *, size_t *);
ASN1EXP int    ASN1CALL encode_X520CommonName(unsigned char *, size_t, const X520CommonName *, size_t *);
ASN1EXP size_t ASN1CALL length_X520CommonName(const X520CommonName *);
ASN1EXP int    ASN1CALL copy_X520CommonName  (const X520CommonName *, X520CommonName *);
ASN1EXP void   ASN1CALL free_X520CommonName  (X520CommonName *);
ASN1EXP char * ASN1CALL print_X520CommonName (const X520CommonName *, int);


/*
X520LocalityName ::= DirectoryString
*/

enum { asn1_tag_length_X520LocalityName = 1,
       asn1_tag_class_X520LocalityName = 0,
       asn1_tag_tag_X520LocalityName = 0 };

ASN1EXP int    ASN1CALL decode_X520LocalityName(const unsigned char *, size_t, X520LocalityName *, size_t *);
ASN1EXP int    ASN1CALL encode_X520LocalityName(unsigned char *, size_t, const X520LocalityName *, size_t *);
ASN1EXP size_t ASN1CALL length_X520LocalityName(const X520LocalityName *);
ASN1EXP int    ASN1CALL copy_X520LocalityName  (const X520LocalityName *, X520LocalityName *);
ASN1EXP void   ASN1CALL free_X520LocalityName  (X520LocalityName *);
ASN1EXP char * ASN1CALL print_X520LocalityName (const X520LocalityName *, int);


/*
X520OrganizationName ::= DirectoryString
*/

enum { asn1_tag_length_X520OrganizationName = 1,
       asn1_tag_class_X520OrganizationName = 0,
       asn1_tag_tag_X520OrganizationName = 0 };

ASN1EXP int    ASN1CALL decode_X520OrganizationName(const unsigned char *, size_t, X520OrganizationName *, size_t *);
ASN1EXP int    ASN1CALL encode_X520OrganizationName(unsigned char *, size_t, const X520OrganizationName *, size_t *);
ASN1EXP size_t ASN1CALL length_X520OrganizationName(const X520OrganizationName *);
ASN1EXP int    ASN1CALL copy_X520OrganizationName  (const X520OrganizationName *, X520OrganizationName *);
ASN1EXP void   ASN1CALL free_X520OrganizationName  (X520OrganizationName *);
ASN1EXP char * ASN1CALL print_X520OrganizationName (const X520OrganizationName *, int);


/*
X520StateOrProvinceName ::= DirectoryString
*/

enum { asn1_tag_length_X520StateOrProvinceName = 1,
       asn1_tag_class_X520StateOrProvinceName = 0,
       asn1_tag_tag_X520StateOrProvinceName = 0 };

ASN1EXP int    ASN1CALL decode_X520StateOrProvinceName(const unsigned char *, size_t, X520StateOrProvinceName *, size_t *);
ASN1EXP int    ASN1CALL encode_X520StateOrProvinceName(unsigned char *, size_t, const X520StateOrProvinceName *, size_t *);
ASN1EXP size_t ASN1CALL length_X520StateOrProvinceName(const X520StateOrProvinceName *);
ASN1EXP int    ASN1CALL copy_X520StateOrProvinceName  (const X520StateOrProvinceName *, X520StateOrProvinceName *);
ASN1EXP void   ASN1CALL free_X520StateOrProvinceName  (X520StateOrProvinceName *);
ASN1EXP char * ASN1CALL print_X520StateOrProvinceName (const X520StateOrProvinceName *, int);


/*
X520OrganizationalUnitName ::= DirectoryString
*/

enum { asn1_tag_length_X520OrganizationalUnitName = 1,
       asn1_tag_class_X520OrganizationalUnitName = 0,
       asn1_tag_tag_X520OrganizationalUnitName = 0 };

ASN1EXP int    ASN1CALL decode_X520OrganizationalUnitName(const unsigned char *, size_t, X520OrganizationalUnitName *, size_t *);
ASN1EXP int    ASN1CALL encode_X520OrganizationalUnitName(unsigned char *, size_t, const X520OrganizationalUnitName *, size_t *);
ASN1EXP size_t ASN1CALL length_X520OrganizationalUnitName(const X520OrganizationalUnitName *);
ASN1EXP int    ASN1CALL copy_X520OrganizationalUnitName  (const X520OrganizationalUnitName *, X520OrganizationalUnitName *);
ASN1EXP void   ASN1CALL free_X520OrganizationalUnitName  (X520OrganizationalUnitName *);
ASN1EXP char * ASN1CALL print_X520OrganizationalUnitName (const X520OrganizationalUnitName *, int);


/*
SingleAttribute ::= SEQUENCE {
  type              OBJECT IDENTIFIER,
  value           HEIM_ANY,
}
*/

enum { asn1_tag_length_SingleAttribute = 1,
       asn1_tag_class_SingleAttribute = 0,
       asn1_tag_tag_SingleAttribute = 16 };
struct SingleAttribute {
  heim_oid type;
  HEIM_ANY value;
struct {
enum { choice_SingleAttribute_iosnumunknown = 0,
choice_SingleAttribute_iosnum_id_domainComponent,
choice_SingleAttribute_iosnum_id_at_emailAddress,
choice_SingleAttribute_iosnum_id_at_commonName,
choice_SingleAttribute_iosnum_id_at_surname,
choice_SingleAttribute_iosnum_id_at_serialNumber,
choice_SingleAttribute_iosnum_id_at_countryName,
choice_SingleAttribute_iosnum_id_at_localityName,
choice_SingleAttribute_iosnum_id_at_stateOrProvinceName,
choice_SingleAttribute_iosnum_id_at_organizationName,
choice_SingleAttribute_iosnum_id_at_organizationalUnitName,
choice_SingleAttribute_iosnum_id_at_title,
choice_SingleAttribute_iosnum_id_at_name,
choice_SingleAttribute_iosnum_id_at_givenName,
choice_SingleAttribute_iosnum_id_at_initials,
choice_SingleAttribute_iosnum_id_at_generationQualifier,
choice_SingleAttribute_iosnum_id_at_dnQualifier,
choice_SingleAttribute_iosnum_id_at_pseudonym,
choice_SingleAttribute_iosnum_tcg_at_tpmManufacturer,
choice_SingleAttribute_iosnum_tcg_at_tpmModel,
choice_SingleAttribute_iosnum_tcg_at_tpmVersion,
choice_SingleAttribute_iosnum_tcg_at_tpmSpecification,
choice_SingleAttribute_iosnum_tcg_at_tpmSecurityAssertions,
} element;
union {
void *_any;
    AliasIA5String *at_domainComponent;
    AliasIA5String *at_emailAddress;
    X520CommonName *at_x520CommonName;
    X520name *at_surname;
    AliasPrintableString *at_x520SerialNumber;
    AliasPrintableString *at_x520countryName;
    X520LocalityName *at_x520LocalityName;
    DirectoryString *at_x520StateOrProvinceName;
    DirectoryString *at_x520OrganizationName;
    DirectoryString *at_x520OrganizationalUnitName;
    DirectoryString *at_x520Title;
    X520name *at_name;
    X520name *at_givenName;
    X520name *at_initials;
    X520name *at_generationQualifier;
    AliasPrintableString *at_x520dnQualifier;
    DirectoryString *at_x520Pseudonym;
    AliasUTF8String *at_TPMManufacturer;
    AliasUTF8String *at_TPMModel;
    AliasUTF8String *at_TPMVersion;
    TPMSpecification *at_TPMSpecification;
    TPMSecurityAssertions *at_TPMSecurityAssertions;
} u;
} _ioschoice_value;
};

ASN1EXP int    ASN1CALL decode_SingleAttribute(const unsigned char *, size_t, SingleAttribute *, size_t *);
ASN1EXP int    ASN1CALL encode_SingleAttribute(unsigned char *, size_t, const SingleAttribute *, size_t *);
ASN1EXP size_t ASN1CALL length_SingleAttribute(const SingleAttribute *);
ASN1EXP int    ASN1CALL copy_SingleAttribute  (const SingleAttribute *, SingleAttribute *);
ASN1EXP void   ASN1CALL free_SingleAttribute  (SingleAttribute *);
ASN1EXP char * ASN1CALL print_SingleAttribute (const SingleAttribute *, int);


/*
AttributeSet ::= SEQUENCE {
  type              OBJECT IDENTIFIER,
  values          SET OF HEIM_ANY,
}
*/

enum { asn1_tag_length_AttributeSet = 1,
       asn1_tag_class_AttributeSet = 0,
       asn1_tag_tag_AttributeSet = 16 };
struct AttributeSet {
  heim_oid type;
  struct AttributeSet_values {
    unsigned int len;
    HEIM_ANY *val;
  } values;
struct {
enum { choice_AttributeSet_iosnumunknown = 0,
choice_AttributeSet_iosnum_id_domainComponent,
choice_AttributeSet_iosnum_id_at_emailAddress,
choice_AttributeSet_iosnum_id_at_commonName,
choice_AttributeSet_iosnum_id_at_surname,
choice_AttributeSet_iosnum_id_at_serialNumber,
choice_AttributeSet_iosnum_id_at_countryName,
choice_AttributeSet_iosnum_id_at_localityName,
choice_AttributeSet_iosnum_id_at_stateOrProvinceName,
choice_AttributeSet_iosnum_id_at_organizationName,
choice_AttributeSet_iosnum_id_at_organizationalUnitName,
choice_AttributeSet_iosnum_id_at_title,
choice_AttributeSet_iosnum_id_at_name,
choice_AttributeSet_iosnum_id_at_givenName,
choice_AttributeSet_iosnum_id_at_initials,
choice_AttributeSet_iosnum_id_at_generationQualifier,
choice_AttributeSet_iosnum_id_at_dnQualifier,
choice_AttributeSet_iosnum_id_at_pseudonym,
choice_AttributeSet_iosnum_tcg_at_tpmManufacturer,
choice_AttributeSet_iosnum_tcg_at_tpmModel,
choice_AttributeSet_iosnum_tcg_at_tpmVersion,
choice_AttributeSet_iosnum_tcg_at_tpmSpecification,
choice_AttributeSet_iosnum_tcg_at_tpmSecurityAssertions,
} element;
unsigned int len;
union {
void *_any;
    AliasIA5String *at_domainComponent;
    AliasIA5String *at_emailAddress;
    X520CommonName *at_x520CommonName;
    X520name *at_surname;
    AliasPrintableString *at_x520SerialNumber;
    AliasPrintableString *at_x520countryName;
    X520LocalityName *at_x520LocalityName;
    DirectoryString *at_x520StateOrProvinceName;
    DirectoryString *at_x520OrganizationName;
    DirectoryString *at_x520OrganizationalUnitName;
    DirectoryString *at_x520Title;
    X520name *at_name;
    X520name *at_givenName;
    X520name *at_initials;
    X520name *at_generationQualifier;
    AliasPrintableString *at_x520dnQualifier;
    DirectoryString *at_x520Pseudonym;
    AliasUTF8String *at_TPMManufacturer;
    AliasUTF8String *at_TPMModel;
    AliasUTF8String *at_TPMVersion;
    TPMSpecification *at_TPMSpecification;
    TPMSecurityAssertions *at_TPMSecurityAssertions;
} *val;
} _ioschoice_values;
};

ASN1EXP int    ASN1CALL decode_AttributeSet(const unsigned char *, size_t, AttributeSet *, size_t *);
ASN1EXP int    ASN1CALL encode_AttributeSet(unsigned char *, size_t, const AttributeSet *, size_t *);
ASN1EXP size_t ASN1CALL length_AttributeSet(const AttributeSet *);
ASN1EXP int    ASN1CALL copy_AttributeSet  (const AttributeSet *, AttributeSet *);
ASN1EXP void   ASN1CALL free_AttributeSet  (AttributeSet *);
ASN1EXP char * ASN1CALL print_AttributeSet (const AttributeSet *, int);


/*
SubjectDirectoryAttributes ::= SEQUENCE OF AttributeSet
*/

enum { asn1_tag_length_SubjectDirectoryAttributes = 1,
       asn1_tag_class_SubjectDirectoryAttributes = 0,
       asn1_tag_tag_SubjectDirectoryAttributes = 16 };
struct SubjectDirectoryAttributes {
  unsigned int len;
  AttributeSet *val;
};

ASN1EXP int    ASN1CALL decode_SubjectDirectoryAttributes(const unsigned char *, size_t, SubjectDirectoryAttributes *, size_t *);
ASN1EXP int    ASN1CALL encode_SubjectDirectoryAttributes(unsigned char *, size_t, const SubjectDirectoryAttributes *, size_t *);
ASN1EXP size_t ASN1CALL length_SubjectDirectoryAttributes(const SubjectDirectoryAttributes *);
ASN1EXP int    ASN1CALL copy_SubjectDirectoryAttributes  (const SubjectDirectoryAttributes *, SubjectDirectoryAttributes *);
ASN1EXP void   ASN1CALL free_SubjectDirectoryAttributes  (SubjectDirectoryAttributes *);
ASN1EXP char * ASN1CALL print_SubjectDirectoryAttributes (const SubjectDirectoryAttributes *, int);


/*
SkipCerts ::= INTEGER (0..4294967295)
*/

enum { asn1_tag_length_SkipCerts = 1,
       asn1_tag_class_SkipCerts = 0,
       asn1_tag_tag_SkipCerts = 2 };
ASN1EXP int    ASN1CALL decode_SkipCerts(const unsigned char *, size_t, SkipCerts *, size_t *);
ASN1EXP int    ASN1CALL encode_SkipCerts(unsigned char *, size_t, const SkipCerts *, size_t *);
ASN1EXP size_t ASN1CALL length_SkipCerts(const SkipCerts *);
ASN1EXP int    ASN1CALL copy_SkipCerts  (const SkipCerts *, SkipCerts *);
ASN1EXP void   ASN1CALL free_SkipCerts  (SkipCerts *);
ASN1EXP char * ASN1CALL print_SkipCerts (const SkipCerts *, int);


/*
PolicyConstraints ::= SEQUENCE {
  requireExplicitPolicy   [0] IMPLICIT SkipCerts OPTIONAL,
  inhibitPolicyMapping    [1] IMPLICIT SkipCerts OPTIONAL,
}
*/

enum { asn1_tag_length_PolicyConstraints = 1,
       asn1_tag_class_PolicyConstraints = 0,
       asn1_tag_tag_PolicyConstraints = 16 };
struct PolicyConstraints {
  SkipCerts *requireExplicitPolicy;
  SkipCerts *inhibitPolicyMapping;
};

ASN1EXP int    ASN1CALL decode_PolicyConstraints(const unsigned char *, size_t, PolicyConstraints *, size_t *);
ASN1EXP int    ASN1CALL encode_PolicyConstraints(unsigned char *, size_t, const PolicyConstraints *, size_t *);
ASN1EXP size_t ASN1CALL length_PolicyConstraints(const PolicyConstraints *);
ASN1EXP int    ASN1CALL copy_PolicyConstraints  (const PolicyConstraints *, PolicyConstraints *);
ASN1EXP void   ASN1CALL free_PolicyConstraints  (PolicyConstraints *);
ASN1EXP char * ASN1CALL print_PolicyConstraints (const PolicyConstraints *, int);


/*
HeimPkinitPrincMaxLifeSecs ::= INTEGER (0..4294967295)
*/

enum { asn1_tag_length_HeimPkinitPrincMaxLifeSecs = 1,
       asn1_tag_class_HeimPkinitPrincMaxLifeSecs = 0,
       asn1_tag_tag_HeimPkinitPrincMaxLifeSecs = 2 };
ASN1EXP int    ASN1CALL decode_HeimPkinitPrincMaxLifeSecs(const unsigned char *, size_t, HeimPkinitPrincMaxLifeSecs *, size_t *);
ASN1EXP int    ASN1CALL encode_HeimPkinitPrincMaxLifeSecs(unsigned char *, size_t, const HeimPkinitPrincMaxLifeSecs *, size_t *);
ASN1EXP size_t ASN1CALL length_HeimPkinitPrincMaxLifeSecs(const HeimPkinitPrincMaxLifeSecs *);
ASN1EXP int    ASN1CALL copy_HeimPkinitPrincMaxLifeSecs  (const HeimPkinitPrincMaxLifeSecs *, HeimPkinitPrincMaxLifeSecs *);
ASN1EXP void   ASN1CALL free_HeimPkinitPrincMaxLifeSecs  (HeimPkinitPrincMaxLifeSecs *);
ASN1EXP char * ASN1CALL print_HeimPkinitPrincMaxLifeSecs (const HeimPkinitPrincMaxLifeSecs *, int);


#endif /* __rfc2459_asn1_h__ */
