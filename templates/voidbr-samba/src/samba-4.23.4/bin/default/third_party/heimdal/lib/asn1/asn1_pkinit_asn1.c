/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/pkinit.asn1 */
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
#include "pkinit_asn1.h"
#include "pkinit_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_EncryptionKey = {
	(asn1_type_encode)encode_EncryptionKey,
	(asn1_type_decode)decode_EncryptionKey,
	(asn1_type_length)length_EncryptionKey,
	(asn1_type_copy)copy_EncryptionKey,
	(asn1_type_release)free_EncryptionKey,
	(asn1_type_print)print_EncryptionKey,
	sizeof(EncryptionKey)
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
static const struct asn1_type_func asn1_extern_KerberosTime = {
	(asn1_type_encode)encode_KerberosTime,
	(asn1_type_decode)decode_KerberosTime,
	(asn1_type_length)length_KerberosTime,
	(asn1_type_copy)copy_KerberosTime,
	(asn1_type_release)free_KerberosTime,
	(asn1_type_print)print_KerberosTime,
	sizeof(KerberosTime)
};
static const struct asn1_type_func asn1_extern_Checksum = {
	(asn1_type_encode)encode_Checksum,
	(asn1_type_decode)decode_Checksum,
	(asn1_type_length)length_Checksum,
	(asn1_type_copy)copy_Checksum,
	(asn1_type_release)free_Checksum,
	(asn1_type_print)print_Checksum,
	sizeof(Checksum)
};
static const struct asn1_type_func asn1_extern_Ticket = {
	(asn1_type_encode)encode_Ticket,
	(asn1_type_decode)decode_Ticket,
	(asn1_type_length)length_Ticket,
	(asn1_type_copy)copy_Ticket,
	(asn1_type_release)free_Ticket,
	(asn1_type_print)print_Ticket,
	sizeof(Ticket)
};
static const struct asn1_type_func asn1_extern_IssuerAndSerialNumber = {
	(asn1_type_encode)encode_IssuerAndSerialNumber,
	(asn1_type_decode)decode_IssuerAndSerialNumber,
	(asn1_type_length)length_IssuerAndSerialNumber,
	(asn1_type_copy)copy_IssuerAndSerialNumber,
	(asn1_type_release)free_IssuerAndSerialNumber,
	(asn1_type_print)print_IssuerAndSerialNumber,
	sizeof(IssuerAndSerialNumber)
};
static const struct asn1_type_func asn1_extern_SubjectPublicKeyInfo = {
	(asn1_type_encode)encode_SubjectPublicKeyInfo,
	(asn1_type_decode)decode_SubjectPublicKeyInfo,
	(asn1_type_length)length_SubjectPublicKeyInfo,
	(asn1_type_copy)copy_SubjectPublicKeyInfo,
	(asn1_type_release)free_SubjectPublicKeyInfo,
	(asn1_type_print)print_SubjectPublicKeyInfo,
	sizeof(SubjectPublicKeyInfo)
};
static const struct asn1_type_func asn1_extern_AlgorithmIdentifier = {
	(asn1_type_encode)encode_AlgorithmIdentifier,
	(asn1_type_decode)decode_AlgorithmIdentifier,
	(asn1_type_length)length_AlgorithmIdentifier,
	(asn1_type_copy)copy_AlgorithmIdentifier,
	(asn1_type_release)free_AlgorithmIdentifier,
	(asn1_type_print)print_AlgorithmIdentifier,
	sizeof(AlgorithmIdentifier)
};
static const struct asn1_type_func asn1_extern_HEIM_ANY = {
	(asn1_type_encode)encode_HEIM_ANY,
	(asn1_type_decode)decode_HEIM_ANY,
	(asn1_type_length)length_HEIM_ANY,
	(asn1_type_copy)copy_HEIM_ANY,
	(asn1_type_release)free_HEIM_ANY,
	(asn1_type_print)print_HEIM_ANY,
	sizeof(HEIM_ANY)
};
static unsigned oid_id_pkinit_variable_num[7] =  { 1, 3, 6, 1, 5, 2, 3};
const heim_oid asn1_oid_id_pkinit = { 7, oid_id_pkinit_variable_num };

static unsigned oid_id_pkauthdata_variable_num[8] =  { 1, 3, 6, 1, 5, 2, 3, 1};
const heim_oid asn1_oid_id_pkauthdata = { 8, oid_id_pkauthdata_variable_num };

static unsigned oid_id_pkdhkeydata_variable_num[8] =  { 1, 3, 6, 1, 5, 2, 3, 2};
const heim_oid asn1_oid_id_pkdhkeydata = { 8, oid_id_pkdhkeydata_variable_num };

static unsigned oid_id_pkrkeydata_variable_num[8] =  { 1, 3, 6, 1, 5, 2, 3, 3};
const heim_oid asn1_oid_id_pkrkeydata = { 8, oid_id_pkrkeydata_variable_num };

static unsigned oid_id_pkekuoid_variable_num[8] =  { 1, 3, 6, 1, 5, 2, 3, 4};
const heim_oid asn1_oid_id_pkekuoid = { 8, oid_id_pkekuoid_variable_num };

static unsigned oid_id_pkkdcekuoid_variable_num[8] =  { 1, 3, 6, 1, 5, 2, 3, 5};
const heim_oid asn1_oid_id_pkkdcekuoid = { 8, oid_id_pkkdcekuoid_variable_num };

static unsigned oid_id_heim_eku_pkinit_certlife_is_max_life_variable_num[6] =  { 1, 2, 752, 43, 16, 3};
const heim_oid asn1_oid_id_heim_eku_pkinit_certlife_is_max_life = { 6, oid_id_heim_eku_pkinit_certlife_is_max_life_variable_num };

static unsigned oid_id_apple_system_id_variable_num[7] =  { 1, 2, 840, 113635, 100, 4, 4};
const heim_oid asn1_oid_id_apple_system_id = { 7, oid_id_apple_system_id_variable_num };

static unsigned oid_id_pkinit_kdf_variable_num[8] =  { 1, 3, 6, 1, 5, 2, 3, 6};
const heim_oid asn1_oid_id_pkinit_kdf = { 8, oid_id_pkinit_kdf_variable_num };

static unsigned oid_id_pkinit_kdf_ah_sha1_variable_num[9] =  { 1, 3, 6, 1, 5, 2, 3, 6, 1};
const heim_oid asn1_oid_id_pkinit_kdf_ah_sha1 = { 9, oid_id_pkinit_kdf_ah_sha1_variable_num };

static unsigned oid_id_pkinit_kdf_ah_sha256_variable_num[9] =  { 1, 3, 6, 1, 5, 2, 3, 6, 2};
const heim_oid asn1_oid_id_pkinit_kdf_ah_sha256 = { 9, oid_id_pkinit_kdf_ah_sha256_variable_num };

static unsigned oid_id_pkinit_kdf_ah_sha512_variable_num[9] =  { 1, 3, 6, 1, 5, 2, 3, 6, 3};
const heim_oid asn1_oid_id_pkinit_kdf_ah_sha512 = { 9, oid_id_pkinit_kdf_ah_sha512_variable_num };

static unsigned oid_id_pkinit_san_variable_num[7] =  { 1, 3, 6, 1, 5, 2, 2};
const heim_oid asn1_oid_id_pkinit_san = { 7, oid_id_pkinit_san_variable_num };

static unsigned oid_id_pkinit_ms_eku_variable_num[10] =  { 1, 3, 6, 1, 4, 1, 311, 20, 2, 2};
const heim_oid asn1_oid_id_pkinit_ms_eku = { 10, oid_id_pkinit_ms_eku_variable_num };

static unsigned oid_id_pkinit_ms_san_variable_num[10] =  { 1, 3, 6, 1, 4, 1, 311, 20, 2, 3};
const heim_oid asn1_oid_id_pkinit_ms_san = { 10, oid_id_pkinit_ms_san_variable_num };

extern const struct asn1_template asn1_MS_UPN_SAN[];
extern const struct asn1_template asn1_MS_UPN_SAN[];
extern const struct asn1_template asn1_DHNonce[];
extern const struct asn1_template asn1_DHNonce[];
extern const struct asn1_template asn1_KDFAlgorithmId[];
extern const struct asn1_template asn1_TrustedCA[];
extern const struct asn1_template asn1_ExternalPrincipalIdentifier[];
extern const struct asn1_template asn1_ExternalPrincipalIdentifiers[];
extern const struct asn1_template asn1_PA_PK_AS_REQ[];
extern const struct asn1_template asn1_PKAuthenticator[];
extern const struct asn1_template asn1_AuthPack[];
extern const struct asn1_template asn1_TD_TRUSTED_CERTIFIERS[];
extern const struct asn1_template asn1_TD_TRUSTED_CERTIFIERS[];
extern const struct asn1_template asn1_TD_INVALID_CERTIFICATES[];
extern const struct asn1_template asn1_TD_INVALID_CERTIFICATES[];
extern const struct asn1_template asn1_AD_INITIAL_VERIFIED_CAS[];
extern const struct asn1_template asn1_DHRepInfo[];
extern const struct asn1_template asn1_PA_PK_AS_REP[];
extern const struct asn1_template asn1_KDCDHKeyInfo[];
extern const struct asn1_template asn1_ReplyKeyPack[];
extern const struct asn1_template asn1_TD_DH_PARAMETERS[];
extern const struct asn1_template asn1_PKAuthenticator_Win2k[];
extern const struct asn1_template asn1_AuthPack_Win2k[];
extern const struct asn1_template asn1_TrustedCA_Win2k[];
extern const struct asn1_template asn1_PA_PK_AS_REQ_Win2k[];
extern const struct asn1_template asn1_PA_PK_AS_REP_Win2k[];
extern const struct asn1_template asn1_KDCDHKeyInfo_Win2k[];
extern const struct asn1_template asn1_ReplyKeyPack_Win2k[];
extern const struct asn1_template asn1_PA_PK_AS_REP_BTMM[];
extern const struct asn1_template asn1_PkinitSP80056AOtherInfo[];
extern const struct asn1_template asn1_PkinitSuppPubInfo[];
/* template_members: MS_UPN_SAN exp exp */
/* generate_template_type: MS_UPN_SAN_tag__0 */
const struct asn1_template asn1_MS_UPN_SAN_tag__0[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UTF8_STRING), 0, NULL }
};
/* generate_template_type: MS_UPN_SAN */
const struct asn1_template asn1_MS_UPN_SAN[] = {
/* 0 */ { 0, sizeof(MS_UPN_SAN), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_MS_UPN_SAN_tag__0 }
};

int ASN1CALL
decode_MS_UPN_SAN(const unsigned char *p, size_t len, MS_UPN_SAN *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_MS_UPN_SAN, 0|0, p, len, data, size);
}


int ASN1CALL
encode_MS_UPN_SAN(unsigned char *p, size_t len, const MS_UPN_SAN *data, size_t *size)
{
    return _asn1_encode(asn1_MS_UPN_SAN, p, len, data, size);
}


size_t ASN1CALL
length_MS_UPN_SAN(const MS_UPN_SAN *data)
{
    return _asn1_length(asn1_MS_UPN_SAN, data);
}


void ASN1CALL
free_MS_UPN_SAN(MS_UPN_SAN *data)
{
    _asn1_free_top(asn1_MS_UPN_SAN, data);
}


int ASN1CALL
copy_MS_UPN_SAN(const MS_UPN_SAN *from, MS_UPN_SAN *to)
{
    return _asn1_copy_top(asn1_MS_UPN_SAN, from, to);
}


char * ASN1CALL
print_MS_UPN_SAN(const MS_UPN_SAN *data, int flags)
{
    return _asn1_print_top(asn1_MS_UPN_SAN, flags, data);
}

/* template_members: DHNonce exp exp */
/* generate_template_type: DHNonce_tag__1 */
const struct asn1_template asn1_DHNonce_tag__1[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: DHNonce */
const struct asn1_template asn1_DHNonce[] = {
/* 0 */ { 0, sizeof(DHNonce), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_DHNonce_tag__1 }
};

int ASN1CALL
decode_DHNonce(const unsigned char *p, size_t len, DHNonce *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DHNonce, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DHNonce(unsigned char *p, size_t len, const DHNonce *data, size_t *size)
{
    return _asn1_encode(asn1_DHNonce, p, len, data, size);
}


size_t ASN1CALL
length_DHNonce(const DHNonce *data)
{
    return _asn1_length(asn1_DHNonce, data);
}


void ASN1CALL
free_DHNonce(DHNonce *data)
{
    _asn1_free_top(asn1_DHNonce, data);
}


int ASN1CALL
copy_DHNonce(const DHNonce *from, DHNonce *to)
{
    return _asn1_copy_top(asn1_DHNonce, from, to);
}


char * ASN1CALL
print_DHNonce(const DHNonce *data, int flags)
{
    return _asn1_print_top(asn1_DHNonce, flags, data);
}

/* template_members: KDFAlgorithmId exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KDFAlgorithmId exp exp */
/* template_members: heim_oid exp exp */
/* generate_template_type: heim_oid_tag_kdf_id_4 */
const struct asn1_template asn1_heim_oid_tag_kdf_id_4[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* generate_template_type: KDFAlgorithmId_tag_kdf_id_3 */
const struct asn1_template asn1_KDFAlgorithmId_tag_kdf_id_3[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_heim_oid_tag_kdf_id_4 }
};
/* generate_template_type: KDFAlgorithmId_tag__2 */
const struct asn1_template asn1_KDFAlgorithmId_tag__2[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KDFAlgorithmId), ((void *)(uintptr_t)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDFAlgorithmId, kdf_id), asn1_KDFAlgorithmId_tag_kdf_id_3 },
/* 2 */ { A1_OP_NAME, 0, "KDFAlgorithmId" },
/* 3 */ { A1_OP_NAME, 0, "kdf-id" },
/* 4 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: KDFAlgorithmId */
const struct asn1_template asn1_KDFAlgorithmId[] = {
/* 0 */ { 0, sizeof(KDFAlgorithmId), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDFAlgorithmId_tag__2 }
};

int ASN1CALL
decode_KDFAlgorithmId(const unsigned char *p, size_t len, KDFAlgorithmId *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KDFAlgorithmId, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KDFAlgorithmId(unsigned char *p, size_t len, const KDFAlgorithmId *data, size_t *size)
{
    return _asn1_encode(asn1_KDFAlgorithmId, p, len, data, size);
}


size_t ASN1CALL
length_KDFAlgorithmId(const KDFAlgorithmId *data)
{
    return _asn1_length(asn1_KDFAlgorithmId, data);
}


void ASN1CALL
free_KDFAlgorithmId(KDFAlgorithmId *data)
{
    _asn1_free_top(asn1_KDFAlgorithmId, data);
}


int ASN1CALL
copy_KDFAlgorithmId(const KDFAlgorithmId *from, KDFAlgorithmId *to)
{
    return _asn1_copy_top(asn1_KDFAlgorithmId, from, to);
}


char * ASN1CALL
print_KDFAlgorithmId(const KDFAlgorithmId *data, int flags)
{
    return _asn1_print_top(asn1_KDFAlgorithmId, flags, data);
}

/* template_members: TrustedCA exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: TrustedCA exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_caName_7 */
/* generate_template_type: TrustedCA_tag_caName_6 */
const struct asn1_template asn1_TrustedCA_tag_caName_6[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_DHNonce_tag__1 }
};
/* template_members: TrustedCA exp exp */
/* template_members: heim_integer exp exp */
/* generate_template_type: heim_integer_tag_certificateSerialNumber_9 */
const struct asn1_template asn1_heim_integer_tag_certificateSerialNumber_9[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_INTEGER), 0, NULL }
};
/* generate_template_type: TrustedCA_tag_certificateSerialNumber_8 */
const struct asn1_template asn1_TrustedCA_tag_certificateSerialNumber_8[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_heim_integer_tag_certificateSerialNumber_9 }
};
/* template_members: TrustedCA exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_subjectKeyIdentifier_11 */
/* generate_template_type: TrustedCA_tag_subjectKeyIdentifier_10 */
/* generate_template_type: TrustedCA_tag__5 */
const struct asn1_template asn1_TrustedCA_tag__5[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct TrustedCA), ((void *)(uintptr_t)8) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, offsetof(struct TrustedCA, caName), asn1_TrustedCA_tag_caName_6 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct TrustedCA, certificateSerialNumber), asn1_TrustedCA_tag_certificateSerialNumber_8 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct TrustedCA, subjectKeyIdentifier), asn1_TrustedCA_tag_caName_6 },
/* 4 */ { A1_OP_NAME, 0, "TrustedCA" },
/* 5 */ { A1_OP_NAME, 0, "caName" },
/* 6 */ { A1_OP_NAME, 0, "certificateSerialNumber" },
/* 7 */ { A1_OP_NAME, 0, "subjectKeyIdentifier" },
/* 8 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: TrustedCA */
const struct asn1_template asn1_TrustedCA[] = {
/* 0 */ { 0, sizeof(TrustedCA), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TrustedCA_tag__5 }
};

int ASN1CALL
decode_TrustedCA(const unsigned char *p, size_t len, TrustedCA *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TrustedCA, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TrustedCA(unsigned char *p, size_t len, const TrustedCA *data, size_t *size)
{
    return _asn1_encode(asn1_TrustedCA, p, len, data, size);
}


size_t ASN1CALL
length_TrustedCA(const TrustedCA *data)
{
    return _asn1_length(asn1_TrustedCA, data);
}


void ASN1CALL
free_TrustedCA(TrustedCA *data)
{
    _asn1_free_top(asn1_TrustedCA, data);
}


int ASN1CALL
copy_TrustedCA(const TrustedCA *from, TrustedCA *to)
{
    return _asn1_copy_top(asn1_TrustedCA, from, to);
}


char * ASN1CALL
print_TrustedCA(const TrustedCA *data, int flags)
{
    return _asn1_print_top(asn1_TrustedCA, flags, data);
}

/* template_members: ExternalPrincipalIdentifier exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: ExternalPrincipalIdentifier exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_subjectName_14 */
/* generate_template_type: ExternalPrincipalIdentifier_tag_subjectName_13 */
/* template_members: ExternalPrincipalIdentifier exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_issuerAndSerialNumber_16 */
/* generate_template_type: ExternalPrincipalIdentifier_tag_issuerAndSerialNumber_15 */
/* template_members: ExternalPrincipalIdentifier exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_subjectKeyIdentifier_18 */
/* generate_template_type: ExternalPrincipalIdentifier_tag_subjectKeyIdentifier_17 */
/* generate_template_type: ExternalPrincipalIdentifier_tag__12 */
const struct asn1_template asn1_ExternalPrincipalIdentifier_tag__12[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct ExternalPrincipalIdentifier), ((void *)(uintptr_t)8) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct ExternalPrincipalIdentifier, subjectName), asn1_TrustedCA_tag_caName_6 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct ExternalPrincipalIdentifier, issuerAndSerialNumber), asn1_TrustedCA_tag_caName_6 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct ExternalPrincipalIdentifier, subjectKeyIdentifier), asn1_TrustedCA_tag_caName_6 },
/* 4 */ { A1_OP_NAME, 0, "ExternalPrincipalIdentifier" },
/* 5 */ { A1_OP_NAME, 0, "subjectName" },
/* 6 */ { A1_OP_NAME, 0, "issuerAndSerialNumber" },
/* 7 */ { A1_OP_NAME, 0, "subjectKeyIdentifier" },
/* 8 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: ExternalPrincipalIdentifier */
const struct asn1_template asn1_ExternalPrincipalIdentifier[] = {
/* 0 */ { 0, sizeof(ExternalPrincipalIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ExternalPrincipalIdentifier_tag__12 }
};

int ASN1CALL
decode_ExternalPrincipalIdentifier(const unsigned char *p, size_t len, ExternalPrincipalIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ExternalPrincipalIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ExternalPrincipalIdentifier(unsigned char *p, size_t len, const ExternalPrincipalIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_ExternalPrincipalIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_ExternalPrincipalIdentifier(const ExternalPrincipalIdentifier *data)
{
    return _asn1_length(asn1_ExternalPrincipalIdentifier, data);
}


void ASN1CALL
free_ExternalPrincipalIdentifier(ExternalPrincipalIdentifier *data)
{
    _asn1_free_top(asn1_ExternalPrincipalIdentifier, data);
}


int ASN1CALL
copy_ExternalPrincipalIdentifier(const ExternalPrincipalIdentifier *from, ExternalPrincipalIdentifier *to)
{
    return _asn1_copy_top(asn1_ExternalPrincipalIdentifier, from, to);
}


char * ASN1CALL
print_ExternalPrincipalIdentifier(const ExternalPrincipalIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_ExternalPrincipalIdentifier, flags, data);
}

/* template_members: ExternalPrincipalIdentifiers exp exp */
/* generate_template_type: ExternalPrincipalIdentifier_seofTstruct_0 */
const struct asn1_template asn1_ExternalPrincipalIdentifier_seofTstruct_0[] = {
/* 0 */ { 0, sizeof(ExternalPrincipalIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ExternalPrincipalIdentifier }
};
/* generate_template_type: ExternalPrincipalIdentifiers_tag__19 */
const struct asn1_template asn1_ExternalPrincipalIdentifiers_tag__19[] = {
/* 0 */ { 0, sizeof(ExternalPrincipalIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_ExternalPrincipalIdentifier_seofTstruct_0 }
};
/* generate_template_type: ExternalPrincipalIdentifiers */
const struct asn1_template asn1_ExternalPrincipalIdentifiers[] = {
/* 0 */ { 0, sizeof(ExternalPrincipalIdentifiers), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ExternalPrincipalIdentifiers_tag__19 }
};

int ASN1CALL
decode_ExternalPrincipalIdentifiers(const unsigned char *p, size_t len, ExternalPrincipalIdentifiers *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ExternalPrincipalIdentifiers, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ExternalPrincipalIdentifiers(unsigned char *p, size_t len, const ExternalPrincipalIdentifiers *data, size_t *size)
{
    return _asn1_encode(asn1_ExternalPrincipalIdentifiers, p, len, data, size);
}


size_t ASN1CALL
length_ExternalPrincipalIdentifiers(const ExternalPrincipalIdentifiers *data)
{
    return _asn1_length(asn1_ExternalPrincipalIdentifiers, data);
}


void ASN1CALL
free_ExternalPrincipalIdentifiers(ExternalPrincipalIdentifiers *data)
{
    _asn1_free_top(asn1_ExternalPrincipalIdentifiers, data);
}


int ASN1CALL
copy_ExternalPrincipalIdentifiers(const ExternalPrincipalIdentifiers *from, ExternalPrincipalIdentifiers *to)
{
    return _asn1_copy_top(asn1_ExternalPrincipalIdentifiers, from, to);
}


char * ASN1CALL
print_ExternalPrincipalIdentifiers(const ExternalPrincipalIdentifiers *data, int flags)
{
    return _asn1_print_top(asn1_ExternalPrincipalIdentifiers, flags, data);
}

/* template_members: PA_PK_AS_REQ exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_PK_AS_REQ exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_signedAuthPack_22 */
/* generate_template_type: PA_PK_AS_REQ_tag_signedAuthPack_21 */
/* template_members: PA_PK_AS_REQ exp exp */
/* generate_template_type: PA_PK_AS_REQ_tag_trustedCertifiers_23 */
const struct asn1_template asn1_PA_PK_AS_REQ_tag_trustedCertifiers_23[] = {
/* 0 */ { 0, sizeof(ExternalPrincipalIdentifiers), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ExternalPrincipalIdentifiers }
};
/* template_members: PA_PK_AS_REQ exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_kdcPkId_25 */
/* generate_template_type: PA_PK_AS_REQ_tag_kdcPkId_24 */
/* generate_template_type: PA_PK_AS_REQ_tag__20 */
const struct asn1_template asn1_PA_PK_AS_REQ_tag__20[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_PK_AS_REQ), ((void *)(uintptr_t)8) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, offsetof(struct PA_PK_AS_REQ, signedAuthPack), asn1_TrustedCA_tag_caName_6 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_PK_AS_REQ, trustedCertifiers), asn1_PA_PK_AS_REQ_tag_trustedCertifiers_23 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct PA_PK_AS_REQ, kdcPkId), asn1_TrustedCA_tag_caName_6 },
/* 4 */ { A1_OP_NAME, 0, "PA_PK_AS_REQ" },
/* 5 */ { A1_OP_NAME, 0, "signedAuthPack" },
/* 6 */ { A1_OP_NAME, 0, "trustedCertifiers" },
/* 7 */ { A1_OP_NAME, 0, "kdcPkId" },
/* 8 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: PA_PK_AS_REQ */
const struct asn1_template asn1_PA_PK_AS_REQ[] = {
/* 0 */ { 0, sizeof(PA_PK_AS_REQ), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_PK_AS_REQ_tag__20 }
};

int ASN1CALL
decode_PA_PK_AS_REQ(const unsigned char *p, size_t len, PA_PK_AS_REQ *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_PK_AS_REQ, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_PK_AS_REQ(unsigned char *p, size_t len, const PA_PK_AS_REQ *data, size_t *size)
{
    return _asn1_encode(asn1_PA_PK_AS_REQ, p, len, data, size);
}


size_t ASN1CALL
length_PA_PK_AS_REQ(const PA_PK_AS_REQ *data)
{
    return _asn1_length(asn1_PA_PK_AS_REQ, data);
}


void ASN1CALL
free_PA_PK_AS_REQ(PA_PK_AS_REQ *data)
{
    _asn1_free_top(asn1_PA_PK_AS_REQ, data);
}


int ASN1CALL
copy_PA_PK_AS_REQ(const PA_PK_AS_REQ *from, PA_PK_AS_REQ *to)
{
    return _asn1_copy_top(asn1_PA_PK_AS_REQ, from, to);
}


char * ASN1CALL
print_PA_PK_AS_REQ(const PA_PK_AS_REQ *data, int flags)
{
    return _asn1_print_top(asn1_PA_PK_AS_REQ, flags, data);
}

/* template_members: PKAuthenticator exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PKAuthenticator exp exp */
/* template_members: heim_integer exp exp */
/* generate_template_type: heim_integer_tag_cusec_28 */
/* generate_template_type: PKAuthenticator_tag_cusec_27 */
/* template_members: PKAuthenticator exp exp */
/* generate_template_type: PKAuthenticator_tag_ctime_29 */
const struct asn1_template asn1_PKAuthenticator_tag_ctime_29[] = {
/* 0 */ { 0, sizeof(KerberosTime), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_KerberosTime}
};
/* template_members: PKAuthenticator exp exp */
/* template_members: unsigned exp exp */
/* generate_template_type: unsigned_tag_nonce_31 */
const struct asn1_template asn1_unsigned_tag_nonce_31[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* generate_template_type: PKAuthenticator_tag_nonce_30 */
const struct asn1_template asn1_PKAuthenticator_tag_nonce_30[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_unsigned_tag_nonce_31 }
};
/* template_members: PKAuthenticator exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_paChecksum_33 */
/* generate_template_type: PKAuthenticator_tag_paChecksum_32 */
/* template_members: PKAuthenticator exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_freshnessToken_35 */
/* generate_template_type: PKAuthenticator_tag_freshnessToken_34 */
/* generate_template_type: PKAuthenticator_tag__26 */
const struct asn1_template asn1_PKAuthenticator_tag__26[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PKAuthenticator), ((void *)(uintptr_t)12) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PKAuthenticator, cusec), asn1_TrustedCA_tag_certificateSerialNumber_8 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PKAuthenticator, ctime), asn1_PKAuthenticator_tag_ctime_29 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct PKAuthenticator, nonce), asn1_PKAuthenticator_tag_nonce_30 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct PKAuthenticator, paChecksum), asn1_TrustedCA_tag_caName_6 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct PKAuthenticator, freshnessToken), asn1_TrustedCA_tag_caName_6 },
/* 6 */ { A1_OP_NAME, 0, "PKAuthenticator" },
/* 7 */ { A1_OP_NAME, 0, "cusec" },
/* 8 */ { A1_OP_NAME, 0, "ctime" },
/* 9 */ { A1_OP_NAME, 0, "nonce" },
/* 10 */ { A1_OP_NAME, 0, "paChecksum" },
/* 11 */ { A1_OP_NAME, 0, "freshnessToken" },
/* 12 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: PKAuthenticator */
const struct asn1_template asn1_PKAuthenticator[] = {
/* 0 */ { 0, sizeof(PKAuthenticator), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKAuthenticator_tag__26 }
};

int ASN1CALL
decode_PKAuthenticator(const unsigned char *p, size_t len, PKAuthenticator *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKAuthenticator, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKAuthenticator(unsigned char *p, size_t len, const PKAuthenticator *data, size_t *size)
{
    return _asn1_encode(asn1_PKAuthenticator, p, len, data, size);
}


size_t ASN1CALL
length_PKAuthenticator(const PKAuthenticator *data)
{
    return _asn1_length(asn1_PKAuthenticator, data);
}


void ASN1CALL
free_PKAuthenticator(PKAuthenticator *data)
{
    _asn1_free_top(asn1_PKAuthenticator, data);
}


int ASN1CALL
copy_PKAuthenticator(const PKAuthenticator *from, PKAuthenticator *to)
{
    return _asn1_copy_top(asn1_PKAuthenticator, from, to);
}


char * ASN1CALL
print_PKAuthenticator(const PKAuthenticator *data, int flags)
{
    return _asn1_print_top(asn1_PKAuthenticator, flags, data);
}

/* template_members: AuthPack exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AuthPack exp exp */
/* generate_template_type: AuthPack_tag_pkAuthenticator_37 */
const struct asn1_template asn1_AuthPack_tag_pkAuthenticator_37[] = {
/* 0 */ { 0, sizeof(PKAuthenticator), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PKAuthenticator }
};
/* template_members: AuthPack exp exp */
/* generate_template_type: AuthPack_tag_clientPublicValue_38 */
const struct asn1_template asn1_AuthPack_tag_clientPublicValue_38[] = {
/* 0 */ { 0, sizeof(SubjectPublicKeyInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_SubjectPublicKeyInfo}
};
/* template_members: AuthPack exp exp */
/* template_members: AuthPack exp exp */
/* generate_template_type: AuthPack_supportedCMSTypes_1 */
const struct asn1_template asn1_AuthPack_supportedCMSTypes_1[] = {
/* 0 */ { 0, sizeof(AlgorithmIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_AlgorithmIdentifier}
};
/* generate_template_type: AuthPack_tag_supportedCMSTypes_40 */
const struct asn1_template asn1_AuthPack_tag_supportedCMSTypes_40[] = {
/* 0 */ { 0, sizeof(struct AuthPack_supportedCMSTypes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_AuthPack_supportedCMSTypes_1 }
};
/* generate_template_type: AuthPack_tag_supportedCMSTypes_39 */
const struct asn1_template asn1_AuthPack_tag_supportedCMSTypes_39[] = {
/* 0 */ { 0, sizeof(struct AuthPack_supportedCMSTypes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthPack_tag_supportedCMSTypes_40 }
};
/* template_members: AuthPack exp exp */
/* generate_template_type: AuthPack_tag_clientDHNonce_41 */
const struct asn1_template asn1_AuthPack_tag_clientDHNonce_41[] = {
/* 0 */ { 0, sizeof(DHNonce), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DHNonce }
};
/* template_members: AuthPack exp exp */
/* template_members: AuthPack exp exp */
/* generate_template_type: AuthPack_supportedKDFs_2 */
const struct asn1_template asn1_AuthPack_supportedKDFs_2[] = {
/* 0 */ { 0, sizeof(KDFAlgorithmId), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDFAlgorithmId }
};
/* generate_template_type: AuthPack_tag_supportedKDFs_43 */
const struct asn1_template asn1_AuthPack_tag_supportedKDFs_43[] = {
/* 0 */ { 0, sizeof(struct AuthPack_supportedKDFs), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_AuthPack_supportedKDFs_2 }
};
/* generate_template_type: AuthPack_tag_supportedKDFs_42 */
const struct asn1_template asn1_AuthPack_tag_supportedKDFs_42[] = {
/* 0 */ { 0, sizeof(struct AuthPack_supportedKDFs), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthPack_tag_supportedKDFs_43 }
};
/* generate_template_type: AuthPack_tag__36 */
const struct asn1_template asn1_AuthPack_tag__36[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct AuthPack), ((void *)(uintptr_t)13) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AuthPack, pkAuthenticator), asn1_AuthPack_tag_pkAuthenticator_37 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct AuthPack, clientPublicValue), asn1_AuthPack_tag_clientPublicValue_38 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct AuthPack, supportedCMSTypes), asn1_AuthPack_tag_supportedCMSTypes_39 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct AuthPack, clientDHNonce), asn1_AuthPack_tag_clientDHNonce_41 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct AuthPack, supportedKDFs), asn1_AuthPack_tag_supportedKDFs_42 },
/* 6 */ { A1_OP_NAME, 0, "AuthPack" },
/* 7 */ { A1_OP_NAME, 0, "pkAuthenticator" },
/* 8 */ { A1_OP_NAME, 0, "clientPublicValue" },
/* 9 */ { A1_OP_NAME, 0, "supportedCMSTypes" },
/* 10 */ { A1_OP_NAME, 0, "clientDHNonce" },
/* 11 */ { A1_OP_NAME, 0, "..." },
/* 12 */ { A1_OP_NAME, 0, "supportedKDFs" },
/* 13 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: AuthPack */
const struct asn1_template asn1_AuthPack[] = {
/* 0 */ { 0, sizeof(AuthPack), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthPack_tag__36 }
};

int ASN1CALL
decode_AuthPack(const unsigned char *p, size_t len, AuthPack *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AuthPack, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AuthPack(unsigned char *p, size_t len, const AuthPack *data, size_t *size)
{
    return _asn1_encode(asn1_AuthPack, p, len, data, size);
}


size_t ASN1CALL
length_AuthPack(const AuthPack *data)
{
    return _asn1_length(asn1_AuthPack, data);
}


void ASN1CALL
free_AuthPack(AuthPack *data)
{
    _asn1_free_top(asn1_AuthPack, data);
}


int ASN1CALL
copy_AuthPack(const AuthPack *from, AuthPack *to)
{
    return _asn1_copy_top(asn1_AuthPack, from, to);
}


char * ASN1CALL
print_AuthPack(const AuthPack *data, int flags)
{
    return _asn1_print_top(asn1_AuthPack, flags, data);
}

/* generate_template_type: TD_TRUSTED_CERTIFIERS */
const struct asn1_template asn1_TD_TRUSTED_CERTIFIERS[] = {
/* 0 */ { 0, sizeof(TD_TRUSTED_CERTIFIERS), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ExternalPrincipalIdentifiers }
};

int ASN1CALL
decode_TD_TRUSTED_CERTIFIERS(const unsigned char *p, size_t len, TD_TRUSTED_CERTIFIERS *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TD_TRUSTED_CERTIFIERS, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TD_TRUSTED_CERTIFIERS(unsigned char *p, size_t len, const TD_TRUSTED_CERTIFIERS *data, size_t *size)
{
    return _asn1_encode(asn1_TD_TRUSTED_CERTIFIERS, p, len, data, size);
}


size_t ASN1CALL
length_TD_TRUSTED_CERTIFIERS(const TD_TRUSTED_CERTIFIERS *data)
{
    return _asn1_length(asn1_TD_TRUSTED_CERTIFIERS, data);
}


void ASN1CALL
free_TD_TRUSTED_CERTIFIERS(TD_TRUSTED_CERTIFIERS *data)
{
    _asn1_free_top(asn1_TD_TRUSTED_CERTIFIERS, data);
}


int ASN1CALL
copy_TD_TRUSTED_CERTIFIERS(const TD_TRUSTED_CERTIFIERS *from, TD_TRUSTED_CERTIFIERS *to)
{
    return _asn1_copy_top(asn1_TD_TRUSTED_CERTIFIERS, from, to);
}


char * ASN1CALL
print_TD_TRUSTED_CERTIFIERS(const TD_TRUSTED_CERTIFIERS *data, int flags)
{
    return _asn1_print_top(asn1_TD_TRUSTED_CERTIFIERS, flags, data);
}

/* generate_template_type: TD_INVALID_CERTIFICATES */
const struct asn1_template asn1_TD_INVALID_CERTIFICATES[] = {
/* 0 */ { 0, sizeof(TD_INVALID_CERTIFICATES), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ExternalPrincipalIdentifiers }
};

int ASN1CALL
decode_TD_INVALID_CERTIFICATES(const unsigned char *p, size_t len, TD_INVALID_CERTIFICATES *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TD_INVALID_CERTIFICATES, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TD_INVALID_CERTIFICATES(unsigned char *p, size_t len, const TD_INVALID_CERTIFICATES *data, size_t *size)
{
    return _asn1_encode(asn1_TD_INVALID_CERTIFICATES, p, len, data, size);
}


size_t ASN1CALL
length_TD_INVALID_CERTIFICATES(const TD_INVALID_CERTIFICATES *data)
{
    return _asn1_length(asn1_TD_INVALID_CERTIFICATES, data);
}


void ASN1CALL
free_TD_INVALID_CERTIFICATES(TD_INVALID_CERTIFICATES *data)
{
    _asn1_free_top(asn1_TD_INVALID_CERTIFICATES, data);
}


int ASN1CALL
copy_TD_INVALID_CERTIFICATES(const TD_INVALID_CERTIFICATES *from, TD_INVALID_CERTIFICATES *to)
{
    return _asn1_copy_top(asn1_TD_INVALID_CERTIFICATES, from, to);
}


char * ASN1CALL
print_TD_INVALID_CERTIFICATES(const TD_INVALID_CERTIFICATES *data, int flags)
{
    return _asn1_print_top(asn1_TD_INVALID_CERTIFICATES, flags, data);
}

/* template_members: AD_INITIAL_VERIFIED_CAS exp exp */
/* generate_template_type: ExternalPrincipalIdentifier_seofTstruct_3 */
/* generate_template_type: AD_INITIAL_VERIFIED_CAS_tag__44 */
/* generate_template_type: AD_INITIAL_VERIFIED_CAS */
const struct asn1_template asn1_AD_INITIAL_VERIFIED_CAS[] = {
/* 0 */ { 0, sizeof(AD_INITIAL_VERIFIED_CAS), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ExternalPrincipalIdentifiers_tag__19 }
};

int ASN1CALL
decode_AD_INITIAL_VERIFIED_CAS(const unsigned char *p, size_t len, AD_INITIAL_VERIFIED_CAS *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AD_INITIAL_VERIFIED_CAS, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AD_INITIAL_VERIFIED_CAS(unsigned char *p, size_t len, const AD_INITIAL_VERIFIED_CAS *data, size_t *size)
{
    return _asn1_encode(asn1_AD_INITIAL_VERIFIED_CAS, p, len, data, size);
}


size_t ASN1CALL
length_AD_INITIAL_VERIFIED_CAS(const AD_INITIAL_VERIFIED_CAS *data)
{
    return _asn1_length(asn1_AD_INITIAL_VERIFIED_CAS, data);
}


void ASN1CALL
free_AD_INITIAL_VERIFIED_CAS(AD_INITIAL_VERIFIED_CAS *data)
{
    _asn1_free_top(asn1_AD_INITIAL_VERIFIED_CAS, data);
}


int ASN1CALL
copy_AD_INITIAL_VERIFIED_CAS(const AD_INITIAL_VERIFIED_CAS *from, AD_INITIAL_VERIFIED_CAS *to)
{
    return _asn1_copy_top(asn1_AD_INITIAL_VERIFIED_CAS, from, to);
}


char * ASN1CALL
print_AD_INITIAL_VERIFIED_CAS(const AD_INITIAL_VERIFIED_CAS *data, int flags)
{
    return _asn1_print_top(asn1_AD_INITIAL_VERIFIED_CAS, flags, data);
}

/* template_members: DHRepInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DHRepInfo exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_dhSignedData_47 */
/* generate_template_type: DHRepInfo_tag_dhSignedData_46 */
/* template_members: DHRepInfo exp exp */
/* generate_template_type: DHRepInfo_tag_serverDHNonce_48 */
/* template_members: DHRepInfo exp exp */
/* generate_template_type: DHRepInfo_tag_kdf_49 */
/* generate_template_type: DHRepInfo_tag__45 */
const struct asn1_template asn1_DHRepInfo_tag__45[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct DHRepInfo), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, offsetof(struct DHRepInfo, dhSignedData), asn1_TrustedCA_tag_caName_6 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct DHRepInfo, serverDHNonce), asn1_AuthPack_tag_clientDHNonce_41 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct DHRepInfo, kdf), asn1_AuthPack_supportedKDFs_2 },
/* 4 */ { A1_OP_NAME, 0, "DHRepInfo" },
/* 5 */ { A1_OP_NAME, 0, "dhSignedData" },
/* 6 */ { A1_OP_NAME, 0, "serverDHNonce" },
/* 7 */ { A1_OP_NAME, 0, "..." },
/* 8 */ { A1_OP_NAME, 0, "kdf" },
/* 9 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: DHRepInfo */
const struct asn1_template asn1_DHRepInfo[] = {
/* 0 */ { 0, sizeof(DHRepInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DHRepInfo_tag__45 }
};

int ASN1CALL
decode_DHRepInfo(const unsigned char *p, size_t len, DHRepInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DHRepInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DHRepInfo(unsigned char *p, size_t len, const DHRepInfo *data, size_t *size)
{
    return _asn1_encode(asn1_DHRepInfo, p, len, data, size);
}


size_t ASN1CALL
length_DHRepInfo(const DHRepInfo *data)
{
    return _asn1_length(asn1_DHRepInfo, data);
}


void ASN1CALL
free_DHRepInfo(DHRepInfo *data)
{
    _asn1_free_top(asn1_DHRepInfo, data);
}


int ASN1CALL
copy_DHRepInfo(const DHRepInfo *from, DHRepInfo *to)
{
    return _asn1_copy_top(asn1_DHRepInfo, from, to);
}


char * ASN1CALL
print_DHRepInfo(const DHRepInfo *data, int flags)
{
    return _asn1_print_top(asn1_DHRepInfo, flags, data);
}

/* template_members: DHRepInfo exp exp */
/* generate_template_type: DHRepInfo_tag__50 */
const struct asn1_template asn1_DHRepInfo_tag__50[] = {
/* 0 */ { 0, sizeof(DHRepInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DHRepInfo }
};
/* generate_template_type: PA_PK_AS_REP_choice_dhInfo */
const struct asn1_template asn1_PA_PK_AS_REP_choice_dhInfo[] = {
/* 0 */ { 0, sizeof(DHRepInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_DHRepInfo_tag__50 }
};
/* template_members: heim_octet_string imp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag__52 */
/* generate_template_type: heim_octet_string_tag__51 */
/* generate_template_type: PA_PK_AS_REP_choice_encKeyPack */
const struct asn1_template asn1_PA_PK_AS_REP_choice_encKeyPack[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_IMPLICIT, 0, asn1_TrustedCA_tag_caName_6 }
};
static const struct asn1_template asn1_choice_PA_PK_AS_REP_0[] = {
/* 0 */ { offsetof(PA_PK_AS_REP, u.asn1_ellipsis), offsetof(PA_PK_AS_REP, element), ((void *)(uintptr_t)5) },
/* 1 */ { choice_PA_PK_AS_REP_dhInfo, offsetof(PA_PK_AS_REP, u.dhInfo), asn1_PA_PK_AS_REP_choice_dhInfo },
/* 2 */ { choice_PA_PK_AS_REP_encKeyPack, offsetof(PA_PK_AS_REP, u.encKeyPack), asn1_PA_PK_AS_REP_choice_encKeyPack },
/* 3 */ { 0, 0, "dhInfo" },
/* 4 */ { 0, 0, "encKeyPack" },
/* 5 */ { 0, 0, "..." }
};
/* generate_template_type: PA_PK_AS_REP */
const struct asn1_template asn1_PA_PK_AS_REP[] = {
/* 0 */ { 0, sizeof(PA_PK_AS_REP), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_PA_PK_AS_REP_0 }
};

int ASN1CALL
decode_PA_PK_AS_REP(const unsigned char *p, size_t len, PA_PK_AS_REP *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_PK_AS_REP, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_PK_AS_REP(unsigned char *p, size_t len, const PA_PK_AS_REP *data, size_t *size)
{
    return _asn1_encode(asn1_PA_PK_AS_REP, p, len, data, size);
}


size_t ASN1CALL
length_PA_PK_AS_REP(const PA_PK_AS_REP *data)
{
    return _asn1_length(asn1_PA_PK_AS_REP, data);
}


void ASN1CALL
free_PA_PK_AS_REP(PA_PK_AS_REP *data)
{
    _asn1_free_top(asn1_PA_PK_AS_REP, data);
}


int ASN1CALL
copy_PA_PK_AS_REP(const PA_PK_AS_REP *from, PA_PK_AS_REP *to)
{
    return _asn1_copy_top(asn1_PA_PK_AS_REP, from, to);
}


char * ASN1CALL
print_PA_PK_AS_REP(const PA_PK_AS_REP *data, int flags)
{
    return _asn1_print_top(asn1_PA_PK_AS_REP, flags, data);
}

/* template_members: KDCDHKeyInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KDCDHKeyInfo exp exp */
/* template_members: KDCDHKeyInfo exp exp */
/* generate_template_type: KDCDHKeyInfo_tag_subjectPublicKey_55 */
const struct asn1_template asn1_KDCDHKeyInfo_tag_subjectPublicKey_55[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: KDCDHKeyInfo_tag_subjectPublicKey_54 */
const struct asn1_template asn1_KDCDHKeyInfo_tag_subjectPublicKey_54[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_KDCDHKeyInfo_tag_subjectPublicKey_55 }
};
/* template_members: KDCDHKeyInfo exp exp */
/* template_members: unsigned exp exp */
/* generate_template_type: unsigned_tag_nonce_57 */
/* generate_template_type: KDCDHKeyInfo_tag_nonce_56 */
/* template_members: KDCDHKeyInfo exp exp */
/* generate_template_type: KDCDHKeyInfo_tag_dhKeyExpiration_58 */
/* generate_template_type: KDCDHKeyInfo_tag__53 */
const struct asn1_template asn1_KDCDHKeyInfo_tag__53[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KDCDHKeyInfo), ((void *)(uintptr_t)8) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDCDHKeyInfo, subjectPublicKey), asn1_KDCDHKeyInfo_tag_subjectPublicKey_54 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KDCDHKeyInfo, nonce), asn1_PKAuthenticator_tag_nonce_30 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KDCDHKeyInfo, dhKeyExpiration), asn1_PKAuthenticator_tag_ctime_29 },
/* 4 */ { A1_OP_NAME, 0, "KDCDHKeyInfo" },
/* 5 */ { A1_OP_NAME, 0, "subjectPublicKey" },
/* 6 */ { A1_OP_NAME, 0, "nonce" },
/* 7 */ { A1_OP_NAME, 0, "dhKeyExpiration" },
/* 8 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: KDCDHKeyInfo */
const struct asn1_template asn1_KDCDHKeyInfo[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCDHKeyInfo_tag__53 }
};

int ASN1CALL
decode_KDCDHKeyInfo(const unsigned char *p, size_t len, KDCDHKeyInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KDCDHKeyInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KDCDHKeyInfo(unsigned char *p, size_t len, const KDCDHKeyInfo *data, size_t *size)
{
    return _asn1_encode(asn1_KDCDHKeyInfo, p, len, data, size);
}


size_t ASN1CALL
length_KDCDHKeyInfo(const KDCDHKeyInfo *data)
{
    return _asn1_length(asn1_KDCDHKeyInfo, data);
}


void ASN1CALL
free_KDCDHKeyInfo(KDCDHKeyInfo *data)
{
    _asn1_free_top(asn1_KDCDHKeyInfo, data);
}


int ASN1CALL
copy_KDCDHKeyInfo(const KDCDHKeyInfo *from, KDCDHKeyInfo *to)
{
    return _asn1_copy_top(asn1_KDCDHKeyInfo, from, to);
}


char * ASN1CALL
print_KDCDHKeyInfo(const KDCDHKeyInfo *data, int flags)
{
    return _asn1_print_top(asn1_KDCDHKeyInfo, flags, data);
}

/* template_members: ReplyKeyPack exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: ReplyKeyPack exp exp */
/* generate_template_type: ReplyKeyPack_tag_replyKey_60 */
const struct asn1_template asn1_ReplyKeyPack_tag_replyKey_60[] = {
/* 0 */ { 0, sizeof(EncryptionKey), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_EncryptionKey}
};
/* template_members: ReplyKeyPack exp exp */
/* generate_template_type: ReplyKeyPack_tag_asChecksum_61 */
const struct asn1_template asn1_ReplyKeyPack_tag_asChecksum_61[] = {
/* 0 */ { 0, sizeof(Checksum), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Checksum}
};
/* generate_template_type: ReplyKeyPack_tag__59 */
const struct asn1_template asn1_ReplyKeyPack_tag__59[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct ReplyKeyPack), ((void *)(uintptr_t)6) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct ReplyKeyPack, replyKey), asn1_ReplyKeyPack_tag_replyKey_60 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct ReplyKeyPack, asChecksum), asn1_ReplyKeyPack_tag_asChecksum_61 },
/* 3 */ { A1_OP_NAME, 0, "ReplyKeyPack" },
/* 4 */ { A1_OP_NAME, 0, "replyKey" },
/* 5 */ { A1_OP_NAME, 0, "asChecksum" },
/* 6 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: ReplyKeyPack */
const struct asn1_template asn1_ReplyKeyPack[] = {
/* 0 */ { 0, sizeof(ReplyKeyPack), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ReplyKeyPack_tag__59 }
};

int ASN1CALL
decode_ReplyKeyPack(const unsigned char *p, size_t len, ReplyKeyPack *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ReplyKeyPack, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ReplyKeyPack(unsigned char *p, size_t len, const ReplyKeyPack *data, size_t *size)
{
    return _asn1_encode(asn1_ReplyKeyPack, p, len, data, size);
}


size_t ASN1CALL
length_ReplyKeyPack(const ReplyKeyPack *data)
{
    return _asn1_length(asn1_ReplyKeyPack, data);
}


void ASN1CALL
free_ReplyKeyPack(ReplyKeyPack *data)
{
    _asn1_free_top(asn1_ReplyKeyPack, data);
}


int ASN1CALL
copy_ReplyKeyPack(const ReplyKeyPack *from, ReplyKeyPack *to)
{
    return _asn1_copy_top(asn1_ReplyKeyPack, from, to);
}


char * ASN1CALL
print_ReplyKeyPack(const ReplyKeyPack *data, int flags)
{
    return _asn1_print_top(asn1_ReplyKeyPack, flags, data);
}

/* template_members: TD_DH_PARAMETERS exp exp */
/* generate_template_type: AlgorithmIdentifier_seofTstruct_4 */
/* generate_template_type: TD_DH_PARAMETERS_tag__62 */
const struct asn1_template asn1_TD_DH_PARAMETERS_tag__62[] = {
/* 0 */ { 0, sizeof(AlgorithmIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_AuthPack_supportedCMSTypes_1 }
};
/* generate_template_type: TD_DH_PARAMETERS */
const struct asn1_template asn1_TD_DH_PARAMETERS[] = {
/* 0 */ { 0, sizeof(TD_DH_PARAMETERS), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TD_DH_PARAMETERS_tag__62 }
};

int ASN1CALL
decode_TD_DH_PARAMETERS(const unsigned char *p, size_t len, TD_DH_PARAMETERS *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TD_DH_PARAMETERS, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TD_DH_PARAMETERS(unsigned char *p, size_t len, const TD_DH_PARAMETERS *data, size_t *size)
{
    return _asn1_encode(asn1_TD_DH_PARAMETERS, p, len, data, size);
}


size_t ASN1CALL
length_TD_DH_PARAMETERS(const TD_DH_PARAMETERS *data)
{
    return _asn1_length(asn1_TD_DH_PARAMETERS, data);
}


void ASN1CALL
free_TD_DH_PARAMETERS(TD_DH_PARAMETERS *data)
{
    _asn1_free_top(asn1_TD_DH_PARAMETERS, data);
}


int ASN1CALL
copy_TD_DH_PARAMETERS(const TD_DH_PARAMETERS *from, TD_DH_PARAMETERS *to)
{
    return _asn1_copy_top(asn1_TD_DH_PARAMETERS, from, to);
}


char * ASN1CALL
print_TD_DH_PARAMETERS(const TD_DH_PARAMETERS *data, int flags)
{
    return _asn1_print_top(asn1_TD_DH_PARAMETERS, flags, data);
}

/* template_members: PKAuthenticator_Win2k exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PKAuthenticator_Win2k exp exp */
/* generate_template_type: PKAuthenticator_Win2k_tag_kdcName_64 */
const struct asn1_template asn1_PKAuthenticator_Win2k_tag_kdcName_64[] = {
/* 0 */ { 0, sizeof(PrincipalName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_PrincipalName}
};
/* template_members: PKAuthenticator_Win2k exp exp */
/* generate_template_type: PKAuthenticator_Win2k_tag_kdcRealm_65 */
const struct asn1_template asn1_PKAuthenticator_Win2k_tag_kdcRealm_65[] = {
/* 0 */ { 0, sizeof(Realm), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Realm}
};
/* template_members: PKAuthenticator_Win2k exp exp */
/* template_members: unsigned exp exp */
/* generate_template_type: unsigned_tag_cusec_67 */
/* generate_template_type: PKAuthenticator_Win2k_tag_cusec_66 */
/* template_members: PKAuthenticator_Win2k exp exp */
/* generate_template_type: PKAuthenticator_Win2k_tag_ctime_68 */
/* template_members: PKAuthenticator_Win2k exp exp */
/* template_members: int exp exp */
/* generate_template_type: int_tag_nonce_70 */
const struct asn1_template asn1_int_tag_nonce_70[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_INTEGER), 0, NULL }
};
/* generate_template_type: PKAuthenticator_Win2k_tag_nonce_69 */
const struct asn1_template asn1_PKAuthenticator_Win2k_tag_nonce_69[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_int_tag_nonce_70 }
};
/* generate_template_type: PKAuthenticator_Win2k_tag__63 */
const struct asn1_template asn1_PKAuthenticator_Win2k_tag__63[] = {
/* 0 */ { 0, sizeof(struct PKAuthenticator_Win2k), ((void *)(uintptr_t)11) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PKAuthenticator_Win2k, kdcName), asn1_PKAuthenticator_Win2k_tag_kdcName_64 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PKAuthenticator_Win2k, kdcRealm), asn1_PKAuthenticator_Win2k_tag_kdcRealm_65 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct PKAuthenticator_Win2k, cusec), asn1_PKAuthenticator_tag_nonce_30 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct PKAuthenticator_Win2k, ctime), asn1_PKAuthenticator_tag_ctime_29 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct PKAuthenticator_Win2k, nonce), asn1_PKAuthenticator_Win2k_tag_nonce_69 },
/* 6 */ { A1_OP_NAME, 0, "PKAuthenticator_Win2k" },
/* 7 */ { A1_OP_NAME, 0, "kdcName" },
/* 8 */ { A1_OP_NAME, 0, "kdcRealm" },
/* 9 */ { A1_OP_NAME, 0, "cusec" },
/* 10 */ { A1_OP_NAME, 0, "ctime" },
/* 11 */ { A1_OP_NAME, 0, "nonce" }
};
/* generate_template_type: PKAuthenticator_Win2k */
const struct asn1_template asn1_PKAuthenticator_Win2k[] = {
/* 0 */ { 0, sizeof(PKAuthenticator_Win2k), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKAuthenticator_Win2k_tag__63 }
};

int ASN1CALL
decode_PKAuthenticator_Win2k(const unsigned char *p, size_t len, PKAuthenticator_Win2k *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKAuthenticator_Win2k, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKAuthenticator_Win2k(unsigned char *p, size_t len, const PKAuthenticator_Win2k *data, size_t *size)
{
    return _asn1_encode(asn1_PKAuthenticator_Win2k, p, len, data, size);
}


size_t ASN1CALL
length_PKAuthenticator_Win2k(const PKAuthenticator_Win2k *data)
{
    return _asn1_length(asn1_PKAuthenticator_Win2k, data);
}


void ASN1CALL
free_PKAuthenticator_Win2k(PKAuthenticator_Win2k *data)
{
    _asn1_free_top(asn1_PKAuthenticator_Win2k, data);
}


int ASN1CALL
copy_PKAuthenticator_Win2k(const PKAuthenticator_Win2k *from, PKAuthenticator_Win2k *to)
{
    return _asn1_copy_top(asn1_PKAuthenticator_Win2k, from, to);
}


char * ASN1CALL
print_PKAuthenticator_Win2k(const PKAuthenticator_Win2k *data, int flags)
{
    return _asn1_print_top(asn1_PKAuthenticator_Win2k, flags, data);
}

/* template_members: AuthPack_Win2k exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AuthPack_Win2k exp exp */
/* generate_template_type: AuthPack_Win2k_tag_pkAuthenticator_72 */
const struct asn1_template asn1_AuthPack_Win2k_tag_pkAuthenticator_72[] = {
/* 0 */ { 0, sizeof(PKAuthenticator_Win2k), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PKAuthenticator_Win2k }
};
/* template_members: AuthPack_Win2k exp exp */
/* generate_template_type: AuthPack_Win2k_tag_clientPublicValue_73 */
/* generate_template_type: AuthPack_Win2k_tag__71 */
const struct asn1_template asn1_AuthPack_Win2k_tag__71[] = {
/* 0 */ { 0, sizeof(struct AuthPack_Win2k), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AuthPack_Win2k, pkAuthenticator), asn1_AuthPack_Win2k_tag_pkAuthenticator_72 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct AuthPack_Win2k, clientPublicValue), asn1_AuthPack_tag_clientPublicValue_38 },
/* 3 */ { A1_OP_NAME, 0, "AuthPack_Win2k" },
/* 4 */ { A1_OP_NAME, 0, "pkAuthenticator" },
/* 5 */ { A1_OP_NAME, 0, "clientPublicValue" }
};
/* generate_template_type: AuthPack_Win2k */
const struct asn1_template asn1_AuthPack_Win2k[] = {
/* 0 */ { 0, sizeof(AuthPack_Win2k), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthPack_Win2k_tag__71 }
};

int ASN1CALL
decode_AuthPack_Win2k(const unsigned char *p, size_t len, AuthPack_Win2k *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AuthPack_Win2k, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AuthPack_Win2k(unsigned char *p, size_t len, const AuthPack_Win2k *data, size_t *size)
{
    return _asn1_encode(asn1_AuthPack_Win2k, p, len, data, size);
}


size_t ASN1CALL
length_AuthPack_Win2k(const AuthPack_Win2k *data)
{
    return _asn1_length(asn1_AuthPack_Win2k, data);
}


void ASN1CALL
free_AuthPack_Win2k(AuthPack_Win2k *data)
{
    _asn1_free_top(asn1_AuthPack_Win2k, data);
}


int ASN1CALL
copy_AuthPack_Win2k(const AuthPack_Win2k *from, AuthPack_Win2k *to)
{
    return _asn1_copy_top(asn1_AuthPack_Win2k, from, to);
}


char * ASN1CALL
print_AuthPack_Win2k(const AuthPack_Win2k *data, int flags)
{
    return _asn1_print_top(asn1_AuthPack_Win2k, flags, data);
}

/* template_members: HEIM_ANY exp exp */
/* generate_template_type: HEIM_ANY_tag__74 */
const struct asn1_template asn1_HEIM_ANY_tag__74[] = {
/* 0 */ { 0, sizeof(HEIM_ANY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_HEIM_ANY}
};
/* generate_template_type: TrustedCA_Win2k_choice_caName */
const struct asn1_template asn1_TrustedCA_Win2k_choice_caName[] = {
/* 0 */ { 0, sizeof(HEIM_ANY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_HEIM_ANY_tag__74 }
};
/* template_members: IssuerAndSerialNumber exp exp */
/* generate_template_type: IssuerAndSerialNumber_tag__75 */
const struct asn1_template asn1_IssuerAndSerialNumber_tag__75[] = {
/* 0 */ { 0, sizeof(IssuerAndSerialNumber), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_IssuerAndSerialNumber}
};
/* generate_template_type: TrustedCA_Win2k_choice_issuerAndSerial */
const struct asn1_template asn1_TrustedCA_Win2k_choice_issuerAndSerial[] = {
/* 0 */ { 0, sizeof(IssuerAndSerialNumber), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), 0, asn1_IssuerAndSerialNumber_tag__75 }
};
static const struct asn1_template asn1_choice_TrustedCA_Win2k_1[] = {
/* 0 */ { 0, offsetof(TrustedCA_Win2k, element), ((void *)(uintptr_t)4) },
/* 1 */ { choice_TrustedCA_Win2k_caName, offsetof(TrustedCA_Win2k, u.caName), asn1_TrustedCA_Win2k_choice_caName },
/* 2 */ { choice_TrustedCA_Win2k_issuerAndSerial, offsetof(TrustedCA_Win2k, u.issuerAndSerial), asn1_TrustedCA_Win2k_choice_issuerAndSerial },
/* 3 */ { 0, 0, "caName" },
/* 4 */ { 0, 0, "issuerAndSerial" }
};
/* generate_template_type: TrustedCA_Win2k */
const struct asn1_template asn1_TrustedCA_Win2k[] = {
/* 0 */ { 0, sizeof(TrustedCA_Win2k), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_TrustedCA_Win2k_1 }
};

int ASN1CALL
decode_TrustedCA_Win2k(const unsigned char *p, size_t len, TrustedCA_Win2k *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TrustedCA_Win2k, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TrustedCA_Win2k(unsigned char *p, size_t len, const TrustedCA_Win2k *data, size_t *size)
{
    return _asn1_encode(asn1_TrustedCA_Win2k, p, len, data, size);
}


size_t ASN1CALL
length_TrustedCA_Win2k(const TrustedCA_Win2k *data)
{
    return _asn1_length(asn1_TrustedCA_Win2k, data);
}


void ASN1CALL
free_TrustedCA_Win2k(TrustedCA_Win2k *data)
{
    _asn1_free_top(asn1_TrustedCA_Win2k, data);
}


int ASN1CALL
copy_TrustedCA_Win2k(const TrustedCA_Win2k *from, TrustedCA_Win2k *to)
{
    return _asn1_copy_top(asn1_TrustedCA_Win2k, from, to);
}


char * ASN1CALL
print_TrustedCA_Win2k(const TrustedCA_Win2k *data, int flags)
{
    return _asn1_print_top(asn1_TrustedCA_Win2k, flags, data);
}

/* template_members: PA_PK_AS_REQ_Win2k exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_PK_AS_REQ_Win2k exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_signed_auth_pack_78 */
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag_signed_auth_pack_77 */
/* template_members: PA_PK_AS_REQ_Win2k exp exp */
/* template_members: PA_PK_AS_REQ_Win2k exp exp */
/* generate_template_type: PA_PK_AS_REQ_Win2k_trusted_certifiers_5 */
const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_trusted_certifiers_5[] = {
/* 0 */ { 0, sizeof(TrustedCA_Win2k), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TrustedCA_Win2k }
};
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_80 */
const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_80[] = {
/* 0 */ { 0, sizeof(struct PA_PK_AS_REQ_Win2k_trusted_certifiers), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PA_PK_AS_REQ_Win2k_trusted_certifiers_5 }
};
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_79 */
const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_79[] = {
/* 0 */ { 0, sizeof(struct PA_PK_AS_REQ_Win2k_trusted_certifiers), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_80 }
};
/* template_members: PA_PK_AS_REQ_Win2k exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_kdc_cert_82 */
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag_kdc_cert_81 */
/* template_members: PA_PK_AS_REQ_Win2k exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_encryption_cert_84 */
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag_encryption_cert_83 */
/* generate_template_type: PA_PK_AS_REQ_Win2k_tag__76 */
const struct asn1_template asn1_PA_PK_AS_REQ_Win2k_tag__76[] = {
/* 0 */ { 0, sizeof(struct PA_PK_AS_REQ_Win2k), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, offsetof(struct PA_PK_AS_REQ_Win2k, signed_auth_pack), asn1_TrustedCA_tag_caName_6 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PA_PK_AS_REQ_Win2k, trusted_certifiers), asn1_PA_PK_AS_REQ_Win2k_tag_trusted_certifiers_79 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,3)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct PA_PK_AS_REQ_Win2k, kdc_cert), asn1_TrustedCA_tag_caName_6 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,4)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct PA_PK_AS_REQ_Win2k, encryption_cert), asn1_TrustedCA_tag_caName_6 },
/* 5 */ { A1_OP_NAME, 0, "PA_PK_AS_REQ_Win2k" },
/* 6 */ { A1_OP_NAME, 0, "signed-auth-pack" },
/* 7 */ { A1_OP_NAME, 0, "trusted-certifiers" },
/* 8 */ { A1_OP_NAME, 0, "kdc-cert" },
/* 9 */ { A1_OP_NAME, 0, "encryption-cert" }
};
/* generate_template_type: PA_PK_AS_REQ_Win2k */
const struct asn1_template asn1_PA_PK_AS_REQ_Win2k[] = {
/* 0 */ { 0, sizeof(PA_PK_AS_REQ_Win2k), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_PK_AS_REQ_Win2k_tag__76 }
};

int ASN1CALL
decode_PA_PK_AS_REQ_Win2k(const unsigned char *p, size_t len, PA_PK_AS_REQ_Win2k *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_PK_AS_REQ_Win2k, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_PK_AS_REQ_Win2k(unsigned char *p, size_t len, const PA_PK_AS_REQ_Win2k *data, size_t *size)
{
    return _asn1_encode(asn1_PA_PK_AS_REQ_Win2k, p, len, data, size);
}


size_t ASN1CALL
length_PA_PK_AS_REQ_Win2k(const PA_PK_AS_REQ_Win2k *data)
{
    return _asn1_length(asn1_PA_PK_AS_REQ_Win2k, data);
}


void ASN1CALL
free_PA_PK_AS_REQ_Win2k(PA_PK_AS_REQ_Win2k *data)
{
    _asn1_free_top(asn1_PA_PK_AS_REQ_Win2k, data);
}


int ASN1CALL
copy_PA_PK_AS_REQ_Win2k(const PA_PK_AS_REQ_Win2k *from, PA_PK_AS_REQ_Win2k *to)
{
    return _asn1_copy_top(asn1_PA_PK_AS_REQ_Win2k, from, to);
}


char * ASN1CALL
print_PA_PK_AS_REQ_Win2k(const PA_PK_AS_REQ_Win2k *data, int flags)
{
    return _asn1_print_top(asn1_PA_PK_AS_REQ_Win2k, flags, data);
}

/* template_members: heim_octet_string imp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag__86 */
/* generate_template_type: heim_octet_string_tag__85 */
/* generate_template_type: PA_PK_AS_REP_Win2k_choice_dhSignedData */
const struct asn1_template asn1_PA_PK_AS_REP_Win2k_choice_dhSignedData[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, 0, asn1_TrustedCA_tag_caName_6 }
};
/* template_members: heim_octet_string imp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag__88 */
/* generate_template_type: heim_octet_string_tag__87 */
/* generate_template_type: PA_PK_AS_REP_Win2k_choice_encKeyPack */
static const struct asn1_template asn1_choice_PA_PK_AS_REP_Win2k_2[] = {
/* 0 */ { 0, offsetof(PA_PK_AS_REP_Win2k, element), ((void *)(uintptr_t)4) },
/* 1 */ { choice_PA_PK_AS_REP_Win2k_dhSignedData, offsetof(PA_PK_AS_REP_Win2k, u.dhSignedData), asn1_PA_PK_AS_REP_Win2k_choice_dhSignedData },
/* 2 */ { choice_PA_PK_AS_REP_Win2k_encKeyPack, offsetof(PA_PK_AS_REP_Win2k, u.encKeyPack), asn1_PA_PK_AS_REP_choice_encKeyPack },
/* 3 */ { 0, 0, "dhSignedData" },
/* 4 */ { 0, 0, "encKeyPack" }
};
/* generate_template_type: PA_PK_AS_REP_Win2k */
const struct asn1_template asn1_PA_PK_AS_REP_Win2k[] = {
/* 0 */ { 0, sizeof(PA_PK_AS_REP_Win2k), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_PA_PK_AS_REP_Win2k_2 }
};

int ASN1CALL
decode_PA_PK_AS_REP_Win2k(const unsigned char *p, size_t len, PA_PK_AS_REP_Win2k *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_PK_AS_REP_Win2k, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_PK_AS_REP_Win2k(unsigned char *p, size_t len, const PA_PK_AS_REP_Win2k *data, size_t *size)
{
    return _asn1_encode(asn1_PA_PK_AS_REP_Win2k, p, len, data, size);
}


size_t ASN1CALL
length_PA_PK_AS_REP_Win2k(const PA_PK_AS_REP_Win2k *data)
{
    return _asn1_length(asn1_PA_PK_AS_REP_Win2k, data);
}


void ASN1CALL
free_PA_PK_AS_REP_Win2k(PA_PK_AS_REP_Win2k *data)
{
    _asn1_free_top(asn1_PA_PK_AS_REP_Win2k, data);
}


int ASN1CALL
copy_PA_PK_AS_REP_Win2k(const PA_PK_AS_REP_Win2k *from, PA_PK_AS_REP_Win2k *to)
{
    return _asn1_copy_top(asn1_PA_PK_AS_REP_Win2k, from, to);
}


char * ASN1CALL
print_PA_PK_AS_REP_Win2k(const PA_PK_AS_REP_Win2k *data, int flags)
{
    return _asn1_print_top(asn1_PA_PK_AS_REP_Win2k, flags, data);
}

/* template_members: KDCDHKeyInfo_Win2k exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KDCDHKeyInfo_Win2k exp exp */
/* template_members: int exp exp */
/* generate_template_type: int_tag_nonce_91 */
/* generate_template_type: KDCDHKeyInfo_Win2k_tag_nonce_90 */
/* template_members: KDCDHKeyInfo_Win2k exp exp */
/* template_members: KDCDHKeyInfo_Win2k exp exp */
/* generate_template_type: KDCDHKeyInfo_Win2k_tag_subjectPublicKey_93 */
const struct asn1_template asn1_KDCDHKeyInfo_Win2k_tag_subjectPublicKey_93[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo_Win2k), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: KDCDHKeyInfo_Win2k_tag_subjectPublicKey_92 */
const struct asn1_template asn1_KDCDHKeyInfo_Win2k_tag_subjectPublicKey_92[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo_Win2k), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_KDCDHKeyInfo_Win2k_tag_subjectPublicKey_93 }
};
/* generate_template_type: KDCDHKeyInfo_Win2k_tag__89 */
const struct asn1_template asn1_KDCDHKeyInfo_Win2k_tag__89[] = {
/* 0 */ { 0, sizeof(struct KDCDHKeyInfo_Win2k), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDCDHKeyInfo_Win2k, nonce), asn1_PKAuthenticator_Win2k_tag_nonce_69 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KDCDHKeyInfo_Win2k, subjectPublicKey), asn1_KDCDHKeyInfo_Win2k_tag_subjectPublicKey_92 },
/* 3 */ { A1_OP_NAME, 0, "KDCDHKeyInfo_Win2k" },
/* 4 */ { A1_OP_NAME, 0, "nonce" },
/* 5 */ { A1_OP_NAME, 0, "subjectPublicKey" }
};
/* generate_template_type: KDCDHKeyInfo_Win2k */
const struct asn1_template asn1_KDCDHKeyInfo_Win2k[] = {
/* 0 */ { 0, sizeof(KDCDHKeyInfo_Win2k), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCDHKeyInfo_Win2k_tag__89 }
};

int ASN1CALL
decode_KDCDHKeyInfo_Win2k(const unsigned char *p, size_t len, KDCDHKeyInfo_Win2k *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KDCDHKeyInfo_Win2k, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KDCDHKeyInfo_Win2k(unsigned char *p, size_t len, const KDCDHKeyInfo_Win2k *data, size_t *size)
{
    return _asn1_encode(asn1_KDCDHKeyInfo_Win2k, p, len, data, size);
}


size_t ASN1CALL
length_KDCDHKeyInfo_Win2k(const KDCDHKeyInfo_Win2k *data)
{
    return _asn1_length(asn1_KDCDHKeyInfo_Win2k, data);
}


void ASN1CALL
free_KDCDHKeyInfo_Win2k(KDCDHKeyInfo_Win2k *data)
{
    _asn1_free_top(asn1_KDCDHKeyInfo_Win2k, data);
}


int ASN1CALL
copy_KDCDHKeyInfo_Win2k(const KDCDHKeyInfo_Win2k *from, KDCDHKeyInfo_Win2k *to)
{
    return _asn1_copy_top(asn1_KDCDHKeyInfo_Win2k, from, to);
}


char * ASN1CALL
print_KDCDHKeyInfo_Win2k(const KDCDHKeyInfo_Win2k *data, int flags)
{
    return _asn1_print_top(asn1_KDCDHKeyInfo_Win2k, flags, data);
}

/* template_members: ReplyKeyPack_Win2k exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: ReplyKeyPack_Win2k exp exp */
/* generate_template_type: ReplyKeyPack_Win2k_tag_replyKey_95 */
/* template_members: ReplyKeyPack_Win2k exp exp */
/* template_members: int exp exp */
/* generate_template_type: int_tag_nonce_97 */
/* generate_template_type: ReplyKeyPack_Win2k_tag_nonce_96 */
/* generate_template_type: ReplyKeyPack_Win2k_tag__94 */
const struct asn1_template asn1_ReplyKeyPack_Win2k_tag__94[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct ReplyKeyPack_Win2k), ((void *)(uintptr_t)6) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct ReplyKeyPack_Win2k, replyKey), asn1_ReplyKeyPack_tag_replyKey_60 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct ReplyKeyPack_Win2k, nonce), asn1_PKAuthenticator_Win2k_tag_nonce_69 },
/* 3 */ { A1_OP_NAME, 0, "ReplyKeyPack_Win2k" },
/* 4 */ { A1_OP_NAME, 0, "replyKey" },
/* 5 */ { A1_OP_NAME, 0, "nonce" },
/* 6 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: ReplyKeyPack_Win2k */
const struct asn1_template asn1_ReplyKeyPack_Win2k[] = {
/* 0 */ { 0, sizeof(ReplyKeyPack_Win2k), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ReplyKeyPack_Win2k_tag__94 }
};

int ASN1CALL
decode_ReplyKeyPack_Win2k(const unsigned char *p, size_t len, ReplyKeyPack_Win2k *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ReplyKeyPack_Win2k, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ReplyKeyPack_Win2k(unsigned char *p, size_t len, const ReplyKeyPack_Win2k *data, size_t *size)
{
    return _asn1_encode(asn1_ReplyKeyPack_Win2k, p, len, data, size);
}


size_t ASN1CALL
length_ReplyKeyPack_Win2k(const ReplyKeyPack_Win2k *data)
{
    return _asn1_length(asn1_ReplyKeyPack_Win2k, data);
}


void ASN1CALL
free_ReplyKeyPack_Win2k(ReplyKeyPack_Win2k *data)
{
    _asn1_free_top(asn1_ReplyKeyPack_Win2k, data);
}


int ASN1CALL
copy_ReplyKeyPack_Win2k(const ReplyKeyPack_Win2k *from, ReplyKeyPack_Win2k *to)
{
    return _asn1_copy_top(asn1_ReplyKeyPack_Win2k, from, to);
}


char * ASN1CALL
print_ReplyKeyPack_Win2k(const ReplyKeyPack_Win2k *data, int flags)
{
    return _asn1_print_top(asn1_ReplyKeyPack_Win2k, flags, data);
}

/* template_members: PA_PK_AS_REP_BTMM exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_PK_AS_REP_BTMM exp exp */
/* generate_template_type: PA_PK_AS_REP_BTMM_tag_dhSignedData_99 */
/* template_members: PA_PK_AS_REP_BTMM exp exp */
/* generate_template_type: PA_PK_AS_REP_BTMM_tag_encKeyPack_100 */
/* generate_template_type: PA_PK_AS_REP_BTMM_tag__98 */
const struct asn1_template asn1_PA_PK_AS_REP_BTMM_tag__98[] = {
/* 0 */ { 0, sizeof(struct PA_PK_AS_REP_BTMM), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct PA_PK_AS_REP_BTMM, dhSignedData), asn1_HEIM_ANY_tag__74 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_PK_AS_REP_BTMM, encKeyPack), asn1_HEIM_ANY_tag__74 },
/* 3 */ { A1_OP_NAME, 0, "PA_PK_AS_REP_BTMM" },
/* 4 */ { A1_OP_NAME, 0, "dhSignedData" },
/* 5 */ { A1_OP_NAME, 0, "encKeyPack" }
};
/* generate_template_type: PA_PK_AS_REP_BTMM */
const struct asn1_template asn1_PA_PK_AS_REP_BTMM[] = {
/* 0 */ { 0, sizeof(PA_PK_AS_REP_BTMM), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_PK_AS_REP_BTMM_tag__98 }
};

int ASN1CALL
decode_PA_PK_AS_REP_BTMM(const unsigned char *p, size_t len, PA_PK_AS_REP_BTMM *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_PK_AS_REP_BTMM, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_PK_AS_REP_BTMM(unsigned char *p, size_t len, const PA_PK_AS_REP_BTMM *data, size_t *size)
{
    return _asn1_encode(asn1_PA_PK_AS_REP_BTMM, p, len, data, size);
}


size_t ASN1CALL
length_PA_PK_AS_REP_BTMM(const PA_PK_AS_REP_BTMM *data)
{
    return _asn1_length(asn1_PA_PK_AS_REP_BTMM, data);
}


void ASN1CALL
free_PA_PK_AS_REP_BTMM(PA_PK_AS_REP_BTMM *data)
{
    _asn1_free_top(asn1_PA_PK_AS_REP_BTMM, data);
}


int ASN1CALL
copy_PA_PK_AS_REP_BTMM(const PA_PK_AS_REP_BTMM *from, PA_PK_AS_REP_BTMM *to)
{
    return _asn1_copy_top(asn1_PA_PK_AS_REP_BTMM, from, to);
}


char * ASN1CALL
print_PA_PK_AS_REP_BTMM(const PA_PK_AS_REP_BTMM *data, int flags)
{
    return _asn1_print_top(asn1_PA_PK_AS_REP_BTMM, flags, data);
}

/* template_members: PkinitSP80056AOtherInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PkinitSP80056AOtherInfo exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_partyUInfo_103 */
/* generate_template_type: PkinitSP80056AOtherInfo_tag_partyUInfo_102 */
/* template_members: PkinitSP80056AOtherInfo exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_partyVInfo_105 */
/* generate_template_type: PkinitSP80056AOtherInfo_tag_partyVInfo_104 */
/* template_members: PkinitSP80056AOtherInfo exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_suppPubInfo_107 */
/* generate_template_type: PkinitSP80056AOtherInfo_tag_suppPubInfo_106 */
/* template_members: PkinitSP80056AOtherInfo exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_suppPrivInfo_109 */
/* generate_template_type: PkinitSP80056AOtherInfo_tag_suppPrivInfo_108 */
/* generate_template_type: PkinitSP80056AOtherInfo_tag__101 */
const struct asn1_template asn1_PkinitSP80056AOtherInfo_tag__101[] = {
/* 0 */ { 0, sizeof(struct PkinitSP80056AOtherInfo), ((void *)(uintptr_t)11) },
/* 1 */ { A1_OP_TYPE_EXTERN , offsetof(struct PkinitSP80056AOtherInfo, algorithmID), &asn1_extern_AlgorithmIdentifier},
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PkinitSP80056AOtherInfo, partyUInfo), asn1_TrustedCA_tag_caName_6 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PkinitSP80056AOtherInfo, partyVInfo), asn1_TrustedCA_tag_caName_6 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PkinitSP80056AOtherInfo, suppPubInfo), asn1_TrustedCA_tag_caName_6 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct PkinitSP80056AOtherInfo, suppPrivInfo), asn1_TrustedCA_tag_caName_6 },
/* 6 */ { A1_OP_NAME, 0, "PkinitSP80056AOtherInfo" },
/* 7 */ { A1_OP_NAME, 0, "algorithmID" },
/* 8 */ { A1_OP_NAME, 0, "partyUInfo" },
/* 9 */ { A1_OP_NAME, 0, "partyVInfo" },
/* 10 */ { A1_OP_NAME, 0, "suppPubInfo" },
/* 11 */ { A1_OP_NAME, 0, "suppPrivInfo" }
};
/* generate_template_type: PkinitSP80056AOtherInfo */
const struct asn1_template asn1_PkinitSP80056AOtherInfo[] = {
/* 0 */ { 0, sizeof(PkinitSP80056AOtherInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PkinitSP80056AOtherInfo_tag__101 }
};

int ASN1CALL
decode_PkinitSP80056AOtherInfo(const unsigned char *p, size_t len, PkinitSP80056AOtherInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PkinitSP80056AOtherInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PkinitSP80056AOtherInfo(unsigned char *p, size_t len, const PkinitSP80056AOtherInfo *data, size_t *size)
{
    return _asn1_encode(asn1_PkinitSP80056AOtherInfo, p, len, data, size);
}


size_t ASN1CALL
length_PkinitSP80056AOtherInfo(const PkinitSP80056AOtherInfo *data)
{
    return _asn1_length(asn1_PkinitSP80056AOtherInfo, data);
}


void ASN1CALL
free_PkinitSP80056AOtherInfo(PkinitSP80056AOtherInfo *data)
{
    _asn1_free_top(asn1_PkinitSP80056AOtherInfo, data);
}


int ASN1CALL
copy_PkinitSP80056AOtherInfo(const PkinitSP80056AOtherInfo *from, PkinitSP80056AOtherInfo *to)
{
    return _asn1_copy_top(asn1_PkinitSP80056AOtherInfo, from, to);
}


char * ASN1CALL
print_PkinitSP80056AOtherInfo(const PkinitSP80056AOtherInfo *data, int flags)
{
    return _asn1_print_top(asn1_PkinitSP80056AOtherInfo, flags, data);
}

/* template_members: PkinitSuppPubInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PkinitSuppPubInfo exp exp */
/* template_members: int exp exp */
/* generate_template_type: int_tag_enctype_112 */
/* generate_template_type: PkinitSuppPubInfo_tag_enctype_111 */
/* template_members: PkinitSuppPubInfo exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_as_REQ_114 */
/* generate_template_type: PkinitSuppPubInfo_tag_as_REQ_113 */
/* template_members: PkinitSuppPubInfo exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_pk_as_rep_116 */
/* generate_template_type: PkinitSuppPubInfo_tag_pk_as_rep_115 */
/* template_members: PkinitSuppPubInfo exp exp */
/* generate_template_type: PkinitSuppPubInfo_tag_ticket_117 */
const struct asn1_template asn1_PkinitSuppPubInfo_tag_ticket_117[] = {
/* 0 */ { 0, sizeof(Ticket), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Ticket}
};
/* generate_template_type: PkinitSuppPubInfo_tag__110 */
const struct asn1_template asn1_PkinitSuppPubInfo_tag__110[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PkinitSuppPubInfo), ((void *)(uintptr_t)10) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PkinitSuppPubInfo, enctype), asn1_PKAuthenticator_Win2k_tag_nonce_69 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PkinitSuppPubInfo, as_REQ), asn1_TrustedCA_tag_caName_6 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct PkinitSuppPubInfo, pk_as_rep), asn1_TrustedCA_tag_caName_6 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct PkinitSuppPubInfo, ticket), asn1_PkinitSuppPubInfo_tag_ticket_117 },
/* 5 */ { A1_OP_NAME, 0, "PkinitSuppPubInfo" },
/* 6 */ { A1_OP_NAME, 0, "enctype" },
/* 7 */ { A1_OP_NAME, 0, "as-REQ" },
/* 8 */ { A1_OP_NAME, 0, "pk-as-rep" },
/* 9 */ { A1_OP_NAME, 0, "ticket" },
/* 10 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: PkinitSuppPubInfo */
const struct asn1_template asn1_PkinitSuppPubInfo[] = {
/* 0 */ { 0, sizeof(PkinitSuppPubInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PkinitSuppPubInfo_tag__110 }
};

int ASN1CALL
decode_PkinitSuppPubInfo(const unsigned char *p, size_t len, PkinitSuppPubInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PkinitSuppPubInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PkinitSuppPubInfo(unsigned char *p, size_t len, const PkinitSuppPubInfo *data, size_t *size)
{
    return _asn1_encode(asn1_PkinitSuppPubInfo, p, len, data, size);
}


size_t ASN1CALL
length_PkinitSuppPubInfo(const PkinitSuppPubInfo *data)
{
    return _asn1_length(asn1_PkinitSuppPubInfo, data);
}


void ASN1CALL
free_PkinitSuppPubInfo(PkinitSuppPubInfo *data)
{
    _asn1_free_top(asn1_PkinitSuppPubInfo, data);
}


int ASN1CALL
copy_PkinitSuppPubInfo(const PkinitSuppPubInfo *from, PkinitSuppPubInfo *to)
{
    return _asn1_copy_top(asn1_PkinitSuppPubInfo, from, to);
}


char * ASN1CALL
print_PkinitSuppPubInfo(const PkinitSuppPubInfo *data, int flags)
{
    return _asn1_print_top(asn1_PkinitSuppPubInfo, flags, data);
}

