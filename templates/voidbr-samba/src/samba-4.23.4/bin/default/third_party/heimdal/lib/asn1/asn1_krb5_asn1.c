/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/krb5.asn1 */
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
#include "krb5_asn1.h"
#include "krb5_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

extern const struct asn1_template asn1_NAME_TYPE[];
extern const struct asn1_template asn1_NAME_TYPE[];
extern const struct asn1_template asn1_MESSAGE_TYPE[];
extern const struct asn1_template asn1_MESSAGE_TYPE[];
extern const struct asn1_template asn1_PADATA_TYPE[];
extern const struct asn1_template asn1_PADATA_TYPE[];
extern const struct asn1_template asn1_AUTHDATA_TYPE[];
extern const struct asn1_template asn1_AUTHDATA_TYPE[];
extern const struct asn1_template asn1_CKSUMTYPE[];
extern const struct asn1_template asn1_CKSUMTYPE[];
extern const struct asn1_template asn1_ENCTYPE[];
extern const struct asn1_template asn1_ENCTYPE[];
extern const struct asn1_template asn1_Krb5UInt32[];
extern const struct asn1_template asn1_Krb5UInt32[];
extern const struct asn1_template asn1_Krb5Int32[];
extern const struct asn1_template asn1_Krb5Int32[];
extern const struct asn1_template asn1_KerberosString[];
extern const struct asn1_template asn1_KerberosString[];
extern const struct asn1_template asn1_Realm[];
extern const struct asn1_template asn1_Realm[];
extern const struct asn1_template asn1_PrincipalName[];
extern const struct asn1_template asn1_HostAddress[];
extern const struct asn1_template asn1_HostAddresses[];
extern const struct asn1_template asn1_KerberosTime[];
extern const struct asn1_template asn1_KerberosTime[];
extern const struct asn1_template asn1_AuthorizationDataElement[];
extern const struct asn1_template asn1_AuthorizationData[];
extern const struct asn1_template asn1_APOptions[];
extern const struct asn1_template asn1_APOptions[];
extern const struct asn1_template asn1_TicketFlags[];
extern const struct asn1_template asn1_TicketFlags[];
extern const struct asn1_template asn1_KDCOptions[];
extern const struct asn1_template asn1_KDCOptions[];
extern const struct asn1_template asn1_LR_TYPE[];
extern const struct asn1_template asn1_LR_TYPE[];
extern const struct asn1_template asn1_LastReq[];
extern const struct asn1_template asn1_EncryptedData[];
extern const struct asn1_template asn1_EncryptionKey[];
extern const struct asn1_template asn1_TransitedEncoding[];
extern const struct asn1_template asn1_Ticket[];
extern const struct asn1_template asn1_EncTicketPart[];
extern const struct asn1_template asn1_Checksum[];
extern const struct asn1_template asn1_PrincipalNameAttrSrc[];
extern const struct asn1_template asn1_PrincipalNameAttrs[];
extern const struct asn1_template asn1_CompositePrincipal[];
extern const struct asn1_template asn1_Principal[];
extern const struct asn1_template asn1_Principals[];
extern const struct asn1_template asn1_Authenticator[];
extern const struct asn1_template asn1_PA_DATA[];
extern const struct asn1_template asn1_ETYPE_INFO_ENTRY[];
extern const struct asn1_template asn1_ETYPE_INFO[];
extern const struct asn1_template asn1_ETYPE_INFO2_ENTRY[];
extern const struct asn1_template asn1_ETYPE_INFO2[];
extern const struct asn1_template asn1_METHOD_DATA[];
extern const struct asn1_template asn1_TypedData[];
extern const struct asn1_template asn1_TYPED_DATA[];
extern const struct asn1_template asn1_KDC_REQ_BODY[];
extern const struct asn1_template asn1_KDC_REQ[];
extern const struct asn1_template asn1_AS_REQ[];
extern const struct asn1_template asn1_AS_REQ[];
extern const struct asn1_template asn1_TGS_REQ[];
extern const struct asn1_template asn1_TGS_REQ[];
extern const struct asn1_template asn1_PA_ENC_TS_ENC[];
extern const struct asn1_template asn1_PA_PAC_REQUEST[];
extern const struct asn1_template asn1_KERB_ERROR_DATA[];
extern const struct asn1_template asn1_KerbErrorDataType[];
extern const struct asn1_template asn1_KerbErrorDataType[];
extern const struct asn1_template asn1_PAC_OPTIONS_FLAGS[];
extern const struct asn1_template asn1_PAC_OPTIONS_FLAGS[];
extern const struct asn1_template asn1_PA_PAC_OPTIONS[];
extern const struct asn1_template asn1_KERB_AD_RESTRICTION_ENTRY[];
extern const struct asn1_template asn1_PA_KERB_KEY_LIST_REQ[];
extern const struct asn1_template asn1_PA_KERB_KEY_LIST_REP[];
extern const struct asn1_template asn1_PROV_SRV_LOCATION[];
extern const struct asn1_template asn1_PROV_SRV_LOCATION[];
extern const struct asn1_template asn1_KDC_REP[];
extern const struct asn1_template asn1_AS_REP[];
extern const struct asn1_template asn1_AS_REP[];
extern const struct asn1_template asn1_TGS_REP[];
extern const struct asn1_template asn1_TGS_REP[];
extern const struct asn1_template asn1_EncKDCRepPart[];
extern const struct asn1_template asn1_EncASRepPart[];
extern const struct asn1_template asn1_EncASRepPart[];
extern const struct asn1_template asn1_EncTGSRepPart[];
extern const struct asn1_template asn1_EncTGSRepPart[];
extern const struct asn1_template asn1_AP_REQ[];
extern const struct asn1_template asn1_AP_REP[];
extern const struct asn1_template asn1_EncAPRepPart[];
extern const struct asn1_template asn1_KRB_SAFE_BODY[];
extern const struct asn1_template asn1_KRB_SAFE[];
extern const struct asn1_template asn1_KRB_PRIV[];
extern const struct asn1_template asn1_EncKrbPrivPart[];
extern const struct asn1_template asn1_KRB_CRED[];
extern const struct asn1_template asn1_KrbCredInfo[];
extern const struct asn1_template asn1_EncKrbCredPart[];
extern const struct asn1_template asn1_KRB_ERROR[];
extern const struct asn1_template asn1_ChangePasswdDataMS[];
extern const struct asn1_template asn1_EtypeList[];
extern const struct asn1_template asn1_AD_IF_RELEVANT[];
extern const struct asn1_template asn1_AD_IF_RELEVANT[];
extern const struct asn1_template asn1_AD_KDCIssued[];
extern const struct asn1_template asn1_AD_AND_OR[];
extern const struct asn1_template asn1_AD_MANDATORY_FOR_KDC[];
extern const struct asn1_template asn1_AD_MANDATORY_FOR_KDC[];
extern const struct asn1_template asn1_PA_SAM_TYPE[];
extern const struct asn1_template asn1_PA_SAM_TYPE[];
extern const struct asn1_template asn1_PA_SAM_REDIRECT[];
extern const struct asn1_template asn1_PA_SAM_REDIRECT[];
extern const struct asn1_template asn1_SAMFlags[];
extern const struct asn1_template asn1_SAMFlags[];
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY[];
extern const struct asn1_template asn1_PA_SAM_CHALLENGE_2[];
extern const struct asn1_template asn1_PA_SAM_RESPONSE_2[];
extern const struct asn1_template asn1_PA_ENC_SAM_RESPONSE_ENC[];
extern const struct asn1_template asn1_PA_S4U2Self[];
extern const struct asn1_template asn1_PA_S4U_X509_USER[];
extern const struct asn1_template asn1_S4UUserID[];
extern const struct asn1_template asn1_AD_LoginAlias[];
extern const struct asn1_template asn1_PA_SvrReferralData[];
extern const struct asn1_template asn1_PA_SERVER_REFERRAL_DATA[];
extern const struct asn1_template asn1_PA_SERVER_REFERRAL_DATA[];
extern const struct asn1_template asn1_PA_ServerReferralData[];
extern const struct asn1_template asn1_FastOptions[];
extern const struct asn1_template asn1_FastOptions[];
extern const struct asn1_template asn1_KrbFastReq[];
extern const struct asn1_template asn1_KrbFastArmor[];
extern const struct asn1_template asn1_KrbFastArmoredReq[];
extern const struct asn1_template asn1_PA_FX_FAST_REQUEST[];
extern const struct asn1_template asn1_KrbFastFinished[];
extern const struct asn1_template asn1_KrbFastResponse[];
extern const struct asn1_template asn1_KrbFastArmoredRep[];
extern const struct asn1_template asn1_PA_FX_FAST_REPLY[];
extern const struct asn1_template asn1_KDCFastFlags[];
extern const struct asn1_template asn1_KDCFastFlags[];
extern const struct asn1_template asn1_KDCFastState[];
extern const struct asn1_template asn1_KDCFastCookie[];
extern const struct asn1_template asn1_KDC_PROXY_MESSAGE[];
extern const struct asn1_template asn1_KERB_TIMES[];
extern const struct asn1_template asn1_KERB_CRED[];
extern const struct asn1_template asn1_KERB_TGS_REQ_IN[];
extern const struct asn1_template asn1_KERB_TGS_REQ_OUT[];
extern const struct asn1_template asn1_KERB_TGS_REP_IN[];
extern const struct asn1_template asn1_KERB_TGS_REP_OUT[];
extern const struct asn1_template asn1_KERB_ARMOR_SERVICE_REPLY[];
/* template_members: NAME_TYPE exp exp */
const struct asn1_template asn1_NAME_TYPE_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)19) },
/* 1 */ { A1_OP_NAME, 0, "KRB5_NT_UNKNOWN" },
/* 2 */ { A1_OP_NAME, 1, "KRB5_NT_PRINCIPAL" },
/* 3 */ { A1_OP_NAME, 2, "KRB5_NT_SRV_INST" },
/* 4 */ { A1_OP_NAME, 3, "KRB5_NT_SRV_HST" },
/* 5 */ { A1_OP_NAME, 4, "KRB5_NT_SRV_XHST" },
/* 6 */ { A1_OP_NAME, 5, "KRB5_NT_UID" },
/* 7 */ { A1_OP_NAME, 6, "KRB5_NT_X500_PRINCIPAL" },
/* 8 */ { A1_OP_NAME, 7, "KRB5_NT_SMTP_NAME" },
/* 9 */ { A1_OP_NAME, 10, "KRB5_NT_ENTERPRISE_PRINCIPAL" },
/* 10 */ { A1_OP_NAME, 11, "KRB5_NT_WELLKNOWN" },
/* 11 */ { A1_OP_NAME, 12, "KRB5_NT_SRV_HST_DOMAIN" },
/* 12 */ { A1_OP_NAME, -130, "KRB5_NT_ENT_PRINCIPAL_AND_ID" },
/* 13 */ { A1_OP_NAME, -128, "KRB5_NT_MS_PRINCIPAL" },
/* 14 */ { A1_OP_NAME, -129, "KRB5_NT_MS_PRINCIPAL_AND_ID" },
/* 15 */ { A1_OP_NAME, -1200, "KRB5_NT_NTLM" },
/* 16 */ { A1_OP_NAME, -1201, "KRB5_NT_X509_GENERAL_NAME" },
/* 17 */ { A1_OP_NAME, -1202, "KRB5_NT_GSS_HOSTBASED_SERVICE" },
/* 18 */ { A1_OP_NAME, -1203, "KRB5_NT_CACHE_UUID" },
/* 19 */ { A1_OP_NAME, -195894762, "KRB5_NT_SRV_HST_NEEDS_CANON" }
};
/* generate_template_type: NAME_TYPE_tag__0 */
const struct asn1_template asn1_NAME_TYPE_tag__0[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_NAME_TYPE_enum_names }
};
/* generate_template_type: NAME_TYPE */
const struct asn1_template asn1_NAME_TYPE[] = {
/* 0 */ { 0, sizeof(NAME_TYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_NAME_TYPE_tag__0 }
};

int ASN1CALL
decode_NAME_TYPE(const unsigned char *p, size_t len, NAME_TYPE *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_NAME_TYPE, 0|0, p, len, data, size);
}


int ASN1CALL
encode_NAME_TYPE(unsigned char *p, size_t len, const NAME_TYPE *data, size_t *size)
{
    return _asn1_encode(asn1_NAME_TYPE, p, len, data, size);
}


size_t ASN1CALL
length_NAME_TYPE(const NAME_TYPE *data)
{
    return _asn1_length(asn1_NAME_TYPE, data);
}


void ASN1CALL
free_NAME_TYPE(NAME_TYPE *data)
{
    _asn1_free_top(asn1_NAME_TYPE, data);
}


int ASN1CALL
copy_NAME_TYPE(const NAME_TYPE *from, NAME_TYPE *to)
{
    return _asn1_copy_top(asn1_NAME_TYPE, from, to);
}


char * ASN1CALL
print_NAME_TYPE(const NAME_TYPE *data, int flags)
{
    return _asn1_print_top(asn1_NAME_TYPE, flags, data);
}

/* template_members: MESSAGE_TYPE exp exp */
const struct asn1_template asn1_MESSAGE_TYPE_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)10) },
/* 1 */ { A1_OP_NAME, 10, "krb-as-req" },
/* 2 */ { A1_OP_NAME, 11, "krb-as-rep" },
/* 3 */ { A1_OP_NAME, 12, "krb-tgs-req" },
/* 4 */ { A1_OP_NAME, 13, "krb-tgs-rep" },
/* 5 */ { A1_OP_NAME, 14, "krb-ap-req" },
/* 6 */ { A1_OP_NAME, 15, "krb-ap-rep" },
/* 7 */ { A1_OP_NAME, 20, "krb-safe" },
/* 8 */ { A1_OP_NAME, 21, "krb-priv" },
/* 9 */ { A1_OP_NAME, 22, "krb-cred" },
/* 10 */ { A1_OP_NAME, 30, "krb-error" }
};
/* generate_template_type: MESSAGE_TYPE_tag__1 */
const struct asn1_template asn1_MESSAGE_TYPE_tag__1[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_MESSAGE_TYPE_enum_names }
};
/* generate_template_type: MESSAGE_TYPE */
const struct asn1_template asn1_MESSAGE_TYPE[] = {
/* 0 */ { 0, sizeof(MESSAGE_TYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_MESSAGE_TYPE_tag__1 }
};

int ASN1CALL
decode_MESSAGE_TYPE(const unsigned char *p, size_t len, MESSAGE_TYPE *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_MESSAGE_TYPE, 0|0, p, len, data, size);
}


int ASN1CALL
encode_MESSAGE_TYPE(unsigned char *p, size_t len, const MESSAGE_TYPE *data, size_t *size)
{
    return _asn1_encode(asn1_MESSAGE_TYPE, p, len, data, size);
}


size_t ASN1CALL
length_MESSAGE_TYPE(const MESSAGE_TYPE *data)
{
    return _asn1_length(asn1_MESSAGE_TYPE, data);
}


void ASN1CALL
free_MESSAGE_TYPE(MESSAGE_TYPE *data)
{
    _asn1_free_top(asn1_MESSAGE_TYPE, data);
}


int ASN1CALL
copy_MESSAGE_TYPE(const MESSAGE_TYPE *from, MESSAGE_TYPE *to)
{
    return _asn1_copy_top(asn1_MESSAGE_TYPE, from, to);
}


char * ASN1CALL
print_MESSAGE_TYPE(const MESSAGE_TYPE *data, int flags)
{
    return _asn1_print_top(asn1_MESSAGE_TYPE, flags, data);
}

/* template_members: PADATA_TYPE exp exp */
const struct asn1_template asn1_PADATA_TYPE_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)65) },
/* 1 */ { A1_OP_NAME, 0, "KRB5-PADATA-NONE" },
/* 2 */ { A1_OP_NAME, 1, "KRB5-PADATA-TGS-REQ" },
/* 3 */ { A1_OP_NAME, 1, "KRB5-PADATA-AP-REQ" },
/* 4 */ { A1_OP_NAME, 2, "KRB5-PADATA-ENC-TIMESTAMP" },
/* 5 */ { A1_OP_NAME, 3, "KRB5-PADATA-PW-SALT" },
/* 6 */ { A1_OP_NAME, 5, "KRB5-PADATA-ENC-UNIX-TIME" },
/* 7 */ { A1_OP_NAME, 6, "KRB5-PADATA-SANDIA-SECUREID" },
/* 8 */ { A1_OP_NAME, 7, "KRB5-PADATA-SESAME" },
/* 9 */ { A1_OP_NAME, 8, "KRB5-PADATA-OSF-DCE" },
/* 10 */ { A1_OP_NAME, 9, "KRB5-PADATA-CYBERSAFE-SECUREID" },
/* 11 */ { A1_OP_NAME, 10, "KRB5-PADATA-AFS3-SALT" },
/* 12 */ { A1_OP_NAME, 11, "KRB5-PADATA-ETYPE-INFO" },
/* 13 */ { A1_OP_NAME, 12, "KRB5-PADATA-SAM-CHALLENGE" },
/* 14 */ { A1_OP_NAME, 13, "KRB5-PADATA-SAM-RESPONSE" },
/* 15 */ { A1_OP_NAME, 14, "KRB5-PADATA-PK-AS-REQ-19" },
/* 16 */ { A1_OP_NAME, 15, "KRB5-PADATA-PK-AS-REP-19" },
/* 17 */ { A1_OP_NAME, 15, "KRB5-PADATA-PK-AS-REQ-WIN" },
/* 18 */ { A1_OP_NAME, 16, "KRB5-PADATA-PK-AS-REQ" },
/* 19 */ { A1_OP_NAME, 17, "KRB5-PADATA-PK-AS-REP" },
/* 20 */ { A1_OP_NAME, 18, "KRB5-PADATA-PA-PK-OCSP-RESPONSE" },
/* 21 */ { A1_OP_NAME, 19, "KRB5-PADATA-ETYPE-INFO2" },
/* 22 */ { A1_OP_NAME, 20, "KRB5-PADATA-USE-SPECIFIED-KVNO" },
/* 23 */ { A1_OP_NAME, 20, "KRB5-PADATA-SVR-REFERRAL-INFO" },
/* 24 */ { A1_OP_NAME, 21, "KRB5-PADATA-SAM-REDIRECT" },
/* 25 */ { A1_OP_NAME, 22, "KRB5-PADATA-GET-FROM-TYPED-DATA" },
/* 26 */ { A1_OP_NAME, 23, "KRB5-PADATA-SAM-ETYPE-INFO" },
/* 27 */ { A1_OP_NAME, 25, "KRB5-PADATA-SERVER-REFERRAL" },
/* 28 */ { A1_OP_NAME, 24, "KRB5-PADATA-ALT-PRINC" },
/* 29 */ { A1_OP_NAME, 30, "KRB5-PADATA-SAM-CHALLENGE2" },
/* 30 */ { A1_OP_NAME, 31, "KRB5-PADATA-SAM-RESPONSE2" },
/* 31 */ { A1_OP_NAME, 41, "KRB5-PA-EXTRA-TGT" },
/* 32 */ { A1_OP_NAME, 71, "KRB5-PADATA-FX-FAST-ARMOR" },
/* 33 */ { A1_OP_NAME, 102, "KRB5-PADATA-TD-KRB-PRINCIPAL" },
/* 34 */ { A1_OP_NAME, 104, "KRB5-PADATA-PK-TD-TRUSTED-CERTIFIERS" },
/* 35 */ { A1_OP_NAME, 105, "KRB5-PADATA-PK-TD-CERTIFICATE-INDEX" },
/* 36 */ { A1_OP_NAME, 106, "KRB5-PADATA-TD-APP-DEFINED-ERROR" },
/* 37 */ { A1_OP_NAME, 107, "KRB5-PADATA-TD-REQ-NONCE" },
/* 38 */ { A1_OP_NAME, 108, "KRB5-PADATA-TD-REQ-SEQ" },
/* 39 */ { A1_OP_NAME, 128, "KRB5-PADATA-PA-PAC-REQUEST" },
/* 40 */ { A1_OP_NAME, 129, "KRB5-PADATA-FOR-USER" },
/* 41 */ { A1_OP_NAME, 130, "KRB5-PADATA-FOR-X509-USER" },
/* 42 */ { A1_OP_NAME, 131, "KRB5-PADATA-FOR-CHECK-DUPS" },
/* 43 */ { A1_OP_NAME, 132, "KRB5-PADATA-AS-CHECKSUM" },
/* 44 */ { A1_OP_NAME, 132, "KRB5-PADATA-PK-AS-09-BINDING" },
/* 45 */ { A1_OP_NAME, 133, "KRB5-PADATA-FX-COOKIE" },
/* 46 */ { A1_OP_NAME, 134, "KRB5-PADATA-AUTHENTICATION-SET" },
/* 47 */ { A1_OP_NAME, 135, "KRB5-PADATA-AUTH-SET-SELECTED" },
/* 48 */ { A1_OP_NAME, 136, "KRB5-PADATA-FX-FAST" },
/* 49 */ { A1_OP_NAME, 137, "KRB5-PADATA-FX-ERROR" },
/* 50 */ { A1_OP_NAME, 138, "KRB5-PADATA-ENCRYPTED-CHALLENGE" },
/* 51 */ { A1_OP_NAME, 141, "KRB5-PADATA-OTP-CHALLENGE" },
/* 52 */ { A1_OP_NAME, 142, "KRB5-PADATA-OTP-REQUEST" },
/* 53 */ { A1_OP_NAME, 143, "KBB5-PADATA-OTP-CONFIRM" },
/* 54 */ { A1_OP_NAME, 144, "KRB5-PADATA-OTP-PIN-CHANGE" },
/* 55 */ { A1_OP_NAME, 145, "KRB5-PADATA-EPAK-AS-REQ" },
/* 56 */ { A1_OP_NAME, 146, "KRB5-PADATA-EPAK-AS-REP" },
/* 57 */ { A1_OP_NAME, 147, "KRB5-PADATA-PKINIT-KX" },
/* 58 */ { A1_OP_NAME, 148, "KRB5-PADATA-PKU2U-NAME" },
/* 59 */ { A1_OP_NAME, 149, "KRB5-PADATA-REQ-ENC-PA-REP" },
/* 60 */ { A1_OP_NAME, 150, "KRB5-PADATA-AS-FRESHNESS" },
/* 61 */ { A1_OP_NAME, 161, "KER5-PADATA-KERB-KEY-LIST-REQ" },
/* 62 */ { A1_OP_NAME, 162, "KER5-PADATA-KERB-PAKEY-LIST-REP" },
/* 63 */ { A1_OP_NAME, 165, "KRB5-PADATA-SUPPORTED-ETYPES" },
/* 64 */ { A1_OP_NAME, 167, "KRB5-PADATA-PAC-OPTIONS" },
/* 65 */ { A1_OP_NAME, 655, "KRB5-PADATA-GSS" }
};
/* generate_template_type: PADATA_TYPE_tag__2 */
const struct asn1_template asn1_PADATA_TYPE_tag__2[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_PADATA_TYPE_enum_names }
};
/* generate_template_type: PADATA_TYPE */
const struct asn1_template asn1_PADATA_TYPE[] = {
/* 0 */ { 0, sizeof(PADATA_TYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_PADATA_TYPE_tag__2 }
};

int ASN1CALL
decode_PADATA_TYPE(const unsigned char *p, size_t len, PADATA_TYPE *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PADATA_TYPE, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PADATA_TYPE(unsigned char *p, size_t len, const PADATA_TYPE *data, size_t *size)
{
    return _asn1_encode(asn1_PADATA_TYPE, p, len, data, size);
}


size_t ASN1CALL
length_PADATA_TYPE(const PADATA_TYPE *data)
{
    return _asn1_length(asn1_PADATA_TYPE, data);
}


void ASN1CALL
free_PADATA_TYPE(PADATA_TYPE *data)
{
    _asn1_free_top(asn1_PADATA_TYPE, data);
}


int ASN1CALL
copy_PADATA_TYPE(const PADATA_TYPE *from, PADATA_TYPE *to)
{
    return _asn1_copy_top(asn1_PADATA_TYPE, from, to);
}


char * ASN1CALL
print_PADATA_TYPE(const PADATA_TYPE *data, int flags)
{
    return _asn1_print_top(asn1_PADATA_TYPE, flags, data);
}

/* template_members: AUTHDATA_TYPE exp exp */
const struct asn1_template asn1_AUTHDATA_TYPE_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)31) },
/* 1 */ { A1_OP_NAME, 1, "KRB5-AUTHDATA-IF-RELEVANT" },
/* 2 */ { A1_OP_NAME, 2, "KRB5-AUTHDATA-INTENDED-FOR_SERVER" },
/* 3 */ { A1_OP_NAME, 3, "KRB5-AUTHDATA-INTENDED-FOR-APPLICATION-CLASS" },
/* 4 */ { A1_OP_NAME, 4, "KRB5-AUTHDATA-KDC-ISSUED" },
/* 5 */ { A1_OP_NAME, 5, "KRB5-AUTHDATA-AND-OR" },
/* 6 */ { A1_OP_NAME, 6, "KRB5-AUTHDATA-MANDATORY-TICKET-EXTENSIONS" },
/* 7 */ { A1_OP_NAME, 7, "KRB5-AUTHDATA-IN-TICKET-EXTENSIONS" },
/* 8 */ { A1_OP_NAME, 8, "KRB5-AUTHDATA-MANDATORY-FOR-KDC" },
/* 9 */ { A1_OP_NAME, 9, "KRB5-AUTHDATA-INITIAL-VERIFIED-CAS" },
/* 10 */ { A1_OP_NAME, 64, "KRB5-AUTHDATA-OSF-DCE" },
/* 11 */ { A1_OP_NAME, 65, "KRB5-AUTHDATA-SESAME" },
/* 12 */ { A1_OP_NAME, 66, "KRB5-AUTHDATA-OSF-DCE-PKI-CERTID" },
/* 13 */ { A1_OP_NAME, 70, "KRB5-AUTHDATA-AUTHENTICATION-STRENGTH" },
/* 14 */ { A1_OP_NAME, 71, "KRB5-AUTHDATA-FX-FAST-ARMOR" },
/* 15 */ { A1_OP_NAME, 72, "KRB5-AUTHDATA-FX-FAST-USED" },
/* 16 */ { A1_OP_NAME, 128, "KRB5-AUTHDATA-WIN2K-PAC" },
/* 17 */ { A1_OP_NAME, 129, "KRB5-AUTHDATA-GSS-API-ETYPE-NEGOTIATION" },
/* 18 */ { A1_OP_NAME, -17, "KRB5-AUTHDATA-SIGNTICKET-OLDER" },
/* 19 */ { A1_OP_NAME, 142, "KRB5-AUTHDATA-SIGNTICKET-OLD" },
/* 20 */ { A1_OP_NAME, 512, "KRB5-AUTHDATA-SIGNTICKET" },
/* 21 */ { A1_OP_NAME, 513, "KRB5-AUTHDATA-SYNTHETIC-PRINC-USED" },
/* 22 */ { A1_OP_NAME, 141, "KRB5-AUTHDATA-KERB-LOCAL" },
/* 23 */ { A1_OP_NAME, 142, "KRB5-AUTHDATA-TOKEN-RESTRICTIONS" },
/* 24 */ { A1_OP_NAME, 143, "KRB5-AUTHDATA-AP-OPTIONS" },
/* 25 */ { A1_OP_NAME, 144, "KRB5-AUTHDATA-TARGET-PRINCIPAL" },
/* 26 */ { A1_OP_NAME, 580, "KRB5-AUTHDATA-ON-BEHALF-OF" },
/* 27 */ { A1_OP_NAME, 581, "KRB5-AUTHDATA-BEARER-TOKEN-JWT" },
/* 28 */ { A1_OP_NAME, 582, "KRB5-AUTHDATA-BEARER-TOKEN-SAML" },
/* 29 */ { A1_OP_NAME, 583, "KRB5-AUTHDATA-BEARER-TOKEN-OIDC" },
/* 30 */ { A1_OP_NAME, 584, "KRB5-AUTHDATA-CSR-AUTHORIZED" },
/* 31 */ { A1_OP_NAME, 655, "KRB5-AUTHDATA-GSS-COMPOSITE-NAME" }
};
/* generate_template_type: AUTHDATA_TYPE_tag__3 */
const struct asn1_template asn1_AUTHDATA_TYPE_tag__3[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_AUTHDATA_TYPE_enum_names }
};
/* generate_template_type: AUTHDATA_TYPE */
const struct asn1_template asn1_AUTHDATA_TYPE[] = {
/* 0 */ { 0, sizeof(AUTHDATA_TYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_AUTHDATA_TYPE_tag__3 }
};

int ASN1CALL
decode_AUTHDATA_TYPE(const unsigned char *p, size_t len, AUTHDATA_TYPE *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AUTHDATA_TYPE, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AUTHDATA_TYPE(unsigned char *p, size_t len, const AUTHDATA_TYPE *data, size_t *size)
{
    return _asn1_encode(asn1_AUTHDATA_TYPE, p, len, data, size);
}


size_t ASN1CALL
length_AUTHDATA_TYPE(const AUTHDATA_TYPE *data)
{
    return _asn1_length(asn1_AUTHDATA_TYPE, data);
}


void ASN1CALL
free_AUTHDATA_TYPE(AUTHDATA_TYPE *data)
{
    _asn1_free_top(asn1_AUTHDATA_TYPE, data);
}


int ASN1CALL
copy_AUTHDATA_TYPE(const AUTHDATA_TYPE *from, AUTHDATA_TYPE *to)
{
    return _asn1_copy_top(asn1_AUTHDATA_TYPE, from, to);
}


char * ASN1CALL
print_AUTHDATA_TYPE(const AUTHDATA_TYPE *data, int flags)
{
    return _asn1_print_top(asn1_AUTHDATA_TYPE, flags, data);
}

/* template_members: CKSUMTYPE exp exp */
const struct asn1_template asn1_CKSUMTYPE_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)23) },
/* 1 */ { A1_OP_NAME, 0, "CKSUMTYPE_NONE" },
/* 2 */ { A1_OP_NAME, 1, "CKSUMTYPE_CRC32" },
/* 3 */ { A1_OP_NAME, 2, "CKSUMTYPE_RSA_MD4" },
/* 4 */ { A1_OP_NAME, 3, "CKSUMTYPE_RSA_MD4_DES" },
/* 5 */ { A1_OP_NAME, 4, "CKSUMTYPE_DES_MAC" },
/* 6 */ { A1_OP_NAME, 5, "CKSUMTYPE_DES_MAC_K" },
/* 7 */ { A1_OP_NAME, 6, "CKSUMTYPE_RSA_MD4_DES_K" },
/* 8 */ { A1_OP_NAME, 7, "CKSUMTYPE_RSA_MD5" },
/* 9 */ { A1_OP_NAME, 8, "CKSUMTYPE_RSA_MD5_DES" },
/* 10 */ { A1_OP_NAME, 9, "CKSUMTYPE_RSA_MD5_DES3" },
/* 11 */ { A1_OP_NAME, 10, "CKSUMTYPE_SHA1_OTHER" },
/* 12 */ { A1_OP_NAME, 12, "CKSUMTYPE_HMAC_SHA1_DES3" },
/* 13 */ { A1_OP_NAME, 14, "CKSUMTYPE_SHA1" },
/* 14 */ { A1_OP_NAME, 15, "CKSUMTYPE_HMAC_SHA1_96_AES_128" },
/* 15 */ { A1_OP_NAME, 16, "CKSUMTYPE_HMAC_SHA1_96_AES_256" },
/* 16 */ { A1_OP_NAME, 19, "CKSUMTYPE_HMAC_SHA256_128_AES128" },
/* 17 */ { A1_OP_NAME, 20, "CKSUMTYPE_HMAC_SHA384_192_AES256" },
/* 18 */ { A1_OP_NAME, 32771, "CKSUMTYPE_GSSAPI" },
/* 19 */ { A1_OP_NAME, -138, "CKSUMTYPE_HMAC_MD5" },
/* 20 */ { A1_OP_NAME, -1138, "CKSUMTYPE_HMAC_MD5_ENC" },
/* 21 */ { A1_OP_NAME, -21, "CKSUMTYPE_SHA256" },
/* 22 */ { A1_OP_NAME, -22, "CKSUMTYPE_SHA384" },
/* 23 */ { A1_OP_NAME, -23, "CKSUMTYPE_SHA512" }
};
/* generate_template_type: CKSUMTYPE_tag__4 */
const struct asn1_template asn1_CKSUMTYPE_tag__4[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_CKSUMTYPE_enum_names }
};
/* generate_template_type: CKSUMTYPE */
const struct asn1_template asn1_CKSUMTYPE[] = {
/* 0 */ { 0, sizeof(CKSUMTYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_CKSUMTYPE_tag__4 }
};

int ASN1CALL
decode_CKSUMTYPE(const unsigned char *p, size_t len, CKSUMTYPE *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CKSUMTYPE, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CKSUMTYPE(unsigned char *p, size_t len, const CKSUMTYPE *data, size_t *size)
{
    return _asn1_encode(asn1_CKSUMTYPE, p, len, data, size);
}


size_t ASN1CALL
length_CKSUMTYPE(const CKSUMTYPE *data)
{
    return _asn1_length(asn1_CKSUMTYPE, data);
}


void ASN1CALL
free_CKSUMTYPE(CKSUMTYPE *data)
{
    _asn1_free_top(asn1_CKSUMTYPE, data);
}


int ASN1CALL
copy_CKSUMTYPE(const CKSUMTYPE *from, CKSUMTYPE *to)
{
    return _asn1_copy_top(asn1_CKSUMTYPE, from, to);
}


char * ASN1CALL
print_CKSUMTYPE(const CKSUMTYPE *data, int flags)
{
    return _asn1_print_top(asn1_CKSUMTYPE, flags, data);
}

/* template_members: ENCTYPE exp exp */
const struct asn1_template asn1_ENCTYPE_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)26) },
/* 1 */ { A1_OP_NAME, 0, "KRB5_ENCTYPE_NULL" },
/* 2 */ { A1_OP_NAME, 1, "KRB5_ENCTYPE_DES_CBC_CRC" },
/* 3 */ { A1_OP_NAME, 2, "KRB5_ENCTYPE_DES_CBC_MD4" },
/* 4 */ { A1_OP_NAME, 3, "KRB5_ENCTYPE_DES_CBC_MD5" },
/* 5 */ { A1_OP_NAME, 5, "KRB5_ENCTYPE_DES3_CBC_MD5" },
/* 6 */ { A1_OP_NAME, 7, "KRB5_ENCTYPE_OLD_DES3_CBC_SHA1" },
/* 7 */ { A1_OP_NAME, 8, "KRB5_ENCTYPE_SIGN_DSA_GENERATE" },
/* 8 */ { A1_OP_NAME, 9, "KRB5_ENCTYPE_ENCRYPT_RSA_PRIV" },
/* 9 */ { A1_OP_NAME, 10, "KRB5_ENCTYPE_ENCRYPT_RSA_PUB" },
/* 10 */ { A1_OP_NAME, 16, "KRB5_ENCTYPE_DES3_CBC_SHA1" },
/* 11 */ { A1_OP_NAME, 17, "KRB5_ENCTYPE_AES128_CTS_HMAC_SHA1_96" },
/* 12 */ { A1_OP_NAME, 18, "KRB5_ENCTYPE_AES256_CTS_HMAC_SHA1_96" },
/* 13 */ { A1_OP_NAME, 19, "KRB5_ENCTYPE_AES128_CTS_HMAC_SHA256_128" },
/* 14 */ { A1_OP_NAME, 20, "KRB5_ENCTYPE_AES256_CTS_HMAC_SHA384_192" },
/* 15 */ { A1_OP_NAME, 23, "KRB5_ENCTYPE_ARCFOUR_HMAC_MD5" },
/* 16 */ { A1_OP_NAME, 24, "KRB5_ENCTYPE_ARCFOUR_HMAC_MD5_56" },
/* 17 */ { A1_OP_NAME, 48, "KRB5_ENCTYPE_ENCTYPE_PK_CROSS" },
/* 18 */ { A1_OP_NAME, -128, "KRB5_ENCTYPE_ARCFOUR_MD4" },
/* 19 */ { A1_OP_NAME, -133, "KRB5_ENCTYPE_ARCFOUR_HMAC_OLD" },
/* 20 */ { A1_OP_NAME, -135, "KRB5_ENCTYPE_ARCFOUR_HMAC_OLD_EXP" },
/* 21 */ { A1_OP_NAME, -4096, "KRB5_ENCTYPE_DES_CBC_NONE" },
/* 22 */ { A1_OP_NAME, -4097, "KRB5_ENCTYPE_DES3_CBC_NONE" },
/* 23 */ { A1_OP_NAME, -4098, "KRB5_ENCTYPE_DES_CFB64_NONE" },
/* 24 */ { A1_OP_NAME, -4099, "KRB5_ENCTYPE_DES_PCBC_NONE" },
/* 25 */ { A1_OP_NAME, -4100, "KRB5_ENCTYPE_DIGEST_MD5_NONE" },
/* 26 */ { A1_OP_NAME, -4101, "KRB5_ENCTYPE_CRAM_MD5_NONE" }
};
/* generate_template_type: ENCTYPE_tag__5 */
const struct asn1_template asn1_ENCTYPE_tag__5[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_ENCTYPE_enum_names }
};
/* generate_template_type: ENCTYPE */
const struct asn1_template asn1_ENCTYPE[] = {
/* 0 */ { 0, sizeof(ENCTYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_ENCTYPE_tag__5 }
};

int ASN1CALL
decode_ENCTYPE(const unsigned char *p, size_t len, ENCTYPE *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ENCTYPE, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ENCTYPE(unsigned char *p, size_t len, const ENCTYPE *data, size_t *size)
{
    return _asn1_encode(asn1_ENCTYPE, p, len, data, size);
}


size_t ASN1CALL
length_ENCTYPE(const ENCTYPE *data)
{
    return _asn1_length(asn1_ENCTYPE, data);
}


void ASN1CALL
free_ENCTYPE(ENCTYPE *data)
{
    _asn1_free_top(asn1_ENCTYPE, data);
}


int ASN1CALL
copy_ENCTYPE(const ENCTYPE *from, ENCTYPE *to)
{
    return _asn1_copy_top(asn1_ENCTYPE, from, to);
}


char * ASN1CALL
print_ENCTYPE(const ENCTYPE *data, int flags)
{
    return _asn1_print_top(asn1_ENCTYPE, flags, data);
}

/* template_members: Krb5UInt32 exp exp */
/* generate_template_type: Krb5UInt32_tag__6 */
const struct asn1_template asn1_Krb5UInt32_tag__6[] = {
/* 0 */ { 0, sizeof(unsigned), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UNSIGNED), 0, NULL }
};
/* generate_template_type: Krb5UInt32 */
const struct asn1_template asn1_Krb5UInt32[] = {
/* 0 */ { 0, sizeof(Krb5UInt32), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_Krb5UInt32_tag__6 }
};

int ASN1CALL
decode_Krb5UInt32(const unsigned char *p, size_t len, Krb5UInt32 *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Krb5UInt32, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Krb5UInt32(unsigned char *p, size_t len, const Krb5UInt32 *data, size_t *size)
{
    return _asn1_encode(asn1_Krb5UInt32, p, len, data, size);
}


size_t ASN1CALL
length_Krb5UInt32(const Krb5UInt32 *data)
{
    return _asn1_length(asn1_Krb5UInt32, data);
}


void ASN1CALL
free_Krb5UInt32(Krb5UInt32 *data)
{
    _asn1_free_top(asn1_Krb5UInt32, data);
}


int ASN1CALL
copy_Krb5UInt32(const Krb5UInt32 *from, Krb5UInt32 *to)
{
    return _asn1_copy_top(asn1_Krb5UInt32, from, to);
}


char * ASN1CALL
print_Krb5UInt32(const Krb5UInt32 *data, int flags)
{
    return _asn1_print_top(asn1_Krb5UInt32, flags, data);
}

/* template_members: Krb5Int32 exp exp */
/* generate_template_type: Krb5Int32_tag__7 */
const struct asn1_template asn1_Krb5Int32_tag__7[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_INTEGER), 0, NULL }
};
/* generate_template_type: Krb5Int32 */
const struct asn1_template asn1_Krb5Int32[] = {
/* 0 */ { 0, sizeof(Krb5Int32), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_Krb5Int32_tag__7 }
};

int ASN1CALL
decode_Krb5Int32(const unsigned char *p, size_t len, Krb5Int32 *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Krb5Int32, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Krb5Int32(unsigned char *p, size_t len, const Krb5Int32 *data, size_t *size)
{
    return _asn1_encode(asn1_Krb5Int32, p, len, data, size);
}


size_t ASN1CALL
length_Krb5Int32(const Krb5Int32 *data)
{
    return _asn1_length(asn1_Krb5Int32, data);
}


void ASN1CALL
free_Krb5Int32(Krb5Int32 *data)
{
    _asn1_free_top(asn1_Krb5Int32, data);
}


int ASN1CALL
copy_Krb5Int32(const Krb5Int32 *from, Krb5Int32 *to)
{
    return _asn1_copy_top(asn1_Krb5Int32, from, to);
}


char * ASN1CALL
print_Krb5Int32(const Krb5Int32 *data, int flags)
{
    return _asn1_print_top(asn1_Krb5Int32, flags, data);
}

/* template_members: KerberosString exp exp */
/* generate_template_type: KerberosString_tag__8 */
const struct asn1_template asn1_KerberosString_tag__8[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_GENERAL_STRING), 0, NULL }
};
/* generate_template_type: KerberosString */
const struct asn1_template asn1_KerberosString[] = {
/* 0 */ { 0, sizeof(KerberosString), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralString), 0, asn1_KerberosString_tag__8 }
};

int ASN1CALL
decode_KerberosString(const unsigned char *p, size_t len, KerberosString *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KerberosString, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KerberosString(unsigned char *p, size_t len, const KerberosString *data, size_t *size)
{
    return _asn1_encode(asn1_KerberosString, p, len, data, size);
}


size_t ASN1CALL
length_KerberosString(const KerberosString *data)
{
    return _asn1_length(asn1_KerberosString, data);
}


void ASN1CALL
free_KerberosString(KerberosString *data)
{
    _asn1_free_top(asn1_KerberosString, data);
}


int ASN1CALL
copy_KerberosString(const KerberosString *from, KerberosString *to)
{
    return _asn1_copy_top(asn1_KerberosString, from, to);
}


char * ASN1CALL
print_KerberosString(const KerberosString *data, int flags)
{
    return _asn1_print_top(asn1_KerberosString, flags, data);
}

/* template_members: Realm exp exp */
/* generate_template_type: Realm_tag__9 */
/* generate_template_type: Realm */
const struct asn1_template asn1_Realm[] = {
/* 0 */ { 0, sizeof(Realm), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralString), 0, asn1_KerberosString_tag__8 }
};

int ASN1CALL
decode_Realm(const unsigned char *p, size_t len, Realm *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Realm, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Realm(unsigned char *p, size_t len, const Realm *data, size_t *size)
{
    return _asn1_encode(asn1_Realm, p, len, data, size);
}


size_t ASN1CALL
length_Realm(const Realm *data)
{
    return _asn1_length(asn1_Realm, data);
}


void ASN1CALL
free_Realm(Realm *data)
{
    _asn1_free_top(asn1_Realm, data);
}


int ASN1CALL
copy_Realm(const Realm *from, Realm *to)
{
    return _asn1_copy_top(asn1_Realm, from, to);
}


char * ASN1CALL
print_Realm(const Realm *data, int flags)
{
    return _asn1_print_top(asn1_Realm, flags, data);
}

/* template_members: PrincipalName exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PrincipalName exp exp */
/* generate_template_type: PrincipalName_tag_name_type_11 */
const struct asn1_template asn1_PrincipalName_tag_name_type_11[] = {
/* 0 */ { 0, sizeof(NAME_TYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_NAME_TYPE }
};
/* template_members: PrincipalName exp exp */
/* template_members: PrincipalName exp exp */
/* template_members: heim_general_string exp exp */
/* generate_template_type: heim_general_string_tag__14 */
/* generate_template_type: PrincipalName_name_string_0 */
const struct asn1_template asn1_PrincipalName_name_string_0[] = {
/* 0 */ { 0, sizeof(heim_general_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralString), 0, asn1_KerberosString_tag__8 }
};
/* generate_template_type: PrincipalName_tag_name_string_13 */
const struct asn1_template asn1_PrincipalName_tag_name_string_13[] = {
/* 0 */ { 0, sizeof(struct PrincipalName_name_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PrincipalName_name_string_0 }
};
/* generate_template_type: PrincipalName_tag_name_string_12 */
const struct asn1_template asn1_PrincipalName_tag_name_string_12[] = {
/* 0 */ { 0, sizeof(struct PrincipalName_name_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PrincipalName_tag_name_string_13 }
};
/* generate_template_type: PrincipalName_tag__10 */
const struct asn1_template asn1_PrincipalName_tag__10[] = {
/* 0 */ { 0, sizeof(struct PrincipalName), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PrincipalName, name_type), asn1_PrincipalName_tag_name_type_11 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PrincipalName, name_string), asn1_PrincipalName_tag_name_string_12 },
/* 3 */ { A1_OP_NAME, 0, "PrincipalName" },
/* 4 */ { A1_OP_NAME, 0, "name-type" },
/* 5 */ { A1_OP_NAME, 0, "name-string" }
};
/* generate_template_type: PrincipalName */
const struct asn1_template asn1_PrincipalName[] = {
/* 0 */ { 0, sizeof(PrincipalName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PrincipalName_tag__10 }
};

int ASN1CALL
decode_PrincipalName(const unsigned char *p, size_t len, PrincipalName *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PrincipalName, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PrincipalName(unsigned char *p, size_t len, const PrincipalName *data, size_t *size)
{
    return _asn1_encode(asn1_PrincipalName, p, len, data, size);
}


size_t ASN1CALL
length_PrincipalName(const PrincipalName *data)
{
    return _asn1_length(asn1_PrincipalName, data);
}


void ASN1CALL
free_PrincipalName(PrincipalName *data)
{
    _asn1_free_top(asn1_PrincipalName, data);
}


int ASN1CALL
copy_PrincipalName(const PrincipalName *from, PrincipalName *to)
{
    return _asn1_copy_top(asn1_PrincipalName, from, to);
}


char * ASN1CALL
print_PrincipalName(const PrincipalName *data, int flags)
{
    return _asn1_print_top(asn1_PrincipalName, flags, data);
}

/* template_members: HostAddress exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: HostAddress exp exp */
/* generate_template_type: HostAddress_tag_addr_type_16 */
const struct asn1_template asn1_HostAddress_tag_addr_type_16[] = {
/* 0 */ { 0, sizeof(Krb5Int32), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Krb5Int32 }
};
/* template_members: HostAddress exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_address_18 */
const struct asn1_template asn1_heim_octet_string_tag_address_18[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_OCTET_STRING), 0, NULL }
};
/* generate_template_type: HostAddress_tag_address_17 */
const struct asn1_template asn1_HostAddress_tag_address_17[] = {
/* 0 */ { 0, sizeof(heim_octet_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_OctetString), 0, asn1_heim_octet_string_tag_address_18 }
};
/* generate_template_type: HostAddress_tag__15 */
const struct asn1_template asn1_HostAddress_tag__15[] = {
/* 0 */ { 0, sizeof(struct HostAddress), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct HostAddress, addr_type), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct HostAddress, address), asn1_HostAddress_tag_address_17 },
/* 3 */ { A1_OP_NAME, 0, "HostAddress" },
/* 4 */ { A1_OP_NAME, 0, "addr-type" },
/* 5 */ { A1_OP_NAME, 0, "address" }
};
/* generate_template_type: HostAddress */
const struct asn1_template asn1_HostAddress[] = {
/* 0 */ { 0, sizeof(HostAddress), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_HostAddress_tag__15 }
};

int ASN1CALL
decode_HostAddress(const unsigned char *p, size_t len, HostAddress *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_HostAddress, 0|0, p, len, data, size);
}


int ASN1CALL
encode_HostAddress(unsigned char *p, size_t len, const HostAddress *data, size_t *size)
{
    return _asn1_encode(asn1_HostAddress, p, len, data, size);
}


size_t ASN1CALL
length_HostAddress(const HostAddress *data)
{
    return _asn1_length(asn1_HostAddress, data);
}


void ASN1CALL
free_HostAddress(HostAddress *data)
{
    _asn1_free_top(asn1_HostAddress, data);
}


int ASN1CALL
copy_HostAddress(const HostAddress *from, HostAddress *to)
{
    return _asn1_copy_top(asn1_HostAddress, from, to);
}


char * ASN1CALL
print_HostAddress(const HostAddress *data, int flags)
{
    return _asn1_print_top(asn1_HostAddress, flags, data);
}

/* template_members: HostAddresses exp exp */
/* generate_template_type: HostAddress_seofTstruct_1 */
const struct asn1_template asn1_HostAddress_seofTstruct_1[] = {
/* 0 */ { 0, sizeof(HostAddress), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_HostAddress }
};
/* generate_template_type: HostAddresses_tag__19 */
const struct asn1_template asn1_HostAddresses_tag__19[] = {
/* 0 */ { 0, sizeof(HostAddress), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_HostAddress_seofTstruct_1 }
};
/* generate_template_type: HostAddresses */
const struct asn1_template asn1_HostAddresses[] = {
/* 0 */ { 0, sizeof(HostAddresses), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_HostAddresses_tag__19 }
};

int ASN1CALL
decode_HostAddresses(const unsigned char *p, size_t len, HostAddresses *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_HostAddresses, 0|0, p, len, data, size);
}


int ASN1CALL
encode_HostAddresses(unsigned char *p, size_t len, const HostAddresses *data, size_t *size)
{
    return _asn1_encode(asn1_HostAddresses, p, len, data, size);
}


size_t ASN1CALL
length_HostAddresses(const HostAddresses *data)
{
    return _asn1_length(asn1_HostAddresses, data);
}


void ASN1CALL
free_HostAddresses(HostAddresses *data)
{
    _asn1_free_top(asn1_HostAddresses, data);
}


int ASN1CALL
copy_HostAddresses(const HostAddresses *from, HostAddresses *to)
{
    return _asn1_copy_top(asn1_HostAddresses, from, to);
}


char * ASN1CALL
print_HostAddresses(const HostAddresses *data, int flags)
{
    return _asn1_print_top(asn1_HostAddresses, flags, data);
}

/* template_members: KerberosTime exp exp */
/* generate_template_type: KerberosTime_tag__20 */
const struct asn1_template asn1_KerberosTime_tag__20[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_GENERALIZED_TIME), 0, NULL }
};
/* generate_template_type: KerberosTime */
const struct asn1_template asn1_KerberosTime[] = {
/* 0 */ { 0, sizeof(KerberosTime), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), 0, asn1_KerberosTime_tag__20 }
};

int ASN1CALL
decode_KerberosTime(const unsigned char *p, size_t len, KerberosTime *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KerberosTime, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KerberosTime(unsigned char *p, size_t len, const KerberosTime *data, size_t *size)
{
    return _asn1_encode(asn1_KerberosTime, p, len, data, size);
}


size_t ASN1CALL
length_KerberosTime(const KerberosTime *data)
{
    return _asn1_length(asn1_KerberosTime, data);
}


void ASN1CALL
free_KerberosTime(KerberosTime *data)
{
    _asn1_free_top(asn1_KerberosTime, data);
}


int ASN1CALL
copy_KerberosTime(const KerberosTime *from, KerberosTime *to)
{
    return _asn1_copy_top(asn1_KerberosTime, from, to);
}


char * ASN1CALL
print_KerberosTime(const KerberosTime *data, int flags)
{
    return _asn1_print_top(asn1_KerberosTime, flags, data);
}

/* template_members: AuthorizationDataElement exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AuthorizationDataElement exp exp */
/* generate_template_type: AuthorizationDataElement_tag_ad_type_22 */
/* template_members: AuthorizationDataElement exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_ad_data_24 */
/* generate_template_type: AuthorizationDataElement_tag_ad_data_23 */
/* generate_template_type: AuthorizationDataElement_tag__21 */
const struct asn1_template asn1_AuthorizationDataElement_tag__21[] = {
/* 0 */ { 0, sizeof(struct AuthorizationDataElement), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AuthorizationDataElement, ad_type), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct AuthorizationDataElement, ad_data), asn1_HostAddress_tag_address_17 },
/* 3 */ { A1_OP_NAME, 0, "AuthorizationDataElement" },
/* 4 */ { A1_OP_NAME, 0, "ad-type" },
/* 5 */ { A1_OP_NAME, 0, "ad-data" }
};
/* generate_template_type: AuthorizationDataElement */
const struct asn1_template asn1_AuthorizationDataElement[] = {
/* 0 */ { 0, sizeof(AuthorizationDataElement), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthorizationDataElement_tag__21 }
};

int ASN1CALL
decode_AuthorizationDataElement(const unsigned char *p, size_t len, AuthorizationDataElement *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AuthorizationDataElement, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AuthorizationDataElement(unsigned char *p, size_t len, const AuthorizationDataElement *data, size_t *size)
{
    return _asn1_encode(asn1_AuthorizationDataElement, p, len, data, size);
}


size_t ASN1CALL
length_AuthorizationDataElement(const AuthorizationDataElement *data)
{
    return _asn1_length(asn1_AuthorizationDataElement, data);
}


void ASN1CALL
free_AuthorizationDataElement(AuthorizationDataElement *data)
{
    _asn1_free_top(asn1_AuthorizationDataElement, data);
}


int ASN1CALL
copy_AuthorizationDataElement(const AuthorizationDataElement *from, AuthorizationDataElement *to)
{
    return _asn1_copy_top(asn1_AuthorizationDataElement, from, to);
}


char * ASN1CALL
print_AuthorizationDataElement(const AuthorizationDataElement *data, int flags)
{
    return _asn1_print_top(asn1_AuthorizationDataElement, flags, data);
}

/* template_members: AuthorizationData exp exp */
/* generate_template_type: AuthorizationDataElement_seofTstruct_2 */
const struct asn1_template asn1_AuthorizationDataElement_seofTstruct_2[] = {
/* 0 */ { 0, sizeof(AuthorizationDataElement), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AuthorizationDataElement }
};
/* generate_template_type: AuthorizationData_tag__25 */
const struct asn1_template asn1_AuthorizationData_tag__25[] = {
/* 0 */ { 0, sizeof(AuthorizationDataElement), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_AuthorizationDataElement_seofTstruct_2 }
};
/* generate_template_type: AuthorizationData */
const struct asn1_template asn1_AuthorizationData[] = {
/* 0 */ { 0, sizeof(AuthorizationData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AuthorizationData_tag__25 }
};

int ASN1CALL
decode_AuthorizationData(const unsigned char *p, size_t len, AuthorizationData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AuthorizationData, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AuthorizationData(unsigned char *p, size_t len, const AuthorizationData *data, size_t *size)
{
    return _asn1_encode(asn1_AuthorizationData, p, len, data, size);
}


size_t ASN1CALL
length_AuthorizationData(const AuthorizationData *data)
{
    return _asn1_length(asn1_AuthorizationData, data);
}


void ASN1CALL
free_AuthorizationData(AuthorizationData *data)
{
    _asn1_free_top(asn1_AuthorizationData, data);
}


int ASN1CALL
copy_AuthorizationData(const AuthorizationData *from, AuthorizationData *to)
{
    return _asn1_copy_top(asn1_AuthorizationData, from, to);
}


char * ASN1CALL
print_AuthorizationData(const AuthorizationData *data, int flags)
{
    return _asn1_print_top(asn1_AuthorizationData, flags, data);
}

int ASN1CALL
add_AuthorizationData(AuthorizationData *data, const AuthorizationDataElement *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_AuthorizationDataElement(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_AuthorizationData(AuthorizationData *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_AuthorizationDataElement(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: APOptions exp exp */
static const struct asn1_template asn1_APOptions_bmember__0[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(APOptions), ((void *)(uintptr_t)3) },
/* 1 */ { 0, 0, "reserved" },
/* 2 */ { 0, 1, "use_session_key" },
/* 3 */ { 0, 2, "mutual_required" }
};
/* generate_template_type: APOptions_tag__26 */
const struct asn1_template asn1_APOptions_tag__26[] = {
/* 0 */ { 0, sizeof(APOptions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_APOptions_bmember__0 }
};
/* generate_template_type: APOptions */
const struct asn1_template asn1_APOptions[] = {
/* 0 */ { 0, sizeof(APOptions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_APOptions_tag__26 }
};

int ASN1CALL
decode_APOptions(const unsigned char *p, size_t len, APOptions *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_APOptions, 0|0, p, len, data, size);
}


int ASN1CALL
encode_APOptions(unsigned char *p, size_t len, const APOptions *data, size_t *size)
{
    return _asn1_encode(asn1_APOptions, p, len, data, size);
}


size_t ASN1CALL
length_APOptions(const APOptions *data)
{
    return _asn1_length(asn1_APOptions, data);
}


void ASN1CALL
free_APOptions(APOptions *data)
{
    _asn1_free_top(asn1_APOptions, data);
}


int ASN1CALL
copy_APOptions(const APOptions *from, APOptions *to)
{
    return _asn1_copy_top(asn1_APOptions, from, to);
}


char * ASN1CALL
print_APOptions(const APOptions *data, int flags)
{
    return _asn1_print_top(asn1_APOptions, flags, data);
}

uint64_t APOptions2int(APOptions f)
{
uint64_t r = 0;
if(f.reserved) r |= (1ULL << 0);
if(f.use_session_key) r |= (1ULL << 1);
if(f.mutual_required) r |= (1ULL << 2);
return r;
}

APOptions int2APOptions(uint64_t n)
{
	APOptions flags;

	memset(&flags, 0, sizeof(flags));

	flags.reserved = (n >> 0) & 1;
	flags.use_session_key = (n >> 1) & 1;
	flags.mutual_required = (n >> 2) & 1;
	return flags;
}

static struct units APOptions_units[] = {
	{"mutual-required",	1ULL << 2},
	{"use-session-key",	1ULL << 1},
	{"reserved",	1ULL << 0},
	{NULL,	0}
};

const struct units * asn1_APOptions_units(void){
return APOptions_units;
}

/* template_members: TicketFlags exp exp */
static const struct asn1_template asn1_TicketFlags_bmember__1[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(TicketFlags), ((void *)(uintptr_t)16) },
/* 1 */ { 0, 0, "reserved" },
/* 2 */ { 0, 1, "forwardable" },
/* 3 */ { 0, 2, "forwarded" },
/* 4 */ { 0, 3, "proxiable" },
/* 5 */ { 0, 4, "proxy" },
/* 6 */ { 0, 5, "may_postdate" },
/* 7 */ { 0, 6, "postdated" },
/* 8 */ { 0, 7, "invalid" },
/* 9 */ { 0, 8, "renewable" },
/* 10 */ { 0, 9, "initial" },
/* 11 */ { 0, 10, "pre_authent" },
/* 12 */ { 0, 11, "hw_authent" },
/* 13 */ { 0, 12, "transited_policy_checked" },
/* 14 */ { 0, 13, "ok_as_delegate" },
/* 15 */ { 0, 15, "enc_pa_rep" },
/* 16 */ { 0, 16, "anonymous" }
};
/* generate_template_type: TicketFlags_tag__27 */
const struct asn1_template asn1_TicketFlags_tag__27[] = {
/* 0 */ { 0, sizeof(TicketFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_TicketFlags_bmember__1 }
};
/* generate_template_type: TicketFlags */
const struct asn1_template asn1_TicketFlags[] = {
/* 0 */ { 0, sizeof(TicketFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_TicketFlags_tag__27 }
};

int ASN1CALL
decode_TicketFlags(const unsigned char *p, size_t len, TicketFlags *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TicketFlags, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TicketFlags(unsigned char *p, size_t len, const TicketFlags *data, size_t *size)
{
    return _asn1_encode(asn1_TicketFlags, p, len, data, size);
}


size_t ASN1CALL
length_TicketFlags(const TicketFlags *data)
{
    return _asn1_length(asn1_TicketFlags, data);
}


void ASN1CALL
free_TicketFlags(TicketFlags *data)
{
    _asn1_free_top(asn1_TicketFlags, data);
}


int ASN1CALL
copy_TicketFlags(const TicketFlags *from, TicketFlags *to)
{
    return _asn1_copy_top(asn1_TicketFlags, from, to);
}


char * ASN1CALL
print_TicketFlags(const TicketFlags *data, int flags)
{
    return _asn1_print_top(asn1_TicketFlags, flags, data);
}

uint64_t TicketFlags2int(TicketFlags f)
{
uint64_t r = 0;
if(f.reserved) r |= (1ULL << 0);
if(f.forwardable) r |= (1ULL << 1);
if(f.forwarded) r |= (1ULL << 2);
if(f.proxiable) r |= (1ULL << 3);
if(f.proxy) r |= (1ULL << 4);
if(f.may_postdate) r |= (1ULL << 5);
if(f.postdated) r |= (1ULL << 6);
if(f.invalid) r |= (1ULL << 7);
if(f.renewable) r |= (1ULL << 8);
if(f.initial) r |= (1ULL << 9);
if(f.pre_authent) r |= (1ULL << 10);
if(f.hw_authent) r |= (1ULL << 11);
if(f.transited_policy_checked) r |= (1ULL << 12);
if(f.ok_as_delegate) r |= (1ULL << 13);
if(f.enc_pa_rep) r |= (1ULL << 15);
if(f.anonymous) r |= (1ULL << 16);
return r;
}

TicketFlags int2TicketFlags(uint64_t n)
{
	TicketFlags flags;

	memset(&flags, 0, sizeof(flags));

	flags.reserved = (n >> 0) & 1;
	flags.forwardable = (n >> 1) & 1;
	flags.forwarded = (n >> 2) & 1;
	flags.proxiable = (n >> 3) & 1;
	flags.proxy = (n >> 4) & 1;
	flags.may_postdate = (n >> 5) & 1;
	flags.postdated = (n >> 6) & 1;
	flags.invalid = (n >> 7) & 1;
	flags.renewable = (n >> 8) & 1;
	flags.initial = (n >> 9) & 1;
	flags.pre_authent = (n >> 10) & 1;
	flags.hw_authent = (n >> 11) & 1;
	flags.transited_policy_checked = (n >> 12) & 1;
	flags.ok_as_delegate = (n >> 13) & 1;
	flags.enc_pa_rep = (n >> 15) & 1;
	flags.anonymous = (n >> 16) & 1;
	return flags;
}

static struct units TicketFlags_units[] = {
	{"anonymous",	1ULL << 16},
	{"enc-pa-rep",	1ULL << 15},
	{"ok-as-delegate",	1ULL << 13},
	{"transited-policy-checked",	1ULL << 12},
	{"hw-authent",	1ULL << 11},
	{"pre-authent",	1ULL << 10},
	{"initial",	1ULL << 9},
	{"renewable",	1ULL << 8},
	{"invalid",	1ULL << 7},
	{"postdated",	1ULL << 6},
	{"may-postdate",	1ULL << 5},
	{"proxy",	1ULL << 4},
	{"proxiable",	1ULL << 3},
	{"forwarded",	1ULL << 2},
	{"forwardable",	1ULL << 1},
	{"reserved",	1ULL << 0},
	{NULL,	0}
};

const struct units * asn1_TicketFlags_units(void){
return TicketFlags_units;
}

/* template_members: KDCOptions exp exp */
static const struct asn1_template asn1_KDCOptions_bmember__2[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(KDCOptions), ((void *)(uintptr_t)16) },
/* 1 */ { 0, 0, "reserved" },
/* 2 */ { 0, 1, "forwardable" },
/* 3 */ { 0, 2, "forwarded" },
/* 4 */ { 0, 3, "proxiable" },
/* 5 */ { 0, 4, "proxy" },
/* 6 */ { 0, 5, "allow_postdate" },
/* 7 */ { 0, 6, "postdated" },
/* 8 */ { 0, 8, "renewable" },
/* 9 */ { 0, 14, "cname_in_addl_tkt" },
/* 10 */ { 0, 15, "canonicalize" },
/* 11 */ { 0, 16, "request_anonymous" },
/* 12 */ { 0, 26, "disable_transited_check" },
/* 13 */ { 0, 27, "renewable_ok" },
/* 14 */ { 0, 28, "enc_tkt_in_skey" },
/* 15 */ { 0, 30, "renew" },
/* 16 */ { 0, 31, "validate" }
};
/* generate_template_type: KDCOptions_tag__28 */
const struct asn1_template asn1_KDCOptions_tag__28[] = {
/* 0 */ { 0, sizeof(KDCOptions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_KDCOptions_bmember__2 }
};
/* generate_template_type: KDCOptions */
const struct asn1_template asn1_KDCOptions[] = {
/* 0 */ { 0, sizeof(KDCOptions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_KDCOptions_tag__28 }
};

int ASN1CALL
decode_KDCOptions(const unsigned char *p, size_t len, KDCOptions *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KDCOptions, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KDCOptions(unsigned char *p, size_t len, const KDCOptions *data, size_t *size)
{
    return _asn1_encode(asn1_KDCOptions, p, len, data, size);
}


size_t ASN1CALL
length_KDCOptions(const KDCOptions *data)
{
    return _asn1_length(asn1_KDCOptions, data);
}


void ASN1CALL
free_KDCOptions(KDCOptions *data)
{
    _asn1_free_top(asn1_KDCOptions, data);
}


int ASN1CALL
copy_KDCOptions(const KDCOptions *from, KDCOptions *to)
{
    return _asn1_copy_top(asn1_KDCOptions, from, to);
}


char * ASN1CALL
print_KDCOptions(const KDCOptions *data, int flags)
{
    return _asn1_print_top(asn1_KDCOptions, flags, data);
}

uint64_t KDCOptions2int(KDCOptions f)
{
uint64_t r = 0;
if(f.reserved) r |= (1ULL << 0);
if(f.forwardable) r |= (1ULL << 1);
if(f.forwarded) r |= (1ULL << 2);
if(f.proxiable) r |= (1ULL << 3);
if(f.proxy) r |= (1ULL << 4);
if(f.allow_postdate) r |= (1ULL << 5);
if(f.postdated) r |= (1ULL << 6);
if(f.renewable) r |= (1ULL << 8);
if(f.cname_in_addl_tkt) r |= (1ULL << 14);
if(f.canonicalize) r |= (1ULL << 15);
if(f.request_anonymous) r |= (1ULL << 16);
if(f.disable_transited_check) r |= (1ULL << 26);
if(f.renewable_ok) r |= (1ULL << 27);
if(f.enc_tkt_in_skey) r |= (1ULL << 28);
if(f.renew) r |= (1ULL << 30);
if(f.validate) r |= (1ULL << 31);
return r;
}

KDCOptions int2KDCOptions(uint64_t n)
{
	KDCOptions flags;

	memset(&flags, 0, sizeof(flags));

	flags.reserved = (n >> 0) & 1;
	flags.forwardable = (n >> 1) & 1;
	flags.forwarded = (n >> 2) & 1;
	flags.proxiable = (n >> 3) & 1;
	flags.proxy = (n >> 4) & 1;
	flags.allow_postdate = (n >> 5) & 1;
	flags.postdated = (n >> 6) & 1;
	flags.renewable = (n >> 8) & 1;
	flags.cname_in_addl_tkt = (n >> 14) & 1;
	flags.canonicalize = (n >> 15) & 1;
	flags.request_anonymous = (n >> 16) & 1;
	flags.disable_transited_check = (n >> 26) & 1;
	flags.renewable_ok = (n >> 27) & 1;
	flags.enc_tkt_in_skey = (n >> 28) & 1;
	flags.renew = (n >> 30) & 1;
	flags.validate = (n >> 31) & 1;
	return flags;
}

static struct units KDCOptions_units[] = {
	{"validate",	1ULL << 31},
	{"renew",	1ULL << 30},
	{"enc-tkt-in-skey",	1ULL << 28},
	{"renewable-ok",	1ULL << 27},
	{"disable-transited-check",	1ULL << 26},
	{"request-anonymous",	1ULL << 16},
	{"canonicalize",	1ULL << 15},
	{"cname-in-addl-tkt",	1ULL << 14},
	{"renewable",	1ULL << 8},
	{"postdated",	1ULL << 6},
	{"allow-postdate",	1ULL << 5},
	{"proxy",	1ULL << 4},
	{"proxiable",	1ULL << 3},
	{"forwarded",	1ULL << 2},
	{"forwardable",	1ULL << 1},
	{"reserved",	1ULL << 0},
	{NULL,	0}
};

const struct units * asn1_KDCOptions_units(void){
return KDCOptions_units;
}

/* template_members: LR_TYPE exp exp */
const struct asn1_template asn1_LR_TYPE_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)8) },
/* 1 */ { A1_OP_NAME, 0, "LR_NONE" },
/* 2 */ { A1_OP_NAME, 1, "LR_INITIAL_TGT" },
/* 3 */ { A1_OP_NAME, 2, "LR_INITIAL" },
/* 4 */ { A1_OP_NAME, 3, "LR_ISSUE_USE_TGT" },
/* 5 */ { A1_OP_NAME, 4, "LR_RENEWAL" },
/* 6 */ { A1_OP_NAME, 5, "LR_REQUEST" },
/* 7 */ { A1_OP_NAME, 6, "LR_PW_EXPTIME" },
/* 8 */ { A1_OP_NAME, 7, "LR_ACCT_EXPTIME" }
};
/* generate_template_type: LR_TYPE_tag__29 */
const struct asn1_template asn1_LR_TYPE_tag__29[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_LR_TYPE_enum_names }
};
/* generate_template_type: LR_TYPE */
const struct asn1_template asn1_LR_TYPE[] = {
/* 0 */ { 0, sizeof(LR_TYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_LR_TYPE_tag__29 }
};

int ASN1CALL
decode_LR_TYPE(const unsigned char *p, size_t len, LR_TYPE *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_LR_TYPE, 0|0, p, len, data, size);
}


int ASN1CALL
encode_LR_TYPE(unsigned char *p, size_t len, const LR_TYPE *data, size_t *size)
{
    return _asn1_encode(asn1_LR_TYPE, p, len, data, size);
}


size_t ASN1CALL
length_LR_TYPE(const LR_TYPE *data)
{
    return _asn1_length(asn1_LR_TYPE, data);
}


void ASN1CALL
free_LR_TYPE(LR_TYPE *data)
{
    _asn1_free_top(asn1_LR_TYPE, data);
}


int ASN1CALL
copy_LR_TYPE(const LR_TYPE *from, LR_TYPE *to)
{
    return _asn1_copy_top(asn1_LR_TYPE, from, to);
}


char * ASN1CALL
print_LR_TYPE(const LR_TYPE *data, int flags)
{
    return _asn1_print_top(asn1_LR_TYPE, flags, data);
}

/* template_members: LastReq exp exp */
/* template_members: LastReq_val exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: LastReq_val exp exp */
/* generate_template_type: LastReq_val_tag_lr_type_32 */
const struct asn1_template asn1_LastReq_val_tag_lr_type_32[] = {
/* 0 */ { 0, sizeof(LR_TYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_LR_TYPE }
};
/* template_members: LastReq_val exp exp */
/* generate_template_type: LastReq_val_tag_lr_value_33 */
const struct asn1_template asn1_LastReq_val_tag_lr_value_33[] = {
/* 0 */ { 0, sizeof(KerberosTime), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KerberosTime }
};
/* generate_template_type: LastReq_val_tag__31 */
const struct asn1_template asn1_LastReq_val_tag__31[] = {
/* 0 */ { 0, sizeof(struct LastReq_val), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct LastReq_val, lr_type), asn1_LastReq_val_tag_lr_type_32 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct LastReq_val, lr_value), asn1_LastReq_val_tag_lr_value_33 },
/* 3 */ { A1_OP_NAME, 0, "LastReq_val" },
/* 4 */ { A1_OP_NAME, 0, "lr-type" },
/* 5 */ { A1_OP_NAME, 0, "lr-value" }
};
/* generate_template_type: LastReq_seofTstruct_3 */
const struct asn1_template asn1_LastReq_seofTstruct_3[] = {
/* 0 */ { 0, sizeof(struct LastReq_val), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_LastReq_val_tag__31 }
};
/* generate_template_type: LastReq_tag__30 */
const struct asn1_template asn1_LastReq_tag__30[] = {
/* 0 */ { 0, sizeof(LastReq), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_LastReq_seofTstruct_3 }
};
/* generate_template_type: LastReq */
const struct asn1_template asn1_LastReq[] = {
/* 0 */ { 0, sizeof(LastReq), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_LastReq_tag__30 }
};

int ASN1CALL
decode_LastReq(const unsigned char *p, size_t len, LastReq *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_LastReq, 0|0, p, len, data, size);
}


int ASN1CALL
encode_LastReq(unsigned char *p, size_t len, const LastReq *data, size_t *size)
{
    return _asn1_encode(asn1_LastReq, p, len, data, size);
}


size_t ASN1CALL
length_LastReq(const LastReq *data)
{
    return _asn1_length(asn1_LastReq, data);
}


void ASN1CALL
free_LastReq(LastReq *data)
{
    _asn1_free_top(asn1_LastReq, data);
}


int ASN1CALL
copy_LastReq(const LastReq *from, LastReq *to)
{
    return _asn1_copy_top(asn1_LastReq, from, to);
}


char * ASN1CALL
print_LastReq(const LastReq *data, int flags)
{
    return _asn1_print_top(asn1_LastReq, flags, data);
}

/* template_members: EncryptedData exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: EncryptedData exp exp */
/* generate_template_type: EncryptedData_tag_etype_35 */
const struct asn1_template asn1_EncryptedData_tag_etype_35[] = {
/* 0 */ { 0, sizeof(ENCTYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ENCTYPE }
};
/* template_members: EncryptedData exp exp */
/* generate_template_type: EncryptedData_tag_kvno_36 */
/* template_members: EncryptedData exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_cipher_38 */
/* generate_template_type: EncryptedData_tag_cipher_37 */
/* generate_template_type: EncryptedData_tag__34 */
const struct asn1_template asn1_EncryptedData_tag__34[] = {
/* 0 */ { 0, sizeof(struct EncryptedData), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncryptedData, etype), asn1_EncryptedData_tag_etype_35 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct EncryptedData, kvno), asn1_HostAddress_tag_addr_type_16 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct EncryptedData, cipher), asn1_HostAddress_tag_address_17 },
/* 4 */ { A1_OP_NAME, 0, "EncryptedData" },
/* 5 */ { A1_OP_NAME, 0, "etype" },
/* 6 */ { A1_OP_NAME, 0, "kvno" },
/* 7 */ { A1_OP_NAME, 0, "cipher" }
};
/* generate_template_type: EncryptedData */
const struct asn1_template asn1_EncryptedData[] = {
/* 0 */ { 0, sizeof(EncryptedData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncryptedData_tag__34 }
};

int ASN1CALL
decode_EncryptedData(const unsigned char *p, size_t len, EncryptedData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncryptedData, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EncryptedData(unsigned char *p, size_t len, const EncryptedData *data, size_t *size)
{
    return _asn1_encode(asn1_EncryptedData, p, len, data, size);
}


size_t ASN1CALL
length_EncryptedData(const EncryptedData *data)
{
    return _asn1_length(asn1_EncryptedData, data);
}


void ASN1CALL
free_EncryptedData(EncryptedData *data)
{
    _asn1_free_top(asn1_EncryptedData, data);
}


int ASN1CALL
copy_EncryptedData(const EncryptedData *from, EncryptedData *to)
{
    return _asn1_copy_top(asn1_EncryptedData, from, to);
}


char * ASN1CALL
print_EncryptedData(const EncryptedData *data, int flags)
{
    return _asn1_print_top(asn1_EncryptedData, flags, data);
}

/* template_members: EncryptionKey exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: EncryptionKey exp exp */
/* generate_template_type: EncryptionKey_tag_keytype_40 */
/* template_members: EncryptionKey exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_keyvalue_42 */
/* generate_template_type: EncryptionKey_tag_keyvalue_41 */
/* generate_template_type: EncryptionKey_tag__39 */
const struct asn1_template asn1_EncryptionKey_tag__39[] = {
/* 0 */ { 0, sizeof(struct EncryptionKey), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncryptionKey, keytype), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct EncryptionKey, keyvalue), asn1_HostAddress_tag_address_17 },
/* 3 */ { A1_OP_NAME, 0, "EncryptionKey" },
/* 4 */ { A1_OP_NAME, 0, "keytype" },
/* 5 */ { A1_OP_NAME, 0, "keyvalue" }
};
/* generate_template_type: EncryptionKey */
const struct asn1_template asn1_EncryptionKey[] = {
/* 0 */ { 0, sizeof(EncryptionKey), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncryptionKey_tag__39 }
};

int ASN1CALL
decode_EncryptionKey(const unsigned char *p, size_t len, EncryptionKey *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncryptionKey, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EncryptionKey(unsigned char *p, size_t len, const EncryptionKey *data, size_t *size)
{
    return _asn1_encode(asn1_EncryptionKey, p, len, data, size);
}


size_t ASN1CALL
length_EncryptionKey(const EncryptionKey *data)
{
    return _asn1_length(asn1_EncryptionKey, data);
}


void ASN1CALL
free_EncryptionKey(EncryptionKey *data)
{
    _asn1_free_top(asn1_EncryptionKey, data);
}


int ASN1CALL
copy_EncryptionKey(const EncryptionKey *from, EncryptionKey *to)
{
    return _asn1_copy_top(asn1_EncryptionKey, from, to);
}


char * ASN1CALL
print_EncryptionKey(const EncryptionKey *data, int flags)
{
    return _asn1_print_top(asn1_EncryptionKey, flags, data);
}

/* template_members: TransitedEncoding exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: TransitedEncoding exp exp */
/* generate_template_type: TransitedEncoding_tag_tr_type_44 */
/* template_members: TransitedEncoding exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_contents_46 */
/* generate_template_type: TransitedEncoding_tag_contents_45 */
/* generate_template_type: TransitedEncoding_tag__43 */
const struct asn1_template asn1_TransitedEncoding_tag__43[] = {
/* 0 */ { 0, sizeof(struct TransitedEncoding), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TransitedEncoding, tr_type), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct TransitedEncoding, contents), asn1_HostAddress_tag_address_17 },
/* 3 */ { A1_OP_NAME, 0, "TransitedEncoding" },
/* 4 */ { A1_OP_NAME, 0, "tr-type" },
/* 5 */ { A1_OP_NAME, 0, "contents" }
};
/* generate_template_type: TransitedEncoding */
const struct asn1_template asn1_TransitedEncoding[] = {
/* 0 */ { 0, sizeof(TransitedEncoding), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TransitedEncoding_tag__43 }
};

int ASN1CALL
decode_TransitedEncoding(const unsigned char *p, size_t len, TransitedEncoding *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TransitedEncoding, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TransitedEncoding(unsigned char *p, size_t len, const TransitedEncoding *data, size_t *size)
{
    return _asn1_encode(asn1_TransitedEncoding, p, len, data, size);
}


size_t ASN1CALL
length_TransitedEncoding(const TransitedEncoding *data)
{
    return _asn1_length(asn1_TransitedEncoding, data);
}


void ASN1CALL
free_TransitedEncoding(TransitedEncoding *data)
{
    _asn1_free_top(asn1_TransitedEncoding, data);
}


int ASN1CALL
copy_TransitedEncoding(const TransitedEncoding *from, TransitedEncoding *to)
{
    return _asn1_copy_top(asn1_TransitedEncoding, from, to);
}


char * ASN1CALL
print_TransitedEncoding(const TransitedEncoding *data, int flags)
{
    return _asn1_print_top(asn1_TransitedEncoding, flags, data);
}

/* template_members: Ticket exp exp */
/* template_members: Ticket exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: Ticket exp exp */
/* generate_template_type: Ticket_tag_tkt_vno_49 */
/* template_members: Ticket exp exp */
/* generate_template_type: Ticket_tag_realm_50 */
const struct asn1_template asn1_Ticket_tag_realm_50[] = {
/* 0 */ { 0, sizeof(Realm), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Realm }
};
/* template_members: Ticket exp exp */
/* generate_template_type: Ticket_tag_sname_51 */
const struct asn1_template asn1_Ticket_tag_sname_51[] = {
/* 0 */ { 0, sizeof(PrincipalName), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PrincipalName }
};
/* template_members: Ticket exp exp */
/* generate_template_type: Ticket_tag_enc_part_52 */
const struct asn1_template asn1_Ticket_tag_enc_part_52[] = {
/* 0 */ { 0, sizeof(EncryptedData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EncryptedData }
};
/* generate_template_type: Ticket_tag__48 */
const struct asn1_template asn1_Ticket_tag__48[] = {
/* 0 */ { 0, sizeof(struct Ticket), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct Ticket, tkt_vno), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct Ticket, realm), asn1_Ticket_tag_realm_50 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct Ticket, sname), asn1_Ticket_tag_sname_51 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct Ticket, enc_part), asn1_Ticket_tag_enc_part_52 },
/* 5 */ { A1_OP_NAME, 0, "Ticket" },
/* 6 */ { A1_OP_NAME, 0, "tkt-vno" },
/* 7 */ { A1_OP_NAME, 0, "realm" },
/* 8 */ { A1_OP_NAME, 0, "sname" },
/* 9 */ { A1_OP_NAME, 0, "enc-part" }
};
/* generate_template_type: Ticket_tag__47 */
const struct asn1_template asn1_Ticket_tag__47[] = {
/* 0 */ { 0, sizeof(struct Ticket), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Ticket_tag__48 }
};
/* generate_template_type: Ticket */
const struct asn1_template asn1_Ticket[] = {
/* 0 */ { 0, sizeof(Ticket), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,1), 0, asn1_Ticket_tag__47 }
};

int ASN1CALL
decode_Ticket(const unsigned char *p, size_t len, Ticket *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Ticket, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Ticket(unsigned char *p, size_t len, const Ticket *data, size_t *size)
{
    return _asn1_encode(asn1_Ticket, p, len, data, size);
}


size_t ASN1CALL
length_Ticket(const Ticket *data)
{
    return _asn1_length(asn1_Ticket, data);
}


void ASN1CALL
free_Ticket(Ticket *data)
{
    _asn1_free_top(asn1_Ticket, data);
}


int ASN1CALL
copy_Ticket(const Ticket *from, Ticket *to)
{
    return _asn1_copy_top(asn1_Ticket, from, to);
}


char * ASN1CALL
print_Ticket(const Ticket *data, int flags)
{
    return _asn1_print_top(asn1_Ticket, flags, data);
}

/* template_members: EncTicketPart exp exp */
/* template_members: EncTicketPart exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag_flags_55 */
const struct asn1_template asn1_EncTicketPart_tag_flags_55[] = {
/* 0 */ { 0, sizeof(TicketFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TicketFlags }
};
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag_key_56 */
const struct asn1_template asn1_EncTicketPart_tag_key_56[] = {
/* 0 */ { 0, sizeof(EncryptionKey), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EncryptionKey }
};
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag_crealm_57 */
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag_cname_58 */
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag_transited_59 */
const struct asn1_template asn1_EncTicketPart_tag_transited_59[] = {
/* 0 */ { 0, sizeof(TransitedEncoding), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TransitedEncoding }
};
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag_authtime_60 */
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag_starttime_61 */
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag_endtime_62 */
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag_renew_till_63 */
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag_caddr_64 */
const struct asn1_template asn1_EncTicketPart_tag_caddr_64[] = {
/* 0 */ { 0, sizeof(HostAddresses), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_HostAddresses }
};
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag_authorization_data_65 */
const struct asn1_template asn1_EncTicketPart_tag_authorization_data_65[] = {
/* 0 */ { 0, sizeof(AuthorizationData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AuthorizationData }
};
/* generate_template_type: EncTicketPart_tag__54 */
const struct asn1_template asn1_EncTicketPart_tag__54[] = {
/* 0 */ { 0, sizeof(struct EncTicketPart), ((void *)(uintptr_t)23) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncTicketPart, flags), asn1_EncTicketPart_tag_flags_55 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct EncTicketPart, key), asn1_EncTicketPart_tag_key_56 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct EncTicketPart, crealm), asn1_Ticket_tag_realm_50 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct EncTicketPart, cname), asn1_Ticket_tag_sname_51 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct EncTicketPart, transited), asn1_EncTicketPart_tag_transited_59 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct EncTicketPart, authtime), asn1_LastReq_val_tag_lr_value_33 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct EncTicketPart, starttime), asn1_LastReq_val_tag_lr_value_33 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7), offsetof(struct EncTicketPart, endtime), asn1_LastReq_val_tag_lr_value_33 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8)|A1_FLAG_OPTIONAL, offsetof(struct EncTicketPart, renew_till), asn1_LastReq_val_tag_lr_value_33 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9)|A1_FLAG_OPTIONAL, offsetof(struct EncTicketPart, caddr), asn1_EncTicketPart_tag_caddr_64 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,10)|A1_FLAG_OPTIONAL, offsetof(struct EncTicketPart, authorization_data), asn1_EncTicketPart_tag_authorization_data_65 },
/* 12 */ { A1_OP_NAME, 0, "EncTicketPart" },
/* 13 */ { A1_OP_NAME, 0, "flags" },
/* 14 */ { A1_OP_NAME, 0, "key" },
/* 15 */ { A1_OP_NAME, 0, "crealm" },
/* 16 */ { A1_OP_NAME, 0, "cname" },
/* 17 */ { A1_OP_NAME, 0, "transited" },
/* 18 */ { A1_OP_NAME, 0, "authtime" },
/* 19 */ { A1_OP_NAME, 0, "starttime" },
/* 20 */ { A1_OP_NAME, 0, "endtime" },
/* 21 */ { A1_OP_NAME, 0, "renew-till" },
/* 22 */ { A1_OP_NAME, 0, "caddr" },
/* 23 */ { A1_OP_NAME, 0, "authorization-data" }
};
/* generate_template_type: EncTicketPart_tag__53 */
const struct asn1_template asn1_EncTicketPart_tag__53[] = {
/* 0 */ { 0, sizeof(struct EncTicketPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncTicketPart_tag__54 }
};
/* generate_template_type: EncTicketPart */
const struct asn1_template asn1_EncTicketPart[] = {
/* 0 */ { 0, sizeof(EncTicketPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,3), 0, asn1_EncTicketPart_tag__53 }
};

int ASN1CALL
decode_EncTicketPart(const unsigned char *p, size_t len, EncTicketPart *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncTicketPart, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EncTicketPart(unsigned char *p, size_t len, const EncTicketPart *data, size_t *size)
{
    return _asn1_encode(asn1_EncTicketPart, p, len, data, size);
}


size_t ASN1CALL
length_EncTicketPart(const EncTicketPart *data)
{
    return _asn1_length(asn1_EncTicketPart, data);
}


void ASN1CALL
free_EncTicketPart(EncTicketPart *data)
{
    _asn1_free_top(asn1_EncTicketPart, data);
}


int ASN1CALL
copy_EncTicketPart(const EncTicketPart *from, EncTicketPart *to)
{
    return _asn1_copy_top(asn1_EncTicketPart, from, to);
}


char * ASN1CALL
print_EncTicketPart(const EncTicketPart *data, int flags)
{
    return _asn1_print_top(asn1_EncTicketPart, flags, data);
}

/* template_members: Checksum exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: Checksum exp exp */
/* generate_template_type: Checksum_tag_cksumtype_67 */
const struct asn1_template asn1_Checksum_tag_cksumtype_67[] = {
/* 0 */ { 0, sizeof(CKSUMTYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_CKSUMTYPE }
};
/* template_members: Checksum exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_checksum_69 */
/* generate_template_type: Checksum_tag_checksum_68 */
/* generate_template_type: Checksum_tag__66 */
const struct asn1_template asn1_Checksum_tag__66[] = {
/* 0 */ { 0, sizeof(struct Checksum), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct Checksum, cksumtype), asn1_Checksum_tag_cksumtype_67 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct Checksum, checksum), asn1_HostAddress_tag_address_17 },
/* 3 */ { A1_OP_NAME, 0, "Checksum" },
/* 4 */ { A1_OP_NAME, 0, "cksumtype" },
/* 5 */ { A1_OP_NAME, 0, "checksum" }
};
/* generate_template_type: Checksum */
const struct asn1_template asn1_Checksum[] = {
/* 0 */ { 0, sizeof(Checksum), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Checksum_tag__66 }
};

int ASN1CALL
decode_Checksum(const unsigned char *p, size_t len, Checksum *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Checksum, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Checksum(unsigned char *p, size_t len, const Checksum *data, size_t *size)
{
    return _asn1_encode(asn1_Checksum, p, len, data, size);
}


size_t ASN1CALL
length_Checksum(const Checksum *data)
{
    return _asn1_length(asn1_Checksum, data);
}


void ASN1CALL
free_Checksum(Checksum *data)
{
    _asn1_free_top(asn1_Checksum, data);
}


int ASN1CALL
copy_Checksum(const Checksum *from, Checksum *to)
{
    return _asn1_copy_top(asn1_Checksum, from, to);
}


char * ASN1CALL
print_Checksum(const Checksum *data, int flags)
{
    return _asn1_print_top(asn1_Checksum, flags, data);
}

/* template_members: EncKDCRepPart exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_key_71 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_last_req_72 */
const struct asn1_template asn1_EncKDCRepPart_tag_last_req_72[] = {
/* 0 */ { 0, sizeof(LastReq), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_LastReq }
};
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_nonce_73 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_key_expiration_74 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_flags_75 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_authtime_76 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_starttime_77 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_endtime_78 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_renew_till_79 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_srealm_80 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_sname_81 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_caddr_82 */
/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag_encrypted_pa_data_83 */
const struct asn1_template asn1_EncKDCRepPart_tag_encrypted_pa_data_83[] = {
/* 0 */ { 0, sizeof(METHOD_DATA), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_METHOD_DATA }
};
/* generate_template_type: EncKDCRepPart_tag__70 */
const struct asn1_template asn1_EncKDCRepPart_tag__70[] = {
/* 0 */ { 0, sizeof(struct EncKDCRepPart), ((void *)(uintptr_t)27) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncKDCRepPart, key), asn1_EncTicketPart_tag_key_56 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct EncKDCRepPart, last_req), asn1_EncKDCRepPart_tag_last_req_72 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct EncKDCRepPart, nonce), asn1_HostAddress_tag_addr_type_16 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct EncKDCRepPart, key_expiration), asn1_LastReq_val_tag_lr_value_33 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct EncKDCRepPart, flags), asn1_EncTicketPart_tag_flags_55 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct EncKDCRepPart, authtime), asn1_LastReq_val_tag_lr_value_33 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct EncKDCRepPart, starttime), asn1_LastReq_val_tag_lr_value_33 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7), offsetof(struct EncKDCRepPart, endtime), asn1_LastReq_val_tag_lr_value_33 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8)|A1_FLAG_OPTIONAL, offsetof(struct EncKDCRepPart, renew_till), asn1_LastReq_val_tag_lr_value_33 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9), offsetof(struct EncKDCRepPart, srealm), asn1_Ticket_tag_realm_50 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,10), offsetof(struct EncKDCRepPart, sname), asn1_Ticket_tag_sname_51 },
/* 12 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,11)|A1_FLAG_OPTIONAL, offsetof(struct EncKDCRepPart, caddr), asn1_EncTicketPart_tag_caddr_64 },
/* 13 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,12)|A1_FLAG_OPTIONAL, offsetof(struct EncKDCRepPart, encrypted_pa_data), asn1_EncKDCRepPart_tag_encrypted_pa_data_83 },
/* 14 */ { A1_OP_NAME, 0, "EncKDCRepPart" },
/* 15 */ { A1_OP_NAME, 0, "key" },
/* 16 */ { A1_OP_NAME, 0, "last-req" },
/* 17 */ { A1_OP_NAME, 0, "nonce" },
/* 18 */ { A1_OP_NAME, 0, "key-expiration" },
/* 19 */ { A1_OP_NAME, 0, "flags" },
/* 20 */ { A1_OP_NAME, 0, "authtime" },
/* 21 */ { A1_OP_NAME, 0, "starttime" },
/* 22 */ { A1_OP_NAME, 0, "endtime" },
/* 23 */ { A1_OP_NAME, 0, "renew-till" },
/* 24 */ { A1_OP_NAME, 0, "srealm" },
/* 25 */ { A1_OP_NAME, 0, "sname" },
/* 26 */ { A1_OP_NAME, 0, "caddr" },
/* 27 */ { A1_OP_NAME, 0, "encrypted-pa-data" }
};
/* generate_template_type: EncKDCRepPart */
const struct asn1_template asn1_EncKDCRepPart[] = {
/* 0 */ { 0, sizeof(EncKDCRepPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncKDCRepPart_tag__70 }
};

int ASN1CALL
decode_EncKDCRepPart(const unsigned char *p, size_t len, EncKDCRepPart *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncKDCRepPart, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EncKDCRepPart(unsigned char *p, size_t len, const EncKDCRepPart *data, size_t *size)
{
    return _asn1_encode(asn1_EncKDCRepPart, p, len, data, size);
}


size_t ASN1CALL
length_EncKDCRepPart(const EncKDCRepPart *data)
{
    return _asn1_length(asn1_EncKDCRepPart, data);
}


void ASN1CALL
free_EncKDCRepPart(EncKDCRepPart *data)
{
    _asn1_free_top(asn1_EncKDCRepPart, data);
}


int ASN1CALL
copy_EncKDCRepPart(const EncKDCRepPart *from, EncKDCRepPart *to)
{
    return _asn1_copy_top(asn1_EncKDCRepPart, from, to);
}


char * ASN1CALL
print_EncKDCRepPart(const EncKDCRepPart *data, int flags)
{
    return _asn1_print_top(asn1_EncKDCRepPart, flags, data);
}

/* template_members: EncKDCRepPart exp exp */
/* generate_template_type: EncKDCRepPart_tag__84 */
const struct asn1_template asn1_EncKDCRepPart_tag__84[] = {
/* 0 */ { 0, sizeof(EncKDCRepPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EncKDCRepPart }
};
/* generate_template_type: PrincipalNameAttrSrc_choice_enc_kdc_rep_part */
const struct asn1_template asn1_PrincipalNameAttrSrc_choice_enc_kdc_rep_part[] = {
/* 0 */ { 0, sizeof(EncKDCRepPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_EncKDCRepPart_tag__84 }
};
/* template_members: EncTicketPart exp exp */
/* generate_template_type: EncTicketPart_tag__85 */
const struct asn1_template asn1_EncTicketPart_tag__85[] = {
/* 0 */ { 0, sizeof(EncTicketPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EncTicketPart }
};
/* generate_template_type: PrincipalNameAttrSrc_choice_enc_ticket_part */
const struct asn1_template asn1_PrincipalNameAttrSrc_choice_enc_ticket_part[] = {
/* 0 */ { 0, sizeof(EncTicketPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), 0, asn1_EncTicketPart_tag__85 }
};
static const struct asn1_template asn1_choice_PrincipalNameAttrSrc_0[] = {
/* 0 */ { 0, offsetof(PrincipalNameAttrSrc, element), ((void *)(uintptr_t)4) },
/* 1 */ { choice_PrincipalNameAttrSrc_enc_kdc_rep_part, offsetof(PrincipalNameAttrSrc, u.enc_kdc_rep_part), asn1_PrincipalNameAttrSrc_choice_enc_kdc_rep_part },
/* 2 */ { choice_PrincipalNameAttrSrc_enc_ticket_part, offsetof(PrincipalNameAttrSrc, u.enc_ticket_part), asn1_PrincipalNameAttrSrc_choice_enc_ticket_part },
/* 3 */ { 0, 0, "enc-kdc-rep-part" },
/* 4 */ { 0, 0, "enc-ticket-part" }
};
/* generate_template_type: PrincipalNameAttrSrc */
const struct asn1_template asn1_PrincipalNameAttrSrc[] = {
/* 0 */ { 0, sizeof(PrincipalNameAttrSrc), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_PrincipalNameAttrSrc_0 }
};

int ASN1CALL
decode_PrincipalNameAttrSrc(const unsigned char *p, size_t len, PrincipalNameAttrSrc *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PrincipalNameAttrSrc, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PrincipalNameAttrSrc(unsigned char *p, size_t len, const PrincipalNameAttrSrc *data, size_t *size)
{
    return _asn1_encode(asn1_PrincipalNameAttrSrc, p, len, data, size);
}


size_t ASN1CALL
length_PrincipalNameAttrSrc(const PrincipalNameAttrSrc *data)
{
    return _asn1_length(asn1_PrincipalNameAttrSrc, data);
}


void ASN1CALL
free_PrincipalNameAttrSrc(PrincipalNameAttrSrc *data)
{
    _asn1_free_top(asn1_PrincipalNameAttrSrc, data);
}


int ASN1CALL
copy_PrincipalNameAttrSrc(const PrincipalNameAttrSrc *from, PrincipalNameAttrSrc *to)
{
    return _asn1_copy_top(asn1_PrincipalNameAttrSrc, from, to);
}


char * ASN1CALL
print_PrincipalNameAttrSrc(const PrincipalNameAttrSrc *data, int flags)
{
    return _asn1_print_top(asn1_PrincipalNameAttrSrc, flags, data);
}

static const struct asn1_type_func asn1_extern_PrincipalNameAttrs_pac = {
	(asn1_type_encode)0,
	(asn1_type_decode)0,
	(asn1_type_length)0,
	(asn1_type_copy)0,
	(asn1_type_release)0,
	(asn1_type_print)0,
	sizeof(void *)
};
/* template_members: PrincipalNameAttrs exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PrincipalNameAttrs exp exp */
/* template_members: int exp exp */
/* generate_template_type: int_tag_authenticated_88 */
const struct asn1_template asn1_int_tag_authenticated_88[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_BOOLEAN), 0, NULL }
};
/* generate_template_type: PrincipalNameAttrs_tag_authenticated_87 */
const struct asn1_template asn1_PrincipalNameAttrs_tag_authenticated_87[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Boolean), 0, asn1_int_tag_authenticated_88 }
};
/* template_members: PrincipalNameAttrs exp exp */
/* generate_template_type: PrincipalNameAttrs_tag_source_89 */
const struct asn1_template asn1_PrincipalNameAttrs_tag_source_89[] = {
/* 0 */ { 0, sizeof(PrincipalNameAttrSrc), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PrincipalNameAttrSrc }
};
/* template_members: PrincipalNameAttrs exp exp */
/* generate_template_type: PrincipalNameAttrs_tag_authenticator_ad_90 */
/* template_members: PrincipalNameAttrs exp exp */
/* generate_template_type: PrincipalNameAttrs_tag_peer_realm_91 */
/* template_members: PrincipalNameAttrs exp exp */
/* generate_template_type: PrincipalNameAttrs_tag_transited_92 */
/* template_members: PrincipalNameAttrs exp exp */
/* template_members: int exp exp */
/* generate_template_type: int_tag_pac_verified_94 */
/* generate_template_type: PrincipalNameAttrs_tag_pac_verified_93 */
/* template_members: PrincipalNameAttrs exp exp */
/* template_members: int exp exp */
/* generate_template_type: int_tag_kdc_issued_verified_96 */
/* generate_template_type: PrincipalNameAttrs_tag_kdc_issued_verified_95 */
/* template_members: PrincipalNameAttrs exp exp */
/* generate_template_type: PrincipalNameAttrs_tag_want_ad_97 */
/* generate_template_type: PrincipalNameAttrs_tag__86 */
const struct asn1_template asn1_PrincipalNameAttrs_tag__86[] = {
/* 0 */ { 0, sizeof(struct PrincipalNameAttrs), ((void *)(uintptr_t)18) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PrincipalNameAttrs, authenticated), asn1_PrincipalNameAttrs_tag_authenticated_87 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PrincipalNameAttrs, source), asn1_PrincipalNameAttrs_tag_source_89 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PrincipalNameAttrs, authenticator_ad), asn1_EncTicketPart_tag_authorization_data_65 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct PrincipalNameAttrs, peer_realm), asn1_Ticket_tag_realm_50 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct PrincipalNameAttrs, transited), asn1_EncTicketPart_tag_transited_59 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct PrincipalNameAttrs, pac_verified), asn1_PrincipalNameAttrs_tag_authenticated_87 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct PrincipalNameAttrs, kdc_issued_verified), asn1_PrincipalNameAttrs_tag_authenticated_87 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct PrincipalNameAttrs, want_ad), asn1_EncTicketPart_tag_authorization_data_65 },
/* 9 */ { A1_OP_TYPE_DECORATE_EXTERN , offsetof(struct PrincipalNameAttrs, pac), &asn1_extern_PrincipalNameAttrs_pac },
/* 10 */ { A1_OP_NAME, 0, "PrincipalNameAttrs" },
/* 11 */ { A1_OP_NAME, 0, "authenticated" },
/* 12 */ { A1_OP_NAME, 0, "source" },
/* 13 */ { A1_OP_NAME, 0, "authenticator-ad" },
/* 14 */ { A1_OP_NAME, 0, "peer-realm" },
/* 15 */ { A1_OP_NAME, 0, "transited" },
/* 16 */ { A1_OP_NAME, 0, "pac-verified" },
/* 17 */ { A1_OP_NAME, 0, "kdc-issued-verified" },
/* 18 */ { A1_OP_NAME, 0, "want-ad" }
};
/* generate_template_type: PrincipalNameAttrs */
const struct asn1_template asn1_PrincipalNameAttrs[] = {
/* 0 */ { 0, sizeof(PrincipalNameAttrs), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PrincipalNameAttrs_tag__86 }
};

int ASN1CALL
decode_PrincipalNameAttrs(const unsigned char *p, size_t len, PrincipalNameAttrs *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PrincipalNameAttrs, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PrincipalNameAttrs(unsigned char *p, size_t len, const PrincipalNameAttrs *data, size_t *size)
{
    return _asn1_encode(asn1_PrincipalNameAttrs, p, len, data, size);
}


size_t ASN1CALL
length_PrincipalNameAttrs(const PrincipalNameAttrs *data)
{
    return _asn1_length(asn1_PrincipalNameAttrs, data);
}


void ASN1CALL
free_PrincipalNameAttrs(PrincipalNameAttrs *data)
{
    _asn1_free_top(asn1_PrincipalNameAttrs, data);
}


int ASN1CALL
copy_PrincipalNameAttrs(const PrincipalNameAttrs *from, PrincipalNameAttrs *to)
{
    return _asn1_copy_top(asn1_PrincipalNameAttrs, from, to);
}


char * ASN1CALL
print_PrincipalNameAttrs(const PrincipalNameAttrs *data, int flags)
{
    return _asn1_print_top(asn1_PrincipalNameAttrs, flags, data);
}

/* template_members: CompositePrincipal exp exp */
/* template_members: CompositePrincipal exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: CompositePrincipal exp exp */
/* generate_template_type: CompositePrincipal_tag_name_100 */
/* template_members: CompositePrincipal exp exp */
/* generate_template_type: CompositePrincipal_tag_realm_101 */
/* template_members: CompositePrincipal exp exp */
/* generate_template_type: CompositePrincipal_tag_nameattrs_102 */
const struct asn1_template asn1_CompositePrincipal_tag_nameattrs_102[] = {
/* 0 */ { 0, sizeof(PrincipalNameAttrs), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PrincipalNameAttrs }
};
/* generate_template_type: CompositePrincipal_tag__99 */
const struct asn1_template asn1_CompositePrincipal_tag__99[] = {
/* 0 */ { 0, sizeof(struct CompositePrincipal), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct CompositePrincipal, name), asn1_Ticket_tag_sname_51 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct CompositePrincipal, realm), asn1_Ticket_tag_realm_50 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct CompositePrincipal, nameattrs), asn1_CompositePrincipal_tag_nameattrs_102 },
/* 4 */ { A1_OP_NAME, 0, "CompositePrincipal" },
/* 5 */ { A1_OP_NAME, 0, "name" },
/* 6 */ { A1_OP_NAME, 0, "realm" },
/* 7 */ { A1_OP_NAME, 0, "nameattrs" }
};
/* generate_template_type: CompositePrincipal_tag__98 */
const struct asn1_template asn1_CompositePrincipal_tag__98[] = {
/* 0 */ { 0, sizeof(struct CompositePrincipal), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_CompositePrincipal_tag__99 }
};
/* generate_template_type: CompositePrincipal */
const struct asn1_template asn1_CompositePrincipal[] = {
/* 0 */ { 0, sizeof(CompositePrincipal), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,48), 0, asn1_CompositePrincipal_tag__98 }
};

int ASN1CALL
decode_CompositePrincipal(const unsigned char *p, size_t len, CompositePrincipal *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_CompositePrincipal, 0|0, p, len, data, size);
}


int ASN1CALL
encode_CompositePrincipal(unsigned char *p, size_t len, const CompositePrincipal *data, size_t *size)
{
    return _asn1_encode(asn1_CompositePrincipal, p, len, data, size);
}


size_t ASN1CALL
length_CompositePrincipal(const CompositePrincipal *data)
{
    return _asn1_length(asn1_CompositePrincipal, data);
}


void ASN1CALL
free_CompositePrincipal(CompositePrincipal *data)
{
    _asn1_free_top(asn1_CompositePrincipal, data);
}


int ASN1CALL
copy_CompositePrincipal(const CompositePrincipal *from, CompositePrincipal *to)
{
    return _asn1_copy_top(asn1_CompositePrincipal, from, to);
}


char * ASN1CALL
print_CompositePrincipal(const CompositePrincipal *data, int flags)
{
    return _asn1_print_top(asn1_CompositePrincipal, flags, data);
}

/* template_members: Principal exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: Principal exp exp */
/* generate_template_type: Principal_tag_name_104 */
/* template_members: Principal exp exp */
/* generate_template_type: Principal_tag_realm_105 */
/* generate_template_type: Principal_tag__103 */
const struct asn1_template asn1_Principal_tag__103[] = {
/* 0 */ { 0, sizeof(struct Principal), ((void *)(uintptr_t)6) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct Principal, name), asn1_Ticket_tag_sname_51 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct Principal, realm), asn1_Ticket_tag_realm_50 },
/* 3 */ { A1_OP_TYPE_DECORATE |A1_FLAG_OPTIONAL, offsetof(struct Principal, nameattrs), asn1_PrincipalNameAttrs },
/* 4 */ { A1_OP_NAME, 0, "Principal" },
/* 5 */ { A1_OP_NAME, 0, "name" },
/* 6 */ { A1_OP_NAME, 0, "realm" }
};
/* generate_template_type: Principal */
const struct asn1_template asn1_Principal[] = {
/* 0 */ { 0, sizeof(Principal), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Principal_tag__103 }
};

int ASN1CALL
decode_Principal(const unsigned char *p, size_t len, Principal *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Principal, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Principal(unsigned char *p, size_t len, const Principal *data, size_t *size)
{
    return _asn1_encode(asn1_Principal, p, len, data, size);
}


size_t ASN1CALL
length_Principal(const Principal *data)
{
    return _asn1_length(asn1_Principal, data);
}


void ASN1CALL
free_Principal(Principal *data)
{
    _asn1_free_top(asn1_Principal, data);
}


int ASN1CALL
copy_Principal(const Principal *from, Principal *to)
{
    return _asn1_copy_top(asn1_Principal, from, to);
}


char * ASN1CALL
print_Principal(const Principal *data, int flags)
{
    return _asn1_print_top(asn1_Principal, flags, data);
}

/* template_members: Principals exp exp */
/* generate_template_type: Principal_seofTstruct_4 */
const struct asn1_template asn1_Principal_seofTstruct_4[] = {
/* 0 */ { 0, sizeof(Principal), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Principal }
};
/* generate_template_type: Principals_tag__106 */
const struct asn1_template asn1_Principals_tag__106[] = {
/* 0 */ { 0, sizeof(Principal), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_Principal_seofTstruct_4 }
};
/* generate_template_type: Principals */
const struct asn1_template asn1_Principals[] = {
/* 0 */ { 0, sizeof(Principals), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Principals_tag__106 }
};

int ASN1CALL
decode_Principals(const unsigned char *p, size_t len, Principals *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Principals, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Principals(unsigned char *p, size_t len, const Principals *data, size_t *size)
{
    return _asn1_encode(asn1_Principals, p, len, data, size);
}


size_t ASN1CALL
length_Principals(const Principals *data)
{
    return _asn1_length(asn1_Principals, data);
}


void ASN1CALL
free_Principals(Principals *data)
{
    _asn1_free_top(asn1_Principals, data);
}


int ASN1CALL
copy_Principals(const Principals *from, Principals *to)
{
    return _asn1_copy_top(asn1_Principals, from, to);
}


char * ASN1CALL
print_Principals(const Principals *data, int flags)
{
    return _asn1_print_top(asn1_Principals, flags, data);
}

int ASN1CALL
add_Principals(Principals *data, const Principal *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_Principal(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_Principals(Principals *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_Principal(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: Authenticator exp exp */
/* template_members: Authenticator exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: Authenticator exp exp */
/* generate_template_type: Authenticator_tag_authenticator_vno_109 */
/* template_members: Authenticator exp exp */
/* generate_template_type: Authenticator_tag_crealm_110 */
/* template_members: Authenticator exp exp */
/* generate_template_type: Authenticator_tag_cname_111 */
/* template_members: Authenticator exp exp */
/* generate_template_type: Authenticator_tag_cksum_112 */
const struct asn1_template asn1_Authenticator_tag_cksum_112[] = {
/* 0 */ { 0, sizeof(Checksum), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Checksum }
};
/* template_members: Authenticator exp exp */
/* generate_template_type: Authenticator_tag_cusec_113 */
/* template_members: Authenticator exp exp */
/* generate_template_type: Authenticator_tag_ctime_114 */
/* template_members: Authenticator exp exp */
/* generate_template_type: Authenticator_tag_subkey_115 */
/* template_members: Authenticator exp exp */
/* generate_template_type: Authenticator_tag_seq_number_116 */
const struct asn1_template asn1_Authenticator_tag_seq_number_116[] = {
/* 0 */ { 0, sizeof(Krb5UInt32), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Krb5UInt32 }
};
/* template_members: Authenticator exp exp */
/* generate_template_type: Authenticator_tag_authorization_data_117 */
/* generate_template_type: Authenticator_tag__108 */
const struct asn1_template asn1_Authenticator_tag__108[] = {
/* 0 */ { 0, sizeof(struct Authenticator), ((void *)(uintptr_t)19) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct Authenticator, authenticator_vno), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct Authenticator, crealm), asn1_Ticket_tag_realm_50 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct Authenticator, cname), asn1_Ticket_tag_sname_51 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct Authenticator, cksum), asn1_Authenticator_tag_cksum_112 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct Authenticator, cusec), asn1_HostAddress_tag_addr_type_16 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct Authenticator, ctime), asn1_LastReq_val_tag_lr_value_33 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct Authenticator, subkey), asn1_EncTicketPart_tag_key_56 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct Authenticator, seq_number), asn1_Authenticator_tag_seq_number_116 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8)|A1_FLAG_OPTIONAL, offsetof(struct Authenticator, authorization_data), asn1_EncTicketPart_tag_authorization_data_65 },
/* 10 */ { A1_OP_NAME, 0, "Authenticator" },
/* 11 */ { A1_OP_NAME, 0, "authenticator-vno" },
/* 12 */ { A1_OP_NAME, 0, "crealm" },
/* 13 */ { A1_OP_NAME, 0, "cname" },
/* 14 */ { A1_OP_NAME, 0, "cksum" },
/* 15 */ { A1_OP_NAME, 0, "cusec" },
/* 16 */ { A1_OP_NAME, 0, "ctime" },
/* 17 */ { A1_OP_NAME, 0, "subkey" },
/* 18 */ { A1_OP_NAME, 0, "seq-number" },
/* 19 */ { A1_OP_NAME, 0, "authorization-data" }
};
/* generate_template_type: Authenticator_tag__107 */
const struct asn1_template asn1_Authenticator_tag__107[] = {
/* 0 */ { 0, sizeof(struct Authenticator), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_Authenticator_tag__108 }
};
/* generate_template_type: Authenticator */
const struct asn1_template asn1_Authenticator[] = {
/* 0 */ { 0, sizeof(Authenticator), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,2), 0, asn1_Authenticator_tag__107 }
};

int ASN1CALL
decode_Authenticator(const unsigned char *p, size_t len, Authenticator *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_Authenticator, 0|0, p, len, data, size);
}


int ASN1CALL
encode_Authenticator(unsigned char *p, size_t len, const Authenticator *data, size_t *size)
{
    return _asn1_encode(asn1_Authenticator, p, len, data, size);
}


size_t ASN1CALL
length_Authenticator(const Authenticator *data)
{
    return _asn1_length(asn1_Authenticator, data);
}


void ASN1CALL
free_Authenticator(Authenticator *data)
{
    _asn1_free_top(asn1_Authenticator, data);
}


int ASN1CALL
copy_Authenticator(const Authenticator *from, Authenticator *to)
{
    return _asn1_copy_top(asn1_Authenticator, from, to);
}


char * ASN1CALL
print_Authenticator(const Authenticator *data, int flags)
{
    return _asn1_print_top(asn1_Authenticator, flags, data);
}

/* template_members: PA_DATA exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_DATA exp exp */
/* generate_template_type: PA_DATA_tag_padata_type_119 */
const struct asn1_template asn1_PA_DATA_tag_padata_type_119[] = {
/* 0 */ { 0, sizeof(PADATA_TYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PADATA_TYPE }
};
/* template_members: PA_DATA exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_padata_value_121 */
/* generate_template_type: PA_DATA_tag_padata_value_120 */
/* generate_template_type: PA_DATA_tag__118 */
const struct asn1_template asn1_PA_DATA_tag__118[] = {
/* 0 */ { 0, sizeof(struct PA_DATA), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_DATA, padata_type), asn1_PA_DATA_tag_padata_type_119 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct PA_DATA, padata_value), asn1_HostAddress_tag_address_17 },
/* 3 */ { A1_OP_NAME, 0, "PA_DATA" },
/* 4 */ { A1_OP_NAME, 0, "padata-type" },
/* 5 */ { A1_OP_NAME, 0, "padata-value" }
};
/* generate_template_type: PA_DATA */
const struct asn1_template asn1_PA_DATA[] = {
/* 0 */ { 0, sizeof(PA_DATA), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_DATA_tag__118 }
};

int ASN1CALL
decode_PA_DATA(const unsigned char *p, size_t len, PA_DATA *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_DATA, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_DATA(unsigned char *p, size_t len, const PA_DATA *data, size_t *size)
{
    return _asn1_encode(asn1_PA_DATA, p, len, data, size);
}


size_t ASN1CALL
length_PA_DATA(const PA_DATA *data)
{
    return _asn1_length(asn1_PA_DATA, data);
}


void ASN1CALL
free_PA_DATA(PA_DATA *data)
{
    _asn1_free_top(asn1_PA_DATA, data);
}


int ASN1CALL
copy_PA_DATA(const PA_DATA *from, PA_DATA *to)
{
    return _asn1_copy_top(asn1_PA_DATA, from, to);
}


char * ASN1CALL
print_PA_DATA(const PA_DATA *data, int flags)
{
    return _asn1_print_top(asn1_PA_DATA, flags, data);
}

/* template_members: ETYPE_INFO_ENTRY exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: ETYPE_INFO_ENTRY exp exp */
/* generate_template_type: ETYPE_INFO_ENTRY_tag_etype_123 */
/* template_members: ETYPE_INFO_ENTRY exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_salt_125 */
/* generate_template_type: ETYPE_INFO_ENTRY_tag_salt_124 */
/* template_members: ETYPE_INFO_ENTRY exp exp */
/* generate_template_type: ETYPE_INFO_ENTRY_tag_salttype_126 */
/* generate_template_type: ETYPE_INFO_ENTRY_tag__122 */
const struct asn1_template asn1_ETYPE_INFO_ENTRY_tag__122[] = {
/* 0 */ { 0, sizeof(struct ETYPE_INFO_ENTRY), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct ETYPE_INFO_ENTRY, etype), asn1_EncryptedData_tag_etype_35 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct ETYPE_INFO_ENTRY, salt), asn1_HostAddress_tag_address_17 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct ETYPE_INFO_ENTRY, salttype), asn1_HostAddress_tag_addr_type_16 },
/* 4 */ { A1_OP_NAME, 0, "ETYPE_INFO_ENTRY" },
/* 5 */ { A1_OP_NAME, 0, "etype" },
/* 6 */ { A1_OP_NAME, 0, "salt" },
/* 7 */ { A1_OP_NAME, 0, "salttype" }
};
/* generate_template_type: ETYPE_INFO_ENTRY */
const struct asn1_template asn1_ETYPE_INFO_ENTRY[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO_ENTRY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ETYPE_INFO_ENTRY_tag__122 }
};

int ASN1CALL
decode_ETYPE_INFO_ENTRY(const unsigned char *p, size_t len, ETYPE_INFO_ENTRY *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ETYPE_INFO_ENTRY, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ETYPE_INFO_ENTRY(unsigned char *p, size_t len, const ETYPE_INFO_ENTRY *data, size_t *size)
{
    return _asn1_encode(asn1_ETYPE_INFO_ENTRY, p, len, data, size);
}


size_t ASN1CALL
length_ETYPE_INFO_ENTRY(const ETYPE_INFO_ENTRY *data)
{
    return _asn1_length(asn1_ETYPE_INFO_ENTRY, data);
}


void ASN1CALL
free_ETYPE_INFO_ENTRY(ETYPE_INFO_ENTRY *data)
{
    _asn1_free_top(asn1_ETYPE_INFO_ENTRY, data);
}


int ASN1CALL
copy_ETYPE_INFO_ENTRY(const ETYPE_INFO_ENTRY *from, ETYPE_INFO_ENTRY *to)
{
    return _asn1_copy_top(asn1_ETYPE_INFO_ENTRY, from, to);
}


char * ASN1CALL
print_ETYPE_INFO_ENTRY(const ETYPE_INFO_ENTRY *data, int flags)
{
    return _asn1_print_top(asn1_ETYPE_INFO_ENTRY, flags, data);
}

/* template_members: ETYPE_INFO exp exp */
/* generate_template_type: ETYPE_INFO_ENTRY_seofTstruct_5 */
const struct asn1_template asn1_ETYPE_INFO_ENTRY_seofTstruct_5[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO_ENTRY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ETYPE_INFO_ENTRY }
};
/* generate_template_type: ETYPE_INFO_tag__127 */
const struct asn1_template asn1_ETYPE_INFO_tag__127[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO_ENTRY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_ETYPE_INFO_ENTRY_seofTstruct_5 }
};
/* generate_template_type: ETYPE_INFO */
const struct asn1_template asn1_ETYPE_INFO[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ETYPE_INFO_tag__127 }
};

int ASN1CALL
decode_ETYPE_INFO(const unsigned char *p, size_t len, ETYPE_INFO *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ETYPE_INFO, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ETYPE_INFO(unsigned char *p, size_t len, const ETYPE_INFO *data, size_t *size)
{
    return _asn1_encode(asn1_ETYPE_INFO, p, len, data, size);
}


size_t ASN1CALL
length_ETYPE_INFO(const ETYPE_INFO *data)
{
    return _asn1_length(asn1_ETYPE_INFO, data);
}


void ASN1CALL
free_ETYPE_INFO(ETYPE_INFO *data)
{
    _asn1_free_top(asn1_ETYPE_INFO, data);
}


int ASN1CALL
copy_ETYPE_INFO(const ETYPE_INFO *from, ETYPE_INFO *to)
{
    return _asn1_copy_top(asn1_ETYPE_INFO, from, to);
}


char * ASN1CALL
print_ETYPE_INFO(const ETYPE_INFO *data, int flags)
{
    return _asn1_print_top(asn1_ETYPE_INFO, flags, data);
}

int ASN1CALL
add_ETYPE_INFO(ETYPE_INFO *data, const ETYPE_INFO_ENTRY *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_ETYPE_INFO_ENTRY(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_ETYPE_INFO(ETYPE_INFO *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_ETYPE_INFO_ENTRY(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: ETYPE_INFO2_ENTRY exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: ETYPE_INFO2_ENTRY exp exp */
/* generate_template_type: ETYPE_INFO2_ENTRY_tag_etype_129 */
/* template_members: ETYPE_INFO2_ENTRY exp exp */
/* generate_template_type: ETYPE_INFO2_ENTRY_tag_salt_130 */
const struct asn1_template asn1_ETYPE_INFO2_ENTRY_tag_salt_130[] = {
/* 0 */ { 0, sizeof(KerberosString), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KerberosString }
};
/* template_members: ETYPE_INFO2_ENTRY exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_s2kparams_132 */
/* generate_template_type: ETYPE_INFO2_ENTRY_tag_s2kparams_131 */
/* generate_template_type: ETYPE_INFO2_ENTRY_tag__128 */
const struct asn1_template asn1_ETYPE_INFO2_ENTRY_tag__128[] = {
/* 0 */ { 0, sizeof(struct ETYPE_INFO2_ENTRY), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct ETYPE_INFO2_ENTRY, etype), asn1_EncryptedData_tag_etype_35 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct ETYPE_INFO2_ENTRY, salt), asn1_ETYPE_INFO2_ENTRY_tag_salt_130 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct ETYPE_INFO2_ENTRY, s2kparams), asn1_HostAddress_tag_address_17 },
/* 4 */ { A1_OP_NAME, 0, "ETYPE_INFO2_ENTRY" },
/* 5 */ { A1_OP_NAME, 0, "etype" },
/* 6 */ { A1_OP_NAME, 0, "salt" },
/* 7 */ { A1_OP_NAME, 0, "s2kparams" }
};
/* generate_template_type: ETYPE_INFO2_ENTRY */
const struct asn1_template asn1_ETYPE_INFO2_ENTRY[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO2_ENTRY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ETYPE_INFO2_ENTRY_tag__128 }
};

int ASN1CALL
decode_ETYPE_INFO2_ENTRY(const unsigned char *p, size_t len, ETYPE_INFO2_ENTRY *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ETYPE_INFO2_ENTRY, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ETYPE_INFO2_ENTRY(unsigned char *p, size_t len, const ETYPE_INFO2_ENTRY *data, size_t *size)
{
    return _asn1_encode(asn1_ETYPE_INFO2_ENTRY, p, len, data, size);
}


size_t ASN1CALL
length_ETYPE_INFO2_ENTRY(const ETYPE_INFO2_ENTRY *data)
{
    return _asn1_length(asn1_ETYPE_INFO2_ENTRY, data);
}


void ASN1CALL
free_ETYPE_INFO2_ENTRY(ETYPE_INFO2_ENTRY *data)
{
    _asn1_free_top(asn1_ETYPE_INFO2_ENTRY, data);
}


int ASN1CALL
copy_ETYPE_INFO2_ENTRY(const ETYPE_INFO2_ENTRY *from, ETYPE_INFO2_ENTRY *to)
{
    return _asn1_copy_top(asn1_ETYPE_INFO2_ENTRY, from, to);
}


char * ASN1CALL
print_ETYPE_INFO2_ENTRY(const ETYPE_INFO2_ENTRY *data, int flags)
{
    return _asn1_print_top(asn1_ETYPE_INFO2_ENTRY, flags, data);
}

/* template_members: ETYPE_INFO2 exp exp */
/* generate_template_type: ETYPE_INFO2_ENTRY_seofTstruct_6 */
const struct asn1_template asn1_ETYPE_INFO2_ENTRY_seofTstruct_6[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO2_ENTRY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_ETYPE_INFO2_ENTRY }
};
/* generate_template_type: ETYPE_INFO2_tag__133 */
const struct asn1_template asn1_ETYPE_INFO2_tag__133[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO2_ENTRY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_ETYPE_INFO2_ENTRY_seofTstruct_6 }
};
/* generate_template_type: ETYPE_INFO2 */
const struct asn1_template asn1_ETYPE_INFO2[] = {
/* 0 */ { 0, sizeof(ETYPE_INFO2), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ETYPE_INFO2_tag__133 }
};

int ASN1CALL
decode_ETYPE_INFO2(const unsigned char *p, size_t len, ETYPE_INFO2 *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ETYPE_INFO2, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ETYPE_INFO2(unsigned char *p, size_t len, const ETYPE_INFO2 *data, size_t *size)
{
    return _asn1_encode(asn1_ETYPE_INFO2, p, len, data, size);
}


size_t ASN1CALL
length_ETYPE_INFO2(const ETYPE_INFO2 *data)
{
    return _asn1_length(asn1_ETYPE_INFO2, data);
}


void ASN1CALL
free_ETYPE_INFO2(ETYPE_INFO2 *data)
{
    _asn1_free_top(asn1_ETYPE_INFO2, data);
}


int ASN1CALL
copy_ETYPE_INFO2(const ETYPE_INFO2 *from, ETYPE_INFO2 *to)
{
    return _asn1_copy_top(asn1_ETYPE_INFO2, from, to);
}


char * ASN1CALL
print_ETYPE_INFO2(const ETYPE_INFO2 *data, int flags)
{
    return _asn1_print_top(asn1_ETYPE_INFO2, flags, data);
}

int ASN1CALL
add_ETYPE_INFO2(ETYPE_INFO2 *data, const ETYPE_INFO2_ENTRY *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_ETYPE_INFO2_ENTRY(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_ETYPE_INFO2(ETYPE_INFO2 *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_ETYPE_INFO2_ENTRY(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: METHOD_DATA exp exp */
/* generate_template_type: PA_DATA_seofTstruct_7 */
const struct asn1_template asn1_PA_DATA_seofTstruct_7[] = {
/* 0 */ { 0, sizeof(PA_DATA), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PA_DATA }
};
/* generate_template_type: METHOD_DATA_tag__134 */
const struct asn1_template asn1_METHOD_DATA_tag__134[] = {
/* 0 */ { 0, sizeof(PA_DATA), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PA_DATA_seofTstruct_7 }
};
/* generate_template_type: METHOD_DATA */
const struct asn1_template asn1_METHOD_DATA[] = {
/* 0 */ { 0, sizeof(METHOD_DATA), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_METHOD_DATA_tag__134 }
};

int ASN1CALL
decode_METHOD_DATA(const unsigned char *p, size_t len, METHOD_DATA *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_METHOD_DATA, 0|0, p, len, data, size);
}


int ASN1CALL
encode_METHOD_DATA(unsigned char *p, size_t len, const METHOD_DATA *data, size_t *size)
{
    return _asn1_encode(asn1_METHOD_DATA, p, len, data, size);
}


size_t ASN1CALL
length_METHOD_DATA(const METHOD_DATA *data)
{
    return _asn1_length(asn1_METHOD_DATA, data);
}


void ASN1CALL
free_METHOD_DATA(METHOD_DATA *data)
{
    _asn1_free_top(asn1_METHOD_DATA, data);
}


int ASN1CALL
copy_METHOD_DATA(const METHOD_DATA *from, METHOD_DATA *to)
{
    return _asn1_copy_top(asn1_METHOD_DATA, from, to);
}


char * ASN1CALL
print_METHOD_DATA(const METHOD_DATA *data, int flags)
{
    return _asn1_print_top(asn1_METHOD_DATA, flags, data);
}

int ASN1CALL
add_METHOD_DATA(METHOD_DATA *data, const PA_DATA *element)
{
int ret;
void *ptr;

ptr = realloc(data->val, 
	(data->len + 1) * sizeof(data->val[0]));
if (ptr == NULL) return ENOMEM;
data->val = ptr;

ret = copy_PA_DATA(element, &data->val[data->len]);
if (ret) return ret;
data->len++;
return 0;
}

int ASN1CALL
remove_METHOD_DATA(METHOD_DATA *data, unsigned int element)
{
void *ptr;

if (data->len == 0 || element >= data->len)
	return ASN1_OVERRUN;
free_PA_DATA(&data->val[element]);
data->len--;
if (element < data->len)
	memmove(&data->val[element], &data->val[element + 1], 
		sizeof(data->val[0]) * (data->len - element));
ptr = realloc(data->val, data->len * sizeof(data->val[0]));
if (ptr != NULL || data->len == 0) data->val = ptr;
return 0;
}

/* template_members: TypedData exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: TypedData exp exp */
/* generate_template_type: TypedData_tag_data_type_136 */
/* template_members: TypedData exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_data_value_138 */
/* generate_template_type: TypedData_tag_data_value_137 */
/* generate_template_type: TypedData_tag__135 */
const struct asn1_template asn1_TypedData_tag__135[] = {
/* 0 */ { 0, sizeof(struct TypedData), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct TypedData, data_type), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct TypedData, data_value), asn1_HostAddress_tag_address_17 },
/* 3 */ { A1_OP_NAME, 0, "TypedData" },
/* 4 */ { A1_OP_NAME, 0, "data-type" },
/* 5 */ { A1_OP_NAME, 0, "data-value" }
};
/* generate_template_type: TypedData */
const struct asn1_template asn1_TypedData[] = {
/* 0 */ { 0, sizeof(TypedData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TypedData_tag__135 }
};

int ASN1CALL
decode_TypedData(const unsigned char *p, size_t len, TypedData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TypedData, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TypedData(unsigned char *p, size_t len, const TypedData *data, size_t *size)
{
    return _asn1_encode(asn1_TypedData, p, len, data, size);
}


size_t ASN1CALL
length_TypedData(const TypedData *data)
{
    return _asn1_length(asn1_TypedData, data);
}


void ASN1CALL
free_TypedData(TypedData *data)
{
    _asn1_free_top(asn1_TypedData, data);
}


int ASN1CALL
copy_TypedData(const TypedData *from, TypedData *to)
{
    return _asn1_copy_top(asn1_TypedData, from, to);
}


char * ASN1CALL
print_TypedData(const TypedData *data, int flags)
{
    return _asn1_print_top(asn1_TypedData, flags, data);
}

/* template_members: TYPED_DATA exp exp */
/* generate_template_type: TypedData_seofTstruct_8 */
const struct asn1_template asn1_TypedData_seofTstruct_8[] = {
/* 0 */ { 0, sizeof(TypedData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TypedData }
};
/* generate_template_type: TYPED_DATA_tag__139 */
const struct asn1_template asn1_TYPED_DATA_tag__139[] = {
/* 0 */ { 0, sizeof(TypedData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_TypedData_seofTstruct_8 }
};
/* generate_template_type: TYPED_DATA */
const struct asn1_template asn1_TYPED_DATA[] = {
/* 0 */ { 0, sizeof(TYPED_DATA), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_TYPED_DATA_tag__139 }
};

int ASN1CALL
decode_TYPED_DATA(const unsigned char *p, size_t len, TYPED_DATA *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TYPED_DATA, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TYPED_DATA(unsigned char *p, size_t len, const TYPED_DATA *data, size_t *size)
{
    return _asn1_encode(asn1_TYPED_DATA, p, len, data, size);
}


size_t ASN1CALL
length_TYPED_DATA(const TYPED_DATA *data)
{
    return _asn1_length(asn1_TYPED_DATA, data);
}


void ASN1CALL
free_TYPED_DATA(TYPED_DATA *data)
{
    _asn1_free_top(asn1_TYPED_DATA, data);
}


int ASN1CALL
copy_TYPED_DATA(const TYPED_DATA *from, TYPED_DATA *to)
{
    return _asn1_copy_top(asn1_TYPED_DATA, from, to);
}


char * ASN1CALL
print_TYPED_DATA(const TYPED_DATA *data, int flags)
{
    return _asn1_print_top(asn1_TYPED_DATA, flags, data);
}

/* template_members: KDC_REQ_BODY exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_tag_kdc_options_141 */
const struct asn1_template asn1_KDC_REQ_BODY_tag_kdc_options_141[] = {
/* 0 */ { 0, sizeof(KDCOptions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDCOptions }
};
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_tag_cname_142 */
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_tag_realm_143 */
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_tag_sname_144 */
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_tag_from_145 */
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_tag_till_146 */
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_tag_rtime_147 */
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_tag_nonce_148 */
/* template_members: KDC_REQ_BODY exp exp */
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_etype_9 */
/* generate_template_type: KDC_REQ_BODY_tag_etype_150 */
const struct asn1_template asn1_KDC_REQ_BODY_tag_etype_150[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ_BODY_etype), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_EncryptedData_tag_etype_35 }
};
/* generate_template_type: KDC_REQ_BODY_tag_etype_149 */
const struct asn1_template asn1_KDC_REQ_BODY_tag_etype_149[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ_BODY_etype), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_REQ_BODY_tag_etype_150 }
};
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_tag_addresses_151 */
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_tag_enc_authorization_data_152 */
/* template_members: KDC_REQ_BODY exp exp */
/* template_members: KDC_REQ_BODY exp exp */
/* generate_template_type: KDC_REQ_BODY_additional_tickets_10 */
const struct asn1_template asn1_KDC_REQ_BODY_additional_tickets_10[] = {
/* 0 */ { 0, sizeof(Ticket), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_Ticket }
};
/* generate_template_type: KDC_REQ_BODY_tag_additional_tickets_154 */
const struct asn1_template asn1_KDC_REQ_BODY_tag_additional_tickets_154[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ_BODY_additional_tickets), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_KDC_REQ_BODY_additional_tickets_10 }
};
/* generate_template_type: KDC_REQ_BODY_tag_additional_tickets_153 */
const struct asn1_template asn1_KDC_REQ_BODY_tag_additional_tickets_153[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ_BODY_additional_tickets), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_REQ_BODY_tag_additional_tickets_154 }
};
/* generate_template_type: KDC_REQ_BODY_tag__140 */
const struct asn1_template asn1_KDC_REQ_BODY_tag__140[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ_BODY), ((void *)(uintptr_t)25) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDC_REQ_BODY, kdc_options), asn1_KDC_REQ_BODY_tag_kdc_options_141 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, cname), asn1_Ticket_tag_sname_51 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KDC_REQ_BODY, realm), asn1_Ticket_tag_realm_50 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, sname), asn1_Ticket_tag_sname_51 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, from), asn1_LastReq_val_tag_lr_value_33 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, till), asn1_LastReq_val_tag_lr_value_33 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, rtime), asn1_LastReq_val_tag_lr_value_33 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7), offsetof(struct KDC_REQ_BODY, nonce), asn1_HostAddress_tag_addr_type_16 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8), offsetof(struct KDC_REQ_BODY, etype), asn1_KDC_REQ_BODY_tag_etype_149 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, addresses), asn1_EncTicketPart_tag_caddr_64 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,10)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, enc_authorization_data), asn1_Ticket_tag_enc_part_52 },
/* 12 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,11)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ_BODY, additional_tickets), asn1_KDC_REQ_BODY_tag_additional_tickets_153 },
/* 13 */ { A1_OP_NAME, 0, "KDC_REQ_BODY" },
/* 14 */ { A1_OP_NAME, 0, "kdc-options" },
/* 15 */ { A1_OP_NAME, 0, "cname" },
/* 16 */ { A1_OP_NAME, 0, "realm" },
/* 17 */ { A1_OP_NAME, 0, "sname" },
/* 18 */ { A1_OP_NAME, 0, "from" },
/* 19 */ { A1_OP_NAME, 0, "till" },
/* 20 */ { A1_OP_NAME, 0, "rtime" },
/* 21 */ { A1_OP_NAME, 0, "nonce" },
/* 22 */ { A1_OP_NAME, 0, "etype" },
/* 23 */ { A1_OP_NAME, 0, "addresses" },
/* 24 */ { A1_OP_NAME, 0, "enc-authorization-data" },
/* 25 */ { A1_OP_NAME, 0, "additional-tickets" }
};
/* generate_template_type: KDC_REQ_BODY */
const struct asn1_template asn1_KDC_REQ_BODY[] = {
/* 0 */ { 0|A1_HF_PRESERVE, sizeof(KDC_REQ_BODY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_REQ_BODY_tag__140 }
};

int ASN1CALL
decode_KDC_REQ_BODY(const unsigned char *p, size_t len, KDC_REQ_BODY *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KDC_REQ_BODY, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KDC_REQ_BODY(unsigned char *p, size_t len, const KDC_REQ_BODY *data, size_t *size)
{
    return _asn1_encode(asn1_KDC_REQ_BODY, p, len, data, size);
}


size_t ASN1CALL
length_KDC_REQ_BODY(const KDC_REQ_BODY *data)
{
    return _asn1_length(asn1_KDC_REQ_BODY, data);
}


void ASN1CALL
free_KDC_REQ_BODY(KDC_REQ_BODY *data)
{
    _asn1_free_top(asn1_KDC_REQ_BODY, data);
}


int ASN1CALL
copy_KDC_REQ_BODY(const KDC_REQ_BODY *from, KDC_REQ_BODY *to)
{
    return _asn1_copy_top(asn1_KDC_REQ_BODY, from, to);
}


char * ASN1CALL
print_KDC_REQ_BODY(const KDC_REQ_BODY *data, int flags)
{
    return _asn1_print_top(asn1_KDC_REQ_BODY, flags, data);
}

/* template_members: KDC_REQ exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KDC_REQ exp exp */
/* generate_template_type: KDC_REQ_tag_pvno_156 */
/* template_members: KDC_REQ exp exp */
/* generate_template_type: KDC_REQ_tag_msg_type_157 */
const struct asn1_template asn1_KDC_REQ_tag_msg_type_157[] = {
/* 0 */ { 0, sizeof(MESSAGE_TYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_MESSAGE_TYPE }
};
/* template_members: KDC_REQ exp exp */
/* generate_template_type: KDC_REQ_tag_padata_158 */
/* template_members: KDC_REQ exp exp */
/* generate_template_type: KDC_REQ_tag_req_body_159 */
const struct asn1_template asn1_KDC_REQ_tag_req_body_159[] = {
/* 0 */ { 0, sizeof(KDC_REQ_BODY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDC_REQ_BODY }
};
/* generate_template_type: KDC_REQ_tag__155 */
const struct asn1_template asn1_KDC_REQ_tag__155[] = {
/* 0 */ { 0, sizeof(struct KDC_REQ), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KDC_REQ, pvno), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KDC_REQ, msg_type), asn1_KDC_REQ_tag_msg_type_157 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REQ, padata), asn1_EncKDCRepPart_tag_encrypted_pa_data_83 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct KDC_REQ, req_body), asn1_KDC_REQ_tag_req_body_159 },
/* 5 */ { A1_OP_NAME, 0, "KDC_REQ" },
/* 6 */ { A1_OP_NAME, 0, "pvno" },
/* 7 */ { A1_OP_NAME, 0, "msg-type" },
/* 8 */ { A1_OP_NAME, 0, "padata" },
/* 9 */ { A1_OP_NAME, 0, "req-body" }
};
/* generate_template_type: KDC_REQ */
const struct asn1_template asn1_KDC_REQ[] = {
/* 0 */ { 0, sizeof(KDC_REQ), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_REQ_tag__155 }
};

int ASN1CALL
decode_KDC_REQ(const unsigned char *p, size_t len, KDC_REQ *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KDC_REQ, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KDC_REQ(unsigned char *p, size_t len, const KDC_REQ *data, size_t *size)
{
    return _asn1_encode(asn1_KDC_REQ, p, len, data, size);
}


size_t ASN1CALL
length_KDC_REQ(const KDC_REQ *data)
{
    return _asn1_length(asn1_KDC_REQ, data);
}


void ASN1CALL
free_KDC_REQ(KDC_REQ *data)
{
    _asn1_free_top(asn1_KDC_REQ, data);
}


int ASN1CALL
copy_KDC_REQ(const KDC_REQ *from, KDC_REQ *to)
{
    return _asn1_copy_top(asn1_KDC_REQ, from, to);
}


char * ASN1CALL
print_KDC_REQ(const KDC_REQ *data, int flags)
{
    return _asn1_print_top(asn1_KDC_REQ, flags, data);
}

/* template_members: AS_REQ exp exp */
/* generate_template_type: AS_REQ_tag__160 */
const struct asn1_template asn1_AS_REQ_tag__160[] = {
/* 0 */ { 0, sizeof(KDC_REQ), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDC_REQ }
};
/* generate_template_type: AS_REQ */
const struct asn1_template asn1_AS_REQ[] = {
/* 0 */ { 0, sizeof(AS_REQ), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,10), 0, asn1_AS_REQ_tag__160 }
};

int ASN1CALL
decode_AS_REQ(const unsigned char *p, size_t len, AS_REQ *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AS_REQ, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AS_REQ(unsigned char *p, size_t len, const AS_REQ *data, size_t *size)
{
    return _asn1_encode(asn1_AS_REQ, p, len, data, size);
}


size_t ASN1CALL
length_AS_REQ(const AS_REQ *data)
{
    return _asn1_length(asn1_AS_REQ, data);
}


void ASN1CALL
free_AS_REQ(AS_REQ *data)
{
    _asn1_free_top(asn1_AS_REQ, data);
}


int ASN1CALL
copy_AS_REQ(const AS_REQ *from, AS_REQ *to)
{
    return _asn1_copy_top(asn1_AS_REQ, from, to);
}


char * ASN1CALL
print_AS_REQ(const AS_REQ *data, int flags)
{
    return _asn1_print_top(asn1_AS_REQ, flags, data);
}

/* template_members: TGS_REQ exp exp */
/* generate_template_type: TGS_REQ_tag__161 */
/* generate_template_type: TGS_REQ */
const struct asn1_template asn1_TGS_REQ[] = {
/* 0 */ { 0, sizeof(TGS_REQ), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,12), 0, asn1_AS_REQ_tag__160 }
};

int ASN1CALL
decode_TGS_REQ(const unsigned char *p, size_t len, TGS_REQ *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TGS_REQ, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TGS_REQ(unsigned char *p, size_t len, const TGS_REQ *data, size_t *size)
{
    return _asn1_encode(asn1_TGS_REQ, p, len, data, size);
}


size_t ASN1CALL
length_TGS_REQ(const TGS_REQ *data)
{
    return _asn1_length(asn1_TGS_REQ, data);
}


void ASN1CALL
free_TGS_REQ(TGS_REQ *data)
{
    _asn1_free_top(asn1_TGS_REQ, data);
}


int ASN1CALL
copy_TGS_REQ(const TGS_REQ *from, TGS_REQ *to)
{
    return _asn1_copy_top(asn1_TGS_REQ, from, to);
}


char * ASN1CALL
print_TGS_REQ(const TGS_REQ *data, int flags)
{
    return _asn1_print_top(asn1_TGS_REQ, flags, data);
}

/* template_members: PA_ENC_TS_ENC exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_ENC_TS_ENC exp exp */
/* generate_template_type: PA_ENC_TS_ENC_tag_patimestamp_163 */
/* template_members: PA_ENC_TS_ENC exp exp */
/* generate_template_type: PA_ENC_TS_ENC_tag_pausec_164 */
/* generate_template_type: PA_ENC_TS_ENC_tag__162 */
const struct asn1_template asn1_PA_ENC_TS_ENC_tag__162[] = {
/* 0 */ { 0, sizeof(struct PA_ENC_TS_ENC), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_ENC_TS_ENC, patimestamp), asn1_LastReq_val_tag_lr_value_33 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_ENC_TS_ENC, pausec), asn1_HostAddress_tag_addr_type_16 },
/* 3 */ { A1_OP_NAME, 0, "PA_ENC_TS_ENC" },
/* 4 */ { A1_OP_NAME, 0, "patimestamp" },
/* 5 */ { A1_OP_NAME, 0, "pausec" }
};
/* generate_template_type: PA_ENC_TS_ENC */
const struct asn1_template asn1_PA_ENC_TS_ENC[] = {
/* 0 */ { 0, sizeof(PA_ENC_TS_ENC), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_ENC_TS_ENC_tag__162 }
};

int ASN1CALL
decode_PA_ENC_TS_ENC(const unsigned char *p, size_t len, PA_ENC_TS_ENC *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_ENC_TS_ENC, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_ENC_TS_ENC(unsigned char *p, size_t len, const PA_ENC_TS_ENC *data, size_t *size)
{
    return _asn1_encode(asn1_PA_ENC_TS_ENC, p, len, data, size);
}


size_t ASN1CALL
length_PA_ENC_TS_ENC(const PA_ENC_TS_ENC *data)
{
    return _asn1_length(asn1_PA_ENC_TS_ENC, data);
}


void ASN1CALL
free_PA_ENC_TS_ENC(PA_ENC_TS_ENC *data)
{
    _asn1_free_top(asn1_PA_ENC_TS_ENC, data);
}


int ASN1CALL
copy_PA_ENC_TS_ENC(const PA_ENC_TS_ENC *from, PA_ENC_TS_ENC *to)
{
    return _asn1_copy_top(asn1_PA_ENC_TS_ENC, from, to);
}


char * ASN1CALL
print_PA_ENC_TS_ENC(const PA_ENC_TS_ENC *data, int flags)
{
    return _asn1_print_top(asn1_PA_ENC_TS_ENC, flags, data);
}

/* template_members: PA_PAC_REQUEST exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_PAC_REQUEST exp exp */
/* template_members: int exp exp */
/* generate_template_type: int_tag_include_pac_167 */
/* generate_template_type: PA_PAC_REQUEST_tag_include_pac_166 */
/* generate_template_type: PA_PAC_REQUEST_tag__165 */
const struct asn1_template asn1_PA_PAC_REQUEST_tag__165[] = {
/* 0 */ { 0, sizeof(struct PA_PAC_REQUEST), ((void *)(uintptr_t)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_PAC_REQUEST, include_pac), asn1_PrincipalNameAttrs_tag_authenticated_87 },
/* 2 */ { A1_OP_NAME, 0, "PA_PAC_REQUEST" },
/* 3 */ { A1_OP_NAME, 0, "include-pac" }
};
/* generate_template_type: PA_PAC_REQUEST */
const struct asn1_template asn1_PA_PAC_REQUEST[] = {
/* 0 */ { 0, sizeof(PA_PAC_REQUEST), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_PAC_REQUEST_tag__165 }
};

int ASN1CALL
decode_PA_PAC_REQUEST(const unsigned char *p, size_t len, PA_PAC_REQUEST *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_PAC_REQUEST, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_PAC_REQUEST(unsigned char *p, size_t len, const PA_PAC_REQUEST *data, size_t *size)
{
    return _asn1_encode(asn1_PA_PAC_REQUEST, p, len, data, size);
}


size_t ASN1CALL
length_PA_PAC_REQUEST(const PA_PAC_REQUEST *data)
{
    return _asn1_length(asn1_PA_PAC_REQUEST, data);
}


void ASN1CALL
free_PA_PAC_REQUEST(PA_PAC_REQUEST *data)
{
    _asn1_free_top(asn1_PA_PAC_REQUEST, data);
}


int ASN1CALL
copy_PA_PAC_REQUEST(const PA_PAC_REQUEST *from, PA_PAC_REQUEST *to)
{
    return _asn1_copy_top(asn1_PA_PAC_REQUEST, from, to);
}


char * ASN1CALL
print_PA_PAC_REQUEST(const PA_PAC_REQUEST *data, int flags)
{
    return _asn1_print_top(asn1_PA_PAC_REQUEST, flags, data);
}

/* template_members: KerbErrorDataType exp exp */
const struct asn1_template asn1_KerbErrorDataType_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)2) },
/* 1 */ { A1_OP_NAME, 2, "kERB-AP-ERR-TYPE-SKEW-RECOVERY" },
/* 2 */ { A1_OP_NAME, 3, "kERB-ERR-TYPE-EXTENDED" }
};
/* generate_template_type: KerbErrorDataType_tag__168 */
const struct asn1_template asn1_KerbErrorDataType_tag__168[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_KerbErrorDataType_enum_names }
};
/* generate_template_type: KerbErrorDataType */
const struct asn1_template asn1_KerbErrorDataType[] = {
/* 0 */ { 0, sizeof(KerbErrorDataType), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_KerbErrorDataType_tag__168 }
};

int ASN1CALL
decode_KerbErrorDataType(const unsigned char *p, size_t len, KerbErrorDataType *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KerbErrorDataType, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KerbErrorDataType(unsigned char *p, size_t len, const KerbErrorDataType *data, size_t *size)
{
    return _asn1_encode(asn1_KerbErrorDataType, p, len, data, size);
}


size_t ASN1CALL
length_KerbErrorDataType(const KerbErrorDataType *data)
{
    return _asn1_length(asn1_KerbErrorDataType, data);
}


void ASN1CALL
free_KerbErrorDataType(KerbErrorDataType *data)
{
    _asn1_free_top(asn1_KerbErrorDataType, data);
}


int ASN1CALL
copy_KerbErrorDataType(const KerbErrorDataType *from, KerbErrorDataType *to)
{
    return _asn1_copy_top(asn1_KerbErrorDataType, from, to);
}


char * ASN1CALL
print_KerbErrorDataType(const KerbErrorDataType *data, int flags)
{
    return _asn1_print_top(asn1_KerbErrorDataType, flags, data);
}

/* template_members: KERB_ERROR_DATA exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KERB_ERROR_DATA exp exp */
/* generate_template_type: KERB_ERROR_DATA_tag_data_type_170 */
const struct asn1_template asn1_KERB_ERROR_DATA_tag_data_type_170[] = {
/* 0 */ { 0, sizeof(KerbErrorDataType), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KerbErrorDataType }
};
/* template_members: KERB_ERROR_DATA exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_data_value_172 */
/* generate_template_type: KERB_ERROR_DATA_tag_data_value_171 */
/* generate_template_type: KERB_ERROR_DATA_tag__169 */
const struct asn1_template asn1_KERB_ERROR_DATA_tag__169[] = {
/* 0 */ { 0, sizeof(struct KERB_ERROR_DATA), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_ERROR_DATA, data_type), asn1_KERB_ERROR_DATA_tag_data_type_170 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KERB_ERROR_DATA, data_value), asn1_HostAddress_tag_address_17 },
/* 3 */ { A1_OP_NAME, 0, "KERB_ERROR_DATA" },
/* 4 */ { A1_OP_NAME, 0, "data-type" },
/* 5 */ { A1_OP_NAME, 0, "data-value" }
};
/* generate_template_type: KERB_ERROR_DATA */
const struct asn1_template asn1_KERB_ERROR_DATA[] = {
/* 0 */ { 0, sizeof(KERB_ERROR_DATA), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_ERROR_DATA_tag__169 }
};

int ASN1CALL
decode_KERB_ERROR_DATA(const unsigned char *p, size_t len, KERB_ERROR_DATA *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KERB_ERROR_DATA, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KERB_ERROR_DATA(unsigned char *p, size_t len, const KERB_ERROR_DATA *data, size_t *size)
{
    return _asn1_encode(asn1_KERB_ERROR_DATA, p, len, data, size);
}


size_t ASN1CALL
length_KERB_ERROR_DATA(const KERB_ERROR_DATA *data)
{
    return _asn1_length(asn1_KERB_ERROR_DATA, data);
}


void ASN1CALL
free_KERB_ERROR_DATA(KERB_ERROR_DATA *data)
{
    _asn1_free_top(asn1_KERB_ERROR_DATA, data);
}


int ASN1CALL
copy_KERB_ERROR_DATA(const KERB_ERROR_DATA *from, KERB_ERROR_DATA *to)
{
    return _asn1_copy_top(asn1_KERB_ERROR_DATA, from, to);
}


char * ASN1CALL
print_KERB_ERROR_DATA(const KERB_ERROR_DATA *data, int flags)
{
    return _asn1_print_top(asn1_KERB_ERROR_DATA, flags, data);
}

/* template_members: PAC_OPTIONS_FLAGS exp exp */
static const struct asn1_template asn1_PAC_OPTIONS_FLAGS_bmember__3[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(PAC_OPTIONS_FLAGS), ((void *)(uintptr_t)4) },
/* 1 */ { 0, 0, "claims" },
/* 2 */ { 0, 1, "branch_aware" },
/* 3 */ { 0, 2, "forward_to_full_dc" },
/* 4 */ { 0, 3, "resource_based_constrained_delegation" }
};
/* generate_template_type: PAC_OPTIONS_FLAGS_tag__173 */
const struct asn1_template asn1_PAC_OPTIONS_FLAGS_tag__173[] = {
/* 0 */ { 0, sizeof(PAC_OPTIONS_FLAGS), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_PAC_OPTIONS_FLAGS_bmember__3 }
};
/* generate_template_type: PAC_OPTIONS_FLAGS */
const struct asn1_template asn1_PAC_OPTIONS_FLAGS[] = {
/* 0 */ { 0, sizeof(PAC_OPTIONS_FLAGS), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_PAC_OPTIONS_FLAGS_tag__173 }
};

int ASN1CALL
decode_PAC_OPTIONS_FLAGS(const unsigned char *p, size_t len, PAC_OPTIONS_FLAGS *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PAC_OPTIONS_FLAGS, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PAC_OPTIONS_FLAGS(unsigned char *p, size_t len, const PAC_OPTIONS_FLAGS *data, size_t *size)
{
    return _asn1_encode(asn1_PAC_OPTIONS_FLAGS, p, len, data, size);
}


size_t ASN1CALL
length_PAC_OPTIONS_FLAGS(const PAC_OPTIONS_FLAGS *data)
{
    return _asn1_length(asn1_PAC_OPTIONS_FLAGS, data);
}


void ASN1CALL
free_PAC_OPTIONS_FLAGS(PAC_OPTIONS_FLAGS *data)
{
    _asn1_free_top(asn1_PAC_OPTIONS_FLAGS, data);
}


int ASN1CALL
copy_PAC_OPTIONS_FLAGS(const PAC_OPTIONS_FLAGS *from, PAC_OPTIONS_FLAGS *to)
{
    return _asn1_copy_top(asn1_PAC_OPTIONS_FLAGS, from, to);
}


char * ASN1CALL
print_PAC_OPTIONS_FLAGS(const PAC_OPTIONS_FLAGS *data, int flags)
{
    return _asn1_print_top(asn1_PAC_OPTIONS_FLAGS, flags, data);
}

uint64_t PAC_OPTIONS_FLAGS2int(PAC_OPTIONS_FLAGS f)
{
uint64_t r = 0;
if(f.claims) r |= (1ULL << 0);
if(f.branch_aware) r |= (1ULL << 1);
if(f.forward_to_full_dc) r |= (1ULL << 2);
if(f.resource_based_constrained_delegation) r |= (1ULL << 3);
return r;
}

PAC_OPTIONS_FLAGS int2PAC_OPTIONS_FLAGS(uint64_t n)
{
	PAC_OPTIONS_FLAGS flags;

	memset(&flags, 0, sizeof(flags));

	flags.claims = (n >> 0) & 1;
	flags.branch_aware = (n >> 1) & 1;
	flags.forward_to_full_dc = (n >> 2) & 1;
	flags.resource_based_constrained_delegation = (n >> 3) & 1;
	return flags;
}

static struct units PAC_OPTIONS_FLAGS_units[] = {
	{"resource-based-constrained-delegation",	1ULL << 3},
	{"forward-to-full-dc",	1ULL << 2},
	{"branch-aware",	1ULL << 1},
	{"claims",	1ULL << 0},
	{NULL,	0}
};

const struct units * asn1_PAC_OPTIONS_FLAGS_units(void){
return PAC_OPTIONS_FLAGS_units;
}

/* template_members: PA_PAC_OPTIONS exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_PAC_OPTIONS exp exp */
/* generate_template_type: PA_PAC_OPTIONS_tag_flags_175 */
const struct asn1_template asn1_PA_PAC_OPTIONS_tag_flags_175[] = {
/* 0 */ { 0, sizeof(PAC_OPTIONS_FLAGS), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PAC_OPTIONS_FLAGS }
};
/* generate_template_type: PA_PAC_OPTIONS_tag__174 */
const struct asn1_template asn1_PA_PAC_OPTIONS_tag__174[] = {
/* 0 */ { 0, sizeof(struct PA_PAC_OPTIONS), ((void *)(uintptr_t)3) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_PAC_OPTIONS, flags), asn1_PA_PAC_OPTIONS_tag_flags_175 },
/* 2 */ { A1_OP_NAME, 0, "PA_PAC_OPTIONS" },
/* 3 */ { A1_OP_NAME, 0, "flags" }
};
/* generate_template_type: PA_PAC_OPTIONS */
const struct asn1_template asn1_PA_PAC_OPTIONS[] = {
/* 0 */ { 0, sizeof(PA_PAC_OPTIONS), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_PAC_OPTIONS_tag__174 }
};

int ASN1CALL
decode_PA_PAC_OPTIONS(const unsigned char *p, size_t len, PA_PAC_OPTIONS *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_PAC_OPTIONS, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_PAC_OPTIONS(unsigned char *p, size_t len, const PA_PAC_OPTIONS *data, size_t *size)
{
    return _asn1_encode(asn1_PA_PAC_OPTIONS, p, len, data, size);
}


size_t ASN1CALL
length_PA_PAC_OPTIONS(const PA_PAC_OPTIONS *data)
{
    return _asn1_length(asn1_PA_PAC_OPTIONS, data);
}


void ASN1CALL
free_PA_PAC_OPTIONS(PA_PAC_OPTIONS *data)
{
    _asn1_free_top(asn1_PA_PAC_OPTIONS, data);
}


int ASN1CALL
copy_PA_PAC_OPTIONS(const PA_PAC_OPTIONS *from, PA_PAC_OPTIONS *to)
{
    return _asn1_copy_top(asn1_PA_PAC_OPTIONS, from, to);
}


char * ASN1CALL
print_PA_PAC_OPTIONS(const PA_PAC_OPTIONS *data, int flags)
{
    return _asn1_print_top(asn1_PA_PAC_OPTIONS, flags, data);
}

/* template_members: KERB_AD_RESTRICTION_ENTRY exp exp */
/* template_members: KERB_AD_RESTRICTION_ENTRY exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KERB_AD_RESTRICTION_ENTRY exp exp */
/* generate_template_type: KERB_AD_RESTRICTION_ENTRY_tag_restriction_type_178 */
/* template_members: KERB_AD_RESTRICTION_ENTRY exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_restriction_180 */
/* generate_template_type: KERB_AD_RESTRICTION_ENTRY_tag_restriction_179 */
/* generate_template_type: KERB_AD_RESTRICTION_ENTRY_tag__177 */
const struct asn1_template asn1_KERB_AD_RESTRICTION_ENTRY_tag__177[] = {
/* 0 */ { 0, sizeof(struct KERB_AD_RESTRICTION_ENTRY), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_AD_RESTRICTION_ENTRY, restriction_type), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_AD_RESTRICTION_ENTRY, restriction), asn1_HostAddress_tag_address_17 },
/* 3 */ { A1_OP_NAME, 0, "KERB_AD_RESTRICTION_ENTRY" },
/* 4 */ { A1_OP_NAME, 0, "restriction-type" },
/* 5 */ { A1_OP_NAME, 0, "restriction" }
};
/* generate_template_type: KERB_AD_RESTRICTION_ENTRY_tag__176 */
const struct asn1_template asn1_KERB_AD_RESTRICTION_ENTRY_tag__176[] = {
/* 0 */ { 0, sizeof(struct KERB_AD_RESTRICTION_ENTRY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_AD_RESTRICTION_ENTRY_tag__177 }
};
/* generate_template_type: KERB_AD_RESTRICTION_ENTRY */
const struct asn1_template asn1_KERB_AD_RESTRICTION_ENTRY[] = {
/* 0 */ { 0, sizeof(KERB_AD_RESTRICTION_ENTRY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_AD_RESTRICTION_ENTRY_tag__176 }
};

int ASN1CALL
decode_KERB_AD_RESTRICTION_ENTRY(const unsigned char *p, size_t len, KERB_AD_RESTRICTION_ENTRY *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KERB_AD_RESTRICTION_ENTRY, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KERB_AD_RESTRICTION_ENTRY(unsigned char *p, size_t len, const KERB_AD_RESTRICTION_ENTRY *data, size_t *size)
{
    return _asn1_encode(asn1_KERB_AD_RESTRICTION_ENTRY, p, len, data, size);
}


size_t ASN1CALL
length_KERB_AD_RESTRICTION_ENTRY(const KERB_AD_RESTRICTION_ENTRY *data)
{
    return _asn1_length(asn1_KERB_AD_RESTRICTION_ENTRY, data);
}


void ASN1CALL
free_KERB_AD_RESTRICTION_ENTRY(KERB_AD_RESTRICTION_ENTRY *data)
{
    _asn1_free_top(asn1_KERB_AD_RESTRICTION_ENTRY, data);
}


int ASN1CALL
copy_KERB_AD_RESTRICTION_ENTRY(const KERB_AD_RESTRICTION_ENTRY *from, KERB_AD_RESTRICTION_ENTRY *to)
{
    return _asn1_copy_top(asn1_KERB_AD_RESTRICTION_ENTRY, from, to);
}


char * ASN1CALL
print_KERB_AD_RESTRICTION_ENTRY(const KERB_AD_RESTRICTION_ENTRY *data, int flags)
{
    return _asn1_print_top(asn1_KERB_AD_RESTRICTION_ENTRY, flags, data);
}

/* template_members: PA_KERB_KEY_LIST_REQ exp exp */
/* generate_template_type: ENCTYPE_seofTstruct_11 */
/* generate_template_type: PA_KERB_KEY_LIST_REQ_tag__181 */
const struct asn1_template asn1_PA_KERB_KEY_LIST_REQ_tag__181[] = {
/* 0 */ { 0, sizeof(ENCTYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_EncryptedData_tag_etype_35 }
};
/* generate_template_type: PA_KERB_KEY_LIST_REQ */
const struct asn1_template asn1_PA_KERB_KEY_LIST_REQ[] = {
/* 0 */ { 0, sizeof(PA_KERB_KEY_LIST_REQ), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_KERB_KEY_LIST_REQ_tag__181 }
};

int ASN1CALL
decode_PA_KERB_KEY_LIST_REQ(const unsigned char *p, size_t len, PA_KERB_KEY_LIST_REQ *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_KERB_KEY_LIST_REQ, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_KERB_KEY_LIST_REQ(unsigned char *p, size_t len, const PA_KERB_KEY_LIST_REQ *data, size_t *size)
{
    return _asn1_encode(asn1_PA_KERB_KEY_LIST_REQ, p, len, data, size);
}


size_t ASN1CALL
length_PA_KERB_KEY_LIST_REQ(const PA_KERB_KEY_LIST_REQ *data)
{
    return _asn1_length(asn1_PA_KERB_KEY_LIST_REQ, data);
}


void ASN1CALL
free_PA_KERB_KEY_LIST_REQ(PA_KERB_KEY_LIST_REQ *data)
{
    _asn1_free_top(asn1_PA_KERB_KEY_LIST_REQ, data);
}


int ASN1CALL
copy_PA_KERB_KEY_LIST_REQ(const PA_KERB_KEY_LIST_REQ *from, PA_KERB_KEY_LIST_REQ *to)
{
    return _asn1_copy_top(asn1_PA_KERB_KEY_LIST_REQ, from, to);
}


char * ASN1CALL
print_PA_KERB_KEY_LIST_REQ(const PA_KERB_KEY_LIST_REQ *data, int flags)
{
    return _asn1_print_top(asn1_PA_KERB_KEY_LIST_REQ, flags, data);
}

/* template_members: PA_KERB_KEY_LIST_REP exp exp */
/* generate_template_type: ENCTYPE_seofTstruct_12 */
/* generate_template_type: PA_KERB_KEY_LIST_REP_tag__182 */
/* generate_template_type: PA_KERB_KEY_LIST_REP */
const struct asn1_template asn1_PA_KERB_KEY_LIST_REP[] = {
/* 0 */ { 0, sizeof(PA_KERB_KEY_LIST_REP), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_KERB_KEY_LIST_REQ_tag__181 }
};

int ASN1CALL
decode_PA_KERB_KEY_LIST_REP(const unsigned char *p, size_t len, PA_KERB_KEY_LIST_REP *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_KERB_KEY_LIST_REP, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_KERB_KEY_LIST_REP(unsigned char *p, size_t len, const PA_KERB_KEY_LIST_REP *data, size_t *size)
{
    return _asn1_encode(asn1_PA_KERB_KEY_LIST_REP, p, len, data, size);
}


size_t ASN1CALL
length_PA_KERB_KEY_LIST_REP(const PA_KERB_KEY_LIST_REP *data)
{
    return _asn1_length(asn1_PA_KERB_KEY_LIST_REP, data);
}


void ASN1CALL
free_PA_KERB_KEY_LIST_REP(PA_KERB_KEY_LIST_REP *data)
{
    _asn1_free_top(asn1_PA_KERB_KEY_LIST_REP, data);
}


int ASN1CALL
copy_PA_KERB_KEY_LIST_REP(const PA_KERB_KEY_LIST_REP *from, PA_KERB_KEY_LIST_REP *to)
{
    return _asn1_copy_top(asn1_PA_KERB_KEY_LIST_REP, from, to);
}


char * ASN1CALL
print_PA_KERB_KEY_LIST_REP(const PA_KERB_KEY_LIST_REP *data, int flags)
{
    return _asn1_print_top(asn1_PA_KERB_KEY_LIST_REP, flags, data);
}

/* template_members: PROV_SRV_LOCATION exp exp */
/* generate_template_type: PROV_SRV_LOCATION_tag__183 */
/* generate_template_type: PROV_SRV_LOCATION */
const struct asn1_template asn1_PROV_SRV_LOCATION[] = {
/* 0 */ { 0, sizeof(PROV_SRV_LOCATION), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralString), 0, asn1_KerberosString_tag__8 }
};

int ASN1CALL
decode_PROV_SRV_LOCATION(const unsigned char *p, size_t len, PROV_SRV_LOCATION *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PROV_SRV_LOCATION, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PROV_SRV_LOCATION(unsigned char *p, size_t len, const PROV_SRV_LOCATION *data, size_t *size)
{
    return _asn1_encode(asn1_PROV_SRV_LOCATION, p, len, data, size);
}


size_t ASN1CALL
length_PROV_SRV_LOCATION(const PROV_SRV_LOCATION *data)
{
    return _asn1_length(asn1_PROV_SRV_LOCATION, data);
}


void ASN1CALL
free_PROV_SRV_LOCATION(PROV_SRV_LOCATION *data)
{
    _asn1_free_top(asn1_PROV_SRV_LOCATION, data);
}


int ASN1CALL
copy_PROV_SRV_LOCATION(const PROV_SRV_LOCATION *from, PROV_SRV_LOCATION *to)
{
    return _asn1_copy_top(asn1_PROV_SRV_LOCATION, from, to);
}


char * ASN1CALL
print_PROV_SRV_LOCATION(const PROV_SRV_LOCATION *data, int flags)
{
    return _asn1_print_top(asn1_PROV_SRV_LOCATION, flags, data);
}

/* template_members: KDC_REP exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KDC_REP exp exp */
/* generate_template_type: KDC_REP_tag_pvno_185 */
/* template_members: KDC_REP exp exp */
/* generate_template_type: KDC_REP_tag_msg_type_186 */
/* template_members: KDC_REP exp exp */
/* generate_template_type: KDC_REP_tag_padata_187 */
/* template_members: KDC_REP exp exp */
/* generate_template_type: KDC_REP_tag_crealm_188 */
/* template_members: KDC_REP exp exp */
/* generate_template_type: KDC_REP_tag_cname_189 */
/* template_members: KDC_REP exp exp */
/* generate_template_type: KDC_REP_tag_ticket_190 */
/* template_members: KDC_REP exp exp */
/* generate_template_type: KDC_REP_tag_enc_part_191 */
/* generate_template_type: KDC_REP_tag__184 */
const struct asn1_template asn1_KDC_REP_tag__184[] = {
/* 0 */ { 0, sizeof(struct KDC_REP), ((void *)(uintptr_t)15) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDC_REP, pvno), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KDC_REP, msg_type), asn1_KDC_REQ_tag_msg_type_157 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KDC_REP, padata), asn1_EncKDCRepPart_tag_encrypted_pa_data_83 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KDC_REP, crealm), asn1_Ticket_tag_realm_50 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct KDC_REP, cname), asn1_Ticket_tag_sname_51 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct KDC_REP, ticket), asn1_KDC_REQ_BODY_additional_tickets_10 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct KDC_REP, enc_part), asn1_Ticket_tag_enc_part_52 },
/* 8 */ { A1_OP_NAME, 0, "KDC_REP" },
/* 9 */ { A1_OP_NAME, 0, "pvno" },
/* 10 */ { A1_OP_NAME, 0, "msg-type" },
/* 11 */ { A1_OP_NAME, 0, "padata" },
/* 12 */ { A1_OP_NAME, 0, "crealm" },
/* 13 */ { A1_OP_NAME, 0, "cname" },
/* 14 */ { A1_OP_NAME, 0, "ticket" },
/* 15 */ { A1_OP_NAME, 0, "enc-part" }
};
/* generate_template_type: KDC_REP */
const struct asn1_template asn1_KDC_REP[] = {
/* 0 */ { 0, sizeof(KDC_REP), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_REP_tag__184 }
};

int ASN1CALL
decode_KDC_REP(const unsigned char *p, size_t len, KDC_REP *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KDC_REP, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KDC_REP(unsigned char *p, size_t len, const KDC_REP *data, size_t *size)
{
    return _asn1_encode(asn1_KDC_REP, p, len, data, size);
}


size_t ASN1CALL
length_KDC_REP(const KDC_REP *data)
{
    return _asn1_length(asn1_KDC_REP, data);
}


void ASN1CALL
free_KDC_REP(KDC_REP *data)
{
    _asn1_free_top(asn1_KDC_REP, data);
}


int ASN1CALL
copy_KDC_REP(const KDC_REP *from, KDC_REP *to)
{
    return _asn1_copy_top(asn1_KDC_REP, from, to);
}


char * ASN1CALL
print_KDC_REP(const KDC_REP *data, int flags)
{
    return _asn1_print_top(asn1_KDC_REP, flags, data);
}

/* template_members: AS_REP exp exp */
/* generate_template_type: AS_REP_tag__192 */
const struct asn1_template asn1_AS_REP_tag__192[] = {
/* 0 */ { 0, sizeof(KDC_REP), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDC_REP }
};
/* generate_template_type: AS_REP */
const struct asn1_template asn1_AS_REP[] = {
/* 0 */ { 0, sizeof(AS_REP), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,11), 0, asn1_AS_REP_tag__192 }
};

int ASN1CALL
decode_AS_REP(const unsigned char *p, size_t len, AS_REP *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AS_REP, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AS_REP(unsigned char *p, size_t len, const AS_REP *data, size_t *size)
{
    return _asn1_encode(asn1_AS_REP, p, len, data, size);
}


size_t ASN1CALL
length_AS_REP(const AS_REP *data)
{
    return _asn1_length(asn1_AS_REP, data);
}


void ASN1CALL
free_AS_REP(AS_REP *data)
{
    _asn1_free_top(asn1_AS_REP, data);
}


int ASN1CALL
copy_AS_REP(const AS_REP *from, AS_REP *to)
{
    return _asn1_copy_top(asn1_AS_REP, from, to);
}


char * ASN1CALL
print_AS_REP(const AS_REP *data, int flags)
{
    return _asn1_print_top(asn1_AS_REP, flags, data);
}

/* template_members: TGS_REP exp exp */
/* generate_template_type: TGS_REP_tag__193 */
/* generate_template_type: TGS_REP */
const struct asn1_template asn1_TGS_REP[] = {
/* 0 */ { 0, sizeof(TGS_REP), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,13), 0, asn1_AS_REP_tag__192 }
};

int ASN1CALL
decode_TGS_REP(const unsigned char *p, size_t len, TGS_REP *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_TGS_REP, 0|0, p, len, data, size);
}


int ASN1CALL
encode_TGS_REP(unsigned char *p, size_t len, const TGS_REP *data, size_t *size)
{
    return _asn1_encode(asn1_TGS_REP, p, len, data, size);
}


size_t ASN1CALL
length_TGS_REP(const TGS_REP *data)
{
    return _asn1_length(asn1_TGS_REP, data);
}


void ASN1CALL
free_TGS_REP(TGS_REP *data)
{
    _asn1_free_top(asn1_TGS_REP, data);
}


int ASN1CALL
copy_TGS_REP(const TGS_REP *from, TGS_REP *to)
{
    return _asn1_copy_top(asn1_TGS_REP, from, to);
}


char * ASN1CALL
print_TGS_REP(const TGS_REP *data, int flags)
{
    return _asn1_print_top(asn1_TGS_REP, flags, data);
}

/* template_members: EncASRepPart exp exp */
/* generate_template_type: EncASRepPart_tag__194 */
/* generate_template_type: EncASRepPart */
const struct asn1_template asn1_EncASRepPart[] = {
/* 0 */ { 0, sizeof(EncASRepPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,25), 0, asn1_EncKDCRepPart_tag__84 }
};

int ASN1CALL
decode_EncASRepPart(const unsigned char *p, size_t len, EncASRepPart *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncASRepPart, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EncASRepPart(unsigned char *p, size_t len, const EncASRepPart *data, size_t *size)
{
    return _asn1_encode(asn1_EncASRepPart, p, len, data, size);
}


size_t ASN1CALL
length_EncASRepPart(const EncASRepPart *data)
{
    return _asn1_length(asn1_EncASRepPart, data);
}


void ASN1CALL
free_EncASRepPart(EncASRepPart *data)
{
    _asn1_free_top(asn1_EncASRepPart, data);
}


int ASN1CALL
copy_EncASRepPart(const EncASRepPart *from, EncASRepPart *to)
{
    return _asn1_copy_top(asn1_EncASRepPart, from, to);
}


char * ASN1CALL
print_EncASRepPart(const EncASRepPart *data, int flags)
{
    return _asn1_print_top(asn1_EncASRepPart, flags, data);
}

/* template_members: EncTGSRepPart exp exp */
/* generate_template_type: EncTGSRepPart_tag__195 */
/* generate_template_type: EncTGSRepPart */
const struct asn1_template asn1_EncTGSRepPart[] = {
/* 0 */ { 0, sizeof(EncTGSRepPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,26), 0, asn1_EncKDCRepPart_tag__84 }
};

int ASN1CALL
decode_EncTGSRepPart(const unsigned char *p, size_t len, EncTGSRepPart *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncTGSRepPart, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EncTGSRepPart(unsigned char *p, size_t len, const EncTGSRepPart *data, size_t *size)
{
    return _asn1_encode(asn1_EncTGSRepPart, p, len, data, size);
}


size_t ASN1CALL
length_EncTGSRepPart(const EncTGSRepPart *data)
{
    return _asn1_length(asn1_EncTGSRepPart, data);
}


void ASN1CALL
free_EncTGSRepPart(EncTGSRepPart *data)
{
    _asn1_free_top(asn1_EncTGSRepPart, data);
}


int ASN1CALL
copy_EncTGSRepPart(const EncTGSRepPart *from, EncTGSRepPart *to)
{
    return _asn1_copy_top(asn1_EncTGSRepPart, from, to);
}


char * ASN1CALL
print_EncTGSRepPart(const EncTGSRepPart *data, int flags)
{
    return _asn1_print_top(asn1_EncTGSRepPart, flags, data);
}

/* template_members: AP_REQ exp exp */
/* template_members: AP_REQ exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AP_REQ exp exp */
/* generate_template_type: AP_REQ_tag_pvno_198 */
/* template_members: AP_REQ exp exp */
/* generate_template_type: AP_REQ_tag_msg_type_199 */
/* template_members: AP_REQ exp exp */
/* generate_template_type: AP_REQ_tag_ap_options_200 */
const struct asn1_template asn1_AP_REQ_tag_ap_options_200[] = {
/* 0 */ { 0, sizeof(APOptions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_APOptions }
};
/* template_members: AP_REQ exp exp */
/* generate_template_type: AP_REQ_tag_ticket_201 */
/* template_members: AP_REQ exp exp */
/* generate_template_type: AP_REQ_tag_authenticator_202 */
/* generate_template_type: AP_REQ_tag__197 */
const struct asn1_template asn1_AP_REQ_tag__197[] = {
/* 0 */ { 0, sizeof(struct AP_REQ), ((void *)(uintptr_t)11) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AP_REQ, pvno), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct AP_REQ, msg_type), asn1_KDC_REQ_tag_msg_type_157 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct AP_REQ, ap_options), asn1_AP_REQ_tag_ap_options_200 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct AP_REQ, ticket), asn1_KDC_REQ_BODY_additional_tickets_10 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct AP_REQ, authenticator), asn1_Ticket_tag_enc_part_52 },
/* 6 */ { A1_OP_NAME, 0, "AP_REQ" },
/* 7 */ { A1_OP_NAME, 0, "pvno" },
/* 8 */ { A1_OP_NAME, 0, "msg-type" },
/* 9 */ { A1_OP_NAME, 0, "ap-options" },
/* 10 */ { A1_OP_NAME, 0, "ticket" },
/* 11 */ { A1_OP_NAME, 0, "authenticator" }
};
/* generate_template_type: AP_REQ_tag__196 */
const struct asn1_template asn1_AP_REQ_tag__196[] = {
/* 0 */ { 0, sizeof(struct AP_REQ), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AP_REQ_tag__197 }
};
/* generate_template_type: AP_REQ */
const struct asn1_template asn1_AP_REQ[] = {
/* 0 */ { 0, sizeof(AP_REQ), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,14), 0, asn1_AP_REQ_tag__196 }
};

int ASN1CALL
decode_AP_REQ(const unsigned char *p, size_t len, AP_REQ *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AP_REQ, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AP_REQ(unsigned char *p, size_t len, const AP_REQ *data, size_t *size)
{
    return _asn1_encode(asn1_AP_REQ, p, len, data, size);
}


size_t ASN1CALL
length_AP_REQ(const AP_REQ *data)
{
    return _asn1_length(asn1_AP_REQ, data);
}


void ASN1CALL
free_AP_REQ(AP_REQ *data)
{
    _asn1_free_top(asn1_AP_REQ, data);
}


int ASN1CALL
copy_AP_REQ(const AP_REQ *from, AP_REQ *to)
{
    return _asn1_copy_top(asn1_AP_REQ, from, to);
}


char * ASN1CALL
print_AP_REQ(const AP_REQ *data, int flags)
{
    return _asn1_print_top(asn1_AP_REQ, flags, data);
}

/* template_members: AP_REP exp exp */
/* template_members: AP_REP exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AP_REP exp exp */
/* generate_template_type: AP_REP_tag_pvno_205 */
/* template_members: AP_REP exp exp */
/* generate_template_type: AP_REP_tag_msg_type_206 */
/* template_members: AP_REP exp exp */
/* generate_template_type: AP_REP_tag_enc_part_207 */
/* generate_template_type: AP_REP_tag__204 */
const struct asn1_template asn1_AP_REP_tag__204[] = {
/* 0 */ { 0, sizeof(struct AP_REP), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AP_REP, pvno), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct AP_REP, msg_type), asn1_KDC_REQ_tag_msg_type_157 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct AP_REP, enc_part), asn1_Ticket_tag_enc_part_52 },
/* 4 */ { A1_OP_NAME, 0, "AP_REP" },
/* 5 */ { A1_OP_NAME, 0, "pvno" },
/* 6 */ { A1_OP_NAME, 0, "msg-type" },
/* 7 */ { A1_OP_NAME, 0, "enc-part" }
};
/* generate_template_type: AP_REP_tag__203 */
const struct asn1_template asn1_AP_REP_tag__203[] = {
/* 0 */ { 0, sizeof(struct AP_REP), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AP_REP_tag__204 }
};
/* generate_template_type: AP_REP */
const struct asn1_template asn1_AP_REP[] = {
/* 0 */ { 0, sizeof(AP_REP), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,15), 0, asn1_AP_REP_tag__203 }
};

int ASN1CALL
decode_AP_REP(const unsigned char *p, size_t len, AP_REP *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AP_REP, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AP_REP(unsigned char *p, size_t len, const AP_REP *data, size_t *size)
{
    return _asn1_encode(asn1_AP_REP, p, len, data, size);
}


size_t ASN1CALL
length_AP_REP(const AP_REP *data)
{
    return _asn1_length(asn1_AP_REP, data);
}


void ASN1CALL
free_AP_REP(AP_REP *data)
{
    _asn1_free_top(asn1_AP_REP, data);
}


int ASN1CALL
copy_AP_REP(const AP_REP *from, AP_REP *to)
{
    return _asn1_copy_top(asn1_AP_REP, from, to);
}


char * ASN1CALL
print_AP_REP(const AP_REP *data, int flags)
{
    return _asn1_print_top(asn1_AP_REP, flags, data);
}

/* template_members: EncAPRepPart exp exp */
/* template_members: EncAPRepPart exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: EncAPRepPart exp exp */
/* generate_template_type: EncAPRepPart_tag_ctime_210 */
/* template_members: EncAPRepPart exp exp */
/* generate_template_type: EncAPRepPart_tag_cusec_211 */
/* template_members: EncAPRepPart exp exp */
/* generate_template_type: EncAPRepPart_tag_subkey_212 */
/* template_members: EncAPRepPart exp exp */
/* generate_template_type: EncAPRepPart_tag_seq_number_213 */
/* generate_template_type: EncAPRepPart_tag__209 */
const struct asn1_template asn1_EncAPRepPart_tag__209[] = {
/* 0 */ { 0, sizeof(struct EncAPRepPart), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncAPRepPart, ctime), asn1_LastReq_val_tag_lr_value_33 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct EncAPRepPart, cusec), asn1_HostAddress_tag_addr_type_16 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct EncAPRepPart, subkey), asn1_EncTicketPart_tag_key_56 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct EncAPRepPart, seq_number), asn1_Authenticator_tag_seq_number_116 },
/* 5 */ { A1_OP_NAME, 0, "EncAPRepPart" },
/* 6 */ { A1_OP_NAME, 0, "ctime" },
/* 7 */ { A1_OP_NAME, 0, "cusec" },
/* 8 */ { A1_OP_NAME, 0, "subkey" },
/* 9 */ { A1_OP_NAME, 0, "seq-number" }
};
/* generate_template_type: EncAPRepPart_tag__208 */
const struct asn1_template asn1_EncAPRepPart_tag__208[] = {
/* 0 */ { 0, sizeof(struct EncAPRepPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncAPRepPart_tag__209 }
};
/* generate_template_type: EncAPRepPart */
const struct asn1_template asn1_EncAPRepPart[] = {
/* 0 */ { 0, sizeof(EncAPRepPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,27), 0, asn1_EncAPRepPart_tag__208 }
};

int ASN1CALL
decode_EncAPRepPart(const unsigned char *p, size_t len, EncAPRepPart *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncAPRepPart, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EncAPRepPart(unsigned char *p, size_t len, const EncAPRepPart *data, size_t *size)
{
    return _asn1_encode(asn1_EncAPRepPart, p, len, data, size);
}


size_t ASN1CALL
length_EncAPRepPart(const EncAPRepPart *data)
{
    return _asn1_length(asn1_EncAPRepPart, data);
}


void ASN1CALL
free_EncAPRepPart(EncAPRepPart *data)
{
    _asn1_free_top(asn1_EncAPRepPart, data);
}


int ASN1CALL
copy_EncAPRepPart(const EncAPRepPart *from, EncAPRepPart *to)
{
    return _asn1_copy_top(asn1_EncAPRepPart, from, to);
}


char * ASN1CALL
print_EncAPRepPart(const EncAPRepPart *data, int flags)
{
    return _asn1_print_top(asn1_EncAPRepPart, flags, data);
}

/* template_members: KRB_SAFE_BODY exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KRB_SAFE_BODY exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_user_data_216 */
/* generate_template_type: KRB_SAFE_BODY_tag_user_data_215 */
/* template_members: KRB_SAFE_BODY exp exp */
/* generate_template_type: KRB_SAFE_BODY_tag_timestamp_217 */
/* template_members: KRB_SAFE_BODY exp exp */
/* generate_template_type: KRB_SAFE_BODY_tag_usec_218 */
/* template_members: KRB_SAFE_BODY exp exp */
/* generate_template_type: KRB_SAFE_BODY_tag_seq_number_219 */
/* template_members: KRB_SAFE_BODY exp exp */
/* generate_template_type: KRB_SAFE_BODY_tag_s_address_220 */
/* template_members: KRB_SAFE_BODY exp exp */
/* generate_template_type: KRB_SAFE_BODY_tag_r_address_221 */
/* generate_template_type: KRB_SAFE_BODY_tag__214 */
const struct asn1_template asn1_KRB_SAFE_BODY_tag__214[] = {
/* 0 */ { 0, sizeof(struct KRB_SAFE_BODY), ((void *)(uintptr_t)13) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB_SAFE_BODY, user_data), asn1_HostAddress_tag_address_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KRB_SAFE_BODY, timestamp), asn1_LastReq_val_tag_lr_value_33 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KRB_SAFE_BODY, usec), asn1_HostAddress_tag_addr_type_16 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KRB_SAFE_BODY, seq_number), asn1_Authenticator_tag_seq_number_116 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct KRB_SAFE_BODY, s_address), asn1_HostAddress_seofTstruct_1 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct KRB_SAFE_BODY, r_address), asn1_HostAddress_seofTstruct_1 },
/* 7 */ { A1_OP_NAME, 0, "KRB_SAFE_BODY" },
/* 8 */ { A1_OP_NAME, 0, "user-data" },
/* 9 */ { A1_OP_NAME, 0, "timestamp" },
/* 10 */ { A1_OP_NAME, 0, "usec" },
/* 11 */ { A1_OP_NAME, 0, "seq-number" },
/* 12 */ { A1_OP_NAME, 0, "s-address" },
/* 13 */ { A1_OP_NAME, 0, "r-address" }
};
/* generate_template_type: KRB_SAFE_BODY */
const struct asn1_template asn1_KRB_SAFE_BODY[] = {
/* 0 */ { 0, sizeof(KRB_SAFE_BODY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_SAFE_BODY_tag__214 }
};

int ASN1CALL
decode_KRB_SAFE_BODY(const unsigned char *p, size_t len, KRB_SAFE_BODY *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KRB_SAFE_BODY, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KRB_SAFE_BODY(unsigned char *p, size_t len, const KRB_SAFE_BODY *data, size_t *size)
{
    return _asn1_encode(asn1_KRB_SAFE_BODY, p, len, data, size);
}


size_t ASN1CALL
length_KRB_SAFE_BODY(const KRB_SAFE_BODY *data)
{
    return _asn1_length(asn1_KRB_SAFE_BODY, data);
}


void ASN1CALL
free_KRB_SAFE_BODY(KRB_SAFE_BODY *data)
{
    _asn1_free_top(asn1_KRB_SAFE_BODY, data);
}


int ASN1CALL
copy_KRB_SAFE_BODY(const KRB_SAFE_BODY *from, KRB_SAFE_BODY *to)
{
    return _asn1_copy_top(asn1_KRB_SAFE_BODY, from, to);
}


char * ASN1CALL
print_KRB_SAFE_BODY(const KRB_SAFE_BODY *data, int flags)
{
    return _asn1_print_top(asn1_KRB_SAFE_BODY, flags, data);
}

/* template_members: KRB_SAFE exp exp */
/* template_members: KRB_SAFE exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KRB_SAFE exp exp */
/* generate_template_type: KRB_SAFE_tag_pvno_224 */
/* template_members: KRB_SAFE exp exp */
/* generate_template_type: KRB_SAFE_tag_msg_type_225 */
/* template_members: KRB_SAFE exp exp */
/* generate_template_type: KRB_SAFE_tag_safe_body_226 */
const struct asn1_template asn1_KRB_SAFE_tag_safe_body_226[] = {
/* 0 */ { 0, sizeof(KRB_SAFE_BODY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KRB_SAFE_BODY }
};
/* template_members: KRB_SAFE exp exp */
/* generate_template_type: KRB_SAFE_tag_cksum_227 */
/* generate_template_type: KRB_SAFE_tag__223 */
const struct asn1_template asn1_KRB_SAFE_tag__223[] = {
/* 0 */ { 0, sizeof(struct KRB_SAFE), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB_SAFE, pvno), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB_SAFE, msg_type), asn1_KDC_REQ_tag_msg_type_157 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KRB_SAFE, safe_body), asn1_KRB_SAFE_tag_safe_body_226 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KRB_SAFE, cksum), asn1_Authenticator_tag_cksum_112 },
/* 5 */ { A1_OP_NAME, 0, "KRB_SAFE" },
/* 6 */ { A1_OP_NAME, 0, "pvno" },
/* 7 */ { A1_OP_NAME, 0, "msg-type" },
/* 8 */ { A1_OP_NAME, 0, "safe-body" },
/* 9 */ { A1_OP_NAME, 0, "cksum" }
};
/* generate_template_type: KRB_SAFE_tag__222 */
const struct asn1_template asn1_KRB_SAFE_tag__222[] = {
/* 0 */ { 0, sizeof(struct KRB_SAFE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_SAFE_tag__223 }
};
/* generate_template_type: KRB_SAFE */
const struct asn1_template asn1_KRB_SAFE[] = {
/* 0 */ { 0, sizeof(KRB_SAFE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,20), 0, asn1_KRB_SAFE_tag__222 }
};

int ASN1CALL
decode_KRB_SAFE(const unsigned char *p, size_t len, KRB_SAFE *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KRB_SAFE, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KRB_SAFE(unsigned char *p, size_t len, const KRB_SAFE *data, size_t *size)
{
    return _asn1_encode(asn1_KRB_SAFE, p, len, data, size);
}


size_t ASN1CALL
length_KRB_SAFE(const KRB_SAFE *data)
{
    return _asn1_length(asn1_KRB_SAFE, data);
}


void ASN1CALL
free_KRB_SAFE(KRB_SAFE *data)
{
    _asn1_free_top(asn1_KRB_SAFE, data);
}


int ASN1CALL
copy_KRB_SAFE(const KRB_SAFE *from, KRB_SAFE *to)
{
    return _asn1_copy_top(asn1_KRB_SAFE, from, to);
}


char * ASN1CALL
print_KRB_SAFE(const KRB_SAFE *data, int flags)
{
    return _asn1_print_top(asn1_KRB_SAFE, flags, data);
}

/* template_members: KRB_PRIV exp exp */
/* template_members: KRB_PRIV exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KRB_PRIV exp exp */
/* generate_template_type: KRB_PRIV_tag_pvno_230 */
/* template_members: KRB_PRIV exp exp */
/* generate_template_type: KRB_PRIV_tag_msg_type_231 */
/* template_members: KRB_PRIV exp exp */
/* generate_template_type: KRB_PRIV_tag_enc_part_232 */
/* generate_template_type: KRB_PRIV_tag__229 */
const struct asn1_template asn1_KRB_PRIV_tag__229[] = {
/* 0 */ { 0, sizeof(struct KRB_PRIV), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB_PRIV, pvno), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB_PRIV, msg_type), asn1_KDC_REQ_tag_msg_type_157 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KRB_PRIV, enc_part), asn1_Ticket_tag_enc_part_52 },
/* 4 */ { A1_OP_NAME, 0, "KRB_PRIV" },
/* 5 */ { A1_OP_NAME, 0, "pvno" },
/* 6 */ { A1_OP_NAME, 0, "msg-type" },
/* 7 */ { A1_OP_NAME, 0, "enc-part" }
};
/* generate_template_type: KRB_PRIV_tag__228 */
const struct asn1_template asn1_KRB_PRIV_tag__228[] = {
/* 0 */ { 0, sizeof(struct KRB_PRIV), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_PRIV_tag__229 }
};
/* generate_template_type: KRB_PRIV */
const struct asn1_template asn1_KRB_PRIV[] = {
/* 0 */ { 0, sizeof(KRB_PRIV), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,21), 0, asn1_KRB_PRIV_tag__228 }
};

int ASN1CALL
decode_KRB_PRIV(const unsigned char *p, size_t len, KRB_PRIV *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KRB_PRIV, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KRB_PRIV(unsigned char *p, size_t len, const KRB_PRIV *data, size_t *size)
{
    return _asn1_encode(asn1_KRB_PRIV, p, len, data, size);
}


size_t ASN1CALL
length_KRB_PRIV(const KRB_PRIV *data)
{
    return _asn1_length(asn1_KRB_PRIV, data);
}


void ASN1CALL
free_KRB_PRIV(KRB_PRIV *data)
{
    _asn1_free_top(asn1_KRB_PRIV, data);
}


int ASN1CALL
copy_KRB_PRIV(const KRB_PRIV *from, KRB_PRIV *to)
{
    return _asn1_copy_top(asn1_KRB_PRIV, from, to);
}


char * ASN1CALL
print_KRB_PRIV(const KRB_PRIV *data, int flags)
{
    return _asn1_print_top(asn1_KRB_PRIV, flags, data);
}

/* template_members: EncKrbPrivPart exp exp */
/* template_members: EncKrbPrivPart exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: EncKrbPrivPart exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_user_data_236 */
/* generate_template_type: EncKrbPrivPart_tag_user_data_235 */
/* template_members: EncKrbPrivPart exp exp */
/* generate_template_type: EncKrbPrivPart_tag_timestamp_237 */
/* template_members: EncKrbPrivPart exp exp */
/* generate_template_type: EncKrbPrivPart_tag_usec_238 */
/* template_members: EncKrbPrivPart exp exp */
/* generate_template_type: EncKrbPrivPart_tag_seq_number_239 */
/* template_members: EncKrbPrivPart exp exp */
/* generate_template_type: EncKrbPrivPart_tag_s_address_240 */
/* template_members: EncKrbPrivPart exp exp */
/* generate_template_type: EncKrbPrivPart_tag_r_address_241 */
/* generate_template_type: EncKrbPrivPart_tag__234 */
const struct asn1_template asn1_EncKrbPrivPart_tag__234[] = {
/* 0 */ { 0, sizeof(struct EncKrbPrivPart), ((void *)(uintptr_t)13) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncKrbPrivPart, user_data), asn1_HostAddress_tag_address_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbPrivPart, timestamp), asn1_LastReq_val_tag_lr_value_33 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbPrivPart, usec), asn1_HostAddress_tag_addr_type_16 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbPrivPart, seq_number), asn1_Authenticator_tag_seq_number_116 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbPrivPart, s_address), asn1_HostAddress_seofTstruct_1 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbPrivPart, r_address), asn1_HostAddress_seofTstruct_1 },
/* 7 */ { A1_OP_NAME, 0, "EncKrbPrivPart" },
/* 8 */ { A1_OP_NAME, 0, "user-data" },
/* 9 */ { A1_OP_NAME, 0, "timestamp" },
/* 10 */ { A1_OP_NAME, 0, "usec" },
/* 11 */ { A1_OP_NAME, 0, "seq-number" },
/* 12 */ { A1_OP_NAME, 0, "s-address" },
/* 13 */ { A1_OP_NAME, 0, "r-address" }
};
/* generate_template_type: EncKrbPrivPart_tag__233 */
const struct asn1_template asn1_EncKrbPrivPart_tag__233[] = {
/* 0 */ { 0, sizeof(struct EncKrbPrivPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncKrbPrivPart_tag__234 }
};
/* generate_template_type: EncKrbPrivPart */
const struct asn1_template asn1_EncKrbPrivPart[] = {
/* 0 */ { 0, sizeof(EncKrbPrivPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,28), 0, asn1_EncKrbPrivPart_tag__233 }
};

int ASN1CALL
decode_EncKrbPrivPart(const unsigned char *p, size_t len, EncKrbPrivPart *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncKrbPrivPart, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EncKrbPrivPart(unsigned char *p, size_t len, const EncKrbPrivPart *data, size_t *size)
{
    return _asn1_encode(asn1_EncKrbPrivPart, p, len, data, size);
}


size_t ASN1CALL
length_EncKrbPrivPart(const EncKrbPrivPart *data)
{
    return _asn1_length(asn1_EncKrbPrivPart, data);
}


void ASN1CALL
free_EncKrbPrivPart(EncKrbPrivPart *data)
{
    _asn1_free_top(asn1_EncKrbPrivPart, data);
}


int ASN1CALL
copy_EncKrbPrivPart(const EncKrbPrivPart *from, EncKrbPrivPart *to)
{
    return _asn1_copy_top(asn1_EncKrbPrivPart, from, to);
}


char * ASN1CALL
print_EncKrbPrivPart(const EncKrbPrivPart *data, int flags)
{
    return _asn1_print_top(asn1_EncKrbPrivPart, flags, data);
}

/* template_members: KRB_CRED exp exp */
/* template_members: KRB_CRED exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KRB_CRED exp exp */
/* generate_template_type: KRB_CRED_tag_pvno_244 */
/* template_members: KRB_CRED exp exp */
/* generate_template_type: KRB_CRED_tag_msg_type_245 */
/* template_members: KRB_CRED exp exp */
/* template_members: KRB_CRED exp exp */
/* generate_template_type: KRB_CRED_tickets_13 */
/* generate_template_type: KRB_CRED_tag_tickets_247 */
const struct asn1_template asn1_KRB_CRED_tag_tickets_247[] = {
/* 0 */ { 0, sizeof(struct KRB_CRED_tickets), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_KDC_REQ_BODY_additional_tickets_10 }
};
/* generate_template_type: KRB_CRED_tag_tickets_246 */
const struct asn1_template asn1_KRB_CRED_tag_tickets_246[] = {
/* 0 */ { 0, sizeof(struct KRB_CRED_tickets), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_CRED_tag_tickets_247 }
};
/* template_members: KRB_CRED exp exp */
/* generate_template_type: KRB_CRED_tag_enc_part_248 */
/* generate_template_type: KRB_CRED_tag__243 */
const struct asn1_template asn1_KRB_CRED_tag__243[] = {
/* 0 */ { 0, sizeof(struct KRB_CRED), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB_CRED, pvno), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB_CRED, msg_type), asn1_KDC_REQ_tag_msg_type_157 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KRB_CRED, tickets), asn1_KRB_CRED_tag_tickets_246 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KRB_CRED, enc_part), asn1_Ticket_tag_enc_part_52 },
/* 5 */ { A1_OP_NAME, 0, "KRB_CRED" },
/* 6 */ { A1_OP_NAME, 0, "pvno" },
/* 7 */ { A1_OP_NAME, 0, "msg-type" },
/* 8 */ { A1_OP_NAME, 0, "tickets" },
/* 9 */ { A1_OP_NAME, 0, "enc-part" }
};
/* generate_template_type: KRB_CRED_tag__242 */
const struct asn1_template asn1_KRB_CRED_tag__242[] = {
/* 0 */ { 0, sizeof(struct KRB_CRED), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_CRED_tag__243 }
};
/* generate_template_type: KRB_CRED */
const struct asn1_template asn1_KRB_CRED[] = {
/* 0 */ { 0, sizeof(KRB_CRED), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,22), 0, asn1_KRB_CRED_tag__242 }
};

int ASN1CALL
decode_KRB_CRED(const unsigned char *p, size_t len, KRB_CRED *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KRB_CRED, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KRB_CRED(unsigned char *p, size_t len, const KRB_CRED *data, size_t *size)
{
    return _asn1_encode(asn1_KRB_CRED, p, len, data, size);
}


size_t ASN1CALL
length_KRB_CRED(const KRB_CRED *data)
{
    return _asn1_length(asn1_KRB_CRED, data);
}


void ASN1CALL
free_KRB_CRED(KRB_CRED *data)
{
    _asn1_free_top(asn1_KRB_CRED, data);
}


int ASN1CALL
copy_KRB_CRED(const KRB_CRED *from, KRB_CRED *to)
{
    return _asn1_copy_top(asn1_KRB_CRED, from, to);
}


char * ASN1CALL
print_KRB_CRED(const KRB_CRED *data, int flags)
{
    return _asn1_print_top(asn1_KRB_CRED, flags, data);
}

/* template_members: KrbCredInfo exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KrbCredInfo exp exp */
/* generate_template_type: KrbCredInfo_tag_key_250 */
/* template_members: KrbCredInfo exp exp */
/* generate_template_type: KrbCredInfo_tag_prealm_251 */
/* template_members: KrbCredInfo exp exp */
/* generate_template_type: KrbCredInfo_tag_pname_252 */
/* template_members: KrbCredInfo exp exp */
/* generate_template_type: KrbCredInfo_tag_flags_253 */
/* template_members: KrbCredInfo exp exp */
/* generate_template_type: KrbCredInfo_tag_authtime_254 */
/* template_members: KrbCredInfo exp exp */
/* generate_template_type: KrbCredInfo_tag_starttime_255 */
/* template_members: KrbCredInfo exp exp */
/* generate_template_type: KrbCredInfo_tag_endtime_256 */
/* template_members: KrbCredInfo exp exp */
/* generate_template_type: KrbCredInfo_tag_renew_till_257 */
/* template_members: KrbCredInfo exp exp */
/* generate_template_type: KrbCredInfo_tag_srealm_258 */
/* template_members: KrbCredInfo exp exp */
/* generate_template_type: KrbCredInfo_tag_sname_259 */
/* template_members: KrbCredInfo exp exp */
/* generate_template_type: KrbCredInfo_tag_caddr_260 */
/* generate_template_type: KrbCredInfo_tag__249 */
const struct asn1_template asn1_KrbCredInfo_tag__249[] = {
/* 0 */ { 0, sizeof(struct KrbCredInfo), ((void *)(uintptr_t)23) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbCredInfo, key), asn1_EncTicketPart_tag_key_56 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, prealm), asn1_Ticket_tag_realm_50 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, pname), asn1_Ticket_tag_sname_51 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, flags), asn1_EncTicketPart_tag_flags_55 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, authtime), asn1_LastReq_val_tag_lr_value_33 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, starttime), asn1_LastReq_val_tag_lr_value_33 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, endtime), asn1_LastReq_val_tag_lr_value_33 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, renew_till), asn1_LastReq_val_tag_lr_value_33 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, srealm), asn1_Ticket_tag_realm_50 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, sname), asn1_Ticket_tag_sname_51 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,10)|A1_FLAG_OPTIONAL, offsetof(struct KrbCredInfo, caddr), asn1_EncTicketPart_tag_caddr_64 },
/* 12 */ { A1_OP_NAME, 0, "KrbCredInfo" },
/* 13 */ { A1_OP_NAME, 0, "key" },
/* 14 */ { A1_OP_NAME, 0, "prealm" },
/* 15 */ { A1_OP_NAME, 0, "pname" },
/* 16 */ { A1_OP_NAME, 0, "flags" },
/* 17 */ { A1_OP_NAME, 0, "authtime" },
/* 18 */ { A1_OP_NAME, 0, "starttime" },
/* 19 */ { A1_OP_NAME, 0, "endtime" },
/* 20 */ { A1_OP_NAME, 0, "renew-till" },
/* 21 */ { A1_OP_NAME, 0, "srealm" },
/* 22 */ { A1_OP_NAME, 0, "sname" },
/* 23 */ { A1_OP_NAME, 0, "caddr" }
};
/* generate_template_type: KrbCredInfo */
const struct asn1_template asn1_KrbCredInfo[] = {
/* 0 */ { 0, sizeof(KrbCredInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbCredInfo_tag__249 }
};

int ASN1CALL
decode_KrbCredInfo(const unsigned char *p, size_t len, KrbCredInfo *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KrbCredInfo, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KrbCredInfo(unsigned char *p, size_t len, const KrbCredInfo *data, size_t *size)
{
    return _asn1_encode(asn1_KrbCredInfo, p, len, data, size);
}


size_t ASN1CALL
length_KrbCredInfo(const KrbCredInfo *data)
{
    return _asn1_length(asn1_KrbCredInfo, data);
}


void ASN1CALL
free_KrbCredInfo(KrbCredInfo *data)
{
    _asn1_free_top(asn1_KrbCredInfo, data);
}


int ASN1CALL
copy_KrbCredInfo(const KrbCredInfo *from, KrbCredInfo *to)
{
    return _asn1_copy_top(asn1_KrbCredInfo, from, to);
}


char * ASN1CALL
print_KrbCredInfo(const KrbCredInfo *data, int flags)
{
    return _asn1_print_top(asn1_KrbCredInfo, flags, data);
}

/* template_members: EncKrbCredPart exp exp */
/* template_members: EncKrbCredPart exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: EncKrbCredPart exp exp */
/* template_members: EncKrbCredPart exp exp */
/* generate_template_type: EncKrbCredPart_ticket_info_14 */
const struct asn1_template asn1_EncKrbCredPart_ticket_info_14[] = {
/* 0 */ { 0, sizeof(KrbCredInfo), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KrbCredInfo }
};
/* generate_template_type: EncKrbCredPart_tag_ticket_info_264 */
const struct asn1_template asn1_EncKrbCredPart_tag_ticket_info_264[] = {
/* 0 */ { 0, sizeof(struct EncKrbCredPart_ticket_info), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_EncKrbCredPart_ticket_info_14 }
};
/* generate_template_type: EncKrbCredPart_tag_ticket_info_263 */
const struct asn1_template asn1_EncKrbCredPart_tag_ticket_info_263[] = {
/* 0 */ { 0, sizeof(struct EncKrbCredPart_ticket_info), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncKrbCredPart_tag_ticket_info_264 }
};
/* template_members: EncKrbCredPart exp exp */
/* generate_template_type: EncKrbCredPart_tag_nonce_265 */
/* template_members: EncKrbCredPart exp exp */
/* generate_template_type: EncKrbCredPart_tag_timestamp_266 */
/* template_members: EncKrbCredPart exp exp */
/* generate_template_type: EncKrbCredPart_tag_usec_267 */
/* template_members: EncKrbCredPart exp exp */
/* generate_template_type: EncKrbCredPart_tag_s_address_268 */
/* template_members: EncKrbCredPart exp exp */
/* generate_template_type: EncKrbCredPart_tag_r_address_269 */
/* generate_template_type: EncKrbCredPart_tag__262 */
const struct asn1_template asn1_EncKrbCredPart_tag__262[] = {
/* 0 */ { 0, sizeof(struct EncKrbCredPart), ((void *)(uintptr_t)13) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct EncKrbCredPart, ticket_info), asn1_EncKrbCredPart_tag_ticket_info_263 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbCredPart, nonce), asn1_HostAddress_tag_addr_type_16 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbCredPart, timestamp), asn1_LastReq_val_tag_lr_value_33 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbCredPart, usec), asn1_HostAddress_tag_addr_type_16 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbCredPart, s_address), asn1_HostAddress_seofTstruct_1 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct EncKrbCredPart, r_address), asn1_HostAddress_seofTstruct_1 },
/* 7 */ { A1_OP_NAME, 0, "EncKrbCredPart" },
/* 8 */ { A1_OP_NAME, 0, "ticket-info" },
/* 9 */ { A1_OP_NAME, 0, "nonce" },
/* 10 */ { A1_OP_NAME, 0, "timestamp" },
/* 11 */ { A1_OP_NAME, 0, "usec" },
/* 12 */ { A1_OP_NAME, 0, "s-address" },
/* 13 */ { A1_OP_NAME, 0, "r-address" }
};
/* generate_template_type: EncKrbCredPart_tag__261 */
const struct asn1_template asn1_EncKrbCredPart_tag__261[] = {
/* 0 */ { 0, sizeof(struct EncKrbCredPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_EncKrbCredPart_tag__262 }
};
/* generate_template_type: EncKrbCredPart */
const struct asn1_template asn1_EncKrbCredPart[] = {
/* 0 */ { 0, sizeof(EncKrbCredPart), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,29), 0, asn1_EncKrbCredPart_tag__261 }
};

int ASN1CALL
decode_EncKrbCredPart(const unsigned char *p, size_t len, EncKrbCredPart *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EncKrbCredPart, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EncKrbCredPart(unsigned char *p, size_t len, const EncKrbCredPart *data, size_t *size)
{
    return _asn1_encode(asn1_EncKrbCredPart, p, len, data, size);
}


size_t ASN1CALL
length_EncKrbCredPart(const EncKrbCredPart *data)
{
    return _asn1_length(asn1_EncKrbCredPart, data);
}


void ASN1CALL
free_EncKrbCredPart(EncKrbCredPart *data)
{
    _asn1_free_top(asn1_EncKrbCredPart, data);
}


int ASN1CALL
copy_EncKrbCredPart(const EncKrbCredPart *from, EncKrbCredPart *to)
{
    return _asn1_copy_top(asn1_EncKrbCredPart, from, to);
}


char * ASN1CALL
print_EncKrbCredPart(const EncKrbCredPart *data, int flags)
{
    return _asn1_print_top(asn1_EncKrbCredPart, flags, data);
}

/* template_members: KRB_ERROR exp exp */
/* template_members: KRB_ERROR exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KRB_ERROR exp exp */
/* generate_template_type: KRB_ERROR_tag_pvno_272 */
/* template_members: KRB_ERROR exp exp */
/* generate_template_type: KRB_ERROR_tag_msg_type_273 */
/* template_members: KRB_ERROR exp exp */
/* generate_template_type: KRB_ERROR_tag_ctime_274 */
/* template_members: KRB_ERROR exp exp */
/* generate_template_type: KRB_ERROR_tag_cusec_275 */
/* template_members: KRB_ERROR exp exp */
/* generate_template_type: KRB_ERROR_tag_stime_276 */
/* template_members: KRB_ERROR exp exp */
/* generate_template_type: KRB_ERROR_tag_susec_277 */
/* template_members: KRB_ERROR exp exp */
/* generate_template_type: KRB_ERROR_tag_error_code_278 */
/* template_members: KRB_ERROR exp exp */
/* generate_template_type: KRB_ERROR_tag_crealm_279 */
/* template_members: KRB_ERROR exp exp */
/* generate_template_type: KRB_ERROR_tag_cname_280 */
/* template_members: KRB_ERROR exp exp */
/* generate_template_type: KRB_ERROR_tag_realm_281 */
/* template_members: KRB_ERROR exp exp */
/* generate_template_type: KRB_ERROR_tag_sname_282 */
/* template_members: KRB_ERROR exp exp */
/* template_members: heim_general_string exp exp */
/* generate_template_type: heim_general_string_tag_e_text_284 */
/* generate_template_type: KRB_ERROR_tag_e_text_283 */
/* template_members: KRB_ERROR exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_e_data_286 */
/* generate_template_type: KRB_ERROR_tag_e_data_285 */
/* generate_template_type: KRB_ERROR_tag__271 */
const struct asn1_template asn1_KRB_ERROR_tag__271[] = {
/* 0 */ { 0, sizeof(struct KRB_ERROR), ((void *)(uintptr_t)27) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KRB_ERROR, pvno), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KRB_ERROR, msg_type), asn1_KDC_REQ_tag_msg_type_157 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, ctime), asn1_LastReq_val_tag_lr_value_33 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, cusec), asn1_HostAddress_tag_addr_type_16 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct KRB_ERROR, stime), asn1_LastReq_val_tag_lr_value_33 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct KRB_ERROR, susec), asn1_HostAddress_tag_addr_type_16 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct KRB_ERROR, error_code), asn1_HostAddress_tag_addr_type_16 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, crealm), asn1_Ticket_tag_realm_50 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, cname), asn1_Ticket_tag_sname_51 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9), offsetof(struct KRB_ERROR, realm), asn1_Ticket_tag_realm_50 },
/* 11 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,10), offsetof(struct KRB_ERROR, sname), asn1_Ticket_tag_sname_51 },
/* 12 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,11)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, e_text), asn1_PrincipalName_name_string_0 },
/* 13 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,12)|A1_FLAG_OPTIONAL, offsetof(struct KRB_ERROR, e_data), asn1_HostAddress_tag_address_17 },
/* 14 */ { A1_OP_NAME, 0, "KRB_ERROR" },
/* 15 */ { A1_OP_NAME, 0, "pvno" },
/* 16 */ { A1_OP_NAME, 0, "msg-type" },
/* 17 */ { A1_OP_NAME, 0, "ctime" },
/* 18 */ { A1_OP_NAME, 0, "cusec" },
/* 19 */ { A1_OP_NAME, 0, "stime" },
/* 20 */ { A1_OP_NAME, 0, "susec" },
/* 21 */ { A1_OP_NAME, 0, "error-code" },
/* 22 */ { A1_OP_NAME, 0, "crealm" },
/* 23 */ { A1_OP_NAME, 0, "cname" },
/* 24 */ { A1_OP_NAME, 0, "realm" },
/* 25 */ { A1_OP_NAME, 0, "sname" },
/* 26 */ { A1_OP_NAME, 0, "e-text" },
/* 27 */ { A1_OP_NAME, 0, "e-data" }
};
/* generate_template_type: KRB_ERROR_tag__270 */
const struct asn1_template asn1_KRB_ERROR_tag__270[] = {
/* 0 */ { 0, sizeof(struct KRB_ERROR), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KRB_ERROR_tag__271 }
};
/* generate_template_type: KRB_ERROR */
const struct asn1_template asn1_KRB_ERROR[] = {
/* 0 */ { 0, sizeof(KRB_ERROR), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_APPL,CONS,30), 0, asn1_KRB_ERROR_tag__270 }
};

int ASN1CALL
decode_KRB_ERROR(const unsigned char *p, size_t len, KRB_ERROR *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KRB_ERROR, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KRB_ERROR(unsigned char *p, size_t len, const KRB_ERROR *data, size_t *size)
{
    return _asn1_encode(asn1_KRB_ERROR, p, len, data, size);
}


size_t ASN1CALL
length_KRB_ERROR(const KRB_ERROR *data)
{
    return _asn1_length(asn1_KRB_ERROR, data);
}


void ASN1CALL
free_KRB_ERROR(KRB_ERROR *data)
{
    _asn1_free_top(asn1_KRB_ERROR, data);
}


int ASN1CALL
copy_KRB_ERROR(const KRB_ERROR *from, KRB_ERROR *to)
{
    return _asn1_copy_top(asn1_KRB_ERROR, from, to);
}


char * ASN1CALL
print_KRB_ERROR(const KRB_ERROR *data, int flags)
{
    return _asn1_print_top(asn1_KRB_ERROR, flags, data);
}

/* template_members: ChangePasswdDataMS exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: ChangePasswdDataMS exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_newpasswd_289 */
/* generate_template_type: ChangePasswdDataMS_tag_newpasswd_288 */
/* template_members: ChangePasswdDataMS exp exp */
/* generate_template_type: ChangePasswdDataMS_tag_targname_290 */
/* template_members: ChangePasswdDataMS exp exp */
/* generate_template_type: ChangePasswdDataMS_tag_targrealm_291 */
/* generate_template_type: ChangePasswdDataMS_tag__287 */
const struct asn1_template asn1_ChangePasswdDataMS_tag__287[] = {
/* 0 */ { 0, sizeof(struct ChangePasswdDataMS), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct ChangePasswdDataMS, newpasswd), asn1_HostAddress_tag_address_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct ChangePasswdDataMS, targname), asn1_Ticket_tag_sname_51 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct ChangePasswdDataMS, targrealm), asn1_Ticket_tag_realm_50 },
/* 4 */ { A1_OP_NAME, 0, "ChangePasswdDataMS" },
/* 5 */ { A1_OP_NAME, 0, "newpasswd" },
/* 6 */ { A1_OP_NAME, 0, "targname" },
/* 7 */ { A1_OP_NAME, 0, "targrealm" }
};
/* generate_template_type: ChangePasswdDataMS */
const struct asn1_template asn1_ChangePasswdDataMS[] = {
/* 0 */ { 0, sizeof(ChangePasswdDataMS), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_ChangePasswdDataMS_tag__287 }
};

int ASN1CALL
decode_ChangePasswdDataMS(const unsigned char *p, size_t len, ChangePasswdDataMS *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_ChangePasswdDataMS, 0|0, p, len, data, size);
}


int ASN1CALL
encode_ChangePasswdDataMS(unsigned char *p, size_t len, const ChangePasswdDataMS *data, size_t *size)
{
    return _asn1_encode(asn1_ChangePasswdDataMS, p, len, data, size);
}


size_t ASN1CALL
length_ChangePasswdDataMS(const ChangePasswdDataMS *data)
{
    return _asn1_length(asn1_ChangePasswdDataMS, data);
}


void ASN1CALL
free_ChangePasswdDataMS(ChangePasswdDataMS *data)
{
    _asn1_free_top(asn1_ChangePasswdDataMS, data);
}


int ASN1CALL
copy_ChangePasswdDataMS(const ChangePasswdDataMS *from, ChangePasswdDataMS *to)
{
    return _asn1_copy_top(asn1_ChangePasswdDataMS, from, to);
}


char * ASN1CALL
print_ChangePasswdDataMS(const ChangePasswdDataMS *data, int flags)
{
    return _asn1_print_top(asn1_ChangePasswdDataMS, flags, data);
}

/* template_members: EtypeList exp exp */
/* generate_template_type: ENCTYPE_seofTstruct_15 */
/* generate_template_type: EtypeList_tag__292 */
/* generate_template_type: EtypeList */
const struct asn1_template asn1_EtypeList[] = {
/* 0 */ { 0, sizeof(EtypeList), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_KERB_KEY_LIST_REQ_tag__181 }
};

int ASN1CALL
decode_EtypeList(const unsigned char *p, size_t len, EtypeList *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_EtypeList, 0|0, p, len, data, size);
}


int ASN1CALL
encode_EtypeList(unsigned char *p, size_t len, const EtypeList *data, size_t *size)
{
    return _asn1_encode(asn1_EtypeList, p, len, data, size);
}


size_t ASN1CALL
length_EtypeList(const EtypeList *data)
{
    return _asn1_length(asn1_EtypeList, data);
}


void ASN1CALL
free_EtypeList(EtypeList *data)
{
    _asn1_free_top(asn1_EtypeList, data);
}


int ASN1CALL
copy_EtypeList(const EtypeList *from, EtypeList *to)
{
    return _asn1_copy_top(asn1_EtypeList, from, to);
}


char * ASN1CALL
print_EtypeList(const EtypeList *data, int flags)
{
    return _asn1_print_top(asn1_EtypeList, flags, data);
}

/* generate_template_type: AD_IF_RELEVANT */
const struct asn1_template asn1_AD_IF_RELEVANT[] = {
/* 0 */ { 0, sizeof(AD_IF_RELEVANT), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AuthorizationData }
};

int ASN1CALL
decode_AD_IF_RELEVANT(const unsigned char *p, size_t len, AD_IF_RELEVANT *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AD_IF_RELEVANT, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AD_IF_RELEVANT(unsigned char *p, size_t len, const AD_IF_RELEVANT *data, size_t *size)
{
    return _asn1_encode(asn1_AD_IF_RELEVANT, p, len, data, size);
}


size_t ASN1CALL
length_AD_IF_RELEVANT(const AD_IF_RELEVANT *data)
{
    return _asn1_length(asn1_AD_IF_RELEVANT, data);
}


void ASN1CALL
free_AD_IF_RELEVANT(AD_IF_RELEVANT *data)
{
    _asn1_free_top(asn1_AD_IF_RELEVANT, data);
}


int ASN1CALL
copy_AD_IF_RELEVANT(const AD_IF_RELEVANT *from, AD_IF_RELEVANT *to)
{
    return _asn1_copy_top(asn1_AD_IF_RELEVANT, from, to);
}


char * ASN1CALL
print_AD_IF_RELEVANT(const AD_IF_RELEVANT *data, int flags)
{
    return _asn1_print_top(asn1_AD_IF_RELEVANT, flags, data);
}

/* template_members: AD_KDCIssued exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AD_KDCIssued exp exp */
/* generate_template_type: AD_KDCIssued_tag_ad_checksum_294 */
/* template_members: AD_KDCIssued exp exp */
/* generate_template_type: AD_KDCIssued_tag_i_realm_295 */
/* template_members: AD_KDCIssued exp exp */
/* generate_template_type: AD_KDCIssued_tag_i_sname_296 */
/* template_members: AD_KDCIssued exp exp */
/* generate_template_type: AD_KDCIssued_tag_elements_297 */
/* generate_template_type: AD_KDCIssued_tag__293 */
const struct asn1_template asn1_AD_KDCIssued_tag__293[] = {
/* 0 */ { 0, sizeof(struct AD_KDCIssued), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AD_KDCIssued, ad_checksum), asn1_Authenticator_tag_cksum_112 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct AD_KDCIssued, i_realm), asn1_Ticket_tag_realm_50 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct AD_KDCIssued, i_sname), asn1_Ticket_tag_sname_51 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct AD_KDCIssued, elements), asn1_EncTicketPart_tag_authorization_data_65 },
/* 5 */ { A1_OP_NAME, 0, "AD_KDCIssued" },
/* 6 */ { A1_OP_NAME, 0, "ad-checksum" },
/* 7 */ { A1_OP_NAME, 0, "i-realm" },
/* 8 */ { A1_OP_NAME, 0, "i-sname" },
/* 9 */ { A1_OP_NAME, 0, "elements" }
};
/* generate_template_type: AD_KDCIssued */
const struct asn1_template asn1_AD_KDCIssued[] = {
/* 0 */ { 0, sizeof(AD_KDCIssued), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AD_KDCIssued_tag__293 }
};

int ASN1CALL
decode_AD_KDCIssued(const unsigned char *p, size_t len, AD_KDCIssued *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AD_KDCIssued, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AD_KDCIssued(unsigned char *p, size_t len, const AD_KDCIssued *data, size_t *size)
{
    return _asn1_encode(asn1_AD_KDCIssued, p, len, data, size);
}


size_t ASN1CALL
length_AD_KDCIssued(const AD_KDCIssued *data)
{
    return _asn1_length(asn1_AD_KDCIssued, data);
}


void ASN1CALL
free_AD_KDCIssued(AD_KDCIssued *data)
{
    _asn1_free_top(asn1_AD_KDCIssued, data);
}


int ASN1CALL
copy_AD_KDCIssued(const AD_KDCIssued *from, AD_KDCIssued *to)
{
    return _asn1_copy_top(asn1_AD_KDCIssued, from, to);
}


char * ASN1CALL
print_AD_KDCIssued(const AD_KDCIssued *data, int flags)
{
    return _asn1_print_top(asn1_AD_KDCIssued, flags, data);
}

/* template_members: AD_AND_OR exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AD_AND_OR exp exp */
/* generate_template_type: AD_AND_OR_tag_condition_count_299 */
/* template_members: AD_AND_OR exp exp */
/* generate_template_type: AD_AND_OR_tag_elements_300 */
/* generate_template_type: AD_AND_OR_tag__298 */
const struct asn1_template asn1_AD_AND_OR_tag__298[] = {
/* 0 */ { 0, sizeof(struct AD_AND_OR), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AD_AND_OR, condition_count), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct AD_AND_OR, elements), asn1_EncTicketPart_tag_authorization_data_65 },
/* 3 */ { A1_OP_NAME, 0, "AD_AND_OR" },
/* 4 */ { A1_OP_NAME, 0, "condition-count" },
/* 5 */ { A1_OP_NAME, 0, "elements" }
};
/* generate_template_type: AD_AND_OR */
const struct asn1_template asn1_AD_AND_OR[] = {
/* 0 */ { 0, sizeof(AD_AND_OR), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AD_AND_OR_tag__298 }
};

int ASN1CALL
decode_AD_AND_OR(const unsigned char *p, size_t len, AD_AND_OR *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AD_AND_OR, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AD_AND_OR(unsigned char *p, size_t len, const AD_AND_OR *data, size_t *size)
{
    return _asn1_encode(asn1_AD_AND_OR, p, len, data, size);
}


size_t ASN1CALL
length_AD_AND_OR(const AD_AND_OR *data)
{
    return _asn1_length(asn1_AD_AND_OR, data);
}


void ASN1CALL
free_AD_AND_OR(AD_AND_OR *data)
{
    _asn1_free_top(asn1_AD_AND_OR, data);
}


int ASN1CALL
copy_AD_AND_OR(const AD_AND_OR *from, AD_AND_OR *to)
{
    return _asn1_copy_top(asn1_AD_AND_OR, from, to);
}


char * ASN1CALL
print_AD_AND_OR(const AD_AND_OR *data, int flags)
{
    return _asn1_print_top(asn1_AD_AND_OR, flags, data);
}

/* generate_template_type: AD_MANDATORY_FOR_KDC */
const struct asn1_template asn1_AD_MANDATORY_FOR_KDC[] = {
/* 0 */ { 0, sizeof(AD_MANDATORY_FOR_KDC), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_AuthorizationData }
};

int ASN1CALL
decode_AD_MANDATORY_FOR_KDC(const unsigned char *p, size_t len, AD_MANDATORY_FOR_KDC *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AD_MANDATORY_FOR_KDC, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AD_MANDATORY_FOR_KDC(unsigned char *p, size_t len, const AD_MANDATORY_FOR_KDC *data, size_t *size)
{
    return _asn1_encode(asn1_AD_MANDATORY_FOR_KDC, p, len, data, size);
}


size_t ASN1CALL
length_AD_MANDATORY_FOR_KDC(const AD_MANDATORY_FOR_KDC *data)
{
    return _asn1_length(asn1_AD_MANDATORY_FOR_KDC, data);
}


void ASN1CALL
free_AD_MANDATORY_FOR_KDC(AD_MANDATORY_FOR_KDC *data)
{
    _asn1_free_top(asn1_AD_MANDATORY_FOR_KDC, data);
}


int ASN1CALL
copy_AD_MANDATORY_FOR_KDC(const AD_MANDATORY_FOR_KDC *from, AD_MANDATORY_FOR_KDC *to)
{
    return _asn1_copy_top(asn1_AD_MANDATORY_FOR_KDC, from, to);
}


char * ASN1CALL
print_AD_MANDATORY_FOR_KDC(const AD_MANDATORY_FOR_KDC *data, int flags)
{
    return _asn1_print_top(asn1_AD_MANDATORY_FOR_KDC, flags, data);
}

/* template_members: PA_SAM_TYPE exp exp */
const struct asn1_template asn1_PA_SAM_TYPE_enum_names[] = {
/* 0 */ { 0, 0, ((void *)(uintptr_t)6) },
/* 1 */ { A1_OP_NAME, 1, "PA_SAM_TYPE_ENIGMA" },
/* 2 */ { A1_OP_NAME, 2, "PA_SAM_TYPE_DIGI_PATH" },
/* 3 */ { A1_OP_NAME, 3, "PA_SAM_TYPE_SKEY_K0" },
/* 4 */ { A1_OP_NAME, 4, "PA_SAM_TYPE_SKEY" },
/* 5 */ { A1_OP_NAME, 5, "PA_SAM_TYPE_SECURID" },
/* 6 */ { A1_OP_NAME, 6, "PA_SAM_TYPE_CRYPTOCARD" }
};
/* generate_template_type: PA_SAM_TYPE_tag__301 */
const struct asn1_template asn1_PA_SAM_TYPE_tag__301[] = {
/* 0 */ { 0, sizeof(int), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_IMEMBER), 0, asn1_PA_SAM_TYPE_enum_names }
};
/* generate_template_type: PA_SAM_TYPE */
const struct asn1_template asn1_PA_SAM_TYPE[] = {
/* 0 */ { 0, sizeof(PA_SAM_TYPE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_PA_SAM_TYPE_tag__301 }
};

int ASN1CALL
decode_PA_SAM_TYPE(const unsigned char *p, size_t len, PA_SAM_TYPE *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_SAM_TYPE, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_SAM_TYPE(unsigned char *p, size_t len, const PA_SAM_TYPE *data, size_t *size)
{
    return _asn1_encode(asn1_PA_SAM_TYPE, p, len, data, size);
}


size_t ASN1CALL
length_PA_SAM_TYPE(const PA_SAM_TYPE *data)
{
    return _asn1_length(asn1_PA_SAM_TYPE, data);
}


void ASN1CALL
free_PA_SAM_TYPE(PA_SAM_TYPE *data)
{
    _asn1_free_top(asn1_PA_SAM_TYPE, data);
}


int ASN1CALL
copy_PA_SAM_TYPE(const PA_SAM_TYPE *from, PA_SAM_TYPE *to)
{
    return _asn1_copy_top(asn1_PA_SAM_TYPE, from, to);
}


char * ASN1CALL
print_PA_SAM_TYPE(const PA_SAM_TYPE *data, int flags)
{
    return _asn1_print_top(asn1_PA_SAM_TYPE, flags, data);
}

/* generate_template_type: PA_SAM_REDIRECT */
const struct asn1_template asn1_PA_SAM_REDIRECT[] = {
/* 0 */ { 0, sizeof(PA_SAM_REDIRECT), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_HostAddresses }
};

int ASN1CALL
decode_PA_SAM_REDIRECT(const unsigned char *p, size_t len, PA_SAM_REDIRECT *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_SAM_REDIRECT, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_SAM_REDIRECT(unsigned char *p, size_t len, const PA_SAM_REDIRECT *data, size_t *size)
{
    return _asn1_encode(asn1_PA_SAM_REDIRECT, p, len, data, size);
}


size_t ASN1CALL
length_PA_SAM_REDIRECT(const PA_SAM_REDIRECT *data)
{
    return _asn1_length(asn1_PA_SAM_REDIRECT, data);
}


void ASN1CALL
free_PA_SAM_REDIRECT(PA_SAM_REDIRECT *data)
{
    _asn1_free_top(asn1_PA_SAM_REDIRECT, data);
}


int ASN1CALL
copy_PA_SAM_REDIRECT(const PA_SAM_REDIRECT *from, PA_SAM_REDIRECT *to)
{
    return _asn1_copy_top(asn1_PA_SAM_REDIRECT, from, to);
}


char * ASN1CALL
print_PA_SAM_REDIRECT(const PA_SAM_REDIRECT *data, int flags)
{
    return _asn1_print_top(asn1_PA_SAM_REDIRECT, flags, data);
}

/* template_members: SAMFlags exp exp */
static const struct asn1_template asn1_SAMFlags_bmember__4[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(SAMFlags), ((void *)(uintptr_t)3) },
/* 1 */ { 0, 0, "use_sad_as_key" },
/* 2 */ { 0, 1, "send_encrypted_sad" },
/* 3 */ { 0, 2, "must_pk_encrypt_sad" }
};
/* generate_template_type: SAMFlags_tag__302 */
const struct asn1_template asn1_SAMFlags_tag__302[] = {
/* 0 */ { 0, sizeof(SAMFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_SAMFlags_bmember__4 }
};
/* generate_template_type: SAMFlags */
const struct asn1_template asn1_SAMFlags[] = {
/* 0 */ { 0, sizeof(SAMFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_SAMFlags_tag__302 }
};

int ASN1CALL
decode_SAMFlags(const unsigned char *p, size_t len, SAMFlags *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_SAMFlags, 0|0, p, len, data, size);
}


int ASN1CALL
encode_SAMFlags(unsigned char *p, size_t len, const SAMFlags *data, size_t *size)
{
    return _asn1_encode(asn1_SAMFlags, p, len, data, size);
}


size_t ASN1CALL
length_SAMFlags(const SAMFlags *data)
{
    return _asn1_length(asn1_SAMFlags, data);
}


void ASN1CALL
free_SAMFlags(SAMFlags *data)
{
    _asn1_free_top(asn1_SAMFlags, data);
}


int ASN1CALL
copy_SAMFlags(const SAMFlags *from, SAMFlags *to)
{
    return _asn1_copy_top(asn1_SAMFlags, from, to);
}


char * ASN1CALL
print_SAMFlags(const SAMFlags *data, int flags)
{
    return _asn1_print_top(asn1_SAMFlags, flags, data);
}

uint64_t SAMFlags2int(SAMFlags f)
{
uint64_t r = 0;
if(f.use_sad_as_key) r |= (1ULL << 0);
if(f.send_encrypted_sad) r |= (1ULL << 1);
if(f.must_pk_encrypt_sad) r |= (1ULL << 2);
return r;
}

SAMFlags int2SAMFlags(uint64_t n)
{
	SAMFlags flags;

	memset(&flags, 0, sizeof(flags));

	flags.use_sad_as_key = (n >> 0) & 1;
	flags.send_encrypted_sad = (n >> 1) & 1;
	flags.must_pk_encrypt_sad = (n >> 2) & 1;
	return flags;
}

static struct units SAMFlags_units[] = {
	{"must-pk-encrypt-sad",	1ULL << 2},
	{"send-encrypted-sad",	1ULL << 1},
	{"use-sad-as-key",	1ULL << 0},
	{NULL,	0}
};

const struct units * asn1_SAMFlags_units(void){
return SAMFlags_units;
}

/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_type_304 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_flags_305 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_flags_305[] = {
/* 0 */ { 0, sizeof(SAMFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_SAMFlags }
};
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
/* template_members: heim_general_string exp exp */
/* generate_template_type: heim_general_string_tag_sam_type_name_307 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_type_name_306 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
/* template_members: heim_general_string exp exp */
/* generate_template_type: heim_general_string_tag_sam_track_id_309 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_track_id_308 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
/* template_members: heim_general_string exp exp */
/* generate_template_type: heim_general_string_tag_sam_challenge_label_311 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_challenge_label_310 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
/* template_members: heim_general_string exp exp */
/* generate_template_type: heim_general_string_tag_sam_challenge_313 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_challenge_312 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
/* template_members: heim_general_string exp exp */
/* generate_template_type: heim_general_string_tag_sam_response_prompt_315 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_response_prompt_314 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_pk_for_sad_316 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_nonce_317 */
/* template_members: PA_SAM_CHALLENGE_2_BODY exp exp */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag_sam_etype_318 */
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY_tag__303 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY_tag__303[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_SAM_CHALLENGE_2_BODY), ((void *)(uintptr_t)22) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_type), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_flags), asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_flags_305 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_type_name), asn1_PrincipalName_name_string_0 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_track_id), asn1_PrincipalName_name_string_0 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_challenge_label), asn1_PrincipalName_name_string_0 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_challenge), asn1_PrincipalName_name_string_0 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_response_prompt), asn1_PrincipalName_name_string_0 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_pk_for_sad), asn1_EncTicketPart_tag_key_56 },
/* 9 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,8), offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_nonce), asn1_HostAddress_tag_addr_type_16 },
/* 10 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,9), offsetof(struct PA_SAM_CHALLENGE_2_BODY, sam_etype), asn1_HostAddress_tag_addr_type_16 },
/* 11 */ { A1_OP_NAME, 0, "PA_SAM_CHALLENGE_2_BODY" },
/* 12 */ { A1_OP_NAME, 0, "sam-type" },
/* 13 */ { A1_OP_NAME, 0, "sam-flags" },
/* 14 */ { A1_OP_NAME, 0, "sam-type-name" },
/* 15 */ { A1_OP_NAME, 0, "sam-track-id" },
/* 16 */ { A1_OP_NAME, 0, "sam-challenge-label" },
/* 17 */ { A1_OP_NAME, 0, "sam-challenge" },
/* 18 */ { A1_OP_NAME, 0, "sam-response-prompt" },
/* 19 */ { A1_OP_NAME, 0, "sam-pk-for-sad" },
/* 20 */ { A1_OP_NAME, 0, "sam-nonce" },
/* 21 */ { A1_OP_NAME, 0, "sam-etype" },
/* 22 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: PA_SAM_CHALLENGE_2_BODY */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_BODY[] = {
/* 0 */ { 0, sizeof(PA_SAM_CHALLENGE_2_BODY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_SAM_CHALLENGE_2_BODY_tag__303 }
};

int ASN1CALL
decode_PA_SAM_CHALLENGE_2_BODY(const unsigned char *p, size_t len, PA_SAM_CHALLENGE_2_BODY *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_SAM_CHALLENGE_2_BODY, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_SAM_CHALLENGE_2_BODY(unsigned char *p, size_t len, const PA_SAM_CHALLENGE_2_BODY *data, size_t *size)
{
    return _asn1_encode(asn1_PA_SAM_CHALLENGE_2_BODY, p, len, data, size);
}


size_t ASN1CALL
length_PA_SAM_CHALLENGE_2_BODY(const PA_SAM_CHALLENGE_2_BODY *data)
{
    return _asn1_length(asn1_PA_SAM_CHALLENGE_2_BODY, data);
}


void ASN1CALL
free_PA_SAM_CHALLENGE_2_BODY(PA_SAM_CHALLENGE_2_BODY *data)
{
    _asn1_free_top(asn1_PA_SAM_CHALLENGE_2_BODY, data);
}


int ASN1CALL
copy_PA_SAM_CHALLENGE_2_BODY(const PA_SAM_CHALLENGE_2_BODY *from, PA_SAM_CHALLENGE_2_BODY *to)
{
    return _asn1_copy_top(asn1_PA_SAM_CHALLENGE_2_BODY, from, to);
}


char * ASN1CALL
print_PA_SAM_CHALLENGE_2_BODY(const PA_SAM_CHALLENGE_2_BODY *data, int flags)
{
    return _asn1_print_top(asn1_PA_SAM_CHALLENGE_2_BODY, flags, data);
}

/* template_members: PA_SAM_CHALLENGE_2 exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_SAM_CHALLENGE_2 exp exp */
/* generate_template_type: PA_SAM_CHALLENGE_2_tag_sam_body_320 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag_sam_body_320[] = {
/* 0 */ { 0, sizeof(PA_SAM_CHALLENGE_2_BODY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_PA_SAM_CHALLENGE_2_BODY }
};
/* template_members: PA_SAM_CHALLENGE_2 exp exp */
/* template_members: PA_SAM_CHALLENGE_2 exp exp */
/* generate_template_type: PA_SAM_CHALLENGE_2_sam_cksum_16 */
/* generate_template_type: PA_SAM_CHALLENGE_2_tag_sam_cksum_322 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag_sam_cksum_322[] = {
/* 0 */ { 0, sizeof(struct PA_SAM_CHALLENGE_2_sam_cksum), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_Authenticator_tag_cksum_112 }
};
/* generate_template_type: PA_SAM_CHALLENGE_2_tag_sam_cksum_321 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag_sam_cksum_321[] = {
/* 0 */ { 0, sizeof(struct PA_SAM_CHALLENGE_2_sam_cksum), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_SAM_CHALLENGE_2_tag_sam_cksum_322 }
};
/* generate_template_type: PA_SAM_CHALLENGE_2_tag__319 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2_tag__319[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_SAM_CHALLENGE_2), ((void *)(uintptr_t)6) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_SAM_CHALLENGE_2, sam_body), asn1_PA_SAM_CHALLENGE_2_tag_sam_body_320 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_SAM_CHALLENGE_2, sam_cksum), asn1_PA_SAM_CHALLENGE_2_tag_sam_cksum_321 },
/* 3 */ { A1_OP_NAME, 0, "PA_SAM_CHALLENGE_2" },
/* 4 */ { A1_OP_NAME, 0, "sam-body" },
/* 5 */ { A1_OP_NAME, 0, "sam-cksum" },
/* 6 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: PA_SAM_CHALLENGE_2 */
const struct asn1_template asn1_PA_SAM_CHALLENGE_2[] = {
/* 0 */ { 0, sizeof(PA_SAM_CHALLENGE_2), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_SAM_CHALLENGE_2_tag__319 }
};

int ASN1CALL
decode_PA_SAM_CHALLENGE_2(const unsigned char *p, size_t len, PA_SAM_CHALLENGE_2 *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_SAM_CHALLENGE_2, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_SAM_CHALLENGE_2(unsigned char *p, size_t len, const PA_SAM_CHALLENGE_2 *data, size_t *size)
{
    return _asn1_encode(asn1_PA_SAM_CHALLENGE_2, p, len, data, size);
}


size_t ASN1CALL
length_PA_SAM_CHALLENGE_2(const PA_SAM_CHALLENGE_2 *data)
{
    return _asn1_length(asn1_PA_SAM_CHALLENGE_2, data);
}


void ASN1CALL
free_PA_SAM_CHALLENGE_2(PA_SAM_CHALLENGE_2 *data)
{
    _asn1_free_top(asn1_PA_SAM_CHALLENGE_2, data);
}


int ASN1CALL
copy_PA_SAM_CHALLENGE_2(const PA_SAM_CHALLENGE_2 *from, PA_SAM_CHALLENGE_2 *to)
{
    return _asn1_copy_top(asn1_PA_SAM_CHALLENGE_2, from, to);
}


char * ASN1CALL
print_PA_SAM_CHALLENGE_2(const PA_SAM_CHALLENGE_2 *data, int flags)
{
    return _asn1_print_top(asn1_PA_SAM_CHALLENGE_2, flags, data);
}

/* template_members: PA_SAM_RESPONSE_2 exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_SAM_RESPONSE_2 exp exp */
/* generate_template_type: PA_SAM_RESPONSE_2_tag_sam_type_324 */
/* template_members: PA_SAM_RESPONSE_2 exp exp */
/* generate_template_type: PA_SAM_RESPONSE_2_tag_sam_flags_325 */
/* template_members: PA_SAM_RESPONSE_2 exp exp */
/* template_members: heim_general_string exp exp */
/* generate_template_type: heim_general_string_tag_sam_track_id_327 */
/* generate_template_type: PA_SAM_RESPONSE_2_tag_sam_track_id_326 */
/* template_members: PA_SAM_RESPONSE_2 exp exp */
/* generate_template_type: PA_SAM_RESPONSE_2_tag_sam_enc_nonce_or_sad_328 */
/* template_members: PA_SAM_RESPONSE_2 exp exp */
/* generate_template_type: PA_SAM_RESPONSE_2_tag_sam_nonce_329 */
/* generate_template_type: PA_SAM_RESPONSE_2_tag__323 */
const struct asn1_template asn1_PA_SAM_RESPONSE_2_tag__323[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_SAM_RESPONSE_2), ((void *)(uintptr_t)12) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_SAM_RESPONSE_2, sam_type), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_SAM_RESPONSE_2, sam_flags), asn1_PA_SAM_CHALLENGE_2_BODY_tag_sam_flags_305 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PA_SAM_RESPONSE_2, sam_track_id), asn1_PrincipalName_name_string_0 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct PA_SAM_RESPONSE_2, sam_enc_nonce_or_sad), asn1_Ticket_tag_enc_part_52 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct PA_SAM_RESPONSE_2, sam_nonce), asn1_HostAddress_tag_addr_type_16 },
/* 6 */ { A1_OP_NAME, 0, "PA_SAM_RESPONSE_2" },
/* 7 */ { A1_OP_NAME, 0, "sam-type" },
/* 8 */ { A1_OP_NAME, 0, "sam-flags" },
/* 9 */ { A1_OP_NAME, 0, "sam-track-id" },
/* 10 */ { A1_OP_NAME, 0, "sam-enc-nonce-or-sad" },
/* 11 */ { A1_OP_NAME, 0, "sam-nonce" },
/* 12 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: PA_SAM_RESPONSE_2 */
const struct asn1_template asn1_PA_SAM_RESPONSE_2[] = {
/* 0 */ { 0, sizeof(PA_SAM_RESPONSE_2), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_SAM_RESPONSE_2_tag__323 }
};

int ASN1CALL
decode_PA_SAM_RESPONSE_2(const unsigned char *p, size_t len, PA_SAM_RESPONSE_2 *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_SAM_RESPONSE_2, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_SAM_RESPONSE_2(unsigned char *p, size_t len, const PA_SAM_RESPONSE_2 *data, size_t *size)
{
    return _asn1_encode(asn1_PA_SAM_RESPONSE_2, p, len, data, size);
}


size_t ASN1CALL
length_PA_SAM_RESPONSE_2(const PA_SAM_RESPONSE_2 *data)
{
    return _asn1_length(asn1_PA_SAM_RESPONSE_2, data);
}


void ASN1CALL
free_PA_SAM_RESPONSE_2(PA_SAM_RESPONSE_2 *data)
{
    _asn1_free_top(asn1_PA_SAM_RESPONSE_2, data);
}


int ASN1CALL
copy_PA_SAM_RESPONSE_2(const PA_SAM_RESPONSE_2 *from, PA_SAM_RESPONSE_2 *to)
{
    return _asn1_copy_top(asn1_PA_SAM_RESPONSE_2, from, to);
}


char * ASN1CALL
print_PA_SAM_RESPONSE_2(const PA_SAM_RESPONSE_2 *data, int flags)
{
    return _asn1_print_top(asn1_PA_SAM_RESPONSE_2, flags, data);
}

/* template_members: PA_ENC_SAM_RESPONSE_ENC exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_ENC_SAM_RESPONSE_ENC exp exp */
/* generate_template_type: PA_ENC_SAM_RESPONSE_ENC_tag_sam_nonce_331 */
/* template_members: PA_ENC_SAM_RESPONSE_ENC exp exp */
/* template_members: heim_general_string exp exp */
/* generate_template_type: heim_general_string_tag_sam_sad_333 */
/* generate_template_type: PA_ENC_SAM_RESPONSE_ENC_tag_sam_sad_332 */
/* generate_template_type: PA_ENC_SAM_RESPONSE_ENC_tag__330 */
const struct asn1_template asn1_PA_ENC_SAM_RESPONSE_ENC_tag__330[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_ENC_SAM_RESPONSE_ENC), ((void *)(uintptr_t)6) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_ENC_SAM_RESPONSE_ENC, sam_nonce), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_ENC_SAM_RESPONSE_ENC, sam_sad), asn1_PrincipalName_name_string_0 },
/* 3 */ { A1_OP_NAME, 0, "PA_ENC_SAM_RESPONSE_ENC" },
/* 4 */ { A1_OP_NAME, 0, "sam-nonce" },
/* 5 */ { A1_OP_NAME, 0, "sam-sad" },
/* 6 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: PA_ENC_SAM_RESPONSE_ENC */
const struct asn1_template asn1_PA_ENC_SAM_RESPONSE_ENC[] = {
/* 0 */ { 0, sizeof(PA_ENC_SAM_RESPONSE_ENC), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_ENC_SAM_RESPONSE_ENC_tag__330 }
};

int ASN1CALL
decode_PA_ENC_SAM_RESPONSE_ENC(const unsigned char *p, size_t len, PA_ENC_SAM_RESPONSE_ENC *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_ENC_SAM_RESPONSE_ENC, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_ENC_SAM_RESPONSE_ENC(unsigned char *p, size_t len, const PA_ENC_SAM_RESPONSE_ENC *data, size_t *size)
{
    return _asn1_encode(asn1_PA_ENC_SAM_RESPONSE_ENC, p, len, data, size);
}


size_t ASN1CALL
length_PA_ENC_SAM_RESPONSE_ENC(const PA_ENC_SAM_RESPONSE_ENC *data)
{
    return _asn1_length(asn1_PA_ENC_SAM_RESPONSE_ENC, data);
}


void ASN1CALL
free_PA_ENC_SAM_RESPONSE_ENC(PA_ENC_SAM_RESPONSE_ENC *data)
{
    _asn1_free_top(asn1_PA_ENC_SAM_RESPONSE_ENC, data);
}


int ASN1CALL
copy_PA_ENC_SAM_RESPONSE_ENC(const PA_ENC_SAM_RESPONSE_ENC *from, PA_ENC_SAM_RESPONSE_ENC *to)
{
    return _asn1_copy_top(asn1_PA_ENC_SAM_RESPONSE_ENC, from, to);
}


char * ASN1CALL
print_PA_ENC_SAM_RESPONSE_ENC(const PA_ENC_SAM_RESPONSE_ENC *data, int flags)
{
    return _asn1_print_top(asn1_PA_ENC_SAM_RESPONSE_ENC, flags, data);
}

/* template_members: PA_S4U2Self exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_S4U2Self exp exp */
/* generate_template_type: PA_S4U2Self_tag_name_335 */
/* template_members: PA_S4U2Self exp exp */
/* generate_template_type: PA_S4U2Self_tag_realm_336 */
/* template_members: PA_S4U2Self exp exp */
/* generate_template_type: PA_S4U2Self_tag_cksum_337 */
/* template_members: PA_S4U2Self exp exp */
/* template_members: heim_general_string exp exp */
/* generate_template_type: heim_general_string_tag_auth_339 */
/* generate_template_type: PA_S4U2Self_tag_auth_338 */
/* generate_template_type: PA_S4U2Self_tag__334 */
const struct asn1_template asn1_PA_S4U2Self_tag__334[] = {
/* 0 */ { 0, sizeof(struct PA_S4U2Self), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_S4U2Self, name), asn1_Ticket_tag_sname_51 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_S4U2Self, realm), asn1_Ticket_tag_realm_50 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct PA_S4U2Self, cksum), asn1_Authenticator_tag_cksum_112 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct PA_S4U2Self, auth), asn1_PrincipalName_name_string_0 },
/* 5 */ { A1_OP_NAME, 0, "PA_S4U2Self" },
/* 6 */ { A1_OP_NAME, 0, "name" },
/* 7 */ { A1_OP_NAME, 0, "realm" },
/* 8 */ { A1_OP_NAME, 0, "cksum" },
/* 9 */ { A1_OP_NAME, 0, "auth" }
};
/* generate_template_type: PA_S4U2Self */
const struct asn1_template asn1_PA_S4U2Self[] = {
/* 0 */ { 0, sizeof(PA_S4U2Self), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_S4U2Self_tag__334 }
};

int ASN1CALL
decode_PA_S4U2Self(const unsigned char *p, size_t len, PA_S4U2Self *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_S4U2Self, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_S4U2Self(unsigned char *p, size_t len, const PA_S4U2Self *data, size_t *size)
{
    return _asn1_encode(asn1_PA_S4U2Self, p, len, data, size);
}


size_t ASN1CALL
length_PA_S4U2Self(const PA_S4U2Self *data)
{
    return _asn1_length(asn1_PA_S4U2Self, data);
}


void ASN1CALL
free_PA_S4U2Self(PA_S4U2Self *data)
{
    _asn1_free_top(asn1_PA_S4U2Self, data);
}


int ASN1CALL
copy_PA_S4U2Self(const PA_S4U2Self *from, PA_S4U2Self *to)
{
    return _asn1_copy_top(asn1_PA_S4U2Self, from, to);
}


char * ASN1CALL
print_PA_S4U2Self(const PA_S4U2Self *data, int flags)
{
    return _asn1_print_top(asn1_PA_S4U2Self, flags, data);
}

/* template_members: S4UUserID exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: S4UUserID exp exp */
/* generate_template_type: S4UUserID_tag_nonce_341 */
/* template_members: S4UUserID exp exp */
/* generate_template_type: S4UUserID_tag_cname_342 */
/* template_members: S4UUserID exp exp */
/* generate_template_type: S4UUserID_tag_crealm_343 */
/* template_members: S4UUserID exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_subject_certificate_345 */
/* generate_template_type: S4UUserID_tag_subject_certificate_344 */
/* template_members: S4UUserID exp exp */
/* template_members: S4UUserID exp exp */
/* generate_template_type: S4UUserID_tag_options_347 */
const struct asn1_template asn1_S4UUserID_tag_options_347[] = {
/* 0 */ { 0, sizeof(S4UUserID), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_BIT_STRING), 0, NULL }
};
/* generate_template_type: S4UUserID_tag_options_346 */
const struct asn1_template asn1_S4UUserID_tag_options_346[] = {
/* 0 */ { 0, sizeof(S4UUserID), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_S4UUserID_tag_options_347 }
};
/* generate_template_type: S4UUserID_tag__340 */
const struct asn1_template asn1_S4UUserID_tag__340[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct S4UUserID), ((void *)(uintptr_t)12) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct S4UUserID, nonce), asn1_Authenticator_tag_seq_number_116 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct S4UUserID, cname), asn1_Ticket_tag_sname_51 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct S4UUserID, crealm), asn1_Ticket_tag_realm_50 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct S4UUserID, subject_certificate), asn1_HostAddress_tag_address_17 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct S4UUserID, options), asn1_S4UUserID_tag_options_346 },
/* 6 */ { A1_OP_NAME, 0, "S4UUserID" },
/* 7 */ { A1_OP_NAME, 0, "nonce" },
/* 8 */ { A1_OP_NAME, 0, "cname" },
/* 9 */ { A1_OP_NAME, 0, "crealm" },
/* 10 */ { A1_OP_NAME, 0, "subject-certificate" },
/* 11 */ { A1_OP_NAME, 0, "options" },
/* 12 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: S4UUserID */
const struct asn1_template asn1_S4UUserID[] = {
/* 0 */ { 0, sizeof(S4UUserID), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_S4UUserID_tag__340 }
};

int ASN1CALL
decode_S4UUserID(const unsigned char *p, size_t len, S4UUserID *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_S4UUserID, 0|0, p, len, data, size);
}


int ASN1CALL
encode_S4UUserID(unsigned char *p, size_t len, const S4UUserID *data, size_t *size)
{
    return _asn1_encode(asn1_S4UUserID, p, len, data, size);
}


size_t ASN1CALL
length_S4UUserID(const S4UUserID *data)
{
    return _asn1_length(asn1_S4UUserID, data);
}


void ASN1CALL
free_S4UUserID(S4UUserID *data)
{
    _asn1_free_top(asn1_S4UUserID, data);
}


int ASN1CALL
copy_S4UUserID(const S4UUserID *from, S4UUserID *to)
{
    return _asn1_copy_top(asn1_S4UUserID, from, to);
}


char * ASN1CALL
print_S4UUserID(const S4UUserID *data, int flags)
{
    return _asn1_print_top(asn1_S4UUserID, flags, data);
}

/* template_members: PA_S4U_X509_USER exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_S4U_X509_USER exp exp */
/* generate_template_type: PA_S4U_X509_USER_tag_user_id_349 */
const struct asn1_template asn1_PA_S4U_X509_USER_tag_user_id_349[] = {
/* 0 */ { 0, sizeof(S4UUserID), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_S4UUserID }
};
/* template_members: PA_S4U_X509_USER exp exp */
/* generate_template_type: PA_S4U_X509_USER_tag_checksum_350 */
/* generate_template_type: PA_S4U_X509_USER_tag__348 */
const struct asn1_template asn1_PA_S4U_X509_USER_tag__348[] = {
/* 0 */ { 0, sizeof(struct PA_S4U_X509_USER), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_S4U_X509_USER, user_id), asn1_PA_S4U_X509_USER_tag_user_id_349 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct PA_S4U_X509_USER, checksum), asn1_Authenticator_tag_cksum_112 },
/* 3 */ { A1_OP_NAME, 0, "PA_S4U_X509_USER" },
/* 4 */ { A1_OP_NAME, 0, "user-id" },
/* 5 */ { A1_OP_NAME, 0, "checksum" }
};
/* generate_template_type: PA_S4U_X509_USER */
const struct asn1_template asn1_PA_S4U_X509_USER[] = {
/* 0 */ { 0, sizeof(PA_S4U_X509_USER), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_S4U_X509_USER_tag__348 }
};

int ASN1CALL
decode_PA_S4U_X509_USER(const unsigned char *p, size_t len, PA_S4U_X509_USER *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_S4U_X509_USER, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_S4U_X509_USER(unsigned char *p, size_t len, const PA_S4U_X509_USER *data, size_t *size)
{
    return _asn1_encode(asn1_PA_S4U_X509_USER, p, len, data, size);
}


size_t ASN1CALL
length_PA_S4U_X509_USER(const PA_S4U_X509_USER *data)
{
    return _asn1_length(asn1_PA_S4U_X509_USER, data);
}


void ASN1CALL
free_PA_S4U_X509_USER(PA_S4U_X509_USER *data)
{
    _asn1_free_top(asn1_PA_S4U_X509_USER, data);
}


int ASN1CALL
copy_PA_S4U_X509_USER(const PA_S4U_X509_USER *from, PA_S4U_X509_USER *to)
{
    return _asn1_copy_top(asn1_PA_S4U_X509_USER, from, to);
}


char * ASN1CALL
print_PA_S4U_X509_USER(const PA_S4U_X509_USER *data, int flags)
{
    return _asn1_print_top(asn1_PA_S4U_X509_USER, flags, data);
}

/* template_members: AD_LoginAlias exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: AD_LoginAlias exp exp */
/* generate_template_type: AD_LoginAlias_tag_login_alias_352 */
/* template_members: AD_LoginAlias exp exp */
/* generate_template_type: AD_LoginAlias_tag_checksum_353 */
/* generate_template_type: AD_LoginAlias_tag__351 */
const struct asn1_template asn1_AD_LoginAlias_tag__351[] = {
/* 0 */ { 0, sizeof(struct AD_LoginAlias), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct AD_LoginAlias, login_alias), asn1_Ticket_tag_sname_51 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct AD_LoginAlias, checksum), asn1_Authenticator_tag_cksum_112 },
/* 3 */ { A1_OP_NAME, 0, "AD_LoginAlias" },
/* 4 */ { A1_OP_NAME, 0, "login-alias" },
/* 5 */ { A1_OP_NAME, 0, "checksum" }
};
/* generate_template_type: AD_LoginAlias */
const struct asn1_template asn1_AD_LoginAlias[] = {
/* 0 */ { 0, sizeof(AD_LoginAlias), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_AD_LoginAlias_tag__351 }
};

int ASN1CALL
decode_AD_LoginAlias(const unsigned char *p, size_t len, AD_LoginAlias *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_AD_LoginAlias, 0|0, p, len, data, size);
}


int ASN1CALL
encode_AD_LoginAlias(unsigned char *p, size_t len, const AD_LoginAlias *data, size_t *size)
{
    return _asn1_encode(asn1_AD_LoginAlias, p, len, data, size);
}


size_t ASN1CALL
length_AD_LoginAlias(const AD_LoginAlias *data)
{
    return _asn1_length(asn1_AD_LoginAlias, data);
}


void ASN1CALL
free_AD_LoginAlias(AD_LoginAlias *data)
{
    _asn1_free_top(asn1_AD_LoginAlias, data);
}


int ASN1CALL
copy_AD_LoginAlias(const AD_LoginAlias *from, AD_LoginAlias *to)
{
    return _asn1_copy_top(asn1_AD_LoginAlias, from, to);
}


char * ASN1CALL
print_AD_LoginAlias(const AD_LoginAlias *data, int flags)
{
    return _asn1_print_top(asn1_AD_LoginAlias, flags, data);
}

/* template_members: PA_SvrReferralData exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_SvrReferralData exp exp */
/* generate_template_type: PA_SvrReferralData_tag_referred_name_355 */
/* template_members: PA_SvrReferralData exp exp */
/* generate_template_type: PA_SvrReferralData_tag_referred_realm_356 */
/* generate_template_type: PA_SvrReferralData_tag__354 */
const struct asn1_template asn1_PA_SvrReferralData_tag__354[] = {
/* 0 */ { 0, sizeof(struct PA_SvrReferralData), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_SvrReferralData, referred_name), asn1_Ticket_tag_sname_51 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct PA_SvrReferralData, referred_realm), asn1_Ticket_tag_realm_50 },
/* 3 */ { A1_OP_NAME, 0, "PA_SvrReferralData" },
/* 4 */ { A1_OP_NAME, 0, "referred-name" },
/* 5 */ { A1_OP_NAME, 0, "referred-realm" }
};
/* generate_template_type: PA_SvrReferralData */
const struct asn1_template asn1_PA_SvrReferralData[] = {
/* 0 */ { 0, sizeof(PA_SvrReferralData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_SvrReferralData_tag__354 }
};

int ASN1CALL
decode_PA_SvrReferralData(const unsigned char *p, size_t len, PA_SvrReferralData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_SvrReferralData, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_SvrReferralData(unsigned char *p, size_t len, const PA_SvrReferralData *data, size_t *size)
{
    return _asn1_encode(asn1_PA_SvrReferralData, p, len, data, size);
}


size_t ASN1CALL
length_PA_SvrReferralData(const PA_SvrReferralData *data)
{
    return _asn1_length(asn1_PA_SvrReferralData, data);
}


void ASN1CALL
free_PA_SvrReferralData(PA_SvrReferralData *data)
{
    _asn1_free_top(asn1_PA_SvrReferralData, data);
}


int ASN1CALL
copy_PA_SvrReferralData(const PA_SvrReferralData *from, PA_SvrReferralData *to)
{
    return _asn1_copy_top(asn1_PA_SvrReferralData, from, to);
}


char * ASN1CALL
print_PA_SvrReferralData(const PA_SvrReferralData *data, int flags)
{
    return _asn1_print_top(asn1_PA_SvrReferralData, flags, data);
}

/* generate_template_type: PA_SERVER_REFERRAL_DATA */
const struct asn1_template asn1_PA_SERVER_REFERRAL_DATA[] = {
/* 0 */ { 0, sizeof(PA_SERVER_REFERRAL_DATA), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_EncryptedData }
};

int ASN1CALL
decode_PA_SERVER_REFERRAL_DATA(const unsigned char *p, size_t len, PA_SERVER_REFERRAL_DATA *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_SERVER_REFERRAL_DATA, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_SERVER_REFERRAL_DATA(unsigned char *p, size_t len, const PA_SERVER_REFERRAL_DATA *data, size_t *size)
{
    return _asn1_encode(asn1_PA_SERVER_REFERRAL_DATA, p, len, data, size);
}


size_t ASN1CALL
length_PA_SERVER_REFERRAL_DATA(const PA_SERVER_REFERRAL_DATA *data)
{
    return _asn1_length(asn1_PA_SERVER_REFERRAL_DATA, data);
}


void ASN1CALL
free_PA_SERVER_REFERRAL_DATA(PA_SERVER_REFERRAL_DATA *data)
{
    _asn1_free_top(asn1_PA_SERVER_REFERRAL_DATA, data);
}


int ASN1CALL
copy_PA_SERVER_REFERRAL_DATA(const PA_SERVER_REFERRAL_DATA *from, PA_SERVER_REFERRAL_DATA *to)
{
    return _asn1_copy_top(asn1_PA_SERVER_REFERRAL_DATA, from, to);
}


char * ASN1CALL
print_PA_SERVER_REFERRAL_DATA(const PA_SERVER_REFERRAL_DATA *data, int flags)
{
    return _asn1_print_top(asn1_PA_SERVER_REFERRAL_DATA, flags, data);
}

/* template_members: PA_ServerReferralData exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: PA_ServerReferralData exp exp */
/* generate_template_type: PA_ServerReferralData_tag_referred_realm_358 */
/* template_members: PA_ServerReferralData exp exp */
/* generate_template_type: PA_ServerReferralData_tag_true_principal_name_359 */
/* template_members: PA_ServerReferralData exp exp */
/* generate_template_type: PA_ServerReferralData_tag_requested_principal_name_360 */
/* template_members: PA_ServerReferralData exp exp */
/* generate_template_type: PA_ServerReferralData_tag_referral_valid_until_361 */
/* generate_template_type: PA_ServerReferralData_tag__357 */
const struct asn1_template asn1_PA_ServerReferralData_tag__357[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct PA_ServerReferralData), ((void *)(uintptr_t)10) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct PA_ServerReferralData, referred_realm), asn1_Ticket_tag_realm_50 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct PA_ServerReferralData, true_principal_name), asn1_Ticket_tag_sname_51 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct PA_ServerReferralData, requested_principal_name), asn1_Ticket_tag_sname_51 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct PA_ServerReferralData, referral_valid_until), asn1_LastReq_val_tag_lr_value_33 },
/* 5 */ { A1_OP_NAME, 0, "PA_ServerReferralData" },
/* 6 */ { A1_OP_NAME, 0, "referred-realm" },
/* 7 */ { A1_OP_NAME, 0, "true-principal-name" },
/* 8 */ { A1_OP_NAME, 0, "requested-principal-name" },
/* 9 */ { A1_OP_NAME, 0, "referral-valid-until" },
/* 10 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: PA_ServerReferralData */
const struct asn1_template asn1_PA_ServerReferralData[] = {
/* 0 */ { 0, sizeof(PA_ServerReferralData), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_PA_ServerReferralData_tag__357 }
};

int ASN1CALL
decode_PA_ServerReferralData(const unsigned char *p, size_t len, PA_ServerReferralData *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_ServerReferralData, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_ServerReferralData(unsigned char *p, size_t len, const PA_ServerReferralData *data, size_t *size)
{
    return _asn1_encode(asn1_PA_ServerReferralData, p, len, data, size);
}


size_t ASN1CALL
length_PA_ServerReferralData(const PA_ServerReferralData *data)
{
    return _asn1_length(asn1_PA_ServerReferralData, data);
}


void ASN1CALL
free_PA_ServerReferralData(PA_ServerReferralData *data)
{
    _asn1_free_top(asn1_PA_ServerReferralData, data);
}


int ASN1CALL
copy_PA_ServerReferralData(const PA_ServerReferralData *from, PA_ServerReferralData *to)
{
    return _asn1_copy_top(asn1_PA_ServerReferralData, from, to);
}


char * ASN1CALL
print_PA_ServerReferralData(const PA_ServerReferralData *data, int flags)
{
    return _asn1_print_top(asn1_PA_ServerReferralData, flags, data);
}

/* template_members: FastOptions exp exp */
static const struct asn1_template asn1_FastOptions_bmember__5[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(FastOptions), ((void *)(uintptr_t)17) },
/* 1 */ { 0, 0, "reserved" },
/* 2 */ { 0, 1, "hide_client_names" },
/* 3 */ { 0, 2, "critical2" },
/* 4 */ { 0, 3, "critical3" },
/* 5 */ { 0, 4, "critical4" },
/* 6 */ { 0, 5, "critical5" },
/* 7 */ { 0, 6, "critical6" },
/* 8 */ { 0, 7, "critical7" },
/* 9 */ { 0, 8, "critical8" },
/* 10 */ { 0, 9, "critical9" },
/* 11 */ { 0, 10, "critical10" },
/* 12 */ { 0, 11, "critical11" },
/* 13 */ { 0, 12, "critical12" },
/* 14 */ { 0, 13, "critical13" },
/* 15 */ { 0, 14, "critical14" },
/* 16 */ { 0, 15, "critical15" },
/* 17 */ { 0, 16, "kdc_follow_referrals" }
};
/* generate_template_type: FastOptions_tag__362 */
const struct asn1_template asn1_FastOptions_tag__362[] = {
/* 0 */ { 0, sizeof(FastOptions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_FastOptions_bmember__5 }
};
/* generate_template_type: FastOptions */
const struct asn1_template asn1_FastOptions[] = {
/* 0 */ { 0, sizeof(FastOptions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_FastOptions_tag__362 }
};

int ASN1CALL
decode_FastOptions(const unsigned char *p, size_t len, FastOptions *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_FastOptions, 0|0, p, len, data, size);
}


int ASN1CALL
encode_FastOptions(unsigned char *p, size_t len, const FastOptions *data, size_t *size)
{
    return _asn1_encode(asn1_FastOptions, p, len, data, size);
}


size_t ASN1CALL
length_FastOptions(const FastOptions *data)
{
    return _asn1_length(asn1_FastOptions, data);
}


void ASN1CALL
free_FastOptions(FastOptions *data)
{
    _asn1_free_top(asn1_FastOptions, data);
}


int ASN1CALL
copy_FastOptions(const FastOptions *from, FastOptions *to)
{
    return _asn1_copy_top(asn1_FastOptions, from, to);
}


char * ASN1CALL
print_FastOptions(const FastOptions *data, int flags)
{
    return _asn1_print_top(asn1_FastOptions, flags, data);
}

uint64_t FastOptions2int(FastOptions f)
{
uint64_t r = 0;
if(f.reserved) r |= (1ULL << 0);
if(f.hide_client_names) r |= (1ULL << 1);
if(f.critical2) r |= (1ULL << 2);
if(f.critical3) r |= (1ULL << 3);
if(f.critical4) r |= (1ULL << 4);
if(f.critical5) r |= (1ULL << 5);
if(f.critical6) r |= (1ULL << 6);
if(f.critical7) r |= (1ULL << 7);
if(f.critical8) r |= (1ULL << 8);
if(f.critical9) r |= (1ULL << 9);
if(f.critical10) r |= (1ULL << 10);
if(f.critical11) r |= (1ULL << 11);
if(f.critical12) r |= (1ULL << 12);
if(f.critical13) r |= (1ULL << 13);
if(f.critical14) r |= (1ULL << 14);
if(f.critical15) r |= (1ULL << 15);
if(f.kdc_follow_referrals) r |= (1ULL << 16);
return r;
}

FastOptions int2FastOptions(uint64_t n)
{
	FastOptions flags;

	memset(&flags, 0, sizeof(flags));

	flags.reserved = (n >> 0) & 1;
	flags.hide_client_names = (n >> 1) & 1;
	flags.critical2 = (n >> 2) & 1;
	flags.critical3 = (n >> 3) & 1;
	flags.critical4 = (n >> 4) & 1;
	flags.critical5 = (n >> 5) & 1;
	flags.critical6 = (n >> 6) & 1;
	flags.critical7 = (n >> 7) & 1;
	flags.critical8 = (n >> 8) & 1;
	flags.critical9 = (n >> 9) & 1;
	flags.critical10 = (n >> 10) & 1;
	flags.critical11 = (n >> 11) & 1;
	flags.critical12 = (n >> 12) & 1;
	flags.critical13 = (n >> 13) & 1;
	flags.critical14 = (n >> 14) & 1;
	flags.critical15 = (n >> 15) & 1;
	flags.kdc_follow_referrals = (n >> 16) & 1;
	return flags;
}

static struct units FastOptions_units[] = {
	{"kdc-follow-referrals",	1ULL << 16},
	{"critical15",	1ULL << 15},
	{"critical14",	1ULL << 14},
	{"critical13",	1ULL << 13},
	{"critical12",	1ULL << 12},
	{"critical11",	1ULL << 11},
	{"critical10",	1ULL << 10},
	{"critical9",	1ULL << 9},
	{"critical8",	1ULL << 8},
	{"critical7",	1ULL << 7},
	{"critical6",	1ULL << 6},
	{"critical5",	1ULL << 5},
	{"critical4",	1ULL << 4},
	{"critical3",	1ULL << 3},
	{"critical2",	1ULL << 2},
	{"hide-client-names",	1ULL << 1},
	{"reserved",	1ULL << 0},
	{NULL,	0}
};

const struct units * asn1_FastOptions_units(void){
return FastOptions_units;
}

/* template_members: KrbFastReq exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastReq exp exp */
/* generate_template_type: KrbFastReq_tag_fast_options_364 */
const struct asn1_template asn1_KrbFastReq_tag_fast_options_364[] = {
/* 0 */ { 0, sizeof(FastOptions), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_FastOptions }
};
/* template_members: KrbFastReq exp exp */
/* generate_template_type: KrbFastReq_tag_padata_365 */
/* template_members: KrbFastReq exp exp */
/* generate_template_type: KrbFastReq_tag_req_body_366 */
/* generate_template_type: KrbFastReq_tag__363 */
const struct asn1_template asn1_KrbFastReq_tag__363[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KrbFastReq), ((void *)(uintptr_t)8) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbFastReq, fast_options), asn1_KrbFastReq_tag_fast_options_364 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KrbFastReq, padata), asn1_EncKDCRepPart_tag_encrypted_pa_data_83 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KrbFastReq, req_body), asn1_KDC_REQ_tag_req_body_159 },
/* 4 */ { A1_OP_NAME, 0, "KrbFastReq" },
/* 5 */ { A1_OP_NAME, 0, "fast-options" },
/* 6 */ { A1_OP_NAME, 0, "padata" },
/* 7 */ { A1_OP_NAME, 0, "req-body" },
/* 8 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: KrbFastReq */
const struct asn1_template asn1_KrbFastReq[] = {
/* 0 */ { 0, sizeof(KrbFastReq), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastReq_tag__363 }
};

int ASN1CALL
decode_KrbFastReq(const unsigned char *p, size_t len, KrbFastReq *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KrbFastReq, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KrbFastReq(unsigned char *p, size_t len, const KrbFastReq *data, size_t *size)
{
    return _asn1_encode(asn1_KrbFastReq, p, len, data, size);
}


size_t ASN1CALL
length_KrbFastReq(const KrbFastReq *data)
{
    return _asn1_length(asn1_KrbFastReq, data);
}


void ASN1CALL
free_KrbFastReq(KrbFastReq *data)
{
    _asn1_free_top(asn1_KrbFastReq, data);
}


int ASN1CALL
copy_KrbFastReq(const KrbFastReq *from, KrbFastReq *to)
{
    return _asn1_copy_top(asn1_KrbFastReq, from, to);
}


char * ASN1CALL
print_KrbFastReq(const KrbFastReq *data, int flags)
{
    return _asn1_print_top(asn1_KrbFastReq, flags, data);
}

/* template_members: KrbFastArmor exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastArmor exp exp */
/* generate_template_type: KrbFastArmor_tag_armor_type_368 */
/* template_members: KrbFastArmor exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_armor_value_370 */
/* generate_template_type: KrbFastArmor_tag_armor_value_369 */
/* generate_template_type: KrbFastArmor_tag__367 */
const struct asn1_template asn1_KrbFastArmor_tag__367[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KrbFastArmor), ((void *)(uintptr_t)6) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbFastArmor, armor_type), asn1_HostAddress_tag_addr_type_16 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KrbFastArmor, armor_value), asn1_HostAddress_tag_address_17 },
/* 3 */ { A1_OP_NAME, 0, "KrbFastArmor" },
/* 4 */ { A1_OP_NAME, 0, "armor-type" },
/* 5 */ { A1_OP_NAME, 0, "armor-value" },
/* 6 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: KrbFastArmor */
const struct asn1_template asn1_KrbFastArmor[] = {
/* 0 */ { 0, sizeof(KrbFastArmor), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastArmor_tag__367 }
};

int ASN1CALL
decode_KrbFastArmor(const unsigned char *p, size_t len, KrbFastArmor *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KrbFastArmor, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KrbFastArmor(unsigned char *p, size_t len, const KrbFastArmor *data, size_t *size)
{
    return _asn1_encode(asn1_KrbFastArmor, p, len, data, size);
}


size_t ASN1CALL
length_KrbFastArmor(const KrbFastArmor *data)
{
    return _asn1_length(asn1_KrbFastArmor, data);
}


void ASN1CALL
free_KrbFastArmor(KrbFastArmor *data)
{
    _asn1_free_top(asn1_KrbFastArmor, data);
}


int ASN1CALL
copy_KrbFastArmor(const KrbFastArmor *from, KrbFastArmor *to)
{
    return _asn1_copy_top(asn1_KrbFastArmor, from, to);
}


char * ASN1CALL
print_KrbFastArmor(const KrbFastArmor *data, int flags)
{
    return _asn1_print_top(asn1_KrbFastArmor, flags, data);
}

/* template_members: KrbFastArmoredReq exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastArmoredReq exp exp */
/* generate_template_type: KrbFastArmoredReq_tag_armor_372 */
const struct asn1_template asn1_KrbFastArmoredReq_tag_armor_372[] = {
/* 0 */ { 0, sizeof(KrbFastArmor), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KrbFastArmor }
};
/* template_members: KrbFastArmoredReq exp exp */
/* generate_template_type: KrbFastArmoredReq_tag_req_checksum_373 */
/* template_members: KrbFastArmoredReq exp exp */
/* generate_template_type: KrbFastArmoredReq_tag_enc_fast_req_374 */
/* generate_template_type: KrbFastArmoredReq_tag__371 */
const struct asn1_template asn1_KrbFastArmoredReq_tag__371[] = {
/* 0 */ { 0, sizeof(struct KrbFastArmoredReq), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct KrbFastArmoredReq, armor), asn1_KrbFastArmoredReq_tag_armor_372 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KrbFastArmoredReq, req_checksum), asn1_Authenticator_tag_cksum_112 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KrbFastArmoredReq, enc_fast_req), asn1_Ticket_tag_enc_part_52 },
/* 4 */ { A1_OP_NAME, 0, "KrbFastArmoredReq" },
/* 5 */ { A1_OP_NAME, 0, "armor" },
/* 6 */ { A1_OP_NAME, 0, "req-checksum" },
/* 7 */ { A1_OP_NAME, 0, "enc-fast-req" }
};
/* generate_template_type: KrbFastArmoredReq */
const struct asn1_template asn1_KrbFastArmoredReq[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredReq), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastArmoredReq_tag__371 }
};

int ASN1CALL
decode_KrbFastArmoredReq(const unsigned char *p, size_t len, KrbFastArmoredReq *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KrbFastArmoredReq, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KrbFastArmoredReq(unsigned char *p, size_t len, const KrbFastArmoredReq *data, size_t *size)
{
    return _asn1_encode(asn1_KrbFastArmoredReq, p, len, data, size);
}


size_t ASN1CALL
length_KrbFastArmoredReq(const KrbFastArmoredReq *data)
{
    return _asn1_length(asn1_KrbFastArmoredReq, data);
}


void ASN1CALL
free_KrbFastArmoredReq(KrbFastArmoredReq *data)
{
    _asn1_free_top(asn1_KrbFastArmoredReq, data);
}


int ASN1CALL
copy_KrbFastArmoredReq(const KrbFastArmoredReq *from, KrbFastArmoredReq *to)
{
    return _asn1_copy_top(asn1_KrbFastArmoredReq, from, to);
}


char * ASN1CALL
print_KrbFastArmoredReq(const KrbFastArmoredReq *data, int flags)
{
    return _asn1_print_top(asn1_KrbFastArmoredReq, flags, data);
}

/* template_members: KrbFastArmoredReq exp exp */
/* generate_template_type: KrbFastArmoredReq_tag__375 */
const struct asn1_template asn1_KrbFastArmoredReq_tag__375[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredReq), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KrbFastArmoredReq }
};
/* generate_template_type: PA_FX_FAST_REQUEST_choice_armored_data */
const struct asn1_template asn1_PA_FX_FAST_REQUEST_choice_armored_data[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredReq), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_KrbFastArmoredReq_tag__375 }
};
static const struct asn1_template asn1_choice_PA_FX_FAST_REQUEST_1[] = {
/* 0 */ { offsetof(PA_FX_FAST_REQUEST, u.asn1_ellipsis), offsetof(PA_FX_FAST_REQUEST, element), ((void *)(uintptr_t)3) },
/* 1 */ { choice_PA_FX_FAST_REQUEST_armored_data, offsetof(PA_FX_FAST_REQUEST, u.armored_data), asn1_PA_FX_FAST_REQUEST_choice_armored_data },
/* 2 */ { 0, 0, "armored-data" },
/* 3 */ { 0, 0, "..." }
};
/* generate_template_type: PA_FX_FAST_REQUEST */
const struct asn1_template asn1_PA_FX_FAST_REQUEST[] = {
/* 0 */ { 0, sizeof(PA_FX_FAST_REQUEST), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_PA_FX_FAST_REQUEST_1 }
};

int ASN1CALL
decode_PA_FX_FAST_REQUEST(const unsigned char *p, size_t len, PA_FX_FAST_REQUEST *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_FX_FAST_REQUEST, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_FX_FAST_REQUEST(unsigned char *p, size_t len, const PA_FX_FAST_REQUEST *data, size_t *size)
{
    return _asn1_encode(asn1_PA_FX_FAST_REQUEST, p, len, data, size);
}


size_t ASN1CALL
length_PA_FX_FAST_REQUEST(const PA_FX_FAST_REQUEST *data)
{
    return _asn1_length(asn1_PA_FX_FAST_REQUEST, data);
}


void ASN1CALL
free_PA_FX_FAST_REQUEST(PA_FX_FAST_REQUEST *data)
{
    _asn1_free_top(asn1_PA_FX_FAST_REQUEST, data);
}


int ASN1CALL
copy_PA_FX_FAST_REQUEST(const PA_FX_FAST_REQUEST *from, PA_FX_FAST_REQUEST *to)
{
    return _asn1_copy_top(asn1_PA_FX_FAST_REQUEST, from, to);
}


char * ASN1CALL
print_PA_FX_FAST_REQUEST(const PA_FX_FAST_REQUEST *data, int flags)
{
    return _asn1_print_top(asn1_PA_FX_FAST_REQUEST, flags, data);
}

/* template_members: KrbFastFinished exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastFinished exp exp */
/* generate_template_type: KrbFastFinished_tag_timestamp_377 */
/* template_members: KrbFastFinished exp exp */
/* generate_template_type: KrbFastFinished_tag_usec_378 */
/* template_members: KrbFastFinished exp exp */
/* generate_template_type: KrbFastFinished_tag_crealm_379 */
/* template_members: KrbFastFinished exp exp */
/* generate_template_type: KrbFastFinished_tag_cname_380 */
/* template_members: KrbFastFinished exp exp */
/* generate_template_type: KrbFastFinished_tag_ticket_checksum_381 */
/* generate_template_type: KrbFastFinished_tag__376 */
const struct asn1_template asn1_KrbFastFinished_tag__376[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KrbFastFinished), ((void *)(uintptr_t)12) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbFastFinished, timestamp), asn1_LastReq_val_tag_lr_value_33 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KrbFastFinished, usec), asn1_HostAddress_tag_addr_type_16 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KrbFastFinished, crealm), asn1_Ticket_tag_realm_50 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KrbFastFinished, cname), asn1_Ticket_tag_sname_51 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct KrbFastFinished, ticket_checksum), asn1_Authenticator_tag_cksum_112 },
/* 6 */ { A1_OP_NAME, 0, "KrbFastFinished" },
/* 7 */ { A1_OP_NAME, 0, "timestamp" },
/* 8 */ { A1_OP_NAME, 0, "usec" },
/* 9 */ { A1_OP_NAME, 0, "crealm" },
/* 10 */ { A1_OP_NAME, 0, "cname" },
/* 11 */ { A1_OP_NAME, 0, "ticket-checksum" },
/* 12 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: KrbFastFinished */
const struct asn1_template asn1_KrbFastFinished[] = {
/* 0 */ { 0, sizeof(KrbFastFinished), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastFinished_tag__376 }
};

int ASN1CALL
decode_KrbFastFinished(const unsigned char *p, size_t len, KrbFastFinished *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KrbFastFinished, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KrbFastFinished(unsigned char *p, size_t len, const KrbFastFinished *data, size_t *size)
{
    return _asn1_encode(asn1_KrbFastFinished, p, len, data, size);
}


size_t ASN1CALL
length_KrbFastFinished(const KrbFastFinished *data)
{
    return _asn1_length(asn1_KrbFastFinished, data);
}


void ASN1CALL
free_KrbFastFinished(KrbFastFinished *data)
{
    _asn1_free_top(asn1_KrbFastFinished, data);
}


int ASN1CALL
copy_KrbFastFinished(const KrbFastFinished *from, KrbFastFinished *to)
{
    return _asn1_copy_top(asn1_KrbFastFinished, from, to);
}


char * ASN1CALL
print_KrbFastFinished(const KrbFastFinished *data, int flags)
{
    return _asn1_print_top(asn1_KrbFastFinished, flags, data);
}

/* template_members: KrbFastResponse exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastResponse exp exp */
/* generate_template_type: KrbFastResponse_tag_padata_383 */
/* template_members: KrbFastResponse exp exp */
/* generate_template_type: KrbFastResponse_tag_strengthen_key_384 */
/* template_members: KrbFastResponse exp exp */
/* generate_template_type: KrbFastResponse_tag_finished_385 */
const struct asn1_template asn1_KrbFastResponse_tag_finished_385[] = {
/* 0 */ { 0, sizeof(KrbFastFinished), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KrbFastFinished }
};
/* template_members: KrbFastResponse exp exp */
/* generate_template_type: KrbFastResponse_tag_nonce_386 */
/* generate_template_type: KrbFastResponse_tag__382 */
const struct asn1_template asn1_KrbFastResponse_tag__382[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KrbFastResponse), ((void *)(uintptr_t)10) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbFastResponse, padata), asn1_EncKDCRepPart_tag_encrypted_pa_data_83 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KrbFastResponse, strengthen_key), asn1_EncTicketPart_tag_key_56 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KrbFastResponse, finished), asn1_KrbFastResponse_tag_finished_385 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KrbFastResponse, nonce), asn1_Authenticator_tag_seq_number_116 },
/* 5 */ { A1_OP_NAME, 0, "KrbFastResponse" },
/* 6 */ { A1_OP_NAME, 0, "padata" },
/* 7 */ { A1_OP_NAME, 0, "strengthen-key" },
/* 8 */ { A1_OP_NAME, 0, "finished" },
/* 9 */ { A1_OP_NAME, 0, "nonce" },
/* 10 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: KrbFastResponse */
const struct asn1_template asn1_KrbFastResponse[] = {
/* 0 */ { 0, sizeof(KrbFastResponse), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastResponse_tag__382 }
};

int ASN1CALL
decode_KrbFastResponse(const unsigned char *p, size_t len, KrbFastResponse *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KrbFastResponse, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KrbFastResponse(unsigned char *p, size_t len, const KrbFastResponse *data, size_t *size)
{
    return _asn1_encode(asn1_KrbFastResponse, p, len, data, size);
}


size_t ASN1CALL
length_KrbFastResponse(const KrbFastResponse *data)
{
    return _asn1_length(asn1_KrbFastResponse, data);
}


void ASN1CALL
free_KrbFastResponse(KrbFastResponse *data)
{
    _asn1_free_top(asn1_KrbFastResponse, data);
}


int ASN1CALL
copy_KrbFastResponse(const KrbFastResponse *from, KrbFastResponse *to)
{
    return _asn1_copy_top(asn1_KrbFastResponse, from, to);
}


char * ASN1CALL
print_KrbFastResponse(const KrbFastResponse *data, int flags)
{
    return _asn1_print_top(asn1_KrbFastResponse, flags, data);
}

/* template_members: KrbFastArmoredRep exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KrbFastArmoredRep exp exp */
/* generate_template_type: KrbFastArmoredRep_tag_enc_fast_rep_388 */
/* generate_template_type: KrbFastArmoredRep_tag__387 */
const struct asn1_template asn1_KrbFastArmoredRep_tag__387[] = {
/* 0 */ { 0|A1_HF_ELLIPSIS, sizeof(struct KrbFastArmoredRep), ((void *)(uintptr_t)4) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KrbFastArmoredRep, enc_fast_rep), asn1_Ticket_tag_enc_part_52 },
/* 2 */ { A1_OP_NAME, 0, "KrbFastArmoredRep" },
/* 3 */ { A1_OP_NAME, 0, "enc-fast-rep" },
/* 4 */ { A1_OP_NAME, 0, "..." }
};
/* generate_template_type: KrbFastArmoredRep */
const struct asn1_template asn1_KrbFastArmoredRep[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredRep), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KrbFastArmoredRep_tag__387 }
};

int ASN1CALL
decode_KrbFastArmoredRep(const unsigned char *p, size_t len, KrbFastArmoredRep *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KrbFastArmoredRep, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KrbFastArmoredRep(unsigned char *p, size_t len, const KrbFastArmoredRep *data, size_t *size)
{
    return _asn1_encode(asn1_KrbFastArmoredRep, p, len, data, size);
}


size_t ASN1CALL
length_KrbFastArmoredRep(const KrbFastArmoredRep *data)
{
    return _asn1_length(asn1_KrbFastArmoredRep, data);
}


void ASN1CALL
free_KrbFastArmoredRep(KrbFastArmoredRep *data)
{
    _asn1_free_top(asn1_KrbFastArmoredRep, data);
}


int ASN1CALL
copy_KrbFastArmoredRep(const KrbFastArmoredRep *from, KrbFastArmoredRep *to)
{
    return _asn1_copy_top(asn1_KrbFastArmoredRep, from, to);
}


char * ASN1CALL
print_KrbFastArmoredRep(const KrbFastArmoredRep *data, int flags)
{
    return _asn1_print_top(asn1_KrbFastArmoredRep, flags, data);
}

/* template_members: KrbFastArmoredRep exp exp */
/* generate_template_type: KrbFastArmoredRep_tag__389 */
const struct asn1_template asn1_KrbFastArmoredRep_tag__389[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredRep), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KrbFastArmoredRep }
};
/* generate_template_type: PA_FX_FAST_REPLY_choice_armored_data */
const struct asn1_template asn1_PA_FX_FAST_REPLY_choice_armored_data[] = {
/* 0 */ { 0, sizeof(KrbFastArmoredRep), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), 0, asn1_KrbFastArmoredRep_tag__389 }
};
static const struct asn1_template asn1_choice_PA_FX_FAST_REPLY_2[] = {
/* 0 */ { offsetof(PA_FX_FAST_REPLY, u.asn1_ellipsis), offsetof(PA_FX_FAST_REPLY, element), ((void *)(uintptr_t)3) },
/* 1 */ { choice_PA_FX_FAST_REPLY_armored_data, offsetof(PA_FX_FAST_REPLY, u.armored_data), asn1_PA_FX_FAST_REPLY_choice_armored_data },
/* 2 */ { 0, 0, "armored-data" },
/* 3 */ { 0, 0, "..." }
};
/* generate_template_type: PA_FX_FAST_REPLY */
const struct asn1_template asn1_PA_FX_FAST_REPLY[] = {
/* 0 */ { 0, sizeof(PA_FX_FAST_REPLY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_CHOICE, 0, asn1_choice_PA_FX_FAST_REPLY_2 }
};

int ASN1CALL
decode_PA_FX_FAST_REPLY(const unsigned char *p, size_t len, PA_FX_FAST_REPLY *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_PA_FX_FAST_REPLY, 0|0, p, len, data, size);
}


int ASN1CALL
encode_PA_FX_FAST_REPLY(unsigned char *p, size_t len, const PA_FX_FAST_REPLY *data, size_t *size)
{
    return _asn1_encode(asn1_PA_FX_FAST_REPLY, p, len, data, size);
}


size_t ASN1CALL
length_PA_FX_FAST_REPLY(const PA_FX_FAST_REPLY *data)
{
    return _asn1_length(asn1_PA_FX_FAST_REPLY, data);
}


void ASN1CALL
free_PA_FX_FAST_REPLY(PA_FX_FAST_REPLY *data)
{
    _asn1_free_top(asn1_PA_FX_FAST_REPLY, data);
}


int ASN1CALL
copy_PA_FX_FAST_REPLY(const PA_FX_FAST_REPLY *from, PA_FX_FAST_REPLY *to)
{
    return _asn1_copy_top(asn1_PA_FX_FAST_REPLY, from, to);
}


char * ASN1CALL
print_PA_FX_FAST_REPLY(const PA_FX_FAST_REPLY *data, int flags)
{
    return _asn1_print_top(asn1_PA_FX_FAST_REPLY, flags, data);
}

/* template_members: KDCFastFlags exp exp */
static const struct asn1_template asn1_KDCFastFlags_bmember__6[] = {
/* 0 */ { 0|A1_HBF_RFC1510, sizeof(KDCFastFlags), ((void *)(uintptr_t)5) },
/* 1 */ { 0, 0, "use_reply_key" },
/* 2 */ { 0, 1, "reply_key_used" },
/* 3 */ { 0, 2, "reply_key_replaced" },
/* 4 */ { 0, 3, "kdc_verified" },
/* 5 */ { 0, 4, "requested_hidden_names" }
};
/* generate_template_type: KDCFastFlags_tag__390 */
const struct asn1_template asn1_KDCFastFlags_tag__390[] = {
/* 0 */ { 0, sizeof(KDCFastFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_BMEMBER, 0, asn1_KDCFastFlags_bmember__6 }
};
/* generate_template_type: KDCFastFlags */
const struct asn1_template asn1_KDCFastFlags[] = {
/* 0 */ { 0, sizeof(KDCFastFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_BitString), 0, asn1_KDCFastFlags_tag__390 }
};

int ASN1CALL
decode_KDCFastFlags(const unsigned char *p, size_t len, KDCFastFlags *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KDCFastFlags, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KDCFastFlags(unsigned char *p, size_t len, const KDCFastFlags *data, size_t *size)
{
    return _asn1_encode(asn1_KDCFastFlags, p, len, data, size);
}


size_t ASN1CALL
length_KDCFastFlags(const KDCFastFlags *data)
{
    return _asn1_length(asn1_KDCFastFlags, data);
}


void ASN1CALL
free_KDCFastFlags(KDCFastFlags *data)
{
    _asn1_free_top(asn1_KDCFastFlags, data);
}


int ASN1CALL
copy_KDCFastFlags(const KDCFastFlags *from, KDCFastFlags *to)
{
    return _asn1_copy_top(asn1_KDCFastFlags, from, to);
}


char * ASN1CALL
print_KDCFastFlags(const KDCFastFlags *data, int flags)
{
    return _asn1_print_top(asn1_KDCFastFlags, flags, data);
}

uint64_t KDCFastFlags2int(KDCFastFlags f)
{
uint64_t r = 0;
if(f.use_reply_key) r |= (1ULL << 0);
if(f.reply_key_used) r |= (1ULL << 1);
if(f.reply_key_replaced) r |= (1ULL << 2);
if(f.kdc_verified) r |= (1ULL << 3);
if(f.requested_hidden_names) r |= (1ULL << 4);
return r;
}

KDCFastFlags int2KDCFastFlags(uint64_t n)
{
	KDCFastFlags flags;

	memset(&flags, 0, sizeof(flags));

	flags.use_reply_key = (n >> 0) & 1;
	flags.reply_key_used = (n >> 1) & 1;
	flags.reply_key_replaced = (n >> 2) & 1;
	flags.kdc_verified = (n >> 3) & 1;
	flags.requested_hidden_names = (n >> 4) & 1;
	return flags;
}

static struct units KDCFastFlags_units[] = {
	{"requested-hidden-names",	1ULL << 4},
	{"kdc-verified",	1ULL << 3},
	{"reply-key-replaced",	1ULL << 2},
	{"reply-key-used",	1ULL << 1},
	{"use-reply-key",	1ULL << 0},
	{NULL,	0}
};

const struct units * asn1_KDCFastFlags_units(void){
return KDCFastFlags_units;
}

/* template_members: KDCFastState exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KDCFastState exp exp */
/* generate_template_type: KDCFastState_tag_flags_392 */
const struct asn1_template asn1_KDCFastState_tag_flags_392[] = {
/* 0 */ { 0, sizeof(KDCFastFlags), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KDCFastFlags }
};
/* template_members: KDCFastState exp exp */
/* template_members: time_t exp exp */
/* generate_template_type: time_t_tag_expiration_394 */
/* generate_template_type: KDCFastState_tag_expiration_393 */
const struct asn1_template asn1_KDCFastState_tag_expiration_393[] = {
/* 0 */ { 0, sizeof(time_t), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_GeneralizedTime), 0, asn1_KerberosTime_tag__20 }
};
/* template_members: KDCFastState exp exp */
/* generate_template_type: KDCFastState_tag_fast_state_395 */
/* template_members: KDCFastState exp exp */
/* template_members: KDCFastState exp exp */
/* generate_template_type: KDCFastState_expected_pa_types_17 */
/* generate_template_type: KDCFastState_tag_expected_pa_types_397 */
const struct asn1_template asn1_KDCFastState_tag_expected_pa_types_397[] = {
/* 0 */ { 0, sizeof(struct KDCFastState_expected_pa_types), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_SEQOF, 0, asn1_PA_DATA_tag_padata_type_119 }
};
/* generate_template_type: KDCFastState_tag_expected_pa_types_396 */
const struct asn1_template asn1_KDCFastState_tag_expected_pa_types_396[] = {
/* 0 */ { 0, sizeof(struct KDCFastState_expected_pa_types), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCFastState_tag_expected_pa_types_397 }
};
/* generate_template_type: KDCFastState_tag__391 */
const struct asn1_template asn1_KDCFastState_tag__391[] = {
/* 0 */ { 0, sizeof(struct KDCFastState), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDCFastState, flags), asn1_KDCFastState_tag_flags_392 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KDCFastState, expiration), asn1_KDCFastState_tag_expiration_393 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KDCFastState, fast_state), asn1_EncKDCRepPart_tag_encrypted_pa_data_83 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KDCFastState, expected_pa_types), asn1_KDCFastState_tag_expected_pa_types_396 },
/* 5 */ { A1_OP_NAME, 0, "KDCFastState" },
/* 6 */ { A1_OP_NAME, 0, "flags" },
/* 7 */ { A1_OP_NAME, 0, "expiration" },
/* 8 */ { A1_OP_NAME, 0, "fast-state" },
/* 9 */ { A1_OP_NAME, 0, "expected-pa-types" }
};
/* generate_template_type: KDCFastState */
const struct asn1_template asn1_KDCFastState[] = {
/* 0 */ { 0, sizeof(KDCFastState), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCFastState_tag__391 }
};

int ASN1CALL
decode_KDCFastState(const unsigned char *p, size_t len, KDCFastState *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KDCFastState, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KDCFastState(unsigned char *p, size_t len, const KDCFastState *data, size_t *size)
{
    return _asn1_encode(asn1_KDCFastState, p, len, data, size);
}


size_t ASN1CALL
length_KDCFastState(const KDCFastState *data)
{
    return _asn1_length(asn1_KDCFastState, data);
}


void ASN1CALL
free_KDCFastState(KDCFastState *data)
{
    _asn1_free_top(asn1_KDCFastState, data);
}


int ASN1CALL
copy_KDCFastState(const KDCFastState *from, KDCFastState *to)
{
    return _asn1_copy_top(asn1_KDCFastState, from, to);
}


char * ASN1CALL
print_KDCFastState(const KDCFastState *data, int flags)
{
    return _asn1_print_top(asn1_KDCFastState, flags, data);
}

/* template_members: KDCFastCookie exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KDCFastCookie exp exp */
/* template_members: heim_utf8_string exp exp */
/* generate_template_type: heim_utf8_string_tag_version_400 */
const struct asn1_template asn1_heim_utf8_string_tag_version_400[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_UTF8_STRING), 0, NULL }
};
/* generate_template_type: KDCFastCookie_tag_version_399 */
const struct asn1_template asn1_KDCFastCookie_tag_version_399[] = {
/* 0 */ { 0, sizeof(heim_utf8_string), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_UTF8String), 0, asn1_heim_utf8_string_tag_version_400 }
};
/* template_members: KDCFastCookie exp exp */
/* generate_template_type: KDCFastCookie_tag_cookie_401 */
/* generate_template_type: KDCFastCookie_tag__398 */
const struct asn1_template asn1_KDCFastCookie_tag__398[] = {
/* 0 */ { 0, sizeof(struct KDCFastCookie), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDCFastCookie, version), asn1_KDCFastCookie_tag_version_399 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KDCFastCookie, cookie), asn1_Ticket_tag_enc_part_52 },
/* 3 */ { A1_OP_NAME, 0, "KDCFastCookie" },
/* 4 */ { A1_OP_NAME, 0, "version" },
/* 5 */ { A1_OP_NAME, 0, "cookie" }
};
/* generate_template_type: KDCFastCookie */
const struct asn1_template asn1_KDCFastCookie[] = {
/* 0 */ { 0, sizeof(KDCFastCookie), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDCFastCookie_tag__398 }
};

int ASN1CALL
decode_KDCFastCookie(const unsigned char *p, size_t len, KDCFastCookie *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KDCFastCookie, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KDCFastCookie(unsigned char *p, size_t len, const KDCFastCookie *data, size_t *size)
{
    return _asn1_encode(asn1_KDCFastCookie, p, len, data, size);
}


size_t ASN1CALL
length_KDCFastCookie(const KDCFastCookie *data)
{
    return _asn1_length(asn1_KDCFastCookie, data);
}


void ASN1CALL
free_KDCFastCookie(KDCFastCookie *data)
{
    _asn1_free_top(asn1_KDCFastCookie, data);
}


int ASN1CALL
copy_KDCFastCookie(const KDCFastCookie *from, KDCFastCookie *to)
{
    return _asn1_copy_top(asn1_KDCFastCookie, from, to);
}


char * ASN1CALL
print_KDCFastCookie(const KDCFastCookie *data, int flags)
{
    return _asn1_print_top(asn1_KDCFastCookie, flags, data);
}

/* template_members: KDC_PROXY_MESSAGE exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KDC_PROXY_MESSAGE exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_kerb_message_404 */
/* generate_template_type: KDC_PROXY_MESSAGE_tag_kerb_message_403 */
/* template_members: KDC_PROXY_MESSAGE exp exp */
/* generate_template_type: KDC_PROXY_MESSAGE_tag_target_domain_405 */
/* template_members: KDC_PROXY_MESSAGE exp exp */
/* template_members: heim_integer exp exp */
/* generate_template_type: heim_integer_tag_dclocator_hint_407 */
const struct asn1_template asn1_heim_integer_tag_dclocator_hint_407[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_PARSE_T(A1T_HEIM_INTEGER), 0, NULL }
};
/* generate_template_type: KDC_PROXY_MESSAGE_tag_dclocator_hint_406 */
const struct asn1_template asn1_KDC_PROXY_MESSAGE_tag_dclocator_hint_406[] = {
/* 0 */ { 0, sizeof(heim_integer), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,PRIM,UT_Integer), 0, asn1_heim_integer_tag_dclocator_hint_407 }
};
/* generate_template_type: KDC_PROXY_MESSAGE_tag__402 */
const struct asn1_template asn1_KDC_PROXY_MESSAGE_tag__402[] = {
/* 0 */ { 0, sizeof(struct KDC_PROXY_MESSAGE), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KDC_PROXY_MESSAGE, kerb_message), asn1_HostAddress_tag_address_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KDC_PROXY_MESSAGE, target_domain), asn1_Ticket_tag_realm_50 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2)|A1_FLAG_OPTIONAL, offsetof(struct KDC_PROXY_MESSAGE, dclocator_hint), asn1_KDC_PROXY_MESSAGE_tag_dclocator_hint_406 },
/* 4 */ { A1_OP_NAME, 0, "KDC_PROXY_MESSAGE" },
/* 5 */ { A1_OP_NAME, 0, "kerb-message" },
/* 6 */ { A1_OP_NAME, 0, "target-domain" },
/* 7 */ { A1_OP_NAME, 0, "dclocator-hint" }
};
/* generate_template_type: KDC_PROXY_MESSAGE */
const struct asn1_template asn1_KDC_PROXY_MESSAGE[] = {
/* 0 */ { 0, sizeof(KDC_PROXY_MESSAGE), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KDC_PROXY_MESSAGE_tag__402 }
};

int ASN1CALL
decode_KDC_PROXY_MESSAGE(const unsigned char *p, size_t len, KDC_PROXY_MESSAGE *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KDC_PROXY_MESSAGE, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KDC_PROXY_MESSAGE(unsigned char *p, size_t len, const KDC_PROXY_MESSAGE *data, size_t *size)
{
    return _asn1_encode(asn1_KDC_PROXY_MESSAGE, p, len, data, size);
}


size_t ASN1CALL
length_KDC_PROXY_MESSAGE(const KDC_PROXY_MESSAGE *data)
{
    return _asn1_length(asn1_KDC_PROXY_MESSAGE, data);
}


void ASN1CALL
free_KDC_PROXY_MESSAGE(KDC_PROXY_MESSAGE *data)
{
    _asn1_free_top(asn1_KDC_PROXY_MESSAGE, data);
}


int ASN1CALL
copy_KDC_PROXY_MESSAGE(const KDC_PROXY_MESSAGE *from, KDC_PROXY_MESSAGE *to)
{
    return _asn1_copy_top(asn1_KDC_PROXY_MESSAGE, from, to);
}


char * ASN1CALL
print_KDC_PROXY_MESSAGE(const KDC_PROXY_MESSAGE *data, int flags)
{
    return _asn1_print_top(asn1_KDC_PROXY_MESSAGE, flags, data);
}

/* template_members: KERB_TIMES exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KERB_TIMES exp exp */
/* generate_template_type: KERB_TIMES_tag_authtime_409 */
/* template_members: KERB_TIMES exp exp */
/* generate_template_type: KERB_TIMES_tag_starttime_410 */
/* template_members: KERB_TIMES exp exp */
/* generate_template_type: KERB_TIMES_tag_endtime_411 */
/* template_members: KERB_TIMES exp exp */
/* generate_template_type: KERB_TIMES_tag_renew_till_412 */
/* generate_template_type: KERB_TIMES_tag__408 */
const struct asn1_template asn1_KERB_TIMES_tag__408[] = {
/* 0 */ { 0, sizeof(struct KERB_TIMES), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_TIMES, authtime), asn1_LastReq_val_tag_lr_value_33 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_TIMES, starttime), asn1_LastReq_val_tag_lr_value_33 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KERB_TIMES, endtime), asn1_LastReq_val_tag_lr_value_33 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KERB_TIMES, renew_till), asn1_LastReq_val_tag_lr_value_33 },
/* 5 */ { A1_OP_NAME, 0, "KERB_TIMES" },
/* 6 */ { A1_OP_NAME, 0, "authtime" },
/* 7 */ { A1_OP_NAME, 0, "starttime" },
/* 8 */ { A1_OP_NAME, 0, "endtime" },
/* 9 */ { A1_OP_NAME, 0, "renew_till" }
};
/* generate_template_type: KERB_TIMES */
const struct asn1_template asn1_KERB_TIMES[] = {
/* 0 */ { 0, sizeof(KERB_TIMES), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_TIMES_tag__408 }
};

int ASN1CALL
decode_KERB_TIMES(const unsigned char *p, size_t len, KERB_TIMES *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KERB_TIMES, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KERB_TIMES(unsigned char *p, size_t len, const KERB_TIMES *data, size_t *size)
{
    return _asn1_encode(asn1_KERB_TIMES, p, len, data, size);
}


size_t ASN1CALL
length_KERB_TIMES(const KERB_TIMES *data)
{
    return _asn1_length(asn1_KERB_TIMES, data);
}


void ASN1CALL
free_KERB_TIMES(KERB_TIMES *data)
{
    _asn1_free_top(asn1_KERB_TIMES, data);
}


int ASN1CALL
copy_KERB_TIMES(const KERB_TIMES *from, KERB_TIMES *to)
{
    return _asn1_copy_top(asn1_KERB_TIMES, from, to);
}


char * ASN1CALL
print_KERB_TIMES(const KERB_TIMES *data, int flags)
{
    return _asn1_print_top(asn1_KERB_TIMES, flags, data);
}

/* template_members: KERB_CRED exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KERB_CRED exp exp */
/* generate_template_type: KERB_CRED_tag_client_414 */
/* template_members: KERB_CRED exp exp */
/* generate_template_type: KERB_CRED_tag_server_415 */
/* template_members: KERB_CRED exp exp */
/* generate_template_type: KERB_CRED_tag_keyblock_416 */
/* template_members: KERB_CRED exp exp */
/* generate_template_type: KERB_CRED_tag_times_417 */
const struct asn1_template asn1_KERB_CRED_tag_times_417[] = {
/* 0 */ { 0, sizeof(KERB_TIMES), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KERB_TIMES }
};
/* template_members: KERB_CRED exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_ticket_419 */
/* generate_template_type: KERB_CRED_tag_ticket_418 */
/* template_members: KERB_CRED exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_authdata_421 */
/* generate_template_type: KERB_CRED_tag_authdata_420 */
/* template_members: KERB_CRED exp exp */
/* generate_template_type: KERB_CRED_tag_addresses_422 */
/* template_members: KERB_CRED exp exp */
/* generate_template_type: KERB_CRED_tag_flags_423 */
/* generate_template_type: KERB_CRED_tag__413 */
const struct asn1_template asn1_KERB_CRED_tag__413[] = {
/* 0 */ { 0, sizeof(struct KERB_CRED), ((void *)(uintptr_t)17) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_CRED, client), asn1_Principal_seofTstruct_4 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_CRED, server), asn1_Principal_seofTstruct_4 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KERB_CRED, keyblock), asn1_EncTicketPart_tag_key_56 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KERB_CRED, times), asn1_KERB_CRED_tag_times_417 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4), offsetof(struct KERB_CRED, ticket), asn1_HostAddress_tag_address_17 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct KERB_CRED, authdata), asn1_HostAddress_tag_address_17 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct KERB_CRED, addresses), asn1_EncTicketPart_tag_caddr_64 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7), offsetof(struct KERB_CRED, flags), asn1_EncTicketPart_tag_flags_55 },
/* 9 */ { A1_OP_NAME, 0, "KERB_CRED" },
/* 10 */ { A1_OP_NAME, 0, "client" },
/* 11 */ { A1_OP_NAME, 0, "server" },
/* 12 */ { A1_OP_NAME, 0, "keyblock" },
/* 13 */ { A1_OP_NAME, 0, "times" },
/* 14 */ { A1_OP_NAME, 0, "ticket" },
/* 15 */ { A1_OP_NAME, 0, "authdata" },
/* 16 */ { A1_OP_NAME, 0, "addresses" },
/* 17 */ { A1_OP_NAME, 0, "flags" }
};
/* generate_template_type: KERB_CRED */
const struct asn1_template asn1_KERB_CRED[] = {
/* 0 */ { 0, sizeof(KERB_CRED), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_CRED_tag__413 }
};

int ASN1CALL
decode_KERB_CRED(const unsigned char *p, size_t len, KERB_CRED *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KERB_CRED, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KERB_CRED(unsigned char *p, size_t len, const KERB_CRED *data, size_t *size)
{
    return _asn1_encode(asn1_KERB_CRED, p, len, data, size);
}


size_t ASN1CALL
length_KERB_CRED(const KERB_CRED *data)
{
    return _asn1_length(asn1_KERB_CRED, data);
}


void ASN1CALL
free_KERB_CRED(KERB_CRED *data)
{
    _asn1_free_top(asn1_KERB_CRED, data);
}


int ASN1CALL
copy_KERB_CRED(const KERB_CRED *from, KERB_CRED *to)
{
    return _asn1_copy_top(asn1_KERB_CRED, from, to);
}


char * ASN1CALL
print_KERB_CRED(const KERB_CRED *data, int flags)
{
    return _asn1_print_top(asn1_KERB_CRED, flags, data);
}

/* template_members: KERB_TGS_REQ_IN exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KERB_TGS_REQ_IN exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_cache_426 */
/* generate_template_type: KERB_TGS_REQ_IN_tag_cache_425 */
/* template_members: KERB_TGS_REQ_IN exp exp */
/* generate_template_type: KERB_TGS_REQ_IN_tag_addrs_427 */
/* template_members: KERB_TGS_REQ_IN exp exp */
/* generate_template_type: KERB_TGS_REQ_IN_tag_flags_428 */
/* template_members: KERB_TGS_REQ_IN exp exp */
/* generate_template_type: KERB_TGS_REQ_IN_tag_imp_429 */
/* template_members: KERB_TGS_REQ_IN exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_ticket_431 */
/* generate_template_type: KERB_TGS_REQ_IN_tag_ticket_430 */
/* template_members: KERB_TGS_REQ_IN exp exp */
/* generate_template_type: KERB_TGS_REQ_IN_tag_in_cred_432 */
const struct asn1_template asn1_KERB_TGS_REQ_IN_tag_in_cred_432[] = {
/* 0 */ { 0, sizeof(KERB_CRED), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_KERB_CRED }
};
/* template_members: KERB_TGS_REQ_IN exp exp */
/* generate_template_type: KERB_TGS_REQ_IN_tag_krbtgt_433 */
/* template_members: KERB_TGS_REQ_IN exp exp */
/* generate_template_type: KERB_TGS_REQ_IN_tag_padata_434 */
/* generate_template_type: KERB_TGS_REQ_IN_tag__424 */
const struct asn1_template asn1_KERB_TGS_REQ_IN_tag__424[] = {
/* 0 */ { 0, sizeof(struct KERB_TGS_REQ_IN), ((void *)(uintptr_t)17) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_TGS_REQ_IN, cache), asn1_HostAddress_tag_address_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_TGS_REQ_IN, addrs), asn1_EncTicketPart_tag_caddr_64 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KERB_TGS_REQ_IN, flags), asn1_Authenticator_tag_seq_number_116 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3)|A1_FLAG_OPTIONAL, offsetof(struct KERB_TGS_REQ_IN, imp), asn1_Principal_seofTstruct_4 },
/* 5 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,4)|A1_FLAG_OPTIONAL, offsetof(struct KERB_TGS_REQ_IN, ticket), asn1_HostAddress_tag_address_17 },
/* 6 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,5), offsetof(struct KERB_TGS_REQ_IN, in_cred), asn1_KERB_TGS_REQ_IN_tag_in_cred_432 },
/* 7 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,6), offsetof(struct KERB_TGS_REQ_IN, krbtgt), asn1_KERB_TGS_REQ_IN_tag_in_cred_432 },
/* 8 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,7), offsetof(struct KERB_TGS_REQ_IN, padata), asn1_EncKDCRepPart_tag_encrypted_pa_data_83 },
/* 9 */ { A1_OP_NAME, 0, "KERB_TGS_REQ_IN" },
/* 10 */ { A1_OP_NAME, 0, "cache" },
/* 11 */ { A1_OP_NAME, 0, "addrs" },
/* 12 */ { A1_OP_NAME, 0, "flags" },
/* 13 */ { A1_OP_NAME, 0, "imp" },
/* 14 */ { A1_OP_NAME, 0, "ticket" },
/* 15 */ { A1_OP_NAME, 0, "in_cred" },
/* 16 */ { A1_OP_NAME, 0, "krbtgt" },
/* 17 */ { A1_OP_NAME, 0, "padata" }
};
/* generate_template_type: KERB_TGS_REQ_IN */
const struct asn1_template asn1_KERB_TGS_REQ_IN[] = {
/* 0 */ { 0, sizeof(KERB_TGS_REQ_IN), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_TGS_REQ_IN_tag__424 }
};

int ASN1CALL
decode_KERB_TGS_REQ_IN(const unsigned char *p, size_t len, KERB_TGS_REQ_IN *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KERB_TGS_REQ_IN, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KERB_TGS_REQ_IN(unsigned char *p, size_t len, const KERB_TGS_REQ_IN *data, size_t *size)
{
    return _asn1_encode(asn1_KERB_TGS_REQ_IN, p, len, data, size);
}


size_t ASN1CALL
length_KERB_TGS_REQ_IN(const KERB_TGS_REQ_IN *data)
{
    return _asn1_length(asn1_KERB_TGS_REQ_IN, data);
}


void ASN1CALL
free_KERB_TGS_REQ_IN(KERB_TGS_REQ_IN *data)
{
    _asn1_free_top(asn1_KERB_TGS_REQ_IN, data);
}


int ASN1CALL
copy_KERB_TGS_REQ_IN(const KERB_TGS_REQ_IN *from, KERB_TGS_REQ_IN *to)
{
    return _asn1_copy_top(asn1_KERB_TGS_REQ_IN, from, to);
}


char * ASN1CALL
print_KERB_TGS_REQ_IN(const KERB_TGS_REQ_IN *data, int flags)
{
    return _asn1_print_top(asn1_KERB_TGS_REQ_IN, flags, data);
}

/* template_members: KERB_TGS_REQ_OUT exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KERB_TGS_REQ_OUT exp exp */
/* generate_template_type: KERB_TGS_REQ_OUT_tag_subkey_436 */
/* template_members: KERB_TGS_REQ_OUT exp exp */
/* generate_template_type: KERB_TGS_REQ_OUT_tag_t_437 */
const struct asn1_template asn1_KERB_TGS_REQ_OUT_tag_t_437[] = {
/* 0 */ { 0, sizeof(TGS_REQ), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TGS_REQ }
};
/* generate_template_type: KERB_TGS_REQ_OUT_tag__435 */
const struct asn1_template asn1_KERB_TGS_REQ_OUT_tag__435[] = {
/* 0 */ { 0, sizeof(struct KERB_TGS_REQ_OUT), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0)|A1_FLAG_OPTIONAL, offsetof(struct KERB_TGS_REQ_OUT, subkey), asn1_EncTicketPart_tag_key_56 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_TGS_REQ_OUT, t), asn1_KERB_TGS_REQ_OUT_tag_t_437 },
/* 3 */ { A1_OP_NAME, 0, "KERB_TGS_REQ_OUT" },
/* 4 */ { A1_OP_NAME, 0, "subkey" },
/* 5 */ { A1_OP_NAME, 0, "t" }
};
/* generate_template_type: KERB_TGS_REQ_OUT */
const struct asn1_template asn1_KERB_TGS_REQ_OUT[] = {
/* 0 */ { 0, sizeof(KERB_TGS_REQ_OUT), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_TGS_REQ_OUT_tag__435 }
};

int ASN1CALL
decode_KERB_TGS_REQ_OUT(const unsigned char *p, size_t len, KERB_TGS_REQ_OUT *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KERB_TGS_REQ_OUT, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KERB_TGS_REQ_OUT(unsigned char *p, size_t len, const KERB_TGS_REQ_OUT *data, size_t *size)
{
    return _asn1_encode(asn1_KERB_TGS_REQ_OUT, p, len, data, size);
}


size_t ASN1CALL
length_KERB_TGS_REQ_OUT(const KERB_TGS_REQ_OUT *data)
{
    return _asn1_length(asn1_KERB_TGS_REQ_OUT, data);
}


void ASN1CALL
free_KERB_TGS_REQ_OUT(KERB_TGS_REQ_OUT *data)
{
    _asn1_free_top(asn1_KERB_TGS_REQ_OUT, data);
}


int ASN1CALL
copy_KERB_TGS_REQ_OUT(const KERB_TGS_REQ_OUT *from, KERB_TGS_REQ_OUT *to)
{
    return _asn1_copy_top(asn1_KERB_TGS_REQ_OUT, from, to);
}


char * ASN1CALL
print_KERB_TGS_REQ_OUT(const KERB_TGS_REQ_OUT *data, int flags)
{
    return _asn1_print_top(asn1_KERB_TGS_REQ_OUT, flags, data);
}

/* template_members: KERB_TGS_REP_IN exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KERB_TGS_REP_IN exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_cache_440 */
/* generate_template_type: KERB_TGS_REP_IN_tag_cache_439 */
/* template_members: KERB_TGS_REP_IN exp exp */
/* generate_template_type: KERB_TGS_REP_IN_tag_subkey_441 */
/* template_members: KERB_TGS_REP_IN exp exp */
/* generate_template_type: KERB_TGS_REP_IN_tag_in_cred_442 */
/* template_members: KERB_TGS_REP_IN exp exp */
/* generate_template_type: KERB_TGS_REP_IN_tag_t_443 */
const struct asn1_template asn1_KERB_TGS_REP_IN_tag_t_443[] = {
/* 0 */ { 0, sizeof(TGS_REP), ((void *)(uintptr_t)1) },
/* 1 */ { A1_OP_TYPE , 0, asn1_TGS_REP }
};
/* generate_template_type: KERB_TGS_REP_IN_tag__438 */
const struct asn1_template asn1_KERB_TGS_REP_IN_tag__438[] = {
/* 0 */ { 0, sizeof(struct KERB_TGS_REP_IN), ((void *)(uintptr_t)9) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_TGS_REP_IN, cache), asn1_HostAddress_tag_address_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1)|A1_FLAG_OPTIONAL, offsetof(struct KERB_TGS_REP_IN, subkey), asn1_EncTicketPart_tag_key_56 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KERB_TGS_REP_IN, in_cred), asn1_KERB_TGS_REQ_IN_tag_in_cred_432 },
/* 4 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,3), offsetof(struct KERB_TGS_REP_IN, t), asn1_KERB_TGS_REP_IN_tag_t_443 },
/* 5 */ { A1_OP_NAME, 0, "KERB_TGS_REP_IN" },
/* 6 */ { A1_OP_NAME, 0, "cache" },
/* 7 */ { A1_OP_NAME, 0, "subkey" },
/* 8 */ { A1_OP_NAME, 0, "in_cred" },
/* 9 */ { A1_OP_NAME, 0, "t" }
};
/* generate_template_type: KERB_TGS_REP_IN */
const struct asn1_template asn1_KERB_TGS_REP_IN[] = {
/* 0 */ { 0, sizeof(KERB_TGS_REP_IN), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_TGS_REP_IN_tag__438 }
};

int ASN1CALL
decode_KERB_TGS_REP_IN(const unsigned char *p, size_t len, KERB_TGS_REP_IN *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KERB_TGS_REP_IN, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KERB_TGS_REP_IN(unsigned char *p, size_t len, const KERB_TGS_REP_IN *data, size_t *size)
{
    return _asn1_encode(asn1_KERB_TGS_REP_IN, p, len, data, size);
}


size_t ASN1CALL
length_KERB_TGS_REP_IN(const KERB_TGS_REP_IN *data)
{
    return _asn1_length(asn1_KERB_TGS_REP_IN, data);
}


void ASN1CALL
free_KERB_TGS_REP_IN(KERB_TGS_REP_IN *data)
{
    _asn1_free_top(asn1_KERB_TGS_REP_IN, data);
}


int ASN1CALL
copy_KERB_TGS_REP_IN(const KERB_TGS_REP_IN *from, KERB_TGS_REP_IN *to)
{
    return _asn1_copy_top(asn1_KERB_TGS_REP_IN, from, to);
}


char * ASN1CALL
print_KERB_TGS_REP_IN(const KERB_TGS_REP_IN *data, int flags)
{
    return _asn1_print_top(asn1_KERB_TGS_REP_IN, flags, data);
}

/* template_members: KERB_TGS_REP_OUT exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KERB_TGS_REP_OUT exp exp */
/* template_members: heim_octet_string exp exp */
/* generate_template_type: heim_octet_string_tag_cache_446 */
/* generate_template_type: KERB_TGS_REP_OUT_tag_cache_445 */
/* template_members: KERB_TGS_REP_OUT exp exp */
/* generate_template_type: KERB_TGS_REP_OUT_tag_cred_447 */
/* template_members: KERB_TGS_REP_OUT exp exp */
/* generate_template_type: KERB_TGS_REP_OUT_tag_subkey_448 */
/* generate_template_type: KERB_TGS_REP_OUT_tag__444 */
const struct asn1_template asn1_KERB_TGS_REP_OUT_tag__444[] = {
/* 0 */ { 0, sizeof(struct KERB_TGS_REP_OUT), ((void *)(uintptr_t)7) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_TGS_REP_OUT, cache), asn1_HostAddress_tag_address_17 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_TGS_REP_OUT, cred), asn1_KERB_TGS_REQ_IN_tag_in_cred_432 },
/* 3 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,2), offsetof(struct KERB_TGS_REP_OUT, subkey), asn1_EncTicketPart_tag_key_56 },
/* 4 */ { A1_OP_NAME, 0, "KERB_TGS_REP_OUT" },
/* 5 */ { A1_OP_NAME, 0, "cache" },
/* 6 */ { A1_OP_NAME, 0, "cred" },
/* 7 */ { A1_OP_NAME, 0, "subkey" }
};
/* generate_template_type: KERB_TGS_REP_OUT */
const struct asn1_template asn1_KERB_TGS_REP_OUT[] = {
/* 0 */ { 0, sizeof(KERB_TGS_REP_OUT), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_TGS_REP_OUT_tag__444 }
};

int ASN1CALL
decode_KERB_TGS_REP_OUT(const unsigned char *p, size_t len, KERB_TGS_REP_OUT *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KERB_TGS_REP_OUT, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KERB_TGS_REP_OUT(unsigned char *p, size_t len, const KERB_TGS_REP_OUT *data, size_t *size)
{
    return _asn1_encode(asn1_KERB_TGS_REP_OUT, p, len, data, size);
}


size_t ASN1CALL
length_KERB_TGS_REP_OUT(const KERB_TGS_REP_OUT *data)
{
    return _asn1_length(asn1_KERB_TGS_REP_OUT, data);
}


void ASN1CALL
free_KERB_TGS_REP_OUT(KERB_TGS_REP_OUT *data)
{
    _asn1_free_top(asn1_KERB_TGS_REP_OUT, data);
}


int ASN1CALL
copy_KERB_TGS_REP_OUT(const KERB_TGS_REP_OUT *from, KERB_TGS_REP_OUT *to)
{
    return _asn1_copy_top(asn1_KERB_TGS_REP_OUT, from, to);
}


char * ASN1CALL
print_KERB_TGS_REP_OUT(const KERB_TGS_REP_OUT *data, int flags)
{
    return _asn1_print_top(asn1_KERB_TGS_REP_OUT, flags, data);
}

/* template_members: KERB_ARMOR_SERVICE_REPLY exp exp */
/* tsequence: members isstruct: 1 */
/* template_members: KERB_ARMOR_SERVICE_REPLY exp exp */
/* generate_template_type: KERB_ARMOR_SERVICE_REPLY_tag_armor_450 */
/* template_members: KERB_ARMOR_SERVICE_REPLY exp exp */
/* generate_template_type: KERB_ARMOR_SERVICE_REPLY_tag_armor_key_451 */
/* generate_template_type: KERB_ARMOR_SERVICE_REPLY_tag__449 */
const struct asn1_template asn1_KERB_ARMOR_SERVICE_REPLY_tag__449[] = {
/* 0 */ { 0, sizeof(struct KERB_ARMOR_SERVICE_REPLY), ((void *)(uintptr_t)5) },
/* 1 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,0), offsetof(struct KERB_ARMOR_SERVICE_REPLY, armor), asn1_KrbFastArmoredReq_tag_armor_372 },
/* 2 */ { A1_TAG_T(ASN1_C_CONTEXT,CONS,1), offsetof(struct KERB_ARMOR_SERVICE_REPLY, armor_key), asn1_EncTicketPart_tag_key_56 },
/* 3 */ { A1_OP_NAME, 0, "KERB_ARMOR_SERVICE_REPLY" },
/* 4 */ { A1_OP_NAME, 0, "armor" },
/* 5 */ { A1_OP_NAME, 0, "armor-key" }
};
/* generate_template_type: KERB_ARMOR_SERVICE_REPLY */
const struct asn1_template asn1_KERB_ARMOR_SERVICE_REPLY[] = {
/* 0 */ { 0, sizeof(KERB_ARMOR_SERVICE_REPLY), ((void *)(uintptr_t)1) },
/* 1 */ { A1_TAG_T(ASN1_C_UNIV,CONS,UT_Sequence), 0, asn1_KERB_ARMOR_SERVICE_REPLY_tag__449 }
};

int ASN1CALL
decode_KERB_ARMOR_SERVICE_REPLY(const unsigned char *p, size_t len, KERB_ARMOR_SERVICE_REPLY *data, size_t *size)
{
    memset(data, 0, sizeof(*data));
    return _asn1_decode_top(asn1_KERB_ARMOR_SERVICE_REPLY, 0|0, p, len, data, size);
}


int ASN1CALL
encode_KERB_ARMOR_SERVICE_REPLY(unsigned char *p, size_t len, const KERB_ARMOR_SERVICE_REPLY *data, size_t *size)
{
    return _asn1_encode(asn1_KERB_ARMOR_SERVICE_REPLY, p, len, data, size);
}


size_t ASN1CALL
length_KERB_ARMOR_SERVICE_REPLY(const KERB_ARMOR_SERVICE_REPLY *data)
{
    return _asn1_length(asn1_KERB_ARMOR_SERVICE_REPLY, data);
}


void ASN1CALL
free_KERB_ARMOR_SERVICE_REPLY(KERB_ARMOR_SERVICE_REPLY *data)
{
    _asn1_free_top(asn1_KERB_ARMOR_SERVICE_REPLY, data);
}


int ASN1CALL
copy_KERB_ARMOR_SERVICE_REPLY(const KERB_ARMOR_SERVICE_REPLY *from, KERB_ARMOR_SERVICE_REPLY *to)
{
    return _asn1_copy_top(asn1_KERB_ARMOR_SERVICE_REPLY, from, to);
}


char * ASN1CALL
print_KERB_ARMOR_SERVICE_REPLY(const KERB_ARMOR_SERVICE_REPLY *data, int flags)
{
    return _asn1_print_top(asn1_KERB_ARMOR_SERVICE_REPLY, flags, data);
}

