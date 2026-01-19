/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/rfc4108.asn1 */
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
#include "rfc4108_asn1.h"
#include "rfc4108_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

static const struct asn1_type_func asn1_extern_EnvelopedData = {
	(asn1_type_encode)encode_EnvelopedData,
	(asn1_type_decode)decode_EnvelopedData,
	(asn1_type_length)length_EnvelopedData,
	(asn1_type_copy)copy_EnvelopedData,
	(asn1_type_release)free_EnvelopedData,
	(asn1_type_print)print_EnvelopedData,
	sizeof(EnvelopedData)
};
static unsigned oid_id_ct_firmwarePackage_variable_num[9] =  { 1, 2, 840, 113549, 1, 9, 16, 1, 16};
const heim_oid asn1_oid_id_ct_firmwarePackage = { 9, oid_id_ct_firmwarePackage_variable_num };

extern const struct asn1_template asn1_FirmwarePkgData[];
extern const struct asn1_template asn1_FirmwarePkgData[];
static unsigned oid_id_aa_firmwarePackageID_variable_num[9] =  { 1, 2, 840, 113549, 1, 9, 16, 2, 35};
const heim_oid asn1_oid_id_aa_firmwarePackageID = { 9, oid_id_aa_firmwarePackageID_variable_num };

extern const struct asn1_template asn1_PreferredPackageIdentifier[];
extern const struct asn1_template asn1_PreferredOrLegacyPackageIdentifier[];
extern const struct asn1_template asn1_PreferredOrLegacyStalePackageIdentifier[];
extern const struct asn1_template asn1_FirmwarePackageIdentifier[];
static unsigned oid_id_aa_targetHardwareIDs_variable_num[9] =  { 1, 2, 840, 113549, 1, 9, 16, 2, 36};
const heim_oid asn1_oid_id_aa_targetHardwareIDs = { 9, oid_id_aa_targetHardwareIDs_variable_num };

extern const struct asn1_template asn1_TargetHardwareIdentifiers[];
static unsigned oid_id_aa_decryptKeyID_variable_num[9] =  { 1, 2, 840, 113549, 1, 9, 16, 2, 37};
const heim_oid asn1_oid_id_aa_decryptKeyID = { 9, oid_id_aa_decryptKeyID_variable_num };

extern const struct asn1_template asn1_DecryptKeyIdentifier[];
extern const struct asn1_template asn1_DecryptKeyIdentifier[];
static unsigned oid_id_aa_implCryptoAlgs_variable_num[9] =  { 1, 2, 840, 113549, 1, 9, 16, 2, 38};
const heim_oid asn1_oid_id_aa_implCryptoAlgs = { 9, oid_id_aa_implCryptoAlgs_variable_num };

extern const struct asn1_template asn1_ImplementedCryptoAlgorithms[];
static unsigned oid_id_aa_implCompressAlgs_variable_num[9] =  { 1, 2, 840, 113549, 1, 9, 16, 2, 43};
const heim_oid asn1_oid_id_aa_implCompressAlgs = { 9, oid_id_aa_implCompressAlgs_variable_num };

extern const struct asn1_template asn1_ImplementedCompressAlgorithms[];
static unsigned oid_id_aa_communityIdentifiers_variable_num[9] =  { 1, 2, 840, 113549, 1, 9, 16, 2, 40};
const heim_oid asn1_oid_id_aa_communityIdentifiers = { 9, oid_id_aa_communityIdentifiers_variable_num };

extern const struct asn1_template asn1_HardwareSerialEntry[];
extern const struct asn1_template asn1_HardwareModules[];
extern const struct asn1_template asn1_CommunityIdentifier[];
extern const struct asn1_template asn1_CommunityIdentifiers[];
static unsigned oid_id_aa_firmwarePackageInfo_variable_num[9] =  { 1, 2, 840, 113549, 1, 9, 16, 2, 42};
const heim_oid asn1_oid_id_aa_firmwarePackageInfo = { 9, oid_id_aa_firmwarePackageInfo_variable_num };

extern const struct asn1_template asn1_FirmwarePackageInfo[];
static unsigned oid_id_aa_wrappedFirmwareKey_variable_num[9] =  { 1, 2, 840, 113549, 1, 9, 16, 2, 39};
const heim_oid asn1_oid_id_aa_wrappedFirmwareKey = { 9, oid_id_aa_wrappedFirmwareKey_variable_num };

extern const struct asn1_template asn1_WrappedFirmwareKey[];
extern const struct asn1_template asn1_WrappedFirmwareKey[];
static unsigned oid_id_ct_firmwareLoadReceipt_variable_num[9] =  { 1, 2, 840, 113549, 1, 9, 16, 1, 17};
const heim_oid asn1_oid_id_ct_firmwareLoadReceipt = { 9, oid_id_ct_firmwareLoadReceipt_variable_num };

extern const struct asn1_template asn1_FWReceiptVersion[];
extern const struct asn1_template asn1_FWReceiptVersion[];
extern const struct asn1_template asn1_FirmwarePackageLoadReceipt[];
static unsigned oid_id_ct_firmwareLoadError_variable_num[9] =  { 1, 2, 840, 113549, 1, 9, 16, 1, 18};
const heim_oid asn1_oid_id_ct_firmwareLoadError = { 9, oid_id_ct_firmwareLoadError_variable_num };

extern const struct asn1_template asn1_FWErrorVersion[];
extern const struct asn1_template asn1_FWErrorVersion[];
extern const struct asn1_template asn1_FirmwarePackageLoadErrorCode[];
extern const struct asn1_template asn1_FirmwarePackageLoadErrorCode[];
extern const struct asn1_template asn1_VendorLoadErrorCode[];
extern const struct asn1_template asn1_VendorLoadErrorCode[];
extern const struct asn1_template asn1_CurrentFWConfig[];
extern const struct asn1_template asn1_FirmwarePackageLoadError[];
static unsigned oid_id_on_hardwareModuleName_variable_num[9] =  { 1, 3, 6, 1, 5, 5, 7, 8, 4};
const heim_oid asn1_oid_id_on_hardwareModuleName = { 9, oid_id_on_hardwareModuleName_variable_num };

/* template_members: FirmwarePkgData exp exp */
/* generate_template_type: FirmwarePkgData_tag__0 */
const struct asn1_template asn1_FirmwarePkgData_tag__0[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: FirmwarePkgData */
const struct asn1_template asn1_FirmwarePkgData[] = {
/* 0 */ { 0, sizeof(FirmwarePkgData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_FirmwarePkgData_tag__0 }
};

int ASN1CALL
decode_FirmwarePkgData(const unsigned char *p, size_t len, FirmwarePkgData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_FirmwarePkgData, 0|0, p, len, data, size);
}


int ASN1CALL
encode_FirmwarePkgData(unsigned char *p, size_t len, const FirmwarePkgData *data, size_t *size)
{
    return _asn1_encode(asn1_FirmwarePkgData, p, len, data, size);
}


size_t ASN1CALL
length_FirmwarePkgData(const FirmwarePkgData *data)
{
    return _asn1_length(asn1_FirmwarePkgData, data);
}


void ASN1CALL
free_FirmwarePkgData(FirmwarePkgData *data)
{
    _asn1_free_top(asn1_FirmwarePkgData, data);
}


int ASN1CALL
copy_FirmwarePkgData(const FirmwarePkgData *from, FirmwarePkgData *to)
{
    return _asn1_copy_top(asn1_FirmwarePkgData, from, to);
}


char * ASN1CALL
print_FirmwarePkgData(const FirmwarePkgData *data, int flags)
{
    return _asn1_print_top(asn1_FirmwarePkgData, flags, data);
}

/* template_members: PreferredPackageIdentifier imp imp */
/* tsequence: members isstruct: 1 */
/* template_members: PreferredPackageIdentifier exp exp */
/* generate_template_type: PreferredPackageIdentifier_tag_fwPkgID_2 */
const struct asn1_template asn1_PreferredPackageIdentifier_tag_fwPkgID_2[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OID), 0, NULL }
};
/* template_members: PreferredPackageIdentifier exp exp */
/* generate_template_type: PreferredPackageIdentifier_tag_verNum_3 */
const struct asn1_template asn1_PreferredPackageIdentifier_tag_verNum_3[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* generate_template_type: PreferredPackageIdentifier_tag__1 */
const struct asn1_template asn1_PreferredPackageIdentifier_tag__1[] = {
/* 0 */ { 0, sizeof(struct PreferredPackageIdentifier), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct PreferredPackageIdentifier, fwPkgID), asn1_PreferredPackageIdentifier_tag_fwPkgID_2 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), offsetof(struct PreferredPackageIdentifier, verNum), asn1_PreferredPackageIdentifier_tag_verNum_3 },
/* 3 */ { A1_OP_NAME, 0, "PreferredPackageIdentifier" },
/* 4 */ { A1_OP_NAME, 0, "fwPkgID" },
/* 5 */ { A1_OP_NAME, 0, "verNum" }
};
/* generate_template_type: PreferredPackageIdentifier */
const struct asn1_template asn1_PreferredPackageIdentifier[] = {
/* 0 */ { 0, sizeof(PreferredPackageIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_PreferredPackageIdentifier_tag__1 }
};

int ASN1CALL
decode_PreferredPackageIdentifier(const unsigned char *p, size_t len, PreferredPackageIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PreferredPackageIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PreferredPackageIdentifier(unsigned char *p, size_t len, const PreferredPackageIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_PreferredPackageIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_PreferredPackageIdentifier(const PreferredPackageIdentifier *data)
{
    return _asn1_length(asn1_PreferredPackageIdentifier, data);
}


void ASN1CALL
free_PreferredPackageIdentifier(PreferredPackageIdentifier *data)
{
    _asn1_free_top(asn1_PreferredPackageIdentifier, data);
}


int ASN1CALL
copy_PreferredPackageIdentifier(const PreferredPackageIdentifier *from, PreferredPackageIdentifier *to)
{
    return _asn1_copy_top(asn1_PreferredPackageIdentifier, from, to);
}


char * ASN1CALL
print_PreferredPackageIdentifier(const PreferredPackageIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_PreferredPackageIdentifier, flags, data);
}

/* generate_template_type: PreferredOrLegacyPackageIdentifier_choice_preferred */
const struct asn1_template asn1_PreferredOrLegacyPackageIdentifier_choice_preferred[] = {
/* 0 */ { 0, sizeof(PreferredPackageIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PreferredPackageIdentifier }
};
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag__4 */
/* generate_template_type: PreferredOrLegacyPackageIdentifier_choice_legacy */
const struct asn1_template asn1_PreferredOrLegacyPackageIdentifier_choice_legacy[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_FirmwarePkgData_tag__0 }
};
static const struct asn1_template asn1_choice_PreferredOrLegacyPackageIdentifier_0[] = {
/* 0 */ { 0, offsetof(PreferredOrLegacyPackageIdentifier, element), ((void *)(uintptr_t)4) },
/* 1 */ { choice_PreferredOrLegacyPackageIdentifier_preferred, offsetof(PreferredOrLegacyPackageIdentifier, u.preferred), asn1_PreferredOrLegacyPackageIdentifier_choice_preferred },
/* 2 */ { choice_PreferredOrLegacyPackageIdentifier_legacy, offsetof(PreferredOrLegacyPackageIdentifier, u.legacy), asn1_PreferredOrLegacyPackageIdentifier_choice_legacy },
/* 3 */ { 0, 0, "preferred" },
/* 4 */ { 0, 0, "legacy" }
};
/* generate_template_type: PreferredOrLegacyPackageIdentifier */
const struct asn1_template asn1_PreferredOrLegacyPackageIdentifier[] = {
/* 0 */ { 0, sizeof(PreferredOrLegacyPackageIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_PreferredOrLegacyPackageIdentifier_0 }
};

int ASN1CALL
decode_PreferredOrLegacyPackageIdentifier(const unsigned char *p, size_t len, PreferredOrLegacyPackageIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PreferredOrLegacyPackageIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PreferredOrLegacyPackageIdentifier(unsigned char *p, size_t len, const PreferredOrLegacyPackageIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_PreferredOrLegacyPackageIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_PreferredOrLegacyPackageIdentifier(const PreferredOrLegacyPackageIdentifier *data)
{
    return _asn1_length(asn1_PreferredOrLegacyPackageIdentifier, data);
}


void ASN1CALL
free_PreferredOrLegacyPackageIdentifier(PreferredOrLegacyPackageIdentifier *data)
{
    _asn1_free_top(asn1_PreferredOrLegacyPackageIdentifier, data);
}


int ASN1CALL
copy_PreferredOrLegacyPackageIdentifier(const PreferredOrLegacyPackageIdentifier *from, PreferredOrLegacyPackageIdentifier *to)
{
    return _asn1_copy_top(asn1_PreferredOrLegacyPackageIdentifier, from, to);
}


char * ASN1CALL
print_PreferredOrLegacyPackageIdentifier(const PreferredOrLegacyPackageIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_PreferredOrLegacyPackageIdentifier, flags, data);
}

/* template_members: unsigned exp exp */
/* generate_template_type: unsigned_tag__5 */
/* generate_template_type: PreferredOrLegacyStalePackageIdentifier_choice_preferredStaleVerNum */
const struct asn1_template asn1_PreferredOrLegacyStalePackageIdentifier_choice_preferredStaleVerNum[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_PreferredPackageIdentifier_tag_verNum_3 }
};
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag__6 */
/* generate_template_type: PreferredOrLegacyStalePackageIdentifier_choice_legacyStaleVersion */
static const struct asn1_template asn1_choice_PreferredOrLegacyStalePackageIdentifier_1[] = {
/* 0 */ { 0, offsetof(PreferredOrLegacyStalePackageIdentifier, element), ((void *)(uintptr_t)4) },
/* 1 */ { choice_PreferredOrLegacyStalePackageIdentifier_preferredStaleVerNum, offsetof(PreferredOrLegacyStalePackageIdentifier, u.preferredStaleVerNum), asn1_PreferredOrLegacyStalePackageIdentifier_choice_preferredStaleVerNum },
/* 2 */ { choice_PreferredOrLegacyStalePackageIdentifier_legacyStaleVersion, offsetof(PreferredOrLegacyStalePackageIdentifier, u.legacyStaleVersion), asn1_PreferredOrLegacyPackageIdentifier_choice_legacy },
/* 3 */ { 0, 0, "preferredStaleVerNum" },
/* 4 */ { 0, 0, "legacyStaleVersion" }
};
/* generate_template_type: PreferredOrLegacyStalePackageIdentifier */
const struct asn1_template asn1_PreferredOrLegacyStalePackageIdentifier[] = {
/* 0 */ { 0, sizeof(PreferredOrLegacyStalePackageIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_PreferredOrLegacyStalePackageIdentifier_1 }
};

int ASN1CALL
decode_PreferredOrLegacyStalePackageIdentifier(const unsigned char *p, size_t len, PreferredOrLegacyStalePackageIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PreferredOrLegacyStalePackageIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PreferredOrLegacyStalePackageIdentifier(unsigned char *p, size_t len, const PreferredOrLegacyStalePackageIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_PreferredOrLegacyStalePackageIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_PreferredOrLegacyStalePackageIdentifier(const PreferredOrLegacyStalePackageIdentifier *data)
{
    return _asn1_length(asn1_PreferredOrLegacyStalePackageIdentifier, data);
}


void ASN1CALL
free_PreferredOrLegacyStalePackageIdentifier(PreferredOrLegacyStalePackageIdentifier *data)
{
    _asn1_free_top(asn1_PreferredOrLegacyStalePackageIdentifier, data);
}


int ASN1CALL
copy_PreferredOrLegacyStalePackageIdentifier(const PreferredOrLegacyStalePackageIdentifier *from, PreferredOrLegacyStalePackageIdentifier *to)
{
    return _asn1_copy_top(asn1_PreferredOrLegacyStalePackageIdentifier, from, to);
}


char * ASN1CALL
print_PreferredOrLegacyStalePackageIdentifier(const PreferredOrLegacyStalePackageIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_PreferredOrLegacyStalePackageIdentifier, flags, data);
}

/* template_members: FirmwarePackageIdentifier imp imp */
/* tsequence: members isstruct: 1 */
/* generate_template_type: FirmwarePackageIdentifier_tag__7 */
const struct asn1_template asn1_FirmwarePackageIdentifier_tag__7[] = {
/* 0 */ { 0, sizeof(struct FirmwarePackageIdentifier), ((void *)(uintptr_t)5) },
/* 1 */ { A1_OP_TYPE , offsetof(struct FirmwarePackageIdentifier, name), asn1_PreferredOrLegacyPackageIdentifier },
/* 2 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct FirmwarePackageIdentifier, stale), asn1_PreferredOrLegacyStalePackageIdentifier },
/* 3 */ { A1_OP_NAME, 0, "FirmwarePackageIdentifier" },
/* 4 */ { A1_OP_NAME, 0, "name" },
/* 5 */ { A1_OP_NAME, 0, "stale" }
};
/* generate_template_type: FirmwarePackageIdentifier */
const struct asn1_template asn1_FirmwarePackageIdentifier[] = {
/* 0 */ { 0, sizeof(FirmwarePackageIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_FirmwarePackageIdentifier_tag__7 }
};

int ASN1CALL
decode_FirmwarePackageIdentifier(const unsigned char *p, size_t len, FirmwarePackageIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_FirmwarePackageIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_FirmwarePackageIdentifier(unsigned char *p, size_t len, const FirmwarePackageIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_FirmwarePackageIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_FirmwarePackageIdentifier(const FirmwarePackageIdentifier *data)
{
    return _asn1_length(asn1_FirmwarePackageIdentifier, data);
}


void ASN1CALL
free_FirmwarePackageIdentifier(FirmwarePackageIdentifier *data)
{
    _asn1_free_top(asn1_FirmwarePackageIdentifier, data);
}


int ASN1CALL
copy_FirmwarePackageIdentifier(const FirmwarePackageIdentifier *from, FirmwarePackageIdentifier *to)
{
    return _asn1_copy_top(asn1_FirmwarePackageIdentifier, from, to);
}


char * ASN1CALL
print_FirmwarePackageIdentifier(const FirmwarePackageIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_FirmwarePackageIdentifier, flags, data);
}

/* template_members: TargetHardwareIdentifiers imp imp */
/* template_members: heim_oid exp exp */
/* generate_template_type: heim_oid_tag__9 */
/* generate_template_type: heim_oid_seofTstruct_0 */
const struct asn1_template asn1_heim_oid_seofTstruct_0[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), 0, asn1_PreferredPackageIdentifier_tag_fwPkgID_2 }
};
/* generate_template_type: TargetHardwareIdentifiers_tag__8 */
const struct asn1_template asn1_TargetHardwareIdentifiers_tag__8[] = {
/* 0 */ { 0, sizeof(heim_oid), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_heim_oid_seofTstruct_0 }
};
/* generate_template_type: TargetHardwareIdentifiers */
const struct asn1_template asn1_TargetHardwareIdentifiers[] = {
/* 0 */ { 0, sizeof(TargetHardwareIdentifiers), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_TargetHardwareIdentifiers_tag__8 }
};

int ASN1CALL
decode_TargetHardwareIdentifiers(const unsigned char *p, size_t len, TargetHardwareIdentifiers *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TargetHardwareIdentifiers, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TargetHardwareIdentifiers(unsigned char *p, size_t len, const TargetHardwareIdentifiers *data, size_t *size)
{
    return _asn1_encode(asn1_TargetHardwareIdentifiers, p, len, data, size);
}


size_t ASN1CALL
length_TargetHardwareIdentifiers(const TargetHardwareIdentifiers *data)
{
    return _asn1_length(asn1_TargetHardwareIdentifiers, data);
}


void ASN1CALL
free_TargetHardwareIdentifiers(TargetHardwareIdentifiers *data)
{
    _asn1_free_top(asn1_TargetHardwareIdentifiers, data);
}


int ASN1CALL
copy_TargetHardwareIdentifiers(const TargetHardwareIdentifiers *from, TargetHardwareIdentifiers *to)
{
    return _asn1_copy_top(asn1_TargetHardwareIdentifiers, from, to);
}


char * ASN1CALL
print_TargetHardwareIdentifiers(const TargetHardwareIdentifiers *data, int flags)
{
    return _asn1_print_top(asn1_TargetHardwareIdentifiers, flags, data);
}

/* template_members: DecryptKeyIdentifier exp exp */
/* generate_template_type: DecryptKeyIdentifier_tag__10 */
/* generate_template_type: DecryptKeyIdentifier */
const struct asn1_template asn1_DecryptKeyIdentifier[] = {
/* 0 */ { 0, sizeof(DecryptKeyIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_FirmwarePkgData_tag__0 }
};

int ASN1CALL
decode_DecryptKeyIdentifier(const unsigned char *p, size_t len, DecryptKeyIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_DecryptKeyIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_DecryptKeyIdentifier(unsigned char *p, size_t len, const DecryptKeyIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_DecryptKeyIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_DecryptKeyIdentifier(const DecryptKeyIdentifier *data)
{
    return _asn1_length(asn1_DecryptKeyIdentifier, data);
}


void ASN1CALL
free_DecryptKeyIdentifier(DecryptKeyIdentifier *data)
{
    _asn1_free_top(asn1_DecryptKeyIdentifier, data);
}


int ASN1CALL
copy_DecryptKeyIdentifier(const DecryptKeyIdentifier *from, DecryptKeyIdentifier *to)
{
    return _asn1_copy_top(asn1_DecryptKeyIdentifier, from, to);
}


char * ASN1CALL
print_DecryptKeyIdentifier(const DecryptKeyIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_DecryptKeyIdentifier, flags, data);
}

/* template_members: ImplementedCryptoAlgorithms imp imp */
/* template_members: heim_oid exp exp */
/* generate_template_type: heim_oid_tag__12 */
/* generate_template_type: heim_oid_seofTstruct_1 */
/* generate_template_type: ImplementedCryptoAlgorithms_tag__11 */
/* generate_template_type: ImplementedCryptoAlgorithms */
const struct asn1_template asn1_ImplementedCryptoAlgorithms[] = {
/* 0 */ { 0, sizeof(ImplementedCryptoAlgorithms), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_TargetHardwareIdentifiers_tag__8 }
};

int ASN1CALL
decode_ImplementedCryptoAlgorithms(const unsigned char *p, size_t len, ImplementedCryptoAlgorithms *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ImplementedCryptoAlgorithms, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ImplementedCryptoAlgorithms(unsigned char *p, size_t len, const ImplementedCryptoAlgorithms *data, size_t *size)
{
    return _asn1_encode(asn1_ImplementedCryptoAlgorithms, p, len, data, size);
}


size_t ASN1CALL
length_ImplementedCryptoAlgorithms(const ImplementedCryptoAlgorithms *data)
{
    return _asn1_length(asn1_ImplementedCryptoAlgorithms, data);
}


void ASN1CALL
free_ImplementedCryptoAlgorithms(ImplementedCryptoAlgorithms *data)
{
    _asn1_free_top(asn1_ImplementedCryptoAlgorithms, data);
}


int ASN1CALL
copy_ImplementedCryptoAlgorithms(const ImplementedCryptoAlgorithms *from, ImplementedCryptoAlgorithms *to)
{
    return _asn1_copy_top(asn1_ImplementedCryptoAlgorithms, from, to);
}


char * ASN1CALL
print_ImplementedCryptoAlgorithms(const ImplementedCryptoAlgorithms *data, int flags)
{
    return _asn1_print_top(asn1_ImplementedCryptoAlgorithms, flags, data);
}

/* template_members: ImplementedCompressAlgorithms imp imp */
/* template_members: heim_oid exp exp */
/* generate_template_type: heim_oid_tag__14 */
/* generate_template_type: heim_oid_seofTstruct_2 */
/* generate_template_type: ImplementedCompressAlgorithms_tag__13 */
/* generate_template_type: ImplementedCompressAlgorithms */
const struct asn1_template asn1_ImplementedCompressAlgorithms[] = {
/* 0 */ { 0, sizeof(ImplementedCompressAlgorithms), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_TargetHardwareIdentifiers_tag__8 }
};

int ASN1CALL
decode_ImplementedCompressAlgorithms(const unsigned char *p, size_t len, ImplementedCompressAlgorithms *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ImplementedCompressAlgorithms, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ImplementedCompressAlgorithms(unsigned char *p, size_t len, const ImplementedCompressAlgorithms *data, size_t *size)
{
    return _asn1_encode(asn1_ImplementedCompressAlgorithms, p, len, data, size);
}


size_t ASN1CALL
length_ImplementedCompressAlgorithms(const ImplementedCompressAlgorithms *data)
{
    return _asn1_length(asn1_ImplementedCompressAlgorithms, data);
}


void ASN1CALL
free_ImplementedCompressAlgorithms(ImplementedCompressAlgorithms *data)
{
    _asn1_free_top(asn1_ImplementedCompressAlgorithms, data);
}


int ASN1CALL
copy_ImplementedCompressAlgorithms(const ImplementedCompressAlgorithms *from, ImplementedCompressAlgorithms *to)
{
    return _asn1_copy_top(asn1_ImplementedCompressAlgorithms, from, to);
}


char * ASN1CALL
print_ImplementedCompressAlgorithms(const ImplementedCompressAlgorithms *data, int flags)
{
    return _asn1_print_top(asn1_ImplementedCompressAlgorithms, flags, data);
}

/* template_members: heim_integer exp exp */
/* generate_template_type: heim_integer_tag__15 */
const struct asn1_template asn1_heim_integer_tag__15[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)0) },
};
/* generate_template_type: HardwareSerialEntry_choice_all */
const struct asn1_template asn1_HardwareSerialEntry_choice_all[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Null), 0, asn1_heim_integer_tag__15 }
};
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag__16 */
/* generate_template_type: HardwareSerialEntry_choice_single */
/* template_members: HardwareSerialEntry_block imp imp */
/* tsequence: members isstruct: 1 */
/* template_members: HardwareSerialEntry_block exp exp */
/* generate_template_type: HardwareSerialEntry_block_tag_low_18 */
/* template_members: HardwareSerialEntry_block exp exp */
/* generate_template_type: HardwareSerialEntry_block_tag_high_19 */
/* generate_template_type: HardwareSerialEntry_block_tag__17 */
const struct asn1_template asn1_HardwareSerialEntry_block_tag__17[] = {
/* 0 */ { 0, sizeof(struct HardwareSerialEntry_block), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct HardwareSerialEntry_block, low), asn1_FirmwarePkgData_tag__0 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct HardwareSerialEntry_block, high), asn1_FirmwarePkgData_tag__0 },
/* 3 */ { A1_OP_NAME, 0, "HardwareSerialEntry_block" },
/* 4 */ { A1_OP_NAME, 0, "low" },
/* 5 */ { A1_OP_NAME, 0, "high" }
};
/* generate_template_type: HardwareSerialEntry_choice_block */
const struct asn1_template asn1_HardwareSerialEntry_choice_block[] = {
/* 0 */ { 0, sizeof(struct HardwareSerialEntry_block), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_HardwareSerialEntry_block_tag__17 }
};
static const struct asn1_template asn1_choice_HardwareSerialEntry_2[] = {
/* 0 */ { 0, offsetof(HardwareSerialEntry, element), ((void *)(uintptr_t)6) },
/* 1 */ { choice_HardwareSerialEntry_all, offsetof(HardwareSerialEntry, u.all), asn1_HardwareSerialEntry_choice_all },
/* 2 */ { choice_HardwareSerialEntry_single, offsetof(HardwareSerialEntry, u.single), asn1_PreferredOrLegacyPackageIdentifier_choice_legacy },
/* 3 */ { choice_HardwareSerialEntry_block, offsetof(HardwareSerialEntry, u.block), asn1_HardwareSerialEntry_choice_block },
/* 4 */ { 0, 0, "all" },
/* 5 */ { 0, 0, "single" },
/* 6 */ { 0, 0, "block" }
};
/* generate_template_type: HardwareSerialEntry */
const struct asn1_template asn1_HardwareSerialEntry[] = {
/* 0 */ { 0, sizeof(HardwareSerialEntry), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_HardwareSerialEntry_2 }
};

int ASN1CALL
decode_HardwareSerialEntry(const unsigned char *p, size_t len, HardwareSerialEntry *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_HardwareSerialEntry, 0|0, p, len, data, size);
}


int ASN1CALL
encode_HardwareSerialEntry(unsigned char *p, size_t len, const HardwareSerialEntry *data, size_t *size)
{
    return _asn1_encode(asn1_HardwareSerialEntry, p, len, data, size);
}


size_t ASN1CALL
length_HardwareSerialEntry(const HardwareSerialEntry *data)
{
    return _asn1_length(asn1_HardwareSerialEntry, data);
}


void ASN1CALL
free_HardwareSerialEntry(HardwareSerialEntry *data)
{
    _asn1_free_top(asn1_HardwareSerialEntry, data);
}


int ASN1CALL
copy_HardwareSerialEntry(const HardwareSerialEntry *from, HardwareSerialEntry *to)
{
    return _asn1_copy_top(asn1_HardwareSerialEntry, from, to);
}


char * ASN1CALL
print_HardwareSerialEntry(const HardwareSerialEntry *data, int flags)
{
    return _asn1_print_top(asn1_HardwareSerialEntry, flags, data);
}

/* template_members: HardwareModules imp imp */
/* tsequence: members isstruct: 1 */
/* template_members: HardwareModules exp exp */
/* generate_template_type: HardwareModules_tag_hwType_21 */
/* template_members: HardwareModules exp imp */
/* generate_template_type: HardwareModules_hwSerialEntries_3 */
const struct asn1_template asn1_HardwareModules_hwSerialEntries_3[] = {
/* 0 */ { 0, sizeof(HardwareSerialEntry), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_HardwareSerialEntry }
};
/* generate_template_type: HardwareModules_tag_hwSerialEntries_22 */
const struct asn1_template asn1_HardwareModules_tag_hwSerialEntries_22[] = {
/* 0 */ { 0, sizeof(struct HardwareModules_hwSerialEntries), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_HardwareModules_hwSerialEntries_3 }
};
/* generate_template_type: HardwareModules_tag__20 */
const struct asn1_template asn1_HardwareModules_tag__20[] = {
/* 0 */ { 0, sizeof(struct HardwareModules), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct HardwareModules, hwType), asn1_PreferredPackageIdentifier_tag_fwPkgID_2 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, offsetof(struct HardwareModules, hwSerialEntries), asn1_HardwareModules_tag_hwSerialEntries_22 },
/* 3 */ { A1_OP_NAME, 0, "HardwareModules" },
/* 4 */ { A1_OP_NAME, 0, "hwType" },
/* 5 */ { A1_OP_NAME, 0, "hwSerialEntries" }
};
/* generate_template_type: HardwareModules */
const struct asn1_template asn1_HardwareModules[] = {
/* 0 */ { 0, sizeof(HardwareModules), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_HardwareModules_tag__20 }
};

int ASN1CALL
decode_HardwareModules(const unsigned char *p, size_t len, HardwareModules *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_HardwareModules, 0|0, p, len, data, size);
}


int ASN1CALL
encode_HardwareModules(unsigned char *p, size_t len, const HardwareModules *data, size_t *size)
{
    return _asn1_encode(asn1_HardwareModules, p, len, data, size);
}


size_t ASN1CALL
length_HardwareModules(const HardwareModules *data)
{
    return _asn1_length(asn1_HardwareModules, data);
}


void ASN1CALL
free_HardwareModules(HardwareModules *data)
{
    _asn1_free_top(asn1_HardwareModules, data);
}


int ASN1CALL
copy_HardwareModules(const HardwareModules *from, HardwareModules *to)
{
    return _asn1_copy_top(asn1_HardwareModules, from, to);
}


char * ASN1CALL
print_HardwareModules(const HardwareModules *data, int flags)
{
    return _asn1_print_top(asn1_HardwareModules, flags, data);
}

/* template_members: heim_oid exp exp */
/* generate_template_type: heim_oid_tag__23 */
/* generate_template_type: CommunityIdentifier_choice_communityOID */
/* generate_template_type: CommunityIdentifier_choice_hwModuleList */
const struct asn1_template asn1_CommunityIdentifier_choice_hwModuleList[] = {
/* 0 */ { 0, sizeof(HardwareModules), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_HardwareModules }
};
static const struct asn1_template asn1_choice_CommunityIdentifier_3[] = {
/* 0 */ { 0, offsetof(CommunityIdentifier, element), ((void *)(uintptr_t)4) },
/* 1 */ { choice_CommunityIdentifier_communityOID, offsetof(CommunityIdentifier, u.communityOID), asn1_heim_oid_seofTstruct_0 },
/* 2 */ { choice_CommunityIdentifier_hwModuleList, offsetof(CommunityIdentifier, u.hwModuleList), asn1_CommunityIdentifier_choice_hwModuleList },
/* 3 */ { 0, 0, "communityOID" },
/* 4 */ { 0, 0, "hwModuleList" }
};
/* generate_template_type: CommunityIdentifier */
const struct asn1_template asn1_CommunityIdentifier[] = {
/* 0 */ { 0, sizeof(CommunityIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_CommunityIdentifier_3 }
};

int ASN1CALL
decode_CommunityIdentifier(const unsigned char *p, size_t len, CommunityIdentifier *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CommunityIdentifier, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CommunityIdentifier(unsigned char *p, size_t len, const CommunityIdentifier *data, size_t *size)
{
    return _asn1_encode(asn1_CommunityIdentifier, p, len, data, size);
}


size_t ASN1CALL
length_CommunityIdentifier(const CommunityIdentifier *data)
{
    return _asn1_length(asn1_CommunityIdentifier, data);
}


void ASN1CALL
free_CommunityIdentifier(CommunityIdentifier *data)
{
    _asn1_free_top(asn1_CommunityIdentifier, data);
}


int ASN1CALL
copy_CommunityIdentifier(const CommunityIdentifier *from, CommunityIdentifier *to)
{
    return _asn1_copy_top(asn1_CommunityIdentifier, from, to);
}


char * ASN1CALL
print_CommunityIdentifier(const CommunityIdentifier *data, int flags)
{
    return _asn1_print_top(asn1_CommunityIdentifier, flags, data);
}

/* template_members: CommunityIdentifiers imp imp */
/* generate_template_type: CommunityIdentifier_seofTstruct_4 */
const struct asn1_template asn1_CommunityIdentifier_seofTstruct_4[] = {
/* 0 */ { 0, sizeof(CommunityIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CommunityIdentifier }
};
/* generate_template_type: CommunityIdentifiers_tag__24 */
const struct asn1_template asn1_CommunityIdentifiers_tag__24[] = {
/* 0 */ { 0, sizeof(CommunityIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_CommunityIdentifier_seofTstruct_4 }
};
/* generate_template_type: CommunityIdentifiers */
const struct asn1_template asn1_CommunityIdentifiers[] = {
/* 0 */ { 0, sizeof(CommunityIdentifiers), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_CommunityIdentifiers_tag__24 }
};

int ASN1CALL
decode_CommunityIdentifiers(const unsigned char *p, size_t len, CommunityIdentifiers *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CommunityIdentifiers, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CommunityIdentifiers(unsigned char *p, size_t len, const CommunityIdentifiers *data, size_t *size)
{
    return _asn1_encode(asn1_CommunityIdentifiers, p, len, data, size);
}


size_t ASN1CALL
length_CommunityIdentifiers(const CommunityIdentifiers *data)
{
    return _asn1_length(asn1_CommunityIdentifiers, data);
}


void ASN1CALL
free_CommunityIdentifiers(CommunityIdentifiers *data)
{
    _asn1_free_top(asn1_CommunityIdentifiers, data);
}


int ASN1CALL
copy_CommunityIdentifiers(const CommunityIdentifiers *from, CommunityIdentifiers *to)
{
    return _asn1_copy_top(asn1_CommunityIdentifiers, from, to);
}


char * ASN1CALL
print_CommunityIdentifiers(const CommunityIdentifiers *data, int flags)
{
    return _asn1_print_top(asn1_CommunityIdentifiers, flags, data);
}

/* template_members: FirmwarePackageInfo imp imp */
/* tsequence: members isstruct: 1 */
/* template_members: FirmwarePackageInfo exp exp */
/* generate_template_type: FirmwarePackageInfo_tag_fwPkgType_26 */
const struct asn1_template asn1_FirmwarePackageInfo_tag_fwPkgType_26[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_INTEGER), 0, NULL }
};
/* template_members: FirmwarePackageInfo exp imp */
/* generate_template_type: FirmwarePackageInfo_dependencies_5 */
const struct asn1_template asn1_FirmwarePackageInfo_dependencies_5[] = {
/* 0 */ { 0, sizeof(PreferredOrLegacyPackageIdentifier), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PreferredOrLegacyPackageIdentifier }
};
/* generate_template_type: FirmwarePackageInfo_tag_dependencies_27 */
const struct asn1_template asn1_FirmwarePackageInfo_tag_dependencies_27[] = {
/* 0 */ { 0, sizeof(struct FirmwarePackageInfo_dependencies), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_FirmwarePackageInfo_dependencies_5 }
};
/* generate_template_type: FirmwarePackageInfo_tag__25 */
const struct asn1_template asn1_FirmwarePackageInfo_tag__25[] = {
/* 0 */ { 0, sizeof(struct FirmwarePackageInfo), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct FirmwarePackageInfo, fwPkgType), asn1_FirmwarePackageInfo_tag_fwPkgType_26 },
/* 2 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct FirmwarePackageInfo, dependencies), asn1_FirmwarePackageInfo_tag_dependencies_27 },
/* 3 */ { A1_OP_NAME, 0, "FirmwarePackageInfo" },
/* 4 */ { A1_OP_NAME, 0, "fwPkgType" },
/* 5 */ { A1_OP_NAME, 0, "dependencies" }
};
/* generate_template_type: FirmwarePackageInfo */
const struct asn1_template asn1_FirmwarePackageInfo[] = {
/* 0 */ { 0, sizeof(FirmwarePackageInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_FirmwarePackageInfo_tag__25 }
};

int ASN1CALL
decode_FirmwarePackageInfo(const unsigned char *p, size_t len, FirmwarePackageInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_FirmwarePackageInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_FirmwarePackageInfo(unsigned char *p, size_t len, const FirmwarePackageInfo *data, size_t *size)
{
    return _asn1_encode(asn1_FirmwarePackageInfo, p, len, data, size);
}


size_t ASN1CALL
length_FirmwarePackageInfo(const FirmwarePackageInfo *data)
{
    return _asn1_length(asn1_FirmwarePackageInfo, data);
}


void ASN1CALL
free_FirmwarePackageInfo(FirmwarePackageInfo *data)
{
    _asn1_free_top(asn1_FirmwarePackageInfo, data);
}


int ASN1CALL
copy_FirmwarePackageInfo(const FirmwarePackageInfo *from, FirmwarePackageInfo *to)
{
    return _asn1_copy_top(asn1_FirmwarePackageInfo, from, to);
}


char * ASN1CALL
print_FirmwarePackageInfo(const FirmwarePackageInfo *data, int flags)
{
    return _asn1_print_top(asn1_FirmwarePackageInfo, flags, data);
}

/* generate_template_type: WrappedFirmwareKey */
const struct asn1_template asn1_WrappedFirmwareKey[] = {
/* 0 */ { 0, sizeof(WrappedFirmwareKey), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE_EXTERN , 0, &asn1_extern_EnvelopedData}
};

int ASN1CALL
decode_WrappedFirmwareKey(const unsigned char *p, size_t len, WrappedFirmwareKey *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_WrappedFirmwareKey, 0|0, p, len, data, size);
}


int ASN1CALL
encode_WrappedFirmwareKey(unsigned char *p, size_t len, const WrappedFirmwareKey *data, size_t *size)
{
    return _asn1_encode(asn1_WrappedFirmwareKey, p, len, data, size);
}


size_t ASN1CALL
length_WrappedFirmwareKey(const WrappedFirmwareKey *data)
{
    return _asn1_length(asn1_WrappedFirmwareKey, data);
}


void ASN1CALL
free_WrappedFirmwareKey(WrappedFirmwareKey *data)
{
    _asn1_free_top(asn1_WrappedFirmwareKey, data);
}


int ASN1CALL
copy_WrappedFirmwareKey(const WrappedFirmwareKey *from, WrappedFirmwareKey *to)
{
    return _asn1_copy_top(asn1_WrappedFirmwareKey, from, to);
}


char * ASN1CALL
print_WrappedFirmwareKey(const WrappedFirmwareKey *data, int flags)
{
    return _asn1_print_top(asn1_WrappedFirmwareKey, flags, data);
}

/* template_members: FWReceiptVersion exp exp */
const struct asn1_template asn1_FWReceiptVersion_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_NAME, 1, "rfc4108-v1" }
};
/* generate_template_type: FWReceiptVersion_tag__28 */
const struct asn1_template asn1_FWReceiptVersion_tag__28[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_FWReceiptVersion_enum_names }
};
/* generate_template_type: FWReceiptVersion */
const struct asn1_template asn1_FWReceiptVersion[] = {
/* 0 */ { 0, sizeof(FWReceiptVersion), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_FWReceiptVersion_tag__28 }
};

int ASN1CALL
decode_FWReceiptVersion(const unsigned char *p, size_t len, FWReceiptVersion *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_FWReceiptVersion, 0|0, p, len, data, size);
}


int ASN1CALL
encode_FWReceiptVersion(unsigned char *p, size_t len, const FWReceiptVersion *data, size_t *size)
{
    return _asn1_encode(asn1_FWReceiptVersion, p, len, data, size);
}


size_t ASN1CALL
length_FWReceiptVersion(const FWReceiptVersion *data)
{
    return _asn1_length(asn1_FWReceiptVersion, data);
}


void ASN1CALL
free_FWReceiptVersion(FWReceiptVersion *data)
{
    _asn1_free_top(asn1_FWReceiptVersion, data);
}


int ASN1CALL
copy_FWReceiptVersion(const FWReceiptVersion *from, FWReceiptVersion *to)
{
    return _asn1_copy_top(asn1_FWReceiptVersion, from, to);
}


char * ASN1CALL
print_FWReceiptVersion(const FWReceiptVersion *data, int flags)
{
    return _asn1_print_top(asn1_FWReceiptVersion, flags, data);
}

/* template_members: FirmwarePackageLoadReceipt imp imp */
/* tsequence: members isstruct: 1 */
/* template_members: FirmwarePackageLoadReceipt exp exp */
/* generate_template_type: FirmwarePackageLoadReceipt_tag_hwType_30 */
/* template_members: FirmwarePackageLoadReceipt exp exp */
/* generate_template_type: FirmwarePackageLoadReceipt_tag_hwSerialNum_31 */
/* template_members: FirmwarePackageLoadReceipt exp exp */
/* generate_template_type: FirmwarePackageLoadReceipt_tag_trustAnchorKeyID_32 */
/* template_members: FirmwarePackageLoadReceipt exp imp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_decryptKeyID_34 */
/* generate_template_type: FirmwarePackageLoadReceipt_tag_decryptKeyID_33 */
/* generate_template_type: FirmwarePackageLoadReceipt_tag__29 */
const struct asn1_template asn1_FirmwarePackageLoadReceipt_tag__29[] = {
/* 0 */ { 0, sizeof(struct FirmwarePackageLoadReceipt), ((void *)(uintptr_t)14) },
/* 1 */ { A1_OP_DEFVAL|A1_DV_INTEGER32, ~0, (void *)(uintptr_t)1 },
/* 2 */ { A1_OP_TYPE |A1_FLAG_DEFAULT, offsetof(struct FirmwarePackageLoadReceipt, version), asn1_FWReceiptVersion },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct FirmwarePackageLoadReceipt, hwType), asn1_PreferredPackageIdentifier_tag_fwPkgID_2 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct FirmwarePackageLoadReceipt, hwSerialNum), asn1_FirmwarePkgData_tag__0 },
/* 5 */ { A1_OP_TYPE , offsetof(struct FirmwarePackageLoadReceipt, fwPkgName), asn1_PreferredOrLegacyPackageIdentifier },
/* 6 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString)|A1_FLAG_OPTIONAL, offsetof(struct FirmwarePackageLoadReceipt, trustAnchorKeyID), asn1_FirmwarePkgData_tag__0 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,PRIM,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct FirmwarePackageLoadReceipt, decryptKeyID), asn1_PreferredOrLegacyPackageIdentifier_choice_legacy },
/* 8 */ { A1_OP_NAME, 0, "FirmwarePackageLoadReceipt" },
/* 9 */ { A1_OP_NAME, 0, "version" },
/* 10 */ { A1_OP_NAME, 0, "hwType" },
/* 11 */ { A1_OP_NAME, 0, "hwSerialNum" },
/* 12 */ { A1_OP_NAME, 0, "fwPkgName" },
/* 13 */ { A1_OP_NAME, 0, "trustAnchorKeyID" },
/* 14 */ { A1_OP_NAME, 0, "decryptKeyID" }
};
/* generate_template_type: FirmwarePackageLoadReceipt */
const struct asn1_template asn1_FirmwarePackageLoadReceipt[] = {
/* 0 */ { 0, sizeof(FirmwarePackageLoadReceipt), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_FirmwarePackageLoadReceipt_tag__29 }
};

int ASN1CALL
decode_FirmwarePackageLoadReceipt(const unsigned char *p, size_t len, FirmwarePackageLoadReceipt *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_FirmwarePackageLoadReceipt, 0|0, p, len, data, size);
}


int ASN1CALL
encode_FirmwarePackageLoadReceipt(unsigned char *p, size_t len, const FirmwarePackageLoadReceipt *data, size_t *size)
{
    return _asn1_encode(asn1_FirmwarePackageLoadReceipt, p, len, data, size);
}


size_t ASN1CALL
length_FirmwarePackageLoadReceipt(const FirmwarePackageLoadReceipt *data)
{
    return _asn1_length(asn1_FirmwarePackageLoadReceipt, data);
}


void ASN1CALL
free_FirmwarePackageLoadReceipt(FirmwarePackageLoadReceipt *data)
{
    _asn1_free_top(asn1_FirmwarePackageLoadReceipt, data);
}


int ASN1CALL
copy_FirmwarePackageLoadReceipt(const FirmwarePackageLoadReceipt *from, FirmwarePackageLoadReceipt *to)
{
    return _asn1_copy_top(asn1_FirmwarePackageLoadReceipt, from, to);
}


char * ASN1CALL
print_FirmwarePackageLoadReceipt(const FirmwarePackageLoadReceipt *data, int flags)
{
    return _asn1_print_top(asn1_FirmwarePackageLoadReceipt, flags, data);
}

/* generate_template_type: FWErrorVersion */
const struct asn1_template asn1_FWErrorVersion[] = {
/* 0 */ { 0, sizeof(FWErrorVersion), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_FWReceiptVersion }
};

int ASN1CALL
decode_FWErrorVersion(const unsigned char *p, size_t len, FWErrorVersion *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_FWErrorVersion, 0|0, p, len, data, size);
}


int ASN1CALL
encode_FWErrorVersion(unsigned char *p, size_t len, const FWErrorVersion *data, size_t *size)
{
    return _asn1_encode(asn1_FWErrorVersion, p, len, data, size);
}


size_t ASN1CALL
length_FWErrorVersion(const FWErrorVersion *data)
{
    return _asn1_length(asn1_FWErrorVersion, data);
}


void ASN1CALL
free_FWErrorVersion(FWErrorVersion *data)
{
    _asn1_free_top(asn1_FWErrorVersion, data);
}


int ASN1CALL
copy_FWErrorVersion(const FWErrorVersion *from, FWErrorVersion *to)
{
    return _asn1_copy_top(asn1_FWErrorVersion, from, to);
}


char * ASN1CALL
print_FWErrorVersion(const FWErrorVersion *data, int flags)
{
    return _asn1_print_top(asn1_FWErrorVersion, flags, data);
}

/* template_members: FirmwarePackageLoadErrorCode exp exp */
const struct asn1_template asn1_FirmwarePackageLoadErrorCode_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)37) },
/* 1 */ { A1_OP_NAME, 1, "decodeFailure" },
/* 2 */ { A1_OP_NAME, 2, "badContentInfo" },
/* 3 */ { A1_OP_NAME, 3, "badSignedData" },
/* 4 */ { A1_OP_NAME, 4, "badEncapContent" },
/* 5 */ { A1_OP_NAME, 5, "badCertificate" },
/* 6 */ { A1_OP_NAME, 6, "badSignerInfo" },
/* 7 */ { A1_OP_NAME, 7, "badSignedAttrs" },
/* 8 */ { A1_OP_NAME, 8, "badUnsignedAttrs" },
/* 9 */ { A1_OP_NAME, 9, "missingContent" },
/* 10 */ { A1_OP_NAME, 10, "noTrustAnchor" },
/* 11 */ { A1_OP_NAME, 11, "notAuthorized" },
/* 12 */ { A1_OP_NAME, 12, "badDigestAlgorithm" },
/* 13 */ { A1_OP_NAME, 13, "badSignatureAlgorithm" },
/* 14 */ { A1_OP_NAME, 14, "unsupportedKeySize" },
/* 15 */ { A1_OP_NAME, 15, "signatureFailure" },
/* 16 */ { A1_OP_NAME, 16, "contentTypeMismatch" },
/* 17 */ { A1_OP_NAME, 17, "badEncryptedData" },
/* 18 */ { A1_OP_NAME, 18, "unprotectedAttrsPresent" },
/* 19 */ { A1_OP_NAME, 19, "badEncryptContent" },
/* 20 */ { A1_OP_NAME, 20, "badEncryptAlgorithm" },
/* 21 */ { A1_OP_NAME, 21, "missingCiphertext" },
/* 22 */ { A1_OP_NAME, 22, "noDecryptKey" },
/* 23 */ { A1_OP_NAME, 23, "decryptFailure" },
/* 24 */ { A1_OP_NAME, 24, "badCompressAlgorithm" },
/* 25 */ { A1_OP_NAME, 25, "missingCompressedContent" },
/* 26 */ { A1_OP_NAME, 26, "decompressFailure" },
/* 27 */ { A1_OP_NAME, 27, "wrongHardware" },
/* 28 */ { A1_OP_NAME, 28, "stalePackage" },
/* 29 */ { A1_OP_NAME, 29, "notInCommunity" },
/* 30 */ { A1_OP_NAME, 30, "unsupportedPackageType" },
/* 31 */ { A1_OP_NAME, 31, "missingDependency" },
/* 32 */ { A1_OP_NAME, 32, "wrongDependencyVersion" },
/* 33 */ { A1_OP_NAME, 33, "insufficientMemory" },
/* 34 */ { A1_OP_NAME, 34, "badFirmware" },
/* 35 */ { A1_OP_NAME, 35, "unsupportedParameters" },
/* 36 */ { A1_OP_NAME, 36, "breaksDependency" },
/* 37 */ { A1_OP_NAME, 99, "otherError" }
};
/* generate_template_type: FirmwarePackageLoadErrorCode_tag__35 */
const struct asn1_template asn1_FirmwarePackageLoadErrorCode_tag__35[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_FirmwarePackageLoadErrorCode_enum_names }
};
/* generate_template_type: FirmwarePackageLoadErrorCode */
const struct asn1_template asn1_FirmwarePackageLoadErrorCode[] = {
/* 0 */ { 0, sizeof(FirmwarePackageLoadErrorCode), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Enumerated), 0, asn1_FirmwarePackageLoadErrorCode_tag__35 }
};

int ASN1CALL
decode_FirmwarePackageLoadErrorCode(const unsigned char *p, size_t len, FirmwarePackageLoadErrorCode *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_FirmwarePackageLoadErrorCode, 0|0, p, len, data, size);
}


int ASN1CALL
encode_FirmwarePackageLoadErrorCode(unsigned char *p, size_t len, const FirmwarePackageLoadErrorCode *data, size_t *size)
{
    return _asn1_encode(asn1_FirmwarePackageLoadErrorCode, p, len, data, size);
}


size_t ASN1CALL
length_FirmwarePackageLoadErrorCode(const FirmwarePackageLoadErrorCode *data)
{
    return _asn1_length(asn1_FirmwarePackageLoadErrorCode, data);
}


void ASN1CALL
free_FirmwarePackageLoadErrorCode(FirmwarePackageLoadErrorCode *data)
{
    _asn1_free_top(asn1_FirmwarePackageLoadErrorCode, data);
}


int ASN1CALL
copy_FirmwarePackageLoadErrorCode(const FirmwarePackageLoadErrorCode *from, FirmwarePackageLoadErrorCode *to)
{
    return _asn1_copy_top(asn1_FirmwarePackageLoadErrorCode, from, to);
}


char * ASN1CALL
print_FirmwarePackageLoadErrorCode(const FirmwarePackageLoadErrorCode *data, int flags)
{
    return _asn1_print_top(asn1_FirmwarePackageLoadErrorCode, flags, data);
}

/* template_members: VendorLoadErrorCode exp exp */
/* generate_template_type: VendorLoadErrorCode_tag__36 */
/* generate_template_type: VendorLoadErrorCode */
const struct asn1_template asn1_VendorLoadErrorCode[] = {
/* 0 */ { 0, sizeof(VendorLoadErrorCode), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_FirmwarePackageInfo_tag_fwPkgType_26 }
};

int ASN1CALL
decode_VendorLoadErrorCode(const unsigned char *p, size_t len, VendorLoadErrorCode *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_VendorLoadErrorCode, 0|0, p, len, data, size);
}


int ASN1CALL
encode_VendorLoadErrorCode(unsigned char *p, size_t len, const VendorLoadErrorCode *data, size_t *size)
{
    return _asn1_encode(asn1_VendorLoadErrorCode, p, len, data, size);
}


size_t ASN1CALL
length_VendorLoadErrorCode(const VendorLoadErrorCode *data)
{
    return _asn1_length(asn1_VendorLoadErrorCode, data);
}


void ASN1CALL
free_VendorLoadErrorCode(VendorLoadErrorCode *data)
{
    _asn1_free_top(asn1_VendorLoadErrorCode, data);
}


int ASN1CALL
copy_VendorLoadErrorCode(const VendorLoadErrorCode *from, VendorLoadErrorCode *to)
{
    return _asn1_copy_top(asn1_VendorLoadErrorCode, from, to);
}


char * ASN1CALL
print_VendorLoadErrorCode(const VendorLoadErrorCode *data, int flags)
{
    return _asn1_print_top(asn1_VendorLoadErrorCode, flags, data);
}

/* template_members: CurrentFWConfig imp imp */
/* tsequence: members isstruct: 1 */
/* template_members: CurrentFWConfig exp exp */
/* generate_template_type: CurrentFWConfig_tag_fwPkgType_38 */
/* generate_template_type: CurrentFWConfig_tag__37 */
const struct asn1_template asn1_CurrentFWConfig_tag__37[] = {
/* 0 */ { 0, sizeof(struct CurrentFWConfig), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer)|A1_FLAG_OPTIONAL, offsetof(struct CurrentFWConfig, fwPkgType), asn1_FirmwarePackageInfo_tag_fwPkgType_26 },
/* 2 */ { A1_OP_TYPE , offsetof(struct CurrentFWConfig, fwPkgName), asn1_PreferredOrLegacyPackageIdentifier },
/* 3 */ { A1_OP_NAME, 0, "CurrentFWConfig" },
/* 4 */ { A1_OP_NAME, 0, "fwPkgType" },
/* 5 */ { A1_OP_NAME, 0, "fwPkgName" }
};
/* generate_template_type: CurrentFWConfig */
const struct asn1_template asn1_CurrentFWConfig[] = {
/* 0 */ { 0, sizeof(CurrentFWConfig), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_CurrentFWConfig_tag__37 }
};

int ASN1CALL
decode_CurrentFWConfig(const unsigned char *p, size_t len, CurrentFWConfig *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CurrentFWConfig, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CurrentFWConfig(unsigned char *p, size_t len, const CurrentFWConfig *data, size_t *size)
{
    return _asn1_encode(asn1_CurrentFWConfig, p, len, data, size);
}


size_t ASN1CALL
length_CurrentFWConfig(const CurrentFWConfig *data)
{
    return _asn1_length(asn1_CurrentFWConfig, data);
}


void ASN1CALL
free_CurrentFWConfig(CurrentFWConfig *data)
{
    _asn1_free_top(asn1_CurrentFWConfig, data);
}


int ASN1CALL
copy_CurrentFWConfig(const CurrentFWConfig *from, CurrentFWConfig *to)
{
    return _asn1_copy_top(asn1_CurrentFWConfig, from, to);
}


char * ASN1CALL
print_CurrentFWConfig(const CurrentFWConfig *data, int flags)
{
    return _asn1_print_top(asn1_CurrentFWConfig, flags, data);
}

/* template_members: FirmwarePackageLoadError imp imp */
/* tsequence: members isstruct: 1 */
/* template_members: FirmwarePackageLoadError exp exp */
/* generate_template_type: FirmwarePackageLoadError_tag_hwType_40 */
/* template_members: FirmwarePackageLoadError exp exp */
/* generate_template_type: FirmwarePackageLoadError_tag_hwSerialNum_41 */
/* template_members: FirmwarePackageLoadError exp imp */
/* template_members: FirmwarePackageLoadError imp imp */
/* generate_template_type: FirmwarePackageLoadError_config_6 */
const struct asn1_template asn1_FirmwarePackageLoadError_config_6[] = {
/* 0 */ { 0, sizeof(CurrentFWConfig), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CurrentFWConfig }
};
/* generate_template_type: FirmwarePackageLoadError_tag_config_43 */
const struct asn1_template asn1_FirmwarePackageLoadError_tag_config_43[] = {
/* 0 */ { 0, sizeof(struct FirmwarePackageLoadError_config), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_FirmwarePackageLoadError_config_6 }
};
/* generate_template_type: FirmwarePackageLoadError_tag_config_42 */
const struct asn1_template asn1_FirmwarePackageLoadError_tag_config_42[] = {
/* 0 */ { 0, sizeof(struct FirmwarePackageLoadError_config), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_FirmwarePackageLoadError_tag_config_43 }
};
/* generate_template_type: FirmwarePackageLoadError_tag__39 */
const struct asn1_template asn1_FirmwarePackageLoadError_tag__39[] = {
/* 0 */ { 0, sizeof(struct FirmwarePackageLoadError), ((void *)(uintptr_t)16) },
/* 1 */ { A1_OP_DEFVAL|A1_DV_INTEGER32, ~0, (void *)(uintptr_t)1 },
/* 2 */ { A1_OP_TYPE |A1_FLAG_DEFAULT, offsetof(struct FirmwarePackageLoadError, version), asn1_FWErrorVersion },
/* 3 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OID), offsetof(struct FirmwarePackageLoadError, hwType), asn1_PreferredPackageIdentifier_tag_fwPkgID_2 },
/* 4 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), offsetof(struct FirmwarePackageLoadError, hwSerialNum), asn1_FirmwarePkgData_tag__0 },
/* 5 */ { A1_OP_TYPE , offsetof(struct FirmwarePackageLoadError, errorCode), asn1_FirmwarePackageLoadErrorCode },
/* 6 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct FirmwarePackageLoadError, vendorErrorCode), asn1_VendorLoadErrorCode },
/* 7 */ { A1_OP_TYPE |A1_FLAG_OPTIONAL, offsetof(struct FirmwarePackageLoadError, fwPkgName), asn1_PreferredOrLegacyPackageIdentifier },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL|A1_FLAG_IMPLICIT, offsetof(struct FirmwarePackageLoadError, config), asn1_FirmwarePackageLoadError_tag_config_42 },
/* 9 */ { A1_OP_NAME, 0, "FirmwarePackageLoadError" },
/* 10 */ { A1_OP_NAME, 0, "version" },
/* 11 */ { A1_OP_NAME, 0, "hwType" },
/* 12 */ { A1_OP_NAME, 0, "hwSerialNum" },
/* 13 */ { A1_OP_NAME, 0, "errorCode" },
/* 14 */ { A1_OP_NAME, 0, "vendorErrorCode" },
/* 15 */ { A1_OP_NAME, 0, "fwPkgName" },
/* 16 */ { A1_OP_NAME, 0, "config" }
};
/* generate_template_type: FirmwarePackageLoadError */
const struct asn1_template asn1_FirmwarePackageLoadError[] = {
/* 0 */ { 0, sizeof(FirmwarePackageLoadError), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence)|A1_FLAG_IMPLICIT, 0, asn1_FirmwarePackageLoadError_tag__39 }
};

int ASN1CALL
decode_FirmwarePackageLoadError(const unsigned char *p, size_t len, FirmwarePackageLoadError *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_FirmwarePackageLoadError, 0|0, p, len, data, size);
}


int ASN1CALL
encode_FirmwarePackageLoadError(unsigned char *p, size_t len, const FirmwarePackageLoadError *data, size_t *size)
{
    return _asn1_encode(asn1_FirmwarePackageLoadError, p, len, data, size);
}


size_t ASN1CALL
length_FirmwarePackageLoadError(const FirmwarePackageLoadError *data)
{
    return _asn1_length(asn1_FirmwarePackageLoadError, data);
}


void ASN1CALL
free_FirmwarePackageLoadError(FirmwarePackageLoadError *data)
{
    _asn1_free_top(asn1_FirmwarePackageLoadError, data);
}


int ASN1CALL
copy_FirmwarePackageLoadError(const FirmwarePackageLoadError *from, FirmwarePackageLoadError *to)
{
    return _asn1_copy_top(asn1_FirmwarePackageLoadError, from, to);
}


char * ASN1CALL
print_FirmwarePackageLoadError(const FirmwarePackageLoadError *data, int flags)
{
    return _asn1_print_top(asn1_FirmwarePackageLoadError, flags, data);
}

