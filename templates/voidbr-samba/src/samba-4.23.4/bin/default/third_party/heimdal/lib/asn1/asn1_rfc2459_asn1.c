/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/rfc2459.asn1 */
/* Do not edit */

#if defined(_WIN32) && !defined(ASN1_LIB)
# error "ASN1_LIB must be defined"
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "rfc2459_asn1.h"
#include "rfc2459_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_HEIM_ANY = {
	(asn1_type_encode)encode_HEIM_ANY,
	(asn1_type_decode)decode_HEIM_ANY,
	(asn1_type_length)length_HEIM_ANY,
	(asn1_type_copy)copy_HEIM_ANY,
	(asn1_type_release)free_HEIM_ANY,
	(asn1_type_print)print_HEIM_ANY,
	sizeof(HEIM_ANY)
};
static const struct asn1_type_func asn1_extern_PrincipalName = {
	(asn1_type_encode)encode_PrincipalName,
	(asn1_type_decode)decode_PrincipalName,
	(asn1_type_length)length_PrincipalName,
	(asn1_type_copy)copy_PrincipalName,
	(asn1_type_release)free_PrincipalName,
	(asn1_type_print)print_PrincipalName,
	sizeof(PrincipalName)
};
static const struct asn1_type_func asn1_extern_Realm = {
	(asn1_type_encode)encode_Realm,
	(asn1_type_decode)decode_Realm,
	(asn1_type_length)length_Realm,
	(asn1_type_copy)copy_Realm,
	(asn1_type_release)free_Realm,
	(asn1_type_print)print_Realm,
	sizeof(Realm)
};
extern const struct asn1_template asn1_Version[];
extern const struct asn1_template asn1_Version[];
static unsigned oid_id_pkcs_1_variable_num[6] =  { 1, 2, 840, 113549, 1, 1};
const heim_oid asn1_oid_id_pkcs_1 = { 6, oid_id_pkcs_1_variable_num };

static unsigned oid_id_pkcs1_rsaEncryption_variable_num[7] =  { 1, 2, 840, 113549, 1, 1, 1};
const heim_oid asn1_oid_id_pkcs1_rsaEncryption = { 7, oid_id_pkcs1_rsaEncryption_variable_num };

static unsigned oid_id_pkcs1_md2WithRSAEncryption_variable_num[7] =  { 1, 2, 840, 113549, 1, 1, 2};
const heim_oid asn1_oid_id_pkcs1_md2WithRSAEncryption = { 7, oid_id_pkcs1_md2WithRSAEncryption_variable_num };

static unsigned oid_id_pkcs1_md5WithRSAEncryption_variable_num[7] =  { 1, 2, 840, 113549, 1, 1, 4};
const heim_oid asn1_oid_id_pkcs1_md5WithRSAEncryption = { 7, oid_id_pkcs1_md5WithRSAEncryption_variable_num };

static unsigned oid_id_pkcs1_sha1WithRSAEncryption_variable_num[7] =  { 1, 2, 840, 113549, 1, 1, 5};
const heim_oid asn1_oid_id_pkcs1_sha1WithRSAEncryption = { 7, oid_id_pkcs1_sha1WithRSAEncryption_variable_num };

static unsigned oid_id_pkcs1_sha256WithRSAEncryption_variable_num[7] =  { 1, 2, 840, 113549, 1, 1, 11};
const heim_oid asn1_oid_id_pkcs1_sha256WithRSAEncryption = { 7, oid_id_pkcs1_sha256WithRSAEncryption_variable_num };

static unsigned oid_id_pkcs1_sha384WithRSAEncryption_variable_num[7] =  { 1, 2, 840, 113549, 1, 1, 12};
const heim_oid asn1_oid_id_pkcs1_sha384WithRSAEncryption = { 7, oid_id_pkcs1_sha384WithRSAEncryption_variable_num };

static unsigned oid_id_pkcs1_sha512WithRSAEncryption_variable_num[7] =  { 1, 2, 840, 113549, 1, 1, 13};
const heim_oid asn1_oid_id_pkcs1_sha512WithRSAEncryption = { 7, oid_id_pkcs1_sha512WithRSAEncryption_variable_num };

static unsigned oid_id_heim_rsa_pkcs1_x509_variable_num[6] =  { 1, 2, 752, 43, 16, 1};
const heim_oid asn1_oid_id_heim_rsa_pkcs1_x509 = { 6, oid_id_heim_rsa_pkcs1_x509_variable_num };

static unsigned oid_id_pkcs_2_variable_num[6] =  { 1, 2, 840, 113549, 1, 2};
const heim_oid asn1_oid_id_pkcs_2 = { 6, oid_id_pkcs_2_variable_num };

static unsigned oid_id_pkcs2_md2_variable_num[7] =  { 1, 2, 840, 113549, 1, 2, 2};
const heim_oid asn1_oid_id_pkcs2_md2 = { 7, oid_id_pkcs2_md2_variable_num };

static unsigned oid_id_pkcs2_md4_variable_num[7] =  { 1, 2, 840, 113549, 1, 2, 4};
const heim_oid asn1_oid_id_pkcs2_md4 = { 7, oid_id_pkcs2_md4_variable_num };

static unsigned oid_id_pkcs2_md5_variable_num[7] =  { 1, 2, 840, 113549, 1, 2, 5};
const heim_oid asn1_oid_id_pkcs2_md5 = { 7, oid_id_pkcs2_md5_variable_num };

static unsigned oid_id_rsa_digestAlgorithm_variable_num[5] =  { 1, 2, 840, 113549, 2};
const heim_oid asn1_oid_id_rsa_digestAlgorithm = { 5, oid_id_rsa_digestAlgorithm_variable_num };

static unsigned oid_id_rsa_digest_md2_variable_num[6] =  { 1, 2, 840, 113549, 2, 2};
const heim_oid asn1_oid_id_rsa_digest_md2 = { 6, oid_id_rsa_digest_md2_variable_num };

static unsigned oid_id_rsa_digest_md4_variable_num[6] =  { 1, 2, 840, 113549, 2, 4};
const heim_oid asn1_oid_id_rsa_digest_md4 = { 6, oid_id_rsa_digest_md4_variable_num };

static unsigned oid_id_rsa_digest_md5_variable_num[6] =  { 1, 2, 840, 113549, 2, 5};
const heim_oid asn1_oid_id_rsa_digest_md5 = { 6, oid_id_rsa_digest_md5_variable_num };

static unsigned oid_id_pkcs_3_variable_num[6] =  { 1, 2, 840, 113549, 1, 3};
const heim_oid asn1_oid_id_pkcs_3 = { 6, oid_id_pkcs_3_variable_num };

static unsigned oid_id_pkcs3_rc2_cbc_variable_num[7] =  { 1, 2, 840, 113549, 1, 3, 2};
const heim_oid asn1_oid_id_pkcs3_rc2_cbc = { 7, oid_id_pkcs3_rc2_cbc_variable_num };

static unsigned oid_id_pkcs3_rc4_variable_num[7] =  { 1, 2, 840, 113549, 1, 3, 4};
const heim_oid asn1_oid_id_pkcs3_rc4 = { 7, oid_id_pkcs3_rc4_variable_num };

static unsigned oid_id_pkcs3_des_ede3_cbc_variable_num[7] =  { 1, 2, 840, 113549, 1, 3, 7};
const heim_oid asn1_oid_id_pkcs3_des_ede3_cbc = { 7, oid_id_pkcs3_des_ede3_cbc_variable_num };

static unsigned oid_id_rsadsi_encalg_variable_num[5] =  { 1, 2, 840, 113549, 3};
const heim_oid asn1_oid_id_rsadsi_encalg = { 5, oid_id_rsadsi_encalg_variable_num };

static unsigned oid_id_rsadsi_rc2_cbc_variable_num[6] =  { 1, 2, 840, 113549, 3, 2};
const heim_oid asn1_oid_id_rsadsi_rc2_cbc = { 6, oid_id_rsadsi_rc2_cbc_variable_num };

static unsigned oid_id_rsadsi_des_ede3_cbc_variable_num[6] =  { 1, 2, 840, 113549, 3, 7};
const heim_oid asn1_oid_id_rsadsi_des_ede3_cbc = { 6, oid_id_rsadsi_des_ede3_cbc_variable_num };

static unsigned oid_id_secsig_sha_1_variable_num[6] =  { 1, 3, 14, 3, 2, 26};
const heim_oid asn1_oid_id_secsig_sha_1 = { 6, oid_id_secsig_sha_1_variable_num };

static unsigned oid_id_secsig_sha_1WithRSAEncryption_variable_num[6] =  { 1, 3, 14, 3, 2, 29};
const heim_oid asn1_oid_id_secsig_sha_1WithRSAEncryption = { 6, oid_id_secsig_sha_1WithRSAEncryption_variable_num };

static unsigned oid_id_nistAlgorithm_variable_num[7] =  { 2, 16, 840, 1, 101, 3, 4};
const heim_oid asn1_oid_id_nistAlgorithm = { 7, oid_id_nistAlgorithm_variable_num };

static unsigned oid_id_nist_aes_algs_variable_num[8] =  { 2, 16, 840, 1, 101, 3, 4, 1};
const heim_oid asn1_oid_id_nist_aes_algs = { 8, oid_id_nist_aes_algs_variable_num };

static unsigned oid_id_aes_128_cbc_variable_num[9] =  { 2, 16, 840, 1, 101, 3, 4, 1, 2};
const heim_oid asn1_oid_id_aes_128_cbc = { 9, oid_id_aes_128_cbc_variable_num };

static unsigned oid_id_aes_192_cbc_variable_num[9] =  { 2, 16, 840, 1, 101, 3, 4, 1, 22};
const heim_oid asn1_oid_id_aes_192_cbc = { 9, oid_id_aes_192_cbc_variable_num };

static unsigned oid_id_aes_256_cbc_variable_num[9] =  { 2, 16, 840, 1, 101, 3, 4, 1, 42};
const heim_oid asn1_oid_id_aes_256_cbc = { 9, oid_id_aes_256_cbc_variable_num };

static unsigned oid_id_nist_sha_algs_variable_num[8] =  { 2, 16, 840, 1, 101, 3, 4, 2};
const heim_oid asn1_oid_id_nist_sha_algs = { 8, oid_id_nist_sha_algs_variable_num };

static unsigned oid_id_sha256_variable_num[9] =  { 2, 16, 840, 1, 101, 3, 4, 2, 1};
const heim_oid asn1_oid_id_sha256 = { 9, oid_id_sha256_variable_num };

static unsigned oid_id_sha224_variable_num[9] =  { 2, 16, 840, 1, 101, 3, 4, 2, 4};
const heim_oid asn1_oid_id_sha224 = { 9, oid_id_sha224_variable_num };

static unsigned oid_id_sha384_variable_num[9] =  { 2, 16, 840, 1, 101, 3, 4, 2, 2};
const heim_oid asn1_oid_id_sha384 = { 9, oid_id_sha384_variable_num };

static unsigned oid_id_sha512_variable_num[9] =  { 2, 16, 840, 1, 101, 3, 4, 2, 3};
const heim_oid asn1_oid_id_sha512 = { 9, oid_id_sha512_variable_num };

static unsigned oid_id_dhpublicnumber_variable_num[6] =  { 1, 2, 840, 10046, 2, 1};
const heim_oid asn1_oid_id_dhpublicnumber = { 6, oid_id_dhpublicnumber_variable_num };

static unsigned oid_id_ecPublicKey_variable_num[6] =  { 1, 2, 840, 10045, 2, 1};
const heim_oid asn1_oid_id_ecPublicKey = { 6, oid_id_ecPublicKey_variable_num };

static unsigned oid_id_ecDH_variable_num[5] =  { 1, 3, 132, 1, 12};
const heim_oid asn1_oid_id_ecDH = { 5, oid_id_ecDH_variable_num };

static unsigned oid_id_ecMQV_variable_num[5] =  { 1, 3, 132, 1, 13};
const heim_oid asn1_oid_id_ecMQV = { 5, oid_id_ecMQV_variable_num };

static unsigned oid_id_ecdsa_with_SHA512_variable_num[7] =  { 1, 2, 840, 10045, 4, 3, 4};
const heim_oid asn1_oid_id_ecdsa_with_SHA512 = { 7, oid_id_ecdsa_with_SHA512_variable_num };

static unsigned oid_id_ecdsa_with_SHA384_variable_num[7] =  { 1, 2, 840, 10045, 4, 3, 3};
const heim_oid asn1_oid_id_ecdsa_with_SHA384 = { 7, oid_id_ecdsa_with_SHA384_variable_num };

static unsigned oid_id_ecdsa_with_SHA256_variable_num[7] =  { 1, 2, 840, 10045, 4, 3, 2};
const heim_oid asn1_oid_id_ecdsa_with_SHA256 = { 7, oid_id_ecdsa_with_SHA256_variable_num };

static unsigned oid_id_ecdsa_with_SHA224_variable_num[7] =  { 1, 2, 840, 10045, 4, 3, 1};
const heim_oid asn1_oid_id_ecdsa_with_SHA224 = { 7, oid_id_ecdsa_with_SHA224_variable_num };

static unsigned oid_id_ecdsa_with_SHA1_variable_num[6] =  { 1, 2, 840, 10045, 4, 1};
const heim_oid asn1_oid_id_ecdsa_with_SHA1 = { 6, oid_id_ecdsa_with_SHA1_variable_num };

static unsigned oid_id_ec_group_secp256r1_variable_num[7] =  { 1, 2, 840, 10045, 3, 1, 7};
const heim_oid asn1_oid_id_ec_group_secp256r1 = { 7, oid_id_ec_group_secp256r1_variable_num };

static unsigned oid_id_ec_group_secp160r1_variable_num[5] =  { 1, 3, 132, 0, 8};
const heim_oid asn1_oid_id_ec_group_secp160r1 = { 5, oid_id_ec_group_secp160r1_variable_num };

static unsigned oid_id_ec_group_secp160r2_variable_num[5] =  { 1, 3, 132, 0, 30};
const heim_oid asn1_oid_id_ec_group_secp160r2 = { 5, oid_id_ec_group_secp160r2_variable_num };

static unsigned oid_id_ec_group_secp224r1_variable_num[5] =  { 1, 3, 132, 0, 33};
const heim_oid asn1_oid_id_ec_group_secp224r1 = { 5, oid_id_ec_group_secp224r1_variable_num };

static unsigned oid_id_ec_group_secp384r1_variable_num[5] =  { 1, 3, 132, 0, 34};
const heim_oid asn1_oid_id_ec_group_secp384r1 = { 5, oid_id_ec_group_secp384r1_variable_num };

static unsigned oid_id_ec_group_secp521r1_variable_num[5] =  { 1, 3, 132, 0, 35};
const heim_oid asn1_oid_id_ec_group_secp521r1 = { 5, oid_id_ec_group_secp521r1_variable_num };

static unsigned oid_id_x9_57_variable_num[5] =  { 1, 2, 840, 10046, 4};
const heim_oid asn1_oid_id_x9_57 = { 5, oid_id_x9_57_variable_num };

static unsigned oid_id_dsa_variable_num[6] =  { 1, 2, 840, 10046, 4, 1};
const heim_oid asn1_oid_id_dsa = { 6, oid_id_dsa_variable_num };

static unsigned oid_id_dsa_with_sha1_variable_num[6] =  { 1, 2, 840, 10046, 4, 3};
const heim_oid asn1_oid_id_dsa_with_sha1 = { 6, oid_id_dsa_with_sha1_variable_num };

static unsigned oid_id_x520_at_variable_num[3] =  { 2, 5, 4};
const heim_oid asn1_oid_id_x520_at = { 3, oid_id_x520_at_variable_num };

static unsigned oid_id_at_commonName_variable_num[4] =  { 2, 5, 4, 3};
const heim_oid asn1_oid_id_at_commonName = { 4, oid_id_at_commonName_variable_num };

static unsigned oid_id_at_surname_variable_num[4] =  { 2, 5, 4, 4};
const heim_oid asn1_oid_id_at_surname = { 4, oid_id_at_surname_variable_num };

static unsigned oid_id_at_serialNumber_variable_num[4] =  { 2, 5, 4, 5};
const heim_oid asn1_oid_id_at_serialNumber = { 4, oid_id_at_serialNumber_variable_num };

static unsigned oid_id_at_countryName_variable_num[4] =  { 2, 5, 4, 6};
const heim_oid asn1_oid_id_at_countryName = { 4, oid_id_at_countryName_variable_num };

static unsigned oid_id_at_localityName_variable_num[4] =  { 2, 5, 4, 7};
const heim_oid asn1_oid_id_at_localityName = { 4, oid_id_at_localityName_variable_num };

static unsigned oid_id_at_stateOrProvinceName_variable_num[4] =  { 2, 5, 4, 8};
const heim_oid asn1_oid_id_at_stateOrProvinceName = { 4, oid_id_at_stateOrProvinceName_variable_num };

static unsigned oid_id_at_streetAddress_variable_num[4] =  { 2, 5, 4, 9};
const heim_oid asn1_oid_id_at_streetAddress = { 4, oid_id_at_streetAddress_variable_num };

static unsigned oid_id_at_organizationName_variable_num[4] =  { 2, 5, 4, 10};
const heim_oid asn1_oid_id_at_organizationName = { 4, oid_id_at_organizationName_variable_num };

static unsigned oid_id_at_organizationalUnitName_variable_num[4] =  { 2, 5, 4, 11};
const heim_oid asn1_oid_id_at_organizationalUnitName = { 4, oid_id_at_organizationalUnitName_variable_num };

static unsigned oid_id_at_title_variable_num[4] =  { 2, 5, 4, 12};
const heim_oid asn1_oid_id_at_title = { 4, oid_id_at_title_variable_num };

static unsigned oid_id_at_description_variable_num[4] =  { 2, 5, 4, 13};
const heim_oid asn1_oid_id_at_description = { 4, oid_id_at_description_variable_num };

static unsigned oid_id_at_name_variable_num[4] =  { 2, 5, 4, 41};
const heim_oid asn1_oid_id_at_name = { 4, oid_id_at_name_variable_num };

static unsigned oid_id_at_givenName_variable_num[4] =  { 2, 5, 4, 42};
const heim_oid asn1_oid_id_at_givenName = { 4, oid_id_at_givenName_variable_num };

static unsigned oid_id_at_initials_variable_num[4] =  { 2, 5, 4, 43};
const heim_oid asn1_oid_id_at_initials = { 4, oid_id_at_initials_variable_num };

static unsigned oid_id_at_generationQualifier_variable_num[4] =  { 2, 5, 4, 44};
const heim_oid asn1_oid_id_at_generationQualifier = { 4, oid_id_at_generationQualifier_variable_num };

static unsigned oid_id_at_dnQualifier_variable_num[4] =  { 2, 5, 4, 46};
const heim_oid asn1_oid_id_at_dnQualifier = { 4, oid_id_at_dnQualifier_variable_num };

static unsigned oid_id_at_pseudonym_variable_num[4] =  { 2, 5, 4, 65};
const heim_oid asn1_oid_id_at_pseudonym = { 4, oid_id_at_pseudonym_variable_num };

static unsigned oid_id_Userid_variable_num[7] =  { 0, 9, 2342, 19200300, 100, 1, 1};
const heim_oid asn1_oid_id_Userid = { 7, oid_id_Userid_variable_num };

static unsigned oid_id_domainComponent_variable_num[7] =  { 0, 9, 2342, 19200300, 100, 1, 25};
const heim_oid asn1_oid_id_domainComponent = { 7, oid_id_domainComponent_variable_num };

static unsigned oid_id_at_emailAddress_variable_num[7] =  { 1, 2, 840, 113549, 1, 9, 1};
const heim_oid asn1_oid_id_at_emailAddress = { 7, oid_id_at_emailAddress_variable_num };

static unsigned oid_id_x509_ce_variable_num[3] =  { 2, 5, 29};
const heim_oid asn1_oid_id_x509_ce = { 3, oid_id_x509_ce_variable_num };

extern const struct asn1_template asn1_AlgorithmIdentifier[];
extern const struct asn1_template asn1_AttributeType[];
extern const struct asn1_template asn1_AttributeType[];
extern const struct asn1_template asn1_AttributeValue[];
extern const struct asn1_template asn1_AttributeValue[];
extern const struct asn1_template asn1_DirectoryString[];
extern const struct asn1_template asn1_AttributeValues[];
extern const struct asn1_template asn1_Attribute[];
extern const struct asn1_template asn1_AttributeTypeAndValue[];
extern const struct asn1_template asn1_RelativeDistinguishedName[];
extern const struct asn1_template asn1_RDNSequence[];
extern const struct asn1_template asn1_Name[];
extern const struct asn1_template asn1_CertificateSerialNumber[];
extern const struct asn1_template asn1_CertificateSerialNumber[];
extern const struct asn1_template asn1_Time[];
extern const struct asn1_template asn1_Validity[];
extern const struct asn1_template asn1_UniqueIdentifier[];
extern const struct asn1_template asn1_UniqueIdentifier[];
extern const struct asn1_template asn1_SubjectPublicKeyInfo[];
extern const struct asn1_template asn1_Extensions[];
extern const struct asn1_template asn1_TBSCertificate[];
extern const struct asn1_template asn1_Certificate[];
extern const struct asn1_template asn1_Certificates[];
extern const struct asn1_template asn1_ValidationParms[];
extern const struct asn1_template asn1_DomainParameters[];
extern const struct asn1_template asn1_DHParameter[];
extern const struct asn1_template asn1_DHPublicKey[];
extern const struct asn1_template asn1_DHPublicKey[];
extern const struct asn1_template asn1_GeneralName[];
extern const struct asn1_template asn1_GeneralNames[];
static unsigned oid_id_x509_ce_keyUsage_variable_num[4] =  { 2, 5, 29, 15};
const heim_oid asn1_oid_id_x509_ce_keyUsage = { 4, oid_id_x509_ce_keyUsage_variable_num };

extern const struct asn1_template asn1_KeyUsage[];
extern const struct asn1_template asn1_KeyUsage[];
extern const struct asn1_template asn1_PrivateKeyUsagePeriod[];
extern const struct asn1_template asn1_CertPolicyId[];
extern const struct asn1_template asn1_CertPolicyId[];
extern const struct asn1_template asn1_PolicyQualifierId[];
extern const struct asn1_template asn1_PolicyQualifierId[];
extern const struct asn1_template asn1_PolicyQualifierInfos[];
extern const struct asn1_template asn1_PolicyInformation[];
extern const struct asn1_template asn1_CertificatePolicies[];
extern const struct asn1_template asn1_CPSuri[];
extern const struct asn1_template asn1_CPSuri[];
extern const struct asn1_template asn1_DisplayText[];
extern const struct asn1_template asn1_NoticeReference[];
extern const struct asn1_template asn1_UserNotice[];
extern const struct asn1_template asn1_PolicyMapping[];
extern const struct asn1_template asn1_PolicyMappings[];
static unsigned oid_id_x509_ce_authorityKeyIdentifier_variable_num[4] =  { 2, 5, 29, 35};
const heim_oid asn1_oid_id_x509_ce_authorityKeyIdentifier = { 4, oid_id_x509_ce_authorityKeyIdentifier_variable_num };

extern const struct asn1_template asn1_KeyIdentifier[];
extern const struct asn1_template asn1_KeyIdentifier[];
extern const struct asn1_template asn1_AuthorityKeyIdentifier[];
static unsigned oid_id_x509_ce_subjectKeyIdentifier_variable_num[4] =  { 2, 5, 29, 14};
const heim_oid asn1_oid_id_x509_ce_subjectKeyIdentifier = { 4, oid_id_x509_ce_subjectKeyIdentifier_variable_num };

extern const struct asn1_template asn1_SubjectKeyIdentifier[];
extern const struct asn1_template asn1_SubjectKeyIdentifier[];
static unsigned oid_id_x509_ce_basicConstraints_variable_num[4] =  { 2, 5, 29, 19};
const heim_oid asn1_oid_id_x509_ce_basicConstraints = { 4, oid_id_x509_ce_basicConstraints_variable_num };

extern const struct asn1_template asn1_BasicConstraints[];
static unsigned oid_id_x509_ce_nameConstraints_variable_num[4] =  { 2, 5, 29, 30};
const heim_oid asn1_oid_id_x509_ce_nameConstraints = { 4, oid_id_x509_ce_nameConstraints_variable_num };

extern const struct asn1_template asn1_BaseDistance[];
extern const struct asn1_template asn1_BaseDistance[];
extern const struct asn1_template asn1_GeneralSubtree[];
extern const struct asn1_template asn1_GeneralSubtrees[];
extern const struct asn1_template asn1_NameConstraints[];
static unsigned oid_id_x509_ce_privateKeyUsagePeriod_variable_num[4] =  { 2, 5, 29, 16};
const heim_oid asn1_oid_id_x509_ce_privateKeyUsagePeriod = { 4, oid_id_x509_ce_privateKeyUsagePeriod_variable_num };

static unsigned oid_id_x509_ce_certificatePolicies_variable_num[4] =  { 2, 5, 29, 32};
const heim_oid asn1_oid_id_x509_ce_certificatePolicies = { 4, oid_id_x509_ce_certificatePolicies_variable_num };

static unsigned oid_id_x509_ce_certificatePolicies_anyPolicy_variable_num[5] =  { 2, 5, 29, 32, 0};
const heim_oid asn1_oid_id_x509_ce_certificatePolicies_anyPolicy = { 5, oid_id_x509_ce_certificatePolicies_anyPolicy_variable_num };

static unsigned oid_id_x509_ce_policyMappings_variable_num[4] =  { 2, 5, 29, 33};
const heim_oid asn1_oid_id_x509_ce_policyMappings = { 4, oid_id_x509_ce_policyMappings_variable_num };

static unsigned oid_id_x509_ce_subjectAltName_variable_num[4] =  { 2, 5, 29, 17};
const heim_oid asn1_oid_id_x509_ce_subjectAltName = { 4, oid_id_x509_ce_subjectAltName_variable_num };

static unsigned oid_id_x509_ce_issuerAltName_variable_num[4] =  { 2, 5, 29, 18};
const heim_oid asn1_oid_id_x509_ce_issuerAltName = { 4, oid_id_x509_ce_issuerAltName_variable_num };

static unsigned oid_id_x509_ce_subjectDirectoryAttributes_variable_num[4] =  { 2, 5, 29, 9};
const heim_oid asn1_oid_id_x509_ce_subjectDirectoryAttributes = { 4, oid_id_x509_ce_subjectDirectoryAttributes_variable_num };

static unsigned oid_id_x509_ce_policyConstraints_variable_num[4] =  { 2, 5, 29, 36};
const heim_oid asn1_oid_id_x509_ce_policyConstraints = { 4, oid_id_x509_ce_policyConstraints_variable_num };

static unsigned oid_id_x509_ce_extKeyUsage_variable_num[4] =  { 2, 5, 29, 37};
const heim_oid asn1_oid_id_x509_ce_extKeyUsage = { 4, oid_id_x509_ce_extKeyUsage_variable_num };

static unsigned oid_id_x509_ce_anyExtendedKeyUsage_variable_num[5] =  { 2, 5, 29, 37, 0};
const heim_oid asn1_oid_id_x509_ce_anyExtendedKeyUsage = { 5, oid_id_x509_ce_anyExtendedKeyUsage_variable_num };

extern const struct asn1_template asn1_ExtKeyUsage[];
static unsigned oid_id_x509_ce_cRLReasons_variable_num[4] =  { 2, 5, 29, 21};
const heim_oid asn1_oid_id_x509_ce_cRLReasons = { 4, oid_id_x509_ce_cRLReasons_variable_num };

static unsigned oid_id_x509_ce_cRLDistributionPoints_variable_num[4] =  { 2, 5, 29, 31};
const heim_oid asn1_oid_id_x509_ce_cRLDistributionPoints = { 4, oid_id_x509_ce_cRLDistributionPoints_variable_num };

static unsigned oid_id_x509_ce_deltaCRLIndicator_variable_num[4] =  { 2, 5, 29, 27};
const heim_oid asn1_oid_id_x509_ce_deltaCRLIndicator = { 4, oid_id_x509_ce_deltaCRLIndicator_variable_num };

static unsigned oid_id_x509_ce_issuingDistributionPoint_variable_num[4] =  { 2, 5, 29, 28};
const heim_oid asn1_oid_id_x509_ce_issuingDistributionPoint = { 4, oid_id_x509_ce_issuingDistributionPoint_variable_num };

static unsigned oid_id_x509_ce_holdInstructionCode_variable_num[4] =  { 2, 5, 29, 23};
const heim_oid asn1_oid_id_x509_ce_holdInstructionCode = { 4, oid_id_x509_ce_holdInstructionCode_variable_num };

static unsigned oid_id_x509_ce_invalidityDate_variable_num[4] =  { 2, 5, 29, 24};
const heim_oid asn1_oid_id_x509_ce_invalidityDate = { 4, oid_id_x509_ce_invalidityDate_variable_num };

static unsigned oid_id_x509_ce_certificateIssuer_variable_num[4] =  { 2, 5, 29, 29};
const heim_oid asn1_oid_id_x509_ce_certificateIssuer = { 4, oid_id_x509_ce_certificateIssuer_variable_num };

static unsigned oid_id_x509_ce_inhibitAnyPolicy_variable_num[4] =  { 2, 5, 29, 54};
const heim_oid asn1_oid_id_x509_ce_inhibitAnyPolicy = { 4, oid_id_x509_ce_inhibitAnyPolicy_variable_num };

static unsigned oid_id_heim_ce_pkinit_princ_max_life_variable_num[6] =  { 1, 2, 752, 43, 16, 4};
const heim_oid asn1_oid_id_heim_ce_pkinit_princ_max_life = { 6, oid_id_heim_ce_pkinit_princ_max_life_variable_num };

extern const struct asn1_template asn1_DistributionPointReasonFlags[];
extern const struct asn1_template asn1_DistributionPointReasonFlags[];
extern const struct asn1_template asn1_DistributionPointName[];
extern const struct asn1_template asn1_DistributionPoint[];
extern const struct asn1_template asn1_CRLDistributionPoints[];
extern const struct asn1_template asn1_DSASigValue[];
extern const struct asn1_template asn1_DSAPublicKey[];
extern const struct asn1_template asn1_DSAPublicKey[];
extern const struct asn1_template asn1_DSAParams[];
extern const struct asn1_template asn1_ECPoint[];
extern const struct asn1_template asn1_ECPoint[];
extern const struct asn1_template asn1_ECParameters[];
extern const struct asn1_template asn1_ECDSA_Sig_Value[];
extern const struct asn1_template asn1_RSAPublicKey[];
extern const struct asn1_template asn1_RSAPrivateKey[];
extern const struct asn1_template asn1_DigestInfo[];
extern const struct asn1_template asn1_TBSCRLCertList[];
extern const struct asn1_template asn1_CRLCertificateList[];
static unsigned oid_id_x509_ce_cRLNumber_variable_num[4] =  { 2, 5, 29, 20};
const heim_oid asn1_oid_id_x509_ce_cRLNumber = { 4, oid_id_x509_ce_cRLNumber_variable_num };

static unsigned oid_id_x509_ce_freshestCRL_variable_num[4] =  { 2, 5, 29, 46};
const heim_oid asn1_oid_id_x509_ce_freshestCRL = { 4, oid_id_x509_ce_freshestCRL_variable_num };

static unsigned oid_id_x509_ce_cRLReason_variable_num[4] =  { 2, 5, 29, 21};
const heim_oid asn1_oid_id_x509_ce_cRLReason = { 4, oid_id_x509_ce_cRLReason_variable_num };

extern const struct asn1_template asn1_CRLReason[];
extern const struct asn1_template asn1_CRLReason[];
extern const struct asn1_template asn1_PKIXXmppAddr[];
extern const struct asn1_template asn1_PKIXXmppAddr[];
extern const struct asn1_template asn1_SRVName[];
extern const struct asn1_template asn1_SRVName[];
static unsigned oid_id_pkix_variable_num[7] =  { 1, 3, 6, 1, 5, 5, 7};
const heim_oid asn1_oid_id_pkix = { 7, oid_id_pkix_variable_num };

static unsigned oid_id_pkix_on_variable_num[8] =  { 1, 3, 6, 1, 5, 5, 7, 8};
const heim_oid asn1_oid_id_pkix_on = { 8, oid_id_pkix_on_variable_num };

static unsigned oid_id_pkix_on_xmppAddr_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 8, 5};
const heim_oid asn1_oid_id_pkix_on_xmppAddr = { 9, oid_id_pkix_on_xmppAddr_variable_num };

static unsigned oid_id_pkix_on_dnsSRV_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 8, 7};
const heim_oid asn1_oid_id_pkix_on_dnsSRV = { 9, oid_id_pkix_on_dnsSRV_variable_num };

static unsigned oid_id_pkix_on_hardwareModuleName_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 8, 4};
const heim_oid asn1_oid_id_pkix_on_hardwareModuleName = { 9, oid_id_pkix_on_hardwareModuleName_variable_num };

extern const struct asn1_template asn1_HardwareModuleName[];
static unsigned oid_id_pkix_on_pkinit_san_variable_num[7] =  { 1, 3, 6, 1, 5, 2, 2};
const heim_oid asn1_oid_id_pkix_on_pkinit_san = { 7, oid_id_pkix_on_pkinit_san_variable_num };

extern const struct asn1_template asn1_KRB5PrincipalName[];
static unsigned oid_id_pkix_on_permanentIdentifier_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 8, 3};
const heim_oid asn1_oid_id_pkix_on_permanentIdentifier = { 9, oid_id_pkix_on_permanentIdentifier_variable_num };

extern const struct asn1_template asn1_PermanentIdentifier[];
static unsigned oid_id_pkix_kp_variable_num[8] =  { 1, 3, 6, 1, 5, 5, 7, 3};
const heim_oid asn1_oid_id_pkix_kp = { 8, oid_id_pkix_kp_variable_num };

static unsigned oid_id_pkix_kp_serverAuth_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 1};
const heim_oid asn1_oid_id_pkix_kp_serverAuth = { 9, oid_id_pkix_kp_serverAuth_variable_num };

static unsigned oid_id_pkix_kp_clientAuth_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 2};
const heim_oid asn1_oid_id_pkix_kp_clientAuth = { 9, oid_id_pkix_kp_clientAuth_variable_num };

static unsigned oid_id_pkix_kp_codeSigning_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 3};
const heim_oid asn1_oid_id_pkix_kp_codeSigning = { 9, oid_id_pkix_kp_codeSigning_variable_num };

static unsigned oid_id_pkix_kp_emailProtection_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 4};
const heim_oid asn1_oid_id_pkix_kp_emailProtection = { 9, oid_id_pkix_kp_emailProtection_variable_num };

static unsigned oid_id_pkix_kp_ipsecEndSystem_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 5};
const heim_oid asn1_oid_id_pkix_kp_ipsecEndSystem = { 9, oid_id_pkix_kp_ipsecEndSystem_variable_num };

static unsigned oid_id_pkix_kp_ipsecTunnel_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 6};
const heim_oid asn1_oid_id_pkix_kp_ipsecTunnel = { 9, oid_id_pkix_kp_ipsecTunnel_variable_num };

static unsigned oid_id_pkix_kp_ipsecUser_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 7};
const heim_oid asn1_oid_id_pkix_kp_ipsecUser = { 9, oid_id_pkix_kp_ipsecUser_variable_num };

static unsigned oid_id_pkix_kp_timeStamping_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 8};
const heim_oid asn1_oid_id_pkix_kp_timeStamping = { 9, oid_id_pkix_kp_timeStamping_variable_num };

static unsigned oid_id_pkix_kp_OCSPSigning_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 9};
const heim_oid asn1_oid_id_pkix_kp_OCSPSigning = { 9, oid_id_pkix_kp_OCSPSigning_variable_num };

static unsigned oid_id_pkix_kp_DVCS_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 10};
const heim_oid asn1_oid_id_pkix_kp_DVCS = { 9, oid_id_pkix_kp_DVCS_variable_num };

static unsigned oid_id_pkix_kp_ipsecIKE_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 17};
const heim_oid asn1_oid_id_pkix_kp_ipsecIKE = { 9, oid_id_pkix_kp_ipsecIKE_variable_num };

static unsigned oid_id_pkix_kp_capwapAC_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 18};
const heim_oid asn1_oid_id_pkix_kp_capwapAC = { 9, oid_id_pkix_kp_capwapAC_variable_num };

static unsigned oid_id_pkix_kp_capwapWTP_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 19};
const heim_oid asn1_oid_id_pkix_kp_capwapWTP = { 9, oid_id_pkix_kp_capwapWTP_variable_num };

static unsigned oid_id_pkix_kp_sipDomain_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 20};
const heim_oid asn1_oid_id_pkix_kp_sipDomain = { 9, oid_id_pkix_kp_sipDomain_variable_num };

static unsigned oid_id_pkix_kp_secureShellClient_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 21};
const heim_oid asn1_oid_id_pkix_kp_secureShellClient = { 9, oid_id_pkix_kp_secureShellClient_variable_num };

static unsigned oid_id_pkix_kp_secureShellServer_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 22};
const heim_oid asn1_oid_id_pkix_kp_secureShellServer = { 9, oid_id_pkix_kp_secureShellServer_variable_num };

static unsigned oid_id_pkix_kp_sendRouter_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 23};
const heim_oid asn1_oid_id_pkix_kp_sendRouter = { 9, oid_id_pkix_kp_sendRouter_variable_num };

static unsigned oid_id_pkix_kp_sendProxiedRouter_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 24};
const heim_oid asn1_oid_id_pkix_kp_sendProxiedRouter = { 9, oid_id_pkix_kp_sendProxiedRouter_variable_num };

static unsigned oid_id_pkix_kp_sendOwner_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 25};
const heim_oid asn1_oid_id_pkix_kp_sendOwner = { 9, oid_id_pkix_kp_sendOwner_variable_num };

static unsigned oid_id_pkix_kp_sendProxiedOwner_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 26};
const heim_oid asn1_oid_id_pkix_kp_sendProxiedOwner = { 9, oid_id_pkix_kp_sendProxiedOwner_variable_num };

static unsigned oid_id_pkix_kp_cmcCA_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 27};
const heim_oid asn1_oid_id_pkix_kp_cmcCA = { 9, oid_id_pkix_kp_cmcCA_variable_num };

static unsigned oid_id_pkix_kp_cmcRA_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 28};
const heim_oid asn1_oid_id_pkix_kp_cmcRA = { 9, oid_id_pkix_kp_cmcRA_variable_num };

static unsigned oid_id_pkix_kp_cmcArchive_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 29};
const heim_oid asn1_oid_id_pkix_kp_cmcArchive = { 9, oid_id_pkix_kp_cmcArchive_variable_num };

static unsigned oid_id_pkix_kp_bgpsec_router_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 3, 30};
const heim_oid asn1_oid_id_pkix_kp_bgpsec_router = { 9, oid_id_pkix_kp_bgpsec_router_variable_num };

static unsigned oid_id_msft_variable_num[7] =  { 1, 3, 6, 1, 4, 1, 311};
const heim_oid asn1_oid_id_msft = { 7, oid_id_msft_variable_num };

static unsigned oid_id_msft_kp_msCodeInd_variable_num[10] =  { 1, 3, 6, 1, 4, 1, 311, 2, 1, 21};
const heim_oid asn1_oid_id_msft_kp_msCodeInd = { 10, oid_id_msft_kp_msCodeInd_variable_num };

static unsigned oid_id_msft_kp_msCodeCom_variable_num[10] =  { 1, 3, 6, 1, 4, 1, 311, 2, 1, 22};
const heim_oid asn1_oid_id_msft_kp_msCodeCom = { 10, oid_id_msft_kp_msCodeCom_variable_num };

static unsigned oid_id_msft_kp_msCTLSign_variable_num[10] =  { 1, 3, 6, 1, 4, 1, 311, 10, 3, 1};
const heim_oid asn1_oid_id_msft_kp_msCTLSign = { 10, oid_id_msft_kp_msCTLSign_variable_num };

static unsigned oid_id_msft_kp_msSGC_variable_num[10] =  { 1, 3, 6, 1, 4, 1, 311, 10, 3, 3};
const heim_oid asn1_oid_id_msft_kp_msSGC = { 10, oid_id_msft_kp_msSGC_variable_num };

static unsigned oid_id_msft_kp_msEFS_variable_num[10] =  { 1, 3, 6, 1, 4, 1, 311, 10, 3, 4};
const heim_oid asn1_oid_id_msft_kp_msEFS = { 10, oid_id_msft_kp_msEFS_variable_num };

static unsigned oid_id_msft_kp_msSmartcardLogin_variable_num[10] =  { 1, 3, 6, 1, 4, 1, 311, 20, 2, 2};
const heim_oid asn1_oid_id_msft_kp_msSmartcardLogin = { 10, oid_id_msft_kp_msSmartcardLogin_variable_num };

static unsigned oid_id_msft_kp_msUPN_variable_num[10] =  { 1, 3, 6, 1, 4, 1, 311, 20, 2, 3};
const heim_oid asn1_oid_id_msft_kp_msUPN = { 10, oid_id_msft_kp_msUPN_variable_num };

static unsigned oid_id_pkix_pe_variable_num[8] =  { 1, 3, 6, 1, 5, 5, 7, 1};
const heim_oid asn1_oid_id_pkix_pe = { 8, oid_id_pkix_pe_variable_num };

static unsigned oid_id_pkix_pe_authorityInfoAccess_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 1, 1};
const heim_oid asn1_oid_id_pkix_pe_authorityInfoAccess = { 9, oid_id_pkix_pe_authorityInfoAccess_variable_num };

extern const struct asn1_template asn1_AccessDescription[];
extern const struct asn1_template asn1_AuthorityInfoAccessSyntax[];
static unsigned oid_id_pkix_pe_proxyCertInfo_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 1, 14};
const heim_oid asn1_oid_id_pkix_pe_proxyCertInfo = { 9, oid_id_pkix_pe_proxyCertInfo_variable_num };

static unsigned oid_id_pkix_pe_subjectInfoAccess_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 1, 11};
const heim_oid asn1_oid_id_pkix_pe_subjectInfoAccess = { 9, oid_id_pkix_pe_subjectInfoAccess_variable_num };

extern const struct asn1_template asn1_SubjectInfoAccessSyntax[];
static unsigned oid_id_pkix_ppl_variable_num[8] =  { 1, 3, 6, 1, 5, 5, 7, 21};
const heim_oid asn1_oid_id_pkix_ppl = { 8, oid_id_pkix_ppl_variable_num };

static unsigned oid_id_pkix_ppl_anyLanguage_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 21, 0};
const heim_oid asn1_oid_id_pkix_ppl_anyLanguage = { 9, oid_id_pkix_ppl_anyLanguage_variable_num };

static unsigned oid_id_pkix_ppl_inheritAll_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 21, 1};
const heim_oid asn1_oid_id_pkix_ppl_inheritAll = { 9, oid_id_pkix_ppl_inheritAll_variable_num };

static unsigned oid_id_pkix_ppl_independent_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 21, 2};
const heim_oid asn1_oid_id_pkix_ppl_independent = { 9, oid_id_pkix_ppl_independent_variable_num };

extern const struct asn1_template asn1_ProxyPolicy[];
extern const struct asn1_template asn1_ProxyCertInfo[];
static unsigned oid_tcg_variable_num[3] =  { 2, 23, 133};
const heim_oid asn1_oid_tcg = { 3, oid_tcg_variable_num };

static unsigned oid_tcg_attribute_variable_num[4] =  { 2, 23, 133, 2};
const heim_oid asn1_oid_tcg_attribute = { 4, oid_tcg_attribute_variable_num };

static unsigned oid_tcg_kp_variable_num[4] =  { 2, 23, 133, 8};
const heim_oid asn1_oid_tcg_kp = { 4, oid_tcg_kp_variable_num };

static unsigned oid_tcg_at_tpmManufacturer_variable_num[5] =  { 2, 23, 133, 2, 1};
const heim_oid asn1_oid_tcg_at_tpmManufacturer = { 5, oid_tcg_at_tpmManufacturer_variable_num };

static unsigned oid_tcg_at_tpmModel_variable_num[5] =  { 2, 23, 133, 2, 2};
const heim_oid asn1_oid_tcg_at_tpmModel = { 5, oid_tcg_at_tpmModel_variable_num };

static unsigned oid_tcg_at_tpmVersion_variable_num[5] =  { 2, 23, 133, 2, 3};
const heim_oid asn1_oid_tcg_at_tpmVersion = { 5, oid_tcg_at_tpmVersion_variable_num };

static unsigned oid_tcg_at_tpmSpecification_variable_num[5] =  { 2, 23, 133, 2, 16};
const heim_oid asn1_oid_tcg_at_tpmSpecification = { 5, oid_tcg_at_tpmSpecification_variable_num };

static unsigned oid_tcg_at_tpmSecurityAssertions_variable_num[5] =  { 2, 23, 133, 2, 18};
const heim_oid asn1_oid_tcg_at_tpmSecurityAssertions = { 5, oid_tcg_at_tpmSecurityAssertions_variable_num };

static unsigned oid_tcg_kp_EKCertificate_variable_num[5] =  { 2, 23, 133, 8, 1};
const heim_oid asn1_oid_tcg_kp_EKCertificate = { 5, oid_tcg_kp_EKCertificate_variable_num };

static unsigned oid_tcg_tpm20_variable_num[5] =  { 2, 23, 133, 1, 2};
const heim_oid asn1_oid_tcg_tpm20 = { 5, oid_tcg_tpm20_variable_num };

static unsigned oid_tcg_on_ekPermIdSha256_variable_num[5] =  { 2, 23, 133, 12, 1};
const heim_oid asn1_oid_tcg_on_ekPermIdSha256 = { 5, oid_tcg_on_ekPermIdSha256_variable_num };

static unsigned oid_tcg_cap_verifiedTPMResidency_variable_num[6] =  { 2, 23, 133, 11, 1, 1};
const heim_oid asn1_oid_tcg_cap_verifiedTPMResidency = { 6, oid_tcg_cap_verifiedTPMResidency_variable_num };

static unsigned oid_tcg_cap_verifiedTPMFixed_variable_num[6] =  { 2, 23, 133, 11, 1, 2};
const heim_oid asn1_oid_tcg_cap_verifiedTPMFixed = { 6, oid_tcg_cap_verifiedTPMFixed_variable_num };

static unsigned oid_tcg_cap_verifiedTPMRestricted_variable_num[6] =  { 2, 23, 133, 11, 1, 3};
const heim_oid asn1_oid_tcg_cap_verifiedTPMRestricted = { 6, oid_tcg_cap_verifiedTPMRestricted_variable_num };

extern const struct asn1_template asn1_EKGenerationType[];
extern const struct asn1_template asn1_EKGenerationType[];
extern const struct asn1_template asn1_EKGenerationLocation[];
extern const struct asn1_template asn1_EKGenerationLocation[];
extern const struct asn1_template asn1_EKCertificateGenerationLocation[];
extern const struct asn1_template asn1_EKCertificateGenerationLocation[];
extern const struct asn1_template asn1_EvaluationAssuranceLevel[];
extern const struct asn1_template asn1_EvaluationAssuranceLevel[];
extern const struct asn1_template asn1_SecurityLevel[];
extern const struct asn1_template asn1_SecurityLevel[];
extern const struct asn1_template asn1_StrengthOfFunction[];
extern const struct asn1_template asn1_StrengthOfFunction[];
extern const struct asn1_template asn1_URIReference[];
extern const struct asn1_template asn1_EvaluationStatus[];
extern const struct asn1_template asn1_EvaluationStatus[];
extern const struct asn1_template asn1_TPMSpecification[];
extern const struct asn1_template asn1_CommonCriteriaMeasures[];
extern const struct asn1_template asn1_FIPSLevel[];
extern const struct asn1_template asn1_TPMVersion[];
extern const struct asn1_template asn1_TPMVersion[];
extern const struct asn1_template asn1_TPMSecurityAssertions[];
static unsigned oid_id_pkix_on_pkinit_ms_san_variable_num[10] =  { 1, 3, 6, 1, 4, 1, 311, 20, 2, 3};
const heim_oid asn1_oid_id_pkix_on_pkinit_ms_san = { 10, oid_id_pkix_on_pkinit_ms_san_variable_num };

extern const struct asn1_template asn1_AliasUTF8String[];
extern const struct asn1_template asn1_AliasUTF8String[];
extern const struct asn1_template asn1_AliasIA5String[];
extern const struct asn1_template asn1_AliasIA5String[];
extern const struct asn1_template asn1_AliasPrintableString[];
extern const struct asn1_template asn1_AliasPrintableString[];
extern const struct asn1_template asn1_KnownOtherNameTypes[];
extern const struct asn1_template asn1_OtherName[];
extern const struct asn1_template asn1_X520name[];
extern const struct asn1_template asn1_X520name[];
extern const struct asn1_template asn1_X520CommonName[];
extern const struct asn1_template asn1_X520CommonName[];
extern const struct asn1_template asn1_X520LocalityName[];
extern const struct asn1_template asn1_X520LocalityName[];
extern const struct asn1_template asn1_X520OrganizationName[];
extern const struct asn1_template asn1_X520OrganizationName[];
extern const struct asn1_template asn1_X520StateOrProvinceName[];
extern const struct asn1_template asn1_X520StateOrProvinceName[];
extern const struct asn1_template asn1_X520OrganizationalUnitName[];
extern const struct asn1_template asn1_X520OrganizationalUnitName[];
extern const struct asn1_template asn1_SupportedAttributes[];
extern const struct asn1_template asn1_SingleAttribute[];
extern const struct asn1_template asn1_AttributeSet[];
extern const struct asn1_template asn1_SubjectDirectoryAttributes[];
extern const struct asn1_template asn1_SkipCerts[];
extern const struct asn1_template asn1_SkipCerts[];
extern const struct asn1_template asn1_PolicyConstraints[];
extern const struct asn1_template asn1_HeimPkinitPrincMaxLifeSecs[];
extern const struct asn1_template asn1_HeimPkinitPrincMaxLifeSecs[];
extern const struct asn1_template asn1_CertExtensions[];
extern const struct asn1_template asn1_Extension[];
static unsigned oid_id_uspkicommon_card_id_variable_num[8] =  { 2, 16, 840, 1, 101, 3, 6, 6};
const heim_oid asn1_oid_id_uspkicommon_card_id = { 8, oid_id_uspkicommon_card_id_variable_num };

static unsigned oid_id_uspkicommon_piv_interim_variable_num[9] =  { 2, 16, 840, 1, 101, 3, 6, 9, 1};
const heim_oid asn1_oid_id_uspkicommon_piv_interim = { 9, oid_id_uspkicommon_piv_interim_variable_num };

static unsigned oid_id_netscape_variable_num[5] =  { 2, 16, 840, 1, 113730};
const heim_oid asn1_oid_id_netscape = { 5, oid_id_netscape_variable_num };

static unsigned oid_id_netscape_cert_comment_variable_num[7] =  { 2, 16, 840, 1, 113730, 1, 13};
const heim_oid asn1_oid_id_netscape_cert_comment = { 7, oid_id_netscape_cert_comment_variable_num };

static unsigned oid_id_ms_cert_enroll_domaincontroller_variable_num[9] =  { 1, 3, 6, 1, 4, 1, 311, 20, 2};
const heim_oid asn1_oid_id_ms_cert_enroll_domaincontroller = { 9, oid_id_ms_cert_enroll_domaincontroller_variable_num };

static unsigned oid_id_pkix_qt_variable_num[8] =  { 1, 3, 6, 1, 5, 5, 7, 2};
const heim_oid asn1_oid_id_pkix_qt = { 8, oid_id_pkix_qt_variable_num };

static unsigned oid_id_pkix_qt_cps_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 2, 1};
const heim_oid asn1_oid_id_pkix_qt_cps = { 9, oid_id_pkix_qt_cps_variable_num };

static unsigned oid_id_pkix_qt_unotice_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 2, 2};
const heim_oid asn1_oid_id_pkix_qt_unotice = { 9, oid_id_pkix_qt_unotice_variable_num };

static unsigned oid_id_pkix_ad_variable_num[8] =  { 1, 3, 6, 1, 5, 5, 7, 48};
const heim_oid asn1_oid_id_pkix_ad = { 8, oid_id_pkix_ad_variable_num };

static unsigned oid_id_pkix_ad_ocsp_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 48, 1};
const heim_oid asn1_oid_id_pkix_ad_ocsp = { 9, oid_id_pkix_ad_ocsp_variable_num };

static unsigned oid_id_pkix_ad_caIssuers_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 48, 2};
const heim_oid asn1_oid_id_pkix_ad_caIssuers = { 9, oid_id_pkix_ad_caIssuers_variable_num };

static unsigned oid_id_pkix_ad_timeStamping_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 48, 3};
const heim_oid asn1_oid_id_pkix_ad_timeStamping = { 9, oid_id_pkix_ad_timeStamping_variable_num };

static unsigned oid_id_pkix_ad_caRepository_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 48, 5};
const heim_oid asn1_oid_id_pkix_ad_caRepository = { 9, oid_id_pkix_ad_caRepository_variable_num };

extern const struct asn1_template asn1_KnownPolicyQualifiers[];
extern const struct asn1_template asn1_PolicyQualifierInfo[];
/* template_members: Version exp exp */
const struct asn1_template asn1_Version_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)3) },
/* 1 */ { A1_OP_NAME, 0, "rfc3280_version_1" },
/* 2 */ { A1_OP_NAME, 1, "rfc3280_version_2" },
/* 3 */ { A1_OP_NAME, 2, "rfc3280_version_3" }
};
/* generate_template_type: Version_tag__0 */
const struct asn1_template asn1_Version_tag__0[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_Version_enum_names }
};
/* generate_template_type: Version */
const struct asn1_template asn1_Version[] = {
/* 0 */ { 0, sizeof(Version), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_Version_tag__0 }
};

int ASN1CALL
decode_Version(const unsigned char *p, size_t len, Version *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Version, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Version(unsigned char *p, size_t len, const Version *data, size_t *size)
{
    return _asn1_encode(asn1_Version, p, len, data, size);
}


size_t ASN1CALL
length_Version(const Version *data)
{
    return _asn1_length(asn1_Version, data);
}


void ASN1CALL
free_Version(Version *data)
{
    _asn1_free_top(asn1_Version, data);
}


int ASN1CALL
copy_Version(const Version *from, Version *to)
{
    return _asn1_copy_top(asn1_Version, from, to);
}


char * ASN1CALL
print_Version(const Version *data, int flags)
{
    return _asn1_print_top(asn1_Version, flags, data);
}

/* template_members: AttributeType exp exp */
/* generate_template_type: AttributeType_tag__1 */
const struct asn1_template asn1_AttributeType_tag__1[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* generate_template_type: AttributeType */
const struct asn1_template asn1_AttributeType[] = {
/* 0 */ { 0, sizeof(AttributeType), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_AttributeType_tag__1 }
};

int ASN1CALL
decode_AttributeType(const unsigned char *p, size_t len, AttributeType *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AttributeType, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AttributeType(unsigned char *p, size_t len, const AttributeType *data, size_t *size)
{
    return _asn1_encode(asn1_AttributeType, p, len, data, size);
}


size_t ASN1CALL
length_AttributeType(const AttributeType *data)
{
    return _asn1_length(asn1_AttributeType, data);
}


void ASN1CALL
free_AttributeType(AttributeType *data)
{
    _asn1_free_top(asn1_AttributeType, data);
}


int ASN1CALL
copy_AttributeType(const AttributeType *from, AttributeType *to)
{
    return _asn1_copy_top(asn1_AttributeType, from, to);
}


char * ASN1CALL
print_AttributeType(const AttributeType *data, int flags)
{
    return _asn1_print_top(asn1_AttributeType, flags, data);
}

/* template_members: AlgorithmIdentifier exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AlgorithmIdentifier exp exp */
/* generate_template_type: AlgorithmIdentifier_tag_algorithm_3 */
/* generate_template_type: AlgorithmIdentifier_tag__2 */
const struct asn1_template asn1_AlgorithmIdentifier_tag__2[] = {
/* 0 */ { 0, sizeof(struct AlgorithmIdentifier), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct AlgorithmIdentifier, algorithm), asn1_AttributeType_tag__1 },
/* 2 */ { A1_OP_TYPE_EXTERN |A1_FLAG_OPTIONAL, offsetof(struct AlgorithmIdentifier, parameters), &asn1_extern_HEIM_ANY},
/* 3 */ { A1_OP_NAME, 0, "AlgorithmIdentifier" },
/* 4 */ { A1_OP_NAME, 0, "algorithm" },
/* 5 */ { A1_OP_NAME, 0, "parameters" }
};
/* generate_template_type: AlgorithmIdentifier */
const struct asn1_template asn1_AlgorithmIdentifier[] = {
/* 0 */ { 0, sizeof(AlgorithmIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AlgorithmIdentifier_tag__2 }
};

int ASN1CALL
decode_AlgorithmIdentifier(const unsigned char *p, size_t len, AlgorithmIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AlgorithmIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AlgorithmIdentifier(unsigned char *p, size_t len, const AlgorithmIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_AlgorithmIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_AlgorithmIdentifier(const AlgorithmIdentifier *data)
{
    return _asn1_length(asn1_AlgorithmIdentifier, data);
}


void ASN1CALL
free_AlgorithmIdentifier(AlgorithmIdentifier *data)
{
    _asn1_free_top(asn1_AlgorithmIdentifier, data);
}


int ASN1CALL
copy_AlgorithmIdentifier(const AlgorithmIdentifier *from, AlgorithmIdentifier *to)
{
    return _asn1_copy_top(asn1_AlgorithmIdentifier, from, to);
}


char * ASN1CALL
print_AlgorithmIdentifier(const AlgorithmIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_AlgorithmIdentifier, flags, data);
}

/* generate_template_type: AttributeValue */
const struct asn1_template asn1_AttributeValue[] = {
/* 0 */ { 0, sizeof(AttributeValue), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_HEIM_ANY}
};

int ASN1CALL
decode_AttributeValue(const unsigned char *p, size_t len, AttributeValue *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AttributeValue, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AttributeValue(unsigned char *p, size_t len, const AttributeValue *data, size_t *size)
{
    return _asn1_encode(asn1_AttributeValue, p, len, data, size);
}


size_t ASN1CALL
length_AttributeValue(const AttributeValue *data)
{
    return _asn1_length(asn1_AttributeValue, data);
}


void ASN1CALL
free_AttributeValue(AttributeValue *data)
{
    _asn1_free_top(asn1_AttributeValue, data);
}


int ASN1CALL
copy_AttributeValue(const AttributeValue *from, AttributeValue *to)
{
    return _asn1_copy_top(asn1_AttributeValue, from, to);
}


char * ASN1CALL
print_AttributeValue(const AttributeValue *data, int flags)
{
    return _asn1_print_top(asn1_AttributeValue, flags, data);
}

/* template_members: heim_ia5_string exp exp */
/* generate_template_type: heim_ia5_string_tag__4 */
const struct asn1_template asn1_heim_ia5_string_tag__4[] = {
/* 0 */ { 0, sizeof(heim_ia5_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IA5_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_ia5String */
const struct asn1_template asn1_DirectoryString_choice_ia5String[] = {
/* 0 */ { 0, sizeof(heim_ia5_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_IA5String), 0, asn1_heim_ia5_string_tag__4 }
};
/* template_members: heim_general_string exp exp */
/* generate_template_type: heim_general_string_tag__5 */
const struct asn1_template asn1_heim_general_string_tag__5[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_TELETEX_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_teletexString */
const struct asn1_template asn1_DirectoryString_choice_teletexString[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_TeletexString), 0, asn1_heim_general_string_tag__5 }
};
/* template_members: heim_printable_string exp exp */
/* generate_template_type: heim_printable_string_tag__6 */
const struct asn1_template asn1_heim_printable_string_tag__6[] = {
/* 0 */ { 0, sizeof(heim_printable_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_PRINTABLE_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_printableString */
const struct asn1_template asn1_DirectoryString_choice_printableString[] = {
/* 0 */ { 0, sizeof(heim_printable_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_PrintableString), 0, asn1_heim_printable_string_tag__6 }
};
/* template_members: heim_universal_string exp exp */
/* generate_template_type: heim_universal_string_tag__7 */
const struct asn1_template asn1_heim_universal_string_tag__7[] = {
/* 0 */ { 0, sizeof(heim_universal_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UNIVERSAL_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_universalString */
const struct asn1_template asn1_DirectoryString_choice_universalString[] = {
/* 0 */ { 0, sizeof(heim_universal_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UniversalString), 0, asn1_heim_universal_string_tag__7 }
};
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag__8 */
const struct asn1_template asn1_heim_utf8_string_tag__8[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UTF8_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_utf8String */
const struct asn1_template asn1_DirectoryString_choice_utf8String[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_heim_utf8_string_tag__8 }
};
/* template_members: heim_bmp_string exp exp */
/* generate_template_type: heim_bmp_string_tag__9 */
const struct asn1_template asn1_heim_bmp_string_tag__9[] = {
/* 0 */ { 0, sizeof(heim_bmp_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_BMP_STRING), 0, NULL }
};
/* generate_template_type: DirectoryString_choice_bmpString */
const struct asn1_template asn1_DirectoryString_choice_bmpString[] = {
/* 0 */ { 0, sizeof(heim_bmp_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BMPString), 0, asn1_heim_bmp_string_tag__9 }
};
static const struct asn1_template asn1_choice_DirectoryString_0[] = {
/* 0 */ { 0, offsetof(DirectoryString, element), ((void *)(uintptr_t)12) },
/* 1 */ { choice_DirectoryString_ia5String, offsetof(DirectoryString, u.ia5String), asn1_DirectoryString_choice_ia5String },
/* 2 */ { choice_DirectoryString_teletexString, offsetof(DirectoryString, u.teletexString), asn1_DirectoryString_choice_teletexString },
/* 3 */ { choice_DirectoryString_printableString, offsetof(DirectoryString, u.printableString), asn1_DirectoryString_choice_printableString },
/* 4 */ { choice_DirectoryString_universalString, offsetof(DirectoryString, u.universalString), asn1_DirectoryString_choice_universalString },
/* 5 */ { choice_DirectoryString_utf8String, offsetof(DirectoryString, u.utf8String), asn1_DirectoryString_choice_utf8String },
/* 6 */ { choice_DirectoryString_bmpString, offsetof(DirectoryString, u.bmpString), asn1_DirectoryString_choice_bmpString },
/* 7 */ { 0, 0, "ia5String" },
/* 8 */ { 0, 0, "teletexString" },
/* 9 */ { 0, 0, "printableString" },
/* 10 */ { 0, 0, "universalString" },
/* 11 */ { 0, 0, "utf8String" },
/* 12 */ { 0, 0, "bmpString" }
};
/* generate_template_type: DirectoryString */
const struct asn1_template asn1_DirectoryString[] = {
/* 0 */ { 0, sizeof(DirectoryString), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_DirectoryString_0 }
};

int ASN1CALL
decode_DirectoryString(const unsigned char *p, size_t len, DirectoryString *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DirectoryString, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DirectoryString(unsigned char *p, size_t len, const DirectoryString *data, size_t *size)
{
    return _asn1_encode(asn1_DirectoryString, p, len, data, size);
}


size_t ASN1CALL
length_DirectoryString(const DirectoryString *data)
{
    return _asn1_length(asn1_DirectoryString, data);
}


void ASN1CALL
free_DirectoryString(DirectoryString *data)
{
    _asn1_free_top(asn1_DirectoryString, data);
}


int ASN1CALL
copy_DirectoryString(const DirectoryString *from, DirectoryString *to)
{
    return _asn1_copy_top(asn1_DirectoryString, from, to);
}


char * ASN1CALL
print_DirectoryString(const DirectoryString *data, int flags)
{
    return _asn1_print_top(asn1_DirectoryString, flags, data);
}

/* template_members: AttributeValues exp exp */
/* generate_template_type: AttributeValue_seofTstruct_0 */
const struct asn1_template asn1_AttributeValue_seofTstruct_0[] = {
/* 0 */ { 0, sizeof(AttributeValue), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AttributeValue }
};
/* generate_template_type: AttributeValues_tag__10 */
const struct asn1_template asn1_AttributeValues_tag__10[] = {
/* 0 */ { 0, sizeof(AttributeValue), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_AttributeValue_seofTstruct_0 }
};
/* generate_template_type: AttributeValues */
const struct asn1_template asn1_AttributeValues[] = {
/* 0 */ { 0, sizeof(AttributeValues), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_AttributeValues_tag__10 }
};

int ASN1CALL
decode_AttributeValues(const unsigned char *p, size_t len, AttributeValues *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AttributeValues, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AttributeValues(unsigned char *p, size_t len, const AttributeValues *data, size_t *size)
{
    return _asn1_encode(asn1_AttributeValues, p, len, data, size);
}


size_t ASN1CALL
length_AttributeValues(const AttributeValues *data)
{
    return _asn1_length(asn1_AttributeValues, data);
}


void ASN1CALL
free_AttributeValues(AttributeValues *data)
{
    _asn1_free_top(asn1_AttributeValues, data);
}


int ASN1CALL
copy_AttributeValues(const AttributeValues *from, AttributeValues *to)
{
    return _asn1_copy_top(asn1_AttributeValues, from, to);
}


char * ASN1CALL
print_AttributeValues(const AttributeValues *data, int flags)
{
    return _asn1_print_top(asn1_AttributeValues, flags, data);
}

int ASN1CALL
add_AttributeValues(AttributeValues *data, const AttributeValue *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_AttributeValue(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_AttributeValues(AttributeValues *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_AttributeValue(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: Attribute exp exp */
/* tsequence: members isstruct: 1 */
/* generate_template_type: Attribute_tag__11 */
const struct asn1_template asn1_Attribute_tag__11[] = {
/* 0 */ { 0, sizeof(struct Attribute), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct Attribute, type), asn1_AttributeType },
/* 2 */ { A1_OP_TYPE , offsetof(struct Attribute, value), asn1_AttributeValues },
/* 3 */ { A1_OP_NAME, 0, "Attribute" },
/* 4 */ { A1_OP_NAME, 0, "type" },
/* 5 */ { A1_OP_NAME, 0, "value" }
};
/* generate_template_type: Attribute */
const struct asn1_template asn1_Attribute[] = {
/* 0 */ { 0, sizeof(Attribute), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Attribute_tag__11 }
};

int ASN1CALL
decode_Attribute(const unsigned char *p, size_t len, Attribute *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Attribute, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Attribute(unsigned char *p, size_t len, const Attribute *data, size_t *size)
{
    return _asn1_encode(asn1_Attribute, p, len, data, size);
}


size_t ASN1CALL
length_Attribute(const Attribute *data)
{
    return _asn1_length(asn1_Attribute, data);
}


void ASN1CALL
free_Attribute(Attribute *data)
{
    _asn1_free_top(asn1_Attribute, data);
}


int ASN1CALL
copy_Attribute(const Attribute *from, Attribute *to)
{
    return _asn1_copy_top(asn1_Attribute, from, to);
}


char * ASN1CALL
print_Attribute(const Attribute *data, int flags)
{
    return _asn1_print_top(asn1_Attribute, flags, data);
}

/* template_members: AttributeTypeAndValue exp exp */
/* tsequence: members isstruct: 1 */
/* generate_template_type: AttributeTypeAndValue_tag__12 */
const struct asn1_template asn1_AttributeTypeAndValue_tag__12[] = {
/* 0 */ { 0, sizeof(struct AttributeTypeAndValue), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct AttributeTypeAndValue, type), asn1_AttributeType },
/* 2 */ { A1_OP_TYPE , offsetof(struct AttributeTypeAndValue, value), asn1_DirectoryString },
/* 3 */ { A1_OP_NAME, 0, "AttributeTypeAndValue" },
/* 4 */ { A1_OP_NAME, 0, "type" },
/* 5 */ { A1_OP_NAME, 0, "value" }
};
/* generate_template_type: AttributeTypeAndValue */
const struct asn1_template asn1_AttributeTypeAndValue[] = {
/* 0 */ { 0, sizeof(AttributeTypeAndValue), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AttributeTypeAndValue_tag__12 }
};

int ASN1CALL
decode_AttributeTypeAndValue(const unsigned char *p, size_t len, AttributeTypeAndValue *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AttributeTypeAndValue, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AttributeTypeAndValue(unsigned char *p, size_t len, const AttributeTypeAndValue *data, size_t *size)
{
    return _asn1_encode(asn1_AttributeTypeAndValue, p, len, data, size);
}


size_t ASN1CALL
length_AttributeTypeAndValue(const AttributeTypeAndValue *data)
{
    return _asn1_length(asn1_AttributeTypeAndValue, data);
}


void ASN1CALL
free_AttributeTypeAndValue(AttributeTypeAndValue *data)
{
    _asn1_free_top(asn1_AttributeTypeAndValue, data);
}


int ASN1CALL
copy_AttributeTypeAndValue(const AttributeTypeAndValue *from, AttributeTypeAndValue *to)
{
    return _asn1_copy_top(asn1_AttributeTypeAndValue, from, to);
}


char * ASN1CALL
print_AttributeTypeAndValue(const AttributeTypeAndValue *data, int flags)
{
    return _asn1_print_top(asn1_AttributeTypeAndValue, flags, data);
}

/* template_members: RelativeDistinguishedName exp exp */
/* generate_template_type: AttributeTypeAndValue_seofTstruct_1 */
const struct asn1_template asn1_AttributeTypeAndValue_seofTstruct_1[] = {
/* 0 */ { 0, sizeof(AttributeTypeAndValue), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AttributeTypeAndValue }
};
/* generate_template_type: RelativeDistinguishedName_tag__13 */
const struct asn1_template asn1_RelativeDistinguishedName_tag__13[] = {
/* 0 */ { 0, sizeof(AttributeTypeAndValue), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_AttributeTypeAndValue_seofTstruct_1 }
};
/* generate_template_type: RelativeDistinguishedName */
const struct asn1_template asn1_RelativeDistinguishedName[] = {
/* 0 */ { 0, sizeof(RelativeDistinguishedName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_RelativeDistinguishedName_tag__13 }
};

int ASN1CALL
decode_RelativeDistinguishedName(const unsigned char *p, size_t len, RelativeDistinguishedName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_RelativeDistinguishedName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_RelativeDistinguishedName(unsigned char *p, size_t len, const RelativeDistinguishedName *data, size_t *size)
{
    return _asn1_encode(asn1_RelativeDistinguishedName, p, len, data, size);
}


size_t ASN1CALL
length_RelativeDistinguishedName(const RelativeDistinguishedName *data)
{
    return _asn1_length(asn1_RelativeDistinguishedName, data);
}


void ASN1CALL
free_RelativeDistinguishedName(RelativeDistinguishedName *data)
{
    _asn1_free_top(asn1_RelativeDistinguishedName, data);
}


int ASN1CALL
copy_RelativeDistinguishedName(const RelativeDistinguishedName *from, RelativeDistinguishedName *to)
{
    return _asn1_copy_top(asn1_RelativeDistinguishedName, from, to);
}


char * ASN1CALL
print_RelativeDistinguishedName(const RelativeDistinguishedName *data, int flags)
{
    return _asn1_print_top(asn1_RelativeDistinguishedName, flags, data);
}

/* template_members: RDNSequence exp exp */
/* generate_template_type: RelativeDistinguishedName_seofTstruct_2 */
const struct asn1_template asn1_RelativeDistinguishedName_seofTstruct_2[] = {
/* 0 */ { 0, sizeof(RelativeDistinguishedName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_RelativeDistinguishedName }
};
/* generate_template_type: RDNSequence_tag__14 */
const struct asn1_template asn1_RDNSequence_tag__14[] = {
/* 0 */ { 0, sizeof(RelativeDistinguishedName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_RelativeDistinguishedName_seofTstruct_2 }
};
/* generate_template_type: RDNSequence */
const struct asn1_template asn1_RDNSequence[] = {
/* 0 */ { 0, sizeof(RDNSequence), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_RDNSequence_tag__14 }
};

int ASN1CALL
decode_RDNSequence(const unsigned char *p, size_t len, RDNSequence *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_RDNSequence, 0|0, p, len, data, size);
}


int ASN1CALL
encode_RDNSequence(unsigned char *p, size_t len, const RDNSequence *data, size_t *size)
{
    return _asn1_encode(asn1_RDNSequence, p, len, data, size);
}


size_t ASN1CALL
length_RDNSequence(const RDNSequence *data)
{
    return _asn1_length(asn1_RDNSequence, data);
}


void ASN1CALL
free_RDNSequence(RDNSequence *data)
{
    _asn1_free_top(asn1_RDNSequence, data);
}


int ASN1CALL
copy_RDNSequence(const RDNSequence *from, RDNSequence *to)
{
    return _asn1_copy_top(asn1_RDNSequence, from, to);
}


char * ASN1CALL
print_RDNSequence(const RDNSequence *data, int flags)
{
    return _asn1_print_top(asn1_RDNSequence, flags, data);
}

int ASN1CALL
add_RDNSequence(RDNSequence *data, const RelativeDistinguishedName *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_RelativeDistinguishedName(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_RDNSequence(RDNSequence *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_RelativeDistinguishedName(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* generate_template_type: Name_choice_rdnSequence */
const struct asn1_template asn1_Name_choice_rdnSequence[] = {
/* 0 */ { 0, sizeof(RDNSequence), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_RDNSequence }
};
static const struct asn1_template asn1_choice_Name_1[] = {
/* 0 */ { 0, offsetof(Name, element), ((void *)(uintptr_t)2) },
/* 1 */ { choice_Name_rdnSequence, offsetof(Name, u.rdnSequence), asn1_Name_choice_rdnSequence },
/* 2 */ { 0, 0, "rdnSequence" }
};
/* generate_template_type: Name */
const struct asn1_template asn1_Name[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(Name), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_Name_1 }
};

int ASN1CALL
decode_Name(const unsigned char *p, size_t len, Name *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Name, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Name(unsigned char *p, size_t len, const Name *data, size_t *size)
{
    return _asn1_encode(asn1_Name, p, len, data, size);
}


size_t ASN1CALL
length_Name(const Name *data)
{
    return _asn1_length(asn1_Name, data);
}


void ASN1CALL
free_Name(Name *data)
{
    _asn1_free_top(asn1_Name, data);
}


int ASN1CALL
copy_Name(const Name *from, Name *to)
{
    return _asn1_copy_top(asn1_Name, from, to);
}


char * ASN1CALL
print_Name(const Name *data, int flags)
{
    return _asn1_print_top(asn1_Name, flags, data);
}

/* template_members: CertificateSerialNumber exp exp */
/* generate_template_type: CertificateSerialNumber_tag__15 */
const struct asn1_template asn1_CertificateSerialNumber_tag__15[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_INTEGER), 0, NULL }
};
/* generate_template_type: CertificateSerialNumber */
const struct asn1_template asn1_CertificateSerialNumber[] = {
/* 0 */ { 0, sizeof(CertificateSerialNumber), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_CertificateSerialNumber_tag__15 }
};

int ASN1CALL
decode_CertificateSerialNumber(const unsigned char *p, size_t len, CertificateSerialNumber *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CertificateSerialNumber, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CertificateSerialNumber(unsigned char *p, size_t len, const CertificateSerialNumber *data, size_t *size)
{
    return _asn1_encode(asn1_CertificateSerialNumber, p, len, data, size);
}


size_t ASN1CALL
length_CertificateSerialNumber(const CertificateSerialNumber *data)
{
    return _asn1_length(asn1_CertificateSerialNumber, data);
}


void ASN1CALL
free_CertificateSerialNumber(CertificateSerialNumber *data)
{
    _asn1_free_top(asn1_CertificateSerialNumber, data);
}


int ASN1CALL
copy_CertificateSerialNumber(const CertificateSerialNumber *from, CertificateSerialNumber *to)
{
    return _asn1_copy_top(asn1_CertificateSerialNumber, from, to);
}


char * ASN1CALL
print_CertificateSerialNumber(const CertificateSerialNumber *data, int flags)
{
    return _asn1_print_top(asn1_CertificateSerialNumber, flags, data);
}

/* template_members: time_t exp exp */
/* generate_template_type: time_t_tag__16 */
const struct asn1_template asn1_time_t_tag__16[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UTC_TIME), 0, NULL }
};
/* generate_template_type: Time_choice_utcTime */
const struct asn1_template asn1_Time_choice_utcTime[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTCTime), 0, asn1_time_t_tag__16 }
};
/* template_members: time_t exp exp */
/* generate_template_type: time_t_tag__17 */
const struct asn1_template asn1_time_t_tag__17[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_GENERALIZED_TIME), 0, NULL }
};
/* generate_template_type: Time_choice_generalTime */
const struct asn1_template asn1_Time_choice_generalTime[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), 0, asn1_time_t_tag__17 }
};
static const struct asn1_template asn1_choice_Time_2[] = {
/* 0 */ { 0, offsetof(Time, element), ((void *)(uintptr_t)4) },
/* 1 */ { choice_Time_utcTime, offsetof(Time, u.utcTime), asn1_Time_choice_utcTime },
/* 2 */ { choice_Time_generalTime, offsetof(Time, u.generalTime), asn1_Time_choice_generalTime },
/* 3 */ { 0, 0, "utcTime" },
/* 4 */ { 0, 0, "generalTime" }
};
/* generate_template_type: Time */
const struct asn1_template asn1_Time[] = {
/* 0 */ { 0, sizeof(Time), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_Time_2 }
};

int ASN1CALL
decode_Time(const unsigned char *p, size_t len, Time *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Time, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Time(unsigned char *p, size_t len, const Time *data, size_t *size)
{
    return _asn1_encode(asn1_Time, p, len, data, size);
}


size_t ASN1CALL
length_Time(const Time *data)
{
    return _asn1_length(asn1_Time, data);
}


void ASN1CALL
free_Time(Time *data)
{
    _asn1_free_top(asn1_Time, data);
}


int ASN1CALL
copy_Time(const Time *from, Time *to)
{
    return _asn1_copy_top(asn1_Time, from, to);
}


char * ASN1CALL
print_Time(const Time *data, int flags)
{
    return _asn1_print_top(asn1_Time, flags, data);
}

/* template_members: Validity exp exp */
/* tsequence: members isstruct: 1 */
/* generate_template_type: Validity_tag__18 */
const struct asn1_template asn1_Validity_tag__18[] = {
/* 0 */ { 0, sizeof(struct Validity), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct Validity, notBefore), asn1_Time },
/* 2 */ { A1_OP_TYPE , offsetof(struct Validity, notAfter), asn1_Time },
/* 3 */ { A1_OP_NAME, 0, "Validity" },
/* 4 */ { A1_OP_NAME, 0, "notBefore" },
/* 5 */ { A1_OP_NAME, 0, "notAfter" }
};
/* generate_template_type: Validity */
const struct asn1_template asn1_Validity[] = {
/* 0 */ { 0, sizeof(Validity), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Validity_tag__18 }
};

int ASN1CALL
decode_Validity(const unsigned char *p, size_t len, Validity *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Validity, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Validity(unsigned char *p, size_t len, const Validity *data, size_t *size)
{
    return _asn1_encode(asn1_Validity, p, len, data, size);
}


size_t ASN1CALL
length_Validity(const Validity *data)
{
    return _asn1_length(asn1_Validity, data);
}


void ASN1CALL
free_Validity(Validity *data)
{
    _asn1_free_top(asn1_Validity, data);
}


int ASN1CALL
copy_Validity(const Validity *from, Validity *to)
{
    return _asn1_copy_top(asn1_Validity, from, to);
}


char * ASN1CALL
print_Validity(const Validity *data, int flags)
{
    return _asn1_print_top(asn1_Validity, flags, data);
}

/* template_members: UniqueIdentifier exp exp */
/* generate_template_type: UniqueIdentifier_tag__19 */
const struct asn1_template asn1_UniqueIdentifier_tag__19[] = {
/* 0 */ { 0, sizeof(UniqueIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: UniqueIdentifier */
const struct asn1_template asn1_UniqueIdentifier[] = {
/* 0 */ { 0, sizeof(UniqueIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_UniqueIdentifier_tag__19 }
};

int ASN1CALL
decode_UniqueIdentifier(const unsigned char *p, size_t len, UniqueIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_UniqueIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_UniqueIdentifier(unsigned char *p, size_t len, const UniqueIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_UniqueIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_UniqueIdentifier(const UniqueIdentifier *data)
{
    return _asn1_length(asn1_UniqueIdentifier, data);
}


void ASN1CALL
free_UniqueIdentifier(UniqueIdentifier *data)
{
    _asn1_free_top(asn1_UniqueIdentifier, data);
}


int ASN1CALL
copy_UniqueIdentifier(const UniqueIdentifier *from, UniqueIdentifier *to)
{
    return _asn1_copy_top(asn1_UniqueIdentifier, from, to);
}


char * ASN1CALL
print_UniqueIdentifier(const UniqueIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_UniqueIdentifier, flags, data);
}

/* template_members: SubjectPublicKeyInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: SubjectPublicKeyInfo exp exp */
/* generate_template_type: SubjectPublicKeyInfo_tag_subjectPublicKey_21 */
const struct asn1_template asn1_SubjectPublicKeyInfo_tag_subjectPublicKey_21[] = {
/* 0 */ { 0, sizeof(SubjectPublicKeyInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: SubjectPublicKeyInfo_tag__20 */
const struct asn1_template asn1_SubjectPublicKeyInfo_tag__20[] = {
/* 0 */ { 0, sizeof(struct SubjectPublicKeyInfo), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct SubjectPublicKeyInfo, algorithm), asn1_AlgorithmIdentifier },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct SubjectPublicKeyInfo, subjectPublicKey), asn1_SubjectPublicKeyInfo_tag_subjectPublicKey_21 },
/* 3 */ { A1_OP_NAME, 0, "SubjectPublicKeyInfo" },
/* 4 */ { A1_OP_NAME, 0, "algorithm" },
/* 5 */ { A1_OP_NAME, 0, "subjectPublicKey" }
};
/* generate_template_type: SubjectPublicKeyInfo */
const struct asn1_template asn1_SubjectPublicKeyInfo[] = {
/* 0 */ { 0, sizeof(SubjectPublicKeyInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_SubjectPublicKeyInfo_tag__20 }
};

int ASN1CALL
decode_SubjectPublicKeyInfo(const unsigned char *p, size_t len, SubjectPublicKeyInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SubjectPublicKeyInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_SubjectPublicKeyInfo(unsigned char *p, size_t len, const SubjectPublicKeyInfo *data, size_t *size)
{
    return _asn1_encode(asn1_SubjectPublicKeyInfo, p, len, data, size);
}


size_t ASN1CALL
length_SubjectPublicKeyInfo(const SubjectPublicKeyInfo *data)
{
    return _asn1_length(asn1_SubjectPublicKeyInfo, data);
}


void ASN1CALL
free_SubjectPublicKeyInfo(SubjectPublicKeyInfo *data)
{
    _asn1_free_top(asn1_SubjectPublicKeyInfo, data);
}


int ASN1CALL
copy_SubjectPublicKeyInfo(const SubjectPublicKeyInfo *from, SubjectPublicKeyInfo *to)
{
    return _asn1_copy_top(asn1_SubjectPublicKeyInfo, from, to);
}


char * ASN1CALL
print_SubjectPublicKeyInfo(const SubjectPublicKeyInfo *data, int flags)
{
    return _asn1_print_top(asn1_SubjectPublicKeyInfo, flags, data);
}

/* template_members: Extension exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: Extension exp exp */
/* generate_template_type: Extension_tag_extnID_23 */
/* template_members: Extension exp exp */
/* generate_template_type: Extension_tag_critical_24 */
const struct asn1_template asn1_Extension_tag_critical_24[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_BOOLEAN), 0, NULL }
};
/* template_members: Extension exp exp */
/* generate_template_type: Extension_tag_extnValue_25 */
const struct asn1_template asn1_Extension_tag_extnValue_25[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
const struct asn1_template asn1_CertExtensions[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)20) },
/* 1 */ { A1_OP_NAME, 0, "CertExtensions" },
/* 2 */ { A1_OP_NAME, 0, "ext-HeimPkinitPrincMaxLife" },
/* 3 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_heim_ce_pkinit_princ_max_life },
/* 4 */ { A1_OP_OPENTYPE, sizeof(HeimPkinitPrincMaxLifeSecs), (const void *)&asn1_HeimPkinitPrincMaxLifeSecs },
/* 5 */ { A1_OP_NAME, 0, "ext-AuthorityInfoAccess" },
/* 6 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkix_pe_authorityInfoAccess },
/* 7 */ { A1_OP_OPENTYPE, sizeof(AuthorityInfoAccessSyntax), (const void *)&asn1_AuthorityInfoAccessSyntax },
/* 8 */ { A1_OP_NAME, 0, "ext-SubjectInfoAccessSyntax" },
/* 9 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkix_pe_subjectInfoAccess },
/* 10 */ { A1_OP_OPENTYPE, sizeof(SubjectInfoAccessSyntax), (const void *)&asn1_SubjectInfoAccessSyntax },
/* 11 */ { A1_OP_NAME, 0, "ext-ProxyCertInfo" },
/* 12 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkix_pe_proxyCertInfo },
/* 13 */ { A1_OP_OPENTYPE, sizeof(ProxyCertInfo), (const void *)&asn1_ProxyCertInfo },
/* 14 */ { A1_OP_NAME, 0, "ext-SubjectDirectoryAttributes" },
/* 15 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_subjectDirectoryAttributes },
/* 16 */ { A1_OP_OPENTYPE, sizeof(SubjectDirectoryAttributes), (const void *)&asn1_SubjectDirectoryAttributes },
/* 17 */ { A1_OP_NAME, 0, "ext-SubjectKeyIdentifier" },
/* 18 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_subjectKeyIdentifier },
/* 19 */ { A1_OP_OPENTYPE, sizeof(SubjectKeyIdentifier), (const void *)&asn1_SubjectKeyIdentifier },
/* 20 */ { A1_OP_NAME, 0, "ext-KeyUsage" },
/* 21 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_keyUsage },
/* 22 */ { A1_OP_OPENTYPE, sizeof(KeyUsage), (const void *)&asn1_KeyUsage },
/* 23 */ { A1_OP_NAME, 0, "ext-PrivateKeyUsagePeriod" },
/* 24 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_privateKeyUsagePeriod },
/* 25 */ { A1_OP_OPENTYPE, sizeof(PrivateKeyUsagePeriod), (const void *)&asn1_PrivateKeyUsagePeriod },
/* 26 */ { A1_OP_NAME, 0, "ext-SubjectAltName" },
/* 27 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_subjectAltName },
/* 28 */ { A1_OP_OPENTYPE, sizeof(GeneralNames), (const void *)&asn1_GeneralNames },
/* 29 */ { A1_OP_NAME, 0, "ext-IssuerAltName" },
/* 30 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_issuerAltName },
/* 31 */ { A1_OP_OPENTYPE, sizeof(GeneralNames), (const void *)&asn1_GeneralNames },
/* 32 */ { A1_OP_NAME, 0, "ext-BasicConstraints" },
/* 33 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_basicConstraints },
/* 34 */ { A1_OP_OPENTYPE, sizeof(BasicConstraints), (const void *)&asn1_BasicConstraints },
/* 35 */ { A1_OP_NAME, 0, "ext-NameConstraints" },
/* 36 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_nameConstraints },
/* 37 */ { A1_OP_OPENTYPE, sizeof(NameConstraints), (const void *)&asn1_NameConstraints },
/* 38 */ { A1_OP_NAME, 0, "ext-CRLDistributionPoints" },
/* 39 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_cRLDistributionPoints },
/* 40 */ { A1_OP_OPENTYPE, sizeof(CRLDistributionPoints), (const void *)&asn1_CRLDistributionPoints },
/* 41 */ { A1_OP_NAME, 0, "ext-CertificatePolicies" },
/* 42 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_certificatePolicies },
/* 43 */ { A1_OP_OPENTYPE, sizeof(CertificatePolicies), (const void *)&asn1_CertificatePolicies },
/* 44 */ { A1_OP_NAME, 0, "ext-PolicyMappings" },
/* 45 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_policyMappings },
/* 46 */ { A1_OP_OPENTYPE, sizeof(PolicyMappings), (const void *)&asn1_PolicyMappings },
/* 47 */ { A1_OP_NAME, 0, "ext-AuthorityKeyIdentifier" },
/* 48 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_authorityKeyIdentifier },
/* 49 */ { A1_OP_OPENTYPE, sizeof(AuthorityKeyIdentifier), (const void *)&asn1_AuthorityKeyIdentifier },
/* 50 */ { A1_OP_NAME, 0, "ext-PolicyConstraints" },
/* 51 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_policyConstraints },
/* 52 */ { A1_OP_OPENTYPE, sizeof(PolicyConstraints), (const void *)&asn1_PolicyConstraints },
/* 53 */ { A1_OP_NAME, 0, "ext-ExtKeyUsage" },
/* 54 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_extKeyUsage },
/* 55 */ { A1_OP_OPENTYPE, sizeof(ExtKeyUsage), (const void *)&asn1_ExtKeyUsage },
/* 56 */ { A1_OP_NAME, 0, "ext-FreshestCRL" },
/* 57 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_freshestCRL },
/* 58 */ { A1_OP_OPENTYPE, sizeof(CRLDistributionPoints), (const void *)&asn1_CRLDistributionPoints },
/* 59 */ { A1_OP_NAME, 0, "ext-InhibitAnyPolicy" },
/* 60 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_x509_ce_inhibitAnyPolicy },
/* 61 */ { A1_OP_OPENTYPE, sizeof(SkipCerts), (const void *)&asn1_SkipCerts }
};
/* generate_template_type: Extension_tag__22 */
const struct asn1_template asn1_Extension_tag__22[] = {
/* 0 */ { 0, sizeof(struct Extension), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct Extension, extnID), asn1_AttributeType_tag__1 },
/* 2 */ { A1_OP_DEFVAL|A1_DV_BOOLEAN, ~0, (void *)(uintptr_t)0 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean)|A1_FLAG_DEFAULT, offsetof(struct Extension, critical), asn1_Extension_tag_critical_24 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct Extension, extnValue), asn1_Extension_tag_extnValue_25 },
/* 5 */ { A1_OP_OPENTYPE_OBJSET | A1_OS_IS_SORTED |0 | (2 << 10) | 0, offsetof(Extension, _ioschoice_extnValue), asn1_CertExtensions },
/* 6 */ { A1_OP_NAME, 0, "Extension" },
/* 7 */ { A1_OP_NAME, 0, "extnID" },
/* 8 */ { A1_OP_NAME, 0, "critical" },
/* 9 */ { A1_OP_NAME, 0, "extnValue" }
};
/* generate_template_type: Extension */
const struct asn1_template asn1_Extension[] = {
/* 0 */ { 0, sizeof(Extension), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Extension_tag__22 }
};

int ASN1CALL
decode_Extension(const unsigned char *p, size_t len, Extension *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Extension, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Extension(unsigned char *p, size_t len, const Extension *data, size_t *size)
{
    return _asn1_encode(asn1_Extension, p, len, data, size);
}


size_t ASN1CALL
length_Extension(const Extension *data)
{
    return _asn1_length(asn1_Extension, data);
}


void ASN1CALL
free_Extension(Extension *data)
{
    _asn1_free_top(asn1_Extension, data);
}


int ASN1CALL
copy_Extension(const Extension *from, Extension *to)
{
    return _asn1_copy_top(asn1_Extension, from, to);
}


char * ASN1CALL
print_Extension(const Extension *data, int flags)
{
    return _asn1_print_top(asn1_Extension, flags, data);
}

/* template_members: Extensions exp exp */
/* generate_template_type: Extension_seofTstruct_3 */
const struct asn1_template asn1_Extension_seofTstruct_3[] = {
/* 0 */ { 0, sizeof(Extension), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Extension }
};
/* generate_template_type: Extensions_tag__26 */
const struct asn1_template asn1_Extensions_tag__26[] = {
/* 0 */ { 0, sizeof(Extension), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_Extension_seofTstruct_3 }
};
/* generate_template_type: Extensions */
const struct asn1_template asn1_Extensions[] = {
/* 0 */ { 0, sizeof(Extensions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Extensions_tag__26 }
};

int ASN1CALL
decode_Extensions(const unsigned char *p, size_t len, Extensions *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Extensions, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Extensions(unsigned char *p, size_t len, const Extensions *data, size_t *size)
{
    return _asn1_encode(asn1_Extensions, p, len, data, size);
}


size_t ASN1CALL
length_Extensions(const Extensions *data)
{
    return _asn1_length(asn1_Extensions, data);
}


void ASN1CALL
free_Extensions(Extensions *data)
{
    _asn1_free_top(asn1_Extensions, data);
}


int ASN1CALL
copy_Extensions(const Extensions *from, Extensions *to)
{
    return _asn1_copy_top(asn1_Extensions, from, to);
}


char * ASN1CALL
print_Extensions(const Extensions *data, int flags)
{
    return _asn1_print_top(asn1_Extensions, flags, data);
}

int ASN1CALL
add_Extensions(Extensions *data, const Extension *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_Extension(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_Extensions(Extensions *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_Extension(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: TBSCertificate exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: TBSCertificate exp exp */
/* generate_template_type: TBSCertificate_tag_version_28 */
const struct asn1_template asn1_TBSCertificate_tag_version_28[] = {
/* 0 */ { 0, sizeof(Version), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Version }
};
/* template_members: TBSCertificate exp imp */
/* template_members: TBSCertificate exp exp */
/* generate_template_type: TBSCertificate_tag_issuerUniqueID_30 */
const struct asn1_template asn1_TBSCertificate_tag_issuerUniqueID_30[] = {
/* 0 */ { 0, sizeof(TBSCertificate), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: TBSCertificate_tag_issuerUniqueID_29 */
const struct asn1_template asn1_TBSCertificate_tag_issuerUniqueID_29[] = {
/* 0 */ { 0, sizeof(TBSCertificate), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_TBSCertificate_tag_issuerUniqueID_30 }
};
/* template_members: TBSCertificate exp imp */
/* template_members: TBSCertificate exp exp */
/* generate_template_type: TBSCertificate_tag_subjectUniqueID_32 */
/* generate_template_type: TBSCertificate_tag_subjectUniqueID_31 */
/* template_members: TBSCertificate exp exp */
/* generate_template_type: TBSCertificate_tag_extensions_33 */
const struct asn1_template asn1_TBSCertificate_tag_extensions_33[] = {
/* 0 */ { 0, sizeof(Extensions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Extensions }
};
/* generate_template_type: TBSCertificate_tag__27 */
const struct asn1_template asn1_TBSCertificate_tag__27[] = {
/* 0 */ { 0, sizeof(struct TBSCertificate), ((void *)(uintptr_t)21) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct TBSCertificate, version), asn1_TBSCertificate_tag_version_28 },
/* 2 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, serialNumber), asn1_CertificateSerialNumber },
/* 3 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, signature), asn1_AlgorithmIdentifier },
/* 4 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, issuer), asn1_Name },
/* 5 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, validity), asn1_Validity },
/* 6 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, subject), asn1_Name },
/* 7 */ { A1_OP_TYPE , offsetof(struct TBSCertificate, subjectPublicKeyInfo), asn1_SubjectPublicKeyInfo },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct TBSCertificate, issuerUniqueID), asn1_TBSCertificate_tag_issuerUniqueID_29 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct TBSCertificate, subjectUniqueID), asn1_TBSCertificate_tag_issuerUniqueID_29 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct TBSCertificate, extensions), asn1_TBSCertificate_tag_extensions_33 },
/* 11 */ { A1_OP_NAME, 0, "TBSCertificate" },
/* 12 */ { A1_OP_NAME, 0, "version" },
/* 13 */ { A1_OP_NAME, 0, "serialNumber" },
/* 14 */ { A1_OP_NAME, 0, "signature" },
/* 15 */ { A1_OP_NAME, 0, "issuer" },
/* 16 */ { A1_OP_NAME, 0, "validity" },
/* 17 */ { A1_OP_NAME, 0, "subject" },
/* 18 */ { A1_OP_NAME, 0, "subjectPublicKeyInfo" },
/* 19 */ { A1_OP_NAME, 0, "issuerUniqueID" },
/* 20 */ { A1_OP_NAME, 0, "subjectUniqueID" },
/* 21 */ { A1_OP_NAME, 0, "extensions" }
};
/* generate_template_type: TBSCertificate */
const struct asn1_template asn1_TBSCertificate[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(TBSCertificate), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TBSCertificate_tag__27 }
};

int ASN1CALL
decode_TBSCertificate(const unsigned char *p, size_t len, TBSCertificate *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TBSCertificate, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TBSCertificate(unsigned char *p, size_t len, const TBSCertificate *data, size_t *size)
{
    return _asn1_encode(asn1_TBSCertificate, p, len, data, size);
}


size_t ASN1CALL
length_TBSCertificate(const TBSCertificate *data)
{
    return _asn1_length(asn1_TBSCertificate, data);
}


void ASN1CALL
free_TBSCertificate(TBSCertificate *data)
{
    _asn1_free_top(asn1_TBSCertificate, data);
}


int ASN1CALL
copy_TBSCertificate(const TBSCertificate *from, TBSCertificate *to)
{
    return _asn1_copy_top(asn1_TBSCertificate, from, to);
}


char * ASN1CALL
print_TBSCertificate(const TBSCertificate *data, int flags)
{
    return _asn1_print_top(asn1_TBSCertificate, flags, data);
}

/* template_members: Certificate exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: Certificate exp exp */
/* generate_template_type: Certificate_tag_signatureValue_35 */
const struct asn1_template asn1_Certificate_tag_signatureValue_35[] = {
/* 0 */ { 0, sizeof(Certificate), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: Certificate_tag__34 */
const struct asn1_template asn1_Certificate_tag__34[] = {
/* 0 */ { 0, sizeof(struct Certificate), ((void *)(uintptr_t)7) },
/* 1 */ { A1_OP_TYPE , offsetof(struct Certificate, tbsCertificate), asn1_TBSCertificate },
/* 2 */ { A1_OP_TYPE , offsetof(struct Certificate, signatureAlgorithm), asn1_AlgorithmIdentifier },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct Certificate, signatureValue), asn1_Certificate_tag_signatureValue_35 },
/* 4 */ { A1_OP_NAME, 0, "Certificate" },
/* 5 */ { A1_OP_NAME, 0, "tbsCertificate" },
/* 6 */ { A1_OP_NAME, 0, "signatureAlgorithm" },
/* 7 */ { A1_OP_NAME, 0, "signatureValue" }
};
/* generate_template_type: Certificate */
const struct asn1_template asn1_Certificate[] = {
/* 0 */ { 0, sizeof(Certificate), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Certificate_tag__34 }
};

int ASN1CALL
decode_Certificate(const unsigned char *p, size_t len, Certificate *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Certificate, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Certificate(unsigned char *p, size_t len, const Certificate *data, size_t *size)
{
    return _asn1_encode(asn1_Certificate, p, len, data, size);
}


size_t ASN1CALL
length_Certificate(const Certificate *data)
{
    return _asn1_length(asn1_Certificate, data);
}


void ASN1CALL
free_Certificate(Certificate *data)
{
    _asn1_free_top(asn1_Certificate, data);
}


int ASN1CALL
copy_Certificate(const Certificate *from, Certificate *to)
{
    return _asn1_copy_top(asn1_Certificate, from, to);
}


char * ASN1CALL
print_Certificate(const Certificate *data, int flags)
{
    return _asn1_print_top(asn1_Certificate, flags, data);
}

/* template_members: Certificates exp exp */
/* generate_template_type: Certificate_seofTstruct_4 */
const struct asn1_template asn1_Certificate_seofTstruct_4[] = {
/* 0 */ { 0, sizeof(Certificate), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Certificate }
};
/* generate_template_type: Certificates_tag__36 */
const struct asn1_template asn1_Certificates_tag__36[] = {
/* 0 */ { 0, sizeof(Certificate), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_Certificate_seofTstruct_4 }
};
/* generate_template_type: Certificates */
const struct asn1_template asn1_Certificates[] = {
/* 0 */ { 0, sizeof(Certificates), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Certificates_tag__36 }
};

int ASN1CALL
decode_Certificates(const unsigned char *p, size_t len, Certificates *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Certificates, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Certificates(unsigned char *p, size_t len, const Certificates *data, size_t *size)
{
    return _asn1_encode(asn1_Certificates, p, len, data, size);
}


size_t ASN1CALL
length_Certificates(const Certificates *data)
{
    return _asn1_length(asn1_Certificates, data);
}


void ASN1CALL
free_Certificates(Certificates *data)
{
    _asn1_free_top(asn1_Certificates, data);
}


int ASN1CALL
copy_Certificates(const Certificates *from, Certificates *to)
{
    return _asn1_copy_top(asn1_Certificates, from, to);
}


char * ASN1CALL
print_Certificates(const Certificates *data, int flags)
{
    return _asn1_print_top(asn1_Certificates, flags, data);
}

int ASN1CALL
add_Certificates(Certificates *data, const Certificate *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_Certificate(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_Certificates(Certificates *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_Certificate(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: ValidationParms exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: ValidationParms exp exp */
/* generate_template_type: ValidationParms_tag_seed_38 */
const struct asn1_template asn1_ValidationParms_tag_seed_38[] = {
/* 0 */ { 0, sizeof(ValidationParms), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* template_members: ValidationParms exp exp */
/* generate_template_type: ValidationParms_tag_pgenCounter_39 */
/* generate_template_type: ValidationParms_tag__37 */
const struct asn1_template asn1_ValidationParms_tag__37[] = {
/* 0 */ { 0, sizeof(struct ValidationParms), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct ValidationParms, seed), asn1_ValidationParms_tag_seed_38 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct ValidationParms, pgenCounter), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_OP_NAME, 0, "ValidationParms" },
/* 4 */ { A1_OP_NAME, 0, "seed" },
/* 5 */ { A1_OP_NAME, 0, "pgenCounter" }
};
/* generate_template_type: ValidationParms */
const struct asn1_template asn1_ValidationParms[] = {
/* 0 */ { 0, sizeof(ValidationParms), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ValidationParms_tag__37 }
};

int ASN1CALL
decode_ValidationParms(const unsigned char *p, size_t len, ValidationParms *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ValidationParms, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ValidationParms(unsigned char *p, size_t len, const ValidationParms *data, size_t *size)
{
    return _asn1_encode(asn1_ValidationParms, p, len, data, size);
}


size_t ASN1CALL
length_ValidationParms(const ValidationParms *data)
{
    return _asn1_length(asn1_ValidationParms, data);
}


void ASN1CALL
free_ValidationParms(ValidationParms *data)
{
    _asn1_free_top(asn1_ValidationParms, data);
}


int ASN1CALL
copy_ValidationParms(const ValidationParms *from, ValidationParms *to)
{
    return _asn1_copy_top(asn1_ValidationParms, from, to);
}


char * ASN1CALL
print_ValidationParms(const ValidationParms *data, int flags)
{
    return _asn1_print_top(asn1_ValidationParms, flags, data);
}

/* template_members: DomainParameters exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DomainParameters exp exp */
/* generate_template_type: DomainParameters_tag_p_41 */
/* template_members: DomainParameters exp exp */
/* generate_template_type: DomainParameters_tag_g_42 */
/* template_members: DomainParameters exp exp */
/* generate_template_type: DomainParameters_tag_q_43 */
/* template_members: DomainParameters exp exp */
/* generate_template_type: DomainParameters_tag_j_44 */
/* generate_template_type: DomainParameters_tag__40 */
const struct asn1_template asn1_DomainParameters_tag__40[] = {
/* 0 */ { 0, sizeof(struct DomainParameters), ((void *)(uintptr_t)11) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DomainParameters, p), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DomainParameters, g), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct DomainParameters, q), asn1_CertificateSerialNumber_tag__15 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct DomainParameters, j), asn1_CertificateSerialNumber_tag__15 },
/* 5 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct DomainParameters, validationParms), asn1_ValidationParms },
/* 6 */ { A1_OP_NAME, 0, "DomainParameters" },
/* 7 */ { A1_OP_NAME, 0, "p" },
/* 8 */ { A1_OP_NAME, 0, "g" },
/* 9 */ { A1_OP_NAME, 0, "q" },
/* 10 */ { A1_OP_NAME, 0, "j" },
/* 11 */ { A1_OP_NAME, 0, "validationParms" }
};
/* generate_template_type: DomainParameters */
const struct asn1_template asn1_DomainParameters[] = {
/* 0 */ { 0, sizeof(DomainParameters), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DomainParameters_tag__40 }
};

int ASN1CALL
decode_DomainParameters(const unsigned char *p, size_t len, DomainParameters *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DomainParameters, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DomainParameters(unsigned char *p, size_t len, const DomainParameters *data, size_t *size)
{
    return _asn1_encode(asn1_DomainParameters, p, len, data, size);
}


size_t ASN1CALL
length_DomainParameters(const DomainParameters *data)
{
    return _asn1_length(asn1_DomainParameters, data);
}


void ASN1CALL
free_DomainParameters(DomainParameters *data)
{
    _asn1_free_top(asn1_DomainParameters, data);
}


int ASN1CALL
copy_DomainParameters(const DomainParameters *from, DomainParameters *to)
{
    return _asn1_copy_top(asn1_DomainParameters, from, to);
}


char * ASN1CALL
print_DomainParameters(const DomainParameters *data, int flags)
{
    return _asn1_print_top(asn1_DomainParameters, flags, data);
}

/* template_members: DHParameter exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DHParameter exp exp */
/* generate_template_type: DHParameter_tag_prime_46 */
/* template_members: DHParameter exp exp */
/* generate_template_type: DHParameter_tag_base_47 */
/* template_members: DHParameter exp exp */
/* generate_template_type: DHParameter_tag_privateValueLength_48 */
/* generate_template_type: DHParameter_tag__45 */
const struct asn1_template asn1_DHParameter_tag__45[] = {
/* 0 */ { 0, sizeof(struct DHParameter), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DHParameter, prime), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DHParameter, base), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct DHParameter, privateValueLength), asn1_CertificateSerialNumber_tag__15 },
/* 4 */ { A1_OP_NAME, 0, "DHParameter" },
/* 5 */ { A1_OP_NAME, 0, "prime" },
/* 6 */ { A1_OP_NAME, 0, "base" },
/* 7 */ { A1_OP_NAME, 0, "privateValueLength" }
};
/* generate_template_type: DHParameter */
const struct asn1_template asn1_DHParameter[] = {
/* 0 */ { 0, sizeof(DHParameter), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DHParameter_tag__45 }
};

int ASN1CALL
decode_DHParameter(const unsigned char *p, size_t len, DHParameter *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DHParameter, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DHParameter(unsigned char *p, size_t len, const DHParameter *data, size_t *size)
{
    return _asn1_encode(asn1_DHParameter, p, len, data, size);
}


size_t ASN1CALL
length_DHParameter(const DHParameter *data)
{
    return _asn1_length(asn1_DHParameter, data);
}


void ASN1CALL
free_DHParameter(DHParameter *data)
{
    _asn1_free_top(asn1_DHParameter, data);
}


int ASN1CALL
copy_DHParameter(const DHParameter *from, DHParameter *to)
{
    return _asn1_copy_top(asn1_DHParameter, from, to);
}


char * ASN1CALL
print_DHParameter(const DHParameter *data, int flags)
{
    return _asn1_print_top(asn1_DHParameter, flags, data);
}

/* template_members: DHPublicKey exp exp */
/* generate_template_type: DHPublicKey_tag__49 */
/* generate_template_type: DHPublicKey */
const struct asn1_template asn1_DHPublicKey[] = {
/* 0 */ { 0, sizeof(DHPublicKey), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_CertificateSerialNumber_tag__15 }
};

int ASN1CALL
decode_DHPublicKey(const unsigned char *p, size_t len, DHPublicKey *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DHPublicKey, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DHPublicKey(unsigned char *p, size_t len, const DHPublicKey *data, size_t *size)
{
    return _asn1_encode(asn1_DHPublicKey, p, len, data, size);
}


size_t ASN1CALL
length_DHPublicKey(const DHPublicKey *data)
{
    return _asn1_length(asn1_DHPublicKey, data);
}


void ASN1CALL
free_DHPublicKey(DHPublicKey *data)
{
    _asn1_free_top(asn1_DHPublicKey, data);
}


int ASN1CALL
copy_DHPublicKey(const DHPublicKey *from, DHPublicKey *to)
{
    return _asn1_copy_top(asn1_DHPublicKey, from, to);
}


char * ASN1CALL
print_DHPublicKey(const DHPublicKey *data, int flags)
{
    return _asn1_print_top(asn1_DHPublicKey, flags, data);
}

/* template_members: OtherName exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OtherName exp exp */
/* generate_template_type: OtherName_tag_type_id_51 */
/* template_members: OtherName exp exp */
/* generate_template_type: OtherName_tag_value_52 */
const struct asn1_template asn1_OtherName_tag_value_52[] = {
/* 0 */ { 0, sizeof(HEIM_ANY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_HEIM_ANY}
};
const struct asn1_template asn1_KnownOtherNameTypes[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)6) },
/* 1 */ { A1_OP_NAME, 0, "KnownOtherNameTypes" },
/* 2 */ { A1_OP_NAME, 0, "on-pkinit-ms-san" },
/* 3 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkix_on_pkinit_ms_san },
/* 4 */ { A1_OP_OPENTYPE, sizeof(AliasUTF8String), (const void *)&asn1_AliasUTF8String },
/* 5 */ { A1_OP_NAME, 0, "on-krb5PrincipalName" },
/* 6 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkix_on_pkinit_san },
/* 7 */ { A1_OP_OPENTYPE, sizeof(KRB5PrincipalName), (const void *)&asn1_KRB5PrincipalName },
/* 8 */ { A1_OP_NAME, 0, "on-permanentIdentifier" },
/* 9 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkix_on_permanentIdentifier },
/* 10 */ { A1_OP_OPENTYPE, sizeof(PermanentIdentifier), (const void *)&asn1_PermanentIdentifier },
/* 11 */ { A1_OP_NAME, 0, "on-hardwareModuleName" },
/* 12 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkix_on_hardwareModuleName },
/* 13 */ { A1_OP_OPENTYPE, sizeof(HardwareModuleName), (const void *)&asn1_HardwareModuleName },
/* 14 */ { A1_OP_NAME, 0, "on-xmppAddr" },
/* 15 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkix_on_xmppAddr },
/* 16 */ { A1_OP_OPENTYPE, sizeof(AliasUTF8String), (const void *)&asn1_AliasUTF8String },
/* 17 */ { A1_OP_NAME, 0, "on-dnsSRV" },
/* 18 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkix_on_dnsSRV },
/* 19 */ { A1_OP_OPENTYPE, sizeof(AliasIA5String), (const void *)&asn1_AliasIA5String }
};
/* generate_template_type: OtherName_tag__50 */
const struct asn1_template asn1_OtherName_tag__50[] = {
/* 0 */ { 0, sizeof(struct OtherName), ((void *)(uintptr_t)6) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct OtherName, type_id), asn1_AttributeType_tag__1 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct OtherName, value), asn1_OtherName_tag_value_52 },
/* 3 */ { A1_OP_OPENTYPE_OBJSET | A1_OS_IS_SORTED |0 | (1 << 10) | 0, offsetof(OtherName, _ioschoice_value), asn1_KnownOtherNameTypes },
/* 4 */ { A1_OP_NAME, 0, "OtherName" },
/* 5 */ { A1_OP_NAME, 0, "type-id" },
/* 6 */ { A1_OP_NAME, 0, "value" }
};
/* generate_template_type: OtherName */
const struct asn1_template asn1_OtherName[] = {
/* 0 */ { 0, sizeof(OtherName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OtherName_tag__50 }
};

int ASN1CALL
decode_OtherName(const unsigned char *p, size_t len, OtherName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OtherName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OtherName(unsigned char *p, size_t len, const OtherName *data, size_t *size)
{
    return _asn1_encode(asn1_OtherName, p, len, data, size);
}


size_t ASN1CALL
length_OtherName(const OtherName *data)
{
    return _asn1_length(asn1_OtherName, data);
}


void ASN1CALL
free_OtherName(OtherName *data)
{
    _asn1_free_top(asn1_OtherName, data);
}


int ASN1CALL
copy_OtherName(const OtherName *from, OtherName *to)
{
    return _asn1_copy_top(asn1_OtherName, from, to);
}


char * ASN1CALL
print_OtherName(const OtherName *data, int flags)
{
    return _asn1_print_top(asn1_OtherName, flags, data);
}

/* template_members: OtherName imp imp */
/* generate_template_type: OtherName_tag__53 */
const struct asn1_template asn1_OtherName_tag__53[] = {
/* 0 */ { 0, sizeof(OtherName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OtherName }
};
/* generate_template_type: GeneralName_choice_otherName */
const struct asn1_template asn1_GeneralName_choice_otherName[] = {
/* 0 */ { 0, sizeof(OtherName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_IMPLICIT, 0, asn1_OtherName_tag__53 }
};
/* template_members: heim_ia5_string imp imp */
/* template_members: heim_ia5_string exp exp */
/* generate_template_type: heim_ia5_string_tag__55 */
/* generate_template_type: heim_ia5_string_tag__54 */
/* generate_template_type: GeneralName_choice_rfc822Name */
const struct asn1_template asn1_GeneralName_choice_rfc822Name[] = {
/* 0 */ { 0, sizeof(heim_ia5_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_IMPLICIT, 0, asn1_DirectoryString_choice_ia5String }
};
/* template_members: heim_ia5_string imp imp */
/* template_members: heim_ia5_string exp exp */
/* generate_template_type: heim_ia5_string_tag__57 */
/* generate_template_type: heim_ia5_string_tag__56 */
/* generate_template_type: GeneralName_choice_dNSName */
const struct asn1_template asn1_GeneralName_choice_dNSName[] = {
/* 0 */ { 0, sizeof(heim_ia5_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_IMPLICIT, 0, asn1_DirectoryString_choice_ia5String }
};
/* template_members: Name exp exp */
/* generate_template_type: Name_tag__58 */
const struct asn1_template asn1_Name_tag__58[] = {
/* 0 */ { 0, sizeof(Name), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Name }
};
/* generate_template_type: GeneralName_choice_directoryName */
const struct asn1_template asn1_GeneralName_choice_directoryName[] = {
/* 0 */ { 0, sizeof(Name), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), 0, asn1_Name_tag__58 }
};
/* template_members: heim_ia5_string imp imp */
/* template_members: heim_ia5_string exp exp */
/* generate_template_type: heim_ia5_string_tag__60 */
/* generate_template_type: heim_ia5_string_tag__59 */
/* generate_template_type: GeneralName_choice_uniformResourceIdentifier */
const struct asn1_template asn1_GeneralName_choice_uniformResourceIdentifier[] = {
/* 0 */ { 0, sizeof(heim_ia5_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,6)|A1_FLAG_IMPLICIT, 0, asn1_DirectoryString_choice_ia5String }
};
/* template_members: heim_octet_string imp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag__62 */
/* generate_template_type: heim_octet_string_tag__61 */
const struct asn1_template asn1_heim_octet_string_tag__61[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_Extension_tag_extnValue_25 }
};
/* generate_template_type: GeneralName_choice_iPAddress */
const struct asn1_template asn1_GeneralName_choice_iPAddress[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,7)|A1_FLAG_IMPLICIT, 0, asn1_heim_octet_string_tag__61 }
};
/* template_members: heim_oid imp imp */
/* template_members: heim_oid exp exp */
/* generate_template_type: heim_oid_tag__64 */
/* generate_template_type: heim_oid_tag__63 */
const struct asn1_template asn1_heim_oid_tag__63[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_AttributeType_tag__1 }
};
/* generate_template_type: GeneralName_choice_registeredID */
const struct asn1_template asn1_GeneralName_choice_registeredID[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,8)|A1_FLAG_IMPLICIT, 0, asn1_heim_oid_tag__63 }
};
static const struct asn1_template asn1_choice_GeneralName_3[] = {
/* 0 */ { 0, offsetof(GeneralName, element), ((void *)(uintptr_t)14) },
/* 1 */ { choice_GeneralName_otherName, offsetof(GeneralName, u.otherName), asn1_GeneralName_choice_otherName },
/* 2 */ { choice_GeneralName_rfc822Name, offsetof(GeneralName, u.rfc822Name), asn1_GeneralName_choice_rfc822Name },
/* 3 */ { choice_GeneralName_dNSName, offsetof(GeneralName, u.dNSName), asn1_GeneralName_choice_dNSName },
/* 4 */ { choice_GeneralName_directoryName, offsetof(GeneralName, u.directoryName), asn1_GeneralName_choice_directoryName },
/* 5 */ { choice_GeneralName_uniformResourceIdentifier, offsetof(GeneralName, u.uniformResourceIdentifier), asn1_GeneralName_choice_uniformResourceIdentifier },
/* 6 */ { choice_GeneralName_iPAddress, offsetof(GeneralName, u.iPAddress), asn1_GeneralName_choice_iPAddress },
/* 7 */ { choice_GeneralName_registeredID, offsetof(GeneralName, u.registeredID), asn1_GeneralName_choice_registeredID },
/* 8 */ { 0, 0, "otherName" },
/* 9 */ { 0, 0, "rfc822Name" },
/* 10 */ { 0, 0, "dNSName" },
/* 11 */ { 0, 0, "directoryName" },
/* 12 */ { 0, 0, "uniformResourceIdentifier" },
/* 13 */ { 0, 0, "iPAddress" },
/* 14 */ { 0, 0, "registeredID" }
};
/* generate_template_type: GeneralName */
const struct asn1_template asn1_GeneralName[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_GeneralName_3 }
};

int ASN1CALL
decode_GeneralName(const unsigned char *p, size_t len, GeneralName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_GeneralName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_GeneralName(unsigned char *p, size_t len, const GeneralName *data, size_t *size)
{
    return _asn1_encode(asn1_GeneralName, p, len, data, size);
}


size_t ASN1CALL
length_GeneralName(const GeneralName *data)
{
    return _asn1_length(asn1_GeneralName, data);
}


void ASN1CALL
free_GeneralName(GeneralName *data)
{
    _asn1_free_top(asn1_GeneralName, data);
}


int ASN1CALL
copy_GeneralName(const GeneralName *from, GeneralName *to)
{
    return _asn1_copy_top(asn1_GeneralName, from, to);
}


char * ASN1CALL
print_GeneralName(const GeneralName *data, int flags)
{
    return _asn1_print_top(asn1_GeneralName, flags, data);
}

/* template_members: GeneralNames exp exp */
/* generate_template_type: GeneralName_seofTstruct_5 */
const struct asn1_template asn1_GeneralName_seofTstruct_5[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_GeneralName }
};
/* generate_template_type: GeneralNames_tag__65 */
const struct asn1_template asn1_GeneralNames_tag__65[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_GeneralName_seofTstruct_5 }
};
/* generate_template_type: GeneralNames */
const struct asn1_template asn1_GeneralNames[] = {
/* 0 */ { 0, sizeof(GeneralNames), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_GeneralNames_tag__65 }
};

int ASN1CALL
decode_GeneralNames(const unsigned char *p, size_t len, GeneralNames *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_GeneralNames, 0|0, p, len, data, size);
}


int ASN1CALL
encode_GeneralNames(unsigned char *p, size_t len, const GeneralNames *data, size_t *size)
{
    return _asn1_encode(asn1_GeneralNames, p, len, data, size);
}


size_t ASN1CALL
length_GeneralNames(const GeneralNames *data)
{
    return _asn1_length(asn1_GeneralNames, data);
}


void ASN1CALL
free_GeneralNames(GeneralNames *data)
{
    _asn1_free_top(asn1_GeneralNames, data);
}


int ASN1CALL
copy_GeneralNames(const GeneralNames *from, GeneralNames *to)
{
    return _asn1_copy_top(asn1_GeneralNames, from, to);
}


char * ASN1CALL
print_GeneralNames(const GeneralNames *data, int flags)
{
    return _asn1_print_top(asn1_GeneralNames, flags, data);
}

int ASN1CALL
add_GeneralNames(GeneralNames *data, const GeneralName *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_GeneralName(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_GeneralNames(GeneralNames *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_GeneralName(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: KeyUsage exp exp */
static const struct asn1_template asn1_KeyUsage_bmember__0[] = {
/* 0 */ { 0, sizeof(KeyUsage), ((void *)(uintptr_t)9) },
/* 1 */ { 0, 0, "digitalSignature" },
/* 2 */ { 0, 1, "nonRepudiation" },
/* 3 */ { 0, 2, "keyEncipherment" },
/* 4 */ { 0, 3, "dataEncipherment" },
/* 5 */ { 0, 4, "keyAgreement" },
/* 6 */ { 0, 5, "keyCertSign" },
/* 7 */ { 0, 6, "cRLSign" },
/* 8 */ { 0, 7, "encipherOnly" },
/* 9 */ { 0, 8, "decipherOnly" }
};
/* generate_template_type: KeyUsage_tag__66 */
const struct asn1_template asn1_KeyUsage_tag__66[] = {
/* 0 */ { 0, sizeof(KeyUsage), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_KeyUsage_bmember__0 }
};
/* generate_template_type: KeyUsage */
const struct asn1_template asn1_KeyUsage[] = {
/* 0 */ { 0, sizeof(KeyUsage), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_KeyUsage_tag__66 }
};

int ASN1CALL
decode_KeyUsage(const unsigned char *p, size_t len, KeyUsage *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KeyUsage, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KeyUsage(unsigned char *p, size_t len, const KeyUsage *data, size_t *size)
{
    return _asn1_encode(asn1_KeyUsage, p, len, data, size);
}


size_t ASN1CALL
length_KeyUsage(const KeyUsage *data)
{
    return _asn1_length(asn1_KeyUsage, data);
}


void ASN1CALL
free_KeyUsage(KeyUsage *data)
{
    _asn1_free_top(asn1_KeyUsage, data);
}


int ASN1CALL
copy_KeyUsage(const KeyUsage *from, KeyUsage *to)
{
    return _asn1_copy_top(asn1_KeyUsage, from, to);
}


char * ASN1CALL
print_KeyUsage(const KeyUsage *data, int flags)
{
    return _asn1_print_top(asn1_KeyUsage, flags, data);
}

uint64_t KeyUsage2int(KeyUsage f)
{
uint64_t r = 0;
if(f.digitalSignature) r |= (1ULL << 0);
if(f.nonRepudiation) r |= (1ULL << 1);
if(f.keyEncipherment) r |= (1ULL << 2);
if(f.dataEncipherment) r |= (1ULL << 3);
if(f.keyAgreement) r |= (1ULL << 4);
if(f.keyCertSign) r |= (1ULL << 5);
if(f.cRLSign) r |= (1ULL << 6);
if(f.encipherOnly) r |= (1ULL << 7);
if(f.decipherOnly) r |= (1ULL << 8);
return r;
}

KeyUsage int2KeyUsage(uint64_t n)
{
	KeyUsage flags;

	memset(&flags, 0, sizeof(flags));

	flags.digitalSignature = (n >> 0) & 1;
	flags.nonRepudiation = (n >> 1) & 1;
	flags.keyEncipherment = (n >> 2) & 1;
	flags.dataEncipherment = (n >> 3) & 1;
	flags.keyAgreement = (n >> 4) & 1;
	flags.keyCertSign = (n >> 5) & 1;
	flags.cRLSign = (n >> 6) & 1;
	flags.encipherOnly = (n >> 7) & 1;
	flags.decipherOnly = (n >> 8) & 1;
	return flags;
}

static struct units KeyUsage_units[] = {
	{"decipherOnly",	1ULL << 8},
	{"encipherOnly",	1ULL << 7},
	{"cRLSign",	1ULL << 6},
	{"keyCertSign",	1ULL << 5},
	{"keyAgreement",	1ULL << 4},
	{"dataEncipherment",	1ULL << 3},
	{"keyEncipherment",	1ULL << 2},
	{"nonRepudiation",	1ULL << 1},
	{"digitalSignature",	1ULL << 0},
	{NULL,	0}
};

const struct units * asn1_KeyUsage_units(void){
return KeyUsage_units;
}

/* template_members: PrivateKeyUsagePeriod exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PrivateKeyUsagePeriod exp imp */
/* template_members: time_t exp exp */
/* generate_template_type: time_t_tag_notBefore_69 */
/* generate_template_type: PrivateKeyUsagePeriod_tag_notBefore_68 */
/* template_members: PrivateKeyUsagePeriod exp imp */
/* template_members: time_t exp exp */
/* generate_template_type: time_t_tag_notAfter_71 */
/* generate_template_type: PrivateKeyUsagePeriod_tag_notAfter_70 */
/* generate_template_type: PrivateKeyUsagePeriod_tag__67 */
const struct asn1_template asn1_PrivateKeyUsagePeriod_tag__67[] = {
/* 0 */ { 0, sizeof(struct PrivateKeyUsagePeriod), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct PrivateKeyUsagePeriod, notBefore), asn1_Time_choice_generalTime },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct PrivateKeyUsagePeriod, notAfter), asn1_Time_choice_generalTime },
/* 3 */ { A1_OP_NAME, 0, "PrivateKeyUsagePeriod" },
/* 4 */ { A1_OP_NAME, 0, "notBefore" },
/* 5 */ { A1_OP_NAME, 0, "notAfter" }
};
/* generate_template_type: PrivateKeyUsagePeriod */
const struct asn1_template asn1_PrivateKeyUsagePeriod[] = {
/* 0 */ { 0, sizeof(PrivateKeyUsagePeriod), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PrivateKeyUsagePeriod_tag__67 }
};

int ASN1CALL
decode_PrivateKeyUsagePeriod(const unsigned char *p, size_t len, PrivateKeyUsagePeriod *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PrivateKeyUsagePeriod, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PrivateKeyUsagePeriod(unsigned char *p, size_t len, const PrivateKeyUsagePeriod *data, size_t *size)
{
    return _asn1_encode(asn1_PrivateKeyUsagePeriod, p, len, data, size);
}


size_t ASN1CALL
length_PrivateKeyUsagePeriod(const PrivateKeyUsagePeriod *data)
{
    return _asn1_length(asn1_PrivateKeyUsagePeriod, data);
}


void ASN1CALL
free_PrivateKeyUsagePeriod(PrivateKeyUsagePeriod *data)
{
    _asn1_free_top(asn1_PrivateKeyUsagePeriod, data);
}


int ASN1CALL
copy_PrivateKeyUsagePeriod(const PrivateKeyUsagePeriod *from, PrivateKeyUsagePeriod *to)
{
    return _asn1_copy_top(asn1_PrivateKeyUsagePeriod, from, to);
}


char * ASN1CALL
print_PrivateKeyUsagePeriod(const PrivateKeyUsagePeriod *data, int flags)
{
    return _asn1_print_top(asn1_PrivateKeyUsagePeriod, flags, data);
}

/* template_members: CertPolicyId exp exp */
/* generate_template_type: CertPolicyId_tag__72 */
/* generate_template_type: CertPolicyId */
const struct asn1_template asn1_CertPolicyId[] = {
/* 0 */ { 0, sizeof(CertPolicyId), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_AttributeType_tag__1 }
};

int ASN1CALL
decode_CertPolicyId(const unsigned char *p, size_t len, CertPolicyId *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CertPolicyId, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CertPolicyId(unsigned char *p, size_t len, const CertPolicyId *data, size_t *size)
{
    return _asn1_encode(asn1_CertPolicyId, p, len, data, size);
}


size_t ASN1CALL
length_CertPolicyId(const CertPolicyId *data)
{
    return _asn1_length(asn1_CertPolicyId, data);
}


void ASN1CALL
free_CertPolicyId(CertPolicyId *data)
{
    _asn1_free_top(asn1_CertPolicyId, data);
}


int ASN1CALL
copy_CertPolicyId(const CertPolicyId *from, CertPolicyId *to)
{
    return _asn1_copy_top(asn1_CertPolicyId, from, to);
}


char * ASN1CALL
print_CertPolicyId(const CertPolicyId *data, int flags)
{
    return _asn1_print_top(asn1_CertPolicyId, flags, data);
}

/* template_members: PolicyQualifierId exp exp */
/* generate_template_type: PolicyQualifierId_tag__73 */
/* generate_template_type: PolicyQualifierId */
const struct asn1_template asn1_PolicyQualifierId[] = {
/* 0 */ { 0, sizeof(PolicyQualifierId), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_AttributeType_tag__1 }
};

int ASN1CALL
decode_PolicyQualifierId(const unsigned char *p, size_t len, PolicyQualifierId *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PolicyQualifierId, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PolicyQualifierId(unsigned char *p, size_t len, const PolicyQualifierId *data, size_t *size)
{
    return _asn1_encode(asn1_PolicyQualifierId, p, len, data, size);
}


size_t ASN1CALL
length_PolicyQualifierId(const PolicyQualifierId *data)
{
    return _asn1_length(asn1_PolicyQualifierId, data);
}


void ASN1CALL
free_PolicyQualifierId(PolicyQualifierId *data)
{
    _asn1_free_top(asn1_PolicyQualifierId, data);
}


int ASN1CALL
copy_PolicyQualifierId(const PolicyQualifierId *from, PolicyQualifierId *to)
{
    return _asn1_copy_top(asn1_PolicyQualifierId, from, to);
}


char * ASN1CALL
print_PolicyQualifierId(const PolicyQualifierId *data, int flags)
{
    return _asn1_print_top(asn1_PolicyQualifierId, flags, data);
}

/* template_members: PolicyQualifierInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PolicyQualifierInfo exp exp */
/* generate_template_type: PolicyQualifierInfo_tag_policyQualifierId_75 */
const struct asn1_template asn1_KnownPolicyQualifiers[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)2) },
/* 1 */ { A1_OP_NAME, 0, "KnownPolicyQualifiers" },
/* 2 */ { A1_OP_NAME, 0, "pq-CPS" },
/* 3 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkix_qt_cps },
/* 4 */ { A1_OP_OPENTYPE, sizeof(AliasIA5String), (const void *)&asn1_AliasIA5String },
/* 5 */ { A1_OP_NAME, 0, "pq-UserNotice" },
/* 6 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkix_qt_unotice },
/* 7 */ { A1_OP_OPENTYPE, sizeof(UserNotice), (const void *)&asn1_UserNotice }
};
/* generate_template_type: PolicyQualifierInfo_tag__74 */
const struct asn1_template asn1_PolicyQualifierInfo_tag__74[] = {
/* 0 */ { 0, sizeof(struct PolicyQualifierInfo), ((void *)(uintptr_t)6) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct PolicyQualifierInfo, policyQualifierId), asn1_AttributeType_tag__1 },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct PolicyQualifierInfo, qualifier), &asn1_extern_HEIM_ANY},
/* 3 */ { A1_OP_OPENTYPE_OBJSET | A1_OS_IS_SORTED |0 | (1 << 10) | 0, offsetof(PolicyQualifierInfo, _ioschoice_qualifier), asn1_KnownPolicyQualifiers },
/* 4 */ { A1_OP_NAME, 0, "PolicyQualifierInfo" },
/* 5 */ { A1_OP_NAME, 0, "policyQualifierId" },
/* 6 */ { A1_OP_NAME, 0, "qualifier" }
};
/* generate_template_type: PolicyQualifierInfo */
const struct asn1_template asn1_PolicyQualifierInfo[] = {
/* 0 */ { 0, sizeof(PolicyQualifierInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PolicyQualifierInfo_tag__74 }
};

int ASN1CALL
decode_PolicyQualifierInfo(const unsigned char *p, size_t len, PolicyQualifierInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PolicyQualifierInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PolicyQualifierInfo(unsigned char *p, size_t len, const PolicyQualifierInfo *data, size_t *size)
{
    return _asn1_encode(asn1_PolicyQualifierInfo, p, len, data, size);
}


size_t ASN1CALL
length_PolicyQualifierInfo(const PolicyQualifierInfo *data)
{
    return _asn1_length(asn1_PolicyQualifierInfo, data);
}


void ASN1CALL
free_PolicyQualifierInfo(PolicyQualifierInfo *data)
{
    _asn1_free_top(asn1_PolicyQualifierInfo, data);
}


int ASN1CALL
copy_PolicyQualifierInfo(const PolicyQualifierInfo *from, PolicyQualifierInfo *to)
{
    return _asn1_copy_top(asn1_PolicyQualifierInfo, from, to);
}


char * ASN1CALL
print_PolicyQualifierInfo(const PolicyQualifierInfo *data, int flags)
{
    return _asn1_print_top(asn1_PolicyQualifierInfo, flags, data);
}

/* template_members: PolicyQualifierInfos exp exp */
/* generate_template_type: PolicyQualifierInfo_seofTstruct_6 */
const struct asn1_template asn1_PolicyQualifierInfo_seofTstruct_6[] = {
/* 0 */ { 0, sizeof(PolicyQualifierInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PolicyQualifierInfo }
};
/* generate_template_type: PolicyQualifierInfos_tag__76 */
const struct asn1_template asn1_PolicyQualifierInfos_tag__76[] = {
/* 0 */ { 0, sizeof(PolicyQualifierInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PolicyQualifierInfo_seofTstruct_6 }
};
/* generate_template_type: PolicyQualifierInfos */
const struct asn1_template asn1_PolicyQualifierInfos[] = {
/* 0 */ { 0, sizeof(PolicyQualifierInfos), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PolicyQualifierInfos_tag__76 }
};

int ASN1CALL
decode_PolicyQualifierInfos(const unsigned char *p, size_t len, PolicyQualifierInfos *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PolicyQualifierInfos, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PolicyQualifierInfos(unsigned char *p, size_t len, const PolicyQualifierInfos *data, size_t *size)
{
    return _asn1_encode(asn1_PolicyQualifierInfos, p, len, data, size);
}


size_t ASN1CALL
length_PolicyQualifierInfos(const PolicyQualifierInfos *data)
{
    return _asn1_length(asn1_PolicyQualifierInfos, data);
}


void ASN1CALL
free_PolicyQualifierInfos(PolicyQualifierInfos *data)
{
    _asn1_free_top(asn1_PolicyQualifierInfos, data);
}


int ASN1CALL
copy_PolicyQualifierInfos(const PolicyQualifierInfos *from, PolicyQualifierInfos *to)
{
    return _asn1_copy_top(asn1_PolicyQualifierInfos, from, to);
}


char * ASN1CALL
print_PolicyQualifierInfos(const PolicyQualifierInfos *data, int flags)
{
    return _asn1_print_top(asn1_PolicyQualifierInfos, flags, data);
}

int ASN1CALL
add_PolicyQualifierInfos(PolicyQualifierInfos *data, const PolicyQualifierInfo *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_PolicyQualifierInfo(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_PolicyQualifierInfos(PolicyQualifierInfos *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_PolicyQualifierInfo(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: PolicyInformation exp exp */
/* tsequence: members isstruct: 1 */
/* generate_template_type: PolicyInformation_tag__77 */
const struct asn1_template asn1_PolicyInformation_tag__77[] = {
/* 0 */ { 0, sizeof(struct PolicyInformation), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct PolicyInformation, policyIdentifier), asn1_CertPolicyId },
/* 2 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct PolicyInformation, policyQualifiers), asn1_PolicyQualifierInfos },
/* 3 */ { A1_OP_NAME, 0, "PolicyInformation" },
/* 4 */ { A1_OP_NAME, 0, "policyIdentifier" },
/* 5 */ { A1_OP_NAME, 0, "policyQualifiers" }
};
/* generate_template_type: PolicyInformation */
const struct asn1_template asn1_PolicyInformation[] = {
/* 0 */ { 0, sizeof(PolicyInformation), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PolicyInformation_tag__77 }
};

int ASN1CALL
decode_PolicyInformation(const unsigned char *p, size_t len, PolicyInformation *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PolicyInformation, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PolicyInformation(unsigned char *p, size_t len, const PolicyInformation *data, size_t *size)
{
    return _asn1_encode(asn1_PolicyInformation, p, len, data, size);
}


size_t ASN1CALL
length_PolicyInformation(const PolicyInformation *data)
{
    return _asn1_length(asn1_PolicyInformation, data);
}


void ASN1CALL
free_PolicyInformation(PolicyInformation *data)
{
    _asn1_free_top(asn1_PolicyInformation, data);
}


int ASN1CALL
copy_PolicyInformation(const PolicyInformation *from, PolicyInformation *to)
{
    return _asn1_copy_top(asn1_PolicyInformation, from, to);
}


char * ASN1CALL
print_PolicyInformation(const PolicyInformation *data, int flags)
{
    return _asn1_print_top(asn1_PolicyInformation, flags, data);
}

/* template_members: CertificatePolicies exp exp */
/* generate_template_type: PolicyInformation_seofTstruct_7 */
const struct asn1_template asn1_PolicyInformation_seofTstruct_7[] = {
/* 0 */ { 0, sizeof(PolicyInformation), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PolicyInformation }
};
/* generate_template_type: CertificatePolicies_tag__78 */
const struct asn1_template asn1_CertificatePolicies_tag__78[] = {
/* 0 */ { 0, sizeof(PolicyInformation), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PolicyInformation_seofTstruct_7 }
};
/* generate_template_type: CertificatePolicies */
const struct asn1_template asn1_CertificatePolicies[] = {
/* 0 */ { 0, sizeof(CertificatePolicies), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CertificatePolicies_tag__78 }
};

int ASN1CALL
decode_CertificatePolicies(const unsigned char *p, size_t len, CertificatePolicies *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CertificatePolicies, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CertificatePolicies(unsigned char *p, size_t len, const CertificatePolicies *data, size_t *size)
{
    return _asn1_encode(asn1_CertificatePolicies, p, len, data, size);
}


size_t ASN1CALL
length_CertificatePolicies(const CertificatePolicies *data)
{
    return _asn1_length(asn1_CertificatePolicies, data);
}


void ASN1CALL
free_CertificatePolicies(CertificatePolicies *data)
{
    _asn1_free_top(asn1_CertificatePolicies, data);
}


int ASN1CALL
copy_CertificatePolicies(const CertificatePolicies *from, CertificatePolicies *to)
{
    return _asn1_copy_top(asn1_CertificatePolicies, from, to);
}


char * ASN1CALL
print_CertificatePolicies(const CertificatePolicies *data, int flags)
{
    return _asn1_print_top(asn1_CertificatePolicies, flags, data);
}

int ASN1CALL
add_CertificatePolicies(CertificatePolicies *data, const PolicyInformation *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_PolicyInformation(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_CertificatePolicies(CertificatePolicies *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_PolicyInformation(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: CPSuri exp exp */
/* generate_template_type: CPSuri_tag__79 */
/* generate_template_type: CPSuri */
const struct asn1_template asn1_CPSuri[] = {
/* 0 */ { 0, sizeof(CPSuri), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_IA5String), 0, asn1_heim_ia5_string_tag__4 }
};

int ASN1CALL
decode_CPSuri(const unsigned char *p, size_t len, CPSuri *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CPSuri, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CPSuri(unsigned char *p, size_t len, const CPSuri *data, size_t *size)
{
    return _asn1_encode(asn1_CPSuri, p, len, data, size);
}


size_t ASN1CALL
length_CPSuri(const CPSuri *data)
{
    return _asn1_length(asn1_CPSuri, data);
}


void ASN1CALL
free_CPSuri(CPSuri *data)
{
    _asn1_free_top(asn1_CPSuri, data);
}


int ASN1CALL
copy_CPSuri(const CPSuri *from, CPSuri *to)
{
    return _asn1_copy_top(asn1_CPSuri, from, to);
}


char * ASN1CALL
print_CPSuri(const CPSuri *data, int flags)
{
    return _asn1_print_top(asn1_CPSuri, flags, data);
}

/* template_members: heim_ia5_string exp exp */
/* generate_template_type: heim_ia5_string_tag__80 */
/* generate_template_type: DisplayText_choice_ia5String */
/* template_members: heim_visible_string exp exp */
/* generate_template_type: heim_visible_string_tag__81 */
const struct asn1_template asn1_heim_visible_string_tag__81[] = {
/* 0 */ { 0, sizeof(heim_visible_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_VISIBLE_STRING), 0, NULL }
};
/* generate_template_type: DisplayText_choice_visibleString */
const struct asn1_template asn1_DisplayText_choice_visibleString[] = {
/* 0 */ { 0, sizeof(heim_visible_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_VisibleString), 0, asn1_heim_visible_string_tag__81 }
};
/* template_members: heim_bmp_string exp exp */
/* generate_template_type: heim_bmp_string_tag__82 */
/* generate_template_type: DisplayText_choice_bmpString */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag__83 */
/* generate_template_type: DisplayText_choice_utf8String */
static const struct asn1_template asn1_choice_DisplayText_4[] = {
/* 0 */ { 0, offsetof(DisplayText, element), ((void *)(uintptr_t)8) },
/* 1 */ { choice_DisplayText_ia5String, offsetof(DisplayText, u.ia5String), asn1_DirectoryString_choice_ia5String },
/* 2 */ { choice_DisplayText_visibleString, offsetof(DisplayText, u.visibleString), asn1_DisplayText_choice_visibleString },
/* 3 */ { choice_DisplayText_bmpString, offsetof(DisplayText, u.bmpString), asn1_DirectoryString_choice_bmpString },
/* 4 */ { choice_DisplayText_utf8String, offsetof(DisplayText, u.utf8String), asn1_DirectoryString_choice_utf8String },
/* 5 */ { 0, 0, "ia5String" },
/* 6 */ { 0, 0, "visibleString" },
/* 7 */ { 0, 0, "bmpString" },
/* 8 */ { 0, 0, "utf8String" }
};
/* generate_template_type: DisplayText */
const struct asn1_template asn1_DisplayText[] = {
/* 0 */ { 0, sizeof(DisplayText), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_DisplayText_4 }
};

int ASN1CALL
decode_DisplayText(const unsigned char *p, size_t len, DisplayText *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DisplayText, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DisplayText(unsigned char *p, size_t len, const DisplayText *data, size_t *size)
{
    return _asn1_encode(asn1_DisplayText, p, len, data, size);
}


size_t ASN1CALL
length_DisplayText(const DisplayText *data)
{
    return _asn1_length(asn1_DisplayText, data);
}


void ASN1CALL
free_DisplayText(DisplayText *data)
{
    _asn1_free_top(asn1_DisplayText, data);
}


int ASN1CALL
copy_DisplayText(const DisplayText *from, DisplayText *to)
{
    return _asn1_copy_top(asn1_DisplayText, from, to);
}


char * ASN1CALL
print_DisplayText(const DisplayText *data, int flags)
{
    return _asn1_print_top(asn1_DisplayText, flags, data);
}

/* template_members: NoticeReference exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: NoticeReference exp exp */
/* template_members: heim_integer exp exp */
/* generate_template_type: heim_integer_tag__86 */
/* generate_template_type: NoticeReference_noticeNumbers_8 */
const struct asn1_template asn1_NoticeReference_noticeNumbers_8[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_CertificateSerialNumber_tag__15 }
};
/* generate_template_type: NoticeReference_tag_noticeNumbers_85 */
const struct asn1_template asn1_NoticeReference_tag_noticeNumbers_85[] = {
/* 0 */ { 0, sizeof(struct NoticeReference_noticeNumbers), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_NoticeReference_noticeNumbers_8 }
};
/* generate_template_type: NoticeReference_tag__84 */
const struct asn1_template asn1_NoticeReference_tag__84[] = {
/* 0 */ { 0, sizeof(struct NoticeReference), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct NoticeReference, organization), asn1_DisplayText },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), offsetof(struct NoticeReference, noticeNumbers), asn1_NoticeReference_tag_noticeNumbers_85 },
/* 3 */ { A1_OP_NAME, 0, "NoticeReference" },
/* 4 */ { A1_OP_NAME, 0, "organization" },
/* 5 */ { A1_OP_NAME, 0, "noticeNumbers" }
};
/* generate_template_type: NoticeReference */
const struct asn1_template asn1_NoticeReference[] = {
/* 0 */ { 0, sizeof(NoticeReference), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NoticeReference_tag__84 }
};

int ASN1CALL
decode_NoticeReference(const unsigned char *p, size_t len, NoticeReference *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_NoticeReference, 0|0, p, len, data, size);
}


int ASN1CALL
encode_NoticeReference(unsigned char *p, size_t len, const NoticeReference *data, size_t *size)
{
    return _asn1_encode(asn1_NoticeReference, p, len, data, size);
}


size_t ASN1CALL
length_NoticeReference(const NoticeReference *data)
{
    return _asn1_length(asn1_NoticeReference, data);
}


void ASN1CALL
free_NoticeReference(NoticeReference *data)
{
    _asn1_free_top(asn1_NoticeReference, data);
}


int ASN1CALL
copy_NoticeReference(const NoticeReference *from, NoticeReference *to)
{
    return _asn1_copy_top(asn1_NoticeReference, from, to);
}


char * ASN1CALL
print_NoticeReference(const NoticeReference *data, int flags)
{
    return _asn1_print_top(asn1_NoticeReference, flags, data);
}

/* template_members: UserNotice exp exp */
/* tsequence: members isstruct: 1 */
/* generate_template_type: UserNotice_tag__87 */
const struct asn1_template asn1_UserNotice_tag__87[] = {
/* 0 */ { 0, sizeof(struct UserNotice), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct UserNotice, noticeRef), asn1_NoticeReference },
/* 2 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct UserNotice, explicitText), asn1_DisplayText },
/* 3 */ { A1_OP_NAME, 0, "UserNotice" },
/* 4 */ { A1_OP_NAME, 0, "noticeRef" },
/* 5 */ { A1_OP_NAME, 0, "explicitText" }
};
/* generate_template_type: UserNotice */
const struct asn1_template asn1_UserNotice[] = {
/* 0 */ { 0, sizeof(UserNotice), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_UserNotice_tag__87 }
};

int ASN1CALL
decode_UserNotice(const unsigned char *p, size_t len, UserNotice *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_UserNotice, 0|0, p, len, data, size);
}


int ASN1CALL
encode_UserNotice(unsigned char *p, size_t len, const UserNotice *data, size_t *size)
{
    return _asn1_encode(asn1_UserNotice, p, len, data, size);
}


size_t ASN1CALL
length_UserNotice(const UserNotice *data)
{
    return _asn1_length(asn1_UserNotice, data);
}


void ASN1CALL
free_UserNotice(UserNotice *data)
{
    _asn1_free_top(asn1_UserNotice, data);
}


int ASN1CALL
copy_UserNotice(const UserNotice *from, UserNotice *to)
{
    return _asn1_copy_top(asn1_UserNotice, from, to);
}


char * ASN1CALL
print_UserNotice(const UserNotice *data, int flags)
{
    return _asn1_print_top(asn1_UserNotice, flags, data);
}

/* template_members: PolicyMapping exp exp */
/* tsequence: members isstruct: 1 */
/* generate_template_type: PolicyMapping_tag__88 */
const struct asn1_template asn1_PolicyMapping_tag__88[] = {
/* 0 */ { 0, sizeof(struct PolicyMapping), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct PolicyMapping, issuerDomainPolicy), asn1_CertPolicyId },
/* 2 */ { A1_OP_TYPE , offsetof(struct PolicyMapping, subjectDomainPolicy), asn1_CertPolicyId },
/* 3 */ { A1_OP_NAME, 0, "PolicyMapping" },
/* 4 */ { A1_OP_NAME, 0, "issuerDomainPolicy" },
/* 5 */ { A1_OP_NAME, 0, "subjectDomainPolicy" }
};
/* generate_template_type: PolicyMapping */
const struct asn1_template asn1_PolicyMapping[] = {
/* 0 */ { 0, sizeof(PolicyMapping), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PolicyMapping_tag__88 }
};

int ASN1CALL
decode_PolicyMapping(const unsigned char *p, size_t len, PolicyMapping *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PolicyMapping, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PolicyMapping(unsigned char *p, size_t len, const PolicyMapping *data, size_t *size)
{
    return _asn1_encode(asn1_PolicyMapping, p, len, data, size);
}


size_t ASN1CALL
length_PolicyMapping(const PolicyMapping *data)
{
    return _asn1_length(asn1_PolicyMapping, data);
}


void ASN1CALL
free_PolicyMapping(PolicyMapping *data)
{
    _asn1_free_top(asn1_PolicyMapping, data);
}


int ASN1CALL
copy_PolicyMapping(const PolicyMapping *from, PolicyMapping *to)
{
    return _asn1_copy_top(asn1_PolicyMapping, from, to);
}


char * ASN1CALL
print_PolicyMapping(const PolicyMapping *data, int flags)
{
    return _asn1_print_top(asn1_PolicyMapping, flags, data);
}

/* template_members: PolicyMappings exp exp */
/* generate_template_type: PolicyMapping_seofTstruct_9 */
const struct asn1_template asn1_PolicyMapping_seofTstruct_9[] = {
/* 0 */ { 0, sizeof(PolicyMapping), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PolicyMapping }
};
/* generate_template_type: PolicyMappings_tag__89 */
const struct asn1_template asn1_PolicyMappings_tag__89[] = {
/* 0 */ { 0, sizeof(PolicyMapping), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PolicyMapping_seofTstruct_9 }
};
/* generate_template_type: PolicyMappings */
const struct asn1_template asn1_PolicyMappings[] = {
/* 0 */ { 0, sizeof(PolicyMappings), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PolicyMappings_tag__89 }
};

int ASN1CALL
decode_PolicyMappings(const unsigned char *p, size_t len, PolicyMappings *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PolicyMappings, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PolicyMappings(unsigned char *p, size_t len, const PolicyMappings *data, size_t *size)
{
    return _asn1_encode(asn1_PolicyMappings, p, len, data, size);
}


size_t ASN1CALL
length_PolicyMappings(const PolicyMappings *data)
{
    return _asn1_length(asn1_PolicyMappings, data);
}


void ASN1CALL
free_PolicyMappings(PolicyMappings *data)
{
    _asn1_free_top(asn1_PolicyMappings, data);
}


int ASN1CALL
copy_PolicyMappings(const PolicyMappings *from, PolicyMappings *to)
{
    return _asn1_copy_top(asn1_PolicyMappings, from, to);
}


char * ASN1CALL
print_PolicyMappings(const PolicyMappings *data, int flags)
{
    return _asn1_print_top(asn1_PolicyMappings, flags, data);
}

int ASN1CALL
add_PolicyMappings(PolicyMappings *data, const PolicyMapping *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_PolicyMapping(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_PolicyMappings(PolicyMappings *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_PolicyMapping(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: KeyIdentifier exp exp */
/* generate_template_type: KeyIdentifier_tag__90 */
/* generate_template_type: KeyIdentifier */
const struct asn1_template asn1_KeyIdentifier[] = {
/* 0 */ { 0, sizeof(KeyIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_Extension_tag_extnValue_25 }
};

int ASN1CALL
decode_KeyIdentifier(const unsigned char *p, size_t len, KeyIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KeyIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KeyIdentifier(unsigned char *p, size_t len, const KeyIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_KeyIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_KeyIdentifier(const KeyIdentifier *data)
{
    return _asn1_length(asn1_KeyIdentifier, data);
}


void ASN1CALL
free_KeyIdentifier(KeyIdentifier *data)
{
    _asn1_free_top(asn1_KeyIdentifier, data);
}


int ASN1CALL
copy_KeyIdentifier(const KeyIdentifier *from, KeyIdentifier *to)
{
    return _asn1_copy_top(asn1_KeyIdentifier, from, to);
}


char * ASN1CALL
print_KeyIdentifier(const KeyIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_KeyIdentifier, flags, data);
}

/* template_members: AuthorityKeyIdentifier exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AuthorityKeyIdentifier exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_keyIdentifier_93 */
/* generate_template_type: AuthorityKeyIdentifier_tag_keyIdentifier_92 */
/* template_members: AuthorityKeyIdentifier exp imp */
/* template_members: AuthorityKeyIdentifier exp exp */
/* generate_template_type: AuthorityKeyIdentifier_authorityCertIssuer_10 */
/* generate_template_type: AuthorityKeyIdentifier_tag_authorityCertIssuer_95 */
const struct asn1_template asn1_AuthorityKeyIdentifier_tag_authorityCertIssuer_95[] = {
/* 0 */ { 0, sizeof(struct AuthorityKeyIdentifier_authorityCertIssuer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_GeneralName_seofTstruct_5 }
};
/* generate_template_type: AuthorityKeyIdentifier_tag_authorityCertIssuer_94 */
const struct asn1_template asn1_AuthorityKeyIdentifier_tag_authorityCertIssuer_94[] = {
/* 0 */ { 0, sizeof(struct AuthorityKeyIdentifier_authorityCertIssuer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthorityKeyIdentifier_tag_authorityCertIssuer_95 }
};
/* template_members: AuthorityKeyIdentifier exp imp */
/* template_members: heim_integer exp exp */
/* generate_template_type: heim_integer_tag_authorityCertSerialNumber_97 */
/* generate_template_type: AuthorityKeyIdentifier_tag_authorityCertSerialNumber_96 */
/* generate_template_type: AuthorityKeyIdentifier_tag__91 */
const struct asn1_template asn1_AuthorityKeyIdentifier_tag__91[] = {
/* 0 */ { 0, sizeof(struct AuthorityKeyIdentifier), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct AuthorityKeyIdentifier, keyIdentifier), asn1_heim_octet_string_tag__61 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct AuthorityKeyIdentifier, authorityCertIssuer), asn1_AuthorityKeyIdentifier_tag_authorityCertIssuer_94 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct AuthorityKeyIdentifier, authorityCertSerialNumber), asn1_NoticeReference_noticeNumbers_8 },
/* 4 */ { A1_OP_NAME, 0, "AuthorityKeyIdentifier" },
/* 5 */ { A1_OP_NAME, 0, "keyIdentifier" },
/* 6 */ { A1_OP_NAME, 0, "authorityCertIssuer" },
/* 7 */ { A1_OP_NAME, 0, "authorityCertSerialNumber" }
};
/* generate_template_type: AuthorityKeyIdentifier */
const struct asn1_template asn1_AuthorityKeyIdentifier[] = {
/* 0 */ { 0, sizeof(AuthorityKeyIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthorityKeyIdentifier_tag__91 }
};

int ASN1CALL
decode_AuthorityKeyIdentifier(const unsigned char *p, size_t len, AuthorityKeyIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AuthorityKeyIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AuthorityKeyIdentifier(unsigned char *p, size_t len, const AuthorityKeyIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_AuthorityKeyIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_AuthorityKeyIdentifier(const AuthorityKeyIdentifier *data)
{
    return _asn1_length(asn1_AuthorityKeyIdentifier, data);
}


void ASN1CALL
free_AuthorityKeyIdentifier(AuthorityKeyIdentifier *data)
{
    _asn1_free_top(asn1_AuthorityKeyIdentifier, data);
}


int ASN1CALL
copy_AuthorityKeyIdentifier(const AuthorityKeyIdentifier *from, AuthorityKeyIdentifier *to)
{
    return _asn1_copy_top(asn1_AuthorityKeyIdentifier, from, to);
}


char * ASN1CALL
print_AuthorityKeyIdentifier(const AuthorityKeyIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_AuthorityKeyIdentifier, flags, data);
}

/* generate_template_type: SubjectKeyIdentifier */
const struct asn1_template asn1_SubjectKeyIdentifier[] = {
/* 0 */ { 0, sizeof(SubjectKeyIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KeyIdentifier }
};

int ASN1CALL
decode_SubjectKeyIdentifier(const unsigned char *p, size_t len, SubjectKeyIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SubjectKeyIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_SubjectKeyIdentifier(unsigned char *p, size_t len, const SubjectKeyIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_SubjectKeyIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_SubjectKeyIdentifier(const SubjectKeyIdentifier *data)
{
    return _asn1_length(asn1_SubjectKeyIdentifier, data);
}


void ASN1CALL
free_SubjectKeyIdentifier(SubjectKeyIdentifier *data)
{
    _asn1_free_top(asn1_SubjectKeyIdentifier, data);
}


int ASN1CALL
copy_SubjectKeyIdentifier(const SubjectKeyIdentifier *from, SubjectKeyIdentifier *to)
{
    return _asn1_copy_top(asn1_SubjectKeyIdentifier, from, to);
}


char * ASN1CALL
print_SubjectKeyIdentifier(const SubjectKeyIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_SubjectKeyIdentifier, flags, data);
}

/* template_members: BasicConstraints exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: BasicConstraints exp exp */
/* generate_template_type: BasicConstraints_tag_cA_99 */
/* template_members: BasicConstraints exp exp */
/* generate_template_type: BasicConstraints_tag_pathLenConstraint_100 */
const struct asn1_template asn1_BasicConstraints_tag_pathLenConstraint_100[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* generate_template_type: BasicConstraints_tag__98 */
const struct asn1_template asn1_BasicConstraints_tag__98[] = {
/* 0 */ { 0, sizeof(struct BasicConstraints), ((void *)(uintptr_t)6) },
/* 1 */ { A1_OP_DEFVAL|A1_DV_BOOLEAN, ~0, (void *)(uintptr_t)0 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean)|A1_FLAG_DEFAULT, offsetof(struct BasicConstraints, cA), asn1_Extension_tag_critical_24 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct BasicConstraints, pathLenConstraint), asn1_BasicConstraints_tag_pathLenConstraint_100 },
/* 4 */ { A1_OP_NAME, 0, "BasicConstraints" },
/* 5 */ { A1_OP_NAME, 0, "cA" },
/* 6 */ { A1_OP_NAME, 0, "pathLenConstraint" }
};
/* generate_template_type: BasicConstraints */
const struct asn1_template asn1_BasicConstraints[] = {
/* 0 */ { 0, sizeof(BasicConstraints), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_BasicConstraints_tag__98 }
};

int ASN1CALL
decode_BasicConstraints(const unsigned char *p, size_t len, BasicConstraints *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_BasicConstraints, 0|0, p, len, data, size);
}


int ASN1CALL
encode_BasicConstraints(unsigned char *p, size_t len, const BasicConstraints *data, size_t *size)
{
    return _asn1_encode(asn1_BasicConstraints, p, len, data, size);
}


size_t ASN1CALL
length_BasicConstraints(const BasicConstraints *data)
{
    return _asn1_length(asn1_BasicConstraints, data);
}


void ASN1CALL
free_BasicConstraints(BasicConstraints *data)
{
    _asn1_free_top(asn1_BasicConstraints, data);
}


int ASN1CALL
copy_BasicConstraints(const BasicConstraints *from, BasicConstraints *to)
{
    return _asn1_copy_top(asn1_BasicConstraints, from, to);
}


char * ASN1CALL
print_BasicConstraints(const BasicConstraints *data, int flags)
{
    return _asn1_print_top(asn1_BasicConstraints, flags, data);
}

/* template_members: BaseDistance exp exp */
/* generate_template_type: BaseDistance_tag__101 */
/* generate_template_type: BaseDistance */
const struct asn1_template asn1_BaseDistance[] = {
/* 0 */ { 0, sizeof(BaseDistance), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_BasicConstraints_tag_pathLenConstraint_100 }
};

int ASN1CALL
decode_BaseDistance(const unsigned char *p, size_t len, BaseDistance *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_BaseDistance, 0|0, p, len, data, size);
}


int ASN1CALL
encode_BaseDistance(unsigned char *p, size_t len, const BaseDistance *data, size_t *size)
{
    return _asn1_encode(asn1_BaseDistance, p, len, data, size);
}


size_t ASN1CALL
length_BaseDistance(const BaseDistance *data)
{
    return _asn1_length(asn1_BaseDistance, data);
}


void ASN1CALL
free_BaseDistance(BaseDistance *data)
{
    _asn1_free_top(asn1_BaseDistance, data);
}


int ASN1CALL
copy_BaseDistance(const BaseDistance *from, BaseDistance *to)
{
    return _asn1_copy_top(asn1_BaseDistance, from, to);
}


char * ASN1CALL
print_BaseDistance(const BaseDistance *data, int flags)
{
    return _asn1_print_top(asn1_BaseDistance, flags, data);
}

/* template_members: GeneralSubtree exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: GeneralSubtree exp imp */
/* generate_template_type: GeneralSubtree_tag_minimum_103 */
const struct asn1_template asn1_GeneralSubtree_tag_minimum_103[] = {
/* 0 */ { 0, sizeof(BaseDistance), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_BaseDistance }
};
/* template_members: GeneralSubtree exp imp */
/* generate_template_type: GeneralSubtree_tag_maximum_104 */
/* generate_template_type: GeneralSubtree_tag__102 */
const struct asn1_template asn1_GeneralSubtree_tag__102[] = {
/* 0 */ { 0, sizeof(struct GeneralSubtree), ((void *)(uintptr_t)8) },
/* 1 */ { A1_OP_TYPE , offsetof(struct GeneralSubtree, base), asn1_GeneralName },
/* 2 */ { A1_OP_DEFVAL|A1_DV_INTEGER32, ~0, (void *)(uintptr_t)0 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_DEFAULT|A1_FLAG_IMPLICIT, offsetof(struct GeneralSubtree, minimum), asn1_GeneralSubtree_tag_minimum_103 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct GeneralSubtree, maximum), asn1_GeneralSubtree_tag_minimum_103 },
/* 5 */ { A1_OP_NAME, 0, "GeneralSubtree" },
/* 6 */ { A1_OP_NAME, 0, "base" },
/* 7 */ { A1_OP_NAME, 0, "minimum" },
/* 8 */ { A1_OP_NAME, 0, "maximum" }
};
/* generate_template_type: GeneralSubtree */
const struct asn1_template asn1_GeneralSubtree[] = {
/* 0 */ { 0, sizeof(GeneralSubtree), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_GeneralSubtree_tag__102 }
};

int ASN1CALL
decode_GeneralSubtree(const unsigned char *p, size_t len, GeneralSubtree *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_GeneralSubtree, 0|0, p, len, data, size);
}


int ASN1CALL
encode_GeneralSubtree(unsigned char *p, size_t len, const GeneralSubtree *data, size_t *size)
{
    return _asn1_encode(asn1_GeneralSubtree, p, len, data, size);
}


size_t ASN1CALL
length_GeneralSubtree(const GeneralSubtree *data)
{
    return _asn1_length(asn1_GeneralSubtree, data);
}


void ASN1CALL
free_GeneralSubtree(GeneralSubtree *data)
{
    _asn1_free_top(asn1_GeneralSubtree, data);
}


int ASN1CALL
copy_GeneralSubtree(const GeneralSubtree *from, GeneralSubtree *to)
{
    return _asn1_copy_top(asn1_GeneralSubtree, from, to);
}


char * ASN1CALL
print_GeneralSubtree(const GeneralSubtree *data, int flags)
{
    return _asn1_print_top(asn1_GeneralSubtree, flags, data);
}

/* template_members: GeneralSubtrees exp exp */
/* generate_template_type: GeneralSubtree_seofTstruct_11 */
const struct asn1_template asn1_GeneralSubtree_seofTstruct_11[] = {
/* 0 */ { 0, sizeof(GeneralSubtree), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_GeneralSubtree }
};
/* generate_template_type: GeneralSubtrees_tag__105 */
const struct asn1_template asn1_GeneralSubtrees_tag__105[] = {
/* 0 */ { 0, sizeof(GeneralSubtree), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_GeneralSubtree_seofTstruct_11 }
};
/* generate_template_type: GeneralSubtrees */
const struct asn1_template asn1_GeneralSubtrees[] = {
/* 0 */ { 0, sizeof(GeneralSubtrees), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_GeneralSubtrees_tag__105 }
};

int ASN1CALL
decode_GeneralSubtrees(const unsigned char *p, size_t len, GeneralSubtrees *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_GeneralSubtrees, 0|0, p, len, data, size);
}


int ASN1CALL
encode_GeneralSubtrees(unsigned char *p, size_t len, const GeneralSubtrees *data, size_t *size)
{
    return _asn1_encode(asn1_GeneralSubtrees, p, len, data, size);
}


size_t ASN1CALL
length_GeneralSubtrees(const GeneralSubtrees *data)
{
    return _asn1_length(asn1_GeneralSubtrees, data);
}


void ASN1CALL
free_GeneralSubtrees(GeneralSubtrees *data)
{
    _asn1_free_top(asn1_GeneralSubtrees, data);
}


int ASN1CALL
copy_GeneralSubtrees(const GeneralSubtrees *from, GeneralSubtrees *to)
{
    return _asn1_copy_top(asn1_GeneralSubtrees, from, to);
}


char * ASN1CALL
print_GeneralSubtrees(const GeneralSubtrees *data, int flags)
{
    return _asn1_print_top(asn1_GeneralSubtrees, flags, data);
}

/* template_members: NameConstraints exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: NameConstraints exp imp */
/* template_members: NameConstraints exp exp */
/* generate_template_type: NameConstraints_permittedSubtrees_12 */
/* generate_template_type: NameConstraints_tag_permittedSubtrees_108 */
const struct asn1_template asn1_NameConstraints_tag_permittedSubtrees_108[] = {
/* 0 */ { 0, sizeof(struct NameConstraints_permittedSubtrees), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_GeneralSubtree_seofTstruct_11 }
};
/* generate_template_type: NameConstraints_tag_permittedSubtrees_107 */
const struct asn1_template asn1_NameConstraints_tag_permittedSubtrees_107[] = {
/* 0 */ { 0, sizeof(struct NameConstraints_permittedSubtrees), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NameConstraints_tag_permittedSubtrees_108 }
};
/* template_members: NameConstraints exp imp */
/* template_members: NameConstraints exp exp */
/* generate_template_type: NameConstraints_excludedSubtrees_13 */
/* generate_template_type: NameConstraints_tag_excludedSubtrees_110 */
const struct asn1_template asn1_NameConstraints_tag_excludedSubtrees_110[] = {
/* 0 */ { 0, sizeof(struct NameConstraints_excludedSubtrees), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_GeneralSubtree_seofTstruct_11 }
};
/* generate_template_type: NameConstraints_tag_excludedSubtrees_109 */
const struct asn1_template asn1_NameConstraints_tag_excludedSubtrees_109[] = {
/* 0 */ { 0, sizeof(struct NameConstraints_excludedSubtrees), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NameConstraints_tag_excludedSubtrees_110 }
};
/* generate_template_type: NameConstraints_tag__106 */
const struct asn1_template asn1_NameConstraints_tag__106[] = {
/* 0 */ { 0, sizeof(struct NameConstraints), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct NameConstraints, permittedSubtrees), asn1_NameConstraints_tag_permittedSubtrees_107 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct NameConstraints, excludedSubtrees), asn1_NameConstraints_tag_excludedSubtrees_109 },
/* 3 */ { A1_OP_NAME, 0, "NameConstraints" },
/* 4 */ { A1_OP_NAME, 0, "permittedSubtrees" },
/* 5 */ { A1_OP_NAME, 0, "excludedSubtrees" }
};
/* generate_template_type: NameConstraints */
const struct asn1_template asn1_NameConstraints[] = {
/* 0 */ { 0, sizeof(NameConstraints), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NameConstraints_tag__106 }
};

int ASN1CALL
decode_NameConstraints(const unsigned char *p, size_t len, NameConstraints *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_NameConstraints, 0|0, p, len, data, size);
}


int ASN1CALL
encode_NameConstraints(unsigned char *p, size_t len, const NameConstraints *data, size_t *size)
{
    return _asn1_encode(asn1_NameConstraints, p, len, data, size);
}


size_t ASN1CALL
length_NameConstraints(const NameConstraints *data)
{
    return _asn1_length(asn1_NameConstraints, data);
}


void ASN1CALL
free_NameConstraints(NameConstraints *data)
{
    _asn1_free_top(asn1_NameConstraints, data);
}


int ASN1CALL
copy_NameConstraints(const NameConstraints *from, NameConstraints *to)
{
    return _asn1_copy_top(asn1_NameConstraints, from, to);
}


char * ASN1CALL
print_NameConstraints(const NameConstraints *data, int flags)
{
    return _asn1_print_top(asn1_NameConstraints, flags, data);
}

/* template_members: ExtKeyUsage exp exp */
/* template_members: heim_oid exp exp */
/* generate_template_type: heim_oid_tag__112 */
/* generate_template_type: heim_oid_seofTstruct_14 */
/* generate_template_type: ExtKeyUsage_tag__111 */
const struct asn1_template asn1_ExtKeyUsage_tag__111[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_heim_oid_tag__63 }
};
/* generate_template_type: ExtKeyUsage */
const struct asn1_template asn1_ExtKeyUsage[] = {
/* 0 */ { 0, sizeof(ExtKeyUsage), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ExtKeyUsage_tag__111 }
};

int ASN1CALL
decode_ExtKeyUsage(const unsigned char *p, size_t len, ExtKeyUsage *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ExtKeyUsage, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ExtKeyUsage(unsigned char *p, size_t len, const ExtKeyUsage *data, size_t *size)
{
    return _asn1_encode(asn1_ExtKeyUsage, p, len, data, size);
}


size_t ASN1CALL
length_ExtKeyUsage(const ExtKeyUsage *data)
{
    return _asn1_length(asn1_ExtKeyUsage, data);
}


void ASN1CALL
free_ExtKeyUsage(ExtKeyUsage *data)
{
    _asn1_free_top(asn1_ExtKeyUsage, data);
}


int ASN1CALL
copy_ExtKeyUsage(const ExtKeyUsage *from, ExtKeyUsage *to)
{
    return _asn1_copy_top(asn1_ExtKeyUsage, from, to);
}


char * ASN1CALL
print_ExtKeyUsage(const ExtKeyUsage *data, int flags)
{
    return _asn1_print_top(asn1_ExtKeyUsage, flags, data);
}

/* template_members: DistributionPointReasonFlags exp exp */
static const struct asn1_template asn1_DistributionPointReasonFlags_bmember__1[] = {
/* 0 */ { 0, sizeof(DistributionPointReasonFlags), ((void *)(uintptr_t)9) },
/* 1 */ { 0, 0, "unused" },
/* 2 */ { 0, 1, "keyCompromise" },
/* 3 */ { 0, 2, "cACompromise" },
/* 4 */ { 0, 3, "affiliationChanged" },
/* 5 */ { 0, 4, "superseded" },
/* 6 */ { 0, 5, "cessationOfOperation" },
/* 7 */ { 0, 6, "certificateHold" },
/* 8 */ { 0, 7, "privilegeWithdrawn" },
/* 9 */ { 0, 8, "aACompromise" }
};
/* generate_template_type: DistributionPointReasonFlags_tag__113 */
const struct asn1_template asn1_DistributionPointReasonFlags_tag__113[] = {
/* 0 */ { 0, sizeof(DistributionPointReasonFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_DistributionPointReasonFlags_bmember__1 }
};
/* generate_template_type: DistributionPointReasonFlags */
const struct asn1_template asn1_DistributionPointReasonFlags[] = {
/* 0 */ { 0, sizeof(DistributionPointReasonFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_DistributionPointReasonFlags_tag__113 }
};

int ASN1CALL
decode_DistributionPointReasonFlags(const unsigned char *p, size_t len, DistributionPointReasonFlags *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DistributionPointReasonFlags, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DistributionPointReasonFlags(unsigned char *p, size_t len, const DistributionPointReasonFlags *data, size_t *size)
{
    return _asn1_encode(asn1_DistributionPointReasonFlags, p, len, data, size);
}


size_t ASN1CALL
length_DistributionPointReasonFlags(const DistributionPointReasonFlags *data)
{
    return _asn1_length(asn1_DistributionPointReasonFlags, data);
}


void ASN1CALL
free_DistributionPointReasonFlags(DistributionPointReasonFlags *data)
{
    _asn1_free_top(asn1_DistributionPointReasonFlags, data);
}


int ASN1CALL
copy_DistributionPointReasonFlags(const DistributionPointReasonFlags *from, DistributionPointReasonFlags *to)
{
    return _asn1_copy_top(asn1_DistributionPointReasonFlags, from, to);
}


char * ASN1CALL
print_DistributionPointReasonFlags(const DistributionPointReasonFlags *data, int flags)
{
    return _asn1_print_top(asn1_DistributionPointReasonFlags, flags, data);
}

uint64_t DistributionPointReasonFlags2int(DistributionPointReasonFlags f)
{
uint64_t r = 0;
if(f.unused) r |= (1ULL << 0);
if(f.keyCompromise) r |= (1ULL << 1);
if(f.cACompromise) r |= (1ULL << 2);
if(f.affiliationChanged) r |= (1ULL << 3);
if(f.superseded) r |= (1ULL << 4);
if(f.cessationOfOperation) r |= (1ULL << 5);
if(f.certificateHold) r |= (1ULL << 6);
if(f.privilegeWithdrawn) r |= (1ULL << 7);
if(f.aACompromise) r |= (1ULL << 8);
return r;
}

DistributionPointReasonFlags int2DistributionPointReasonFlags(uint64_t n)
{
	DistributionPointReasonFlags flags;

	memset(&flags, 0, sizeof(flags));

	flags.unused = (n >> 0) & 1;
	flags.keyCompromise = (n >> 1) & 1;
	flags.cACompromise = (n >> 2) & 1;
	flags.affiliationChanged = (n >> 3) & 1;
	flags.superseded = (n >> 4) & 1;
	flags.cessationOfOperation = (n >> 5) & 1;
	flags.certificateHold = (n >> 6) & 1;
	flags.privilegeWithdrawn = (n >> 7) & 1;
	flags.aACompromise = (n >> 8) & 1;
	return flags;
}

static struct units DistributionPointReasonFlags_units[] = {
	{"aACompromise",	1ULL << 8},
	{"privilegeWithdrawn",	1ULL << 7},
	{"certificateHold",	1ULL << 6},
	{"cessationOfOperation",	1ULL << 5},
	{"superseded",	1ULL << 4},
	{"affiliationChanged",	1ULL << 3},
	{"cACompromise",	1ULL << 2},
	{"keyCompromise",	1ULL << 1},
	{"unused",	1ULL << 0},
	{NULL,	0}
};

const struct units * asn1_DistributionPointReasonFlags_units(void){
return DistributionPointReasonFlags_units;
}

/* template_members: GeneralName imp imp */
/* template_members: GeneralName exp exp */
/* generate_template_type: GeneralName_seofTstruct_15 */
/* generate_template_type: GeneralName_tag__115 */
/* generate_template_type: GeneralName_tag__114 */
const struct asn1_template asn1_GeneralName_tag__114[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_GeneralNames_tag__65 }
};
/* generate_template_type: DistributionPointName_choice_fullName */
const struct asn1_template asn1_DistributionPointName_choice_fullName[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_IMPLICIT, 0, asn1_GeneralName_tag__114 }
};
/* template_members: RelativeDistinguishedName exp exp */
/* generate_template_type: RelativeDistinguishedName_tag__116 */
/* generate_template_type: DistributionPointName_choice_nameRelativeToCRLIssuer */
const struct asn1_template asn1_DistributionPointName_choice_nameRelativeToCRLIssuer[] = {
/* 0 */ { 0, sizeof(RelativeDistinguishedName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_RelativeDistinguishedName_seofTstruct_2 }
};
static const struct asn1_template asn1_choice_DistributionPointName_5[] = {
/* 0 */ { 0, offsetof(DistributionPointName, element), ((void *)(uintptr_t)4) },
/* 1 */ { choice_DistributionPointName_fullName, offsetof(DistributionPointName, u.fullName), asn1_DistributionPointName_choice_fullName },
/* 2 */ { choice_DistributionPointName_nameRelativeToCRLIssuer, offsetof(DistributionPointName, u.nameRelativeToCRLIssuer), asn1_DistributionPointName_choice_nameRelativeToCRLIssuer },
/* 3 */ { 0, 0, "fullName" },
/* 4 */ { 0, 0, "nameRelativeToCRLIssuer" }
};
/* generate_template_type: DistributionPointName */
const struct asn1_template asn1_DistributionPointName[] = {
/* 0 */ { 0, sizeof(DistributionPointName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_DistributionPointName_5 }
};

int ASN1CALL
decode_DistributionPointName(const unsigned char *p, size_t len, DistributionPointName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DistributionPointName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DistributionPointName(unsigned char *p, size_t len, const DistributionPointName *data, size_t *size)
{
    return _asn1_encode(asn1_DistributionPointName, p, len, data, size);
}


size_t ASN1CALL
length_DistributionPointName(const DistributionPointName *data)
{
    return _asn1_length(asn1_DistributionPointName, data);
}


void ASN1CALL
free_DistributionPointName(DistributionPointName *data)
{
    _asn1_free_top(asn1_DistributionPointName, data);
}


int ASN1CALL
copy_DistributionPointName(const DistributionPointName *from, DistributionPointName *to)
{
    return _asn1_copy_top(asn1_DistributionPointName, from, to);
}


char * ASN1CALL
print_DistributionPointName(const DistributionPointName *data, int flags)
{
    return _asn1_print_top(asn1_DistributionPointName, flags, data);
}

/* template_members: DistributionPoint exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DistributionPoint exp exp */
/* generate_template_type: DistributionPoint_tag_distributionPoint_118 */
const struct asn1_template asn1_DistributionPoint_tag_distributionPoint_118[] = {
/* 0 */ { 0, sizeof(DistributionPointName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DistributionPointName }
};
/* template_members: DistributionPoint exp imp */
/* generate_template_type: DistributionPoint_tag_reasons_119 */
const struct asn1_template asn1_DistributionPoint_tag_reasons_119[] = {
/* 0 */ { 0, sizeof(DistributionPointReasonFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DistributionPointReasonFlags }
};
/* template_members: DistributionPoint exp imp */
/* generate_template_type: DistributionPoint_tag_cRLIssuer_120 */
const struct asn1_template asn1_DistributionPoint_tag_cRLIssuer_120[] = {
/* 0 */ { 0, sizeof(GeneralNames), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_GeneralNames }
};
/* generate_template_type: DistributionPoint_tag__117 */
const struct asn1_template asn1_DistributionPoint_tag__117[] = {
/* 0 */ { 0, sizeof(struct DistributionPoint), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct DistributionPoint, distributionPoint), asn1_DistributionPoint_tag_distributionPoint_118 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct DistributionPoint, reasons), asn1_DistributionPoint_tag_reasons_119 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct DistributionPoint, cRLIssuer), asn1_DistributionPoint_tag_cRLIssuer_120 },
/* 4 */ { A1_OP_NAME, 0, "DistributionPoint" },
/* 5 */ { A1_OP_NAME, 0, "distributionPoint" },
/* 6 */ { A1_OP_NAME, 0, "reasons" },
/* 7 */ { A1_OP_NAME, 0, "cRLIssuer" }
};
/* generate_template_type: DistributionPoint */
const struct asn1_template asn1_DistributionPoint[] = {
/* 0 */ { 0, sizeof(DistributionPoint), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DistributionPoint_tag__117 }
};

int ASN1CALL
decode_DistributionPoint(const unsigned char *p, size_t len, DistributionPoint *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DistributionPoint, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DistributionPoint(unsigned char *p, size_t len, const DistributionPoint *data, size_t *size)
{
    return _asn1_encode(asn1_DistributionPoint, p, len, data, size);
}


size_t ASN1CALL
length_DistributionPoint(const DistributionPoint *data)
{
    return _asn1_length(asn1_DistributionPoint, data);
}


void ASN1CALL
free_DistributionPoint(DistributionPoint *data)
{
    _asn1_free_top(asn1_DistributionPoint, data);
}


int ASN1CALL
copy_DistributionPoint(const DistributionPoint *from, DistributionPoint *to)
{
    return _asn1_copy_top(asn1_DistributionPoint, from, to);
}


char * ASN1CALL
print_DistributionPoint(const DistributionPoint *data, int flags)
{
    return _asn1_print_top(asn1_DistributionPoint, flags, data);
}

/* template_members: CRLDistributionPoints exp exp */
/* generate_template_type: DistributionPoint_seofTstruct_16 */
const struct asn1_template asn1_DistributionPoint_seofTstruct_16[] = {
/* 0 */ { 0, sizeof(DistributionPoint), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DistributionPoint }
};
/* generate_template_type: CRLDistributionPoints_tag__121 */
const struct asn1_template asn1_CRLDistributionPoints_tag__121[] = {
/* 0 */ { 0, sizeof(DistributionPoint), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_DistributionPoint_seofTstruct_16 }
};
/* generate_template_type: CRLDistributionPoints */
const struct asn1_template asn1_CRLDistributionPoints[] = {
/* 0 */ { 0, sizeof(CRLDistributionPoints), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CRLDistributionPoints_tag__121 }
};

int ASN1CALL
decode_CRLDistributionPoints(const unsigned char *p, size_t len, CRLDistributionPoints *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CRLDistributionPoints, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CRLDistributionPoints(unsigned char *p, size_t len, const CRLDistributionPoints *data, size_t *size)
{
    return _asn1_encode(asn1_CRLDistributionPoints, p, len, data, size);
}


size_t ASN1CALL
length_CRLDistributionPoints(const CRLDistributionPoints *data)
{
    return _asn1_length(asn1_CRLDistributionPoints, data);
}


void ASN1CALL
free_CRLDistributionPoints(CRLDistributionPoints *data)
{
    _asn1_free_top(asn1_CRLDistributionPoints, data);
}


int ASN1CALL
copy_CRLDistributionPoints(const CRLDistributionPoints *from, CRLDistributionPoints *to)
{
    return _asn1_copy_top(asn1_CRLDistributionPoints, from, to);
}


char * ASN1CALL
print_CRLDistributionPoints(const CRLDistributionPoints *data, int flags)
{
    return _asn1_print_top(asn1_CRLDistributionPoints, flags, data);
}

int ASN1CALL
add_CRLDistributionPoints(CRLDistributionPoints *data, const DistributionPoint *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_DistributionPoint(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_CRLDistributionPoints(CRLDistributionPoints *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_DistributionPoint(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: DSASigValue exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DSASigValue exp exp */
/* generate_template_type: DSASigValue_tag_r_123 */
/* template_members: DSASigValue exp exp */
/* generate_template_type: DSASigValue_tag_s_124 */
/* generate_template_type: DSASigValue_tag__122 */
const struct asn1_template asn1_DSASigValue_tag__122[] = {
/* 0 */ { 0, sizeof(struct DSASigValue), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DSASigValue, r), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DSASigValue, s), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_OP_NAME, 0, "DSASigValue" },
/* 4 */ { A1_OP_NAME, 0, "r" },
/* 5 */ { A1_OP_NAME, 0, "s" }
};
/* generate_template_type: DSASigValue */
const struct asn1_template asn1_DSASigValue[] = {
/* 0 */ { 0, sizeof(DSASigValue), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DSASigValue_tag__122 }
};

int ASN1CALL
decode_DSASigValue(const unsigned char *p, size_t len, DSASigValue *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DSASigValue, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DSASigValue(unsigned char *p, size_t len, const DSASigValue *data, size_t *size)
{
    return _asn1_encode(asn1_DSASigValue, p, len, data, size);
}


size_t ASN1CALL
length_DSASigValue(const DSASigValue *data)
{
    return _asn1_length(asn1_DSASigValue, data);
}


void ASN1CALL
free_DSASigValue(DSASigValue *data)
{
    _asn1_free_top(asn1_DSASigValue, data);
}


int ASN1CALL
copy_DSASigValue(const DSASigValue *from, DSASigValue *to)
{
    return _asn1_copy_top(asn1_DSASigValue, from, to);
}


char * ASN1CALL
print_DSASigValue(const DSASigValue *data, int flags)
{
    return _asn1_print_top(asn1_DSASigValue, flags, data);
}

/* template_members: DSAPublicKey exp exp */
/* generate_template_type: DSAPublicKey_tag__125 */
/* generate_template_type: DSAPublicKey */
const struct asn1_template asn1_DSAPublicKey[] = {
/* 0 */ { 0, sizeof(DSAPublicKey), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_CertificateSerialNumber_tag__15 }
};

int ASN1CALL
decode_DSAPublicKey(const unsigned char *p, size_t len, DSAPublicKey *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DSAPublicKey, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DSAPublicKey(unsigned char *p, size_t len, const DSAPublicKey *data, size_t *size)
{
    return _asn1_encode(asn1_DSAPublicKey, p, len, data, size);
}


size_t ASN1CALL
length_DSAPublicKey(const DSAPublicKey *data)
{
    return _asn1_length(asn1_DSAPublicKey, data);
}


void ASN1CALL
free_DSAPublicKey(DSAPublicKey *data)
{
    _asn1_free_top(asn1_DSAPublicKey, data);
}


int ASN1CALL
copy_DSAPublicKey(const DSAPublicKey *from, DSAPublicKey *to)
{
    return _asn1_copy_top(asn1_DSAPublicKey, from, to);
}


char * ASN1CALL
print_DSAPublicKey(const DSAPublicKey *data, int flags)
{
    return _asn1_print_top(asn1_DSAPublicKey, flags, data);
}

/* template_members: DSAParams exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DSAParams exp exp */
/* generate_template_type: DSAParams_tag_p_127 */
/* template_members: DSAParams exp exp */
/* generate_template_type: DSAParams_tag_q_128 */
/* template_members: DSAParams exp exp */
/* generate_template_type: DSAParams_tag_g_129 */
/* generate_template_type: DSAParams_tag__126 */
const struct asn1_template asn1_DSAParams_tag__126[] = {
/* 0 */ { 0, sizeof(struct DSAParams), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DSAParams, p), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DSAParams, q), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DSAParams, g), asn1_CertificateSerialNumber_tag__15 },
/* 4 */ { A1_OP_NAME, 0, "DSAParams" },
/* 5 */ { A1_OP_NAME, 0, "p" },
/* 6 */ { A1_OP_NAME, 0, "q" },
/* 7 */ { A1_OP_NAME, 0, "g" }
};
/* generate_template_type: DSAParams */
const struct asn1_template asn1_DSAParams[] = {
/* 0 */ { 0, sizeof(DSAParams), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DSAParams_tag__126 }
};

int ASN1CALL
decode_DSAParams(const unsigned char *p, size_t len, DSAParams *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DSAParams, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DSAParams(unsigned char *p, size_t len, const DSAParams *data, size_t *size)
{
    return _asn1_encode(asn1_DSAParams, p, len, data, size);
}


size_t ASN1CALL
length_DSAParams(const DSAParams *data)
{
    return _asn1_length(asn1_DSAParams, data);
}


void ASN1CALL
free_DSAParams(DSAParams *data)
{
    _asn1_free_top(asn1_DSAParams, data);
}


int ASN1CALL
copy_DSAParams(const DSAParams *from, DSAParams *to)
{
    return _asn1_copy_top(asn1_DSAParams, from, to);
}


char * ASN1CALL
print_DSAParams(const DSAParams *data, int flags)
{
    return _asn1_print_top(asn1_DSAParams, flags, data);
}

/* template_members: ECPoint exp exp */
/* generate_template_type: ECPoint_tag__130 */
/* generate_template_type: ECPoint */
const struct asn1_template asn1_ECPoint[] = {
/* 0 */ { 0, sizeof(ECPoint), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_Extension_tag_extnValue_25 }
};

int ASN1CALL
decode_ECPoint(const unsigned char *p, size_t len, ECPoint *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ECPoint, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ECPoint(unsigned char *p, size_t len, const ECPoint *data, size_t *size)
{
    return _asn1_encode(asn1_ECPoint, p, len, data, size);
}


size_t ASN1CALL
length_ECPoint(const ECPoint *data)
{
    return _asn1_length(asn1_ECPoint, data);
}


void ASN1CALL
free_ECPoint(ECPoint *data)
{
    _asn1_free_top(asn1_ECPoint, data);
}


int ASN1CALL
copy_ECPoint(const ECPoint *from, ECPoint *to)
{
    return _asn1_copy_top(asn1_ECPoint, from, to);
}


char * ASN1CALL
print_ECPoint(const ECPoint *data, int flags)
{
    return _asn1_print_top(asn1_ECPoint, flags, data);
}

/* template_members: heim_oid exp exp */
/* generate_template_type: heim_oid_tag__131 */
/* generate_template_type: ECParameters_choice_namedCurve */
static const struct asn1_template asn1_choice_ECParameters_6[] = {
/* 0 */ { 0, offsetof(ECParameters, element), ((void *)(uintptr_t)2) },
/* 1 */ { choice_ECParameters_namedCurve, offsetof(ECParameters, u.namedCurve), asn1_heim_oid_tag__63 },
/* 2 */ { 0, 0, "namedCurve" }
};
/* generate_template_type: ECParameters */
const struct asn1_template asn1_ECParameters[] = {
/* 0 */ { 0, sizeof(ECParameters), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_ECParameters_6 }
};

int ASN1CALL
decode_ECParameters(const unsigned char *p, size_t len, ECParameters *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ECParameters, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ECParameters(unsigned char *p, size_t len, const ECParameters *data, size_t *size)
{
    return _asn1_encode(asn1_ECParameters, p, len, data, size);
}


size_t ASN1CALL
length_ECParameters(const ECParameters *data)
{
    return _asn1_length(asn1_ECParameters, data);
}


void ASN1CALL
free_ECParameters(ECParameters *data)
{
    _asn1_free_top(asn1_ECParameters, data);
}


int ASN1CALL
copy_ECParameters(const ECParameters *from, ECParameters *to)
{
    return _asn1_copy_top(asn1_ECParameters, from, to);
}


char * ASN1CALL
print_ECParameters(const ECParameters *data, int flags)
{
    return _asn1_print_top(asn1_ECParameters, flags, data);
}

/* template_members: ECDSA_Sig_Value exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: ECDSA_Sig_Value exp exp */
/* generate_template_type: ECDSA_Sig_Value_tag_r_133 */
/* template_members: ECDSA_Sig_Value exp exp */
/* generate_template_type: ECDSA_Sig_Value_tag_s_134 */
/* generate_template_type: ECDSA_Sig_Value_tag__132 */
const struct asn1_template asn1_ECDSA_Sig_Value_tag__132[] = {
/* 0 */ { 0, sizeof(struct ECDSA_Sig_Value), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct ECDSA_Sig_Value, r), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct ECDSA_Sig_Value, s), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_OP_NAME, 0, "ECDSA_Sig_Value" },
/* 4 */ { A1_OP_NAME, 0, "r" },
/* 5 */ { A1_OP_NAME, 0, "s" }
};
/* generate_template_type: ECDSA_Sig_Value */
const struct asn1_template asn1_ECDSA_Sig_Value[] = {
/* 0 */ { 0, sizeof(ECDSA_Sig_Value), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ECDSA_Sig_Value_tag__132 }
};

int ASN1CALL
decode_ECDSA_Sig_Value(const unsigned char *p, size_t len, ECDSA_Sig_Value *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ECDSA_Sig_Value, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ECDSA_Sig_Value(unsigned char *p, size_t len, const ECDSA_Sig_Value *data, size_t *size)
{
    return _asn1_encode(asn1_ECDSA_Sig_Value, p, len, data, size);
}


size_t ASN1CALL
length_ECDSA_Sig_Value(const ECDSA_Sig_Value *data)
{
    return _asn1_length(asn1_ECDSA_Sig_Value, data);
}


void ASN1CALL
free_ECDSA_Sig_Value(ECDSA_Sig_Value *data)
{
    _asn1_free_top(asn1_ECDSA_Sig_Value, data);
}


int ASN1CALL
copy_ECDSA_Sig_Value(const ECDSA_Sig_Value *from, ECDSA_Sig_Value *to)
{
    return _asn1_copy_top(asn1_ECDSA_Sig_Value, from, to);
}


char * ASN1CALL
print_ECDSA_Sig_Value(const ECDSA_Sig_Value *data, int flags)
{
    return _asn1_print_top(asn1_ECDSA_Sig_Value, flags, data);
}

/* template_members: RSAPublicKey exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: RSAPublicKey exp exp */
/* generate_template_type: RSAPublicKey_tag_modulus_136 */
/* template_members: RSAPublicKey exp exp */
/* generate_template_type: RSAPublicKey_tag_publicExponent_137 */
/* generate_template_type: RSAPublicKey_tag__135 */
const struct asn1_template asn1_RSAPublicKey_tag__135[] = {
/* 0 */ { 0, sizeof(struct RSAPublicKey), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPublicKey, modulus), asn1_CertificateSerialNumber_tag__15 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPublicKey, publicExponent), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_OP_NAME, 0, "RSAPublicKey" },
/* 4 */ { A1_OP_NAME, 0, "modulus" },
/* 5 */ { A1_OP_NAME, 0, "publicExponent" }
};
/* generate_template_type: RSAPublicKey */
const struct asn1_template asn1_RSAPublicKey[] = {
/* 0 */ { 0, sizeof(RSAPublicKey), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_RSAPublicKey_tag__135 }
};

int ASN1CALL
decode_RSAPublicKey(const unsigned char *p, size_t len, RSAPublicKey *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_RSAPublicKey, 0|0, p, len, data, size);
}


int ASN1CALL
encode_RSAPublicKey(unsigned char *p, size_t len, const RSAPublicKey *data, size_t *size)
{
    return _asn1_encode(asn1_RSAPublicKey, p, len, data, size);
}


size_t ASN1CALL
length_RSAPublicKey(const RSAPublicKey *data)
{
    return _asn1_length(asn1_RSAPublicKey, data);
}


void ASN1CALL
free_RSAPublicKey(RSAPublicKey *data)
{
    _asn1_free_top(asn1_RSAPublicKey, data);
}


int ASN1CALL
copy_RSAPublicKey(const RSAPublicKey *from, RSAPublicKey *to)
{
    return _asn1_copy_top(asn1_RSAPublicKey, from, to);
}


char * ASN1CALL
print_RSAPublicKey(const RSAPublicKey *data, int flags)
{
    return _asn1_print_top(asn1_RSAPublicKey, flags, data);
}

/* template_members: RSAPrivateKey exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: RSAPrivateKey exp exp */
/* generate_template_type: RSAPrivateKey_tag_version_139 */
/* template_members: RSAPrivateKey exp exp */
/* generate_template_type: RSAPrivateKey_tag_modulus_140 */
/* template_members: RSAPrivateKey exp exp */
/* generate_template_type: RSAPrivateKey_tag_publicExponent_141 */
/* template_members: RSAPrivateKey exp exp */
/* generate_template_type: RSAPrivateKey_tag_privateExponent_142 */
/* template_members: RSAPrivateKey exp exp */
/* generate_template_type: RSAPrivateKey_tag_prime1_143 */
/* template_members: RSAPrivateKey exp exp */
/* generate_template_type: RSAPrivateKey_tag_prime2_144 */
/* template_members: RSAPrivateKey exp exp */
/* generate_template_type: RSAPrivateKey_tag_exponent1_145 */
/* template_members: RSAPrivateKey exp exp */
/* generate_template_type: RSAPrivateKey_tag_exponent2_146 */
/* template_members: RSAPrivateKey exp exp */
/* generate_template_type: RSAPrivateKey_tag_coefficient_147 */
/* generate_template_type: RSAPrivateKey_tag__138 */
const struct asn1_template asn1_RSAPrivateKey_tag__138[] = {
/* 0 */ { 0, sizeof(struct RSAPrivateKey), ((void *)(uintptr_t)19) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, version), asn1_BasicConstraints_tag_pathLenConstraint_100 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, modulus), asn1_CertificateSerialNumber_tag__15 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, publicExponent), asn1_CertificateSerialNumber_tag__15 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, privateExponent), asn1_CertificateSerialNumber_tag__15 },
/* 5 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, prime1), asn1_CertificateSerialNumber_tag__15 },
/* 6 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, prime2), asn1_CertificateSerialNumber_tag__15 },
/* 7 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, exponent1), asn1_CertificateSerialNumber_tag__15 },
/* 8 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, exponent2), asn1_CertificateSerialNumber_tag__15 },
/* 9 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct RSAPrivateKey, coefficient), asn1_CertificateSerialNumber_tag__15 },
/* 10 */ { A1_OP_NAME, 0, "RSAPrivateKey" },
/* 11 */ { A1_OP_NAME, 0, "version" },
/* 12 */ { A1_OP_NAME, 0, "modulus" },
/* 13 */ { A1_OP_NAME, 0, "publicExponent" },
/* 14 */ { A1_OP_NAME, 0, "privateExponent" },
/* 15 */ { A1_OP_NAME, 0, "prime1" },
/* 16 */ { A1_OP_NAME, 0, "prime2" },
/* 17 */ { A1_OP_NAME, 0, "exponent1" },
/* 18 */ { A1_OP_NAME, 0, "exponent2" },
/* 19 */ { A1_OP_NAME, 0, "coefficient" }
};
/* generate_template_type: RSAPrivateKey */
const struct asn1_template asn1_RSAPrivateKey[] = {
/* 0 */ { 0, sizeof(RSAPrivateKey), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_RSAPrivateKey_tag__138 }
};

int ASN1CALL
decode_RSAPrivateKey(const unsigned char *p, size_t len, RSAPrivateKey *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_RSAPrivateKey, 0|0, p, len, data, size);
}


int ASN1CALL
encode_RSAPrivateKey(unsigned char *p, size_t len, const RSAPrivateKey *data, size_t *size)
{
    return _asn1_encode(asn1_RSAPrivateKey, p, len, data, size);
}


size_t ASN1CALL
length_RSAPrivateKey(const RSAPrivateKey *data)
{
    return _asn1_length(asn1_RSAPrivateKey, data);
}


void ASN1CALL
free_RSAPrivateKey(RSAPrivateKey *data)
{
    _asn1_free_top(asn1_RSAPrivateKey, data);
}


int ASN1CALL
copy_RSAPrivateKey(const RSAPrivateKey *from, RSAPrivateKey *to)
{
    return _asn1_copy_top(asn1_RSAPrivateKey, from, to);
}


char * ASN1CALL
print_RSAPrivateKey(const RSAPrivateKey *data, int flags)
{
    return _asn1_print_top(asn1_RSAPrivateKey, flags, data);
}

/* template_members: DigestInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DigestInfo exp exp */
/* generate_template_type: DigestInfo_tag_digest_149 */
/* generate_template_type: DigestInfo_tag__148 */
const struct asn1_template asn1_DigestInfo_tag__148[] = {
/* 0 */ { 0, sizeof(struct DigestInfo), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct DigestInfo, digestAlgorithm), asn1_AlgorithmIdentifier },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct DigestInfo, digest), asn1_Extension_tag_extnValue_25 },
/* 3 */ { A1_OP_NAME, 0, "DigestInfo" },
/* 4 */ { A1_OP_NAME, 0, "digestAlgorithm" },
/* 5 */ { A1_OP_NAME, 0, "digest" }
};
/* generate_template_type: DigestInfo */
const struct asn1_template asn1_DigestInfo[] = {
/* 0 */ { 0, sizeof(DigestInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestInfo_tag__148 }
};

int ASN1CALL
decode_DigestInfo(const unsigned char *p, size_t len, DigestInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DigestInfo(unsigned char *p, size_t len, const DigestInfo *data, size_t *size)
{
    return _asn1_encode(asn1_DigestInfo, p, len, data, size);
}


size_t ASN1CALL
length_DigestInfo(const DigestInfo *data)
{
    return _asn1_length(asn1_DigestInfo, data);
}


void ASN1CALL
free_DigestInfo(DigestInfo *data)
{
    _asn1_free_top(asn1_DigestInfo, data);
}


int ASN1CALL
copy_DigestInfo(const DigestInfo *from, DigestInfo *to)
{
    return _asn1_copy_top(asn1_DigestInfo, from, to);
}


char * ASN1CALL
print_DigestInfo(const DigestInfo *data, int flags)
{
    return _asn1_print_top(asn1_DigestInfo, flags, data);
}

/* template_members: TBSCRLCertList exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: TBSCRLCertList exp exp */
/* template_members: TBSCRLCertList_revokedCertificates_val exp exp */
/* tsequence: members isstruct: 1 */
/* generate_template_type: TBSCRLCertList_revokedCertificates_val_tag__152 */
const struct asn1_template asn1_TBSCRLCertList_revokedCertificates_val_tag__152[] = {
/* 0 */ { 0, sizeof(struct TBSCRLCertList_revokedCertificates_val), ((void *)(uintptr_t)7) },
/* 1 */ { A1_OP_TYPE , offsetof(struct TBSCRLCertList_revokedCertificates_val, userCertificate), asn1_CertificateSerialNumber },
/* 2 */ { A1_OP_TYPE , offsetof(struct TBSCRLCertList_revokedCertificates_val, revocationDate), asn1_Time },
/* 3 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct TBSCRLCertList_revokedCertificates_val, crlEntryExtensions), asn1_Extensions },
/* 4 */ { A1_OP_NAME, 0, "TBSCRLCertList_revokedCertificates_val" },
/* 5 */ { A1_OP_NAME, 0, "userCertificate" },
/* 6 */ { A1_OP_NAME, 0, "revocationDate" },
/* 7 */ { A1_OP_NAME, 0, "crlEntryExtensions" }
};
/* generate_template_type: TBSCRLCertList_seofTstruct_17 */
const struct asn1_template asn1_TBSCRLCertList_seofTstruct_17[] = {
/* 0 */ { 0, sizeof(struct TBSCRLCertList_revokedCertificates_val), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TBSCRLCertList_revokedCertificates_val_tag__152 }
};
/* generate_template_type: TBSCRLCertList_tag_revokedCertificates_151 */
const struct asn1_template asn1_TBSCRLCertList_tag_revokedCertificates_151[] = {
/* 0 */ { 0, sizeof(struct TBSCRLCertList_revokedCertificates), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_TBSCRLCertList_seofTstruct_17 }
};
/* template_members: TBSCRLCertList exp exp */
/* generate_template_type: TBSCRLCertList_tag_crlExtensions_153 */
/* generate_template_type: TBSCRLCertList_tag__150 */
const struct asn1_template asn1_TBSCRLCertList_tag__150[] = {
/* 0 */ { 0, sizeof(struct TBSCRLCertList), ((void *)(uintptr_t)15) },
/* 1 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct TBSCRLCertList, version), asn1_Version },
/* 2 */ { A1_OP_TYPE , offsetof(struct TBSCRLCertList, signature), asn1_AlgorithmIdentifier },
/* 3 */ { A1_OP_TYPE , offsetof(struct TBSCRLCertList, issuer), asn1_Name },
/* 4 */ { A1_OP_TYPE , offsetof(struct TBSCRLCertList, thisUpdate), asn1_Time },
/* 5 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct TBSCRLCertList, nextUpdate), asn1_Time },
/* 6 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_OPTIONAL, offsetof(struct TBSCRLCertList, revokedCertificates), asn1_TBSCRLCertList_tag_revokedCertificates_151 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct TBSCRLCertList, crlExtensions), asn1_TBSCertificate_tag_extensions_33 },
/* 8 */ { A1_OP_NAME, 0, "TBSCRLCertList" },
/* 9 */ { A1_OP_NAME, 0, "version" },
/* 10 */ { A1_OP_NAME, 0, "signature" },
/* 11 */ { A1_OP_NAME, 0, "issuer" },
/* 12 */ { A1_OP_NAME, 0, "thisUpdate" },
/* 13 */ { A1_OP_NAME, 0, "nextUpdate" },
/* 14 */ { A1_OP_NAME, 0, "revokedCertificates" },
/* 15 */ { A1_OP_NAME, 0, "crlExtensions" }
};
/* generate_template_type: TBSCRLCertList */
const struct asn1_template asn1_TBSCRLCertList[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(TBSCRLCertList), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TBSCRLCertList_tag__150 }
};

int ASN1CALL
decode_TBSCRLCertList(const unsigned char *p, size_t len, TBSCRLCertList *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TBSCRLCertList, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TBSCRLCertList(unsigned char *p, size_t len, const TBSCRLCertList *data, size_t *size)
{
    return _asn1_encode(asn1_TBSCRLCertList, p, len, data, size);
}


size_t ASN1CALL
length_TBSCRLCertList(const TBSCRLCertList *data)
{
    return _asn1_length(asn1_TBSCRLCertList, data);
}


void ASN1CALL
free_TBSCRLCertList(TBSCRLCertList *data)
{
    _asn1_free_top(asn1_TBSCRLCertList, data);
}


int ASN1CALL
copy_TBSCRLCertList(const TBSCRLCertList *from, TBSCRLCertList *to)
{
    return _asn1_copy_top(asn1_TBSCRLCertList, from, to);
}


char * ASN1CALL
print_TBSCRLCertList(const TBSCRLCertList *data, int flags)
{
    return _asn1_print_top(asn1_TBSCRLCertList, flags, data);
}

/* template_members: CRLCertificateList exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: CRLCertificateList exp exp */
/* generate_template_type: CRLCertificateList_tag_signatureValue_155 */
const struct asn1_template asn1_CRLCertificateList_tag_signatureValue_155[] = {
/* 0 */ { 0, sizeof(CRLCertificateList), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: CRLCertificateList_tag__154 */
const struct asn1_template asn1_CRLCertificateList_tag__154[] = {
/* 0 */ { 0, sizeof(struct CRLCertificateList), ((void *)(uintptr_t)7) },
/* 1 */ { A1_OP_TYPE , offsetof(struct CRLCertificateList, tbsCertList), asn1_TBSCRLCertList },
/* 2 */ { A1_OP_TYPE , offsetof(struct CRLCertificateList, signatureAlgorithm), asn1_AlgorithmIdentifier },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct CRLCertificateList, signatureValue), asn1_CRLCertificateList_tag_signatureValue_155 },
/* 4 */ { A1_OP_NAME, 0, "CRLCertificateList" },
/* 5 */ { A1_OP_NAME, 0, "tbsCertList" },
/* 6 */ { A1_OP_NAME, 0, "signatureAlgorithm" },
/* 7 */ { A1_OP_NAME, 0, "signatureValue" }
};
/* generate_template_type: CRLCertificateList */
const struct asn1_template asn1_CRLCertificateList[] = {
/* 0 */ { 0, sizeof(CRLCertificateList), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CRLCertificateList_tag__154 }
};

int ASN1CALL
decode_CRLCertificateList(const unsigned char *p, size_t len, CRLCertificateList *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CRLCertificateList, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CRLCertificateList(unsigned char *p, size_t len, const CRLCertificateList *data, size_t *size)
{
    return _asn1_encode(asn1_CRLCertificateList, p, len, data, size);
}


size_t ASN1CALL
length_CRLCertificateList(const CRLCertificateList *data)
{
    return _asn1_length(asn1_CRLCertificateList, data);
}


void ASN1CALL
free_CRLCertificateList(CRLCertificateList *data)
{
    _asn1_free_top(asn1_CRLCertificateList, data);
}


int ASN1CALL
copy_CRLCertificateList(const CRLCertificateList *from, CRLCertificateList *to)
{
    return _asn1_copy_top(asn1_CRLCertificateList, from, to);
}


char * ASN1CALL
print_CRLCertificateList(const CRLCertificateList *data, int flags)
{
    return _asn1_print_top(asn1_CRLCertificateList, flags, data);
}

/* template_members: CRLReason exp exp */
const struct asn1_template asn1_CRLReason_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)10) },
/* 1 */ { A1_OP_NAME, 0, "unspecified" },
/* 2 */ { A1_OP_NAME, 1, "keyCompromise" },
/* 3 */ { A1_OP_NAME, 2, "cACompromise" },
/* 4 */ { A1_OP_NAME, 3, "affiliationChanged" },
/* 5 */ { A1_OP_NAME, 4, "superseded" },
/* 6 */ { A1_OP_NAME, 5, "cessationOfOperation" },
/* 7 */ { A1_OP_NAME, 6, "certificateHold" },
/* 8 */ { A1_OP_NAME, 8, "removeFromCRL" },
/* 9 */ { A1_OP_NAME, 9, "privilegeWithdrawn" },
/* 10 */ { A1_OP_NAME, 10, "aACompromise" }
};
/* generate_template_type: CRLReason_tag__156 */
const struct asn1_template asn1_CRLReason_tag__156[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_CRLReason_enum_names }
};
/* generate_template_type: CRLReason */
const struct asn1_template asn1_CRLReason[] = {
/* 0 */ { 0, sizeof(CRLReason), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_CRLReason_tag__156 }
};

int ASN1CALL
decode_CRLReason(const unsigned char *p, size_t len, CRLReason *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CRLReason, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CRLReason(unsigned char *p, size_t len, const CRLReason *data, size_t *size)
{
    return _asn1_encode(asn1_CRLReason, p, len, data, size);
}


size_t ASN1CALL
length_CRLReason(const CRLReason *data)
{
    return _asn1_length(asn1_CRLReason, data);
}


void ASN1CALL
free_CRLReason(CRLReason *data)
{
    _asn1_free_top(asn1_CRLReason, data);
}


int ASN1CALL
copy_CRLReason(const CRLReason *from, CRLReason *to)
{
    return _asn1_copy_top(asn1_CRLReason, from, to);
}


char * ASN1CALL
print_CRLReason(const CRLReason *data, int flags)
{
    return _asn1_print_top(asn1_CRLReason, flags, data);
}

/* template_members: PKIXXmppAddr exp exp */
/* generate_template_type: PKIXXmppAddr_tag__157 */
/* generate_template_type: PKIXXmppAddr */
const struct asn1_template asn1_PKIXXmppAddr[] = {
/* 0 */ { 0, sizeof(PKIXXmppAddr), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_heim_utf8_string_tag__8 }
};

int ASN1CALL
decode_PKIXXmppAddr(const unsigned char *p, size_t len, PKIXXmppAddr *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKIXXmppAddr, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKIXXmppAddr(unsigned char *p, size_t len, const PKIXXmppAddr *data, size_t *size)
{
    return _asn1_encode(asn1_PKIXXmppAddr, p, len, data, size);
}


size_t ASN1CALL
length_PKIXXmppAddr(const PKIXXmppAddr *data)
{
    return _asn1_length(asn1_PKIXXmppAddr, data);
}


void ASN1CALL
free_PKIXXmppAddr(PKIXXmppAddr *data)
{
    _asn1_free_top(asn1_PKIXXmppAddr, data);
}


int ASN1CALL
copy_PKIXXmppAddr(const PKIXXmppAddr *from, PKIXXmppAddr *to)
{
    return _asn1_copy_top(asn1_PKIXXmppAddr, from, to);
}


char * ASN1CALL
print_PKIXXmppAddr(const PKIXXmppAddr *data, int flags)
{
    return _asn1_print_top(asn1_PKIXXmppAddr, flags, data);
}

/* template_members: SRVName exp exp */
/* generate_template_type: SRVName_tag__158 */
/* generate_template_type: SRVName */
const struct asn1_template asn1_SRVName[] = {
/* 0 */ { 0, sizeof(SRVName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_IA5String), 0, asn1_heim_ia5_string_tag__4 }
};

int ASN1CALL
decode_SRVName(const unsigned char *p, size_t len, SRVName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SRVName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_SRVName(unsigned char *p, size_t len, const SRVName *data, size_t *size)
{
    return _asn1_encode(asn1_SRVName, p, len, data, size);
}


size_t ASN1CALL
length_SRVName(const SRVName *data)
{
    return _asn1_length(asn1_SRVName, data);
}


void ASN1CALL
free_SRVName(SRVName *data)
{
    _asn1_free_top(asn1_SRVName, data);
}


int ASN1CALL
copy_SRVName(const SRVName *from, SRVName *to)
{
    return _asn1_copy_top(asn1_SRVName, from, to);
}


char * ASN1CALL
print_SRVName(const SRVName *data, int flags)
{
    return _asn1_print_top(asn1_SRVName, flags, data);
}

/* template_members: HardwareModuleName exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: HardwareModuleName exp exp */
/* generate_template_type: HardwareModuleName_tag_hwType_160 */
/* template_members: HardwareModuleName exp exp */
/* generate_template_type: HardwareModuleName_tag_hwSerialNum_161 */
/* generate_template_type: HardwareModuleName_tag__159 */
const struct asn1_template asn1_HardwareModuleName_tag__159[] = {
/* 0 */ { 0, sizeof(struct HardwareModuleName), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct HardwareModuleName, hwType), asn1_AttributeType_tag__1 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct HardwareModuleName, hwSerialNum), asn1_Extension_tag_extnValue_25 },
/* 3 */ { A1_OP_NAME, 0, "HardwareModuleName" },
/* 4 */ { A1_OP_NAME, 0, "hwType" },
/* 5 */ { A1_OP_NAME, 0, "hwSerialNum" }
};
/* generate_template_type: HardwareModuleName */
const struct asn1_template asn1_HardwareModuleName[] = {
/* 0 */ { 0, sizeof(HardwareModuleName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_HardwareModuleName_tag__159 }
};

int ASN1CALL
decode_HardwareModuleName(const unsigned char *p, size_t len, HardwareModuleName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_HardwareModuleName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_HardwareModuleName(unsigned char *p, size_t len, const HardwareModuleName *data, size_t *size)
{
    return _asn1_encode(asn1_HardwareModuleName, p, len, data, size);
}


size_t ASN1CALL
length_HardwareModuleName(const HardwareModuleName *data)
{
    return _asn1_length(asn1_HardwareModuleName, data);
}


void ASN1CALL
free_HardwareModuleName(HardwareModuleName *data)
{
    _asn1_free_top(asn1_HardwareModuleName, data);
}


int ASN1CALL
copy_HardwareModuleName(const HardwareModuleName *from, HardwareModuleName *to)
{
    return _asn1_copy_top(asn1_HardwareModuleName, from, to);
}


char * ASN1CALL
print_HardwareModuleName(const HardwareModuleName *data, int flags)
{
    return _asn1_print_top(asn1_HardwareModuleName, flags, data);
}

/* template_members: KRB5PrincipalName exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KRB5PrincipalName exp exp */
/* generate_template_type: KRB5PrincipalName_tag_realm_163 */
const struct asn1_template asn1_KRB5PrincipalName_tag_realm_163[] = {
/* 0 */ { 0, sizeof(Realm), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Realm}
};
/* template_members: KRB5PrincipalName exp exp */
/* generate_template_type: KRB5PrincipalName_tag_principalName_164 */
const struct asn1_template asn1_KRB5PrincipalName_tag_principalName_164[] = {
/* 0 */ { 0, sizeof(PrincipalName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_PrincipalName}
};
/* generate_template_type: KRB5PrincipalName_tag__162 */
const struct asn1_template asn1_KRB5PrincipalName_tag__162[] = {
/* 0 */ { 0, sizeof(struct KRB5PrincipalName), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB5PrincipalName, realm), asn1_KRB5PrincipalName_tag_realm_163 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB5PrincipalName, principalName), asn1_KRB5PrincipalName_tag_principalName_164 },
/* 3 */ { A1_OP_NAME, 0, "KRB5PrincipalName" },
/* 4 */ { A1_OP_NAME, 0, "realm" },
/* 5 */ { A1_OP_NAME, 0, "principalName" }
};
/* generate_template_type: KRB5PrincipalName */
const struct asn1_template asn1_KRB5PrincipalName[] = {
/* 0 */ { 0, sizeof(KRB5PrincipalName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB5PrincipalName_tag__162 }
};

int ASN1CALL
decode_KRB5PrincipalName(const unsigned char *p, size_t len, KRB5PrincipalName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KRB5PrincipalName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KRB5PrincipalName(unsigned char *p, size_t len, const KRB5PrincipalName *data, size_t *size)
{
    return _asn1_encode(asn1_KRB5PrincipalName, p, len, data, size);
}


size_t ASN1CALL
length_KRB5PrincipalName(const KRB5PrincipalName *data)
{
    return _asn1_length(asn1_KRB5PrincipalName, data);
}


void ASN1CALL
free_KRB5PrincipalName(KRB5PrincipalName *data)
{
    _asn1_free_top(asn1_KRB5PrincipalName, data);
}


int ASN1CALL
copy_KRB5PrincipalName(const KRB5PrincipalName *from, KRB5PrincipalName *to)
{
    return _asn1_copy_top(asn1_KRB5PrincipalName, from, to);
}


char * ASN1CALL
print_KRB5PrincipalName(const KRB5PrincipalName *data, int flags)
{
    return _asn1_print_top(asn1_KRB5PrincipalName, flags, data);
}

/* template_members: PermanentIdentifier exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PermanentIdentifier exp exp */
/* generate_template_type: PermanentIdentifier_tag_identifierValue_166 */
/* template_members: PermanentIdentifier exp exp */
/* generate_template_type: PermanentIdentifier_tag_assigner_167 */
/* generate_template_type: PermanentIdentifier_tag__165 */
const struct asn1_template asn1_PermanentIdentifier_tag__165[] = {
/* 0 */ { 0, sizeof(struct PermanentIdentifier), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String)|A1_FLAG_OPTIONAL, offsetof(struct PermanentIdentifier, identifierValue), asn1_heim_utf8_string_tag__8 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID)|A1_FLAG_OPTIONAL, offsetof(struct PermanentIdentifier, assigner), asn1_AttributeType_tag__1 },
/* 3 */ { A1_OP_NAME, 0, "PermanentIdentifier" },
/* 4 */ { A1_OP_NAME, 0, "identifierValue" },
/* 5 */ { A1_OP_NAME, 0, "assigner" }
};
/* generate_template_type: PermanentIdentifier */
const struct asn1_template asn1_PermanentIdentifier[] = {
/* 0 */ { 0, sizeof(PermanentIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PermanentIdentifier_tag__165 }
};

int ASN1CALL
decode_PermanentIdentifier(const unsigned char *p, size_t len, PermanentIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PermanentIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PermanentIdentifier(unsigned char *p, size_t len, const PermanentIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_PermanentIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_PermanentIdentifier(const PermanentIdentifier *data)
{
    return _asn1_length(asn1_PermanentIdentifier, data);
}


void ASN1CALL
free_PermanentIdentifier(PermanentIdentifier *data)
{
    _asn1_free_top(asn1_PermanentIdentifier, data);
}


int ASN1CALL
copy_PermanentIdentifier(const PermanentIdentifier *from, PermanentIdentifier *to)
{
    return _asn1_copy_top(asn1_PermanentIdentifier, from, to);
}


char * ASN1CALL
print_PermanentIdentifier(const PermanentIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_PermanentIdentifier, flags, data);
}

/* template_members: AccessDescription exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AccessDescription exp exp */
/* generate_template_type: AccessDescription_tag_accessMethod_169 */
/* generate_template_type: AccessDescription_tag__168 */
const struct asn1_template asn1_AccessDescription_tag__168[] = {
/* 0 */ { 0, sizeof(struct AccessDescription), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct AccessDescription, accessMethod), asn1_AttributeType_tag__1 },
/* 2 */ { A1_OP_TYPE , offsetof(struct AccessDescription, accessLocation), asn1_GeneralName },
/* 3 */ { A1_OP_NAME, 0, "AccessDescription" },
/* 4 */ { A1_OP_NAME, 0, "accessMethod" },
/* 5 */ { A1_OP_NAME, 0, "accessLocation" }
};
/* generate_template_type: AccessDescription */
const struct asn1_template asn1_AccessDescription[] = {
/* 0 */ { 0, sizeof(AccessDescription), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AccessDescription_tag__168 }
};

int ASN1CALL
decode_AccessDescription(const unsigned char *p, size_t len, AccessDescription *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AccessDescription, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AccessDescription(unsigned char *p, size_t len, const AccessDescription *data, size_t *size)
{
    return _asn1_encode(asn1_AccessDescription, p, len, data, size);
}


size_t ASN1CALL
length_AccessDescription(const AccessDescription *data)
{
    return _asn1_length(asn1_AccessDescription, data);
}


void ASN1CALL
free_AccessDescription(AccessDescription *data)
{
    _asn1_free_top(asn1_AccessDescription, data);
}


int ASN1CALL
copy_AccessDescription(const AccessDescription *from, AccessDescription *to)
{
    return _asn1_copy_top(asn1_AccessDescription, from, to);
}


char * ASN1CALL
print_AccessDescription(const AccessDescription *data, int flags)
{
    return _asn1_print_top(asn1_AccessDescription, flags, data);
}

/* template_members: AuthorityInfoAccessSyntax exp exp */
/* generate_template_type: AccessDescription_seofTstruct_18 */
const struct asn1_template asn1_AccessDescription_seofTstruct_18[] = {
/* 0 */ { 0, sizeof(AccessDescription), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AccessDescription }
};
/* generate_template_type: AuthorityInfoAccessSyntax_tag__170 */
const struct asn1_template asn1_AuthorityInfoAccessSyntax_tag__170[] = {
/* 0 */ { 0, sizeof(AccessDescription), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_AccessDescription_seofTstruct_18 }
};
/* generate_template_type: AuthorityInfoAccessSyntax */
const struct asn1_template asn1_AuthorityInfoAccessSyntax[] = {
/* 0 */ { 0, sizeof(AuthorityInfoAccessSyntax), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthorityInfoAccessSyntax_tag__170 }
};

int ASN1CALL
decode_AuthorityInfoAccessSyntax(const unsigned char *p, size_t len, AuthorityInfoAccessSyntax *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AuthorityInfoAccessSyntax, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AuthorityInfoAccessSyntax(unsigned char *p, size_t len, const AuthorityInfoAccessSyntax *data, size_t *size)
{
    return _asn1_encode(asn1_AuthorityInfoAccessSyntax, p, len, data, size);
}


size_t ASN1CALL
length_AuthorityInfoAccessSyntax(const AuthorityInfoAccessSyntax *data)
{
    return _asn1_length(asn1_AuthorityInfoAccessSyntax, data);
}


void ASN1CALL
free_AuthorityInfoAccessSyntax(AuthorityInfoAccessSyntax *data)
{
    _asn1_free_top(asn1_AuthorityInfoAccessSyntax, data);
}


int ASN1CALL
copy_AuthorityInfoAccessSyntax(const AuthorityInfoAccessSyntax *from, AuthorityInfoAccessSyntax *to)
{
    return _asn1_copy_top(asn1_AuthorityInfoAccessSyntax, from, to);
}


char * ASN1CALL
print_AuthorityInfoAccessSyntax(const AuthorityInfoAccessSyntax *data, int flags)
{
    return _asn1_print_top(asn1_AuthorityInfoAccessSyntax, flags, data);
}

/* template_members: SubjectInfoAccessSyntax exp exp */
/* generate_template_type: AccessDescription_seofTstruct_19 */
/* generate_template_type: SubjectInfoAccessSyntax_tag__171 */
/* generate_template_type: SubjectInfoAccessSyntax */
const struct asn1_template asn1_SubjectInfoAccessSyntax[] = {
/* 0 */ { 0, sizeof(SubjectInfoAccessSyntax), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthorityInfoAccessSyntax_tag__170 }
};

int ASN1CALL
decode_SubjectInfoAccessSyntax(const unsigned char *p, size_t len, SubjectInfoAccessSyntax *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SubjectInfoAccessSyntax, 0|0, p, len, data, size);
}


int ASN1CALL
encode_SubjectInfoAccessSyntax(unsigned char *p, size_t len, const SubjectInfoAccessSyntax *data, size_t *size)
{
    return _asn1_encode(asn1_SubjectInfoAccessSyntax, p, len, data, size);
}


size_t ASN1CALL
length_SubjectInfoAccessSyntax(const SubjectInfoAccessSyntax *data)
{
    return _asn1_length(asn1_SubjectInfoAccessSyntax, data);
}


void ASN1CALL
free_SubjectInfoAccessSyntax(SubjectInfoAccessSyntax *data)
{
    _asn1_free_top(asn1_SubjectInfoAccessSyntax, data);
}


int ASN1CALL
copy_SubjectInfoAccessSyntax(const SubjectInfoAccessSyntax *from, SubjectInfoAccessSyntax *to)
{
    return _asn1_copy_top(asn1_SubjectInfoAccessSyntax, from, to);
}


char * ASN1CALL
print_SubjectInfoAccessSyntax(const SubjectInfoAccessSyntax *data, int flags)
{
    return _asn1_print_top(asn1_SubjectInfoAccessSyntax, flags, data);
}

/* template_members: ProxyPolicy exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: ProxyPolicy exp exp */
/* generate_template_type: ProxyPolicy_tag_policyLanguage_173 */
/* template_members: ProxyPolicy exp exp */
/* generate_template_type: ProxyPolicy_tag_policy_174 */
/* generate_template_type: ProxyPolicy_tag__172 */
const struct asn1_template asn1_ProxyPolicy_tag__172[] = {
/* 0 */ { 0, sizeof(struct ProxyPolicy), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct ProxyPolicy, policyLanguage), asn1_AttributeType_tag__1 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString)|A1_FLAG_OPTIONAL, offsetof(struct ProxyPolicy, policy), asn1_Extension_tag_extnValue_25 },
/* 3 */ { A1_OP_NAME, 0, "ProxyPolicy" },
/* 4 */ { A1_OP_NAME, 0, "policyLanguage" },
/* 5 */ { A1_OP_NAME, 0, "policy" }
};
/* generate_template_type: ProxyPolicy */
const struct asn1_template asn1_ProxyPolicy[] = {
/* 0 */ { 0, sizeof(ProxyPolicy), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ProxyPolicy_tag__172 }
};

int ASN1CALL
decode_ProxyPolicy(const unsigned char *p, size_t len, ProxyPolicy *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ProxyPolicy, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ProxyPolicy(unsigned char *p, size_t len, const ProxyPolicy *data, size_t *size)
{
    return _asn1_encode(asn1_ProxyPolicy, p, len, data, size);
}


size_t ASN1CALL
length_ProxyPolicy(const ProxyPolicy *data)
{
    return _asn1_length(asn1_ProxyPolicy, data);
}


void ASN1CALL
free_ProxyPolicy(ProxyPolicy *data)
{
    _asn1_free_top(asn1_ProxyPolicy, data);
}


int ASN1CALL
copy_ProxyPolicy(const ProxyPolicy *from, ProxyPolicy *to)
{
    return _asn1_copy_top(asn1_ProxyPolicy, from, to);
}


char * ASN1CALL
print_ProxyPolicy(const ProxyPolicy *data, int flags)
{
    return _asn1_print_top(asn1_ProxyPolicy, flags, data);
}

/* template_members: ProxyCertInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: ProxyCertInfo exp exp */
/* generate_template_type: ProxyCertInfo_tag_pCPathLenConstraint_176 */
/* generate_template_type: ProxyCertInfo_tag__175 */
const struct asn1_template asn1_ProxyCertInfo_tag__175[] = {
/* 0 */ { 0, sizeof(struct ProxyCertInfo), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct ProxyCertInfo, pCPathLenConstraint), asn1_BasicConstraints_tag_pathLenConstraint_100 },
/* 2 */ { A1_OP_TYPE , offsetof(struct ProxyCertInfo, proxyPolicy), asn1_ProxyPolicy },
/* 3 */ { A1_OP_NAME, 0, "ProxyCertInfo" },
/* 4 */ { A1_OP_NAME, 0, "pCPathLenConstraint" },
/* 5 */ { A1_OP_NAME, 0, "proxyPolicy" }
};
/* generate_template_type: ProxyCertInfo */
const struct asn1_template asn1_ProxyCertInfo[] = {
/* 0 */ { 0, sizeof(ProxyCertInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ProxyCertInfo_tag__175 }
};

int ASN1CALL
decode_ProxyCertInfo(const unsigned char *p, size_t len, ProxyCertInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ProxyCertInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ProxyCertInfo(unsigned char *p, size_t len, const ProxyCertInfo *data, size_t *size)
{
    return _asn1_encode(asn1_ProxyCertInfo, p, len, data, size);
}


size_t ASN1CALL
length_ProxyCertInfo(const ProxyCertInfo *data)
{
    return _asn1_length(asn1_ProxyCertInfo, data);
}


void ASN1CALL
free_ProxyCertInfo(ProxyCertInfo *data)
{
    _asn1_free_top(asn1_ProxyCertInfo, data);
}


int ASN1CALL
copy_ProxyCertInfo(const ProxyCertInfo *from, ProxyCertInfo *to)
{
    return _asn1_copy_top(asn1_ProxyCertInfo, from, to);
}


char * ASN1CALL
print_ProxyCertInfo(const ProxyCertInfo *data, int flags)
{
    return _asn1_print_top(asn1_ProxyCertInfo, flags, data);
}

/* template_members: TPMSecurityAssertions exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: TPMSecurityAssertions exp exp */
/* generate_template_type: TPMSecurityAssertions_tag_fieldUpgradable_178 */
/* template_members: TPMSecurityAssertions exp exp */
/* generate_template_type: TPMSecurityAssertions_tag_ekGenerationType_179 */
const struct asn1_template asn1_TPMSecurityAssertions_tag_ekGenerationType_179[] = {
/* 0 */ { 0, sizeof(EKGenerationType), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EKGenerationType }
};
/* template_members: TPMSecurityAssertions exp exp */
/* generate_template_type: TPMSecurityAssertions_tag_ekGenerationLocation_180 */
const struct asn1_template asn1_TPMSecurityAssertions_tag_ekGenerationLocation_180[] = {
/* 0 */ { 0, sizeof(EKGenerationLocation), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EKGenerationLocation }
};
/* template_members: TPMSecurityAssertions exp exp */
/* generate_template_type: TPMSecurityAssertions_tag_ekCertificateGenerationLocation_181 */
const struct asn1_template asn1_TPMSecurityAssertions_tag_ekCertificateGenerationLocation_181[] = {
/* 0 */ { 0, sizeof(EKCertificateGenerationLocation), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EKCertificateGenerationLocation }
};
/* template_members: TPMSecurityAssertions exp exp */
/* generate_template_type: TPMSecurityAssertions_tag_ccInfo_182 */
const struct asn1_template asn1_TPMSecurityAssertions_tag_ccInfo_182[] = {
/* 0 */ { 0, sizeof(CommonCriteriaMeasures), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CommonCriteriaMeasures }
};
/* template_members: TPMSecurityAssertions exp exp */
/* generate_template_type: TPMSecurityAssertions_tag_fipsLevel_183 */
const struct asn1_template asn1_TPMSecurityAssertions_tag_fipsLevel_183[] = {
/* 0 */ { 0, sizeof(FIPSLevel), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_FIPSLevel }
};
/* template_members: TPMSecurityAssertions exp exp */
/* template_members: int exp exp */
/* generate_template_type: int_tag_iso9000Certified_185 */
/* generate_template_type: TPMSecurityAssertions_tag_iso9000Certified_184 */
const struct asn1_template asn1_TPMSecurityAssertions_tag_iso9000Certified_184[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean), 0, asn1_Extension_tag_critical_24 }
};
/* template_members: TPMSecurityAssertions exp exp */
/* generate_template_type: TPMSecurityAssertions_tag_iso9000Uri_186 */
/* generate_template_type: TPMSecurityAssertions_tag__177 */
const struct asn1_template asn1_TPMSecurityAssertions_tag__177[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct TPMSecurityAssertions), ((void *)(uintptr_t)23) },
/* 1 */ { A1_OP_DEFVAL|A1_DV_INTEGER32, ~0, (void *)(uintptr_t)0 },
/* 2 */ { A1_OP_TYPE |A1_FLAG_DEFAULT, offsetof(struct TPMSecurityAssertions, version), asn1_TPMVersion },
/* 3 */ { A1_OP_DEFVAL|A1_DV_BOOLEAN, ~0, (void *)(uintptr_t)0 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean)|A1_FLAG_DEFAULT, offsetof(struct TPMSecurityAssertions, fieldUpgradable), asn1_Extension_tag_critical_24 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct TPMSecurityAssertions, ekGenerationType), asn1_TPMSecurityAssertions_tag_ekGenerationType_179 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct TPMSecurityAssertions, ekGenerationLocation), asn1_TPMSecurityAssertions_tag_ekGenerationLocation_180 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct TPMSecurityAssertions, ekCertificateGenerationLocation), asn1_TPMSecurityAssertions_tag_ekCertificateGenerationLocation_181 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct TPMSecurityAssertions, ccInfo), asn1_TPMSecurityAssertions_tag_ccInfo_182 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct TPMSecurityAssertions, fipsLevel), asn1_TPMSecurityAssertions_tag_fipsLevel_183 },
/* 10 */ { A1_OP_DEFVAL|A1_DV_BOOLEAN, ~0, (void *)(uintptr_t)0 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_DEFAULT, offsetof(struct TPMSecurityAssertions, iso9000Certified), asn1_TPMSecurityAssertions_tag_iso9000Certified_184 },
/* 12 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_IA5String)|A1_FLAG_OPTIONAL, offsetof(struct TPMSecurityAssertions, iso9000Uri), asn1_heim_ia5_string_tag__4 },
/* 13 */ { A1_OP_NAME, 0, "TPMSecurityAssertions" },
/* 14 */ { A1_OP_NAME, 0, "version" },
/* 15 */ { A1_OP_NAME, 0, "fieldUpgradable" },
/* 16 */ { A1_OP_NAME, 0, "ekGenerationType" },
/* 17 */ { A1_OP_NAME, 0, "ekGenerationLocation" },
/* 18 */ { A1_OP_NAME, 0, "ekCertificateGenerationLocation" },
/* 19 */ { A1_OP_NAME, 0, "ccInfo" },
/* 20 */ { A1_OP_NAME, 0, "fipsLevel" },
/* 21 */ { A1_OP_NAME, 0, "iso9000Certified" },
/* 22 */ { A1_OP_NAME, 0, "iso9000Uri" },
/* 23 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: TPMSecurityAssertions */
const struct asn1_template asn1_TPMSecurityAssertions[] = {
/* 0 */ { 0, sizeof(TPMSecurityAssertions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TPMSecurityAssertions_tag__177 }
};

int ASN1CALL
decode_TPMSecurityAssertions(const unsigned char *p, size_t len, TPMSecurityAssertions *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TPMSecurityAssertions, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TPMSecurityAssertions(unsigned char *p, size_t len, const TPMSecurityAssertions *data, size_t *size)
{
    return _asn1_encode(asn1_TPMSecurityAssertions, p, len, data, size);
}


size_t ASN1CALL
length_TPMSecurityAssertions(const TPMSecurityAssertions *data)
{
    return _asn1_length(asn1_TPMSecurityAssertions, data);
}


void ASN1CALL
free_TPMSecurityAssertions(TPMSecurityAssertions *data)
{
    _asn1_free_top(asn1_TPMSecurityAssertions, data);
}


int ASN1CALL
copy_TPMSecurityAssertions(const TPMSecurityAssertions *from, TPMSecurityAssertions *to)
{
    return _asn1_copy_top(asn1_TPMSecurityAssertions, from, to);
}


char * ASN1CALL
print_TPMSecurityAssertions(const TPMSecurityAssertions *data, int flags)
{
    return _asn1_print_top(asn1_TPMSecurityAssertions, flags, data);
}

/* template_members: AliasUTF8String exp exp */
/* generate_template_type: AliasUTF8String_tag__187 */
/* generate_template_type: AliasUTF8String */
const struct asn1_template asn1_AliasUTF8String[] = {
/* 0 */ { 0, sizeof(AliasUTF8String), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_heim_utf8_string_tag__8 }
};

int ASN1CALL
decode_AliasUTF8String(const unsigned char *p, size_t len, AliasUTF8String *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AliasUTF8String, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AliasUTF8String(unsigned char *p, size_t len, const AliasUTF8String *data, size_t *size)
{
    return _asn1_encode(asn1_AliasUTF8String, p, len, data, size);
}


size_t ASN1CALL
length_AliasUTF8String(const AliasUTF8String *data)
{
    return _asn1_length(asn1_AliasUTF8String, data);
}


void ASN1CALL
free_AliasUTF8String(AliasUTF8String *data)
{
    _asn1_free_top(asn1_AliasUTF8String, data);
}


int ASN1CALL
copy_AliasUTF8String(const AliasUTF8String *from, AliasUTF8String *to)
{
    return _asn1_copy_top(asn1_AliasUTF8String, from, to);
}


char * ASN1CALL
print_AliasUTF8String(const AliasUTF8String *data, int flags)
{
    return _asn1_print_top(asn1_AliasUTF8String, flags, data);
}

/* template_members: TPMSpecification exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: TPMSpecification exp exp */
/* generate_template_type: TPMSpecification_tag_family_189 */
/* template_members: TPMSpecification exp exp */
/* generate_template_type: TPMSpecification_tag_level_190 */
/* template_members: TPMSpecification exp exp */
/* generate_template_type: TPMSpecification_tag_revision_191 */
/* generate_template_type: TPMSpecification_tag__188 */
const struct asn1_template asn1_TPMSpecification_tag__188[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct TPMSpecification), ((void *)(uintptr_t)8) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct TPMSpecification, family), asn1_heim_utf8_string_tag__8 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct TPMSpecification, level), asn1_BasicConstraints_tag_pathLenConstraint_100 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct TPMSpecification, revision), asn1_BasicConstraints_tag_pathLenConstraint_100 },
/* 4 */ { A1_OP_NAME, 0, "TPMSpecification" },
/* 5 */ { A1_OP_NAME, 0, "family" },
/* 6 */ { A1_OP_NAME, 0, "level" },
/* 7 */ { A1_OP_NAME, 0, "revision" },
/* 8 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: TPMSpecification */
const struct asn1_template asn1_TPMSpecification[] = {
/* 0 */ { 0, sizeof(TPMSpecification), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TPMSpecification_tag__188 }
};

int ASN1CALL
decode_TPMSpecification(const unsigned char *p, size_t len, TPMSpecification *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TPMSpecification, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TPMSpecification(unsigned char *p, size_t len, const TPMSpecification *data, size_t *size)
{
    return _asn1_encode(asn1_TPMSpecification, p, len, data, size);
}


size_t ASN1CALL
length_TPMSpecification(const TPMSpecification *data)
{
    return _asn1_length(asn1_TPMSpecification, data);
}


void ASN1CALL
free_TPMSpecification(TPMSpecification *data)
{
    _asn1_free_top(asn1_TPMSpecification, data);
}


int ASN1CALL
copy_TPMSpecification(const TPMSpecification *from, TPMSpecification *to)
{
    return _asn1_copy_top(asn1_TPMSpecification, from, to);
}


char * ASN1CALL
print_TPMSpecification(const TPMSpecification *data, int flags)
{
    return _asn1_print_top(asn1_TPMSpecification, flags, data);
}

/* template_members: EKGenerationType exp exp */
const struct asn1_template asn1_EKGenerationType_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)4) },
/* 1 */ { A1_OP_NAME, 0, "ekgt-internal" },
/* 2 */ { A1_OP_NAME, 1, "ekgt-injected" },
/* 3 */ { A1_OP_NAME, 2, "ekgt-internalRevocable" },
/* 4 */ { A1_OP_NAME, 3, "ekgt-injectedRevocable" }
};
/* generate_template_type: EKGenerationType_tag__192 */
const struct asn1_template asn1_EKGenerationType_tag__192[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_EKGenerationType_enum_names }
};
/* generate_template_type: EKGenerationType */
const struct asn1_template asn1_EKGenerationType[] = {
/* 0 */ { 0, sizeof(EKGenerationType), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_EKGenerationType_tag__192 }
};

int ASN1CALL
decode_EKGenerationType(const unsigned char *p, size_t len, EKGenerationType *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EKGenerationType, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EKGenerationType(unsigned char *p, size_t len, const EKGenerationType *data, size_t *size)
{
    return _asn1_encode(asn1_EKGenerationType, p, len, data, size);
}


size_t ASN1CALL
length_EKGenerationType(const EKGenerationType *data)
{
    return _asn1_length(asn1_EKGenerationType, data);
}


void ASN1CALL
free_EKGenerationType(EKGenerationType *data)
{
    _asn1_free_top(asn1_EKGenerationType, data);
}


int ASN1CALL
copy_EKGenerationType(const EKGenerationType *from, EKGenerationType *to)
{
    return _asn1_copy_top(asn1_EKGenerationType, from, to);
}


char * ASN1CALL
print_EKGenerationType(const EKGenerationType *data, int flags)
{
    return _asn1_print_top(asn1_EKGenerationType, flags, data);
}

/* template_members: EKGenerationLocation exp exp */
const struct asn1_template asn1_EKGenerationLocation_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)3) },
/* 1 */ { A1_OP_NAME, 0, "tpmManufacturer" },
/* 2 */ { A1_OP_NAME, 1, "platformManufacturer" },
/* 3 */ { A1_OP_NAME, 2, "ekCertSigner" }
};
/* generate_template_type: EKGenerationLocation_tag__193 */
const struct asn1_template asn1_EKGenerationLocation_tag__193[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_EKGenerationLocation_enum_names }
};
/* generate_template_type: EKGenerationLocation */
const struct asn1_template asn1_EKGenerationLocation[] = {
/* 0 */ { 0, sizeof(EKGenerationLocation), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_EKGenerationLocation_tag__193 }
};

int ASN1CALL
decode_EKGenerationLocation(const unsigned char *p, size_t len, EKGenerationLocation *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EKGenerationLocation, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EKGenerationLocation(unsigned char *p, size_t len, const EKGenerationLocation *data, size_t *size)
{
    return _asn1_encode(asn1_EKGenerationLocation, p, len, data, size);
}


size_t ASN1CALL
length_EKGenerationLocation(const EKGenerationLocation *data)
{
    return _asn1_length(asn1_EKGenerationLocation, data);
}


void ASN1CALL
free_EKGenerationLocation(EKGenerationLocation *data)
{
    _asn1_free_top(asn1_EKGenerationLocation, data);
}


int ASN1CALL
copy_EKGenerationLocation(const EKGenerationLocation *from, EKGenerationLocation *to)
{
    return _asn1_copy_top(asn1_EKGenerationLocation, from, to);
}


char * ASN1CALL
print_EKGenerationLocation(const EKGenerationLocation *data, int flags)
{
    return _asn1_print_top(asn1_EKGenerationLocation, flags, data);
}

/* generate_template_type: EKCertificateGenerationLocation */
const struct asn1_template asn1_EKCertificateGenerationLocation[] = {
/* 0 */ { 0, sizeof(EKCertificateGenerationLocation), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EKGenerationLocation }
};

int ASN1CALL
decode_EKCertificateGenerationLocation(const unsigned char *p, size_t len, EKCertificateGenerationLocation *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EKCertificateGenerationLocation, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EKCertificateGenerationLocation(unsigned char *p, size_t len, const EKCertificateGenerationLocation *data, size_t *size)
{
    return _asn1_encode(asn1_EKCertificateGenerationLocation, p, len, data, size);
}


size_t ASN1CALL
length_EKCertificateGenerationLocation(const EKCertificateGenerationLocation *data)
{
    return _asn1_length(asn1_EKCertificateGenerationLocation, data);
}


void ASN1CALL
free_EKCertificateGenerationLocation(EKCertificateGenerationLocation *data)
{
    _asn1_free_top(asn1_EKCertificateGenerationLocation, data);
}


int ASN1CALL
copy_EKCertificateGenerationLocation(const EKCertificateGenerationLocation *from, EKCertificateGenerationLocation *to)
{
    return _asn1_copy_top(asn1_EKCertificateGenerationLocation, from, to);
}


char * ASN1CALL
print_EKCertificateGenerationLocation(const EKCertificateGenerationLocation *data, int flags)
{
    return _asn1_print_top(asn1_EKCertificateGenerationLocation, flags, data);
}

/* template_members: EvaluationAssuranceLevel exp exp */
const struct asn1_template asn1_EvaluationAssuranceLevel_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)7) },
/* 1 */ { A1_OP_NAME, 1, "ealevell" },
/* 2 */ { A1_OP_NAME, 2, "ealevel2" },
/* 3 */ { A1_OP_NAME, 3, "ealevel3" },
/* 4 */ { A1_OP_NAME, 4, "ealevel4" },
/* 5 */ { A1_OP_NAME, 5, "ealevel5" },
/* 6 */ { A1_OP_NAME, 6, "ealevel6" },
/* 7 */ { A1_OP_NAME, 7, "ealevel7" }
};
/* generate_template_type: EvaluationAssuranceLevel_tag__194 */
const struct asn1_template asn1_EvaluationAssuranceLevel_tag__194[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_EvaluationAssuranceLevel_enum_names }
};
/* generate_template_type: EvaluationAssuranceLevel */
const struct asn1_template asn1_EvaluationAssuranceLevel[] = {
/* 0 */ { 0, sizeof(EvaluationAssuranceLevel), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_EvaluationAssuranceLevel_tag__194 }
};

int ASN1CALL
decode_EvaluationAssuranceLevel(const unsigned char *p, size_t len, EvaluationAssuranceLevel *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EvaluationAssuranceLevel, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EvaluationAssuranceLevel(unsigned char *p, size_t len, const EvaluationAssuranceLevel *data, size_t *size)
{
    return _asn1_encode(asn1_EvaluationAssuranceLevel, p, len, data, size);
}


size_t ASN1CALL
length_EvaluationAssuranceLevel(const EvaluationAssuranceLevel *data)
{
    return _asn1_length(asn1_EvaluationAssuranceLevel, data);
}


void ASN1CALL
free_EvaluationAssuranceLevel(EvaluationAssuranceLevel *data)
{
    _asn1_free_top(asn1_EvaluationAssuranceLevel, data);
}


int ASN1CALL
copy_EvaluationAssuranceLevel(const EvaluationAssuranceLevel *from, EvaluationAssuranceLevel *to)
{
    return _asn1_copy_top(asn1_EvaluationAssuranceLevel, from, to);
}


char * ASN1CALL
print_EvaluationAssuranceLevel(const EvaluationAssuranceLevel *data, int flags)
{
    return _asn1_print_top(asn1_EvaluationAssuranceLevel, flags, data);
}

/* template_members: SecurityLevel exp exp */
const struct asn1_template asn1_SecurityLevel_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)4) },
/* 1 */ { A1_OP_NAME, 1, "sllevel1" },
/* 2 */ { A1_OP_NAME, 2, "sllevel2" },
/* 3 */ { A1_OP_NAME, 3, "sllevel3" },
/* 4 */ { A1_OP_NAME, 4, "sllevel4" }
};
/* generate_template_type: SecurityLevel_tag__195 */
const struct asn1_template asn1_SecurityLevel_tag__195[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_SecurityLevel_enum_names }
};
/* generate_template_type: SecurityLevel */
const struct asn1_template asn1_SecurityLevel[] = {
/* 0 */ { 0, sizeof(SecurityLevel), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_SecurityLevel_tag__195 }
};

int ASN1CALL
decode_SecurityLevel(const unsigned char *p, size_t len, SecurityLevel *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SecurityLevel, 0|0, p, len, data, size);
}


int ASN1CALL
encode_SecurityLevel(unsigned char *p, size_t len, const SecurityLevel *data, size_t *size)
{
    return _asn1_encode(asn1_SecurityLevel, p, len, data, size);
}


size_t ASN1CALL
length_SecurityLevel(const SecurityLevel *data)
{
    return _asn1_length(asn1_SecurityLevel, data);
}


void ASN1CALL
free_SecurityLevel(SecurityLevel *data)
{
    _asn1_free_top(asn1_SecurityLevel, data);
}


int ASN1CALL
copy_SecurityLevel(const SecurityLevel *from, SecurityLevel *to)
{
    return _asn1_copy_top(asn1_SecurityLevel, from, to);
}


char * ASN1CALL
print_SecurityLevel(const SecurityLevel *data, int flags)
{
    return _asn1_print_top(asn1_SecurityLevel, flags, data);
}

/* template_members: StrengthOfFunction exp exp */
const struct asn1_template asn1_StrengthOfFunction_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)3) },
/* 1 */ { A1_OP_NAME, 0, "sof-basic" },
/* 2 */ { A1_OP_NAME, 1, "sof-medium" },
/* 3 */ { A1_OP_NAME, 2, "sof-high" }
};
/* generate_template_type: StrengthOfFunction_tag__196 */
const struct asn1_template asn1_StrengthOfFunction_tag__196[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_StrengthOfFunction_enum_names }
};
/* generate_template_type: StrengthOfFunction */
const struct asn1_template asn1_StrengthOfFunction[] = {
/* 0 */ { 0, sizeof(StrengthOfFunction), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_StrengthOfFunction_tag__196 }
};

int ASN1CALL
decode_StrengthOfFunction(const unsigned char *p, size_t len, StrengthOfFunction *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_StrengthOfFunction, 0|0, p, len, data, size);
}


int ASN1CALL
encode_StrengthOfFunction(unsigned char *p, size_t len, const StrengthOfFunction *data, size_t *size)
{
    return _asn1_encode(asn1_StrengthOfFunction, p, len, data, size);
}


size_t ASN1CALL
length_StrengthOfFunction(const StrengthOfFunction *data)
{
    return _asn1_length(asn1_StrengthOfFunction, data);
}


void ASN1CALL
free_StrengthOfFunction(StrengthOfFunction *data)
{
    _asn1_free_top(asn1_StrengthOfFunction, data);
}


int ASN1CALL
copy_StrengthOfFunction(const StrengthOfFunction *from, StrengthOfFunction *to)
{
    return _asn1_copy_top(asn1_StrengthOfFunction, from, to);
}


char * ASN1CALL
print_StrengthOfFunction(const StrengthOfFunction *data, int flags)
{
    return _asn1_print_top(asn1_StrengthOfFunction, flags, data);
}

/* template_members: URIReference exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: URIReference exp exp */
/* generate_template_type: URIReference_tag_uniformResourceIdentifier_198 */
/* template_members: URIReference exp exp */
/* generate_template_type: URIReference_tag_hashValue_199 */
const struct asn1_template asn1_URIReference_tag_hashValue_199[] = {
/* 0 */ { 0, sizeof(URIReference), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: URIReference_tag__197 */
const struct asn1_template asn1_URIReference_tag__197[] = {
/* 0 */ { 0, sizeof(struct URIReference), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_IA5String), offsetof(struct URIReference, uniformResourceIdentifier), asn1_heim_ia5_string_tag__4 },
/* 2 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct URIReference, hashAlgorithm), asn1_AlgorithmIdentifier },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString)|A1_FLAG_OPTIONAL, offsetof(struct URIReference, hashValue), asn1_URIReference_tag_hashValue_199 },
/* 4 */ { A1_OP_NAME, 0, "URIReference" },
/* 5 */ { A1_OP_NAME, 0, "uniformResourceIdentifier" },
/* 6 */ { A1_OP_NAME, 0, "hashAlgorithm" },
/* 7 */ { A1_OP_NAME, 0, "hashValue" }
};
/* generate_template_type: URIReference */
const struct asn1_template asn1_URIReference[] = {
/* 0 */ { 0, sizeof(URIReference), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_URIReference_tag__197 }
};

int ASN1CALL
decode_URIReference(const unsigned char *p, size_t len, URIReference *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_URIReference, 0|0, p, len, data, size);
}


int ASN1CALL
encode_URIReference(unsigned char *p, size_t len, const URIReference *data, size_t *size)
{
    return _asn1_encode(asn1_URIReference, p, len, data, size);
}


size_t ASN1CALL
length_URIReference(const URIReference *data)
{
    return _asn1_length(asn1_URIReference, data);
}


void ASN1CALL
free_URIReference(URIReference *data)
{
    _asn1_free_top(asn1_URIReference, data);
}


int ASN1CALL
copy_URIReference(const URIReference *from, URIReference *to)
{
    return _asn1_copy_top(asn1_URIReference, from, to);
}


char * ASN1CALL
print_URIReference(const URIReference *data, int flags)
{
    return _asn1_print_top(asn1_URIReference, flags, data);
}

/* template_members: EvaluationStatus exp exp */
const struct asn1_template asn1_EvaluationStatus_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)3) },
/* 1 */ { A1_OP_NAME, 0, "designedToMeet" },
/* 2 */ { A1_OP_NAME, 1, "evaluationInProgress" },
/* 3 */ { A1_OP_NAME, 2, "evaluationCompleted" }
};
/* generate_template_type: EvaluationStatus_tag__200 */
const struct asn1_template asn1_EvaluationStatus_tag__200[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_EvaluationStatus_enum_names }
};
/* generate_template_type: EvaluationStatus */
const struct asn1_template asn1_EvaluationStatus[] = {
/* 0 */ { 0, sizeof(EvaluationStatus), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_EvaluationStatus_tag__200 }
};

int ASN1CALL
decode_EvaluationStatus(const unsigned char *p, size_t len, EvaluationStatus *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EvaluationStatus, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EvaluationStatus(unsigned char *p, size_t len, const EvaluationStatus *data, size_t *size)
{
    return _asn1_encode(asn1_EvaluationStatus, p, len, data, size);
}


size_t ASN1CALL
length_EvaluationStatus(const EvaluationStatus *data)
{
    return _asn1_length(asn1_EvaluationStatus, data);
}


void ASN1CALL
free_EvaluationStatus(EvaluationStatus *data)
{
    _asn1_free_top(asn1_EvaluationStatus, data);
}


int ASN1CALL
copy_EvaluationStatus(const EvaluationStatus *from, EvaluationStatus *to)
{
    return _asn1_copy_top(asn1_EvaluationStatus, from, to);
}


char * ASN1CALL
print_EvaluationStatus(const EvaluationStatus *data, int flags)
{
    return _asn1_print_top(asn1_EvaluationStatus, flags, data);
}

/* template_members: CommonCriteriaMeasures exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: CommonCriteriaMeasures exp exp */
/* generate_template_type: CommonCriteriaMeasures_tag_version_202 */
/* template_members: CommonCriteriaMeasures exp exp */
/* generate_template_type: CommonCriteriaMeasures_tag_plus_203 */
/* template_members: CommonCriteriaMeasures exp imp */
/* generate_template_type: CommonCriteriaMeasures_tag_strengthOfFunction_204 */
const struct asn1_template asn1_CommonCriteriaMeasures_tag_strengthOfFunction_204[] = {
/* 0 */ { 0, sizeof(StrengthOfFunction), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_StrengthOfFunction }
};
/* template_members: CommonCriteriaMeasures exp imp */
/* template_members: heim_oid exp exp */
/* generate_template_type: heim_oid_tag_profileOid_206 */
/* generate_template_type: CommonCriteriaMeasures_tag_profileOid_205 */
/* template_members: CommonCriteriaMeasures exp imp */
/* generate_template_type: CommonCriteriaMeasures_tag_profileUri_207 */
const struct asn1_template asn1_CommonCriteriaMeasures_tag_profileUri_207[] = {
/* 0 */ { 0, sizeof(URIReference), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_URIReference }
};
/* template_members: CommonCriteriaMeasures exp imp */
/* template_members: heim_oid exp exp */
/* generate_template_type: heim_oid_tag_targetOid_209 */
/* generate_template_type: CommonCriteriaMeasures_tag_targetOid_208 */
/* template_members: CommonCriteriaMeasures exp imp */
/* generate_template_type: CommonCriteriaMeasures_tag_targetUri_210 */
/* generate_template_type: CommonCriteriaMeasures_tag__201 */
const struct asn1_template asn1_CommonCriteriaMeasures_tag__201[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct CommonCriteriaMeasures), ((void *)(uintptr_t)21) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_IA5String), offsetof(struct CommonCriteriaMeasures, version), asn1_heim_ia5_string_tag__4 },
/* 2 */ { A1_OP_TYPE , offsetof(struct CommonCriteriaMeasures, assurancelevel), asn1_EvaluationAssuranceLevel },
/* 3 */ { A1_OP_TYPE , offsetof(struct CommonCriteriaMeasures, evaluationStatus), asn1_EvaluationStatus },
/* 4 */ { A1_OP_DEFVAL|A1_DV_BOOLEAN, ~0, (void *)(uintptr_t)0 },
/* 5 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean)|A1_FLAG_DEFAULT, offsetof(struct CommonCriteriaMeasures, plus), asn1_Extension_tag_critical_24 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct CommonCriteriaMeasures, strengthOfFunction), asn1_CommonCriteriaMeasures_tag_strengthOfFunction_204 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct CommonCriteriaMeasures, profileOid), asn1_heim_oid_tag__63 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct CommonCriteriaMeasures, profileUri), asn1_CommonCriteriaMeasures_tag_profileUri_207 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,3)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct CommonCriteriaMeasures, targetOid), asn1_heim_oid_tag__63 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct CommonCriteriaMeasures, targetUri), asn1_CommonCriteriaMeasures_tag_profileUri_207 },
/* 11 */ { A1_OP_NAME, 0, "CommonCriteriaMeasures" },
/* 12 */ { A1_OP_NAME, 0, "version" },
/* 13 */ { A1_OP_NAME, 0, "assurancelevel" },
/* 14 */ { A1_OP_NAME, 0, "evaluationStatus" },
/* 15 */ { A1_OP_NAME, 0, "plus" },
/* 16 */ { A1_OP_NAME, 0, "strengthOfFunction" },
/* 17 */ { A1_OP_NAME, 0, "profileOid" },
/* 18 */ { A1_OP_NAME, 0, "profileUri" },
/* 19 */ { A1_OP_NAME, 0, "targetOid" },
/* 20 */ { A1_OP_NAME, 0, "targetUri" },
/* 21 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: CommonCriteriaMeasures */
const struct asn1_template asn1_CommonCriteriaMeasures[] = {
/* 0 */ { 0, sizeof(CommonCriteriaMeasures), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CommonCriteriaMeasures_tag__201 }
};

int ASN1CALL
decode_CommonCriteriaMeasures(const unsigned char *p, size_t len, CommonCriteriaMeasures *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CommonCriteriaMeasures, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CommonCriteriaMeasures(unsigned char *p, size_t len, const CommonCriteriaMeasures *data, size_t *size)
{
    return _asn1_encode(asn1_CommonCriteriaMeasures, p, len, data, size);
}


size_t ASN1CALL
length_CommonCriteriaMeasures(const CommonCriteriaMeasures *data)
{
    return _asn1_length(asn1_CommonCriteriaMeasures, data);
}


void ASN1CALL
free_CommonCriteriaMeasures(CommonCriteriaMeasures *data)
{
    _asn1_free_top(asn1_CommonCriteriaMeasures, data);
}


int ASN1CALL
copy_CommonCriteriaMeasures(const CommonCriteriaMeasures *from, CommonCriteriaMeasures *to)
{
    return _asn1_copy_top(asn1_CommonCriteriaMeasures, from, to);
}


char * ASN1CALL
print_CommonCriteriaMeasures(const CommonCriteriaMeasures *data, int flags)
{
    return _asn1_print_top(asn1_CommonCriteriaMeasures, flags, data);
}

/* template_members: FIPSLevel exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: FIPSLevel exp exp */
/* generate_template_type: FIPSLevel_tag_version_212 */
/* template_members: FIPSLevel exp exp */
/* generate_template_type: FIPSLevel_tag_plus_213 */
/* generate_template_type: FIPSLevel_tag__211 */
const struct asn1_template asn1_FIPSLevel_tag__211[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct FIPSLevel), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_IA5String), offsetof(struct FIPSLevel, version), asn1_heim_ia5_string_tag__4 },
/* 2 */ { A1_OP_TYPE , offsetof(struct FIPSLevel, level), asn1_SecurityLevel },
/* 3 */ { A1_OP_DEFVAL|A1_DV_BOOLEAN, ~0, (void *)(uintptr_t)0 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean)|A1_FLAG_DEFAULT, offsetof(struct FIPSLevel, plus), asn1_Extension_tag_critical_24 },
/* 5 */ { A1_OP_NAME, 0, "FIPSLevel" },
/* 6 */ { A1_OP_NAME, 0, "version" },
/* 7 */ { A1_OP_NAME, 0, "level" },
/* 8 */ { A1_OP_NAME, 0, "plus" },
/* 9 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: FIPSLevel */
const struct asn1_template asn1_FIPSLevel[] = {
/* 0 */ { 0, sizeof(FIPSLevel), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_FIPSLevel_tag__211 }
};

int ASN1CALL
decode_FIPSLevel(const unsigned char *p, size_t len, FIPSLevel *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_FIPSLevel, 0|0, p, len, data, size);
}


int ASN1CALL
encode_FIPSLevel(unsigned char *p, size_t len, const FIPSLevel *data, size_t *size)
{
    return _asn1_encode(asn1_FIPSLevel, p, len, data, size);
}


size_t ASN1CALL
length_FIPSLevel(const FIPSLevel *data)
{
    return _asn1_length(asn1_FIPSLevel, data);
}


void ASN1CALL
free_FIPSLevel(FIPSLevel *data)
{
    _asn1_free_top(asn1_FIPSLevel, data);
}


int ASN1CALL
copy_FIPSLevel(const FIPSLevel *from, FIPSLevel *to)
{
    return _asn1_copy_top(asn1_FIPSLevel, from, to);
}


char * ASN1CALL
print_FIPSLevel(const FIPSLevel *data, int flags)
{
    return _asn1_print_top(asn1_FIPSLevel, flags, data);
}

/* template_members: TPMVersion exp exp */
const struct asn1_template asn1_TPMVersion_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_NAME, 0, "tpm-v1" }
};
/* generate_template_type: TPMVersion_tag__214 */
const struct asn1_template asn1_TPMVersion_tag__214[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_TPMVersion_enum_names }
};
/* generate_template_type: TPMVersion */
const struct asn1_template asn1_TPMVersion[] = {
/* 0 */ { 0, sizeof(TPMVersion), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_TPMVersion_tag__214 }
};

int ASN1CALL
decode_TPMVersion(const unsigned char *p, size_t len, TPMVersion *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TPMVersion, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TPMVersion(unsigned char *p, size_t len, const TPMVersion *data, size_t *size)
{
    return _asn1_encode(asn1_TPMVersion, p, len, data, size);
}


size_t ASN1CALL
length_TPMVersion(const TPMVersion *data)
{
    return _asn1_length(asn1_TPMVersion, data);
}


void ASN1CALL
free_TPMVersion(TPMVersion *data)
{
    _asn1_free_top(asn1_TPMVersion, data);
}


int ASN1CALL
copy_TPMVersion(const TPMVersion *from, TPMVersion *to)
{
    return _asn1_copy_top(asn1_TPMVersion, from, to);
}


char * ASN1CALL
print_TPMVersion(const TPMVersion *data, int flags)
{
    return _asn1_print_top(asn1_TPMVersion, flags, data);
}

/* template_members: AliasIA5String exp exp */
/* generate_template_type: AliasIA5String_tag__215 */
/* generate_template_type: AliasIA5String */
const struct asn1_template asn1_AliasIA5String[] = {
/* 0 */ { 0, sizeof(AliasIA5String), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_heim_utf8_string_tag__8 }
};

int ASN1CALL
decode_AliasIA5String(const unsigned char *p, size_t len, AliasIA5String *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AliasIA5String, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AliasIA5String(unsigned char *p, size_t len, const AliasIA5String *data, size_t *size)
{
    return _asn1_encode(asn1_AliasIA5String, p, len, data, size);
}


size_t ASN1CALL
length_AliasIA5String(const AliasIA5String *data)
{
    return _asn1_length(asn1_AliasIA5String, data);
}


void ASN1CALL
free_AliasIA5String(AliasIA5String *data)
{
    _asn1_free_top(asn1_AliasIA5String, data);
}


int ASN1CALL
copy_AliasIA5String(const AliasIA5String *from, AliasIA5String *to)
{
    return _asn1_copy_top(asn1_AliasIA5String, from, to);
}


char * ASN1CALL
print_AliasIA5String(const AliasIA5String *data, int flags)
{
    return _asn1_print_top(asn1_AliasIA5String, flags, data);
}

/* template_members: AliasPrintableString exp exp */
/* generate_template_type: AliasPrintableString_tag__216 */
/* generate_template_type: AliasPrintableString */
const struct asn1_template asn1_AliasPrintableString[] = {
/* 0 */ { 0, sizeof(AliasPrintableString), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_PrintableString), 0, asn1_heim_printable_string_tag__6 }
};

int ASN1CALL
decode_AliasPrintableString(const unsigned char *p, size_t len, AliasPrintableString *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AliasPrintableString, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AliasPrintableString(unsigned char *p, size_t len, const AliasPrintableString *data, size_t *size)
{
    return _asn1_encode(asn1_AliasPrintableString, p, len, data, size);
}


size_t ASN1CALL
length_AliasPrintableString(const AliasPrintableString *data)
{
    return _asn1_length(asn1_AliasPrintableString, data);
}


void ASN1CALL
free_AliasPrintableString(AliasPrintableString *data)
{
    _asn1_free_top(asn1_AliasPrintableString, data);
}


int ASN1CALL
copy_AliasPrintableString(const AliasPrintableString *from, AliasPrintableString *to)
{
    return _asn1_copy_top(asn1_AliasPrintableString, from, to);
}


char * ASN1CALL
print_AliasPrintableString(const AliasPrintableString *data, int flags)
{
    return _asn1_print_top(asn1_AliasPrintableString, flags, data);
}

/* generate_template_type: X520name */
const struct asn1_template asn1_X520name[] = {
/* 0 */ { 0, sizeof(X520name), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DirectoryString }
};

int ASN1CALL
decode_X520name(const unsigned char *p, size_t len, X520name *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_X520name, 0|0, p, len, data, size);
}


int ASN1CALL
encode_X520name(unsigned char *p, size_t len, const X520name *data, size_t *size)
{
    return _asn1_encode(asn1_X520name, p, len, data, size);
}


size_t ASN1CALL
length_X520name(const X520name *data)
{
    return _asn1_length(asn1_X520name, data);
}


void ASN1CALL
free_X520name(X520name *data)
{
    _asn1_free_top(asn1_X520name, data);
}


int ASN1CALL
copy_X520name(const X520name *from, X520name *to)
{
    return _asn1_copy_top(asn1_X520name, from, to);
}


char * ASN1CALL
print_X520name(const X520name *data, int flags)
{
    return _asn1_print_top(asn1_X520name, flags, data);
}

/* generate_template_type: X520CommonName */
const struct asn1_template asn1_X520CommonName[] = {
/* 0 */ { 0, sizeof(X520CommonName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DirectoryString }
};

int ASN1CALL
decode_X520CommonName(const unsigned char *p, size_t len, X520CommonName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_X520CommonName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_X520CommonName(unsigned char *p, size_t len, const X520CommonName *data, size_t *size)
{
    return _asn1_encode(asn1_X520CommonName, p, len, data, size);
}


size_t ASN1CALL
length_X520CommonName(const X520CommonName *data)
{
    return _asn1_length(asn1_X520CommonName, data);
}


void ASN1CALL
free_X520CommonName(X520CommonName *data)
{
    _asn1_free_top(asn1_X520CommonName, data);
}


int ASN1CALL
copy_X520CommonName(const X520CommonName *from, X520CommonName *to)
{
    return _asn1_copy_top(asn1_X520CommonName, from, to);
}


char * ASN1CALL
print_X520CommonName(const X520CommonName *data, int flags)
{
    return _asn1_print_top(asn1_X520CommonName, flags, data);
}

/* generate_template_type: X520LocalityName */
const struct asn1_template asn1_X520LocalityName[] = {
/* 0 */ { 0, sizeof(X520LocalityName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DirectoryString }
};

int ASN1CALL
decode_X520LocalityName(const unsigned char *p, size_t len, X520LocalityName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_X520LocalityName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_X520LocalityName(unsigned char *p, size_t len, const X520LocalityName *data, size_t *size)
{
    return _asn1_encode(asn1_X520LocalityName, p, len, data, size);
}


size_t ASN1CALL
length_X520LocalityName(const X520LocalityName *data)
{
    return _asn1_length(asn1_X520LocalityName, data);
}


void ASN1CALL
free_X520LocalityName(X520LocalityName *data)
{
    _asn1_free_top(asn1_X520LocalityName, data);
}


int ASN1CALL
copy_X520LocalityName(const X520LocalityName *from, X520LocalityName *to)
{
    return _asn1_copy_top(asn1_X520LocalityName, from, to);
}


char * ASN1CALL
print_X520LocalityName(const X520LocalityName *data, int flags)
{
    return _asn1_print_top(asn1_X520LocalityName, flags, data);
}

/* generate_template_type: X520OrganizationName */
const struct asn1_template asn1_X520OrganizationName[] = {
/* 0 */ { 0, sizeof(X520OrganizationName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DirectoryString }
};

int ASN1CALL
decode_X520OrganizationName(const unsigned char *p, size_t len, X520OrganizationName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_X520OrganizationName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_X520OrganizationName(unsigned char *p, size_t len, const X520OrganizationName *data, size_t *size)
{
    return _asn1_encode(asn1_X520OrganizationName, p, len, data, size);
}


size_t ASN1CALL
length_X520OrganizationName(const X520OrganizationName *data)
{
    return _asn1_length(asn1_X520OrganizationName, data);
}


void ASN1CALL
free_X520OrganizationName(X520OrganizationName *data)
{
    _asn1_free_top(asn1_X520OrganizationName, data);
}


int ASN1CALL
copy_X520OrganizationName(const X520OrganizationName *from, X520OrganizationName *to)
{
    return _asn1_copy_top(asn1_X520OrganizationName, from, to);
}


char * ASN1CALL
print_X520OrganizationName(const X520OrganizationName *data, int flags)
{
    return _asn1_print_top(asn1_X520OrganizationName, flags, data);
}

/* generate_template_type: X520StateOrProvinceName */
const struct asn1_template asn1_X520StateOrProvinceName[] = {
/* 0 */ { 0, sizeof(X520StateOrProvinceName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DirectoryString }
};

int ASN1CALL
decode_X520StateOrProvinceName(const unsigned char *p, size_t len, X520StateOrProvinceName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_X520StateOrProvinceName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_X520StateOrProvinceName(unsigned char *p, size_t len, const X520StateOrProvinceName *data, size_t *size)
{
    return _asn1_encode(asn1_X520StateOrProvinceName, p, len, data, size);
}


size_t ASN1CALL
length_X520StateOrProvinceName(const X520StateOrProvinceName *data)
{
    return _asn1_length(asn1_X520StateOrProvinceName, data);
}


void ASN1CALL
free_X520StateOrProvinceName(X520StateOrProvinceName *data)
{
    _asn1_free_top(asn1_X520StateOrProvinceName, data);
}


int ASN1CALL
copy_X520StateOrProvinceName(const X520StateOrProvinceName *from, X520StateOrProvinceName *to)
{
    return _asn1_copy_top(asn1_X520StateOrProvinceName, from, to);
}


char * ASN1CALL
print_X520StateOrProvinceName(const X520StateOrProvinceName *data, int flags)
{
    return _asn1_print_top(asn1_X520StateOrProvinceName, flags, data);
}

/* generate_template_type: X520OrganizationalUnitName */
const struct asn1_template asn1_X520OrganizationalUnitName[] = {
/* 0 */ { 0, sizeof(X520OrganizationalUnitName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DirectoryString }
};

int ASN1CALL
decode_X520OrganizationalUnitName(const unsigned char *p, size_t len, X520OrganizationalUnitName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_X520OrganizationalUnitName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_X520OrganizationalUnitName(unsigned char *p, size_t len, const X520OrganizationalUnitName *data, size_t *size)
{
    return _asn1_encode(asn1_X520OrganizationalUnitName, p, len, data, size);
}


size_t ASN1CALL
length_X520OrganizationalUnitName(const X520OrganizationalUnitName *data)
{
    return _asn1_length(asn1_X520OrganizationalUnitName, data);
}


void ASN1CALL
free_X520OrganizationalUnitName(X520OrganizationalUnitName *data)
{
    _asn1_free_top(asn1_X520OrganizationalUnitName, data);
}


int ASN1CALL
copy_X520OrganizationalUnitName(const X520OrganizationalUnitName *from, X520OrganizationalUnitName *to)
{
    return _asn1_copy_top(asn1_X520OrganizationalUnitName, from, to);
}


char * ASN1CALL
print_X520OrganizationalUnitName(const X520OrganizationalUnitName *data, int flags)
{
    return _asn1_print_top(asn1_X520OrganizationalUnitName, flags, data);
}

/* template_members: SingleAttribute exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: SingleAttribute exp exp */
/* generate_template_type: SingleAttribute_tag_type_218 */
const struct asn1_template asn1_SupportedAttributes[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)22) },
/* 1 */ { A1_OP_NAME, 0, "SupportedAttributes" },
/* 2 */ { A1_OP_NAME, 0, "at-domainComponent" },
/* 3 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_domainComponent },
/* 4 */ { A1_OP_OPENTYPE, sizeof(AliasIA5String), (const void *)&asn1_AliasIA5String },
/* 5 */ { A1_OP_NAME, 0, "at-emailAddress" },
/* 6 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_emailAddress },
/* 7 */ { A1_OP_OPENTYPE, sizeof(AliasIA5String), (const void *)&asn1_AliasIA5String },
/* 8 */ { A1_OP_NAME, 0, "at-x520CommonName" },
/* 9 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_commonName },
/* 10 */ { A1_OP_OPENTYPE, sizeof(X520CommonName), (const void *)&asn1_X520CommonName },
/* 11 */ { A1_OP_NAME, 0, "at-surname" },
/* 12 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_surname },
/* 13 */ { A1_OP_OPENTYPE, sizeof(X520name), (const void *)&asn1_X520name },
/* 14 */ { A1_OP_NAME, 0, "at-x520SerialNumber" },
/* 15 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_serialNumber },
/* 16 */ { A1_OP_OPENTYPE, sizeof(AliasPrintableString), (const void *)&asn1_AliasPrintableString },
/* 17 */ { A1_OP_NAME, 0, "at-x520countryName" },
/* 18 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_countryName },
/* 19 */ { A1_OP_OPENTYPE, sizeof(AliasPrintableString), (const void *)&asn1_AliasPrintableString },
/* 20 */ { A1_OP_NAME, 0, "at-x520LocalityName" },
/* 21 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_localityName },
/* 22 */ { A1_OP_OPENTYPE, sizeof(X520LocalityName), (const void *)&asn1_X520LocalityName },
/* 23 */ { A1_OP_NAME, 0, "at-x520StateOrProvinceName" },
/* 24 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_stateOrProvinceName },
/* 25 */ { A1_OP_OPENTYPE, sizeof(DirectoryString), (const void *)&asn1_DirectoryString },
/* 26 */ { A1_OP_NAME, 0, "at-x520OrganizationName" },
/* 27 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_organizationName },
/* 28 */ { A1_OP_OPENTYPE, sizeof(DirectoryString), (const void *)&asn1_DirectoryString },
/* 29 */ { A1_OP_NAME, 0, "at-x520OrganizationalUnitName" },
/* 30 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_organizationalUnitName },
/* 31 */ { A1_OP_OPENTYPE, sizeof(DirectoryString), (const void *)&asn1_DirectoryString },
/* 32 */ { A1_OP_NAME, 0, "at-x520Title" },
/* 33 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_title },
/* 34 */ { A1_OP_OPENTYPE, sizeof(DirectoryString), (const void *)&asn1_DirectoryString },
/* 35 */ { A1_OP_NAME, 0, "at-name" },
/* 36 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_name },
/* 37 */ { A1_OP_OPENTYPE, sizeof(X520name), (const void *)&asn1_X520name },
/* 38 */ { A1_OP_NAME, 0, "at-givenName" },
/* 39 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_givenName },
/* 40 */ { A1_OP_OPENTYPE, sizeof(X520name), (const void *)&asn1_X520name },
/* 41 */ { A1_OP_NAME, 0, "at-initials" },
/* 42 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_initials },
/* 43 */ { A1_OP_OPENTYPE, sizeof(X520name), (const void *)&asn1_X520name },
/* 44 */ { A1_OP_NAME, 0, "at-generationQualifier" },
/* 45 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_generationQualifier },
/* 46 */ { A1_OP_OPENTYPE, sizeof(X520name), (const void *)&asn1_X520name },
/* 47 */ { A1_OP_NAME, 0, "at-x520dnQualifier" },
/* 48 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_dnQualifier },
/* 49 */ { A1_OP_OPENTYPE, sizeof(AliasPrintableString), (const void *)&asn1_AliasPrintableString },
/* 50 */ { A1_OP_NAME, 0, "at-x520Pseudonym" },
/* 51 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_at_pseudonym },
/* 52 */ { A1_OP_OPENTYPE, sizeof(DirectoryString), (const void *)&asn1_DirectoryString },
/* 53 */ { A1_OP_NAME, 0, "at-TPMManufacturer" },
/* 54 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_tcg_at_tpmManufacturer },
/* 55 */ { A1_OP_OPENTYPE, sizeof(AliasUTF8String), (const void *)&asn1_AliasUTF8String },
/* 56 */ { A1_OP_NAME, 0, "at-TPMModel" },
/* 57 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_tcg_at_tpmModel },
/* 58 */ { A1_OP_OPENTYPE, sizeof(AliasUTF8String), (const void *)&asn1_AliasUTF8String },
/* 59 */ { A1_OP_NAME, 0, "at-TPMVersion" },
/* 60 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_tcg_at_tpmVersion },
/* 61 */ { A1_OP_OPENTYPE, sizeof(AliasUTF8String), (const void *)&asn1_AliasUTF8String },
/* 62 */ { A1_OP_NAME, 0, "at-TPMSpecification" },
/* 63 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_tcg_at_tpmSpecification },
/* 64 */ { A1_OP_OPENTYPE, sizeof(TPMSpecification), (const void *)&asn1_TPMSpecification },
/* 65 */ { A1_OP_NAME, 0, "at-TPMSecurityAssertions" },
/* 66 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_tcg_at_tpmSecurityAssertions },
/* 67 */ { A1_OP_OPENTYPE, sizeof(TPMSecurityAssertions), (const void *)&asn1_TPMSecurityAssertions }
};
/* generate_template_type: SingleAttribute_tag__217 */
const struct asn1_template asn1_SingleAttribute_tag__217[] = {
/* 0 */ { 0, sizeof(struct SingleAttribute), ((void *)(uintptr_t)6) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct SingleAttribute, type), asn1_AttributeType_tag__1 },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct SingleAttribute, value), &asn1_extern_HEIM_ANY},
/* 3 */ { A1_OP_OPENTYPE_OBJSET | A1_OS_IS_SORTED |0 | (1 << 10) | 0, offsetof(SingleAttribute, _ioschoice_value), asn1_SupportedAttributes },
/* 4 */ { A1_OP_NAME, 0, "SingleAttribute" },
/* 5 */ { A1_OP_NAME, 0, "type" },
/* 6 */ { A1_OP_NAME, 0, "value" }
};
/* generate_template_type: SingleAttribute */
const struct asn1_template asn1_SingleAttribute[] = {
/* 0 */ { 0, sizeof(SingleAttribute), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_SingleAttribute_tag__217 }
};

int ASN1CALL
decode_SingleAttribute(const unsigned char *p, size_t len, SingleAttribute *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SingleAttribute, 0|0, p, len, data, size);
}


int ASN1CALL
encode_SingleAttribute(unsigned char *p, size_t len, const SingleAttribute *data, size_t *size)
{
    return _asn1_encode(asn1_SingleAttribute, p, len, data, size);
}


size_t ASN1CALL
length_SingleAttribute(const SingleAttribute *data)
{
    return _asn1_length(asn1_SingleAttribute, data);
}


void ASN1CALL
free_SingleAttribute(SingleAttribute *data)
{
    _asn1_free_top(asn1_SingleAttribute, data);
}


int ASN1CALL
copy_SingleAttribute(const SingleAttribute *from, SingleAttribute *to)
{
    return _asn1_copy_top(asn1_SingleAttribute, from, to);
}


char * ASN1CALL
print_SingleAttribute(const SingleAttribute *data, int flags)
{
    return _asn1_print_top(asn1_SingleAttribute, flags, data);
}

/* template_members: AttributeSet exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AttributeSet exp exp */
/* generate_template_type: AttributeSet_tag_type_220 */
/* template_members: AttributeSet exp exp */
/* generate_template_type: AttributeSet_values_20 */
/* generate_template_type: AttributeSet_tag_values_221 */
const struct asn1_template asn1_AttributeSet_tag_values_221[] = {
/* 0 */ { 0, sizeof(struct AttributeSet_values), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_OtherName_tag_value_52 }
};
/* generate_template_type: AttributeSet_tag__219 */
const struct asn1_template asn1_AttributeSet_tag__219[] = {
/* 0 */ { 0, sizeof(struct AttributeSet), ((void *)(uintptr_t)6) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct AttributeSet, type), asn1_AttributeType_tag__1 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), offsetof(struct AttributeSet, values), asn1_AttributeSet_tag_values_221 },
/* 3 */ { A1_OP_OPENTYPE_OBJSET | A1_OS_IS_SORTED |A1_OS_OT_IS_ARRAY | (1 << 10) | 0, offsetof(AttributeSet, _ioschoice_values), asn1_SupportedAttributes },
/* 4 */ { A1_OP_NAME, 0, "AttributeSet" },
/* 5 */ { A1_OP_NAME, 0, "type" },
/* 6 */ { A1_OP_NAME, 0, "values" }
};
/* generate_template_type: AttributeSet */
const struct asn1_template asn1_AttributeSet[] = {
/* 0 */ { 0, sizeof(AttributeSet), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AttributeSet_tag__219 }
};

int ASN1CALL
decode_AttributeSet(const unsigned char *p, size_t len, AttributeSet *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AttributeSet, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AttributeSet(unsigned char *p, size_t len, const AttributeSet *data, size_t *size)
{
    return _asn1_encode(asn1_AttributeSet, p, len, data, size);
}


size_t ASN1CALL
length_AttributeSet(const AttributeSet *data)
{
    return _asn1_length(asn1_AttributeSet, data);
}


void ASN1CALL
free_AttributeSet(AttributeSet *data)
{
    _asn1_free_top(asn1_AttributeSet, data);
}


int ASN1CALL
copy_AttributeSet(const AttributeSet *from, AttributeSet *to)
{
    return _asn1_copy_top(asn1_AttributeSet, from, to);
}


char * ASN1CALL
print_AttributeSet(const AttributeSet *data, int flags)
{
    return _asn1_print_top(asn1_AttributeSet, flags, data);
}

/* template_members: SubjectDirectoryAttributes exp exp */
/* generate_template_type: AttributeSet_seofTstruct_21 */
const struct asn1_template asn1_AttributeSet_seofTstruct_21[] = {
/* 0 */ { 0, sizeof(AttributeSet), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AttributeSet }
};
/* generate_template_type: SubjectDirectoryAttributes_tag__222 */
const struct asn1_template asn1_SubjectDirectoryAttributes_tag__222[] = {
/* 0 */ { 0, sizeof(AttributeSet), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_AttributeSet_seofTstruct_21 }
};
/* generate_template_type: SubjectDirectoryAttributes */
const struct asn1_template asn1_SubjectDirectoryAttributes[] = {
/* 0 */ { 0, sizeof(SubjectDirectoryAttributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_SubjectDirectoryAttributes_tag__222 }
};

int ASN1CALL
decode_SubjectDirectoryAttributes(const unsigned char *p, size_t len, SubjectDirectoryAttributes *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SubjectDirectoryAttributes, 0|0, p, len, data, size);
}


int ASN1CALL
encode_SubjectDirectoryAttributes(unsigned char *p, size_t len, const SubjectDirectoryAttributes *data, size_t *size)
{
    return _asn1_encode(asn1_SubjectDirectoryAttributes, p, len, data, size);
}


size_t ASN1CALL
length_SubjectDirectoryAttributes(const SubjectDirectoryAttributes *data)
{
    return _asn1_length(asn1_SubjectDirectoryAttributes, data);
}


void ASN1CALL
free_SubjectDirectoryAttributes(SubjectDirectoryAttributes *data)
{
    _asn1_free_top(asn1_SubjectDirectoryAttributes, data);
}


int ASN1CALL
copy_SubjectDirectoryAttributes(const SubjectDirectoryAttributes *from, SubjectDirectoryAttributes *to)
{
    return _asn1_copy_top(asn1_SubjectDirectoryAttributes, from, to);
}


char * ASN1CALL
print_SubjectDirectoryAttributes(const SubjectDirectoryAttributes *data, int flags)
{
    return _asn1_print_top(asn1_SubjectDirectoryAttributes, flags, data);
}

/* template_members: SkipCerts exp exp */
/* generate_template_type: SkipCerts_tag__223 */
/* generate_template_type: SkipCerts */
const struct asn1_template asn1_SkipCerts[] = {
/* 0 */ { 0, sizeof(SkipCerts), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_BasicConstraints_tag_pathLenConstraint_100 }
};

int ASN1CALL
decode_SkipCerts(const unsigned char *p, size_t len, SkipCerts *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SkipCerts, 0|0, p, len, data, size);
}


int ASN1CALL
encode_SkipCerts(unsigned char *p, size_t len, const SkipCerts *data, size_t *size)
{
    return _asn1_encode(asn1_SkipCerts, p, len, data, size);
}


size_t ASN1CALL
length_SkipCerts(const SkipCerts *data)
{
    return _asn1_length(asn1_SkipCerts, data);
}


void ASN1CALL
free_SkipCerts(SkipCerts *data)
{
    _asn1_free_top(asn1_SkipCerts, data);
}


int ASN1CALL
copy_SkipCerts(const SkipCerts *from, SkipCerts *to)
{
    return _asn1_copy_top(asn1_SkipCerts, from, to);
}


char * ASN1CALL
print_SkipCerts(const SkipCerts *data, int flags)
{
    return _asn1_print_top(asn1_SkipCerts, flags, data);
}

/* template_members: PolicyConstraints exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PolicyConstraints exp imp */
/* generate_template_type: PolicyConstraints_tag_requireExplicitPolicy_225 */
const struct asn1_template asn1_PolicyConstraints_tag_requireExplicitPolicy_225[] = {
/* 0 */ { 0, sizeof(SkipCerts), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_SkipCerts }
};
/* template_members: PolicyConstraints exp imp */
/* generate_template_type: PolicyConstraints_tag_inhibitPolicyMapping_226 */
/* generate_template_type: PolicyConstraints_tag__224 */
const struct asn1_template asn1_PolicyConstraints_tag__224[] = {
/* 0 */ { 0, sizeof(struct PolicyConstraints), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct PolicyConstraints, requireExplicitPolicy), asn1_PolicyConstraints_tag_requireExplicitPolicy_225 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct PolicyConstraints, inhibitPolicyMapping), asn1_PolicyConstraints_tag_requireExplicitPolicy_225 },
/* 3 */ { A1_OP_NAME, 0, "PolicyConstraints" },
/* 4 */ { A1_OP_NAME, 0, "requireExplicitPolicy" },
/* 5 */ { A1_OP_NAME, 0, "inhibitPolicyMapping" }
};
/* generate_template_type: PolicyConstraints */
const struct asn1_template asn1_PolicyConstraints[] = {
/* 0 */ { 0, sizeof(PolicyConstraints), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PolicyConstraints_tag__224 }
};

int ASN1CALL
decode_PolicyConstraints(const unsigned char *p, size_t len, PolicyConstraints *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PolicyConstraints, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PolicyConstraints(unsigned char *p, size_t len, const PolicyConstraints *data, size_t *size)
{
    return _asn1_encode(asn1_PolicyConstraints, p, len, data, size);
}


size_t ASN1CALL
length_PolicyConstraints(const PolicyConstraints *data)
{
    return _asn1_length(asn1_PolicyConstraints, data);
}


void ASN1CALL
free_PolicyConstraints(PolicyConstraints *data)
{
    _asn1_free_top(asn1_PolicyConstraints, data);
}


int ASN1CALL
copy_PolicyConstraints(const PolicyConstraints *from, PolicyConstraints *to)
{
    return _asn1_copy_top(asn1_PolicyConstraints, from, to);
}


char * ASN1CALL
print_PolicyConstraints(const PolicyConstraints *data, int flags)
{
    return _asn1_print_top(asn1_PolicyConstraints, flags, data);
}

/* template_members: HeimPkinitPrincMaxLifeSecs exp exp */
/* generate_template_type: HeimPkinitPrincMaxLifeSecs_tag__227 */
/* generate_template_type: HeimPkinitPrincMaxLifeSecs */
const struct asn1_template asn1_HeimPkinitPrincMaxLifeSecs[] = {
/* 0 */ { 0, sizeof(HeimPkinitPrincMaxLifeSecs), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_BasicConstraints_tag_pathLenConstraint_100 }
};

int ASN1CALL
decode_HeimPkinitPrincMaxLifeSecs(const unsigned char *p, size_t len, HeimPkinitPrincMaxLifeSecs *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_HeimPkinitPrincMaxLifeSecs, 0|0, p, len, data, size);
}


int ASN1CALL
encode_HeimPkinitPrincMaxLifeSecs(unsigned char *p, size_t len, const HeimPkinitPrincMaxLifeSecs *data, size_t *size)
{
    return _asn1_encode(asn1_HeimPkinitPrincMaxLifeSecs, p, len, data, size);
}


size_t ASN1CALL
length_HeimPkinitPrincMaxLifeSecs(const HeimPkinitPrincMaxLifeSecs *data)
{
    return _asn1_length(asn1_HeimPkinitPrincMaxLifeSecs, data);
}


void ASN1CALL
free_HeimPkinitPrincMaxLifeSecs(HeimPkinitPrincMaxLifeSecs *data)
{
    _asn1_free_top(asn1_HeimPkinitPrincMaxLifeSecs, data);
}


int ASN1CALL
copy_HeimPkinitPrincMaxLifeSecs(const HeimPkinitPrincMaxLifeSecs *from, HeimPkinitPrincMaxLifeSecs *to)
{
    return _asn1_copy_top(asn1_HeimPkinitPrincMaxLifeSecs, from, to);
}


char * ASN1CALL
print_HeimPkinitPrincMaxLifeSecs(const HeimPkinitPrincMaxLifeSecs *data, int flags)
{
    return _asn1_print_top(asn1_HeimPkinitPrincMaxLifeSecs, flags, data);
}

