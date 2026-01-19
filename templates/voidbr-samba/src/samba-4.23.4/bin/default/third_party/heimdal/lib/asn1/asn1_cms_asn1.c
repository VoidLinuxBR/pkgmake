/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/cms.asn1 */
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
#include "cms_asn1.h"
#include "cms_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_CertificateSerialNumber = {
	(asn1_type_encode)encode_CertificateSerialNumber,
	(asn1_type_decode)decode_CertificateSerialNumber,
	(asn1_type_length)length_CertificateSerialNumber,
	(asn1_type_copy)copy_CertificateSerialNumber,
	(asn1_type_release)free_CertificateSerialNumber,
	(asn1_type_print)print_CertificateSerialNumber,
	sizeof(CertificateSerialNumber)
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
static const struct asn1_type_func asn1_extern_Name = {
	(asn1_type_encode)encode_Name,
	(asn1_type_decode)decode_Name,
	(asn1_type_length)length_Name,
	(asn1_type_copy)copy_Name,
	(asn1_type_release)free_Name,
	(asn1_type_print)print_Name,
	sizeof(Name)
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
static const struct asn1_type_func asn1_extern_Certificate = {
	(asn1_type_encode)encode_Certificate,
	(asn1_type_decode)decode_Certificate,
	(asn1_type_length)length_Certificate,
	(asn1_type_copy)copy_Certificate,
	(asn1_type_release)free_Certificate,
	(asn1_type_print)print_Certificate,
	sizeof(Certificate)
};
static const struct asn1_type_func asn1_extern_SubjectKeyIdentifier = {
	(asn1_type_encode)encode_SubjectKeyIdentifier,
	(asn1_type_decode)decode_SubjectKeyIdentifier,
	(asn1_type_length)length_SubjectKeyIdentifier,
	(asn1_type_copy)copy_SubjectKeyIdentifier,
	(asn1_type_release)free_SubjectKeyIdentifier,
	(asn1_type_print)print_SubjectKeyIdentifier,
	sizeof(SubjectKeyIdentifier)
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
static unsigned oid_id_pkcs7_variable_num[6] =  { 1, 2, 840, 113549, 1, 7};
const heim_oid asn1_oid_id_pkcs7 = { 6, oid_id_pkcs7_variable_num };

static unsigned oid_id_pkcs7_data_variable_num[7] =  { 1, 2, 840, 113549, 1, 7, 1};
const heim_oid asn1_oid_id_pkcs7_data = { 7, oid_id_pkcs7_data_variable_num };

static unsigned oid_id_pkcs7_signedData_variable_num[7] =  { 1, 2, 840, 113549, 1, 7, 2};
const heim_oid asn1_oid_id_pkcs7_signedData = { 7, oid_id_pkcs7_signedData_variable_num };

static unsigned oid_id_pkcs7_envelopedData_variable_num[7] =  { 1, 2, 840, 113549, 1, 7, 3};
const heim_oid asn1_oid_id_pkcs7_envelopedData = { 7, oid_id_pkcs7_envelopedData_variable_num };

static unsigned oid_id_pkcs7_signedAndEnvelopedData_variable_num[7] =  { 1, 2, 840, 113549, 1, 7, 4};
const heim_oid asn1_oid_id_pkcs7_signedAndEnvelopedData = { 7, oid_id_pkcs7_signedAndEnvelopedData_variable_num };

static unsigned oid_id_pkcs7_digestedData_variable_num[7] =  { 1, 2, 840, 113549, 1, 7, 5};
const heim_oid asn1_oid_id_pkcs7_digestedData = { 7, oid_id_pkcs7_digestedData_variable_num };

static unsigned oid_id_pkcs7_encryptedData_variable_num[7] =  { 1, 2, 840, 113549, 1, 7, 6};
const heim_oid asn1_oid_id_pkcs7_encryptedData = { 7, oid_id_pkcs7_encryptedData_variable_num };

extern const struct asn1_template asn1_CMSVersion[];
extern const struct asn1_template asn1_CMSVersion[];
extern const struct asn1_template asn1_DigestAlgorithmIdentifier[];
extern const struct asn1_template asn1_DigestAlgorithmIdentifier[];
extern const struct asn1_template asn1_DigestAlgorithmIdentifiers[];
extern const struct asn1_template asn1_SignatureAlgorithmIdentifier[];
extern const struct asn1_template asn1_SignatureAlgorithmIdentifier[];
extern const struct asn1_template asn1_ContentType[];
extern const struct asn1_template asn1_ContentType[];
extern const struct asn1_template asn1_MessageDigest[];
extern const struct asn1_template asn1_MessageDigest[];
extern const struct asn1_template asn1_ContentInfo[];
extern const struct asn1_template asn1_EncapsulatedContentInfo[];
extern const struct asn1_template asn1_CertificateSet[];
extern const struct asn1_template asn1_CertificateList[];
extern const struct asn1_template asn1_CertificateList[];
extern const struct asn1_template asn1_CertificateRevocationLists[];
extern const struct asn1_template asn1_IssuerAndSerialNumber[];
extern const struct asn1_template asn1_CMSIdentifier[];
extern const struct asn1_template asn1_SignerIdentifier[];
extern const struct asn1_template asn1_SignerIdentifier[];
extern const struct asn1_template asn1_RecipientIdentifier[];
extern const struct asn1_template asn1_RecipientIdentifier[];
extern const struct asn1_template asn1_CMSAttributes[];
extern const struct asn1_template asn1_SignatureValue[];
extern const struct asn1_template asn1_SignatureValue[];
extern const struct asn1_template asn1_SignerInfo[];
extern const struct asn1_template asn1_SignerInfos[];
extern const struct asn1_template asn1_SignedData[];
extern const struct asn1_template asn1_OriginatorInfo[];
extern const struct asn1_template asn1_KeyEncryptionAlgorithmIdentifier[];
extern const struct asn1_template asn1_KeyEncryptionAlgorithmIdentifier[];
extern const struct asn1_template asn1_ContentEncryptionAlgorithmIdentifier[];
extern const struct asn1_template asn1_ContentEncryptionAlgorithmIdentifier[];
extern const struct asn1_template asn1_EncryptedKey[];
extern const struct asn1_template asn1_EncryptedKey[];
extern const struct asn1_template asn1_KeyTransRecipientInfo[];
extern const struct asn1_template asn1_RecipientInfo[];
extern const struct asn1_template asn1_RecipientInfo[];
extern const struct asn1_template asn1_RecipientInfos[];
extern const struct asn1_template asn1_EncryptedContent[];
extern const struct asn1_template asn1_EncryptedContent[];
extern const struct asn1_template asn1_EncryptedContentInfo[];
extern const struct asn1_template asn1_UnprotectedAttributes[];
extern const struct asn1_template asn1_CMSEncryptedData[];
extern const struct asn1_template asn1_EnvelopedData[];
extern const struct asn1_template asn1_CMSRC2CBCParameter[];
extern const struct asn1_template asn1_CMSCBCParameter[];
extern const struct asn1_template asn1_CMSCBCParameter[];
/* template_members: CMSVersion exp exp */
const struct asn1_template asn1_CMSVersion_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_NAME, 0, "cMSVersion-v0" },
/* 2 */ { A1_OP_NAME, 1, "cMSVersion-v1" },
/* 3 */ { A1_OP_NAME, 2, "cMSVersion-v2" },
/* 4 */ { A1_OP_NAME, 3, "cMSVersion-v3" },
/* 5 */ { A1_OP_NAME, 4, "cMSVersion-v4" }
};
/* generate_template_type: CMSVersion_tag__0 */
const struct asn1_template asn1_CMSVersion_tag__0[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_CMSVersion_enum_names }
};
/* generate_template_type: CMSVersion */
const struct asn1_template asn1_CMSVersion[] = {
/* 0 */ { 0, sizeof(CMSVersion), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_CMSVersion_tag__0 }
};

int ASN1CALL
decode_CMSVersion(const unsigned char *p, size_t len, CMSVersion *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CMSVersion, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_CMSVersion(unsigned char *p, size_t len, const CMSVersion *data, size_t *size)
{
    return _asn1_encode(asn1_CMSVersion, p, len, data, size);
}


size_t ASN1CALL
length_CMSVersion(const CMSVersion *data)
{
    return _asn1_length(asn1_CMSVersion, data);
}


void ASN1CALL
free_CMSVersion(CMSVersion *data)
{
    _asn1_free_top(asn1_CMSVersion, data);
}


int ASN1CALL
copy_CMSVersion(const CMSVersion *from, CMSVersion *to)
{
    return _asn1_copy_top(asn1_CMSVersion, from, to);
}


char * ASN1CALL
print_CMSVersion(const CMSVersion *data, int flags)
{
    return _asn1_print_top(asn1_CMSVersion, flags, data);
}

/* generate_template_type: DigestAlgorithmIdentifier */
const struct asn1_template asn1_DigestAlgorithmIdentifier[] = {
/* 0 */ { 0, sizeof(DigestAlgorithmIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_AlgorithmIdentifier}
};

int ASN1CALL
decode_DigestAlgorithmIdentifier(const unsigned char *p, size_t len, DigestAlgorithmIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestAlgorithmIdentifier, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_DigestAlgorithmIdentifier(unsigned char *p, size_t len, const DigestAlgorithmIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_DigestAlgorithmIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_DigestAlgorithmIdentifier(const DigestAlgorithmIdentifier *data)
{
    return _asn1_length(asn1_DigestAlgorithmIdentifier, data);
}


void ASN1CALL
free_DigestAlgorithmIdentifier(DigestAlgorithmIdentifier *data)
{
    _asn1_free_top(asn1_DigestAlgorithmIdentifier, data);
}


int ASN1CALL
copy_DigestAlgorithmIdentifier(const DigestAlgorithmIdentifier *from, DigestAlgorithmIdentifier *to)
{
    return _asn1_copy_top(asn1_DigestAlgorithmIdentifier, from, to);
}


char * ASN1CALL
print_DigestAlgorithmIdentifier(const DigestAlgorithmIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_DigestAlgorithmIdentifier, flags, data);
}

/* template_members: DigestAlgorithmIdentifiers exp exp */
/* generate_template_type: DigestAlgorithmIdentifier_seofTstruct_0 */
const struct asn1_template asn1_DigestAlgorithmIdentifier_seofTstruct_0[] = {
/* 0 */ { 0, sizeof(DigestAlgorithmIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_DigestAlgorithmIdentifier }
};
/* generate_template_type: DigestAlgorithmIdentifiers_tag__1 */
const struct asn1_template asn1_DigestAlgorithmIdentifiers_tag__1[] = {
/* 0 */ { 0, sizeof(DigestAlgorithmIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_DigestAlgorithmIdentifier_seofTstruct_0 }
};
/* generate_template_type: DigestAlgorithmIdentifiers */
const struct asn1_template asn1_DigestAlgorithmIdentifiers[] = {
/* 0 */ { 0, sizeof(DigestAlgorithmIdentifiers), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_DigestAlgorithmIdentifiers_tag__1 }
};

int ASN1CALL
decode_DigestAlgorithmIdentifiers(const unsigned char *p, size_t len, DigestAlgorithmIdentifiers *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DigestAlgorithmIdentifiers, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_DigestAlgorithmIdentifiers(unsigned char *p, size_t len, const DigestAlgorithmIdentifiers *data, size_t *size)
{
    return _asn1_encode(asn1_DigestAlgorithmIdentifiers, p, len, data, size);
}


size_t ASN1CALL
length_DigestAlgorithmIdentifiers(const DigestAlgorithmIdentifiers *data)
{
    return _asn1_length(asn1_DigestAlgorithmIdentifiers, data);
}


void ASN1CALL
free_DigestAlgorithmIdentifiers(DigestAlgorithmIdentifiers *data)
{
    _asn1_free_top(asn1_DigestAlgorithmIdentifiers, data);
}


int ASN1CALL
copy_DigestAlgorithmIdentifiers(const DigestAlgorithmIdentifiers *from, DigestAlgorithmIdentifiers *to)
{
    return _asn1_copy_top(asn1_DigestAlgorithmIdentifiers, from, to);
}


char * ASN1CALL
print_DigestAlgorithmIdentifiers(const DigestAlgorithmIdentifiers *data, int flags)
{
    return _asn1_print_top(asn1_DigestAlgorithmIdentifiers, flags, data);
}

int ASN1CALL
add_DigestAlgorithmIdentifiers(DigestAlgorithmIdentifiers *data, const DigestAlgorithmIdentifier *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_DigestAlgorithmIdentifier(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_DigestAlgorithmIdentifiers(DigestAlgorithmIdentifiers *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_DigestAlgorithmIdentifier(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* generate_template_type: SignatureAlgorithmIdentifier */
const struct asn1_template asn1_SignatureAlgorithmIdentifier[] = {
/* 0 */ { 0, sizeof(SignatureAlgorithmIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_AlgorithmIdentifier}
};

int ASN1CALL
decode_SignatureAlgorithmIdentifier(const unsigned char *p, size_t len, SignatureAlgorithmIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SignatureAlgorithmIdentifier, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_SignatureAlgorithmIdentifier(unsigned char *p, size_t len, const SignatureAlgorithmIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_SignatureAlgorithmIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_SignatureAlgorithmIdentifier(const SignatureAlgorithmIdentifier *data)
{
    return _asn1_length(asn1_SignatureAlgorithmIdentifier, data);
}


void ASN1CALL
free_SignatureAlgorithmIdentifier(SignatureAlgorithmIdentifier *data)
{
    _asn1_free_top(asn1_SignatureAlgorithmIdentifier, data);
}


int ASN1CALL
copy_SignatureAlgorithmIdentifier(const SignatureAlgorithmIdentifier *from, SignatureAlgorithmIdentifier *to)
{
    return _asn1_copy_top(asn1_SignatureAlgorithmIdentifier, from, to);
}


char * ASN1CALL
print_SignatureAlgorithmIdentifier(const SignatureAlgorithmIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_SignatureAlgorithmIdentifier, flags, data);
}

/* template_members: ContentType exp exp */
/* generate_template_type: ContentType_tag__2 */
const struct asn1_template asn1_ContentType_tag__2[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* generate_template_type: ContentType */
const struct asn1_template asn1_ContentType[] = {
/* 0 */ { 0, sizeof(ContentType), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_ContentType_tag__2 }
};

int ASN1CALL
decode_ContentType(const unsigned char *p, size_t len, ContentType *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ContentType, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_ContentType(unsigned char *p, size_t len, const ContentType *data, size_t *size)
{
    return _asn1_encode(asn1_ContentType, p, len, data, size);
}


size_t ASN1CALL
length_ContentType(const ContentType *data)
{
    return _asn1_length(asn1_ContentType, data);
}


void ASN1CALL
free_ContentType(ContentType *data)
{
    _asn1_free_top(asn1_ContentType, data);
}


int ASN1CALL
copy_ContentType(const ContentType *from, ContentType *to)
{
    return _asn1_copy_top(asn1_ContentType, from, to);
}


char * ASN1CALL
print_ContentType(const ContentType *data, int flags)
{
    return _asn1_print_top(asn1_ContentType, flags, data);
}

/* template_members: MessageDigest exp exp */
/* generate_template_type: MessageDigest_tag__3 */
const struct asn1_template asn1_MessageDigest_tag__3[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: MessageDigest */
const struct asn1_template asn1_MessageDigest[] = {
/* 0 */ { 0, sizeof(MessageDigest), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_MessageDigest_tag__3 }
};

int ASN1CALL
decode_MessageDigest(const unsigned char *p, size_t len, MessageDigest *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_MessageDigest, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_MessageDigest(unsigned char *p, size_t len, const MessageDigest *data, size_t *size)
{
    return _asn1_encode(asn1_MessageDigest, p, len, data, size);
}


size_t ASN1CALL
length_MessageDigest(const MessageDigest *data)
{
    return _asn1_length(asn1_MessageDigest, data);
}


void ASN1CALL
free_MessageDigest(MessageDigest *data)
{
    _asn1_free_top(asn1_MessageDigest, data);
}


int ASN1CALL
copy_MessageDigest(const MessageDigest *from, MessageDigest *to)
{
    return _asn1_copy_top(asn1_MessageDigest, from, to);
}


char * ASN1CALL
print_MessageDigest(const MessageDigest *data, int flags)
{
    return _asn1_print_top(asn1_MessageDigest, flags, data);
}

/* template_members: ContentInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: ContentInfo exp exp */
/* generate_template_type: ContentInfo_tag_content_5 */
const struct asn1_template asn1_ContentInfo_tag_content_5[] = {
/* 0 */ { 0, sizeof(HEIM_ANY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_HEIM_ANY}
};
/* generate_template_type: ContentInfo_tag__4 */
const struct asn1_template asn1_ContentInfo_tag__4[] = {
/* 0 */ { 0, sizeof(struct ContentInfo), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct ContentInfo, contentType), asn1_ContentType },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct ContentInfo, content), asn1_ContentInfo_tag_content_5 },
/* 3 */ { A1_OP_NAME, 0, "ContentInfo" },
/* 4 */ { A1_OP_NAME, 0, "contentType" },
/* 5 */ { A1_OP_NAME, 0, "content" }
};
/* generate_template_type: ContentInfo */
const struct asn1_template asn1_ContentInfo[] = {
/* 0 */ { 0, sizeof(ContentInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ContentInfo_tag__4 }
};

int ASN1CALL
decode_ContentInfo(const unsigned char *p, size_t len, ContentInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ContentInfo, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_ContentInfo(unsigned char *p, size_t len, const ContentInfo *data, size_t *size)
{
    return _asn1_encode(asn1_ContentInfo, p, len, data, size);
}


size_t ASN1CALL
length_ContentInfo(const ContentInfo *data)
{
    return _asn1_length(asn1_ContentInfo, data);
}


void ASN1CALL
free_ContentInfo(ContentInfo *data)
{
    _asn1_free_top(asn1_ContentInfo, data);
}


int ASN1CALL
copy_ContentInfo(const ContentInfo *from, ContentInfo *to)
{
    return _asn1_copy_top(asn1_ContentInfo, from, to);
}


char * ASN1CALL
print_ContentInfo(const ContentInfo *data, int flags)
{
    return _asn1_print_top(asn1_ContentInfo, flags, data);
}

/* template_members: EncapsulatedContentInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: EncapsulatedContentInfo exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_eContent_8 */
/* generate_template_type: EncapsulatedContentInfo_tag_eContent_7 */
const struct asn1_template asn1_EncapsulatedContentInfo_tag_eContent_7[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_MessageDigest_tag__3 }
};
/* generate_template_type: EncapsulatedContentInfo_tag__6 */
const struct asn1_template asn1_EncapsulatedContentInfo_tag__6[] = {
/* 0 */ { 0, sizeof(struct EncapsulatedContentInfo), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct EncapsulatedContentInfo, eContentType), asn1_ContentType },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct EncapsulatedContentInfo, eContent), asn1_EncapsulatedContentInfo_tag_eContent_7 },
/* 3 */ { A1_OP_NAME, 0, "EncapsulatedContentInfo" },
/* 4 */ { A1_OP_NAME, 0, "eContentType" },
/* 5 */ { A1_OP_NAME, 0, "eContent" }
};
/* generate_template_type: EncapsulatedContentInfo */
const struct asn1_template asn1_EncapsulatedContentInfo[] = {
/* 0 */ { 0, sizeof(EncapsulatedContentInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncapsulatedContentInfo_tag__6 }
};

int ASN1CALL
decode_EncapsulatedContentInfo(const unsigned char *p, size_t len, EncapsulatedContentInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncapsulatedContentInfo, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_EncapsulatedContentInfo(unsigned char *p, size_t len, const EncapsulatedContentInfo *data, size_t *size)
{
    return _asn1_encode(asn1_EncapsulatedContentInfo, p, len, data, size);
}


size_t ASN1CALL
length_EncapsulatedContentInfo(const EncapsulatedContentInfo *data)
{
    return _asn1_length(asn1_EncapsulatedContentInfo, data);
}


void ASN1CALL
free_EncapsulatedContentInfo(EncapsulatedContentInfo *data)
{
    _asn1_free_top(asn1_EncapsulatedContentInfo, data);
}


int ASN1CALL
copy_EncapsulatedContentInfo(const EncapsulatedContentInfo *from, EncapsulatedContentInfo *to)
{
    return _asn1_copy_top(asn1_EncapsulatedContentInfo, from, to);
}


char * ASN1CALL
print_EncapsulatedContentInfo(const EncapsulatedContentInfo *data, int flags)
{
    return _asn1_print_top(asn1_EncapsulatedContentInfo, flags, data);
}

/* template_members: CertificateSet exp exp */
/* generate_template_type: HEIM_ANY_seofTstruct_1 */
/* generate_template_type: CertificateSet_tag__9 */
const struct asn1_template asn1_CertificateSet_tag__9[] = {
/* 0 */ { 0, sizeof(HEIM_ANY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_ContentInfo_tag_content_5 }
};
/* generate_template_type: CertificateSet */
const struct asn1_template asn1_CertificateSet[] = {
/* 0 */ { 0, sizeof(CertificateSet), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_CertificateSet_tag__9 }
};

int ASN1CALL
decode_CertificateSet(const unsigned char *p, size_t len, CertificateSet *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CertificateSet, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_CertificateSet(unsigned char *p, size_t len, const CertificateSet *data, size_t *size)
{
    return _asn1_encode(asn1_CertificateSet, p, len, data, size);
}


size_t ASN1CALL
length_CertificateSet(const CertificateSet *data)
{
    return _asn1_length(asn1_CertificateSet, data);
}


void ASN1CALL
free_CertificateSet(CertificateSet *data)
{
    _asn1_free_top(asn1_CertificateSet, data);
}


int ASN1CALL
copy_CertificateSet(const CertificateSet *from, CertificateSet *to)
{
    return _asn1_copy_top(asn1_CertificateSet, from, to);
}


char * ASN1CALL
print_CertificateSet(const CertificateSet *data, int flags)
{
    return _asn1_print_top(asn1_CertificateSet, flags, data);
}

/* generate_template_type: CertificateList */
const struct asn1_template asn1_CertificateList[] = {
/* 0 */ { 0, sizeof(CertificateList), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Certificate}
};

int ASN1CALL
decode_CertificateList(const unsigned char *p, size_t len, CertificateList *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CertificateList, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_CertificateList(unsigned char *p, size_t len, const CertificateList *data, size_t *size)
{
    return _asn1_encode(asn1_CertificateList, p, len, data, size);
}


size_t ASN1CALL
length_CertificateList(const CertificateList *data)
{
    return _asn1_length(asn1_CertificateList, data);
}


void ASN1CALL
free_CertificateList(CertificateList *data)
{
    _asn1_free_top(asn1_CertificateList, data);
}


int ASN1CALL
copy_CertificateList(const CertificateList *from, CertificateList *to)
{
    return _asn1_copy_top(asn1_CertificateList, from, to);
}


char * ASN1CALL
print_CertificateList(const CertificateList *data, int flags)
{
    return _asn1_print_top(asn1_CertificateList, flags, data);
}

/* template_members: CertificateRevocationLists exp exp */
/* generate_template_type: CertificateList_seofTstruct_2 */
const struct asn1_template asn1_CertificateList_seofTstruct_2[] = {
/* 0 */ { 0, sizeof(CertificateList), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CertificateList }
};
/* generate_template_type: CertificateRevocationLists_tag__10 */
const struct asn1_template asn1_CertificateRevocationLists_tag__10[] = {
/* 0 */ { 0, sizeof(CertificateList), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_CertificateList_seofTstruct_2 }
};
/* generate_template_type: CertificateRevocationLists */
const struct asn1_template asn1_CertificateRevocationLists[] = {
/* 0 */ { 0, sizeof(CertificateRevocationLists), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_CertificateRevocationLists_tag__10 }
};

int ASN1CALL
decode_CertificateRevocationLists(const unsigned char *p, size_t len, CertificateRevocationLists *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CertificateRevocationLists, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_CertificateRevocationLists(unsigned char *p, size_t len, const CertificateRevocationLists *data, size_t *size)
{
    return _asn1_encode(asn1_CertificateRevocationLists, p, len, data, size);
}


size_t ASN1CALL
length_CertificateRevocationLists(const CertificateRevocationLists *data)
{
    return _asn1_length(asn1_CertificateRevocationLists, data);
}


void ASN1CALL
free_CertificateRevocationLists(CertificateRevocationLists *data)
{
    _asn1_free_top(asn1_CertificateRevocationLists, data);
}


int ASN1CALL
copy_CertificateRevocationLists(const CertificateRevocationLists *from, CertificateRevocationLists *to)
{
    return _asn1_copy_top(asn1_CertificateRevocationLists, from, to);
}


char * ASN1CALL
print_CertificateRevocationLists(const CertificateRevocationLists *data, int flags)
{
    return _asn1_print_top(asn1_CertificateRevocationLists, flags, data);
}

/* template_members: IssuerAndSerialNumber exp exp */
/* tsequence: members isstruct: 1 */
/* generate_template_type: IssuerAndSerialNumber_tag__11 */
const struct asn1_template asn1_IssuerAndSerialNumber_tag__11[] = {
/* 0 */ { 0, sizeof(struct IssuerAndSerialNumber), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE_EXTERN , offsetof(struct IssuerAndSerialNumber, issuer), &asn1_extern_Name},
/* 2 */ { A1_OP_TYPE_EXTERN , offsetof(struct IssuerAndSerialNumber, serialNumber), &asn1_extern_CertificateSerialNumber},
/* 3 */ { A1_OP_NAME, 0, "IssuerAndSerialNumber" },
/* 4 */ { A1_OP_NAME, 0, "issuer" },
/* 5 */ { A1_OP_NAME, 0, "serialNumber" }
};
/* generate_template_type: IssuerAndSerialNumber */
const struct asn1_template asn1_IssuerAndSerialNumber[] = {
/* 0 */ { 0, sizeof(IssuerAndSerialNumber), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_IssuerAndSerialNumber_tag__11 }
};

int ASN1CALL
decode_IssuerAndSerialNumber(const unsigned char *p, size_t len, IssuerAndSerialNumber *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_IssuerAndSerialNumber, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_IssuerAndSerialNumber(unsigned char *p, size_t len, const IssuerAndSerialNumber *data, size_t *size)
{
    return _asn1_encode(asn1_IssuerAndSerialNumber, p, len, data, size);
}


size_t ASN1CALL
length_IssuerAndSerialNumber(const IssuerAndSerialNumber *data)
{
    return _asn1_length(asn1_IssuerAndSerialNumber, data);
}


void ASN1CALL
free_IssuerAndSerialNumber(IssuerAndSerialNumber *data)
{
    _asn1_free_top(asn1_IssuerAndSerialNumber, data);
}


int ASN1CALL
copy_IssuerAndSerialNumber(const IssuerAndSerialNumber *from, IssuerAndSerialNumber *to)
{
    return _asn1_copy_top(asn1_IssuerAndSerialNumber, from, to);
}


char * ASN1CALL
print_IssuerAndSerialNumber(const IssuerAndSerialNumber *data, int flags)
{
    return _asn1_print_top(asn1_IssuerAndSerialNumber, flags, data);
}

/* generate_template_type: CMSIdentifier_choice_issuerAndSerialNumber */
const struct asn1_template asn1_CMSIdentifier_choice_issuerAndSerialNumber[] = {
/* 0 */ { 0, sizeof(IssuerAndSerialNumber), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_IssuerAndSerialNumber }
};
/* template_members: SubjectKeyIdentifier exp exp */
/* generate_template_type: SubjectKeyIdentifier_tag__12 */
const struct asn1_template asn1_SubjectKeyIdentifier_tag__12[] = {
/* 0 */ { 0, sizeof(SubjectKeyIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_SubjectKeyIdentifier}
};
/* generate_template_type: CMSIdentifier_choice_subjectKeyIdentifier */
const struct asn1_template asn1_CMSIdentifier_choice_subjectKeyIdentifier[] = {
/* 0 */ { 0, sizeof(SubjectKeyIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_SubjectKeyIdentifier_tag__12 }
};
static const struct asn1_template asn1_choice_CMSIdentifier_0[] = {
/* 0 */ { 0, offsetof(CMSIdentifier, element), ((void *)(uintptr_t)4) },
/* 1 */ { choice_CMSIdentifier_issuerAndSerialNumber, offsetof(CMSIdentifier, u.issuerAndSerialNumber), asn1_CMSIdentifier_choice_issuerAndSerialNumber },
/* 2 */ { choice_CMSIdentifier_subjectKeyIdentifier, offsetof(CMSIdentifier, u.subjectKeyIdentifier), asn1_CMSIdentifier_choice_subjectKeyIdentifier },
/* 3 */ { 0, 0, "issuerAndSerialNumber" },
/* 4 */ { 0, 0, "subjectKeyIdentifier" }
};
/* generate_template_type: CMSIdentifier */
const struct asn1_template asn1_CMSIdentifier[] = {
/* 0 */ { 0, sizeof(CMSIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_CMSIdentifier_0 }
};

int ASN1CALL
decode_CMSIdentifier(const unsigned char *p, size_t len, CMSIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CMSIdentifier, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_CMSIdentifier(unsigned char *p, size_t len, const CMSIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_CMSIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_CMSIdentifier(const CMSIdentifier *data)
{
    return _asn1_length(asn1_CMSIdentifier, data);
}


void ASN1CALL
free_CMSIdentifier(CMSIdentifier *data)
{
    _asn1_free_top(asn1_CMSIdentifier, data);
}


int ASN1CALL
copy_CMSIdentifier(const CMSIdentifier *from, CMSIdentifier *to)
{
    return _asn1_copy_top(asn1_CMSIdentifier, from, to);
}


char * ASN1CALL
print_CMSIdentifier(const CMSIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_CMSIdentifier, flags, data);
}

/* generate_template_type: SignerIdentifier */
const struct asn1_template asn1_SignerIdentifier[] = {
/* 0 */ { 0, sizeof(SignerIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CMSIdentifier }
};

int ASN1CALL
decode_SignerIdentifier(const unsigned char *p, size_t len, SignerIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SignerIdentifier, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_SignerIdentifier(unsigned char *p, size_t len, const SignerIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_SignerIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_SignerIdentifier(const SignerIdentifier *data)
{
    return _asn1_length(asn1_SignerIdentifier, data);
}


void ASN1CALL
free_SignerIdentifier(SignerIdentifier *data)
{
    _asn1_free_top(asn1_SignerIdentifier, data);
}


int ASN1CALL
copy_SignerIdentifier(const SignerIdentifier *from, SignerIdentifier *to)
{
    return _asn1_copy_top(asn1_SignerIdentifier, from, to);
}


char * ASN1CALL
print_SignerIdentifier(const SignerIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_SignerIdentifier, flags, data);
}

/* generate_template_type: RecipientIdentifier */
const struct asn1_template asn1_RecipientIdentifier[] = {
/* 0 */ { 0, sizeof(RecipientIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CMSIdentifier }
};

int ASN1CALL
decode_RecipientIdentifier(const unsigned char *p, size_t len, RecipientIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_RecipientIdentifier, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_RecipientIdentifier(unsigned char *p, size_t len, const RecipientIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_RecipientIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_RecipientIdentifier(const RecipientIdentifier *data)
{
    return _asn1_length(asn1_RecipientIdentifier, data);
}


void ASN1CALL
free_RecipientIdentifier(RecipientIdentifier *data)
{
    _asn1_free_top(asn1_RecipientIdentifier, data);
}


int ASN1CALL
copy_RecipientIdentifier(const RecipientIdentifier *from, RecipientIdentifier *to)
{
    return _asn1_copy_top(asn1_RecipientIdentifier, from, to);
}


char * ASN1CALL
print_RecipientIdentifier(const RecipientIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_RecipientIdentifier, flags, data);
}

/* template_members: CMSAttributes exp exp */
/* generate_template_type: Attribute_seofTstruct_3 */
const struct asn1_template asn1_Attribute_seofTstruct_3[] = {
/* 0 */ { 0, sizeof(Attribute), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Attribute}
};
/* generate_template_type: CMSAttributes_tag__13 */
const struct asn1_template asn1_CMSAttributes_tag__13[] = {
/* 0 */ { 0, sizeof(Attribute), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_Attribute_seofTstruct_3 }
};
/* generate_template_type: CMSAttributes */
const struct asn1_template asn1_CMSAttributes[] = {
/* 0 */ { 0, sizeof(CMSAttributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_CMSAttributes_tag__13 }
};

int ASN1CALL
decode_CMSAttributes(const unsigned char *p, size_t len, CMSAttributes *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CMSAttributes, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_CMSAttributes(unsigned char *p, size_t len, const CMSAttributes *data, size_t *size)
{
    return _asn1_encode(asn1_CMSAttributes, p, len, data, size);
}


size_t ASN1CALL
length_CMSAttributes(const CMSAttributes *data)
{
    return _asn1_length(asn1_CMSAttributes, data);
}


void ASN1CALL
free_CMSAttributes(CMSAttributes *data)
{
    _asn1_free_top(asn1_CMSAttributes, data);
}


int ASN1CALL
copy_CMSAttributes(const CMSAttributes *from, CMSAttributes *to)
{
    return _asn1_copy_top(asn1_CMSAttributes, from, to);
}


char * ASN1CALL
print_CMSAttributes(const CMSAttributes *data, int flags)
{
    return _asn1_print_top(asn1_CMSAttributes, flags, data);
}

/* template_members: SignatureValue exp exp */
/* generate_template_type: SignatureValue_tag__14 */
/* generate_template_type: SignatureValue */
const struct asn1_template asn1_SignatureValue[] = {
/* 0 */ { 0, sizeof(SignatureValue), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_MessageDigest_tag__3 }
};

int ASN1CALL
decode_SignatureValue(const unsigned char *p, size_t len, SignatureValue *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SignatureValue, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_SignatureValue(unsigned char *p, size_t len, const SignatureValue *data, size_t *size)
{
    return _asn1_encode(asn1_SignatureValue, p, len, data, size);
}


size_t ASN1CALL
length_SignatureValue(const SignatureValue *data)
{
    return _asn1_length(asn1_SignatureValue, data);
}


void ASN1CALL
free_SignatureValue(SignatureValue *data)
{
    _asn1_free_top(asn1_SignatureValue, data);
}


int ASN1CALL
copy_SignatureValue(const SignatureValue *from, SignatureValue *to)
{
    return _asn1_copy_top(asn1_SignatureValue, from, to);
}


char * ASN1CALL
print_SignatureValue(const SignatureValue *data, int flags)
{
    return _asn1_print_top(asn1_SignatureValue, flags, data);
}

/* template_members: SignerInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: SignerInfo exp imp */
/* generate_template_type: SignerInfo_tag_signedAttrs_16 */
const struct asn1_template asn1_SignerInfo_tag_signedAttrs_16[] = {
/* 0 */ { 0, sizeof(CMSAttributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CMSAttributes }
};
/* template_members: SignerInfo exp imp */
/* generate_template_type: SignerInfo_tag_unsignedAttrs_17 */
/* generate_template_type: SignerInfo_tag__15 */
const struct asn1_template asn1_SignerInfo_tag__15[] = {
/* 0 */ { 0, sizeof(struct SignerInfo), ((void *)(uintptr_t)15) },
/* 1 */ { A1_OP_TYPE , offsetof(struct SignerInfo, version), asn1_CMSVersion },
/* 2 */ { A1_OP_TYPE , offsetof(struct SignerInfo, sid), asn1_SignerIdentifier },
/* 3 */ { A1_OP_TYPE , offsetof(struct SignerInfo, digestAlgorithm), asn1_DigestAlgorithmIdentifier },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct SignerInfo, signedAttrs), asn1_SignerInfo_tag_signedAttrs_16 },
/* 5 */ { A1_OP_TYPE , offsetof(struct SignerInfo, signatureAlgorithm), asn1_SignatureAlgorithmIdentifier },
/* 6 */ { A1_OP_TYPE , offsetof(struct SignerInfo, signature), asn1_SignatureValue },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct SignerInfo, unsignedAttrs), asn1_SignerInfo_tag_signedAttrs_16 },
/* 8 */ { A1_OP_NAME, 0, "SignerInfo" },
/* 9 */ { A1_OP_NAME, 0, "version" },
/* 10 */ { A1_OP_NAME, 0, "sid" },
/* 11 */ { A1_OP_NAME, 0, "digestAlgorithm" },
/* 12 */ { A1_OP_NAME, 0, "signedAttrs" },
/* 13 */ { A1_OP_NAME, 0, "signatureAlgorithm" },
/* 14 */ { A1_OP_NAME, 0, "signature" },
/* 15 */ { A1_OP_NAME, 0, "unsignedAttrs" }
};
/* generate_template_type: SignerInfo */
const struct asn1_template asn1_SignerInfo[] = {
/* 0 */ { 0, sizeof(SignerInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_SignerInfo_tag__15 }
};

int ASN1CALL
decode_SignerInfo(const unsigned char *p, size_t len, SignerInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SignerInfo, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_SignerInfo(unsigned char *p, size_t len, const SignerInfo *data, size_t *size)
{
    return _asn1_encode(asn1_SignerInfo, p, len, data, size);
}


size_t ASN1CALL
length_SignerInfo(const SignerInfo *data)
{
    return _asn1_length(asn1_SignerInfo, data);
}


void ASN1CALL
free_SignerInfo(SignerInfo *data)
{
    _asn1_free_top(asn1_SignerInfo, data);
}


int ASN1CALL
copy_SignerInfo(const SignerInfo *from, SignerInfo *to)
{
    return _asn1_copy_top(asn1_SignerInfo, from, to);
}


char * ASN1CALL
print_SignerInfo(const SignerInfo *data, int flags)
{
    return _asn1_print_top(asn1_SignerInfo, flags, data);
}

/* template_members: SignerInfos exp exp */
/* generate_template_type: SignerInfo_seofTstruct_4 */
const struct asn1_template asn1_SignerInfo_seofTstruct_4[] = {
/* 0 */ { 0, sizeof(SignerInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_SignerInfo }
};
/* generate_template_type: SignerInfos_tag__18 */
const struct asn1_template asn1_SignerInfos_tag__18[] = {
/* 0 */ { 0, sizeof(SignerInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_SignerInfo_seofTstruct_4 }
};
/* generate_template_type: SignerInfos */
const struct asn1_template asn1_SignerInfos[] = {
/* 0 */ { 0, sizeof(SignerInfos), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_SignerInfos_tag__18 }
};

int ASN1CALL
decode_SignerInfos(const unsigned char *p, size_t len, SignerInfos *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SignerInfos, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_SignerInfos(unsigned char *p, size_t len, const SignerInfos *data, size_t *size)
{
    return _asn1_encode(asn1_SignerInfos, p, len, data, size);
}


size_t ASN1CALL
length_SignerInfos(const SignerInfos *data)
{
    return _asn1_length(asn1_SignerInfos, data);
}


void ASN1CALL
free_SignerInfos(SignerInfos *data)
{
    _asn1_free_top(asn1_SignerInfos, data);
}


int ASN1CALL
copy_SignerInfos(const SignerInfos *from, SignerInfos *to)
{
    return _asn1_copy_top(asn1_SignerInfos, from, to);
}


char * ASN1CALL
print_SignerInfos(const SignerInfos *data, int flags)
{
    return _asn1_print_top(asn1_SignerInfos, flags, data);
}

/* template_members: SignedData exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: SignedData exp imp */
/* generate_template_type: SignedData_tag_certificates_20 */
const struct asn1_template asn1_SignedData_tag_certificates_20[] = {
/* 0 */ { 0, sizeof(CertificateSet), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CertificateSet }
};
/* template_members: SignedData exp imp */
/* generate_template_type: SignedData_tag_crls_21 */
const struct asn1_template asn1_SignedData_tag_crls_21[] = {
/* 0 */ { 0, sizeof(CertificateRevocationLists), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CertificateRevocationLists }
};
/* generate_template_type: SignedData_tag__19 */
const struct asn1_template asn1_SignedData_tag__19[] = {
/* 0 */ { 0, sizeof(struct SignedData), ((void *)(uintptr_t)13) },
/* 1 */ { A1_OP_TYPE , offsetof(struct SignedData, version), asn1_CMSVersion },
/* 2 */ { A1_OP_TYPE , offsetof(struct SignedData, digestAlgorithms), asn1_DigestAlgorithmIdentifiers },
/* 3 */ { A1_OP_TYPE , offsetof(struct SignedData, encapContentInfo), asn1_EncapsulatedContentInfo },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct SignedData, certificates), asn1_SignedData_tag_certificates_20 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct SignedData, crls), asn1_SignedData_tag_crls_21 },
/* 6 */ { A1_OP_TYPE , offsetof(struct SignedData, signerInfos), asn1_SignerInfos },
/* 7 */ { A1_OP_NAME, 0, "SignedData" },
/* 8 */ { A1_OP_NAME, 0, "version" },
/* 9 */ { A1_OP_NAME, 0, "digestAlgorithms" },
/* 10 */ { A1_OP_NAME, 0, "encapContentInfo" },
/* 11 */ { A1_OP_NAME, 0, "certificates" },
/* 12 */ { A1_OP_NAME, 0, "crls" },
/* 13 */ { A1_OP_NAME, 0, "signerInfos" }
};
/* generate_template_type: SignedData */
const struct asn1_template asn1_SignedData[] = {
/* 0 */ { 0, sizeof(SignedData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_SignedData_tag__19 }
};

int ASN1CALL
decode_SignedData(const unsigned char *p, size_t len, SignedData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SignedData, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_SignedData(unsigned char *p, size_t len, const SignedData *data, size_t *size)
{
    return _asn1_encode(asn1_SignedData, p, len, data, size);
}


size_t ASN1CALL
length_SignedData(const SignedData *data)
{
    return _asn1_length(asn1_SignedData, data);
}


void ASN1CALL
free_SignedData(SignedData *data)
{
    _asn1_free_top(asn1_SignedData, data);
}


int ASN1CALL
copy_SignedData(const SignedData *from, SignedData *to)
{
    return _asn1_copy_top(asn1_SignedData, from, to);
}


char * ASN1CALL
print_SignedData(const SignedData *data, int flags)
{
    return _asn1_print_top(asn1_SignedData, flags, data);
}

/* template_members: OriginatorInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: OriginatorInfo exp imp */
/* generate_template_type: OriginatorInfo_tag_certs_23 */
/* template_members: OriginatorInfo exp imp */
/* generate_template_type: OriginatorInfo_tag_crls_24 */
/* generate_template_type: OriginatorInfo_tag__22 */
const struct asn1_template asn1_OriginatorInfo_tag__22[] = {
/* 0 */ { 0, sizeof(struct OriginatorInfo), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct OriginatorInfo, certs), asn1_SignedData_tag_certificates_20 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct OriginatorInfo, crls), asn1_SignedData_tag_crls_21 },
/* 3 */ { A1_OP_NAME, 0, "OriginatorInfo" },
/* 4 */ { A1_OP_NAME, 0, "certs" },
/* 5 */ { A1_OP_NAME, 0, "crls" }
};
/* generate_template_type: OriginatorInfo */
const struct asn1_template asn1_OriginatorInfo[] = {
/* 0 */ { 0, sizeof(OriginatorInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_OriginatorInfo_tag__22 }
};

int ASN1CALL
decode_OriginatorInfo(const unsigned char *p, size_t len, OriginatorInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_OriginatorInfo, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_OriginatorInfo(unsigned char *p, size_t len, const OriginatorInfo *data, size_t *size)
{
    return _asn1_encode(asn1_OriginatorInfo, p, len, data, size);
}


size_t ASN1CALL
length_OriginatorInfo(const OriginatorInfo *data)
{
    return _asn1_length(asn1_OriginatorInfo, data);
}


void ASN1CALL
free_OriginatorInfo(OriginatorInfo *data)
{
    _asn1_free_top(asn1_OriginatorInfo, data);
}


int ASN1CALL
copy_OriginatorInfo(const OriginatorInfo *from, OriginatorInfo *to)
{
    return _asn1_copy_top(asn1_OriginatorInfo, from, to);
}


char * ASN1CALL
print_OriginatorInfo(const OriginatorInfo *data, int flags)
{
    return _asn1_print_top(asn1_OriginatorInfo, flags, data);
}

/* generate_template_type: KeyEncryptionAlgorithmIdentifier */
const struct asn1_template asn1_KeyEncryptionAlgorithmIdentifier[] = {
/* 0 */ { 0, sizeof(KeyEncryptionAlgorithmIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_AlgorithmIdentifier}
};

int ASN1CALL
decode_KeyEncryptionAlgorithmIdentifier(const unsigned char *p, size_t len, KeyEncryptionAlgorithmIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KeyEncryptionAlgorithmIdentifier, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_KeyEncryptionAlgorithmIdentifier(unsigned char *p, size_t len, const KeyEncryptionAlgorithmIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_KeyEncryptionAlgorithmIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_KeyEncryptionAlgorithmIdentifier(const KeyEncryptionAlgorithmIdentifier *data)
{
    return _asn1_length(asn1_KeyEncryptionAlgorithmIdentifier, data);
}


void ASN1CALL
free_KeyEncryptionAlgorithmIdentifier(KeyEncryptionAlgorithmIdentifier *data)
{
    _asn1_free_top(asn1_KeyEncryptionAlgorithmIdentifier, data);
}


int ASN1CALL
copy_KeyEncryptionAlgorithmIdentifier(const KeyEncryptionAlgorithmIdentifier *from, KeyEncryptionAlgorithmIdentifier *to)
{
    return _asn1_copy_top(asn1_KeyEncryptionAlgorithmIdentifier, from, to);
}


char * ASN1CALL
print_KeyEncryptionAlgorithmIdentifier(const KeyEncryptionAlgorithmIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_KeyEncryptionAlgorithmIdentifier, flags, data);
}

/* generate_template_type: ContentEncryptionAlgorithmIdentifier */
const struct asn1_template asn1_ContentEncryptionAlgorithmIdentifier[] = {
/* 0 */ { 0, sizeof(ContentEncryptionAlgorithmIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_AlgorithmIdentifier}
};

int ASN1CALL
decode_ContentEncryptionAlgorithmIdentifier(const unsigned char *p, size_t len, ContentEncryptionAlgorithmIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ContentEncryptionAlgorithmIdentifier, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_ContentEncryptionAlgorithmIdentifier(unsigned char *p, size_t len, const ContentEncryptionAlgorithmIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_ContentEncryptionAlgorithmIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_ContentEncryptionAlgorithmIdentifier(const ContentEncryptionAlgorithmIdentifier *data)
{
    return _asn1_length(asn1_ContentEncryptionAlgorithmIdentifier, data);
}


void ASN1CALL
free_ContentEncryptionAlgorithmIdentifier(ContentEncryptionAlgorithmIdentifier *data)
{
    _asn1_free_top(asn1_ContentEncryptionAlgorithmIdentifier, data);
}


int ASN1CALL
copy_ContentEncryptionAlgorithmIdentifier(const ContentEncryptionAlgorithmIdentifier *from, ContentEncryptionAlgorithmIdentifier *to)
{
    return _asn1_copy_top(asn1_ContentEncryptionAlgorithmIdentifier, from, to);
}


char * ASN1CALL
print_ContentEncryptionAlgorithmIdentifier(const ContentEncryptionAlgorithmIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_ContentEncryptionAlgorithmIdentifier, flags, data);
}

/* template_members: EncryptedKey exp exp */
/* generate_template_type: EncryptedKey_tag__25 */
/* generate_template_type: EncryptedKey */
const struct asn1_template asn1_EncryptedKey[] = {
/* 0 */ { 0, sizeof(EncryptedKey), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_MessageDigest_tag__3 }
};

int ASN1CALL
decode_EncryptedKey(const unsigned char *p, size_t len, EncryptedKey *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncryptedKey, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_EncryptedKey(unsigned char *p, size_t len, const EncryptedKey *data, size_t *size)
{
    return _asn1_encode(asn1_EncryptedKey, p, len, data, size);
}


size_t ASN1CALL
length_EncryptedKey(const EncryptedKey *data)
{
    return _asn1_length(asn1_EncryptedKey, data);
}


void ASN1CALL
free_EncryptedKey(EncryptedKey *data)
{
    _asn1_free_top(asn1_EncryptedKey, data);
}


int ASN1CALL
copy_EncryptedKey(const EncryptedKey *from, EncryptedKey *to)
{
    return _asn1_copy_top(asn1_EncryptedKey, from, to);
}


char * ASN1CALL
print_EncryptedKey(const EncryptedKey *data, int flags)
{
    return _asn1_print_top(asn1_EncryptedKey, flags, data);
}

/* template_members: KeyTransRecipientInfo exp exp */
/* tsequence: members isstruct: 1 */
/* generate_template_type: KeyTransRecipientInfo_tag__26 */
const struct asn1_template asn1_KeyTransRecipientInfo_tag__26[] = {
/* 0 */ { 0, sizeof(struct KeyTransRecipientInfo), ((void *)(uintptr_t)9) },
/* 1 */ { A1_OP_TYPE , offsetof(struct KeyTransRecipientInfo, version), asn1_CMSVersion },
/* 2 */ { A1_OP_TYPE , offsetof(struct KeyTransRecipientInfo, rid), asn1_RecipientIdentifier },
/* 3 */ { A1_OP_TYPE , offsetof(struct KeyTransRecipientInfo, keyEncryptionAlgorithm), asn1_KeyEncryptionAlgorithmIdentifier },
/* 4 */ { A1_OP_TYPE , offsetof(struct KeyTransRecipientInfo, encryptedKey), asn1_EncryptedKey },
/* 5 */ { A1_OP_NAME, 0, "KeyTransRecipientInfo" },
/* 6 */ { A1_OP_NAME, 0, "version" },
/* 7 */ { A1_OP_NAME, 0, "rid" },
/* 8 */ { A1_OP_NAME, 0, "keyEncryptionAlgorithm" },
/* 9 */ { A1_OP_NAME, 0, "encryptedKey" }
};
/* generate_template_type: KeyTransRecipientInfo */
const struct asn1_template asn1_KeyTransRecipientInfo[] = {
/* 0 */ { 0, sizeof(KeyTransRecipientInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KeyTransRecipientInfo_tag__26 }
};

int ASN1CALL
decode_KeyTransRecipientInfo(const unsigned char *p, size_t len, KeyTransRecipientInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KeyTransRecipientInfo, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_KeyTransRecipientInfo(unsigned char *p, size_t len, const KeyTransRecipientInfo *data, size_t *size)
{
    return _asn1_encode(asn1_KeyTransRecipientInfo, p, len, data, size);
}


size_t ASN1CALL
length_KeyTransRecipientInfo(const KeyTransRecipientInfo *data)
{
    return _asn1_length(asn1_KeyTransRecipientInfo, data);
}


void ASN1CALL
free_KeyTransRecipientInfo(KeyTransRecipientInfo *data)
{
    _asn1_free_top(asn1_KeyTransRecipientInfo, data);
}


int ASN1CALL
copy_KeyTransRecipientInfo(const KeyTransRecipientInfo *from, KeyTransRecipientInfo *to)
{
    return _asn1_copy_top(asn1_KeyTransRecipientInfo, from, to);
}


char * ASN1CALL
print_KeyTransRecipientInfo(const KeyTransRecipientInfo *data, int flags)
{
    return _asn1_print_top(asn1_KeyTransRecipientInfo, flags, data);
}

/* generate_template_type: RecipientInfo */
const struct asn1_template asn1_RecipientInfo[] = {
/* 0 */ { 0, sizeof(RecipientInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KeyTransRecipientInfo }
};

int ASN1CALL
decode_RecipientInfo(const unsigned char *p, size_t len, RecipientInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_RecipientInfo, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_RecipientInfo(unsigned char *p, size_t len, const RecipientInfo *data, size_t *size)
{
    return _asn1_encode(asn1_RecipientInfo, p, len, data, size);
}


size_t ASN1CALL
length_RecipientInfo(const RecipientInfo *data)
{
    return _asn1_length(asn1_RecipientInfo, data);
}


void ASN1CALL
free_RecipientInfo(RecipientInfo *data)
{
    _asn1_free_top(asn1_RecipientInfo, data);
}


int ASN1CALL
copy_RecipientInfo(const RecipientInfo *from, RecipientInfo *to)
{
    return _asn1_copy_top(asn1_RecipientInfo, from, to);
}


char * ASN1CALL
print_RecipientInfo(const RecipientInfo *data, int flags)
{
    return _asn1_print_top(asn1_RecipientInfo, flags, data);
}

/* template_members: RecipientInfos exp exp */
/* generate_template_type: RecipientInfo_seofTstruct_5 */
const struct asn1_template asn1_RecipientInfo_seofTstruct_5[] = {
/* 0 */ { 0, sizeof(RecipientInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_RecipientInfo }
};
/* generate_template_type: RecipientInfos_tag__27 */
const struct asn1_template asn1_RecipientInfos_tag__27[] = {
/* 0 */ { 0, sizeof(RecipientInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_RecipientInfo_seofTstruct_5 }
};
/* generate_template_type: RecipientInfos */
const struct asn1_template asn1_RecipientInfos[] = {
/* 0 */ { 0, sizeof(RecipientInfos), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_RecipientInfos_tag__27 }
};

int ASN1CALL
decode_RecipientInfos(const unsigned char *p, size_t len, RecipientInfos *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_RecipientInfos, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_RecipientInfos(unsigned char *p, size_t len, const RecipientInfos *data, size_t *size)
{
    return _asn1_encode(asn1_RecipientInfos, p, len, data, size);
}


size_t ASN1CALL
length_RecipientInfos(const RecipientInfos *data)
{
    return _asn1_length(asn1_RecipientInfos, data);
}


void ASN1CALL
free_RecipientInfos(RecipientInfos *data)
{
    _asn1_free_top(asn1_RecipientInfos, data);
}


int ASN1CALL
copy_RecipientInfos(const RecipientInfos *from, RecipientInfos *to)
{
    return _asn1_copy_top(asn1_RecipientInfos, from, to);
}


char * ASN1CALL
print_RecipientInfos(const RecipientInfos *data, int flags)
{
    return _asn1_print_top(asn1_RecipientInfos, flags, data);
}

/* template_members: EncryptedContent exp exp */
/* generate_template_type: EncryptedContent_tag__28 */
/* generate_template_type: EncryptedContent */
const struct asn1_template asn1_EncryptedContent[] = {
/* 0 */ { 0, sizeof(EncryptedContent), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_MessageDigest_tag__3 }
};

int ASN1CALL
decode_EncryptedContent(const unsigned char *p, size_t len, EncryptedContent *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncryptedContent, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_EncryptedContent(unsigned char *p, size_t len, const EncryptedContent *data, size_t *size)
{
    return _asn1_encode(asn1_EncryptedContent, p, len, data, size);
}


size_t ASN1CALL
length_EncryptedContent(const EncryptedContent *data)
{
    return _asn1_length(asn1_EncryptedContent, data);
}


void ASN1CALL
free_EncryptedContent(EncryptedContent *data)
{
    _asn1_free_top(asn1_EncryptedContent, data);
}


int ASN1CALL
copy_EncryptedContent(const EncryptedContent *from, EncryptedContent *to)
{
    return _asn1_copy_top(asn1_EncryptedContent, from, to);
}


char * ASN1CALL
print_EncryptedContent(const EncryptedContent *data, int flags)
{
    return _asn1_print_top(asn1_EncryptedContent, flags, data);
}

/* template_members: EncryptedContentInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: EncryptedContentInfo exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_encryptedContent_31 */
/* generate_template_type: EncryptedContentInfo_tag_encryptedContent_30 */
/* generate_template_type: EncryptedContentInfo_tag__29 */
const struct asn1_template asn1_EncryptedContentInfo_tag__29[] = {
/* 0 */ { 0, sizeof(struct EncryptedContentInfo), ((void *)(uintptr_t)7) },
/* 1 */ { A1_OP_TYPE , offsetof(struct EncryptedContentInfo, contentType), asn1_ContentType },
/* 2 */ { A1_OP_TYPE , offsetof(struct EncryptedContentInfo, contentEncryptionAlgorithm), asn1_ContentEncryptionAlgorithmIdentifier },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct EncryptedContentInfo, encryptedContent), asn1_EncapsulatedContentInfo_tag_eContent_7 },
/* 4 */ { A1_OP_NAME, 0, "EncryptedContentInfo" },
/* 5 */ { A1_OP_NAME, 0, "contentType" },
/* 6 */ { A1_OP_NAME, 0, "contentEncryptionAlgorithm" },
/* 7 */ { A1_OP_NAME, 0, "encryptedContent" }
};
/* generate_template_type: EncryptedContentInfo */
const struct asn1_template asn1_EncryptedContentInfo[] = {
/* 0 */ { 0, sizeof(EncryptedContentInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncryptedContentInfo_tag__29 }
};

int ASN1CALL
decode_EncryptedContentInfo(const unsigned char *p, size_t len, EncryptedContentInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncryptedContentInfo, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_EncryptedContentInfo(unsigned char *p, size_t len, const EncryptedContentInfo *data, size_t *size)
{
    return _asn1_encode(asn1_EncryptedContentInfo, p, len, data, size);
}


size_t ASN1CALL
length_EncryptedContentInfo(const EncryptedContentInfo *data)
{
    return _asn1_length(asn1_EncryptedContentInfo, data);
}


void ASN1CALL
free_EncryptedContentInfo(EncryptedContentInfo *data)
{
    _asn1_free_top(asn1_EncryptedContentInfo, data);
}


int ASN1CALL
copy_EncryptedContentInfo(const EncryptedContentInfo *from, EncryptedContentInfo *to)
{
    return _asn1_copy_top(asn1_EncryptedContentInfo, from, to);
}


char * ASN1CALL
print_EncryptedContentInfo(const EncryptedContentInfo *data, int flags)
{
    return _asn1_print_top(asn1_EncryptedContentInfo, flags, data);
}

/* template_members: UnprotectedAttributes exp exp */
/* generate_template_type: Attribute_seofTstruct_6 */
/* generate_template_type: UnprotectedAttributes_tag__32 */
/* generate_template_type: UnprotectedAttributes */
const struct asn1_template asn1_UnprotectedAttributes[] = {
/* 0 */ { 0, sizeof(UnprotectedAttributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_CMSAttributes_tag__13 }
};

int ASN1CALL
decode_UnprotectedAttributes(const unsigned char *p, size_t len, UnprotectedAttributes *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_UnprotectedAttributes, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_UnprotectedAttributes(unsigned char *p, size_t len, const UnprotectedAttributes *data, size_t *size)
{
    return _asn1_encode(asn1_UnprotectedAttributes, p, len, data, size);
}


size_t ASN1CALL
length_UnprotectedAttributes(const UnprotectedAttributes *data)
{
    return _asn1_length(asn1_UnprotectedAttributes, data);
}


void ASN1CALL
free_UnprotectedAttributes(UnprotectedAttributes *data)
{
    _asn1_free_top(asn1_UnprotectedAttributes, data);
}


int ASN1CALL
copy_UnprotectedAttributes(const UnprotectedAttributes *from, UnprotectedAttributes *to)
{
    return _asn1_copy_top(asn1_UnprotectedAttributes, from, to);
}


char * ASN1CALL
print_UnprotectedAttributes(const UnprotectedAttributes *data, int flags)
{
    return _asn1_print_top(asn1_UnprotectedAttributes, flags, data);
}

/* template_members: CMSEncryptedData exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: CMSEncryptedData exp imp */
/* generate_template_type: CMSEncryptedData_tag_unprotectedAttrs_34 */
const struct asn1_template asn1_CMSEncryptedData_tag_unprotectedAttrs_34[] = {
/* 0 */ { 0, sizeof(UnprotectedAttributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_UnprotectedAttributes }
};
/* generate_template_type: CMSEncryptedData_tag__33 */
const struct asn1_template asn1_CMSEncryptedData_tag__33[] = {
/* 0 */ { 0, sizeof(struct CMSEncryptedData), ((void *)(uintptr_t)7) },
/* 1 */ { A1_OP_TYPE , offsetof(struct CMSEncryptedData, version), asn1_CMSVersion },
/* 2 */ { A1_OP_TYPE , offsetof(struct CMSEncryptedData, encryptedContentInfo), asn1_EncryptedContentInfo },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct CMSEncryptedData, unprotectedAttrs), asn1_CMSEncryptedData_tag_unprotectedAttrs_34 },
/* 4 */ { A1_OP_NAME, 0, "CMSEncryptedData" },
/* 5 */ { A1_OP_NAME, 0, "version" },
/* 6 */ { A1_OP_NAME, 0, "encryptedContentInfo" },
/* 7 */ { A1_OP_NAME, 0, "unprotectedAttrs" }
};
/* generate_template_type: CMSEncryptedData */
const struct asn1_template asn1_CMSEncryptedData[] = {
/* 0 */ { 0, sizeof(CMSEncryptedData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CMSEncryptedData_tag__33 }
};

int ASN1CALL
decode_CMSEncryptedData(const unsigned char *p, size_t len, CMSEncryptedData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CMSEncryptedData, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_CMSEncryptedData(unsigned char *p, size_t len, const CMSEncryptedData *data, size_t *size)
{
    return _asn1_encode(asn1_CMSEncryptedData, p, len, data, size);
}


size_t ASN1CALL
length_CMSEncryptedData(const CMSEncryptedData *data)
{
    return _asn1_length(asn1_CMSEncryptedData, data);
}


void ASN1CALL
free_CMSEncryptedData(CMSEncryptedData *data)
{
    _asn1_free_top(asn1_CMSEncryptedData, data);
}


int ASN1CALL
copy_CMSEncryptedData(const CMSEncryptedData *from, CMSEncryptedData *to)
{
    return _asn1_copy_top(asn1_CMSEncryptedData, from, to);
}


char * ASN1CALL
print_CMSEncryptedData(const CMSEncryptedData *data, int flags)
{
    return _asn1_print_top(asn1_CMSEncryptedData, flags, data);
}

/* template_members: EnvelopedData exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: EnvelopedData exp imp */
/* generate_template_type: EnvelopedData_tag_originatorInfo_36 */
const struct asn1_template asn1_EnvelopedData_tag_originatorInfo_36[] = {
/* 0 */ { 0, sizeof(OriginatorInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_OriginatorInfo }
};
/* template_members: EnvelopedData exp imp */
/* generate_template_type: EnvelopedData_tag_unprotectedAttrs_37 */
/* generate_template_type: EnvelopedData_tag__35 */
const struct asn1_template asn1_EnvelopedData_tag__35[] = {
/* 0 */ { 0, sizeof(struct EnvelopedData), ((void *)(uintptr_t)11) },
/* 1 */ { A1_OP_TYPE , offsetof(struct EnvelopedData, version), asn1_CMSVersion },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct EnvelopedData, originatorInfo), asn1_EnvelopedData_tag_originatorInfo_36 },
/* 3 */ { A1_OP_TYPE , offsetof(struct EnvelopedData, recipientInfos), asn1_RecipientInfos },
/* 4 */ { A1_OP_TYPE , offsetof(struct EnvelopedData, encryptedContentInfo), asn1_EncryptedContentInfo },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct EnvelopedData, unprotectedAttrs), asn1_CMSEncryptedData_tag_unprotectedAttrs_34 },
/* 6 */ { A1_OP_NAME, 0, "EnvelopedData" },
/* 7 */ { A1_OP_NAME, 0, "version" },
/* 8 */ { A1_OP_NAME, 0, "originatorInfo" },
/* 9 */ { A1_OP_NAME, 0, "recipientInfos" },
/* 10 */ { A1_OP_NAME, 0, "encryptedContentInfo" },
/* 11 */ { A1_OP_NAME, 0, "unprotectedAttrs" }
};
/* generate_template_type: EnvelopedData */
const struct asn1_template asn1_EnvelopedData[] = {
/* 0 */ { 0, sizeof(EnvelopedData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EnvelopedData_tag__35 }
};

int ASN1CALL
decode_EnvelopedData(const unsigned char *p, size_t len, EnvelopedData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EnvelopedData, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_EnvelopedData(unsigned char *p, size_t len, const EnvelopedData *data, size_t *size)
{
    return _asn1_encode(asn1_EnvelopedData, p, len, data, size);
}


size_t ASN1CALL
length_EnvelopedData(const EnvelopedData *data)
{
    return _asn1_length(asn1_EnvelopedData, data);
}


void ASN1CALL
free_EnvelopedData(EnvelopedData *data)
{
    _asn1_free_top(asn1_EnvelopedData, data);
}


int ASN1CALL
copy_EnvelopedData(const EnvelopedData *from, EnvelopedData *to)
{
    return _asn1_copy_top(asn1_EnvelopedData, from, to);
}


char * ASN1CALL
print_EnvelopedData(const EnvelopedData *data, int flags)
{
    return _asn1_print_top(asn1_EnvelopedData, flags, data);
}

/* template_members: CMSRC2CBCParameter exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: CMSRC2CBCParameter exp exp */
/* generate_template_type: CMSRC2CBCParameter_tag_rc2ParameterVersion_39 */
const struct asn1_template asn1_CMSRC2CBCParameter_tag_rc2ParameterVersion_39[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* template_members: CMSRC2CBCParameter exp exp */
/* generate_template_type: CMSRC2CBCParameter_tag_iv_40 */
/* generate_template_type: CMSRC2CBCParameter_tag__38 */
const struct asn1_template asn1_CMSRC2CBCParameter_tag__38[] = {
/* 0 */ { 0, sizeof(struct CMSRC2CBCParameter), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct CMSRC2CBCParameter, rc2ParameterVersion), asn1_CMSRC2CBCParameter_tag_rc2ParameterVersion_39 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct CMSRC2CBCParameter, iv), asn1_MessageDigest_tag__3 },
/* 3 */ { A1_OP_NAME, 0, "CMSRC2CBCParameter" },
/* 4 */ { A1_OP_NAME, 0, "rc2ParameterVersion" },
/* 5 */ { A1_OP_NAME, 0, "iv" }
};
/* generate_template_type: CMSRC2CBCParameter */
const struct asn1_template asn1_CMSRC2CBCParameter[] = {
/* 0 */ { 0, sizeof(CMSRC2CBCParameter), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CMSRC2CBCParameter_tag__38 }
};

int ASN1CALL
decode_CMSRC2CBCParameter(const unsigned char *p, size_t len, CMSRC2CBCParameter *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CMSRC2CBCParameter, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_CMSRC2CBCParameter(unsigned char *p, size_t len, const CMSRC2CBCParameter *data, size_t *size)
{
    return _asn1_encode(asn1_CMSRC2CBCParameter, p, len, data, size);
}


size_t ASN1CALL
length_CMSRC2CBCParameter(const CMSRC2CBCParameter *data)
{
    return _asn1_length(asn1_CMSRC2CBCParameter, data);
}


void ASN1CALL
free_CMSRC2CBCParameter(CMSRC2CBCParameter *data)
{
    _asn1_free_top(asn1_CMSRC2CBCParameter, data);
}


int ASN1CALL
copy_CMSRC2CBCParameter(const CMSRC2CBCParameter *from, CMSRC2CBCParameter *to)
{
    return _asn1_copy_top(asn1_CMSRC2CBCParameter, from, to);
}


char * ASN1CALL
print_CMSRC2CBCParameter(const CMSRC2CBCParameter *data, int flags)
{
    return _asn1_print_top(asn1_CMSRC2CBCParameter, flags, data);
}

/* template_members: CMSCBCParameter exp exp */
/* generate_template_type: CMSCBCParameter_tag__41 */
/* generate_template_type: CMSCBCParameter */
const struct asn1_template asn1_CMSCBCParameter[] = {
/* 0 */ { 0, sizeof(CMSCBCParameter), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_MessageDigest_tag__3 }
};

int ASN1CALL
decode_CMSCBCParameter(const unsigned char *p, size_t len, CMSCBCParameter *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CMSCBCParameter, 0|A1_PF_ALLOW_BER, p, len, data, size);
}


int ASN1CALL
encode_CMSCBCParameter(unsigned char *p, size_t len, const CMSCBCParameter *data, size_t *size)
{
    return _asn1_encode(asn1_CMSCBCParameter, p, len, data, size);
}


size_t ASN1CALL
length_CMSCBCParameter(const CMSCBCParameter *data)
{
    return _asn1_length(asn1_CMSCBCParameter, data);
}


void ASN1CALL
free_CMSCBCParameter(CMSCBCParameter *data)
{
    _asn1_free_top(asn1_CMSCBCParameter, data);
}


int ASN1CALL
copy_CMSCBCParameter(const CMSCBCParameter *from, CMSCBCParameter *to)
{
    return _asn1_copy_top(asn1_CMSCBCParameter, from, to);
}


char * ASN1CALL
print_CMSCBCParameter(const CMSCBCParameter *data, int flags)
{
    return _asn1_print_top(asn1_CMSCBCParameter, flags, data);
}

