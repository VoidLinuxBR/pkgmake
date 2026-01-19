/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/kx509.asn1 */
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
#include "kx509_asn1.h"
#include "kx509_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_Extensions = {
	(asn1_type_encode)encode_Extensions,
	(asn1_type_decode)decode_Extensions,
	(asn1_type_length)length_Extensions,
	(asn1_type_copy)copy_Extensions,
	(asn1_type_release)free_Extensions,
	(asn1_type_print)print_Extensions,
	sizeof(Extensions)
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
extern const struct asn1_template asn1_KX509_ERROR_CODE[];
extern const struct asn1_template asn1_KX509_ERROR_CODE[];
extern const struct asn1_template asn1_Kx509CSRPlus[];
extern const struct asn1_template asn1_Kx509Request[];
extern const struct asn1_template asn1_Kx509ErrorCode[];
extern const struct asn1_template asn1_Kx509ErrorCode[];
extern const struct asn1_template asn1_Kx509Response[];
/* template_members: KX509_ERROR_CODE exp exp */
const struct asn1_template asn1_KX509_ERROR_CODE_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)8) },
/* 1 */ { A1_OP_NAME, 0, "KX509-STATUS-GOOD" },
/* 2 */ { A1_OP_NAME, 1, "KX509-STATUS-CLIENT-BAD" },
/* 3 */ { A1_OP_NAME, 2, "KX509-STATUS-CLIENT-FIX" },
/* 4 */ { A1_OP_NAME, 3, "KX509-STATUS-CLIENT-TEMP" },
/* 5 */ { A1_OP_NAME, 4, "KX509-STATUS-SERVER-BAD" },
/* 6 */ { A1_OP_NAME, 5, "KX509-STATUS-SERVER-TEMP" },
/* 7 */ { A1_OP_NAME, 7, "KX509-STATUS-SERVER-KEY" },
/* 8 */ { A1_OP_NAME, 8, "KX509-STATUS-CLIENT-USE-CSR" }
};
/* generate_template_type: KX509_ERROR_CODE_tag__0 */
const struct asn1_template asn1_KX509_ERROR_CODE_tag__0[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_KX509_ERROR_CODE_enum_names }
};
/* generate_template_type: KX509_ERROR_CODE */
const struct asn1_template asn1_KX509_ERROR_CODE[] = {
/* 0 */ { 0, sizeof(KX509_ERROR_CODE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_KX509_ERROR_CODE_tag__0 }
};

int ASN1CALL
decode_KX509_ERROR_CODE(const unsigned char *p, size_t len, KX509_ERROR_CODE *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KX509_ERROR_CODE, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KX509_ERROR_CODE(unsigned char *p, size_t len, const KX509_ERROR_CODE *data, size_t *size)
{
    return _asn1_encode(asn1_KX509_ERROR_CODE, p, len, data, size);
}


size_t ASN1CALL
length_KX509_ERROR_CODE(const KX509_ERROR_CODE *data)
{
    return _asn1_length(asn1_KX509_ERROR_CODE, data);
}


void ASN1CALL
free_KX509_ERROR_CODE(KX509_ERROR_CODE *data)
{
    _asn1_free_top(asn1_KX509_ERROR_CODE, data);
}


int ASN1CALL
copy_KX509_ERROR_CODE(const KX509_ERROR_CODE *from, KX509_ERROR_CODE *to)
{
    return _asn1_copy_top(asn1_KX509_ERROR_CODE, from, to);
}


char * ASN1CALL
print_KX509_ERROR_CODE(const KX509_ERROR_CODE *data, int flags)
{
    return _asn1_print_top(asn1_KX509_ERROR_CODE, flags, data);
}

/* template_members: Kx509CSRPlus exp exp */
/* template_members: Kx509CSRPlus exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: Kx509CSRPlus exp exp */
/* generate_template_type: Kx509CSRPlus_tag_csr_3 */
const struct asn1_template asn1_Kx509CSRPlus_tag_csr_3[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: Kx509CSRPlus_tag__2 */
const struct asn1_template asn1_Kx509CSRPlus_tag__2[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct Kx509CSRPlus), ((void *)(uintptr_t)8) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct Kx509CSRPlus, csr), asn1_Kx509CSRPlus_tag_csr_3 },
/* 2 */ { A1_OP_TYPE_EXTERN |A1_FLAG_OPTIONAL, offsetof(struct Kx509CSRPlus, exts), &asn1_extern_Extensions},
/* 3 */ { A1_OP_TYPE_EXTERN |A1_FLAG_OPTIONAL, offsetof(struct Kx509CSRPlus, req_life), &asn1_extern_KerberosTime},
/* 4 */ { A1_OP_NAME, 0, "Kx509CSRPlus" },
/* 5 */ { A1_OP_NAME, 0, "csr" },
/* 6 */ { A1_OP_NAME, 0, "exts" },
/* 7 */ { A1_OP_NAME, 0, "req-life" },
/* 8 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: Kx509CSRPlus_tag__1 */
const struct asn1_template asn1_Kx509CSRPlus_tag__1[] = {
/* 0 */ { 0, sizeof(struct Kx509CSRPlus), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Kx509CSRPlus_tag__2 }
};
/* generate_template_type: Kx509CSRPlus */
const struct asn1_template asn1_Kx509CSRPlus[] = {
/* 0 */ { 0, sizeof(Kx509CSRPlus), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,35), 0, asn1_Kx509CSRPlus_tag__1 }
};

int ASN1CALL
decode_Kx509CSRPlus(const unsigned char *p, size_t len, Kx509CSRPlus *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Kx509CSRPlus, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Kx509CSRPlus(unsigned char *p, size_t len, const Kx509CSRPlus *data, size_t *size)
{
    return _asn1_encode(asn1_Kx509CSRPlus, p, len, data, size);
}


size_t ASN1CALL
length_Kx509CSRPlus(const Kx509CSRPlus *data)
{
    return _asn1_length(asn1_Kx509CSRPlus, data);
}


void ASN1CALL
free_Kx509CSRPlus(Kx509CSRPlus *data)
{
    _asn1_free_top(asn1_Kx509CSRPlus, data);
}


int ASN1CALL
copy_Kx509CSRPlus(const Kx509CSRPlus *from, Kx509CSRPlus *to)
{
    return _asn1_copy_top(asn1_Kx509CSRPlus, from, to);
}


char * ASN1CALL
print_Kx509CSRPlus(const Kx509CSRPlus *data, int flags)
{
    return _asn1_print_top(asn1_Kx509CSRPlus, flags, data);
}

/* template_members: Kx509Request exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: Kx509Request exp exp */
/* generate_template_type: Kx509Request_tag_authenticator_5 */
/* template_members: Kx509Request exp exp */
/* generate_template_type: Kx509Request_tag_pk_hash_6 */
/* template_members: Kx509Request exp exp */
/* generate_template_type: Kx509Request_tag_pk_key_7 */
/* generate_template_type: Kx509Request_tag__4 */
const struct asn1_template asn1_Kx509Request_tag__4[] = {
/* 0 */ { 0, sizeof(struct Kx509Request), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct Kx509Request, authenticator), asn1_Kx509CSRPlus_tag_csr_3 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct Kx509Request, pk_hash), asn1_Kx509CSRPlus_tag_csr_3 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct Kx509Request, pk_key), asn1_Kx509CSRPlus_tag_csr_3 },
/* 4 */ { A1_OP_NAME, 0, "Kx509Request" },
/* 5 */ { A1_OP_NAME, 0, "authenticator" },
/* 6 */ { A1_OP_NAME, 0, "pk-hash" },
/* 7 */ { A1_OP_NAME, 0, "pk-key" }
};
/* generate_template_type: Kx509Request */
const struct asn1_template asn1_Kx509Request[] = {
/* 0 */ { 0, sizeof(Kx509Request), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Kx509Request_tag__4 }
};

int ASN1CALL
decode_Kx509Request(const unsigned char *p, size_t len, Kx509Request *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Kx509Request, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Kx509Request(unsigned char *p, size_t len, const Kx509Request *data, size_t *size)
{
    return _asn1_encode(asn1_Kx509Request, p, len, data, size);
}


size_t ASN1CALL
length_Kx509Request(const Kx509Request *data)
{
    return _asn1_length(asn1_Kx509Request, data);
}


void ASN1CALL
free_Kx509Request(Kx509Request *data)
{
    _asn1_free_top(asn1_Kx509Request, data);
}


int ASN1CALL
copy_Kx509Request(const Kx509Request *from, Kx509Request *to)
{
    return _asn1_copy_top(asn1_Kx509Request, from, to);
}


char * ASN1CALL
print_Kx509Request(const Kx509Request *data, int flags)
{
    return _asn1_print_top(asn1_Kx509Request, flags, data);
}

/* template_members: Kx509ErrorCode exp exp */
/* generate_template_type: Kx509ErrorCode_tag__8 */
const struct asn1_template asn1_Kx509ErrorCode_tag__8[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_INTEGER), 0, NULL }
};
/* generate_template_type: Kx509ErrorCode */
const struct asn1_template asn1_Kx509ErrorCode[] = {
/* 0 */ { 0, sizeof(Kx509ErrorCode), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_Kx509ErrorCode_tag__8 }
};

int ASN1CALL
decode_Kx509ErrorCode(const unsigned char *p, size_t len, Kx509ErrorCode *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Kx509ErrorCode, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Kx509ErrorCode(unsigned char *p, size_t len, const Kx509ErrorCode *data, size_t *size)
{
    return _asn1_encode(asn1_Kx509ErrorCode, p, len, data, size);
}


size_t ASN1CALL
length_Kx509ErrorCode(const Kx509ErrorCode *data)
{
    return _asn1_length(asn1_Kx509ErrorCode, data);
}


void ASN1CALL
free_Kx509ErrorCode(Kx509ErrorCode *data)
{
    _asn1_free_top(asn1_Kx509ErrorCode, data);
}


int ASN1CALL
copy_Kx509ErrorCode(const Kx509ErrorCode *from, Kx509ErrorCode *to)
{
    return _asn1_copy_top(asn1_Kx509ErrorCode, from, to);
}


char * ASN1CALL
print_Kx509ErrorCode(const Kx509ErrorCode *data, int flags)
{
    return _asn1_print_top(asn1_Kx509ErrorCode, flags, data);
}

/* template_members: Kx509Response exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: Kx509Response exp exp */
/* generate_template_type: Kx509Response_tag_error_code_10 */
const struct asn1_template asn1_Kx509Response_tag_error_code_10[] = {
/* 0 */ { 0, sizeof(Kx509ErrorCode), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Kx509ErrorCode }
};
/* template_members: Kx509Response exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_hash_12 */
/* generate_template_type: Kx509Response_tag_hash_11 */
const struct asn1_template asn1_Kx509Response_tag_hash_11[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_Kx509CSRPlus_tag_csr_3 }
};
/* template_members: Kx509Response exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_certificate_14 */
/* generate_template_type: Kx509Response_tag_certificate_13 */
/* template_members: Kx509Response exp exp */
/* template_members: heim_visible_string exp exp */
/* generate_template_type: heim_visible_string_tag_e_text_16 */
const struct asn1_template asn1_heim_visible_string_tag_e_text_16[] = {
/* 0 */ { 0, sizeof(heim_visible_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_VISIBLE_STRING), 0, NULL }
};
/* generate_template_type: Kx509Response_tag_e_text_15 */
const struct asn1_template asn1_Kx509Response_tag_e_text_15[] = {
/* 0 */ { 0, sizeof(heim_visible_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_VisibleString), 0, asn1_heim_visible_string_tag_e_text_16 }
};
/* generate_template_type: Kx509Response_tag__9 */
const struct asn1_template asn1_Kx509Response_tag__9[] = {
/* 0 */ { 0, sizeof(struct Kx509Response), ((void *)(uintptr_t)10) },
/* 1 */ { A1_OP_DEFVAL|A1_DV_INTEGER32, ~0, (void *)(uintptr_t)0 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_DEFAULT, offsetof(struct Kx509Response, error_code), asn1_Kx509Response_tag_error_code_10 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct Kx509Response, hash), asn1_Kx509Response_tag_hash_11 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct Kx509Response, certificate), asn1_Kx509Response_tag_hash_11 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct Kx509Response, e_text), asn1_Kx509Response_tag_e_text_15 },
/* 6 */ { A1_OP_NAME, 0, "Kx509Response" },
/* 7 */ { A1_OP_NAME, 0, "error-code" },
/* 8 */ { A1_OP_NAME, 0, "hash" },
/* 9 */ { A1_OP_NAME, 0, "certificate" },
/* 10 */ { A1_OP_NAME, 0, "e-text" }
};
/* generate_template_type: Kx509Response */
const struct asn1_template asn1_Kx509Response[] = {
/* 0 */ { 0, sizeof(Kx509Response), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Kx509Response_tag__9 }
};

int ASN1CALL
decode_Kx509Response(const unsigned char *p, size_t len, Kx509Response *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Kx509Response, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Kx509Response(unsigned char *p, size_t len, const Kx509Response *data, size_t *size)
{
    return _asn1_encode(asn1_Kx509Response, p, len, data, size);
}


size_t ASN1CALL
length_Kx509Response(const Kx509Response *data)
{
    return _asn1_length(asn1_Kx509Response, data);
}


void ASN1CALL
free_Kx509Response(Kx509Response *data)
{
    _asn1_free_top(asn1_Kx509Response, data);
}


int ASN1CALL
copy_Kx509Response(const Kx509Response *from, Kx509Response *to)
{
    return _asn1_copy_top(asn1_Kx509Response, from, to);
}


char * ASN1CALL
print_Kx509Response(const Kx509Response *data, int flags)
{
    return _asn1_print_top(asn1_Kx509Response, flags, data);
}

