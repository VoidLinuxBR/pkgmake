/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/digest.asn1 */
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
#include "digest_asn1.h"
#include "digest_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_EncryptedData = {
	(asn1_type_encode)encode_EncryptedData,
	(asn1_type_decode)decode_EncryptedData,
	(asn1_type_length)length_EncryptedData,
	(asn1_type_copy)copy_EncryptedData,
	(asn1_type_release)free_EncryptedData,
	(asn1_type_print)print_EncryptedData,
	sizeof(EncryptedData)
};
static const struct asn1_type_func asn1_extern_Principal = {
	(asn1_type_encode)encode_Principal,
	(asn1_type_decode)decode_Principal,
	(asn1_type_length)length_Principal,
	(asn1_type_copy)copy_Principal,
	(asn1_type_release)free_Principal,
	(asn1_type_print)print_Principal,
	sizeof(Principal)
};
extern const struct asn1_template asn1_DigestTypes[];
extern const struct asn1_template asn1_DigestTypes[];
extern const struct asn1_template asn1_DigestInit[];
extern const struct asn1_template asn1_DigestInitReply[];
extern const struct asn1_template asn1_DigestRequest[];
extern const struct asn1_template asn1_DigestError[];
extern const struct asn1_template asn1_DigestResponse[];
extern const struct asn1_template asn1_NTLMInit[];
extern const struct asn1_template asn1_NTLMInitReply[];
extern const struct asn1_template asn1_NTLMRequest[];
extern const struct asn1_template asn1_NTLMResponse[];
extern const struct asn1_template asn1_NTLMRequest2[];
extern const struct asn1_template asn1_NTLMReply[];
extern const struct asn1_template asn1_DigestReqInner[];
extern const struct asn1_template asn1_DigestREQ[];
extern const struct asn1_template asn1_DigestRepInner[];
extern const struct asn1_template asn1_DigestREP[];
/* template_members: DigestTypes exp exp */
static const struct asn1_template asn1_DigestTypes_bmember__0[] = {
/* 0 */ { 0, sizeof(DigestTypes), ((void *)(uintptr_t)6) },
/* 1 */ { 0, 0, "ntlm_v1" },
/* 2 */ { 0, 1, "ntlm_v1_session" },
/* 3 */ { 0, 2, "ntlm_v2" },
/* 4 */ { 0, 3, "digest_md5" },
/* 5 */ { 0, 4, "chap_md5" },
/* 6 */ { 0, 5, "ms_chap_v2" }
};
/* generate_template_type: DigestTypes_tag__0 */
const struct asn1_template asn1_DigestTypes_tag__0[] = {
/* 0 */ { 0, sizeof(DigestTypes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_DigestTypes_bmember__0 }
};
/* generate_template_type: DigestTypes */
const struct asn1_template asn1_DigestTypes[] = {
/* 0 */ { 0, sizeof(DigestTypes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_DigestTypes_tag__0 }
};

int ASN1CALL
decode_DigestTypes(const unsigned char *p, size_t len, DigestTypes *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestTypes, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DigestTypes(unsigned char *p, size_t len, const DigestTypes *data, size_t *size)
{
    return _asn1_encode(asn1_DigestTypes, p, len, data, size);
}


size_t ASN1CALL
length_DigestTypes(const DigestTypes *data)
{
    return _asn1_length(asn1_DigestTypes, data);
}


void ASN1CALL
free_DigestTypes(DigestTypes *data)
{
    _asn1_free_top(asn1_DigestTypes, data);
}


int ASN1CALL
copy_DigestTypes(const DigestTypes *from, DigestTypes *to)
{
    return _asn1_copy_top(asn1_DigestTypes, from, to);
}


char * ASN1CALL
print_DigestTypes(const DigestTypes *data, int flags)
{
    return _asn1_print_top(asn1_DigestTypes, flags, data);
}

uint64_t DigestTypes2int(DigestTypes f)
{
uint64_t r = 0;
if(f.ntlm_v1) r |= (1ULL << 0);
if(f.ntlm_v1_session) r |= (1ULL << 1);
if(f.ntlm_v2) r |= (1ULL << 2);
if(f.digest_md5) r |= (1ULL << 3);
if(f.chap_md5) r |= (1ULL << 4);
if(f.ms_chap_v2) r |= (1ULL << 5);
return r;
}

DigestTypes int2DigestTypes(uint64_t n)
{
	DigestTypes flags;

	memset(&flags, 0, sizeof(flags));

	flags.ntlm_v1 = (n >> 0) & 1;
	flags.ntlm_v1_session = (n >> 1) & 1;
	flags.ntlm_v2 = (n >> 2) & 1;
	flags.digest_md5 = (n >> 3) & 1;
	flags.chap_md5 = (n >> 4) & 1;
	flags.ms_chap_v2 = (n >> 5) & 1;
	return flags;
}

static struct units DigestTypes_units[] = {
	{"ms-chap-v2",	1ULL << 5},
	{"chap-md5",	1ULL << 4},
	{"digest-md5",	1ULL << 3},
	{"ntlm-v2",	1ULL << 2},
	{"ntlm-v1-session",	1ULL << 1},
	{"ntlm-v1",	1ULL << 0},
	{NULL,	0}
};

const struct units * asn1_DigestTypes_units(void){
return DigestTypes_units;
}

/* template_members: DigestInit exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DigestInit exp exp */
/* generate_template_type: DigestInit_tag_type_2 */
const struct asn1_template asn1_DigestInit_tag_type_2[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UTF8_STRING), 0, NULL }
};
/* template_members: DigestInit exp exp */
/* template_members: DigestInit exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DigestInit_channel exp exp */
/* generate_template_type: DigestInit_channel_tag_cb_type_5 */
/* template_members: DigestInit_channel exp exp */
/* generate_template_type: DigestInit_channel_tag_cb_binding_6 */
/* generate_template_type: DigestInit_tag_channel_4 */
const struct asn1_template asn1_DigestInit_tag_channel_4[] = {
/* 0 */ { 0, sizeof(struct DigestInit_channel), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestInit_channel, cb_type), asn1_DigestInit_tag_type_2 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestInit_channel, cb_binding), asn1_DigestInit_tag_type_2 },
/* 3 */ { A1_OP_NAME, 0, "DigestInit" },
/* 4 */ { A1_OP_NAME, 0, "cb-type" },
/* 5 */ { A1_OP_NAME, 0, "cb-binding" }
};
/* generate_template_type: DigestInit_tag_channel_3 */
const struct asn1_template asn1_DigestInit_tag_channel_3[] = {
/* 0 */ { 0, sizeof(struct DigestInit_channel), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestInit_tag_channel_4 }
};
/* template_members: DigestInit exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_hostname_8 */
/* generate_template_type: DigestInit_tag_hostname_7 */
const struct asn1_template asn1_DigestInit_tag_hostname_7[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_DigestInit_tag_type_2 }
};
/* generate_template_type: DigestInit_tag__1 */
const struct asn1_template asn1_DigestInit_tag__1[] = {
/* 0 */ { 0, sizeof(struct DigestInit), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestInit, type), asn1_DigestInit_tag_type_2 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct DigestInit, channel), asn1_DigestInit_tag_channel_3 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct DigestInit, hostname), asn1_DigestInit_tag_hostname_7 },
/* 4 */ { A1_OP_NAME, 0, "DigestInit" },
/* 5 */ { A1_OP_NAME, 0, "type" },
/* 6 */ { A1_OP_NAME, 0, "channel" },
/* 7 */ { A1_OP_NAME, 0, "hostname" }
};
/* generate_template_type: DigestInit */
const struct asn1_template asn1_DigestInit[] = {
/* 0 */ { 0, sizeof(DigestInit), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestInit_tag__1 }
};

int ASN1CALL
decode_DigestInit(const unsigned char *p, size_t len, DigestInit *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestInit, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DigestInit(unsigned char *p, size_t len, const DigestInit *data, size_t *size)
{
    return _asn1_encode(asn1_DigestInit, p, len, data, size);
}


size_t ASN1CALL
length_DigestInit(const DigestInit *data)
{
    return _asn1_length(asn1_DigestInit, data);
}


void ASN1CALL
free_DigestInit(DigestInit *data)
{
    _asn1_free_top(asn1_DigestInit, data);
}


int ASN1CALL
copy_DigestInit(const DigestInit *from, DigestInit *to)
{
    return _asn1_copy_top(asn1_DigestInit, from, to);
}


char * ASN1CALL
print_DigestInit(const DigestInit *data, int flags)
{
    return _asn1_print_top(asn1_DigestInit, flags, data);
}

/* template_members: DigestInitReply exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DigestInitReply exp exp */
/* generate_template_type: DigestInitReply_tag_nonce_10 */
/* template_members: DigestInitReply exp exp */
/* generate_template_type: DigestInitReply_tag_opaque_11 */
/* template_members: DigestInitReply exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_identifier_13 */
/* generate_template_type: DigestInitReply_tag_identifier_12 */
/* generate_template_type: DigestInitReply_tag__9 */
const struct asn1_template asn1_DigestInitReply_tag__9[] = {
/* 0 */ { 0, sizeof(struct DigestInitReply), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestInitReply, nonce), asn1_DigestInit_tag_type_2 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestInitReply, opaque), asn1_DigestInit_tag_type_2 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct DigestInitReply, identifier), asn1_DigestInit_tag_hostname_7 },
/* 4 */ { A1_OP_NAME, 0, "DigestInitReply" },
/* 5 */ { A1_OP_NAME, 0, "nonce" },
/* 6 */ { A1_OP_NAME, 0, "opaque" },
/* 7 */ { A1_OP_NAME, 0, "identifier" }
};
/* generate_template_type: DigestInitReply */
const struct asn1_template asn1_DigestInitReply[] = {
/* 0 */ { 0, sizeof(DigestInitReply), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestInitReply_tag__9 }
};

int ASN1CALL
decode_DigestInitReply(const unsigned char *p, size_t len, DigestInitReply *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestInitReply, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DigestInitReply(unsigned char *p, size_t len, const DigestInitReply *data, size_t *size)
{
    return _asn1_encode(asn1_DigestInitReply, p, len, data, size);
}


size_t ASN1CALL
length_DigestInitReply(const DigestInitReply *data)
{
    return _asn1_length(asn1_DigestInitReply, data);
}


void ASN1CALL
free_DigestInitReply(DigestInitReply *data)
{
    _asn1_free_top(asn1_DigestInitReply, data);
}


int ASN1CALL
copy_DigestInitReply(const DigestInitReply *from, DigestInitReply *to)
{
    return _asn1_copy_top(asn1_DigestInitReply, from, to);
}


char * ASN1CALL
print_DigestInitReply(const DigestInitReply *data, int flags)
{
    return _asn1_print_top(asn1_DigestInitReply, flags, data);
}

/* template_members: DigestRequest exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DigestRequest exp exp */
/* generate_template_type: DigestRequest_tag_type_15 */
/* template_members: DigestRequest exp exp */
/* generate_template_type: DigestRequest_tag_digest_16 */
/* template_members: DigestRequest exp exp */
/* generate_template_type: DigestRequest_tag_username_17 */
/* template_members: DigestRequest exp exp */
/* generate_template_type: DigestRequest_tag_responseData_18 */
/* template_members: DigestRequest exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_authid_20 */
/* generate_template_type: DigestRequest_tag_authid_19 */
/* template_members: DigestRequest exp exp */
/* generate_template_type: DigestRequest_tag_authentication_user_21 */
const struct asn1_template asn1_DigestRequest_tag_authentication_user_21[] = {
/* 0 */ { 0, sizeof(Principal), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Principal}
};
/* template_members: DigestRequest exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_realm_23 */
/* generate_template_type: DigestRequest_tag_realm_22 */
/* template_members: DigestRequest exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_method_25 */
/* generate_template_type: DigestRequest_tag_method_24 */
/* template_members: DigestRequest exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_uri_27 */
/* generate_template_type: DigestRequest_tag_uri_26 */
/* template_members: DigestRequest exp exp */
/* generate_template_type: DigestRequest_tag_serverNonce_28 */
/* template_members: DigestRequest exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_clientNonce_30 */
/* generate_template_type: DigestRequest_tag_clientNonce_29 */
/* template_members: DigestRequest exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_nonceCount_32 */
/* generate_template_type: DigestRequest_tag_nonceCount_31 */
/* template_members: DigestRequest exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_qop_34 */
/* generate_template_type: DigestRequest_tag_qop_33 */
/* template_members: DigestRequest exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_identifier_36 */
/* generate_template_type: DigestRequest_tag_identifier_35 */
/* template_members: DigestRequest exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_hostname_38 */
/* generate_template_type: DigestRequest_tag_hostname_37 */
/* template_members: DigestRequest exp exp */
/* generate_template_type: DigestRequest_tag_opaque_39 */
/* generate_template_type: DigestRequest_tag__14 */
const struct asn1_template asn1_DigestRequest_tag__14[] = {
/* 0 */ { 0, sizeof(struct DigestRequest), ((void *)(uintptr_t)33) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestRequest, type), asn1_DigestInit_tag_type_2 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestRequest, digest), asn1_DigestInit_tag_type_2 },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestRequest, username), asn1_DigestInit_tag_type_2 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestRequest, responseData), asn1_DigestInit_tag_type_2 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct DigestRequest, authid), asn1_DigestInit_tag_hostname_7 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct DigestRequest, authentication_user), asn1_DigestRequest_tag_authentication_user_21 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct DigestRequest, realm), asn1_DigestInit_tag_hostname_7 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct DigestRequest, method), asn1_DigestInit_tag_hostname_7 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct DigestRequest, uri), asn1_DigestInit_tag_hostname_7 },
/* 10 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestRequest, serverNonce), asn1_DigestInit_tag_type_2 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct DigestRequest, clientNonce), asn1_DigestInit_tag_hostname_7 },
/* 12 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct DigestRequest, nonceCount), asn1_DigestInit_tag_hostname_7 },
/* 13 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct DigestRequest, qop), asn1_DigestInit_tag_hostname_7 },
/* 14 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8)|A1_FLAG_OPTIONAL, offsetof(struct DigestRequest, identifier), asn1_DigestInit_tag_hostname_7 },
/* 15 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9)|A1_FLAG_OPTIONAL, offsetof(struct DigestRequest, hostname), asn1_DigestInit_tag_hostname_7 },
/* 16 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestRequest, opaque), asn1_DigestInit_tag_type_2 },
/* 17 */ { A1_OP_NAME, 0, "DigestRequest" },
/* 18 */ { A1_OP_NAME, 0, "type" },
/* 19 */ { A1_OP_NAME, 0, "digest" },
/* 20 */ { A1_OP_NAME, 0, "username" },
/* 21 */ { A1_OP_NAME, 0, "responseData" },
/* 22 */ { A1_OP_NAME, 0, "authid" },
/* 23 */ { A1_OP_NAME, 0, "authentication-user" },
/* 24 */ { A1_OP_NAME, 0, "realm" },
/* 25 */ { A1_OP_NAME, 0, "method" },
/* 26 */ { A1_OP_NAME, 0, "uri" },
/* 27 */ { A1_OP_NAME, 0, "serverNonce" },
/* 28 */ { A1_OP_NAME, 0, "clientNonce" },
/* 29 */ { A1_OP_NAME, 0, "nonceCount" },
/* 30 */ { A1_OP_NAME, 0, "qop" },
/* 31 */ { A1_OP_NAME, 0, "identifier" },
/* 32 */ { A1_OP_NAME, 0, "hostname" },
/* 33 */ { A1_OP_NAME, 0, "opaque" }
};
/* generate_template_type: DigestRequest */
const struct asn1_template asn1_DigestRequest[] = {
/* 0 */ { 0, sizeof(DigestRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestRequest_tag__14 }
};

int ASN1CALL
decode_DigestRequest(const unsigned char *p, size_t len, DigestRequest *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestRequest, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DigestRequest(unsigned char *p, size_t len, const DigestRequest *data, size_t *size)
{
    return _asn1_encode(asn1_DigestRequest, p, len, data, size);
}


size_t ASN1CALL
length_DigestRequest(const DigestRequest *data)
{
    return _asn1_length(asn1_DigestRequest, data);
}


void ASN1CALL
free_DigestRequest(DigestRequest *data)
{
    _asn1_free_top(asn1_DigestRequest, data);
}


int ASN1CALL
copy_DigestRequest(const DigestRequest *from, DigestRequest *to)
{
    return _asn1_copy_top(asn1_DigestRequest, from, to);
}


char * ASN1CALL
print_DigestRequest(const DigestRequest *data, int flags)
{
    return _asn1_print_top(asn1_DigestRequest, flags, data);
}

/* template_members: DigestError exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DigestError exp exp */
/* generate_template_type: DigestError_tag_reason_41 */
/* template_members: DigestError exp exp */
/* generate_template_type: DigestError_tag_code_42 */
const struct asn1_template asn1_DigestError_tag_code_42[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_INTEGER), 0, NULL }
};
/* generate_template_type: DigestError_tag__40 */
const struct asn1_template asn1_DigestError_tag__40[] = {
/* 0 */ { 0, sizeof(struct DigestError), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestError, reason), asn1_DigestInit_tag_type_2 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct DigestError, code), asn1_DigestError_tag_code_42 },
/* 3 */ { A1_OP_NAME, 0, "DigestError" },
/* 4 */ { A1_OP_NAME, 0, "reason" },
/* 5 */ { A1_OP_NAME, 0, "code" }
};
/* generate_template_type: DigestError */
const struct asn1_template asn1_DigestError[] = {
/* 0 */ { 0, sizeof(DigestError), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestError_tag__40 }
};

int ASN1CALL
decode_DigestError(const unsigned char *p, size_t len, DigestError *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestError, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DigestError(unsigned char *p, size_t len, const DigestError *data, size_t *size)
{
    return _asn1_encode(asn1_DigestError, p, len, data, size);
}


size_t ASN1CALL
length_DigestError(const DigestError *data)
{
    return _asn1_length(asn1_DigestError, data);
}


void ASN1CALL
free_DigestError(DigestError *data)
{
    _asn1_free_top(asn1_DigestError, data);
}


int ASN1CALL
copy_DigestError(const DigestError *from, DigestError *to)
{
    return _asn1_copy_top(asn1_DigestError, from, to);
}


char * ASN1CALL
print_DigestError(const DigestError *data, int flags)
{
    return _asn1_print_top(asn1_DigestError, flags, data);
}

/* template_members: DigestResponse exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DigestResponse exp exp */
/* generate_template_type: DigestResponse_tag_success_44 */
const struct asn1_template asn1_DigestResponse_tag_success_44[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_BOOLEAN), 0, NULL }
};
/* template_members: DigestResponse exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_rsp_46 */
/* generate_template_type: DigestResponse_tag_rsp_45 */
/* template_members: DigestResponse exp exp */
/* template_members: DigestResponse exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag__49 */
const struct asn1_template asn1_heim_octet_string_tag__49[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: DigestResponse_tickets_0 */
const struct asn1_template asn1_DigestResponse_tickets_0[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_heim_octet_string_tag__49 }
};
/* generate_template_type: DigestResponse_tag_tickets_48 */
const struct asn1_template asn1_DigestResponse_tag_tickets_48[] = {
/* 0 */ { 0, sizeof(struct DigestResponse_tickets), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_DigestResponse_tickets_0 }
};
/* generate_template_type: DigestResponse_tag_tickets_47 */
const struct asn1_template asn1_DigestResponse_tag_tickets_47[] = {
/* 0 */ { 0, sizeof(struct DigestResponse_tickets), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestResponse_tag_tickets_48 }
};
/* template_members: DigestResponse exp exp */
/* template_members: DigestResponse exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DigestResponse_channel exp exp */
/* generate_template_type: DigestResponse_channel_tag_cb_type_52 */
/* template_members: DigestResponse_channel exp exp */
/* generate_template_type: DigestResponse_channel_tag_cb_binding_53 */
/* generate_template_type: DigestResponse_tag_channel_51 */
const struct asn1_template asn1_DigestResponse_tag_channel_51[] = {
/* 0 */ { 0, sizeof(struct DigestResponse_channel), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestResponse_channel, cb_type), asn1_DigestInit_tag_type_2 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), offsetof(struct DigestResponse_channel, cb_binding), asn1_DigestInit_tag_type_2 },
/* 3 */ { A1_OP_NAME, 0, "DigestResponse" },
/* 4 */ { A1_OP_NAME, 0, "cb-type" },
/* 5 */ { A1_OP_NAME, 0, "cb-binding" }
};
/* generate_template_type: DigestResponse_tag_channel_50 */
const struct asn1_template asn1_DigestResponse_tag_channel_50[] = {
/* 0 */ { 0, sizeof(struct DigestResponse_channel), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestResponse_tag_channel_51 }
};
/* template_members: DigestResponse exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_session_key_55 */
/* generate_template_type: DigestResponse_tag_session_key_54 */
/* generate_template_type: DigestResponse_tag__43 */
const struct asn1_template asn1_DigestResponse_tag__43[] = {
/* 0 */ { 0, sizeof(struct DigestResponse), ((void *)(uintptr_t)11) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean), offsetof(struct DigestResponse, success), asn1_DigestResponse_tag_success_44 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct DigestResponse, rsp), asn1_DigestInit_tag_hostname_7 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct DigestResponse, tickets), asn1_DigestResponse_tag_tickets_47 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct DigestResponse, channel), asn1_DigestResponse_tag_channel_50 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct DigestResponse, session_key), asn1_DigestResponse_tickets_0 },
/* 6 */ { A1_OP_NAME, 0, "DigestResponse" },
/* 7 */ { A1_OP_NAME, 0, "success" },
/* 8 */ { A1_OP_NAME, 0, "rsp" },
/* 9 */ { A1_OP_NAME, 0, "tickets" },
/* 10 */ { A1_OP_NAME, 0, "channel" },
/* 11 */ { A1_OP_NAME, 0, "session-key" }
};
/* generate_template_type: DigestResponse */
const struct asn1_template asn1_DigestResponse[] = {
/* 0 */ { 0, sizeof(DigestResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestResponse_tag__43 }
};

int ASN1CALL
decode_DigestResponse(const unsigned char *p, size_t len, DigestResponse *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestResponse, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DigestResponse(unsigned char *p, size_t len, const DigestResponse *data, size_t *size)
{
    return _asn1_encode(asn1_DigestResponse, p, len, data, size);
}


size_t ASN1CALL
length_DigestResponse(const DigestResponse *data)
{
    return _asn1_length(asn1_DigestResponse, data);
}


void ASN1CALL
free_DigestResponse(DigestResponse *data)
{
    _asn1_free_top(asn1_DigestResponse, data);
}


int ASN1CALL
copy_DigestResponse(const DigestResponse *from, DigestResponse *to)
{
    return _asn1_copy_top(asn1_DigestResponse, from, to);
}


char * ASN1CALL
print_DigestResponse(const DigestResponse *data, int flags)
{
    return _asn1_print_top(asn1_DigestResponse, flags, data);
}

/* template_members: NTLMInit exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: NTLMInit exp exp */
/* template_members: unsigned exp exp */
/* generate_template_type: unsigned_tag_flags_58 */
const struct asn1_template asn1_unsigned_tag_flags_58[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* generate_template_type: NTLMInit_tag_flags_57 */
const struct asn1_template asn1_NTLMInit_tag_flags_57[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_unsigned_tag_flags_58 }
};
/* template_members: NTLMInit exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_hostname_60 */
/* generate_template_type: NTLMInit_tag_hostname_59 */
/* template_members: NTLMInit exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_domain_62 */
/* generate_template_type: NTLMInit_tag_domain_61 */
/* generate_template_type: NTLMInit_tag__56 */
const struct asn1_template asn1_NTLMInit_tag__56[] = {
/* 0 */ { 0, sizeof(struct NTLMInit), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NTLMInit, flags), asn1_NTLMInit_tag_flags_57 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct NTLMInit, hostname), asn1_DigestInit_tag_hostname_7 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct NTLMInit, domain), asn1_DigestInit_tag_hostname_7 },
/* 4 */ { A1_OP_NAME, 0, "NTLMInit" },
/* 5 */ { A1_OP_NAME, 0, "flags" },
/* 6 */ { A1_OP_NAME, 0, "hostname" },
/* 7 */ { A1_OP_NAME, 0, "domain" }
};
/* generate_template_type: NTLMInit */
const struct asn1_template asn1_NTLMInit[] = {
/* 0 */ { 0, sizeof(NTLMInit), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NTLMInit_tag__56 }
};

int ASN1CALL
decode_NTLMInit(const unsigned char *p, size_t len, NTLMInit *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_NTLMInit, 0|0, p, len, data, size);
}


int ASN1CALL
encode_NTLMInit(unsigned char *p, size_t len, const NTLMInit *data, size_t *size)
{
    return _asn1_encode(asn1_NTLMInit, p, len, data, size);
}


size_t ASN1CALL
length_NTLMInit(const NTLMInit *data)
{
    return _asn1_length(asn1_NTLMInit, data);
}


void ASN1CALL
free_NTLMInit(NTLMInit *data)
{
    _asn1_free_top(asn1_NTLMInit, data);
}


int ASN1CALL
copy_NTLMInit(const NTLMInit *from, NTLMInit *to)
{
    return _asn1_copy_top(asn1_NTLMInit, from, to);
}


char * ASN1CALL
print_NTLMInit(const NTLMInit *data, int flags)
{
    return _asn1_print_top(asn1_NTLMInit, flags, data);
}

/* template_members: NTLMInitReply exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: NTLMInitReply exp exp */
/* template_members: unsigned exp exp */
/* generate_template_type: unsigned_tag_flags_65 */
/* generate_template_type: NTLMInitReply_tag_flags_64 */
/* template_members: NTLMInitReply exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_opaque_67 */
/* generate_template_type: NTLMInitReply_tag_opaque_66 */
/* template_members: NTLMInitReply exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_targetname_69 */
/* generate_template_type: NTLMInitReply_tag_targetname_68 */
/* template_members: NTLMInitReply exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_challenge_71 */
/* generate_template_type: NTLMInitReply_tag_challenge_70 */
/* template_members: NTLMInitReply exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_targetinfo_73 */
/* generate_template_type: NTLMInitReply_tag_targetinfo_72 */
/* generate_template_type: NTLMInitReply_tag__63 */
const struct asn1_template asn1_NTLMInitReply_tag__63[] = {
/* 0 */ { 0, sizeof(struct NTLMInitReply), ((void *)(uintptr_t)11) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NTLMInitReply, flags), asn1_NTLMInit_tag_flags_57 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct NTLMInitReply, opaque), asn1_DigestResponse_tickets_0 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct NTLMInitReply, targetname), asn1_DigestInit_tag_hostname_7 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct NTLMInitReply, challenge), asn1_DigestResponse_tickets_0 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct NTLMInitReply, targetinfo), asn1_DigestResponse_tickets_0 },
/* 6 */ { A1_OP_NAME, 0, "NTLMInitReply" },
/* 7 */ { A1_OP_NAME, 0, "flags" },
/* 8 */ { A1_OP_NAME, 0, "opaque" },
/* 9 */ { A1_OP_NAME, 0, "targetname" },
/* 10 */ { A1_OP_NAME, 0, "challenge" },
/* 11 */ { A1_OP_NAME, 0, "targetinfo" }
};
/* generate_template_type: NTLMInitReply */
const struct asn1_template asn1_NTLMInitReply[] = {
/* 0 */ { 0, sizeof(NTLMInitReply), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NTLMInitReply_tag__63 }
};

int ASN1CALL
decode_NTLMInitReply(const unsigned char *p, size_t len, NTLMInitReply *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_NTLMInitReply, 0|0, p, len, data, size);
}


int ASN1CALL
encode_NTLMInitReply(unsigned char *p, size_t len, const NTLMInitReply *data, size_t *size)
{
    return _asn1_encode(asn1_NTLMInitReply, p, len, data, size);
}


size_t ASN1CALL
length_NTLMInitReply(const NTLMInitReply *data)
{
    return _asn1_length(asn1_NTLMInitReply, data);
}


void ASN1CALL
free_NTLMInitReply(NTLMInitReply *data)
{
    _asn1_free_top(asn1_NTLMInitReply, data);
}


int ASN1CALL
copy_NTLMInitReply(const NTLMInitReply *from, NTLMInitReply *to)
{
    return _asn1_copy_top(asn1_NTLMInitReply, from, to);
}


char * ASN1CALL
print_NTLMInitReply(const NTLMInitReply *data, int flags)
{
    return _asn1_print_top(asn1_NTLMInitReply, flags, data);
}

/* template_members: NTLMRequest exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: NTLMRequest exp exp */
/* template_members: unsigned exp exp */
/* generate_template_type: unsigned_tag_flags_76 */
/* generate_template_type: NTLMRequest_tag_flags_75 */
/* template_members: NTLMRequest exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_opaque_78 */
/* generate_template_type: NTLMRequest_tag_opaque_77 */
/* template_members: NTLMRequest exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_username_80 */
/* generate_template_type: NTLMRequest_tag_username_79 */
/* template_members: NTLMRequest exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_targetname_82 */
/* generate_template_type: NTLMRequest_tag_targetname_81 */
/* template_members: NTLMRequest exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_targetinfo_84 */
/* generate_template_type: NTLMRequest_tag_targetinfo_83 */
/* template_members: NTLMRequest exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_lm_86 */
/* generate_template_type: NTLMRequest_tag_lm_85 */
/* template_members: NTLMRequest exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_ntlm_88 */
/* generate_template_type: NTLMRequest_tag_ntlm_87 */
/* template_members: NTLMRequest exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_sessionkey_90 */
/* generate_template_type: NTLMRequest_tag_sessionkey_89 */
/* generate_template_type: NTLMRequest_tag__74 */
const struct asn1_template asn1_NTLMRequest_tag__74[] = {
/* 0 */ { 0, sizeof(struct NTLMRequest), ((void *)(uintptr_t)17) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NTLMRequest, flags), asn1_NTLMInit_tag_flags_57 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct NTLMRequest, opaque), asn1_DigestResponse_tickets_0 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct NTLMRequest, username), asn1_DigestInit_tag_hostname_7 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct NTLMRequest, targetname), asn1_DigestInit_tag_hostname_7 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct NTLMRequest, targetinfo), asn1_DigestResponse_tickets_0 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct NTLMRequest, lm), asn1_DigestResponse_tickets_0 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct NTLMRequest, ntlm), asn1_DigestResponse_tickets_0 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct NTLMRequest, sessionkey), asn1_DigestResponse_tickets_0 },
/* 9 */ { A1_OP_NAME, 0, "NTLMRequest" },
/* 10 */ { A1_OP_NAME, 0, "flags" },
/* 11 */ { A1_OP_NAME, 0, "opaque" },
/* 12 */ { A1_OP_NAME, 0, "username" },
/* 13 */ { A1_OP_NAME, 0, "targetname" },
/* 14 */ { A1_OP_NAME, 0, "targetinfo" },
/* 15 */ { A1_OP_NAME, 0, "lm" },
/* 16 */ { A1_OP_NAME, 0, "ntlm" },
/* 17 */ { A1_OP_NAME, 0, "sessionkey" }
};
/* generate_template_type: NTLMRequest */
const struct asn1_template asn1_NTLMRequest[] = {
/* 0 */ { 0, sizeof(NTLMRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NTLMRequest_tag__74 }
};

int ASN1CALL
decode_NTLMRequest(const unsigned char *p, size_t len, NTLMRequest *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_NTLMRequest, 0|0, p, len, data, size);
}


int ASN1CALL
encode_NTLMRequest(unsigned char *p, size_t len, const NTLMRequest *data, size_t *size)
{
    return _asn1_encode(asn1_NTLMRequest, p, len, data, size);
}


size_t ASN1CALL
length_NTLMRequest(const NTLMRequest *data)
{
    return _asn1_length(asn1_NTLMRequest, data);
}


void ASN1CALL
free_NTLMRequest(NTLMRequest *data)
{
    _asn1_free_top(asn1_NTLMRequest, data);
}


int ASN1CALL
copy_NTLMRequest(const NTLMRequest *from, NTLMRequest *to)
{
    return _asn1_copy_top(asn1_NTLMRequest, from, to);
}


char * ASN1CALL
print_NTLMRequest(const NTLMRequest *data, int flags)
{
    return _asn1_print_top(asn1_NTLMRequest, flags, data);
}

/* template_members: NTLMResponse exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: NTLMResponse exp exp */
/* template_members: int exp exp */
/* generate_template_type: int_tag_success_93 */
/* generate_template_type: NTLMResponse_tag_success_92 */
const struct asn1_template asn1_NTLMResponse_tag_success_92[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean), 0, asn1_DigestResponse_tag_success_44 }
};
/* template_members: NTLMResponse exp exp */
/* template_members: unsigned exp exp */
/* generate_template_type: unsigned_tag_flags_95 */
/* generate_template_type: NTLMResponse_tag_flags_94 */
/* template_members: NTLMResponse exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_sessionkey_97 */
/* generate_template_type: NTLMResponse_tag_sessionkey_96 */
/* template_members: NTLMResponse exp exp */
/* template_members: NTLMResponse exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag__100 */
/* generate_template_type: NTLMResponse_tickets_1 */
/* generate_template_type: NTLMResponse_tag_tickets_99 */
const struct asn1_template asn1_NTLMResponse_tag_tickets_99[] = {
/* 0 */ { 0, sizeof(struct NTLMResponse_tickets), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_DigestResponse_tickets_0 }
};
/* generate_template_type: NTLMResponse_tag_tickets_98 */
const struct asn1_template asn1_NTLMResponse_tag_tickets_98[] = {
/* 0 */ { 0, sizeof(struct NTLMResponse_tickets), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NTLMResponse_tag_tickets_99 }
};
/* generate_template_type: NTLMResponse_tag__91 */
const struct asn1_template asn1_NTLMResponse_tag__91[] = {
/* 0 */ { 0, sizeof(struct NTLMResponse), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NTLMResponse, success), asn1_NTLMResponse_tag_success_92 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct NTLMResponse, flags), asn1_NTLMInit_tag_flags_57 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct NTLMResponse, sessionkey), asn1_DigestResponse_tickets_0 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct NTLMResponse, tickets), asn1_NTLMResponse_tag_tickets_98 },
/* 5 */ { A1_OP_NAME, 0, "NTLMResponse" },
/* 6 */ { A1_OP_NAME, 0, "success" },
/* 7 */ { A1_OP_NAME, 0, "flags" },
/* 8 */ { A1_OP_NAME, 0, "sessionkey" },
/* 9 */ { A1_OP_NAME, 0, "tickets" }
};
/* generate_template_type: NTLMResponse */
const struct asn1_template asn1_NTLMResponse[] = {
/* 0 */ { 0, sizeof(NTLMResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NTLMResponse_tag__91 }
};

int ASN1CALL
decode_NTLMResponse(const unsigned char *p, size_t len, NTLMResponse *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_NTLMResponse, 0|0, p, len, data, size);
}


int ASN1CALL
encode_NTLMResponse(unsigned char *p, size_t len, const NTLMResponse *data, size_t *size)
{
    return _asn1_encode(asn1_NTLMResponse, p, len, data, size);
}


size_t ASN1CALL
length_NTLMResponse(const NTLMResponse *data)
{
    return _asn1_length(asn1_NTLMResponse, data);
}


void ASN1CALL
free_NTLMResponse(NTLMResponse *data)
{
    _asn1_free_top(asn1_NTLMResponse, data);
}


int ASN1CALL
copy_NTLMResponse(const NTLMResponse *from, NTLMResponse *to)
{
    return _asn1_copy_top(asn1_NTLMResponse, from, to);
}


char * ASN1CALL
print_NTLMResponse(const NTLMResponse *data, int flags)
{
    return _asn1_print_top(asn1_NTLMResponse, flags, data);
}

/* template_members: NTLMRequest2 exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: NTLMRequest2 exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_loginUserName_103 */
/* generate_template_type: NTLMRequest2_tag_loginUserName_102 */
/* template_members: NTLMRequest2 exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_loginDomainName_105 */
/* generate_template_type: NTLMRequest2_tag_loginDomainName_104 */
/* template_members: NTLMRequest2 exp exp */
/* template_members: unsigned exp exp */
/* generate_template_type: unsigned_tag_flags_107 */
/* generate_template_type: NTLMRequest2_tag_flags_106 */
/* template_members: NTLMRequest2 exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_lmchallenge_109 */
/* generate_template_type: NTLMRequest2_tag_lmchallenge_108 */
/* template_members: NTLMRequest2 exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_ntChallengeResponce_111 */
/* generate_template_type: NTLMRequest2_tag_ntChallengeResponce_110 */
/* template_members: NTLMRequest2 exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_lmChallengeResponce_113 */
/* generate_template_type: NTLMRequest2_tag_lmChallengeResponce_112 */
/* generate_template_type: NTLMRequest2_tag__101 */
const struct asn1_template asn1_NTLMRequest2_tag__101[] = {
/* 0 */ { 0, sizeof(struct NTLMRequest2), ((void *)(uintptr_t)13) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NTLMRequest2, loginUserName), asn1_DigestInit_tag_hostname_7 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct NTLMRequest2, loginDomainName), asn1_DigestInit_tag_hostname_7 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct NTLMRequest2, flags), asn1_NTLMInit_tag_flags_57 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct NTLMRequest2, lmchallenge), asn1_DigestResponse_tickets_0 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct NTLMRequest2, ntChallengeResponce), asn1_DigestResponse_tickets_0 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct NTLMRequest2, lmChallengeResponce), asn1_DigestResponse_tickets_0 },
/* 7 */ { A1_OP_NAME, 0, "NTLMRequest2" },
/* 8 */ { A1_OP_NAME, 0, "loginUserName" },
/* 9 */ { A1_OP_NAME, 0, "loginDomainName" },
/* 10 */ { A1_OP_NAME, 0, "flags" },
/* 11 */ { A1_OP_NAME, 0, "lmchallenge" },
/* 12 */ { A1_OP_NAME, 0, "ntChallengeResponce" },
/* 13 */ { A1_OP_NAME, 0, "lmChallengeResponce" }
};
/* generate_template_type: NTLMRequest2 */
const struct asn1_template asn1_NTLMRequest2[] = {
/* 0 */ { 0, sizeof(NTLMRequest2), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NTLMRequest2_tag__101 }
};

int ASN1CALL
decode_NTLMRequest2(const unsigned char *p, size_t len, NTLMRequest2 *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_NTLMRequest2, 0|0, p, len, data, size);
}


int ASN1CALL
encode_NTLMRequest2(unsigned char *p, size_t len, const NTLMRequest2 *data, size_t *size)
{
    return _asn1_encode(asn1_NTLMRequest2, p, len, data, size);
}


size_t ASN1CALL
length_NTLMRequest2(const NTLMRequest2 *data)
{
    return _asn1_length(asn1_NTLMRequest2, data);
}


void ASN1CALL
free_NTLMRequest2(NTLMRequest2 *data)
{
    _asn1_free_top(asn1_NTLMRequest2, data);
}


int ASN1CALL
copy_NTLMRequest2(const NTLMRequest2 *from, NTLMRequest2 *to)
{
    return _asn1_copy_top(asn1_NTLMRequest2, from, to);
}


char * ASN1CALL
print_NTLMRequest2(const NTLMRequest2 *data, int flags)
{
    return _asn1_print_top(asn1_NTLMRequest2, flags, data);
}

/* template_members: NTLMReply exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: NTLMReply exp exp */
/* template_members: int exp exp */
/* generate_template_type: int_tag_success_116 */
/* generate_template_type: NTLMReply_tag_success_115 */
/* template_members: NTLMReply exp exp */
/* template_members: unsigned exp exp */
/* generate_template_type: unsigned_tag_flags_118 */
/* generate_template_type: NTLMReply_tag_flags_117 */
/* template_members: NTLMReply exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_sessionkey_120 */
/* generate_template_type: NTLMReply_tag_sessionkey_119 */
/* generate_template_type: NTLMReply_tag__114 */
const struct asn1_template asn1_NTLMReply_tag__114[] = {
/* 0 */ { 0, sizeof(struct NTLMReply), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct NTLMReply, success), asn1_NTLMResponse_tag_success_92 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct NTLMReply, flags), asn1_NTLMInit_tag_flags_57 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct NTLMReply, sessionkey), asn1_DigestResponse_tickets_0 },
/* 4 */ { A1_OP_NAME, 0, "NTLMReply" },
/* 5 */ { A1_OP_NAME, 0, "success" },
/* 6 */ { A1_OP_NAME, 0, "flags" },
/* 7 */ { A1_OP_NAME, 0, "sessionkey" }
};
/* generate_template_type: NTLMReply */
const struct asn1_template asn1_NTLMReply[] = {
/* 0 */ { 0, sizeof(NTLMReply), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_NTLMReply_tag__114 }
};

int ASN1CALL
decode_NTLMReply(const unsigned char *p, size_t len, NTLMReply *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_NTLMReply, 0|0, p, len, data, size);
}


int ASN1CALL
encode_NTLMReply(unsigned char *p, size_t len, const NTLMReply *data, size_t *size)
{
    return _asn1_encode(asn1_NTLMReply, p, len, data, size);
}


size_t ASN1CALL
length_NTLMReply(const NTLMReply *data)
{
    return _asn1_length(asn1_NTLMReply, data);
}


void ASN1CALL
free_NTLMReply(NTLMReply *data)
{
    _asn1_free_top(asn1_NTLMReply, data);
}


int ASN1CALL
copy_NTLMReply(const NTLMReply *from, NTLMReply *to)
{
    return _asn1_copy_top(asn1_NTLMReply, from, to);
}


char * ASN1CALL
print_NTLMReply(const NTLMReply *data, int flags)
{
    return _asn1_print_top(asn1_NTLMReply, flags, data);
}

/* template_members: DigestInit exp exp */
/* generate_template_type: DigestInit_tag__121 */
const struct asn1_template asn1_DigestInit_tag__121[] = {
/* 0 */ { 0, sizeof(DigestInit), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DigestInit }
};
/* generate_template_type: DigestReqInner_choice_init */
const struct asn1_template asn1_DigestReqInner_choice_init[] = {
/* 0 */ { 0, sizeof(DigestInit), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_DigestInit_tag__121 }
};
/* template_members: DigestRequest exp exp */
/* generate_template_type: DigestRequest_tag__122 */
const struct asn1_template asn1_DigestRequest_tag__122[] = {
/* 0 */ { 0, sizeof(DigestRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DigestRequest }
};
/* generate_template_type: DigestReqInner_choice_digestRequest */
const struct asn1_template asn1_DigestReqInner_choice_digestRequest[] = {
/* 0 */ { 0, sizeof(DigestRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_DigestRequest_tag__122 }
};
/* template_members: NTLMInit exp exp */
/* generate_template_type: NTLMInit_tag__123 */
const struct asn1_template asn1_NTLMInit_tag__123[] = {
/* 0 */ { 0, sizeof(NTLMInit), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_NTLMInit }
};
/* generate_template_type: DigestReqInner_choice_ntlmInit */
const struct asn1_template asn1_DigestReqInner_choice_ntlmInit[] = {
/* 0 */ { 0, sizeof(NTLMInit), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), 0, asn1_NTLMInit_tag__123 }
};
/* template_members: NTLMRequest exp exp */
/* generate_template_type: NTLMRequest_tag__124 */
const struct asn1_template asn1_NTLMRequest_tag__124[] = {
/* 0 */ { 0, sizeof(NTLMRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_NTLMRequest }
};
/* generate_template_type: DigestReqInner_choice_ntlmRequest */
const struct asn1_template asn1_DigestReqInner_choice_ntlmRequest[] = {
/* 0 */ { 0, sizeof(NTLMRequest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), 0, asn1_NTLMRequest_tag__124 }
};
/* template_members: heim_integer exp exp */
/* template_members: heim_integer exp exp */
/* generate_template_type: heim_integer_tag__126 */
const struct asn1_template asn1_heim_integer_tag__126[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)0) },
};
/* generate_template_type: heim_integer_tag__125 */
const struct asn1_template asn1_heim_integer_tag__125[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Null), 0, asn1_heim_integer_tag__126 }
};
/* generate_template_type: DigestReqInner_choice_supportedMechs */
const struct asn1_template asn1_DigestReqInner_choice_supportedMechs[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), 0, asn1_heim_integer_tag__125 }
};
static const struct asn1_template asn1_choice_DigestReqInner_0[] = {
/* 0 */ { 0, offsetof(DigestReqInner, element), ((void *)(uintptr_t)10) },
/* 1 */ { choice_DigestReqInner_init, offsetof(DigestReqInner, u.init), asn1_DigestReqInner_choice_init },
/* 2 */ { choice_DigestReqInner_digestRequest, offsetof(DigestReqInner, u.digestRequest), asn1_DigestReqInner_choice_digestRequest },
/* 3 */ { choice_DigestReqInner_ntlmInit, offsetof(DigestReqInner, u.ntlmInit), asn1_DigestReqInner_choice_ntlmInit },
/* 4 */ { choice_DigestReqInner_ntlmRequest, offsetof(DigestReqInner, u.ntlmRequest), asn1_DigestReqInner_choice_ntlmRequest },
/* 5 */ { choice_DigestReqInner_supportedMechs, offsetof(DigestReqInner, u.supportedMechs), asn1_DigestReqInner_choice_supportedMechs },
/* 6 */ { 0, 0, "init" },
/* 7 */ { 0, 0, "digestRequest" },
/* 8 */ { 0, 0, "ntlmInit" },
/* 9 */ { 0, 0, "ntlmRequest" },
/* 10 */ { 0, 0, "supportedMechs" }
};
/* generate_template_type: DigestReqInner */
const struct asn1_template asn1_DigestReqInner[] = {
/* 0 */ { 0, sizeof(DigestReqInner), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_DigestReqInner_0 }
};

int ASN1CALL
decode_DigestReqInner(const unsigned char *p, size_t len, DigestReqInner *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestReqInner, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DigestReqInner(unsigned char *p, size_t len, const DigestReqInner *data, size_t *size)
{
    return _asn1_encode(asn1_DigestReqInner, p, len, data, size);
}


size_t ASN1CALL
length_DigestReqInner(const DigestReqInner *data)
{
    return _asn1_length(asn1_DigestReqInner, data);
}


void ASN1CALL
free_DigestReqInner(DigestReqInner *data)
{
    _asn1_free_top(asn1_DigestReqInner, data);
}


int ASN1CALL
copy_DigestReqInner(const DigestReqInner *from, DigestReqInner *to)
{
    return _asn1_copy_top(asn1_DigestReqInner, from, to);
}


char * ASN1CALL
print_DigestReqInner(const DigestReqInner *data, int flags)
{
    return _asn1_print_top(asn1_DigestReqInner, flags, data);
}

/* template_members: DigestREQ exp exp */
/* template_members: DigestREQ exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DigestREQ exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_apReq_130 */
/* generate_template_type: DigestREQ_tag_apReq_129 */
/* template_members: DigestREQ exp exp */
/* generate_template_type: DigestREQ_tag_innerReq_131 */
const struct asn1_template asn1_DigestREQ_tag_innerReq_131[] = {
/* 0 */ { 0, sizeof(EncryptedData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_EncryptedData}
};
/* generate_template_type: DigestREQ_tag__128 */
const struct asn1_template asn1_DigestREQ_tag__128[] = {
/* 0 */ { 0, sizeof(struct DigestREQ), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct DigestREQ, apReq), asn1_DigestResponse_tickets_0 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct DigestREQ, innerReq), asn1_DigestREQ_tag_innerReq_131 },
/* 3 */ { A1_OP_NAME, 0, "DigestREQ" },
/* 4 */ { A1_OP_NAME, 0, "apReq" },
/* 5 */ { A1_OP_NAME, 0, "innerReq" }
};
/* generate_template_type: DigestREQ_tag__127 */
const struct asn1_template asn1_DigestREQ_tag__127[] = {
/* 0 */ { 0, sizeof(struct DigestREQ), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestREQ_tag__128 }
};
/* generate_template_type: DigestREQ */
const struct asn1_template asn1_DigestREQ[] = {
/* 0 */ { 0, sizeof(DigestREQ), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,128), 0, asn1_DigestREQ_tag__127 }
};

int ASN1CALL
decode_DigestREQ(const unsigned char *p, size_t len, DigestREQ *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestREQ, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DigestREQ(unsigned char *p, size_t len, const DigestREQ *data, size_t *size)
{
    return _asn1_encode(asn1_DigestREQ, p, len, data, size);
}


size_t ASN1CALL
length_DigestREQ(const DigestREQ *data)
{
    return _asn1_length(asn1_DigestREQ, data);
}


void ASN1CALL
free_DigestREQ(DigestREQ *data)
{
    _asn1_free_top(asn1_DigestREQ, data);
}


int ASN1CALL
copy_DigestREQ(const DigestREQ *from, DigestREQ *to)
{
    return _asn1_copy_top(asn1_DigestREQ, from, to);
}


char * ASN1CALL
print_DigestREQ(const DigestREQ *data, int flags)
{
    return _asn1_print_top(asn1_DigestREQ, flags, data);
}

/* template_members: DigestError exp exp */
/* generate_template_type: DigestError_tag__132 */
const struct asn1_template asn1_DigestError_tag__132[] = {
/* 0 */ { 0, sizeof(DigestError), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DigestError }
};
/* generate_template_type: DigestRepInner_choice_error */
const struct asn1_template asn1_DigestRepInner_choice_error[] = {
/* 0 */ { 0, sizeof(DigestError), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_DigestError_tag__132 }
};
/* template_members: DigestInitReply exp exp */
/* generate_template_type: DigestInitReply_tag__133 */
const struct asn1_template asn1_DigestInitReply_tag__133[] = {
/* 0 */ { 0, sizeof(DigestInitReply), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DigestInitReply }
};
/* generate_template_type: DigestRepInner_choice_initReply */
const struct asn1_template asn1_DigestRepInner_choice_initReply[] = {
/* 0 */ { 0, sizeof(DigestInitReply), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_DigestInitReply_tag__133 }
};
/* template_members: DigestResponse exp exp */
/* generate_template_type: DigestResponse_tag__134 */
const struct asn1_template asn1_DigestResponse_tag__134[] = {
/* 0 */ { 0, sizeof(DigestResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DigestResponse }
};
/* generate_template_type: DigestRepInner_choice_response */
const struct asn1_template asn1_DigestRepInner_choice_response[] = {
/* 0 */ { 0, sizeof(DigestResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), 0, asn1_DigestResponse_tag__134 }
};
/* template_members: NTLMInitReply exp exp */
/* generate_template_type: NTLMInitReply_tag__135 */
const struct asn1_template asn1_NTLMInitReply_tag__135[] = {
/* 0 */ { 0, sizeof(NTLMInitReply), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_NTLMInitReply }
};
/* generate_template_type: DigestRepInner_choice_ntlmInitReply */
const struct asn1_template asn1_DigestRepInner_choice_ntlmInitReply[] = {
/* 0 */ { 0, sizeof(NTLMInitReply), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), 0, asn1_NTLMInitReply_tag__135 }
};
/* template_members: NTLMResponse exp exp */
/* generate_template_type: NTLMResponse_tag__136 */
const struct asn1_template asn1_NTLMResponse_tag__136[] = {
/* 0 */ { 0, sizeof(NTLMResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_NTLMResponse }
};
/* generate_template_type: DigestRepInner_choice_ntlmResponse */
const struct asn1_template asn1_DigestRepInner_choice_ntlmResponse[] = {
/* 0 */ { 0, sizeof(NTLMResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), 0, asn1_NTLMResponse_tag__136 }
};
/* template_members: DigestTypes exp exp */
/* generate_template_type: DigestTypes_tag__137 */
const struct asn1_template asn1_DigestTypes_tag__137[] = {
/* 0 */ { 0, sizeof(DigestTypes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DigestTypes }
};
/* generate_template_type: DigestRepInner_choice_supportedMechs */
const struct asn1_template asn1_DigestRepInner_choice_supportedMechs[] = {
/* 0 */ { 0, sizeof(DigestTypes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), 0, asn1_DigestTypes_tag__137 }
};
static const struct asn1_template asn1_choice_DigestRepInner_1[] = {
/* 0 */ { offsetof(DigestRepInner, u.asn1_ellipsis), offsetof(DigestRepInner, element), ((void *)(uintptr_t)13) },
/* 1 */ { choice_DigestRepInner_error, offsetof(DigestRepInner, u.error), asn1_DigestRepInner_choice_error },
/* 2 */ { choice_DigestRepInner_initReply, offsetof(DigestRepInner, u.initReply), asn1_DigestRepInner_choice_initReply },
/* 3 */ { choice_DigestRepInner_response, offsetof(DigestRepInner, u.response), asn1_DigestRepInner_choice_response },
/* 4 */ { choice_DigestRepInner_ntlmInitReply, offsetof(DigestRepInner, u.ntlmInitReply), asn1_DigestRepInner_choice_ntlmInitReply },
/* 5 */ { choice_DigestRepInner_ntlmResponse, offsetof(DigestRepInner, u.ntlmResponse), asn1_DigestRepInner_choice_ntlmResponse },
/* 6 */ { choice_DigestRepInner_supportedMechs, offsetof(DigestRepInner, u.supportedMechs), asn1_DigestRepInner_choice_supportedMechs },
/* 7 */ { 0, 0, "error" },
/* 8 */ { 0, 0, "initReply" },
/* 9 */ { 0, 0, "response" },
/* 10 */ { 0, 0, "ntlmInitReply" },
/* 11 */ { 0, 0, "ntlmResponse" },
/* 12 */ { 0, 0, "supportedMechs" },
/* 13 */ { 0, 0, "..." }
};
/* generate_template_type: DigestRepInner */
const struct asn1_template asn1_DigestRepInner[] = {
/* 0 */ { 0, sizeof(DigestRepInner), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_DigestRepInner_1 }
};

int ASN1CALL
decode_DigestRepInner(const unsigned char *p, size_t len, DigestRepInner *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestRepInner, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DigestRepInner(unsigned char *p, size_t len, const DigestRepInner *data, size_t *size)
{
    return _asn1_encode(asn1_DigestRepInner, p, len, data, size);
}


size_t ASN1CALL
length_DigestRepInner(const DigestRepInner *data)
{
    return _asn1_length(asn1_DigestRepInner, data);
}


void ASN1CALL
free_DigestRepInner(DigestRepInner *data)
{
    _asn1_free_top(asn1_DigestRepInner, data);
}


int ASN1CALL
copy_DigestRepInner(const DigestRepInner *from, DigestRepInner *to)
{
    return _asn1_copy_top(asn1_DigestRepInner, from, to);
}


char * ASN1CALL
print_DigestRepInner(const DigestRepInner *data, int flags)
{
    return _asn1_print_top(asn1_DigestRepInner, flags, data);
}

/* template_members: DigestREP exp exp */
/* template_members: DigestREP exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: DigestREP exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_apRep_141 */
/* generate_template_type: DigestREP_tag_apRep_140 */
/* template_members: DigestREP exp exp */
/* generate_template_type: DigestREP_tag_innerRep_142 */
/* generate_template_type: DigestREP_tag__139 */
const struct asn1_template asn1_DigestREP_tag__139[] = {
/* 0 */ { 0, sizeof(struct DigestREP), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct DigestREP, apRep), asn1_DigestResponse_tickets_0 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct DigestREP, innerRep), asn1_DigestREQ_tag_innerReq_131 },
/* 3 */ { A1_OP_NAME, 0, "DigestREP" },
/* 4 */ { A1_OP_NAME, 0, "apRep" },
/* 5 */ { A1_OP_NAME, 0, "innerRep" }
};
/* generate_template_type: DigestREP_tag__138 */
const struct asn1_template asn1_DigestREP_tag__138[] = {
/* 0 */ { 0, sizeof(struct DigestREP), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_DigestREP_tag__139 }
};
/* generate_template_type: DigestREP */
const struct asn1_template asn1_DigestREP[] = {
/* 0 */ { 0, sizeof(DigestREP), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,129), 0, asn1_DigestREP_tag__138 }
};

int ASN1CALL
decode_DigestREP(const unsigned char *p, size_t len, DigestREP *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestREP, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DigestREP(unsigned char *p, size_t len, const DigestREP *data, size_t *size)
{
    return _asn1_encode(asn1_DigestREP, p, len, data, size);
}


size_t ASN1CALL
length_DigestREP(const DigestREP *data)
{
    return _asn1_length(asn1_DigestREP, data);
}


void ASN1CALL
free_DigestREP(DigestREP *data)
{
    _asn1_free_top(asn1_DigestREP, data);
}


int ASN1CALL
copy_DigestREP(const DigestREP *from, DigestREP *to)
{
    return _asn1_copy_top(asn1_DigestREP, from, to);
}


char * ASN1CALL
print_DigestREP(const DigestREP *data, int flags)
{
    return _asn1_print_top(asn1_DigestREP, flags, data);
}

