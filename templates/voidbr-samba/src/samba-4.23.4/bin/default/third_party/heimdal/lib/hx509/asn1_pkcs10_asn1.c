/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/pkcs10.asn1 */
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
#include "pkcs10_asn1.h"
#include "pkcs10_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_Name = {
	(asn1_type_encode)encode_Name,
	(asn1_type_decode)decode_Name,
	(asn1_type_length)length_Name,
	(asn1_type_copy)copy_Name,
	(asn1_type_release)free_Name,
	(asn1_type_print)print_Name,
	sizeof(Name)
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
static const struct asn1_type_func asn1_extern_Attribute = {
	(asn1_type_encode)encode_Attribute,
	(asn1_type_decode)decode_Attribute,
	(asn1_type_length)length_Attribute,
	(asn1_type_copy)copy_Attribute,
	(asn1_type_release)free_Attribute,
	(asn1_type_print)print_Attribute,
	sizeof(Attribute)
};
static const struct asn1_type_func asn1_extern_Extensions = {
	(asn1_type_encode)encode_Extensions,
	(asn1_type_decode)decode_Extensions,
	(asn1_type_length)length_Extensions,
	(asn1_type_copy)copy_Extensions,
	(asn1_type_release)free_Extensions,
	(asn1_type_print)print_Extensions,
	sizeof(Extensions)
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
extern const struct asn1_template asn1_PKCS10_Version[];
extern const struct asn1_template asn1_PKCS10_Version[];
extern const struct asn1_template asn1_CertificationRequestInfo[];
extern const struct asn1_template asn1_CertificationRequest[];
extern const struct asn1_template asn1_IOSCertificationRequestInfo[];
extern const struct asn1_template asn1_IOSCertificationRequest[];
static unsigned oid_id_pkcs9_extReq_copy_variable_num[7] =  { 1, 2, 840, 113549, 1, 9, 14};
const heim_oid asn1_oid_id_pkcs9_extReq_copy = { 7, oid_id_pkcs9_extReq_copy_variable_num };

extern const struct asn1_template asn1_CRIExtensions[];
extern const struct asn1_template asn1_CRIExtensions[];
extern const struct asn1_template asn1_CRIAttributes[];
extern const struct asn1_template asn1_CRIAttributeSet[];
/* template_members: PKCS10_Version exp exp */
const struct asn1_template asn1_PKCS10_Version_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_NAME, 0, "pkcs10-v1" }
};
/* generate_template_type: PKCS10_Version_tag__0 */
const struct asn1_template asn1_PKCS10_Version_tag__0[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_PKCS10_Version_enum_names }
};
/* generate_template_type: PKCS10_Version */
const struct asn1_template asn1_PKCS10_Version[] = {
/* 0 */ { 0, sizeof(PKCS10_Version), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_PKCS10_Version_tag__0 }
};

int ASN1CALL
decode_PKCS10_Version(const unsigned char *p, size_t len, PKCS10_Version *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS10_Version, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS10_Version(unsigned char *p, size_t len, const PKCS10_Version *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS10_Version, p, len, data, size);
}


size_t ASN1CALL
length_PKCS10_Version(const PKCS10_Version *data)
{
    return _asn1_length(asn1_PKCS10_Version, data);
}


void ASN1CALL
free_PKCS10_Version(PKCS10_Version *data)
{
    _asn1_free_top(asn1_PKCS10_Version, data);
}


int ASN1CALL
copy_PKCS10_Version(const PKCS10_Version *from, PKCS10_Version *to)
{
    return _asn1_copy_top(asn1_PKCS10_Version, from, to);
}


char * ASN1CALL
print_PKCS10_Version(const PKCS10_Version *data, int flags)
{
    return _asn1_print_top(asn1_PKCS10_Version, flags, data);
}

/* template_members: CertificationRequestInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: CertificationRequestInfo exp imp */
/* template_members: CertificationRequestInfo exp exp */
/* generate_template_type: CertificationRequestInfo_attributes_0 */
const struct asn1_template asn1_CertificationRequestInfo_attributes_0[] = {
/* 0 */ { 0, sizeof(Attribute), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Attribute}
};
/* generate_template_type: CertificationRequestInfo_tag_attributes_3 */
const struct asn1_template asn1_CertificationRequestInfo_tag_attributes_3[] = {
/* 0 */ { 0, sizeof(struct CertificationRequestInfo_attributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_CertificationRequestInfo_attributes_0 }
};
/* generate_template_type: CertificationRequestInfo_tag_attributes_2 */
const struct asn1_template asn1_CertificationRequestInfo_tag_attributes_2[] = {
/* 0 */ { 0, sizeof(struct CertificationRequestInfo_attributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_CertificationRequestInfo_tag_attributes_3 }
};
/* generate_template_type: CertificationRequestInfo_tag__1 */
const struct asn1_template asn1_CertificationRequestInfo_tag__1[] = {
/* 0 */ { 0, sizeof(struct CertificationRequestInfo), ((void *)(uintptr_t)9) },
/* 1 */ { A1_OP_TYPE , offsetof(struct CertificationRequestInfo, version), asn1_PKCS10_Version },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct CertificationRequestInfo, subject), &asn1_extern_Name},
/* 3 */ { A1_OP_TYPE_EXTERN , offsetof(struct CertificationRequestInfo, subjectPKInfo), &asn1_extern_SubjectPublicKeyInfo},
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct CertificationRequestInfo, attributes), asn1_CertificationRequestInfo_tag_attributes_2 },
/* 5 */ { A1_OP_NAME, 0, "CertificationRequestInfo" },
/* 6 */ { A1_OP_NAME, 0, "version" },
/* 7 */ { A1_OP_NAME, 0, "subject" },
/* 8 */ { A1_OP_NAME, 0, "subjectPKInfo" },
/* 9 */ { A1_OP_NAME, 0, "attributes" }
};
/* generate_template_type: CertificationRequestInfo */
const struct asn1_template asn1_CertificationRequestInfo[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(CertificationRequestInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CertificationRequestInfo_tag__1 }
};

int ASN1CALL
decode_CertificationRequestInfo(const unsigned char *p, size_t len, CertificationRequestInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CertificationRequestInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CertificationRequestInfo(unsigned char *p, size_t len, const CertificationRequestInfo *data, size_t *size)
{
    return _asn1_encode(asn1_CertificationRequestInfo, p, len, data, size);
}


size_t ASN1CALL
length_CertificationRequestInfo(const CertificationRequestInfo *data)
{
    return _asn1_length(asn1_CertificationRequestInfo, data);
}


void ASN1CALL
free_CertificationRequestInfo(CertificationRequestInfo *data)
{
    _asn1_free_top(asn1_CertificationRequestInfo, data);
}


int ASN1CALL
copy_CertificationRequestInfo(const CertificationRequestInfo *from, CertificationRequestInfo *to)
{
    return _asn1_copy_top(asn1_CertificationRequestInfo, from, to);
}


char * ASN1CALL
print_CertificationRequestInfo(const CertificationRequestInfo *data, int flags)
{
    return _asn1_print_top(asn1_CertificationRequestInfo, flags, data);
}

/* template_members: CertificationRequest exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: CertificationRequest exp exp */
/* generate_template_type: CertificationRequest_tag_signature_5 */
const struct asn1_template asn1_CertificationRequest_tag_signature_5[] = {
/* 0 */ { 0, sizeof(CertificationRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: CertificationRequest_tag__4 */
const struct asn1_template asn1_CertificationRequest_tag__4[] = {
/* 0 */ { 0, sizeof(struct CertificationRequest), ((void *)(uintptr_t)7) },
/* 1 */ { A1_OP_TYPE , offsetof(struct CertificationRequest, certificationRequestInfo), asn1_CertificationRequestInfo },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct CertificationRequest, signatureAlgorithm), &asn1_extern_AlgorithmIdentifier},
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct CertificationRequest, signature), asn1_CertificationRequest_tag_signature_5 },
/* 4 */ { A1_OP_NAME, 0, "CertificationRequest" },
/* 5 */ { A1_OP_NAME, 0, "certificationRequestInfo" },
/* 6 */ { A1_OP_NAME, 0, "signatureAlgorithm" },
/* 7 */ { A1_OP_NAME, 0, "signature" }
};
/* generate_template_type: CertificationRequest */
const struct asn1_template asn1_CertificationRequest[] = {
/* 0 */ { 0, sizeof(CertificationRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CertificationRequest_tag__4 }
};

int ASN1CALL
decode_CertificationRequest(const unsigned char *p, size_t len, CertificationRequest *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CertificationRequest, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CertificationRequest(unsigned char *p, size_t len, const CertificationRequest *data, size_t *size)
{
    return _asn1_encode(asn1_CertificationRequest, p, len, data, size);
}


size_t ASN1CALL
length_CertificationRequest(const CertificationRequest *data)
{
    return _asn1_length(asn1_CertificationRequest, data);
}


void ASN1CALL
free_CertificationRequest(CertificationRequest *data)
{
    _asn1_free_top(asn1_CertificationRequest, data);
}


int ASN1CALL
copy_CertificationRequest(const CertificationRequest *from, CertificationRequest *to)
{
    return _asn1_copy_top(asn1_CertificationRequest, from, to);
}


char * ASN1CALL
print_CertificationRequest(const CertificationRequest *data, int flags)
{
    return _asn1_print_top(asn1_CertificationRequest, flags, data);
}

/* template_members: CRIAttributeSet exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: CRIAttributeSet exp exp */
/* generate_template_type: CRIAttributeSet_tag_type_7 */
const struct asn1_template asn1_CRIAttributeSet_tag_type_7[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* template_members: CRIAttributeSet exp exp */
/* generate_template_type: CRIAttributeSet_values_1 */
const struct asn1_template asn1_CRIAttributeSet_values_1[] = {
/* 0 */ { 0, sizeof(HEIM_ANY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_HEIM_ANY}
};
/* generate_template_type: CRIAttributeSet_tag_values_8 */
const struct asn1_template asn1_CRIAttributeSet_tag_values_8[] = {
/* 0 */ { 0, sizeof(struct CRIAttributeSet_values), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_CRIAttributeSet_values_1 }
};
const struct asn1_template asn1_CRIAttributes[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_NAME, 0, "CRIAttributes" },
/* 2 */ { A1_OP_NAME, 0, "at-extReq" },
/* 3 */ { A1_OP_OPENTYPE_ID, 0, (const void *)&asn1_oid_id_pkcs9_extReq_copy },
/* 4 */ { A1_OP_OPENTYPE, sizeof(CRIExtensions), (const void *)&asn1_CRIExtensions }
};
/* generate_template_type: CRIAttributeSet_tag__6 */
const struct asn1_template asn1_CRIAttributeSet_tag__6[] = {
/* 0 */ { 0, sizeof(struct CRIAttributeSet), ((void *)(uintptr_t)6) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct CRIAttributeSet, type), asn1_CRIAttributeSet_tag_type_7 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), offsetof(struct CRIAttributeSet, values), asn1_CRIAttributeSet_tag_values_8 },
/* 3 */ { A1_OP_OPENTYPE_OBJSET | A1_OS_IS_SORTED |A1_OS_OT_IS_ARRAY | (1 << 10) | 0, offsetof(CRIAttributeSet, _ioschoice_values), asn1_CRIAttributes },
/* 4 */ { A1_OP_NAME, 0, "CRIAttributeSet" },
/* 5 */ { A1_OP_NAME, 0, "type" },
/* 6 */ { A1_OP_NAME, 0, "values" }
};
/* generate_template_type: CRIAttributeSet */
const struct asn1_template asn1_CRIAttributeSet[] = {
/* 0 */ { 0, sizeof(CRIAttributeSet), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CRIAttributeSet_tag__6 }
};

int ASN1CALL
decode_CRIAttributeSet(const unsigned char *p, size_t len, CRIAttributeSet *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CRIAttributeSet, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CRIAttributeSet(unsigned char *p, size_t len, const CRIAttributeSet *data, size_t *size)
{
    return _asn1_encode(asn1_CRIAttributeSet, p, len, data, size);
}


size_t ASN1CALL
length_CRIAttributeSet(const CRIAttributeSet *data)
{
    return _asn1_length(asn1_CRIAttributeSet, data);
}


void ASN1CALL
free_CRIAttributeSet(CRIAttributeSet *data)
{
    _asn1_free_top(asn1_CRIAttributeSet, data);
}


int ASN1CALL
copy_CRIAttributeSet(const CRIAttributeSet *from, CRIAttributeSet *to)
{
    return _asn1_copy_top(asn1_CRIAttributeSet, from, to);
}


char * ASN1CALL
print_CRIAttributeSet(const CRIAttributeSet *data, int flags)
{
    return _asn1_print_top(asn1_CRIAttributeSet, flags, data);
}

/* template_members: IOSCertificationRequestInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: IOSCertificationRequestInfo exp imp */
/* template_members: IOSCertificationRequestInfo exp exp */
/* generate_template_type: IOSCertificationRequestInfo_attributes_2 */
const struct asn1_template asn1_IOSCertificationRequestInfo_attributes_2[] = {
/* 0 */ { 0, sizeof(CRIAttributeSet), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CRIAttributeSet }
};
/* generate_template_type: IOSCertificationRequestInfo_tag_attributes_11 */
const struct asn1_template asn1_IOSCertificationRequestInfo_tag_attributes_11[] = {
/* 0 */ { 0, sizeof(struct IOSCertificationRequestInfo_attributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_IOSCertificationRequestInfo_attributes_2 }
};
/* generate_template_type: IOSCertificationRequestInfo_tag_attributes_10 */
const struct asn1_template asn1_IOSCertificationRequestInfo_tag_attributes_10[] = {
/* 0 */ { 0, sizeof(struct IOSCertificationRequestInfo_attributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_IOSCertificationRequestInfo_tag_attributes_11 }
};
/* generate_template_type: IOSCertificationRequestInfo_tag__9 */
const struct asn1_template asn1_IOSCertificationRequestInfo_tag__9[] = {
/* 0 */ { 0, sizeof(struct IOSCertificationRequestInfo), ((void *)(uintptr_t)9) },
/* 1 */ { A1_OP_TYPE , offsetof(struct IOSCertificationRequestInfo, version), asn1_PKCS10_Version },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct IOSCertificationRequestInfo, subject), &asn1_extern_Name},
/* 3 */ { A1_OP_TYPE_EXTERN , offsetof(struct IOSCertificationRequestInfo, subjectPKInfo), &asn1_extern_SubjectPublicKeyInfo},
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct IOSCertificationRequestInfo, attributes), asn1_IOSCertificationRequestInfo_tag_attributes_10 },
/* 5 */ { A1_OP_NAME, 0, "IOSCertificationRequestInfo" },
/* 6 */ { A1_OP_NAME, 0, "version" },
/* 7 */ { A1_OP_NAME, 0, "subject" },
/* 8 */ { A1_OP_NAME, 0, "subjectPKInfo" },
/* 9 */ { A1_OP_NAME, 0, "attributes" }
};
/* generate_template_type: IOSCertificationRequestInfo */
const struct asn1_template asn1_IOSCertificationRequestInfo[] = {
/* 0 */ { 0, sizeof(IOSCertificationRequestInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_IOSCertificationRequestInfo_tag__9 }
};

int ASN1CALL
decode_IOSCertificationRequestInfo(const unsigned char *p, size_t len, IOSCertificationRequestInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_IOSCertificationRequestInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_IOSCertificationRequestInfo(unsigned char *p, size_t len, const IOSCertificationRequestInfo *data, size_t *size)
{
    return _asn1_encode(asn1_IOSCertificationRequestInfo, p, len, data, size);
}


size_t ASN1CALL
length_IOSCertificationRequestInfo(const IOSCertificationRequestInfo *data)
{
    return _asn1_length(asn1_IOSCertificationRequestInfo, data);
}


void ASN1CALL
free_IOSCertificationRequestInfo(IOSCertificationRequestInfo *data)
{
    _asn1_free_top(asn1_IOSCertificationRequestInfo, data);
}


int ASN1CALL
copy_IOSCertificationRequestInfo(const IOSCertificationRequestInfo *from, IOSCertificationRequestInfo *to)
{
    return _asn1_copy_top(asn1_IOSCertificationRequestInfo, from, to);
}


char * ASN1CALL
print_IOSCertificationRequestInfo(const IOSCertificationRequestInfo *data, int flags)
{
    return _asn1_print_top(asn1_IOSCertificationRequestInfo, flags, data);
}

/* template_members: IOSCertificationRequest exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: IOSCertificationRequest exp exp */
/* generate_template_type: IOSCertificationRequest_tag_signature_13 */
const struct asn1_template asn1_IOSCertificationRequest_tag_signature_13[] = {
/* 0 */ { 0, sizeof(IOSCertificationRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: IOSCertificationRequest_tag__12 */
const struct asn1_template asn1_IOSCertificationRequest_tag__12[] = {
/* 0 */ { 0, sizeof(struct IOSCertificationRequest), ((void *)(uintptr_t)7) },
/* 1 */ { A1_OP_TYPE , offsetof(struct IOSCertificationRequest, certificationRequestInfo), asn1_IOSCertificationRequestInfo },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct IOSCertificationRequest, signatureAlgorithm), &asn1_extern_AlgorithmIdentifier},
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct IOSCertificationRequest, signature), asn1_IOSCertificationRequest_tag_signature_13 },
/* 4 */ { A1_OP_NAME, 0, "IOSCertificationRequest" },
/* 5 */ { A1_OP_NAME, 0, "certificationRequestInfo" },
/* 6 */ { A1_OP_NAME, 0, "signatureAlgorithm" },
/* 7 */ { A1_OP_NAME, 0, "signature" }
};
/* generate_template_type: IOSCertificationRequest */
const struct asn1_template asn1_IOSCertificationRequest[] = {
/* 0 */ { 0, sizeof(IOSCertificationRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_IOSCertificationRequest_tag__12 }
};

int ASN1CALL
decode_IOSCertificationRequest(const unsigned char *p, size_t len, IOSCertificationRequest *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_IOSCertificationRequest, 0|0, p, len, data, size);
}


int ASN1CALL
encode_IOSCertificationRequest(unsigned char *p, size_t len, const IOSCertificationRequest *data, size_t *size)
{
    return _asn1_encode(asn1_IOSCertificationRequest, p, len, data, size);
}


size_t ASN1CALL
length_IOSCertificationRequest(const IOSCertificationRequest *data)
{
    return _asn1_length(asn1_IOSCertificationRequest, data);
}


void ASN1CALL
free_IOSCertificationRequest(IOSCertificationRequest *data)
{
    _asn1_free_top(asn1_IOSCertificationRequest, data);
}


int ASN1CALL
copy_IOSCertificationRequest(const IOSCertificationRequest *from, IOSCertificationRequest *to)
{
    return _asn1_copy_top(asn1_IOSCertificationRequest, from, to);
}


char * ASN1CALL
print_IOSCertificationRequest(const IOSCertificationRequest *data, int flags)
{
    return _asn1_print_top(asn1_IOSCertificationRequest, flags, data);
}

/* generate_template_type: CRIExtensions */
const struct asn1_template asn1_CRIExtensions[] = {
/* 0 */ { 0, sizeof(CRIExtensions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Extensions}
};

int ASN1CALL
decode_CRIExtensions(const unsigned char *p, size_t len, CRIExtensions *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CRIExtensions, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CRIExtensions(unsigned char *p, size_t len, const CRIExtensions *data, size_t *size)
{
    return _asn1_encode(asn1_CRIExtensions, p, len, data, size);
}


size_t ASN1CALL
length_CRIExtensions(const CRIExtensions *data)
{
    return _asn1_length(asn1_CRIExtensions, data);
}


void ASN1CALL
free_CRIExtensions(CRIExtensions *data)
{
    _asn1_free_top(asn1_CRIExtensions, data);
}


int ASN1CALL
copy_CRIExtensions(const CRIExtensions *from, CRIExtensions *to)
{
    return _asn1_copy_top(asn1_CRIExtensions, from, to);
}


char * ASN1CALL
print_CRIExtensions(const CRIExtensions *data, int flags)
{
    return _asn1_print_top(asn1_CRIExtensions, flags, data);
}

