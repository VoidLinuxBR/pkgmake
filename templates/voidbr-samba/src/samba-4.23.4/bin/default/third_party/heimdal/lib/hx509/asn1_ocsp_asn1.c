/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/ocsp.asn1 */
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
#include "ocsp_asn1.h"
#include "ocsp_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_Certificate = {
	(asn1_type_encode)encode_Certificate,
	(asn1_type_decode)decode_Certificate,
	(asn1_type_length)length_Certificate,
	(asn1_type_copy)copy_Certificate,
	(asn1_type_release)free_Certificate,
	(asn1_type_print)print_Certificate,
	sizeof(Certificate)
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
static const struct asn1_type_func asn1_extern_CRLReason = {
	(asn1_type_encode)encode_CRLReason,
	(asn1_type_decode)decode_CRLReason,
	(asn1_type_length)length_CRLReason,
	(asn1_type_copy)copy_CRLReason,
	(asn1_type_release)free_CRLReason,
	(asn1_type_print)print_CRLReason,
	sizeof(CRLReason)
};
static const struct asn1_type_func asn1_extern_Name = {
	(asn1_type_encode)encode_Name,
	(asn1_type_decode)decode_Name,
	(asn1_type_length)length_Name,
	(asn1_type_copy)copy_Name,
	(asn1_type_release)free_Name,
	(asn1_type_print)print_Name,
	sizeof(Name)
};
static const struct asn1_type_func asn1_extern_GeneralName = {
	(asn1_type_encode)encode_GeneralName,
	(asn1_type_decode)decode_GeneralName,
	(asn1_type_length)length_GeneralName,
	(asn1_type_copy)copy_GeneralName,
	(asn1_type_release)free_GeneralName,
	(asn1_type_print)print_GeneralName,
	sizeof(GeneralName)
};
static const struct asn1_type_func asn1_extern_CertificateSerialNumber = {
	(asn1_type_encode)encode_CertificateSerialNumber,
	(asn1_type_decode)decode_CertificateSerialNumber,
	(asn1_type_length)length_CertificateSerialNumber,
	(asn1_type_copy)copy_CertificateSerialNumber,
	(asn1_type_release)free_CertificateSerialNumber,
	(asn1_type_print)print_CertificateSerialNumber,
	sizeof(CertificateSerialNumber)
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
extern const struct asn1_template asn1_OCSPVersion[];
extern const struct asn1_template asn1_OCSPVersion[];
extern const struct asn1_template asn1_OCSPCertStatus[];
extern const struct asn1_template asn1_OCSPCertID[];
extern const struct asn1_template asn1_OCSPSingleResponse[];
extern const struct asn1_template asn1_OCSPInnerRequest[];
extern const struct asn1_template asn1_OCSPTBSRequest[];
extern const struct asn1_template asn1_OCSPSignature[];
extern const struct asn1_template asn1_OCSPRequest[];
extern const struct asn1_template asn1_OCSPResponseBytes[];
extern const struct asn1_template asn1_OCSPResponseStatus[];
extern const struct asn1_template asn1_OCSPResponseStatus[];
extern const struct asn1_template asn1_OCSPResponse[];
extern const struct asn1_template asn1_OCSPKeyHash[];
extern const struct asn1_template asn1_OCSPKeyHash[];
extern const struct asn1_template asn1_OCSPResponderID[];
extern const struct asn1_template asn1_OCSPResponseData[];
extern const struct asn1_template asn1_OCSPBasicOCSPResponse[];
static unsigned oid_id_pkix_ocsp_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 48, 1};
const heim_oid asn1_oid_id_pkix_ocsp = { 9, oid_id_pkix_ocsp_variable_num };

static unsigned oid_id_pkix_ocsp_basic_variable_num[10] =  { 1, 3, 6, 1, 5, 5, 7, 48, 1, 1};
const heim_oid asn1_oid_id_pkix_ocsp_basic = { 10, oid_id_pkix_ocsp_basic_variable_num };

static unsigned oid_id_pkix_ocsp_nonce_variable_num[10] =  { 1, 3, 6, 1, 5, 5, 7, 48, 1, 2};
const heim_oid asn1_oid_id_pkix_ocsp_nonce = { 10, oid_id_pkix_ocsp_nonce_variable_num };

/* template_members: OCSPVersion exp exp */
const struct asn1_template asn1_OCSPVersion_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_NAME, 0, "ocsp-v1" }
};
/* generate_template_type: OCSPVersion_tag__0 */
const struct asn1_template asn1_OCSPVersion_tag__0[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_OCSPVersion_enum_names }
};
/* generate_template_type: OCSPVersion */
const struct asn1_template asn1_OCSPVersion[] = {
/* 0 */ { 0, sizeof(OCSPVersion), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_OCSPVersion_tag__0 }
};

int ASN1CALL
decode_OCSPVersion(const unsigned char *p, size_t len, OCSPVersion *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPVersion, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPVersion(unsigned char *p, size_t len, const OCSPVersion *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPVersion, p, len, data, size);
}


size_t ASN1CALL
length_OCSPVersion(const OCSPVersion *data)
{
    return _asn1_length(asn1_OCSPVersion, data);
}


void ASN1CALL
free_OCSPVersion(OCSPVersion *data)
{
    _asn1_free_top(asn1_OCSPVersion, data);
}


int ASN1CALL
copy_OCSPVersion(const OCSPVersion *from, OCSPVersion *to)
{
    return _asn1_copy_top(asn1_OCSPVersion, from, to);
}


char * ASN1CALL
print_OCSPVersion(const OCSPVersion *data, int flags)
{
    return _asn1_print_top(asn1_OCSPVersion, flags, data);
}

/* template_members: heim_integer imp imp */
/* template_members: heim_integer exp exp */
/* generate_template_type: heim_integer_tag__2 */
const struct asn1_template asn1_heim_integer_tag__2[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)0) },
};
/* generate_template_type: heim_integer_tag__1 */
const struct asn1_template asn1_heim_integer_tag__1[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Null), 0, asn1_heim_integer_tag__2 }
};
/* generate_template_type: OCSPCertStatus_choice_good */
const struct asn1_template asn1_OCSPCertStatus_choice_good[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_IMPLICIT, 0, asn1_heim_integer_tag__1 }
};
/* template_members: OCSPCertStatus_revoked imp imp */
/* template_members: OCSPCertStatus_revoked exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OCSPCertStatus_revoked exp exp */
/* generate_template_type: OCSPCertStatus_revoked_tag_revocationTime_5 */
const struct asn1_template asn1_OCSPCertStatus_revoked_tag_revocationTime_5[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_GENERALIZED_TIME), 0, NULL }
};
/* template_members: OCSPCertStatus_revoked exp exp */
/* generate_template_type: OCSPCertStatus_revoked_tag_revocationReason_6 */
const struct asn1_template asn1_OCSPCertStatus_revoked_tag_revocationReason_6[] = {
/* 0 */ { 0, sizeof(CRLReason), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_CRLReason}
};
/* generate_template_type: OCSPCertStatus_revoked_tag__4 */
const struct asn1_template asn1_OCSPCertStatus_revoked_tag__4[] = {
/* 0 */ { 0, sizeof(struct OCSPCertStatus_revoked), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), offsetof(struct OCSPCertStatus_revoked, revocationTime), asn1_OCSPCertStatus_revoked_tag_revocationTime_5 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPCertStatus_revoked, revocationReason), asn1_OCSPCertStatus_revoked_tag_revocationReason_6 },
/* 3 */ { A1_OP_NAME, 0, "OCSPCertStatus_revoked" },
/* 4 */ { A1_OP_NAME, 0, "revocationTime" },
/* 5 */ { A1_OP_NAME, 0, "revocationReason" }
};
/* generate_template_type: OCSPCertStatus_revoked_tag__3 */
const struct asn1_template asn1_OCSPCertStatus_revoked_tag__3[] = {
/* 0 */ { 0, sizeof(struct OCSPCertStatus_revoked), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPCertStatus_revoked_tag__4 }
};
/* generate_template_type: OCSPCertStatus_choice_revoked */
const struct asn1_template asn1_OCSPCertStatus_choice_revoked[] = {
/* 0 */ { 0, sizeof(struct OCSPCertStatus_revoked), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_IMPLICIT, 0, asn1_OCSPCertStatus_revoked_tag__3 }
};
/* template_members: heim_integer imp imp */
/* template_members: heim_integer exp exp */
/* generate_template_type: heim_integer_tag__8 */
/* generate_template_type: heim_integer_tag__7 */
/* generate_template_type: OCSPCertStatus_choice_unknown */
const struct asn1_template asn1_OCSPCertStatus_choice_unknown[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,2)|A1_FLAG_IMPLICIT, 0, asn1_heim_integer_tag__1 }
};
static const struct asn1_template asn1_choice_OCSPCertStatus_0[] = {
/* 0 */ { 0, offsetof(OCSPCertStatus, element), ((void *)(uintptr_t)6) },
/* 1 */ { choice_OCSPCertStatus_good, offsetof(OCSPCertStatus, u.good), asn1_OCSPCertStatus_choice_good },
/* 2 */ { choice_OCSPCertStatus_revoked, offsetof(OCSPCertStatus, u.revoked), asn1_OCSPCertStatus_choice_revoked },
/* 3 */ { choice_OCSPCertStatus_unknown, offsetof(OCSPCertStatus, u.unknown), asn1_OCSPCertStatus_choice_unknown },
/* 4 */ { 0, 0, "good" },
/* 5 */ { 0, 0, "revoked" },
/* 6 */ { 0, 0, "unknown" }
};
/* generate_template_type: OCSPCertStatus */
const struct asn1_template asn1_OCSPCertStatus[] = {
/* 0 */ { 0, sizeof(OCSPCertStatus), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_OCSPCertStatus_0 }
};

int ASN1CALL
decode_OCSPCertStatus(const unsigned char *p, size_t len, OCSPCertStatus *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPCertStatus, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPCertStatus(unsigned char *p, size_t len, const OCSPCertStatus *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPCertStatus, p, len, data, size);
}


size_t ASN1CALL
length_OCSPCertStatus(const OCSPCertStatus *data)
{
    return _asn1_length(asn1_OCSPCertStatus, data);
}


void ASN1CALL
free_OCSPCertStatus(OCSPCertStatus *data)
{
    _asn1_free_top(asn1_OCSPCertStatus, data);
}


int ASN1CALL
copy_OCSPCertStatus(const OCSPCertStatus *from, OCSPCertStatus *to)
{
    return _asn1_copy_top(asn1_OCSPCertStatus, from, to);
}


char * ASN1CALL
print_OCSPCertStatus(const OCSPCertStatus *data, int flags)
{
    return _asn1_print_top(asn1_OCSPCertStatus, flags, data);
}

/* template_members: OCSPCertID exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OCSPCertID exp exp */
/* generate_template_type: OCSPCertID_tag_issuerNameHash_10 */
const struct asn1_template asn1_OCSPCertID_tag_issuerNameHash_10[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* template_members: OCSPCertID exp exp */
/* generate_template_type: OCSPCertID_tag_issuerKeyHash_11 */
/* generate_template_type: OCSPCertID_tag__9 */
const struct asn1_template asn1_OCSPCertID_tag__9[] = {
/* 0 */ { 0, sizeof(struct OCSPCertID), ((void *)(uintptr_t)9) },
/* 1 */ { A1_OP_TYPE_EXTERN , offsetof(struct OCSPCertID, hashAlgorithm), &asn1_extern_AlgorithmIdentifier},
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct OCSPCertID, issuerNameHash), asn1_OCSPCertID_tag_issuerNameHash_10 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct OCSPCertID, issuerKeyHash), asn1_OCSPCertID_tag_issuerNameHash_10 },
/* 4 */ { A1_OP_TYPE_EXTERN , offsetof(struct OCSPCertID, serialNumber), &asn1_extern_CertificateSerialNumber},
/* 5 */ { A1_OP_NAME, 0, "OCSPCertID" },
/* 6 */ { A1_OP_NAME, 0, "hashAlgorithm" },
/* 7 */ { A1_OP_NAME, 0, "issuerNameHash" },
/* 8 */ { A1_OP_NAME, 0, "issuerKeyHash" },
/* 9 */ { A1_OP_NAME, 0, "serialNumber" }
};
/* generate_template_type: OCSPCertID */
const struct asn1_template asn1_OCSPCertID[] = {
/* 0 */ { 0, sizeof(OCSPCertID), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPCertID_tag__9 }
};

int ASN1CALL
decode_OCSPCertID(const unsigned char *p, size_t len, OCSPCertID *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPCertID, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPCertID(unsigned char *p, size_t len, const OCSPCertID *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPCertID, p, len, data, size);
}


size_t ASN1CALL
length_OCSPCertID(const OCSPCertID *data)
{
    return _asn1_length(asn1_OCSPCertID, data);
}


void ASN1CALL
free_OCSPCertID(OCSPCertID *data)
{
    _asn1_free_top(asn1_OCSPCertID, data);
}


int ASN1CALL
copy_OCSPCertID(const OCSPCertID *from, OCSPCertID *to)
{
    return _asn1_copy_top(asn1_OCSPCertID, from, to);
}


char * ASN1CALL
print_OCSPCertID(const OCSPCertID *data, int flags)
{
    return _asn1_print_top(asn1_OCSPCertID, flags, data);
}

/* template_members: OCSPSingleResponse exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OCSPSingleResponse exp exp */
/* generate_template_type: OCSPSingleResponse_tag_thisUpdate_13 */
/* template_members: OCSPSingleResponse exp exp */
/* template_members: time_t exp exp */
/* generate_template_type: time_t_tag_nextUpdate_15 */
/* generate_template_type: OCSPSingleResponse_tag_nextUpdate_14 */
const struct asn1_template asn1_OCSPSingleResponse_tag_nextUpdate_14[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), 0, asn1_OCSPCertStatus_revoked_tag_revocationTime_5 }
};
/* template_members: OCSPSingleResponse exp exp */
/* generate_template_type: OCSPSingleResponse_tag_singleExtensions_16 */
const struct asn1_template asn1_OCSPSingleResponse_tag_singleExtensions_16[] = {
/* 0 */ { 0, sizeof(Extensions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Extensions}
};
/* generate_template_type: OCSPSingleResponse_tag__12 */
const struct asn1_template asn1_OCSPSingleResponse_tag__12[] = {
/* 0 */ { 0, sizeof(struct OCSPSingleResponse), ((void *)(uintptr_t)11) },
/* 1 */ { A1_OP_TYPE , offsetof(struct OCSPSingleResponse, certID), asn1_OCSPCertID },
/* 2 */ { A1_OP_TYPE , offsetof(struct OCSPSingleResponse, certStatus), asn1_OCSPCertStatus },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), offsetof(struct OCSPSingleResponse, thisUpdate), asn1_OCSPCertStatus_revoked_tag_revocationTime_5 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPSingleResponse, nextUpdate), asn1_OCSPSingleResponse_tag_nextUpdate_14 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct OCSPSingleResponse, singleExtensions), asn1_OCSPSingleResponse_tag_singleExtensions_16 },
/* 6 */ { A1_OP_NAME, 0, "OCSPSingleResponse" },
/* 7 */ { A1_OP_NAME, 0, "certID" },
/* 8 */ { A1_OP_NAME, 0, "certStatus" },
/* 9 */ { A1_OP_NAME, 0, "thisUpdate" },
/* 10 */ { A1_OP_NAME, 0, "nextUpdate" },
/* 11 */ { A1_OP_NAME, 0, "singleExtensions" }
};
/* generate_template_type: OCSPSingleResponse */
const struct asn1_template asn1_OCSPSingleResponse[] = {
/* 0 */ { 0, sizeof(OCSPSingleResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPSingleResponse_tag__12 }
};

int ASN1CALL
decode_OCSPSingleResponse(const unsigned char *p, size_t len, OCSPSingleResponse *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPSingleResponse, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPSingleResponse(unsigned char *p, size_t len, const OCSPSingleResponse *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPSingleResponse, p, len, data, size);
}


size_t ASN1CALL
length_OCSPSingleResponse(const OCSPSingleResponse *data)
{
    return _asn1_length(asn1_OCSPSingleResponse, data);
}


void ASN1CALL
free_OCSPSingleResponse(OCSPSingleResponse *data)
{
    _asn1_free_top(asn1_OCSPSingleResponse, data);
}


int ASN1CALL
copy_OCSPSingleResponse(const OCSPSingleResponse *from, OCSPSingleResponse *to)
{
    return _asn1_copy_top(asn1_OCSPSingleResponse, from, to);
}


char * ASN1CALL
print_OCSPSingleResponse(const OCSPSingleResponse *data, int flags)
{
    return _asn1_print_top(asn1_OCSPSingleResponse, flags, data);
}

/* template_members: OCSPInnerRequest exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OCSPInnerRequest exp exp */
/* generate_template_type: OCSPInnerRequest_tag_singleRequestExtensions_18 */
/* generate_template_type: OCSPInnerRequest_tag__17 */
const struct asn1_template asn1_OCSPInnerRequest_tag__17[] = {
/* 0 */ { 0, sizeof(struct OCSPInnerRequest), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct OCSPInnerRequest, reqCert), asn1_OCSPCertID },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPInnerRequest, singleRequestExtensions), asn1_OCSPSingleResponse_tag_singleExtensions_16 },
/* 3 */ { A1_OP_NAME, 0, "OCSPInnerRequest" },
/* 4 */ { A1_OP_NAME, 0, "reqCert" },
/* 5 */ { A1_OP_NAME, 0, "singleRequestExtensions" }
};
/* generate_template_type: OCSPInnerRequest */
const struct asn1_template asn1_OCSPInnerRequest[] = {
/* 0 */ { 0, sizeof(OCSPInnerRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPInnerRequest_tag__17 }
};

int ASN1CALL
decode_OCSPInnerRequest(const unsigned char *p, size_t len, OCSPInnerRequest *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPInnerRequest, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPInnerRequest(unsigned char *p, size_t len, const OCSPInnerRequest *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPInnerRequest, p, len, data, size);
}


size_t ASN1CALL
length_OCSPInnerRequest(const OCSPInnerRequest *data)
{
    return _asn1_length(asn1_OCSPInnerRequest, data);
}


void ASN1CALL
free_OCSPInnerRequest(OCSPInnerRequest *data)
{
    _asn1_free_top(asn1_OCSPInnerRequest, data);
}


int ASN1CALL
copy_OCSPInnerRequest(const OCSPInnerRequest *from, OCSPInnerRequest *to)
{
    return _asn1_copy_top(asn1_OCSPInnerRequest, from, to);
}


char * ASN1CALL
print_OCSPInnerRequest(const OCSPInnerRequest *data, int flags)
{
    return _asn1_print_top(asn1_OCSPInnerRequest, flags, data);
}

/* template_members: OCSPTBSRequest exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OCSPTBSRequest exp exp */
/* generate_template_type: OCSPTBSRequest_tag_version_20 */
const struct asn1_template asn1_OCSPTBSRequest_tag_version_20[] = {
/* 0 */ { 0, sizeof(OCSPVersion), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPVersion }
};
/* template_members: OCSPTBSRequest exp exp */
/* generate_template_type: OCSPTBSRequest_tag_requestorName_21 */
const struct asn1_template asn1_OCSPTBSRequest_tag_requestorName_21[] = {
/* 0 */ { 0, sizeof(GeneralName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_GeneralName}
};
/* template_members: OCSPTBSRequest exp exp */
/* generate_template_type: OCSPTBSRequest_requestList_0 */
const struct asn1_template asn1_OCSPTBSRequest_requestList_0[] = {
/* 0 */ { 0, sizeof(OCSPInnerRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPInnerRequest }
};
/* generate_template_type: OCSPTBSRequest_tag_requestList_22 */
const struct asn1_template asn1_OCSPTBSRequest_tag_requestList_22[] = {
/* 0 */ { 0, sizeof(struct OCSPTBSRequest_requestList), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_OCSPTBSRequest_requestList_0 }
};
/* template_members: OCSPTBSRequest exp exp */
/* generate_template_type: OCSPTBSRequest_tag_requestExtensions_23 */
/* generate_template_type: OCSPTBSRequest_tag__19 */
const struct asn1_template asn1_OCSPTBSRequest_tag__19[] = {
/* 0 */ { 0, sizeof(struct OCSPTBSRequest), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPTBSRequest, version), asn1_OCSPTBSRequest_tag_version_20 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct OCSPTBSRequest, requestorName), asn1_OCSPTBSRequest_tag_requestorName_21 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), offsetof(struct OCSPTBSRequest, requestList), asn1_OCSPTBSRequest_tag_requestList_22 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct OCSPTBSRequest, requestExtensions), asn1_OCSPSingleResponse_tag_singleExtensions_16 },
/* 5 */ { A1_OP_NAME, 0, "OCSPTBSRequest" },
/* 6 */ { A1_OP_NAME, 0, "version" },
/* 7 */ { A1_OP_NAME, 0, "requestorName" },
/* 8 */ { A1_OP_NAME, 0, "requestList" },
/* 9 */ { A1_OP_NAME, 0, "requestExtensions" }
};
/* generate_template_type: OCSPTBSRequest */
const struct asn1_template asn1_OCSPTBSRequest[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(OCSPTBSRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPTBSRequest_tag__19 }
};

int ASN1CALL
decode_OCSPTBSRequest(const unsigned char *p, size_t len, OCSPTBSRequest *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPTBSRequest, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPTBSRequest(unsigned char *p, size_t len, const OCSPTBSRequest *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPTBSRequest, p, len, data, size);
}


size_t ASN1CALL
length_OCSPTBSRequest(const OCSPTBSRequest *data)
{
    return _asn1_length(asn1_OCSPTBSRequest, data);
}


void ASN1CALL
free_OCSPTBSRequest(OCSPTBSRequest *data)
{
    _asn1_free_top(asn1_OCSPTBSRequest, data);
}


int ASN1CALL
copy_OCSPTBSRequest(const OCSPTBSRequest *from, OCSPTBSRequest *to)
{
    return _asn1_copy_top(asn1_OCSPTBSRequest, from, to);
}


char * ASN1CALL
print_OCSPTBSRequest(const OCSPTBSRequest *data, int flags)
{
    return _asn1_print_top(asn1_OCSPTBSRequest, flags, data);
}

/* template_members: OCSPSignature exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OCSPSignature exp exp */
/* generate_template_type: OCSPSignature_tag_signature_25 */
const struct asn1_template asn1_OCSPSignature_tag_signature_25[] = {
/* 0 */ { 0, sizeof(OCSPSignature), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* template_members: OCSPSignature exp exp */
/* template_members: OCSPSignature exp exp */
/* generate_template_type: OCSPSignature_certs_1 */
const struct asn1_template asn1_OCSPSignature_certs_1[] = {
/* 0 */ { 0, sizeof(Certificate), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Certificate}
};
/* generate_template_type: OCSPSignature_tag_certs_27 */
const struct asn1_template asn1_OCSPSignature_tag_certs_27[] = {
/* 0 */ { 0, sizeof(struct OCSPSignature_certs), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_OCSPSignature_certs_1 }
};
/* generate_template_type: OCSPSignature_tag_certs_26 */
const struct asn1_template asn1_OCSPSignature_tag_certs_26[] = {
/* 0 */ { 0, sizeof(struct OCSPSignature_certs), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPSignature_tag_certs_27 }
};
/* generate_template_type: OCSPSignature_tag__24 */
const struct asn1_template asn1_OCSPSignature_tag__24[] = {
/* 0 */ { 0, sizeof(struct OCSPSignature), ((void *)(uintptr_t)7) },
/* 1 */ { A1_OP_TYPE_EXTERN , offsetof(struct OCSPSignature, signatureAlgorithm), &asn1_extern_AlgorithmIdentifier},
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct OCSPSignature, signature), asn1_OCSPSignature_tag_signature_25 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPSignature, certs), asn1_OCSPSignature_tag_certs_26 },
/* 4 */ { A1_OP_NAME, 0, "OCSPSignature" },
/* 5 */ { A1_OP_NAME, 0, "signatureAlgorithm" },
/* 6 */ { A1_OP_NAME, 0, "signature" },
/* 7 */ { A1_OP_NAME, 0, "certs" }
};
/* generate_template_type: OCSPSignature */
const struct asn1_template asn1_OCSPSignature[] = {
/* 0 */ { 0, sizeof(OCSPSignature), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPSignature_tag__24 }
};

int ASN1CALL
decode_OCSPSignature(const unsigned char *p, size_t len, OCSPSignature *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPSignature, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPSignature(unsigned char *p, size_t len, const OCSPSignature *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPSignature, p, len, data, size);
}


size_t ASN1CALL
length_OCSPSignature(const OCSPSignature *data)
{
    return _asn1_length(asn1_OCSPSignature, data);
}


void ASN1CALL
free_OCSPSignature(OCSPSignature *data)
{
    _asn1_free_top(asn1_OCSPSignature, data);
}


int ASN1CALL
copy_OCSPSignature(const OCSPSignature *from, OCSPSignature *to)
{
    return _asn1_copy_top(asn1_OCSPSignature, from, to);
}


char * ASN1CALL
print_OCSPSignature(const OCSPSignature *data, int flags)
{
    return _asn1_print_top(asn1_OCSPSignature, flags, data);
}

/* template_members: OCSPRequest exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OCSPRequest exp exp */
/* generate_template_type: OCSPRequest_tag_optionalSignature_29 */
const struct asn1_template asn1_OCSPRequest_tag_optionalSignature_29[] = {
/* 0 */ { 0, sizeof(OCSPSignature), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPSignature }
};
/* generate_template_type: OCSPRequest_tag__28 */
const struct asn1_template asn1_OCSPRequest_tag__28[] = {
/* 0 */ { 0, sizeof(struct OCSPRequest), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct OCSPRequest, tbsRequest), asn1_OCSPTBSRequest },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPRequest, optionalSignature), asn1_OCSPRequest_tag_optionalSignature_29 },
/* 3 */ { A1_OP_NAME, 0, "OCSPRequest" },
/* 4 */ { A1_OP_NAME, 0, "tbsRequest" },
/* 5 */ { A1_OP_NAME, 0, "optionalSignature" }
};
/* generate_template_type: OCSPRequest */
const struct asn1_template asn1_OCSPRequest[] = {
/* 0 */ { 0, sizeof(OCSPRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPRequest_tag__28 }
};

int ASN1CALL
decode_OCSPRequest(const unsigned char *p, size_t len, OCSPRequest *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPRequest, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPRequest(unsigned char *p, size_t len, const OCSPRequest *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPRequest, p, len, data, size);
}


size_t ASN1CALL
length_OCSPRequest(const OCSPRequest *data)
{
    return _asn1_length(asn1_OCSPRequest, data);
}


void ASN1CALL
free_OCSPRequest(OCSPRequest *data)
{
    _asn1_free_top(asn1_OCSPRequest, data);
}


int ASN1CALL
copy_OCSPRequest(const OCSPRequest *from, OCSPRequest *to)
{
    return _asn1_copy_top(asn1_OCSPRequest, from, to);
}


char * ASN1CALL
print_OCSPRequest(const OCSPRequest *data, int flags)
{
    return _asn1_print_top(asn1_OCSPRequest, flags, data);
}

/* template_members: OCSPResponseBytes exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OCSPResponseBytes exp exp */
/* generate_template_type: OCSPResponseBytes_tag_responseType_31 */
const struct asn1_template asn1_OCSPResponseBytes_tag_responseType_31[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* template_members: OCSPResponseBytes exp exp */
/* generate_template_type: OCSPResponseBytes_tag_response_32 */
/* generate_template_type: OCSPResponseBytes_tag__30 */
const struct asn1_template asn1_OCSPResponseBytes_tag__30[] = {
/* 0 */ { 0, sizeof(struct OCSPResponseBytes), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct OCSPResponseBytes, responseType), asn1_OCSPResponseBytes_tag_responseType_31 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct OCSPResponseBytes, response), asn1_OCSPCertID_tag_issuerNameHash_10 },
/* 3 */ { A1_OP_NAME, 0, "OCSPResponseBytes" },
/* 4 */ { A1_OP_NAME, 0, "responseType" },
/* 5 */ { A1_OP_NAME, 0, "response" }
};
/* generate_template_type: OCSPResponseBytes */
const struct asn1_template asn1_OCSPResponseBytes[] = {
/* 0 */ { 0, sizeof(OCSPResponseBytes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPResponseBytes_tag__30 }
};

int ASN1CALL
decode_OCSPResponseBytes(const unsigned char *p, size_t len, OCSPResponseBytes *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPResponseBytes, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPResponseBytes(unsigned char *p, size_t len, const OCSPResponseBytes *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPResponseBytes, p, len, data, size);
}


size_t ASN1CALL
length_OCSPResponseBytes(const OCSPResponseBytes *data)
{
    return _asn1_length(asn1_OCSPResponseBytes, data);
}


void ASN1CALL
free_OCSPResponseBytes(OCSPResponseBytes *data)
{
    _asn1_free_top(asn1_OCSPResponseBytes, data);
}


int ASN1CALL
copy_OCSPResponseBytes(const OCSPResponseBytes *from, OCSPResponseBytes *to)
{
    return _asn1_copy_top(asn1_OCSPResponseBytes, from, to);
}


char * ASN1CALL
print_OCSPResponseBytes(const OCSPResponseBytes *data, int flags)
{
    return _asn1_print_top(asn1_OCSPResponseBytes, flags, data);
}

/* template_members: OCSPResponseStatus exp exp */
const struct asn1_template asn1_OCSPResponseStatus_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)6) },
/* 1 */ { A1_OP_NAME, 0, "successful" },
/* 2 */ { A1_OP_NAME, 1, "malformedRequest" },
/* 3 */ { A1_OP_NAME, 2, "internalError" },
/* 4 */ { A1_OP_NAME, 3, "tryLater" },
/* 5 */ { A1_OP_NAME, 5, "sigRequired" },
/* 6 */ { A1_OP_NAME, 6, "unauthorized" }
};
/* generate_template_type: OCSPResponseStatus_tag__33 */
const struct asn1_template asn1_OCSPResponseStatus_tag__33[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_OCSPResponseStatus_enum_names }
};
/* generate_template_type: OCSPResponseStatus */
const struct asn1_template asn1_OCSPResponseStatus[] = {
/* 0 */ { 0, sizeof(OCSPResponseStatus), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_OCSPResponseStatus_tag__33 }
};

int ASN1CALL
decode_OCSPResponseStatus(const unsigned char *p, size_t len, OCSPResponseStatus *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPResponseStatus, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPResponseStatus(unsigned char *p, size_t len, const OCSPResponseStatus *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPResponseStatus, p, len, data, size);
}


size_t ASN1CALL
length_OCSPResponseStatus(const OCSPResponseStatus *data)
{
    return _asn1_length(asn1_OCSPResponseStatus, data);
}


void ASN1CALL
free_OCSPResponseStatus(OCSPResponseStatus *data)
{
    _asn1_free_top(asn1_OCSPResponseStatus, data);
}


int ASN1CALL
copy_OCSPResponseStatus(const OCSPResponseStatus *from, OCSPResponseStatus *to)
{
    return _asn1_copy_top(asn1_OCSPResponseStatus, from, to);
}


char * ASN1CALL
print_OCSPResponseStatus(const OCSPResponseStatus *data, int flags)
{
    return _asn1_print_top(asn1_OCSPResponseStatus, flags, data);
}

/* template_members: OCSPResponse exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OCSPResponse exp exp */
/* generate_template_type: OCSPResponse_tag_responseBytes_35 */
const struct asn1_template asn1_OCSPResponse_tag_responseBytes_35[] = {
/* 0 */ { 0, sizeof(OCSPResponseBytes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPResponseBytes }
};
/* generate_template_type: OCSPResponse_tag__34 */
const struct asn1_template asn1_OCSPResponse_tag__34[] = {
/* 0 */ { 0, sizeof(struct OCSPResponse), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct OCSPResponse, responseStatus), asn1_OCSPResponseStatus },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPResponse, responseBytes), asn1_OCSPResponse_tag_responseBytes_35 },
/* 3 */ { A1_OP_NAME, 0, "OCSPResponse" },
/* 4 */ { A1_OP_NAME, 0, "responseStatus" },
/* 5 */ { A1_OP_NAME, 0, "responseBytes" }
};
/* generate_template_type: OCSPResponse */
const struct asn1_template asn1_OCSPResponse[] = {
/* 0 */ { 0, sizeof(OCSPResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPResponse_tag__34 }
};

int ASN1CALL
decode_OCSPResponse(const unsigned char *p, size_t len, OCSPResponse *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPResponse, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPResponse(unsigned char *p, size_t len, const OCSPResponse *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPResponse, p, len, data, size);
}


size_t ASN1CALL
length_OCSPResponse(const OCSPResponse *data)
{
    return _asn1_length(asn1_OCSPResponse, data);
}


void ASN1CALL
free_OCSPResponse(OCSPResponse *data)
{
    _asn1_free_top(asn1_OCSPResponse, data);
}


int ASN1CALL
copy_OCSPResponse(const OCSPResponse *from, OCSPResponse *to)
{
    return _asn1_copy_top(asn1_OCSPResponse, from, to);
}


char * ASN1CALL
print_OCSPResponse(const OCSPResponse *data, int flags)
{
    return _asn1_print_top(asn1_OCSPResponse, flags, data);
}

/* template_members: OCSPKeyHash exp exp */
/* generate_template_type: OCSPKeyHash_tag__36 */
/* generate_template_type: OCSPKeyHash */
const struct asn1_template asn1_OCSPKeyHash[] = {
/* 0 */ { 0, sizeof(OCSPKeyHash), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_OCSPCertID_tag_issuerNameHash_10 }
};

int ASN1CALL
decode_OCSPKeyHash(const unsigned char *p, size_t len, OCSPKeyHash *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPKeyHash, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPKeyHash(unsigned char *p, size_t len, const OCSPKeyHash *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPKeyHash, p, len, data, size);
}


size_t ASN1CALL
length_OCSPKeyHash(const OCSPKeyHash *data)
{
    return _asn1_length(asn1_OCSPKeyHash, data);
}


void ASN1CALL
free_OCSPKeyHash(OCSPKeyHash *data)
{
    _asn1_free_top(asn1_OCSPKeyHash, data);
}


int ASN1CALL
copy_OCSPKeyHash(const OCSPKeyHash *from, OCSPKeyHash *to)
{
    return _asn1_copy_top(asn1_OCSPKeyHash, from, to);
}


char * ASN1CALL
print_OCSPKeyHash(const OCSPKeyHash *data, int flags)
{
    return _asn1_print_top(asn1_OCSPKeyHash, flags, data);
}

/* template_members: Name exp exp */
/* generate_template_type: Name_tag__37 */
const struct asn1_template asn1_Name_tag__37[] = {
/* 0 */ { 0, sizeof(Name), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Name}
};
/* generate_template_type: OCSPResponderID_choice_byName */
const struct asn1_template asn1_OCSPResponderID_choice_byName[] = {
/* 0 */ { 0, sizeof(Name), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_Name_tag__37 }
};
/* template_members: OCSPKeyHash exp exp */
/* generate_template_type: OCSPKeyHash_tag__38 */
const struct asn1_template asn1_OCSPKeyHash_tag__38[] = {
/* 0 */ { 0, sizeof(OCSPKeyHash), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPKeyHash }
};
/* generate_template_type: OCSPResponderID_choice_byKey */
const struct asn1_template asn1_OCSPResponderID_choice_byKey[] = {
/* 0 */ { 0, sizeof(OCSPKeyHash), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), 0, asn1_OCSPKeyHash_tag__38 }
};
static const struct asn1_template asn1_choice_OCSPResponderID_1[] = {
/* 0 */ { 0, offsetof(OCSPResponderID, element), ((void *)(uintptr_t)4) },
/* 1 */ { choice_OCSPResponderID_byName, offsetof(OCSPResponderID, u.byName), asn1_OCSPResponderID_choice_byName },
/* 2 */ { choice_OCSPResponderID_byKey, offsetof(OCSPResponderID, u.byKey), asn1_OCSPResponderID_choice_byKey },
/* 3 */ { 0, 0, "byName" },
/* 4 */ { 0, 0, "byKey" }
};
/* generate_template_type: OCSPResponderID */
const struct asn1_template asn1_OCSPResponderID[] = {
/* 0 */ { 0, sizeof(OCSPResponderID), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_OCSPResponderID_1 }
};

int ASN1CALL
decode_OCSPResponderID(const unsigned char *p, size_t len, OCSPResponderID *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPResponderID, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPResponderID(unsigned char *p, size_t len, const OCSPResponderID *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPResponderID, p, len, data, size);
}


size_t ASN1CALL
length_OCSPResponderID(const OCSPResponderID *data)
{
    return _asn1_length(asn1_OCSPResponderID, data);
}


void ASN1CALL
free_OCSPResponderID(OCSPResponderID *data)
{
    _asn1_free_top(asn1_OCSPResponderID, data);
}


int ASN1CALL
copy_OCSPResponderID(const OCSPResponderID *from, OCSPResponderID *to)
{
    return _asn1_copy_top(asn1_OCSPResponderID, from, to);
}


char * ASN1CALL
print_OCSPResponderID(const OCSPResponderID *data, int flags)
{
    return _asn1_print_top(asn1_OCSPResponderID, flags, data);
}

/* template_members: OCSPResponseData exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OCSPResponseData exp exp */
/* generate_template_type: OCSPResponseData_tag_version_40 */
/* template_members: OCSPResponseData exp exp */
/* generate_template_type: OCSPResponseData_tag_producedAt_41 */
/* template_members: OCSPResponseData exp exp */
/* generate_template_type: OCSPResponseData_responses_2 */
const struct asn1_template asn1_OCSPResponseData_responses_2[] = {
/* 0 */ { 0, sizeof(OCSPSingleResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OCSPSingleResponse }
};
/* generate_template_type: OCSPResponseData_tag_responses_42 */
const struct asn1_template asn1_OCSPResponseData_tag_responses_42[] = {
/* 0 */ { 0, sizeof(struct OCSPResponseData_responses), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_OCSPResponseData_responses_2 }
};
/* template_members: OCSPResponseData exp exp */
/* generate_template_type: OCSPResponseData_tag_responseExtensions_43 */
/* generate_template_type: OCSPResponseData_tag__39 */
const struct asn1_template asn1_OCSPResponseData_tag__39[] = {
/* 0 */ { 0, sizeof(struct OCSPResponseData), ((void *)(uintptr_t)11) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPResponseData, version), asn1_OCSPTBSRequest_tag_version_20 },
/* 2 */ { A1_OP_TYPE , offsetof(struct OCSPResponseData, responderID), asn1_OCSPResponderID },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), offsetof(struct OCSPResponseData, producedAt), asn1_OCSPCertStatus_revoked_tag_revocationTime_5 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), offsetof(struct OCSPResponseData, responses), asn1_OCSPResponseData_tag_responses_42 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct OCSPResponseData, responseExtensions), asn1_OCSPSingleResponse_tag_singleExtensions_16 },
/* 6 */ { A1_OP_NAME, 0, "OCSPResponseData" },
/* 7 */ { A1_OP_NAME, 0, "version" },
/* 8 */ { A1_OP_NAME, 0, "responderID" },
/* 9 */ { A1_OP_NAME, 0, "producedAt" },
/* 10 */ { A1_OP_NAME, 0, "responses" },
/* 11 */ { A1_OP_NAME, 0, "responseExtensions" }
};
/* generate_template_type: OCSPResponseData */
const struct asn1_template asn1_OCSPResponseData[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(OCSPResponseData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPResponseData_tag__39 }
};

int ASN1CALL
decode_OCSPResponseData(const unsigned char *p, size_t len, OCSPResponseData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPResponseData, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPResponseData(unsigned char *p, size_t len, const OCSPResponseData *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPResponseData, p, len, data, size);
}


size_t ASN1CALL
length_OCSPResponseData(const OCSPResponseData *data)
{
    return _asn1_length(asn1_OCSPResponseData, data);
}


void ASN1CALL
free_OCSPResponseData(OCSPResponseData *data)
{
    _asn1_free_top(asn1_OCSPResponseData, data);
}


int ASN1CALL
copy_OCSPResponseData(const OCSPResponseData *from, OCSPResponseData *to)
{
    return _asn1_copy_top(asn1_OCSPResponseData, from, to);
}


char * ASN1CALL
print_OCSPResponseData(const OCSPResponseData *data, int flags)
{
    return _asn1_print_top(asn1_OCSPResponseData, flags, data);
}

/* template_members: OCSPBasicOCSPResponse exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OCSPBasicOCSPResponse exp exp */
/* generate_template_type: OCSPBasicOCSPResponse_tag_signature_45 */
const struct asn1_template asn1_OCSPBasicOCSPResponse_tag_signature_45[] = {
/* 0 */ { 0, sizeof(OCSPBasicOCSPResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* template_members: OCSPBasicOCSPResponse exp exp */
/* template_members: OCSPBasicOCSPResponse exp exp */
/* generate_template_type: OCSPBasicOCSPResponse_certs_3 */
/* generate_template_type: OCSPBasicOCSPResponse_tag_certs_47 */
const struct asn1_template asn1_OCSPBasicOCSPResponse_tag_certs_47[] = {
/* 0 */ { 0, sizeof(struct OCSPBasicOCSPResponse_certs), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_OCSPSignature_certs_1 }
};
/* generate_template_type: OCSPBasicOCSPResponse_tag_certs_46 */
const struct asn1_template asn1_OCSPBasicOCSPResponse_tag_certs_46[] = {
/* 0 */ { 0, sizeof(struct OCSPBasicOCSPResponse_certs), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPBasicOCSPResponse_tag_certs_47 }
};
/* generate_template_type: OCSPBasicOCSPResponse_tag__44 */
const struct asn1_template asn1_OCSPBasicOCSPResponse_tag__44[] = {
/* 0 */ { 0, sizeof(struct OCSPBasicOCSPResponse), ((void *)(uintptr_t)9) },
/* 1 */ { A1_OP_TYPE , offsetof(struct OCSPBasicOCSPResponse, tbsResponseData), asn1_OCSPResponseData },
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct OCSPBasicOCSPResponse, signatureAlgorithm), &asn1_extern_AlgorithmIdentifier},
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), offsetof(struct OCSPBasicOCSPResponse, signature), asn1_OCSPBasicOCSPResponse_tag_signature_45 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct OCSPBasicOCSPResponse, certs), asn1_OCSPBasicOCSPResponse_tag_certs_46 },
/* 5 */ { A1_OP_NAME, 0, "OCSPBasicOCSPResponse" },
/* 6 */ { A1_OP_NAME, 0, "tbsResponseData" },
/* 7 */ { A1_OP_NAME, 0, "signatureAlgorithm" },
/* 8 */ { A1_OP_NAME, 0, "signature" },
/* 9 */ { A1_OP_NAME, 0, "certs" }
};
/* generate_template_type: OCSPBasicOCSPResponse */
const struct asn1_template asn1_OCSPBasicOCSPResponse[] = {
/* 0 */ { 0, sizeof(OCSPBasicOCSPResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OCSPBasicOCSPResponse_tag__44 }
};

int ASN1CALL
decode_OCSPBasicOCSPResponse(const unsigned char *p, size_t len, OCSPBasicOCSPResponse *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OCSPBasicOCSPResponse, 0|0, p, len, data, size);
}


int ASN1CALL
encode_OCSPBasicOCSPResponse(unsigned char *p, size_t len, const OCSPBasicOCSPResponse *data, size_t *size)
{
    return _asn1_encode(asn1_OCSPBasicOCSPResponse, p, len, data, size);
}


size_t ASN1CALL
length_OCSPBasicOCSPResponse(const OCSPBasicOCSPResponse *data)
{
    return _asn1_length(asn1_OCSPBasicOCSPResponse, data);
}


void ASN1CALL
free_OCSPBasicOCSPResponse(OCSPBasicOCSPResponse *data)
{
    _asn1_free_top(asn1_OCSPBasicOCSPResponse, data);
}


int ASN1CALL
copy_OCSPBasicOCSPResponse(const OCSPBasicOCSPResponse *from, OCSPBasicOCSPResponse *to)
{
    return _asn1_copy_top(asn1_OCSPBasicOCSPResponse, from, to);
}


char * ASN1CALL
print_OCSPBasicOCSPResponse(const OCSPBasicOCSPResponse *data, int flags)
{
    return _asn1_print_top(asn1_OCSPBasicOCSPResponse, flags, data);
}

