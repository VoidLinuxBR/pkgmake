/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/pkcs8.asn1 */
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
#include "pkcs8_asn1.h"
#include "pkcs8_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_Attribute = {
	(asn1_type_encode)encode_Attribute,
	(asn1_type_decode)decode_Attribute,
	(asn1_type_length)length_Attribute,
	(asn1_type_copy)copy_Attribute,
	(asn1_type_release)free_Attribute,
	(asn1_type_print)print_Attribute,
	sizeof(Attribute)
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
extern const struct asn1_template asn1_PKCS8PrivateKeyAlgorithmIdentifier[];
extern const struct asn1_template asn1_PKCS8PrivateKeyAlgorithmIdentifier[];
extern const struct asn1_template asn1_PKCS8PrivateKey[];
extern const struct asn1_template asn1_PKCS8PrivateKey[];
extern const struct asn1_template asn1_PKCS8Attributes[];
extern const struct asn1_template asn1_PKCS8PrivateKeyInfo[];
extern const struct asn1_template asn1_PKCS8EncryptedData[];
extern const struct asn1_template asn1_PKCS8EncryptedData[];
extern const struct asn1_template asn1_PKCS8EncryptedPrivateKeyInfo[];
/* generate_template_type: PKCS8PrivateKeyAlgorithmIdentifier */
const struct asn1_template asn1_PKCS8PrivateKeyAlgorithmIdentifier[] = {
/* 0 */ { 0, sizeof(PKCS8PrivateKeyAlgorithmIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_AlgorithmIdentifier}
};

int ASN1CALL
decode_PKCS8PrivateKeyAlgorithmIdentifier(const unsigned char *p, size_t len, PKCS8PrivateKeyAlgorithmIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS8PrivateKeyAlgorithmIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS8PrivateKeyAlgorithmIdentifier(unsigned char *p, size_t len, const PKCS8PrivateKeyAlgorithmIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS8PrivateKeyAlgorithmIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_PKCS8PrivateKeyAlgorithmIdentifier(const PKCS8PrivateKeyAlgorithmIdentifier *data)
{
    return _asn1_length(asn1_PKCS8PrivateKeyAlgorithmIdentifier, data);
}


void ASN1CALL
free_PKCS8PrivateKeyAlgorithmIdentifier(PKCS8PrivateKeyAlgorithmIdentifier *data)
{
    _asn1_free_top(asn1_PKCS8PrivateKeyAlgorithmIdentifier, data);
}


int ASN1CALL
copy_PKCS8PrivateKeyAlgorithmIdentifier(const PKCS8PrivateKeyAlgorithmIdentifier *from, PKCS8PrivateKeyAlgorithmIdentifier *to)
{
    return _asn1_copy_top(asn1_PKCS8PrivateKeyAlgorithmIdentifier, from, to);
}


char * ASN1CALL
print_PKCS8PrivateKeyAlgorithmIdentifier(const PKCS8PrivateKeyAlgorithmIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_PKCS8PrivateKeyAlgorithmIdentifier, flags, data);
}

/* template_members: PKCS8PrivateKey exp exp */
/* generate_template_type: PKCS8PrivateKey_tag__0 */
const struct asn1_template asn1_PKCS8PrivateKey_tag__0[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: PKCS8PrivateKey */
const struct asn1_template asn1_PKCS8PrivateKey[] = {
/* 0 */ { 0, sizeof(PKCS8PrivateKey), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_PKCS8PrivateKey_tag__0 }
};

int ASN1CALL
decode_PKCS8PrivateKey(const unsigned char *p, size_t len, PKCS8PrivateKey *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS8PrivateKey, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS8PrivateKey(unsigned char *p, size_t len, const PKCS8PrivateKey *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS8PrivateKey, p, len, data, size);
}


size_t ASN1CALL
length_PKCS8PrivateKey(const PKCS8PrivateKey *data)
{
    return _asn1_length(asn1_PKCS8PrivateKey, data);
}


void ASN1CALL
free_PKCS8PrivateKey(PKCS8PrivateKey *data)
{
    _asn1_free_top(asn1_PKCS8PrivateKey, data);
}


int ASN1CALL
copy_PKCS8PrivateKey(const PKCS8PrivateKey *from, PKCS8PrivateKey *to)
{
    return _asn1_copy_top(asn1_PKCS8PrivateKey, from, to);
}


char * ASN1CALL
print_PKCS8PrivateKey(const PKCS8PrivateKey *data, int flags)
{
    return _asn1_print_top(asn1_PKCS8PrivateKey, flags, data);
}

/* template_members: PKCS8Attributes exp exp */
/* generate_template_type: Attribute_seofTstruct_0 */
const struct asn1_template asn1_Attribute_seofTstruct_0[] = {
/* 0 */ { 0, sizeof(Attribute), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_Attribute}
};
/* generate_template_type: PKCS8Attributes_tag__1 */
const struct asn1_template asn1_PKCS8Attributes_tag__1[] = {
/* 0 */ { 0, sizeof(Attribute), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_Attribute_seofTstruct_0 }
};
/* generate_template_type: PKCS8Attributes */
const struct asn1_template asn1_PKCS8Attributes[] = {
/* 0 */ { 0, sizeof(PKCS8Attributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_PKCS8Attributes_tag__1 }
};

int ASN1CALL
decode_PKCS8Attributes(const unsigned char *p, size_t len, PKCS8Attributes *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS8Attributes, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS8Attributes(unsigned char *p, size_t len, const PKCS8Attributes *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS8Attributes, p, len, data, size);
}


size_t ASN1CALL
length_PKCS8Attributes(const PKCS8Attributes *data)
{
    return _asn1_length(asn1_PKCS8Attributes, data);
}


void ASN1CALL
free_PKCS8Attributes(PKCS8Attributes *data)
{
    _asn1_free_top(asn1_PKCS8Attributes, data);
}


int ASN1CALL
copy_PKCS8Attributes(const PKCS8Attributes *from, PKCS8Attributes *to)
{
    return _asn1_copy_top(asn1_PKCS8Attributes, from, to);
}


char * ASN1CALL
print_PKCS8Attributes(const PKCS8Attributes *data, int flags)
{
    return _asn1_print_top(asn1_PKCS8Attributes, flags, data);
}

/* template_members: PKCS8PrivateKeyInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PKCS8PrivateKeyInfo exp exp */
/* generate_template_type: PKCS8PrivateKeyInfo_tag_version_3 */
const struct asn1_template asn1_PKCS8PrivateKeyInfo_tag_version_3[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_INTEGER), 0, NULL }
};
/* template_members: PKCS8PrivateKeyInfo exp imp */
/* template_members: PKCS8PrivateKeyInfo exp exp */
/* generate_template_type: PKCS8PrivateKeyInfo_attributes_1 */
/* generate_template_type: PKCS8PrivateKeyInfo_tag_attributes_5 */
const struct asn1_template asn1_PKCS8PrivateKeyInfo_tag_attributes_5[] = {
/* 0 */ { 0, sizeof(struct PKCS8PrivateKeyInfo_attributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SETOF, 0, asn1_Attribute_seofTstruct_0 }
};
/* generate_template_type: PKCS8PrivateKeyInfo_tag_attributes_4 */
const struct asn1_template asn1_PKCS8PrivateKeyInfo_tag_attributes_4[] = {
/* 0 */ { 0, sizeof(struct PKCS8PrivateKeyInfo_attributes), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Set), 0, asn1_PKCS8PrivateKeyInfo_tag_attributes_5 }
};
/* generate_template_type: PKCS8PrivateKeyInfo_tag__2 */
const struct asn1_template asn1_PKCS8PrivateKeyInfo_tag__2[] = {
/* 0 */ { 0, sizeof(struct PKCS8PrivateKeyInfo), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct PKCS8PrivateKeyInfo, version), asn1_PKCS8PrivateKeyInfo_tag_version_3 },
/* 2 */ { A1_OP_TYPE , offsetof(struct PKCS8PrivateKeyInfo, privateKeyAlgorithm), asn1_PKCS8PrivateKeyAlgorithmIdentifier },
/* 3 */ { A1_OP_TYPE , offsetof(struct PKCS8PrivateKeyInfo, privateKey), asn1_PKCS8PrivateKey },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct PKCS8PrivateKeyInfo, attributes), asn1_PKCS8PrivateKeyInfo_tag_attributes_4 },
/* 5 */ { A1_OP_NAME, 0, "PKCS8PrivateKeyInfo" },
/* 6 */ { A1_OP_NAME, 0, "version" },
/* 7 */ { A1_OP_NAME, 0, "privateKeyAlgorithm" },
/* 8 */ { A1_OP_NAME, 0, "privateKey" },
/* 9 */ { A1_OP_NAME, 0, "attributes" }
};
/* generate_template_type: PKCS8PrivateKeyInfo */
const struct asn1_template asn1_PKCS8PrivateKeyInfo[] = {
/* 0 */ { 0, sizeof(PKCS8PrivateKeyInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKCS8PrivateKeyInfo_tag__2 }
};

int ASN1CALL
decode_PKCS8PrivateKeyInfo(const unsigned char *p, size_t len, PKCS8PrivateKeyInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS8PrivateKeyInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS8PrivateKeyInfo(unsigned char *p, size_t len, const PKCS8PrivateKeyInfo *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS8PrivateKeyInfo, p, len, data, size);
}


size_t ASN1CALL
length_PKCS8PrivateKeyInfo(const PKCS8PrivateKeyInfo *data)
{
    return _asn1_length(asn1_PKCS8PrivateKeyInfo, data);
}


void ASN1CALL
free_PKCS8PrivateKeyInfo(PKCS8PrivateKeyInfo *data)
{
    _asn1_free_top(asn1_PKCS8PrivateKeyInfo, data);
}


int ASN1CALL
copy_PKCS8PrivateKeyInfo(const PKCS8PrivateKeyInfo *from, PKCS8PrivateKeyInfo *to)
{
    return _asn1_copy_top(asn1_PKCS8PrivateKeyInfo, from, to);
}


char * ASN1CALL
print_PKCS8PrivateKeyInfo(const PKCS8PrivateKeyInfo *data, int flags)
{
    return _asn1_print_top(asn1_PKCS8PrivateKeyInfo, flags, data);
}

/* template_members: PKCS8EncryptedData exp exp */
/* generate_template_type: PKCS8EncryptedData_tag__6 */
/* generate_template_type: PKCS8EncryptedData */
const struct asn1_template asn1_PKCS8EncryptedData[] = {
/* 0 */ { 0, sizeof(PKCS8EncryptedData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_PKCS8PrivateKey_tag__0 }
};

int ASN1CALL
decode_PKCS8EncryptedData(const unsigned char *p, size_t len, PKCS8EncryptedData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS8EncryptedData, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS8EncryptedData(unsigned char *p, size_t len, const PKCS8EncryptedData *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS8EncryptedData, p, len, data, size);
}


size_t ASN1CALL
length_PKCS8EncryptedData(const PKCS8EncryptedData *data)
{
    return _asn1_length(asn1_PKCS8EncryptedData, data);
}


void ASN1CALL
free_PKCS8EncryptedData(PKCS8EncryptedData *data)
{
    _asn1_free_top(asn1_PKCS8EncryptedData, data);
}


int ASN1CALL
copy_PKCS8EncryptedData(const PKCS8EncryptedData *from, PKCS8EncryptedData *to)
{
    return _asn1_copy_top(asn1_PKCS8EncryptedData, from, to);
}


char * ASN1CALL
print_PKCS8EncryptedData(const PKCS8EncryptedData *data, int flags)
{
    return _asn1_print_top(asn1_PKCS8EncryptedData, flags, data);
}

/* template_members: PKCS8EncryptedPrivateKeyInfo exp exp */
/* tsequence: members isstruct: 1 */
/* generate_template_type: PKCS8EncryptedPrivateKeyInfo_tag__7 */
const struct asn1_template asn1_PKCS8EncryptedPrivateKeyInfo_tag__7[] = {
/* 0 */ { 0, sizeof(struct PKCS8EncryptedPrivateKeyInfo), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE_EXTERN , offsetof(struct PKCS8EncryptedPrivateKeyInfo, encryptionAlgorithm), &asn1_extern_AlgorithmIdentifier},
/* 2 */ { A1_OP_TYPE , offsetof(struct PKCS8EncryptedPrivateKeyInfo, encryptedData), asn1_PKCS8EncryptedData },
/* 3 */ { A1_OP_NAME, 0, "PKCS8EncryptedPrivateKeyInfo" },
/* 4 */ { A1_OP_NAME, 0, "encryptionAlgorithm" },
/* 5 */ { A1_OP_NAME, 0, "encryptedData" }
};
/* generate_template_type: PKCS8EncryptedPrivateKeyInfo */
const struct asn1_template asn1_PKCS8EncryptedPrivateKeyInfo[] = {
/* 0 */ { 0, sizeof(PKCS8EncryptedPrivateKeyInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PKCS8EncryptedPrivateKeyInfo_tag__7 }
};

int ASN1CALL
decode_PKCS8EncryptedPrivateKeyInfo(const unsigned char *p, size_t len, PKCS8EncryptedPrivateKeyInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PKCS8EncryptedPrivateKeyInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PKCS8EncryptedPrivateKeyInfo(unsigned char *p, size_t len, const PKCS8EncryptedPrivateKeyInfo *data, size_t *size)
{
    return _asn1_encode(asn1_PKCS8EncryptedPrivateKeyInfo, p, len, data, size);
}


size_t ASN1CALL
length_PKCS8EncryptedPrivateKeyInfo(const PKCS8EncryptedPrivateKeyInfo *data)
{
    return _asn1_length(asn1_PKCS8EncryptedPrivateKeyInfo, data);
}


void ASN1CALL
free_PKCS8EncryptedPrivateKeyInfo(PKCS8EncryptedPrivateKeyInfo *data)
{
    _asn1_free_top(asn1_PKCS8EncryptedPrivateKeyInfo, data);
}


int ASN1CALL
copy_PKCS8EncryptedPrivateKeyInfo(const PKCS8EncryptedPrivateKeyInfo *from, PKCS8EncryptedPrivateKeyInfo *to)
{
    return _asn1_copy_top(asn1_PKCS8EncryptedPrivateKeyInfo, from, to);
}


char * ASN1CALL
print_PKCS8EncryptedPrivateKeyInfo(const PKCS8EncryptedPrivateKeyInfo *data, int flags)
{
    return _asn1_print_top(asn1_PKCS8EncryptedPrivateKeyInfo, flags, data);
}

