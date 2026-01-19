/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/pkcs12.asn1 */
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
#include "pkcs12_asn1.h"
#include "pkcs12_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_ContentInfo = {
	(asn1_type_encode)encode_ContentInfo,
	(asn1_type_decode)decode_ContentInfo,
	(asn1_type_length)length_ContentInfo,
	(asn1_type_copy)copy_ContentInfo,
	(asn1_type_release)free_ContentInfo,
	(asn1_type_print)print_ContentInfo,
	sizeof(ContentInfo)
};
static const struct asn1_type_func asn1_extern_DigestInfo = {
	(asn1_type_encode)encode_DigestInfo,
	(asn1_type_decode)decode_DigestInfo,
	(asn1_type_length)length_DigestInfo,
	(asn1_type_copy)copy_DigestInfo,
	(asn1_type_release)free_DigestInfo,
	(asn1_type_print)print_DigestInfo,
	sizeof(DigestInfo)
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
static const struct asn1_type_func asn1_extern_HEIM_ANY_SET = {
	(asn1_type_encode)encode_HEIM_ANY_SET,
	(asn1_type_decode)decode_HEIM_ANY_SET,
	(asn1_type_length)length_HEIM_ANY_SET,
	(asn1_type_copy)copy_HEIM_ANY_SET,
	(asn1_type_release)free_HEIM_ANY_SET,
	(asn1_type_print)print_HEIM_ANY_SET,
	sizeof(HEIM_ANY_SET)
};
static unsigned oid_id_pkcs_12_variable_num[6] =  { 1, 2, 840, 113549, 1, 12};
const heim_oid asn1_oid_id_pkcs_12 = { 6, oid_id_pkcs_12_variable_num };

static unsigned oid_id_pkcs_12PbeIds_variable_num[7] =  { 1, 2, 840, 113549, 1, 12, 1};
const heim_oid asn1_oid_id_pkcs_12PbeIds = { 7, oid_id_pkcs_12PbeIds_variable_num };

static unsigned oid_id_pbeWithSHAAnd128BitRC4_variable_num[8] =  { 1, 2, 840, 113549, 1, 12, 1, 1};
const heim_oid asn1_oid_id_pbeWithSHAAnd128BitRC4 = { 8, oid_id_pbeWithSHAAnd128BitRC4_variable_num };

static unsigned oid_id_pbeWithSHAAnd40BitRC4_variable_num[8] =  { 1, 2, 840, 113549, 1, 12, 1, 2};
const heim_oid asn1_oid_id_pbeWithSHAAnd40BitRC4 = { 8, oid_id_pbeWithSHAAnd40BitRC4_variable_num };

static unsigned oid_id_pbeWithSHAAnd3_KeyTripleDES_CBC_variable_num[8] =  { 1, 2, 840, 113549, 1, 12, 1, 3};
const heim_oid asn1_oid_id_pbeWithSHAAnd3_KeyTripleDES_CBC = { 8, oid_id_pbeWithSHAAnd3_KeyTripleDES_CBC_variable_num };

static unsigned oid_id_pbeWithSHAAnd2_KeyTripleDES_CBC_variable_num[8] =  { 1, 2, 840, 113549, 1, 12, 1, 4};
const heim_oid asn1_oid_id_pbeWithSHAAnd2_KeyTripleDES_CBC = { 8, oid_id_pbeWithSHAAnd2_KeyTripleDES_CBC_variable_num };

static unsigned oid_id_pbeWithSHAAnd128BitRC2_CBC_variable_num[8] =  { 1, 2, 840, 113549, 1, 12, 1, 5};
const heim_oid asn1_oid_id_pbeWithSHAAnd128BitRC2_CBC = { 8, oid_id_pbeWithSHAAnd128BitRC2_CBC_variable_num };

static unsigned oid_id_pbewithSHAAnd40BitRC2_CBC_variable_num[8] =  { 1, 2, 840, 113549, 1, 12, 1, 6};
const heim_oid asn1_oid_id_pbewithSHAAnd40BitRC2_CBC = { 8, oid_id_pbewithSHAAnd40BitRC2_CBC_variable_num };

static unsigned oid_id_pkcs12_bagtypes_variable_num[8] =  { 1, 2, 840, 113549, 1, 12, 10, 1};
const heim_oid asn1_oid_id_pkcs12_bagtypes = { 8, oid_id_pkcs12_bagtypes_variable_num };

static unsigned oid_id_pkcs12_keyBag_variable_num[9] =  { 1, 2, 840, 113549, 1, 12, 10, 1, 1};
const heim_oid asn1_oid_id_pkcs12_keyBag = { 9, oid_id_pkcs12_keyBag_variable_num };

static unsigned oid_id_pkcs12_pkcs8ShroudedKeyBag_variable_num[9] =  { 1, 2, 840, 113549, 1, 12, 10, 1, 2};
const heim_oid asn1_oid_id_pkcs12_pkcs8ShroudedKeyBag = { 9, oid_id_pkcs12_pkcs8ShroudedKeyBag_variable_num };

static unsigned oid_id_pkcs12_certBag_variable_num[9] =  { 1, 2, 840, 113549, 1, 12, 10, 1, 3};
const heim_oid asn1_oid_id_pkcs12_certBag = { 9, oid_id_pkcs12_certBag_variable_num };

static unsigned oid_id_pkcs12_crlBag_variable_num[9] =  { 1, 2, 840, 113549, 1, 12, 10, 1, 4};
const heim_oid asn1_oid_id_pkcs12_crlBag = { 9, oid_id_pkcs12_crlBag_variable_num };

static unsigned oid_id_pkcs12_secretBag_variable_num[9] =  { 1, 2, 840, 113549, 1, 12, 10, 1, 5};
const heim_oid asn1_oid_id_pkcs12_secretBag = { 9, oid_id_pkcs12_secretBag_variable_num };

static unsigned oid_id_pkcs12_safeContentsBag_variable_num[9] =  { 1, 2, 840, 113549, 1, 12, 10, 1, 6};
const heim_oid asn1_oid_id_pkcs12_safeContentsBag = { 9, oid_id_pkcs12_safeContentsBag_variable_num };

extern const struct asn1_template asn1_PKCS12_MacData[];
extern const struct asn1_template asn1_PKCS12_PFX[];
extern const struct asn1_template asn1_PKCS12_AuthenticatedSafe[];
extern const struct asn1_template asn1_PKCS12_Attribute[];
extern const struct asn1_template asn1_PKCS12_Attributes[];
extern const struct asn1_template asn1_PKCS12_SafeBag[];
extern const struct asn1_template asn1_PKCS12_SafeContents[];
extern const struct asn1_template asn1_PKCS12_CertBag[];
extern const struct asn1_template asn1_PKCS12_PBEParams[];
extern const struct asn1_template asn1_PKCS12_OctetString[];
extern const struct asn1_template asn1_PKCS12_OctetString[];
/* template_members: PKCS12_MacData exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PKCS12_MacData exp exp */
/* generate_template_type: PKCS12_MacData_tag_macSalt_1 */
const struct asn1_template asn1_PKCS12_MacData_tag_macSalt_1[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* template_members: PKCS12_MacData exp exp */
/* generate_template_type: PKCS12_MacData_tag_iterations_2 */
const struct asn1_template asn1_PKCS12_MacData_tag_iterations_2[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_INTEGER), 0, NULL }
};
/* generate_template_type: PKCS12_MacData_tag__0 */
const struct asn1_template asn1_PKCS12_MacData_tag__0[] = {
/* 0 */ { 0, sizeof(struct PKCS12_MacData), ((void *)(uintptr_t)7) },
/* 1 */ { A1_OP_TYPE_EXTERN , offsetof(struct PKCS12_MacData, mac), &asn1_extern_DigestInfo},
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct PKCS12_MacData, macSalt), asn1_PKCS12_MacData_tag_macSalt_1 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct PKCS12_MacData, iterations), asn1_PKCS12_MacData_tag_iterations_2 },
/* 4 */ { A1_OP_NAME, 0, "PKCS12_MacData" },
/* 5 */ { A1_OP_NAME, 0, "mac" },
/* 6 */ { A1_OP_NAME, 0, "macSalt" },
/* 7 */ { A1_OP_NAME, 0, "iterations" }
};
/* generate_template_type: PKCS12_MacData */
const struct asn1_template asn1_PKCS12_MacData[] = {
/* 0 */ { 0, sizeof(PKCS12_MacData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKCS12_MacData_tag__0 }
};

int ASN1CALL
decode_PKCS12_MacData(const unsigned char *p, size_t len, PKCS12_MacData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS12_MacData, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS12_MacData(unsigned char *p, size_t len, const PKCS12_MacData *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS12_MacData, p, len, data, size);
}


size_t ASN1CALL
length_PKCS12_MacData(const PKCS12_MacData *data)
{
    return _asn1_length(asn1_PKCS12_MacData, data);
}


void ASN1CALL
free_PKCS12_MacData(PKCS12_MacData *data)
{
    _asn1_free_top(asn1_PKCS12_MacData, data);
}


int ASN1CALL
copy_PKCS12_MacData(const PKCS12_MacData *from, PKCS12_MacData *to)
{
    return _asn1_copy_top(asn1_PKCS12_MacData, from, to);
}


char * ASN1CALL
print_PKCS12_MacData(const PKCS12_MacData *data, int flags)
{
    return _asn1_print_top(asn1_PKCS12_MacData, flags, data);
}

/* template_members: PKCS12_PFX exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PKCS12_PFX exp exp */
/* generate_template_type: PKCS12_PFX_tag_version_4 */
/* generate_template_type: PKCS12_PFX_tag__3 */
const struct asn1_template asn1_PKCS12_PFX_tag__3[] = {
/* 0 */ { 0, sizeof(struct PKCS12_PFX), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct PKCS12_PFX, version), asn1_PKCS12_MacData_tag_iterations_2 },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct PKCS12_PFX, authSafe), &asn1_extern_ContentInfo},
/* 3 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct PKCS12_PFX, macData), asn1_PKCS12_MacData },
/* 4 */ { A1_OP_NAME, 0, "PKCS12_PFX" },
/* 5 */ { A1_OP_NAME, 0, "version" },
/* 6 */ { A1_OP_NAME, 0, "authSafe" },
/* 7 */ { A1_OP_NAME, 0, "macData" }
};
/* generate_template_type: PKCS12_PFX */
const struct asn1_template asn1_PKCS12_PFX[] = {
/* 0 */ { 0, sizeof(PKCS12_PFX), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKCS12_PFX_tag__3 }
};

int ASN1CALL
decode_PKCS12_PFX(const unsigned char *p, size_t len, PKCS12_PFX *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS12_PFX, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS12_PFX(unsigned char *p, size_t len, const PKCS12_PFX *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS12_PFX, p, len, data, size);
}


size_t ASN1CALL
length_PKCS12_PFX(const PKCS12_PFX *data)
{
    return _asn1_length(asn1_PKCS12_PFX, data);
}


void ASN1CALL
free_PKCS12_PFX(PKCS12_PFX *data)
{
    _asn1_free_top(asn1_PKCS12_PFX, data);
}


int ASN1CALL
copy_PKCS12_PFX(const PKCS12_PFX *from, PKCS12_PFX *to)
{
    return _asn1_copy_top(asn1_PKCS12_PFX, from, to);
}


char * ASN1CALL
print_PKCS12_PFX(const PKCS12_PFX *data, int flags)
{
    return _asn1_print_top(asn1_PKCS12_PFX, flags, data);
}

/* template_members: PKCS12_AuthenticatedSafe exp exp */
/* generate_template_type: ContentInfo_seofTstruct_0 */
const struct asn1_template asn1_ContentInfo_seofTstruct_0[] = {
/* 0 */ { 0, sizeof(ContentInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_ContentInfo}
};
/* generate_template_type: PKCS12_AuthenticatedSafe_tag__5 */
const struct asn1_template asn1_PKCS12_AuthenticatedSafe_tag__5[] = {
/* 0 */ { 0, sizeof(ContentInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_ContentInfo_seofTstruct_0 }
};
/* generate_template_type: PKCS12_AuthenticatedSafe */
const struct asn1_template asn1_PKCS12_AuthenticatedSafe[] = {
/* 0 */ { 0, sizeof(PKCS12_AuthenticatedSafe), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKCS12_AuthenticatedSafe_tag__5 }
};

int ASN1CALL
decode_PKCS12_AuthenticatedSafe(const unsigned char *p, size_t len, PKCS12_AuthenticatedSafe *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS12_AuthenticatedSafe, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS12_AuthenticatedSafe(unsigned char *p, size_t len, const PKCS12_AuthenticatedSafe *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS12_AuthenticatedSafe, p, len, data, size);
}


size_t ASN1CALL
length_PKCS12_AuthenticatedSafe(const PKCS12_AuthenticatedSafe *data)
{
    return _asn1_length(asn1_PKCS12_AuthenticatedSafe, data);
}


void ASN1CALL
free_PKCS12_AuthenticatedSafe(PKCS12_AuthenticatedSafe *data)
{
    _asn1_free_top(asn1_PKCS12_AuthenticatedSafe, data);
}


int ASN1CALL
copy_PKCS12_AuthenticatedSafe(const PKCS12_AuthenticatedSafe *from, PKCS12_AuthenticatedSafe *to)
{
    return _asn1_copy_top(asn1_PKCS12_AuthenticatedSafe, from, to);
}


char * ASN1CALL
print_PKCS12_AuthenticatedSafe(const PKCS12_AuthenticatedSafe *data, int flags)
{
    return _asn1_print_top(asn1_PKCS12_AuthenticatedSafe, flags, data);
}

/* template_members: PKCS12_Attribute exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PKCS12_Attribute exp exp */
/* generate_template_type: PKCS12_Attribute_tag_attrId_7 */
const struct asn1_template asn1_PKCS12_Attribute_tag_attrId_7[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* generate_template_type: PKCS12_Attribute_tag__6 */
const struct asn1_template asn1_PKCS12_Attribute_tag__6[] = {
/* 0 */ { 0, sizeof(struct PKCS12_Attribute), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct PKCS12_Attribute, attrId), asn1_PKCS12_Attribute_tag_attrId_7 },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct PKCS12_Attribute, attrValues), &asn1_extern_HEIM_ANY_SET},
/* 3 */ { A1_OP_NAME, 0, "PKCS12_Attribute" },
/* 4 */ { A1_OP_NAME, 0, "attrId" },
/* 5 */ { A1_OP_NAME, 0, "attrValues" }
};
/* generate_template_type: PKCS12_Attribute */
const struct asn1_template asn1_PKCS12_Attribute[] = {
/* 0 */ { 0, sizeof(PKCS12_Attribute), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKCS12_Attribute_tag__6 }
};

int ASN1CALL
decode_PKCS12_Attribute(const unsigned char *p, size_t len, PKCS12_Attribute *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS12_Attribute, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS12_Attribute(unsigned char *p, size_t len, const PKCS12_Attribute *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS12_Attribute, p, len, data, size);
}


size_t ASN1CALL
length_PKCS12_Attribute(const PKCS12_Attribute *data)
{
    return _asn1_length(asn1_PKCS12_Attribute, data);
}


void ASN1CALL
free_PKCS12_Attribute(PKCS12_Attribute *data)
{
    _asn1_free_top(asn1_PKCS12_Attribute, data);
}


int ASN1CALL
copy_PKCS12_Attribute(const PKCS12_Attribute *from, PKCS12_Attribute *to)
{
    return _asn1_copy_top(asn1_PKCS12_Attribute, from, to);
}


char * ASN1CALL
print_PKCS12_Attribute(const PKCS12_Attribute *data, int flags)
{
    return _asn1_print_top(asn1_PKCS12_Attribute, flags, data);
}

/* template_members: PKCS12_Attributes exp exp */
/* generate_template_type: PKCS12_Attribute_seofTstruct_1 */
const struct asn1_template asn1_PKCS12_Attribute_seofTstruct_1[] = {
/* 0 */ { 0, sizeof(PKCS12_Attribute), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PKCS12_Attribute }
};
/* generate_template_type: PKCS12_Attributes_tag__8 */
const struct asn1_template asn1_PKCS12_Attributes_tag__8[] = {
/* 0 */ { 0, sizeof(PKCS12_Attribute), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_PKCS12_Attribute_seofTstruct_1 }
};
/* generate_template_type: PKCS12_Attributes */
const struct asn1_template asn1_PKCS12_Attributes[] = {
/* 0 */ { 0, sizeof(PKCS12_Attributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_PKCS12_Attributes_tag__8 }
};

int ASN1CALL
decode_PKCS12_Attributes(const unsigned char *p, size_t len, PKCS12_Attributes *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS12_Attributes, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS12_Attributes(unsigned char *p, size_t len, const PKCS12_Attributes *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS12_Attributes, p, len, data, size);
}


size_t ASN1CALL
length_PKCS12_Attributes(const PKCS12_Attributes *data)
{
    return _asn1_length(asn1_PKCS12_Attributes, data);
}


void ASN1CALL
free_PKCS12_Attributes(PKCS12_Attributes *data)
{
    _asn1_free_top(asn1_PKCS12_Attributes, data);
}


int ASN1CALL
copy_PKCS12_Attributes(const PKCS12_Attributes *from, PKCS12_Attributes *to)
{
    return _asn1_copy_top(asn1_PKCS12_Attributes, from, to);
}


char * ASN1CALL
print_PKCS12_Attributes(const PKCS12_Attributes *data, int flags)
{
    return _asn1_print_top(asn1_PKCS12_Attributes, flags, data);
}

/* template_members: PKCS12_SafeBag exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PKCS12_SafeBag exp exp */
/* generate_template_type: PKCS12_SafeBag_tag_bagId_10 */
/* template_members: PKCS12_SafeBag exp exp */
/* generate_template_type: PKCS12_SafeBag_tag_bagValue_11 */
const struct asn1_template asn1_PKCS12_SafeBag_tag_bagValue_11[] = {
/* 0 */ { 0, sizeof(HEIM_ANY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_HEIM_ANY}
};
/* generate_template_type: PKCS12_SafeBag_tag__9 */
const struct asn1_template asn1_PKCS12_SafeBag_tag__9[] = {
/* 0 */ { 0, sizeof(struct PKCS12_SafeBag), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct PKCS12_SafeBag, bagId), asn1_PKCS12_Attribute_tag_attrId_7 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PKCS12_SafeBag, bagValue), asn1_PKCS12_SafeBag_tag_bagValue_11 },
/* 3 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct PKCS12_SafeBag, bagAttributes), asn1_PKCS12_Attributes },
/* 4 */ { A1_OP_NAME, 0, "PKCS12_SafeBag" },
/* 5 */ { A1_OP_NAME, 0, "bagId" },
/* 6 */ { A1_OP_NAME, 0, "bagValue" },
/* 7 */ { A1_OP_NAME, 0, "bagAttributes" }
};
/* generate_template_type: PKCS12_SafeBag */
const struct asn1_template asn1_PKCS12_SafeBag[] = {
/* 0 */ { 0, sizeof(PKCS12_SafeBag), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKCS12_SafeBag_tag__9 }
};

int ASN1CALL
decode_PKCS12_SafeBag(const unsigned char *p, size_t len, PKCS12_SafeBag *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS12_SafeBag, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS12_SafeBag(unsigned char *p, size_t len, const PKCS12_SafeBag *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS12_SafeBag, p, len, data, size);
}


size_t ASN1CALL
length_PKCS12_SafeBag(const PKCS12_SafeBag *data)
{
    return _asn1_length(asn1_PKCS12_SafeBag, data);
}


void ASN1CALL
free_PKCS12_SafeBag(PKCS12_SafeBag *data)
{
    _asn1_free_top(asn1_PKCS12_SafeBag, data);
}


int ASN1CALL
copy_PKCS12_SafeBag(const PKCS12_SafeBag *from, PKCS12_SafeBag *to)
{
    return _asn1_copy_top(asn1_PKCS12_SafeBag, from, to);
}


char * ASN1CALL
print_PKCS12_SafeBag(const PKCS12_SafeBag *data, int flags)
{
    return _asn1_print_top(asn1_PKCS12_SafeBag, flags, data);
}

/* template_members: PKCS12_SafeContents exp exp */
/* generate_template_type: PKCS12_SafeBag_seofTstruct_2 */
const struct asn1_template asn1_PKCS12_SafeBag_seofTstruct_2[] = {
/* 0 */ { 0, sizeof(PKCS12_SafeBag), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PKCS12_SafeBag }
};
/* generate_template_type: PKCS12_SafeContents_tag__12 */
const struct asn1_template asn1_PKCS12_SafeContents_tag__12[] = {
/* 0 */ { 0, sizeof(PKCS12_SafeBag), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PKCS12_SafeBag_seofTstruct_2 }
};
/* generate_template_type: PKCS12_SafeContents */
const struct asn1_template asn1_PKCS12_SafeContents[] = {
/* 0 */ { 0, sizeof(PKCS12_SafeContents), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKCS12_SafeContents_tag__12 }
};

int ASN1CALL
decode_PKCS12_SafeContents(const unsigned char *p, size_t len, PKCS12_SafeContents *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS12_SafeContents, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS12_SafeContents(unsigned char *p, size_t len, const PKCS12_SafeContents *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS12_SafeContents, p, len, data, size);
}


size_t ASN1CALL
length_PKCS12_SafeContents(const PKCS12_SafeContents *data)
{
    return _asn1_length(asn1_PKCS12_SafeContents, data);
}


void ASN1CALL
free_PKCS12_SafeContents(PKCS12_SafeContents *data)
{
    _asn1_free_top(asn1_PKCS12_SafeContents, data);
}


int ASN1CALL
copy_PKCS12_SafeContents(const PKCS12_SafeContents *from, PKCS12_SafeContents *to)
{
    return _asn1_copy_top(asn1_PKCS12_SafeContents, from, to);
}


char * ASN1CALL
print_PKCS12_SafeContents(const PKCS12_SafeContents *data, int flags)
{
    return _asn1_print_top(asn1_PKCS12_SafeContents, flags, data);
}

/* template_members: PKCS12_CertBag exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PKCS12_CertBag exp exp */
/* generate_template_type: PKCS12_CertBag_tag_certType_14 */
/* template_members: PKCS12_CertBag exp exp */
/* generate_template_type: PKCS12_CertBag_tag_certValue_15 */
/* generate_template_type: PKCS12_CertBag_tag__13 */
const struct asn1_template asn1_PKCS12_CertBag_tag__13[] = {
/* 0 */ { 0, sizeof(struct PKCS12_CertBag), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct PKCS12_CertBag, certType), asn1_PKCS12_Attribute_tag_attrId_7 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PKCS12_CertBag, certValue), asn1_PKCS12_SafeBag_tag_bagValue_11 },
/* 3 */ { A1_OP_NAME, 0, "PKCS12_CertBag" },
/* 4 */ { A1_OP_NAME, 0, "certType" },
/* 5 */ { A1_OP_NAME, 0, "certValue" }
};
/* generate_template_type: PKCS12_CertBag */
const struct asn1_template asn1_PKCS12_CertBag[] = {
/* 0 */ { 0, sizeof(PKCS12_CertBag), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKCS12_CertBag_tag__13 }
};

int ASN1CALL
decode_PKCS12_CertBag(const unsigned char *p, size_t len, PKCS12_CertBag *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS12_CertBag, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS12_CertBag(unsigned char *p, size_t len, const PKCS12_CertBag *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS12_CertBag, p, len, data, size);
}


size_t ASN1CALL
length_PKCS12_CertBag(const PKCS12_CertBag *data)
{
    return _asn1_length(asn1_PKCS12_CertBag, data);
}


void ASN1CALL
free_PKCS12_CertBag(PKCS12_CertBag *data)
{
    _asn1_free_top(asn1_PKCS12_CertBag, data);
}


int ASN1CALL
copy_PKCS12_CertBag(const PKCS12_CertBag *from, PKCS12_CertBag *to)
{
    return _asn1_copy_top(asn1_PKCS12_CertBag, from, to);
}


char * ASN1CALL
print_PKCS12_CertBag(const PKCS12_CertBag *data, int flags)
{
    return _asn1_print_top(asn1_PKCS12_CertBag, flags, data);
}

/* template_members: PKCS12_PBEParams exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PKCS12_PBEParams exp exp */
/* generate_template_type: PKCS12_PBEParams_tag_salt_17 */
/* template_members: PKCS12_PBEParams exp exp */
/* generate_template_type: PKCS12_PBEParams_tag_iterations_18 */
const struct asn1_template asn1_PKCS12_PBEParams_tag_iterations_18[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* generate_template_type: PKCS12_PBEParams_tag__16 */
const struct asn1_template asn1_PKCS12_PBEParams_tag__16[] = {
/* 0 */ { 0, sizeof(struct PKCS12_PBEParams), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct PKCS12_PBEParams, salt), asn1_PKCS12_MacData_tag_macSalt_1 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct PKCS12_PBEParams, iterations), asn1_PKCS12_PBEParams_tag_iterations_18 },
/* 3 */ { A1_OP_NAME, 0, "PKCS12_PBEParams" },
/* 4 */ { A1_OP_NAME, 0, "salt" },
/* 5 */ { A1_OP_NAME, 0, "iterations" }
};
/* generate_template_type: PKCS12_PBEParams */
const struct asn1_template asn1_PKCS12_PBEParams[] = {
/* 0 */ { 0, sizeof(PKCS12_PBEParams), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKCS12_PBEParams_tag__16 }
};

int ASN1CALL
decode_PKCS12_PBEParams(const unsigned char *p, size_t len, PKCS12_PBEParams *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS12_PBEParams, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS12_PBEParams(unsigned char *p, size_t len, const PKCS12_PBEParams *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS12_PBEParams, p, len, data, size);
}


size_t ASN1CALL
length_PKCS12_PBEParams(const PKCS12_PBEParams *data)
{
    return _asn1_length(asn1_PKCS12_PBEParams, data);
}


void ASN1CALL
free_PKCS12_PBEParams(PKCS12_PBEParams *data)
{
    _asn1_free_top(asn1_PKCS12_PBEParams, data);
}


int ASN1CALL
copy_PKCS12_PBEParams(const PKCS12_PBEParams *from, PKCS12_PBEParams *to)
{
    return _asn1_copy_top(asn1_PKCS12_PBEParams, from, to);
}


char * ASN1CALL
print_PKCS12_PBEParams(const PKCS12_PBEParams *data, int flags)
{
    return _asn1_print_top(asn1_PKCS12_PBEParams, flags, data);
}

/* template_members: PKCS12_OctetString exp exp */
/* generate_template_type: PKCS12_OctetString_tag__19 */
/* generate_template_type: PKCS12_OctetString */
const struct asn1_template asn1_PKCS12_OctetString[] = {
/* 0 */ { 0, sizeof(PKCS12_OctetString), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_PKCS12_MacData_tag_macSalt_1 }
};

int ASN1CALL
decode_PKCS12_OctetString(const unsigned char *p, size_t len, PKCS12_OctetString *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS12_OctetString, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS12_OctetString(unsigned char *p, size_t len, const PKCS12_OctetString *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS12_OctetString, p, len, data, size);
}


size_t ASN1CALL
length_PKCS12_OctetString(const PKCS12_OctetString *data)
{
    return _asn1_length(asn1_PKCS12_OctetString, data);
}


void ASN1CALL
free_PKCS12_OctetString(PKCS12_OctetString *data)
{
    _asn1_free_top(asn1_PKCS12_OctetString, data);
}


int ASN1CALL
copy_PKCS12_OctetString(const PKCS12_OctetString *from, PKCS12_OctetString *to)
{
    return _asn1_copy_top(asn1_PKCS12_OctetString, from, to);
}


char * ASN1CALL
print_PKCS12_OctetString(const PKCS12_OctetString *data, int flags)
{
    return _asn1_print_top(asn1_PKCS12_OctetString, flags, data);
}

