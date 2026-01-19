/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/krb5.asn1 */
/* Do not edit */

#ifndef __krb5_asn1_h__
#define __krb5_asn1_h__

#include <stddef.h>
#include <stdint.h>
#include <time.h>

#ifndef __asn1_common_definitions__
#define __asn1_common_definitions__

#ifndef __HEIM_BASE_DATA__
#define __HEIM_BASE_DATA__ 1
struct heim_base_data {
    size_t length;
    void *data;
};
typedef struct heim_base_data heim_octet_string;
#endif

typedef struct heim_integer {
  size_t length;
  void *data;
  int negative;
} heim_integer;

typedef char *heim_general_string;

typedef char *heim_utf8_string;

typedef struct heim_base_data heim_printable_string;

typedef struct heim_base_data heim_ia5_string;

typedef struct heim_bmp_string {
  size_t length;
  uint16_t *data;
} heim_bmp_string;

typedef struct heim_universal_string {
  size_t length;
  uint32_t *data;
} heim_universal_string;

typedef char *heim_visible_string;

typedef struct heim_oid {
  size_t length;
  unsigned *components;
} heim_oid;

typedef struct heim_bit_string {
  size_t length;
  void *data;
} heim_bit_string;

typedef struct heim_base_data heim_any;
typedef struct heim_base_data heim_any_set;
typedef struct heim_base_data HEIM_ANY;
typedef struct heim_base_data HEIM_ANY_SET;

enum asn1_print_flags {
   ASN1_PRINT_INDENT = 1,
};

#define ASN1_MALLOC_ENCODE(T, B, BL, S, L, R)                  \
  do {                                                         \
    (BL) = length_##T((S));                                    \
    (B) = calloc(1, (BL));                                     \
    if((B) == NULL) {                                          \
      *(L) = 0;                                                \
      (R) = ENOMEM;                                            \
    } else {                                                   \
      (R) = encode_##T(((unsigned char*)(B)) + (BL) - 1, (BL), \
                       (S), (L));                              \
      if((R) != 0) {                                           \
        free((B));                                             \
        (B) = NULL;                                            \
        *(L) = 0;                                              \
      }                                                        \
    }                                                          \
  } while (0)

#ifdef _WIN32
#ifndef ASN1_LIB
#define ASN1EXP  __declspec(dllimport)
#else
#define ASN1EXP
#endif
#define ASN1CALL __stdcall
#else
#define ASN1EXP
#define ASN1CALL
#endif
#ifndef ENOTSUP
/* Very old MSVC CRTs lack ENOTSUP */
#define ENOTSUP EINVAL
#endif
struct units;

#endif

typedef enum NAME_TYPE {
  KRB5_NT_UNKNOWN = 0,
  KRB5_NT_PRINCIPAL = 1,
  KRB5_NT_SRV_INST = 2,
  KRB5_NT_SRV_HST = 3,
  KRB5_NT_SRV_XHST = 4,
  KRB5_NT_UID = 5,
  KRB5_NT_X500_PRINCIPAL = 6,
  KRB5_NT_SMTP_NAME = 7,
  KRB5_NT_ENTERPRISE_PRINCIPAL = 10,
  KRB5_NT_WELLKNOWN = 11,
  KRB5_NT_SRV_HST_DOMAIN = 12,
  KRB5_NT_ENT_PRINCIPAL_AND_ID = -130,
  KRB5_NT_MS_PRINCIPAL = -128,
  KRB5_NT_MS_PRINCIPAL_AND_ID = -129,
  KRB5_NT_NTLM = -1200,
  KRB5_NT_X509_GENERAL_NAME = -1201,
  KRB5_NT_GSS_HOSTBASED_SERVICE = -1202,
  KRB5_NT_CACHE_UUID = -1203,
  KRB5_NT_SRV_HST_NEEDS_CANON = -195894762
} NAME_TYPE;

typedef enum MESSAGE_TYPE {
  krb_as_req = 10,
  krb_as_rep = 11,
  krb_tgs_req = 12,
  krb_tgs_rep = 13,
  krb_ap_req = 14,
  krb_ap_rep = 15,
  krb_safe = 20,
  krb_priv = 21,
  krb_cred = 22,
  krb_error = 30
} MESSAGE_TYPE;

typedef enum PADATA_TYPE {
  KRB5_PADATA_NONE = 0,
  KRB5_PADATA_TGS_REQ = 1,
  KRB5_PADATA_AP_REQ = 1,
  KRB5_PADATA_ENC_TIMESTAMP = 2,
  KRB5_PADATA_PW_SALT = 3,
  KRB5_PADATA_ENC_UNIX_TIME = 5,
  KRB5_PADATA_SANDIA_SECUREID = 6,
  KRB5_PADATA_SESAME = 7,
  KRB5_PADATA_OSF_DCE = 8,
  KRB5_PADATA_CYBERSAFE_SECUREID = 9,
  KRB5_PADATA_AFS3_SALT = 10,
  KRB5_PADATA_ETYPE_INFO = 11,
  KRB5_PADATA_SAM_CHALLENGE = 12,
  KRB5_PADATA_SAM_RESPONSE = 13,
  KRB5_PADATA_PK_AS_REQ_19 = 14,
  KRB5_PADATA_PK_AS_REP_19 = 15,
  KRB5_PADATA_PK_AS_REQ_WIN = 15,
  KRB5_PADATA_PK_AS_REQ = 16,
  KRB5_PADATA_PK_AS_REP = 17,
  KRB5_PADATA_PA_PK_OCSP_RESPONSE = 18,
  KRB5_PADATA_ETYPE_INFO2 = 19,
  KRB5_PADATA_USE_SPECIFIED_KVNO = 20,
  KRB5_PADATA_SVR_REFERRAL_INFO = 20,
  KRB5_PADATA_SAM_REDIRECT = 21,
  KRB5_PADATA_GET_FROM_TYPED_DATA = 22,
  KRB5_PADATA_SAM_ETYPE_INFO = 23,
  KRB5_PADATA_SERVER_REFERRAL = 25,
  KRB5_PADATA_ALT_PRINC = 24,
  KRB5_PADATA_SAM_CHALLENGE2 = 30,
  KRB5_PADATA_SAM_RESPONSE2 = 31,
  KRB5_PA_EXTRA_TGT = 41,
  KRB5_PADATA_FX_FAST_ARMOR = 71,
  KRB5_PADATA_TD_KRB_PRINCIPAL = 102,
  KRB5_PADATA_PK_TD_TRUSTED_CERTIFIERS = 104,
  KRB5_PADATA_PK_TD_CERTIFICATE_INDEX = 105,
  KRB5_PADATA_TD_APP_DEFINED_ERROR = 106,
  KRB5_PADATA_TD_REQ_NONCE = 107,
  KRB5_PADATA_TD_REQ_SEQ = 108,
  KRB5_PADATA_PA_PAC_REQUEST = 128,
  KRB5_PADATA_FOR_USER = 129,
  KRB5_PADATA_FOR_X509_USER = 130,
  KRB5_PADATA_FOR_CHECK_DUPS = 131,
  KRB5_PADATA_AS_CHECKSUM = 132,
  KRB5_PADATA_PK_AS_09_BINDING = 132,
  KRB5_PADATA_FX_COOKIE = 133,
  KRB5_PADATA_AUTHENTICATION_SET = 134,
  KRB5_PADATA_AUTH_SET_SELECTED = 135,
  KRB5_PADATA_FX_FAST = 136,
  KRB5_PADATA_FX_ERROR = 137,
  KRB5_PADATA_ENCRYPTED_CHALLENGE = 138,
  KRB5_PADATA_OTP_CHALLENGE = 141,
  KRB5_PADATA_OTP_REQUEST = 142,
  KBB5_PADATA_OTP_CONFIRM = 143,
  KRB5_PADATA_OTP_PIN_CHANGE = 144,
  KRB5_PADATA_EPAK_AS_REQ = 145,
  KRB5_PADATA_EPAK_AS_REP = 146,
  KRB5_PADATA_PKINIT_KX = 147,
  KRB5_PADATA_PKU2U_NAME = 148,
  KRB5_PADATA_REQ_ENC_PA_REP = 149,
  KRB5_PADATA_AS_FRESHNESS = 150,
  KER5_PADATA_KERB_KEY_LIST_REQ = 161,
  KER5_PADATA_KERB_PAKEY_LIST_REP = 162,
  KRB5_PADATA_SUPPORTED_ETYPES = 165,
  KRB5_PADATA_PAC_OPTIONS = 167,
  KRB5_PADATA_GSS = 655
} PADATA_TYPE;

typedef enum AUTHDATA_TYPE {
  KRB5_AUTHDATA_IF_RELEVANT = 1,
  KRB5_AUTHDATA_INTENDED_FOR_SERVER = 2,
  KRB5_AUTHDATA_INTENDED_FOR_APPLICATION_CLASS = 3,
  KRB5_AUTHDATA_KDC_ISSUED = 4,
  KRB5_AUTHDATA_AND_OR = 5,
  KRB5_AUTHDATA_MANDATORY_TICKET_EXTENSIONS = 6,
  KRB5_AUTHDATA_IN_TICKET_EXTENSIONS = 7,
  KRB5_AUTHDATA_MANDATORY_FOR_KDC = 8,
  KRB5_AUTHDATA_INITIAL_VERIFIED_CAS = 9,
  KRB5_AUTHDATA_OSF_DCE = 64,
  KRB5_AUTHDATA_SESAME = 65,
  KRB5_AUTHDATA_OSF_DCE_PKI_CERTID = 66,
  KRB5_AUTHDATA_AUTHENTICATION_STRENGTH = 70,
  KRB5_AUTHDATA_FX_FAST_ARMOR = 71,
  KRB5_AUTHDATA_FX_FAST_USED = 72,
  KRB5_AUTHDATA_WIN2K_PAC = 128,
  KRB5_AUTHDATA_GSS_API_ETYPE_NEGOTIATION = 129,
  KRB5_AUTHDATA_SIGNTICKET_OLDER = -17,
  KRB5_AUTHDATA_SIGNTICKET_OLD = 142,
  KRB5_AUTHDATA_SIGNTICKET = 512,
  KRB5_AUTHDATA_SYNTHETIC_PRINC_USED = 513,
  KRB5_AUTHDATA_KERB_LOCAL = 141,
  KRB5_AUTHDATA_TOKEN_RESTRICTIONS = 142,
  KRB5_AUTHDATA_AP_OPTIONS = 143,
  KRB5_AUTHDATA_TARGET_PRINCIPAL = 144,
  KRB5_AUTHDATA_ON_BEHALF_OF = 580,
  KRB5_AUTHDATA_BEARER_TOKEN_JWT = 581,
  KRB5_AUTHDATA_BEARER_TOKEN_SAML = 582,
  KRB5_AUTHDATA_BEARER_TOKEN_OIDC = 583,
  KRB5_AUTHDATA_CSR_AUTHORIZED = 584,
  KRB5_AUTHDATA_GSS_COMPOSITE_NAME = 655
} AUTHDATA_TYPE;

typedef enum CKSUMTYPE {
  CKSUMTYPE_NONE = 0,
  CKSUMTYPE_CRC32 = 1,
  CKSUMTYPE_RSA_MD4 = 2,
  CKSUMTYPE_RSA_MD4_DES = 3,
  CKSUMTYPE_DES_MAC = 4,
  CKSUMTYPE_DES_MAC_K = 5,
  CKSUMTYPE_RSA_MD4_DES_K = 6,
  CKSUMTYPE_RSA_MD5 = 7,
  CKSUMTYPE_RSA_MD5_DES = 8,
  CKSUMTYPE_RSA_MD5_DES3 = 9,
  CKSUMTYPE_SHA1_OTHER = 10,
  CKSUMTYPE_HMAC_SHA1_DES3 = 12,
  CKSUMTYPE_SHA1 = 14,
  CKSUMTYPE_HMAC_SHA1_96_AES_128 = 15,
  CKSUMTYPE_HMAC_SHA1_96_AES_256 = 16,
  CKSUMTYPE_HMAC_SHA256_128_AES128 = 19,
  CKSUMTYPE_HMAC_SHA384_192_AES256 = 20,
  CKSUMTYPE_GSSAPI = 32771,
  CKSUMTYPE_HMAC_MD5 = -138,
  CKSUMTYPE_HMAC_MD5_ENC = -1138,
  CKSUMTYPE_SHA256 = -21,
  CKSUMTYPE_SHA384 = -22,
  CKSUMTYPE_SHA512 = -23
} CKSUMTYPE;

typedef enum ENCTYPE {
  KRB5_ENCTYPE_NULL = 0,
  KRB5_ENCTYPE_DES_CBC_CRC = 1,
  KRB5_ENCTYPE_DES_CBC_MD4 = 2,
  KRB5_ENCTYPE_DES_CBC_MD5 = 3,
  KRB5_ENCTYPE_DES3_CBC_MD5 = 5,
  KRB5_ENCTYPE_OLD_DES3_CBC_SHA1 = 7,
  KRB5_ENCTYPE_SIGN_DSA_GENERATE = 8,
  KRB5_ENCTYPE_ENCRYPT_RSA_PRIV = 9,
  KRB5_ENCTYPE_ENCRYPT_RSA_PUB = 10,
  KRB5_ENCTYPE_DES3_CBC_SHA1 = 16,
  KRB5_ENCTYPE_AES128_CTS_HMAC_SHA1_96 = 17,
  KRB5_ENCTYPE_AES256_CTS_HMAC_SHA1_96 = 18,
  KRB5_ENCTYPE_AES128_CTS_HMAC_SHA256_128 = 19,
  KRB5_ENCTYPE_AES256_CTS_HMAC_SHA384_192 = 20,
  KRB5_ENCTYPE_ARCFOUR_HMAC_MD5 = 23,
  KRB5_ENCTYPE_ARCFOUR_HMAC_MD5_56 = 24,
  KRB5_ENCTYPE_ENCTYPE_PK_CROSS = 48,
  KRB5_ENCTYPE_ARCFOUR_MD4 = -128,
  KRB5_ENCTYPE_ARCFOUR_HMAC_OLD = -133,
  KRB5_ENCTYPE_ARCFOUR_HMAC_OLD_EXP = -135,
  KRB5_ENCTYPE_DES_CBC_NONE = -4096,
  KRB5_ENCTYPE_DES3_CBC_NONE = -4097,
  KRB5_ENCTYPE_DES_CFB64_NONE = -4098,
  KRB5_ENCTYPE_DES_PCBC_NONE = -4099,
  KRB5_ENCTYPE_DIGEST_MD5_NONE = -4100,
  KRB5_ENCTYPE_CRAM_MD5_NONE = -4101
} ENCTYPE;

typedef unsigned int Krb5UInt32;

typedef int Krb5Int32;

typedef heim_general_string KerberosString;

typedef heim_general_string Realm;

typedef struct PrincipalName PrincipalName;

typedef struct HostAddress HostAddress;

typedef struct HostAddresses HostAddresses;

typedef time_t KerberosTime;

typedef struct AuthorizationDataElement AuthorizationDataElement;

typedef struct AuthorizationData AuthorizationData;

typedef struct APOptions {
  unsigned int reserved:1;
  unsigned int use_session_key:1;
  unsigned int mutual_required:1;
  unsigned int _unused3:1;
  unsigned int _unused4:1;
  unsigned int _unused5:1;
  unsigned int _unused6:1;
  unsigned int _unused7:1;
  unsigned int _unused8:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int _unused14:1;
  unsigned int _unused15:1;
  unsigned int _unused16:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int _unused30:1;
  unsigned int _unused31:1;
} APOptions;


typedef struct TicketFlags {
  unsigned int reserved:1;
  unsigned int forwardable:1;
  unsigned int forwarded:1;
  unsigned int proxiable:1;
  unsigned int proxy:1;
  unsigned int may_postdate:1;
  unsigned int postdated:1;
  unsigned int invalid:1;
  unsigned int renewable:1;
  unsigned int initial:1;
  unsigned int pre_authent:1;
  unsigned int hw_authent:1;
  unsigned int transited_policy_checked:1;
  unsigned int ok_as_delegate:1;
  unsigned int _unused14:1;
  unsigned int enc_pa_rep:1;
  unsigned int anonymous:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int _unused30:1;
  unsigned int _unused31:1;
} TicketFlags;


typedef struct KDCOptions {
  unsigned int reserved:1;
  unsigned int forwardable:1;
  unsigned int forwarded:1;
  unsigned int proxiable:1;
  unsigned int proxy:1;
  unsigned int allow_postdate:1;
  unsigned int postdated:1;
  unsigned int _unused7:1;
  unsigned int renewable:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int cname_in_addl_tkt:1;
  unsigned int canonicalize:1;
  unsigned int request_anonymous:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int disable_transited_check:1;
  unsigned int renewable_ok:1;
  unsigned int enc_tkt_in_skey:1;
  unsigned int _unused29:1;
  unsigned int renew:1;
  unsigned int validate:1;
} KDCOptions;


typedef enum LR_TYPE {
  LR_NONE = 0,
  LR_INITIAL_TGT = 1,
  LR_INITIAL = 2,
  LR_ISSUE_USE_TGT = 3,
  LR_RENEWAL = 4,
  LR_REQUEST = 5,
  LR_PW_EXPTIME = 6,
  LR_ACCT_EXPTIME = 7
} LR_TYPE;

typedef struct LastReq LastReq;

typedef struct EncryptedData EncryptedData;

typedef struct EncryptionKey EncryptionKey;

typedef struct TransitedEncoding TransitedEncoding;

typedef struct Ticket Ticket;

typedef struct EncTicketPart EncTicketPart;

typedef struct Checksum Checksum;

typedef struct PrincipalNameAttrSrc PrincipalNameAttrSrc;

typedef struct PrincipalNameAttrs PrincipalNameAttrs;

typedef struct CompositePrincipal CompositePrincipal;

typedef struct Principal Principal;

typedef struct Principals Principals;

typedef struct Authenticator Authenticator;

typedef struct PA_DATA PA_DATA;

typedef struct ETYPE_INFO_ENTRY ETYPE_INFO_ENTRY;

typedef struct ETYPE_INFO ETYPE_INFO;

typedef struct ETYPE_INFO2_ENTRY ETYPE_INFO2_ENTRY;

typedef struct ETYPE_INFO2 ETYPE_INFO2;

typedef struct METHOD_DATA METHOD_DATA;

typedef struct TypedData TypedData;

typedef struct TYPED_DATA TYPED_DATA;

typedef struct KDC_REQ_BODY KDC_REQ_BODY;

typedef struct KDC_REQ KDC_REQ;

typedef KDC_REQ AS_REQ;

typedef KDC_REQ TGS_REQ;

typedef struct PA_ENC_TS_ENC PA_ENC_TS_ENC;

typedef struct PA_PAC_REQUEST PA_PAC_REQUEST;

typedef struct KERB_ERROR_DATA KERB_ERROR_DATA;

typedef enum KerbErrorDataType {
  kERB_AP_ERR_TYPE_SKEW_RECOVERY = 2,
  kERB_ERR_TYPE_EXTENDED = 3
} KerbErrorDataType;

typedef struct PAC_OPTIONS_FLAGS {
  unsigned int claims:1;
  unsigned int branch_aware:1;
  unsigned int forward_to_full_dc:1;
  unsigned int resource_based_constrained_delegation:1;
  unsigned int _unused4:1;
  unsigned int _unused5:1;
  unsigned int _unused6:1;
  unsigned int _unused7:1;
  unsigned int _unused8:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int _unused14:1;
  unsigned int _unused15:1;
  unsigned int _unused16:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int _unused30:1;
  unsigned int _unused31:1;
} PAC_OPTIONS_FLAGS;


typedef struct PA_PAC_OPTIONS PA_PAC_OPTIONS;

typedef struct KERB_AD_RESTRICTION_ENTRY KERB_AD_RESTRICTION_ENTRY;

typedef struct PA_KERB_KEY_LIST_REQ PA_KERB_KEY_LIST_REQ;

typedef struct PA_KERB_KEY_LIST_REP PA_KERB_KEY_LIST_REP;

typedef heim_general_string PROV_SRV_LOCATION;

typedef struct KDC_REP KDC_REP;

typedef KDC_REP AS_REP;

typedef KDC_REP TGS_REP;

typedef struct EncKDCRepPart EncKDCRepPart;

typedef EncKDCRepPart EncASRepPart;

typedef EncKDCRepPart EncTGSRepPart;

typedef struct AP_REQ AP_REQ;

typedef struct AP_REP AP_REP;

typedef struct EncAPRepPart EncAPRepPart;

typedef struct KRB_SAFE_BODY KRB_SAFE_BODY;

typedef struct KRB_SAFE KRB_SAFE;

typedef struct KRB_PRIV KRB_PRIV;

typedef struct EncKrbPrivPart EncKrbPrivPart;

typedef struct KRB_CRED KRB_CRED;

typedef struct KrbCredInfo KrbCredInfo;

typedef struct EncKrbCredPart EncKrbCredPart;

typedef struct KRB_ERROR KRB_ERROR;

typedef struct ChangePasswdDataMS ChangePasswdDataMS;

typedef struct EtypeList EtypeList;

#ifdef krb5_pvno
#undef krb5_pvno
#endif
enum { krb5_pvno = 5 };

#ifdef domain_X500_Compress
#undef domain_X500_Compress
#endif
enum { domain_X500_Compress = 1 };

typedef AuthorizationData AD_IF_RELEVANT;

typedef struct AD_KDCIssued AD_KDCIssued;

typedef struct AD_AND_OR AD_AND_OR;

typedef AuthorizationData AD_MANDATORY_FOR_KDC;

typedef enum PA_SAM_TYPE {
  PA_SAM_TYPE_ENIGMA = 1,
  PA_SAM_TYPE_DIGI_PATH = 2,
  PA_SAM_TYPE_SKEY_K0 = 3,
  PA_SAM_TYPE_SKEY = 4,
  PA_SAM_TYPE_SECURID = 5,
  PA_SAM_TYPE_CRYPTOCARD = 6
} PA_SAM_TYPE;

typedef HostAddresses PA_SAM_REDIRECT;

typedef struct SAMFlags {
  unsigned int use_sad_as_key:1;
  unsigned int send_encrypted_sad:1;
  unsigned int must_pk_encrypt_sad:1;
  unsigned int _unused3:1;
  unsigned int _unused4:1;
  unsigned int _unused5:1;
  unsigned int _unused6:1;
  unsigned int _unused7:1;
  unsigned int _unused8:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int _unused14:1;
  unsigned int _unused15:1;
  unsigned int _unused16:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int _unused30:1;
  unsigned int _unused31:1;
} SAMFlags;


typedef struct PA_SAM_CHALLENGE_2_BODY PA_SAM_CHALLENGE_2_BODY;

typedef struct PA_SAM_CHALLENGE_2 PA_SAM_CHALLENGE_2;

typedef struct PA_SAM_RESPONSE_2 PA_SAM_RESPONSE_2;

typedef struct PA_ENC_SAM_RESPONSE_ENC PA_ENC_SAM_RESPONSE_ENC;

typedef struct PA_S4U2Self PA_S4U2Self;

typedef struct PA_S4U_X509_USER PA_S4U_X509_USER;

typedef struct S4UUserID S4UUserID;

typedef struct AD_LoginAlias AD_LoginAlias;

typedef struct PA_SvrReferralData PA_SvrReferralData;

typedef EncryptedData PA_SERVER_REFERRAL_DATA;

typedef struct PA_ServerReferralData PA_ServerReferralData;

typedef struct FastOptions {
  unsigned int reserved:1;
  unsigned int hide_client_names:1;
  unsigned int critical2:1;
  unsigned int critical3:1;
  unsigned int critical4:1;
  unsigned int critical5:1;
  unsigned int critical6:1;
  unsigned int critical7:1;
  unsigned int critical8:1;
  unsigned int critical9:1;
  unsigned int critical10:1;
  unsigned int critical11:1;
  unsigned int critical12:1;
  unsigned int critical13:1;
  unsigned int critical14:1;
  unsigned int critical15:1;
  unsigned int kdc_follow_referrals:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int _unused30:1;
  unsigned int _unused31:1;
} FastOptions;


typedef struct KrbFastReq KrbFastReq;

typedef struct KrbFastArmor KrbFastArmor;

typedef struct KrbFastArmoredReq KrbFastArmoredReq;

typedef struct PA_FX_FAST_REQUEST PA_FX_FAST_REQUEST;

typedef struct KrbFastFinished KrbFastFinished;

typedef struct KrbFastResponse KrbFastResponse;

typedef struct KrbFastArmoredRep KrbFastArmoredRep;

typedef struct PA_FX_FAST_REPLY PA_FX_FAST_REPLY;

typedef struct KDCFastFlags {
  unsigned int use_reply_key:1;
  unsigned int reply_key_used:1;
  unsigned int reply_key_replaced:1;
  unsigned int kdc_verified:1;
  unsigned int requested_hidden_names:1;
  unsigned int _unused5:1;
  unsigned int _unused6:1;
  unsigned int _unused7:1;
  unsigned int _unused8:1;
  unsigned int _unused9:1;
  unsigned int _unused10:1;
  unsigned int _unused11:1;
  unsigned int _unused12:1;
  unsigned int _unused13:1;
  unsigned int _unused14:1;
  unsigned int _unused15:1;
  unsigned int _unused16:1;
  unsigned int _unused17:1;
  unsigned int _unused18:1;
  unsigned int _unused19:1;
  unsigned int _unused20:1;
  unsigned int _unused21:1;
  unsigned int _unused22:1;
  unsigned int _unused23:1;
  unsigned int _unused24:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int _unused30:1;
  unsigned int _unused31:1;
} KDCFastFlags;


typedef struct KDCFastState KDCFastState;

typedef struct KDCFastCookie KDCFastCookie;

typedef struct KDC_PROXY_MESSAGE KDC_PROXY_MESSAGE;

typedef struct KERB_TIMES KERB_TIMES;

typedef struct KERB_CRED KERB_CRED;

typedef struct KERB_TGS_REQ_IN KERB_TGS_REQ_IN;

typedef struct KERB_TGS_REQ_OUT KERB_TGS_REQ_OUT;

typedef struct KERB_TGS_REP_IN KERB_TGS_REP_IN;

typedef struct KERB_TGS_REP_OUT KERB_TGS_REP_OUT;

typedef struct KERB_ARMOR_SERVICE_REPLY KERB_ARMOR_SERVICE_REPLY;

/*
NAME-TYPE ::= INTEGER {
  KRB5_NT_UNKNOWN(0),
  KRB5_NT_PRINCIPAL(1),
  KRB5_NT_SRV_INST(2),
  KRB5_NT_SRV_HST(3),
  KRB5_NT_SRV_XHST(4),
  KRB5_NT_UID(5),
  KRB5_NT_X500_PRINCIPAL(6),
  KRB5_NT_SMTP_NAME(7),
  KRB5_NT_ENTERPRISE_PRINCIPAL(10),
  KRB5_NT_WELLKNOWN(11),
  KRB5_NT_SRV_HST_DOMAIN(12),
  KRB5_NT_ENT_PRINCIPAL_AND_ID(-130),
  KRB5_NT_MS_PRINCIPAL(-128),
  KRB5_NT_MS_PRINCIPAL_AND_ID(-129),
  KRB5_NT_NTLM(-1200),
  KRB5_NT_X509_GENERAL_NAME(-1201),
  KRB5_NT_GSS_HOSTBASED_SERVICE(-1202),
  KRB5_NT_CACHE_UUID(-1203),
  KRB5_NT_SRV_HST_NEEDS_CANON(-195894762)
}
*/

enum { asn1_tag_length_NAME_TYPE = 1,
       asn1_tag_class_NAME_TYPE = 0,
       asn1_tag_tag_NAME_TYPE = 2 };
ASN1EXP int    ASN1CALL decode_NAME_TYPE(const unsigned char *, size_t, NAME_TYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_NAME_TYPE(unsigned char *, size_t, const NAME_TYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_NAME_TYPE(const NAME_TYPE *);
ASN1EXP int    ASN1CALL copy_NAME_TYPE  (const NAME_TYPE *, NAME_TYPE *);
ASN1EXP void   ASN1CALL free_NAME_TYPE  (NAME_TYPE *);
ASN1EXP char * ASN1CALL print_NAME_TYPE (const NAME_TYPE *, int);


/*
MESSAGE-TYPE ::= INTEGER {
  krb_as_req(10),
  krb_as_rep(11),
  krb_tgs_req(12),
  krb_tgs_rep(13),
  krb_ap_req(14),
  krb_ap_rep(15),
  krb_safe(20),
  krb_priv(21),
  krb_cred(22),
  krb_error(30)
}
*/

enum { asn1_tag_length_MESSAGE_TYPE = 1,
       asn1_tag_class_MESSAGE_TYPE = 0,
       asn1_tag_tag_MESSAGE_TYPE = 2 };
/*
PADATA-TYPE ::= INTEGER {
  KRB5_PADATA_NONE(0),
  KRB5_PADATA_TGS_REQ(1),
  KRB5_PADATA_AP_REQ(1),
  KRB5_PADATA_ENC_TIMESTAMP(2),
  KRB5_PADATA_PW_SALT(3),
  KRB5_PADATA_ENC_UNIX_TIME(5),
  KRB5_PADATA_SANDIA_SECUREID(6),
  KRB5_PADATA_SESAME(7),
  KRB5_PADATA_OSF_DCE(8),
  KRB5_PADATA_CYBERSAFE_SECUREID(9),
  KRB5_PADATA_AFS3_SALT(10),
  KRB5_PADATA_ETYPE_INFO(11),
  KRB5_PADATA_SAM_CHALLENGE(12),
  KRB5_PADATA_SAM_RESPONSE(13),
  KRB5_PADATA_PK_AS_REQ_19(14),
  KRB5_PADATA_PK_AS_REP_19(15),
  KRB5_PADATA_PK_AS_REQ_WIN(15),
  KRB5_PADATA_PK_AS_REQ(16),
  KRB5_PADATA_PK_AS_REP(17),
  KRB5_PADATA_PA_PK_OCSP_RESPONSE(18),
  KRB5_PADATA_ETYPE_INFO2(19),
  KRB5_PADATA_USE_SPECIFIED_KVNO(20),
  KRB5_PADATA_SVR_REFERRAL_INFO(20),
  KRB5_PADATA_SAM_REDIRECT(21),
  KRB5_PADATA_GET_FROM_TYPED_DATA(22),
  KRB5_PADATA_SAM_ETYPE_INFO(23),
  KRB5_PADATA_SERVER_REFERRAL(25),
  KRB5_PADATA_ALT_PRINC(24),
  KRB5_PADATA_SAM_CHALLENGE2(30),
  KRB5_PADATA_SAM_RESPONSE2(31),
  KRB5_PA_EXTRA_TGT(41),
  KRB5_PADATA_FX_FAST_ARMOR(71),
  KRB5_PADATA_TD_KRB_PRINCIPAL(102),
  KRB5_PADATA_PK_TD_TRUSTED_CERTIFIERS(104),
  KRB5_PADATA_PK_TD_CERTIFICATE_INDEX(105),
  KRB5_PADATA_TD_APP_DEFINED_ERROR(106),
  KRB5_PADATA_TD_REQ_NONCE(107),
  KRB5_PADATA_TD_REQ_SEQ(108),
  KRB5_PADATA_PA_PAC_REQUEST(128),
  KRB5_PADATA_FOR_USER(129),
  KRB5_PADATA_FOR_X509_USER(130),
  KRB5_PADATA_FOR_CHECK_DUPS(131),
  KRB5_PADATA_AS_CHECKSUM(132),
  KRB5_PADATA_PK_AS_09_BINDING(132),
  KRB5_PADATA_FX_COOKIE(133),
  KRB5_PADATA_AUTHENTICATION_SET(134),
  KRB5_PADATA_AUTH_SET_SELECTED(135),
  KRB5_PADATA_FX_FAST(136),
  KRB5_PADATA_FX_ERROR(137),
  KRB5_PADATA_ENCRYPTED_CHALLENGE(138),
  KRB5_PADATA_OTP_CHALLENGE(141),
  KRB5_PADATA_OTP_REQUEST(142),
  KBB5_PADATA_OTP_CONFIRM(143),
  KRB5_PADATA_OTP_PIN_CHANGE(144),
  KRB5_PADATA_EPAK_AS_REQ(145),
  KRB5_PADATA_EPAK_AS_REP(146),
  KRB5_PADATA_PKINIT_KX(147),
  KRB5_PADATA_PKU2U_NAME(148),
  KRB5_PADATA_REQ_ENC_PA_REP(149),
  KRB5_PADATA_AS_FRESHNESS(150),
  KER5_PADATA_KERB_KEY_LIST_REQ(161),
  KER5_PADATA_KERB_PAKEY_LIST_REP(162),
  KRB5_PADATA_SUPPORTED_ETYPES(165),
  KRB5_PADATA_PAC_OPTIONS(167),
  KRB5_PADATA_GSS(655)
}
*/

enum { asn1_tag_length_PADATA_TYPE = 1,
       asn1_tag_class_PADATA_TYPE = 0,
       asn1_tag_tag_PADATA_TYPE = 2 };
ASN1EXP int    ASN1CALL decode_PADATA_TYPE(const unsigned char *, size_t, PADATA_TYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_PADATA_TYPE(unsigned char *, size_t, const PADATA_TYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_PADATA_TYPE(const PADATA_TYPE *);
ASN1EXP int    ASN1CALL copy_PADATA_TYPE  (const PADATA_TYPE *, PADATA_TYPE *);
ASN1EXP void   ASN1CALL free_PADATA_TYPE  (PADATA_TYPE *);
ASN1EXP char * ASN1CALL print_PADATA_TYPE (const PADATA_TYPE *, int);


/*
AUTHDATA-TYPE ::= INTEGER {
  KRB5_AUTHDATA_IF_RELEVANT(1),
  KRB5_AUTHDATA_INTENDED_FOR_SERVER(2),
  KRB5_AUTHDATA_INTENDED_FOR_APPLICATION_CLASS(3),
  KRB5_AUTHDATA_KDC_ISSUED(4),
  KRB5_AUTHDATA_AND_OR(5),
  KRB5_AUTHDATA_MANDATORY_TICKET_EXTENSIONS(6),
  KRB5_AUTHDATA_IN_TICKET_EXTENSIONS(7),
  KRB5_AUTHDATA_MANDATORY_FOR_KDC(8),
  KRB5_AUTHDATA_INITIAL_VERIFIED_CAS(9),
  KRB5_AUTHDATA_OSF_DCE(64),
  KRB5_AUTHDATA_SESAME(65),
  KRB5_AUTHDATA_OSF_DCE_PKI_CERTID(66),
  KRB5_AUTHDATA_AUTHENTICATION_STRENGTH(70),
  KRB5_AUTHDATA_FX_FAST_ARMOR(71),
  KRB5_AUTHDATA_FX_FAST_USED(72),
  KRB5_AUTHDATA_WIN2K_PAC(128),
  KRB5_AUTHDATA_GSS_API_ETYPE_NEGOTIATION(129),
  KRB5_AUTHDATA_SIGNTICKET_OLDER(-17),
  KRB5_AUTHDATA_SIGNTICKET_OLD(142),
  KRB5_AUTHDATA_SIGNTICKET(512),
  KRB5_AUTHDATA_SYNTHETIC_PRINC_USED(513),
  KRB5_AUTHDATA_KERB_LOCAL(141),
  KRB5_AUTHDATA_TOKEN_RESTRICTIONS(142),
  KRB5_AUTHDATA_AP_OPTIONS(143),
  KRB5_AUTHDATA_TARGET_PRINCIPAL(144),
  KRB5_AUTHDATA_ON_BEHALF_OF(580),
  KRB5_AUTHDATA_BEARER_TOKEN_JWT(581),
  KRB5_AUTHDATA_BEARER_TOKEN_SAML(582),
  KRB5_AUTHDATA_BEARER_TOKEN_OIDC(583),
  KRB5_AUTHDATA_CSR_AUTHORIZED(584),
  KRB5_AUTHDATA_GSS_COMPOSITE_NAME(655)
}
*/

enum { asn1_tag_length_AUTHDATA_TYPE = 1,
       asn1_tag_class_AUTHDATA_TYPE = 0,
       asn1_tag_tag_AUTHDATA_TYPE = 2 };
ASN1EXP int    ASN1CALL decode_AUTHDATA_TYPE(const unsigned char *, size_t, AUTHDATA_TYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_AUTHDATA_TYPE(unsigned char *, size_t, const AUTHDATA_TYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_AUTHDATA_TYPE(const AUTHDATA_TYPE *);
ASN1EXP int    ASN1CALL copy_AUTHDATA_TYPE  (const AUTHDATA_TYPE *, AUTHDATA_TYPE *);
ASN1EXP void   ASN1CALL free_AUTHDATA_TYPE  (AUTHDATA_TYPE *);
ASN1EXP char * ASN1CALL print_AUTHDATA_TYPE (const AUTHDATA_TYPE *, int);


/*
CKSUMTYPE ::= INTEGER {
  CKSUMTYPE_NONE(0),
  CKSUMTYPE_CRC32(1),
  CKSUMTYPE_RSA_MD4(2),
  CKSUMTYPE_RSA_MD4_DES(3),
  CKSUMTYPE_DES_MAC(4),
  CKSUMTYPE_DES_MAC_K(5),
  CKSUMTYPE_RSA_MD4_DES_K(6),
  CKSUMTYPE_RSA_MD5(7),
  CKSUMTYPE_RSA_MD5_DES(8),
  CKSUMTYPE_RSA_MD5_DES3(9),
  CKSUMTYPE_SHA1_OTHER(10),
  CKSUMTYPE_HMAC_SHA1_DES3(12),
  CKSUMTYPE_SHA1(14),
  CKSUMTYPE_HMAC_SHA1_96_AES_128(15),
  CKSUMTYPE_HMAC_SHA1_96_AES_256(16),
  CKSUMTYPE_HMAC_SHA256_128_AES128(19),
  CKSUMTYPE_HMAC_SHA384_192_AES256(20),
  CKSUMTYPE_GSSAPI(32771),
  CKSUMTYPE_HMAC_MD5(-138),
  CKSUMTYPE_HMAC_MD5_ENC(-1138),
  CKSUMTYPE_SHA256(-21),
  CKSUMTYPE_SHA384(-22),
  CKSUMTYPE_SHA512(-23)
}
*/

enum { asn1_tag_length_CKSUMTYPE = 1,
       asn1_tag_class_CKSUMTYPE = 0,
       asn1_tag_tag_CKSUMTYPE = 2 };
ASN1EXP int    ASN1CALL decode_CKSUMTYPE(const unsigned char *, size_t, CKSUMTYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_CKSUMTYPE(unsigned char *, size_t, const CKSUMTYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_CKSUMTYPE(const CKSUMTYPE *);
ASN1EXP int    ASN1CALL copy_CKSUMTYPE  (const CKSUMTYPE *, CKSUMTYPE *);
ASN1EXP void   ASN1CALL free_CKSUMTYPE  (CKSUMTYPE *);
ASN1EXP char * ASN1CALL print_CKSUMTYPE (const CKSUMTYPE *, int);


/*
ENCTYPE ::= INTEGER {
  KRB5_ENCTYPE_NULL(0),
  KRB5_ENCTYPE_DES_CBC_CRC(1),
  KRB5_ENCTYPE_DES_CBC_MD4(2),
  KRB5_ENCTYPE_DES_CBC_MD5(3),
  KRB5_ENCTYPE_DES3_CBC_MD5(5),
  KRB5_ENCTYPE_OLD_DES3_CBC_SHA1(7),
  KRB5_ENCTYPE_SIGN_DSA_GENERATE(8),
  KRB5_ENCTYPE_ENCRYPT_RSA_PRIV(9),
  KRB5_ENCTYPE_ENCRYPT_RSA_PUB(10),
  KRB5_ENCTYPE_DES3_CBC_SHA1(16),
  KRB5_ENCTYPE_AES128_CTS_HMAC_SHA1_96(17),
  KRB5_ENCTYPE_AES256_CTS_HMAC_SHA1_96(18),
  KRB5_ENCTYPE_AES128_CTS_HMAC_SHA256_128(19),
  KRB5_ENCTYPE_AES256_CTS_HMAC_SHA384_192(20),
  KRB5_ENCTYPE_ARCFOUR_HMAC_MD5(23),
  KRB5_ENCTYPE_ARCFOUR_HMAC_MD5_56(24),
  KRB5_ENCTYPE_ENCTYPE_PK_CROSS(48),
  KRB5_ENCTYPE_ARCFOUR_MD4(-128),
  KRB5_ENCTYPE_ARCFOUR_HMAC_OLD(-133),
  KRB5_ENCTYPE_ARCFOUR_HMAC_OLD_EXP(-135),
  KRB5_ENCTYPE_DES_CBC_NONE(-4096),
  KRB5_ENCTYPE_DES3_CBC_NONE(-4097),
  KRB5_ENCTYPE_DES_CFB64_NONE(-4098),
  KRB5_ENCTYPE_DES_PCBC_NONE(-4099),
  KRB5_ENCTYPE_DIGEST_MD5_NONE(-4100),
  KRB5_ENCTYPE_CRAM_MD5_NONE(-4101)
}
*/

enum { asn1_tag_length_ENCTYPE = 1,
       asn1_tag_class_ENCTYPE = 0,
       asn1_tag_tag_ENCTYPE = 2 };
ASN1EXP int    ASN1CALL decode_ENCTYPE(const unsigned char *, size_t, ENCTYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_ENCTYPE(unsigned char *, size_t, const ENCTYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_ENCTYPE(const ENCTYPE *);
ASN1EXP int    ASN1CALL copy_ENCTYPE  (const ENCTYPE *, ENCTYPE *);
ASN1EXP void   ASN1CALL free_ENCTYPE  (ENCTYPE *);
ASN1EXP char * ASN1CALL print_ENCTYPE (const ENCTYPE *, int);


/*
Krb5UInt32 ::= INTEGER (0..4294967295)
*/

enum { asn1_tag_length_Krb5UInt32 = 1,
       asn1_tag_class_Krb5UInt32 = 0,
       asn1_tag_tag_Krb5UInt32 = 2 };
/*
Krb5Int32 ::= INTEGER (-2147483648..2147483647)
*/

enum { asn1_tag_length_Krb5Int32 = 1,
       asn1_tag_class_Krb5Int32 = 0,
       asn1_tag_tag_Krb5Int32 = 2 };
/*
KerberosString ::= GeneralString
*/

enum { asn1_tag_length_KerberosString = 1,
       asn1_tag_class_KerberosString = 0,
       asn1_tag_tag_KerberosString = 27 };
ASN1EXP int    ASN1CALL decode_KerberosString(const unsigned char *, size_t, KerberosString *, size_t *);
ASN1EXP int    ASN1CALL encode_KerberosString(unsigned char *, size_t, const KerberosString *, size_t *);
ASN1EXP size_t ASN1CALL length_KerberosString(const KerberosString *);
ASN1EXP int    ASN1CALL copy_KerberosString  (const KerberosString *, KerberosString *);
ASN1EXP void   ASN1CALL free_KerberosString  (KerberosString *);
ASN1EXP char * ASN1CALL print_KerberosString (const KerberosString *, int);


/*
Realm ::= GeneralString
*/

enum { asn1_tag_length_Realm = 1,
       asn1_tag_class_Realm = 0,
       asn1_tag_tag_Realm = 27 };
ASN1EXP int    ASN1CALL decode_Realm(const unsigned char *, size_t, Realm *, size_t *);
ASN1EXP int    ASN1CALL encode_Realm(unsigned char *, size_t, const Realm *, size_t *);
ASN1EXP size_t ASN1CALL length_Realm(const Realm *);
ASN1EXP int    ASN1CALL copy_Realm  (const Realm *, Realm *);
ASN1EXP void   ASN1CALL free_Realm  (Realm *);
ASN1EXP char * ASN1CALL print_Realm (const Realm *, int);


/*
PrincipalName ::= SEQUENCE {
  name-type       [0] NAME-TYPE,
  name-string     [1] SEQUENCE OF GeneralString,
}
*/

enum { asn1_tag_length_PrincipalName = 1,
       asn1_tag_class_PrincipalName = 0,
       asn1_tag_tag_PrincipalName = 16 };
struct PrincipalName {
  NAME_TYPE name_type;
  struct PrincipalName_name_string {
    unsigned int len;
    heim_general_string *val;
  } name_string;
};

ASN1EXP int    ASN1CALL decode_PrincipalName(const unsigned char *, size_t, PrincipalName *, size_t *);
ASN1EXP int    ASN1CALL encode_PrincipalName(unsigned char *, size_t, const PrincipalName *, size_t *);
ASN1EXP size_t ASN1CALL length_PrincipalName(const PrincipalName *);
ASN1EXP int    ASN1CALL copy_PrincipalName  (const PrincipalName *, PrincipalName *);
ASN1EXP void   ASN1CALL free_PrincipalName  (PrincipalName *);
ASN1EXP char * ASN1CALL print_PrincipalName (const PrincipalName *, int);


/*
HostAddress ::= SEQUENCE {
  addr-type       [0] Krb5Int32,
  address         [1] OCTET STRING,
}
*/

enum { asn1_tag_length_HostAddress = 1,
       asn1_tag_class_HostAddress = 0,
       asn1_tag_tag_HostAddress = 16 };
struct HostAddress {
  Krb5Int32 addr_type;
  heim_octet_string address;
};

ASN1EXP int    ASN1CALL decode_HostAddress(const unsigned char *, size_t, HostAddress *, size_t *);
ASN1EXP int    ASN1CALL encode_HostAddress(unsigned char *, size_t, const HostAddress *, size_t *);
ASN1EXP size_t ASN1CALL length_HostAddress(const HostAddress *);
ASN1EXP int    ASN1CALL copy_HostAddress  (const HostAddress *, HostAddress *);
ASN1EXP void   ASN1CALL free_HostAddress  (HostAddress *);
ASN1EXP char * ASN1CALL print_HostAddress (const HostAddress *, int);


/*
HostAddresses ::= SEQUENCE OF HostAddress
*/

enum { asn1_tag_length_HostAddresses = 1,
       asn1_tag_class_HostAddresses = 0,
       asn1_tag_tag_HostAddresses = 16 };
struct HostAddresses {
  unsigned int len;
  HostAddress *val;
};

ASN1EXP int    ASN1CALL decode_HostAddresses(const unsigned char *, size_t, HostAddresses *, size_t *);
ASN1EXP int    ASN1CALL encode_HostAddresses(unsigned char *, size_t, const HostAddresses *, size_t *);
ASN1EXP size_t ASN1CALL length_HostAddresses(const HostAddresses *);
ASN1EXP int    ASN1CALL copy_HostAddresses  (const HostAddresses *, HostAddresses *);
ASN1EXP void   ASN1CALL free_HostAddresses  (HostAddresses *);
ASN1EXP char * ASN1CALL print_HostAddresses (const HostAddresses *, int);


/*
KerberosTime ::= GeneralizedTime
*/

enum { asn1_tag_length_KerberosTime = 1,
       asn1_tag_class_KerberosTime = 0,
       asn1_tag_tag_KerberosTime = 24 };
ASN1EXP int    ASN1CALL decode_KerberosTime(const unsigned char *, size_t, KerberosTime *, size_t *);
ASN1EXP int    ASN1CALL encode_KerberosTime(unsigned char *, size_t, const KerberosTime *, size_t *);
ASN1EXP size_t ASN1CALL length_KerberosTime(const KerberosTime *);
ASN1EXP int    ASN1CALL copy_KerberosTime  (const KerberosTime *, KerberosTime *);
ASN1EXP void   ASN1CALL free_KerberosTime  (KerberosTime *);
ASN1EXP char * ASN1CALL print_KerberosTime (const KerberosTime *, int);


/*
AuthorizationDataElement ::= SEQUENCE {
  ad-type         [0] Krb5Int32,
  ad-data         [1] OCTET STRING,
}
*/

enum { asn1_tag_length_AuthorizationDataElement = 1,
       asn1_tag_class_AuthorizationDataElement = 0,
       asn1_tag_tag_AuthorizationDataElement = 16 };
struct AuthorizationDataElement {
  Krb5Int32 ad_type;
  heim_octet_string ad_data;
};

ASN1EXP int    ASN1CALL decode_AuthorizationDataElement(const unsigned char *, size_t, AuthorizationDataElement *, size_t *);
ASN1EXP int    ASN1CALL encode_AuthorizationDataElement(unsigned char *, size_t, const AuthorizationDataElement *, size_t *);
ASN1EXP size_t ASN1CALL length_AuthorizationDataElement(const AuthorizationDataElement *);
ASN1EXP int    ASN1CALL copy_AuthorizationDataElement  (const AuthorizationDataElement *, AuthorizationDataElement *);
ASN1EXP void   ASN1CALL free_AuthorizationDataElement  (AuthorizationDataElement *);
ASN1EXP char * ASN1CALL print_AuthorizationDataElement (const AuthorizationDataElement *, int);


/*
AuthorizationData ::= SEQUENCE OF AuthorizationDataElement
*/

enum { asn1_tag_length_AuthorizationData = 1,
       asn1_tag_class_AuthorizationData = 0,
       asn1_tag_tag_AuthorizationData = 16 };
struct AuthorizationData {
  unsigned int len;
  AuthorizationDataElement *val;
};

ASN1EXP int   ASN1CALL add_AuthorizationData  (AuthorizationData *, const AuthorizationDataElement *);
ASN1EXP int   ASN1CALL remove_AuthorizationData  (AuthorizationData *, unsigned int);
ASN1EXP int    ASN1CALL decode_AuthorizationData(const unsigned char *, size_t, AuthorizationData *, size_t *);
ASN1EXP int    ASN1CALL encode_AuthorizationData(unsigned char *, size_t, const AuthorizationData *, size_t *);
ASN1EXP size_t ASN1CALL length_AuthorizationData(const AuthorizationData *);
ASN1EXP int    ASN1CALL copy_AuthorizationData  (const AuthorizationData *, AuthorizationData *);
ASN1EXP void   ASN1CALL free_AuthorizationData  (AuthorizationData *);
ASN1EXP char * ASN1CALL print_AuthorizationData (const AuthorizationData *, int);


/*
APOptions ::= BIT STRING {
  reserved(0),
  use-session-key(1),
  mutual-required(2)
}
*/

enum { asn1_tag_length_APOptions = 1,
       asn1_tag_class_APOptions = 0,
       asn1_tag_tag_APOptions = 3 };
uint64_t APOptions2int(APOptions);
APOptions int2APOptions(uint64_t);
const struct units * asn1_APOptions_units(void);
/*
TicketFlags ::= BIT STRING {
  reserved(0),
  forwardable(1),
  forwarded(2),
  proxiable(3),
  proxy(4),
  may-postdate(5),
  postdated(6),
  invalid(7),
  renewable(8),
  initial(9),
  pre-authent(10),
  hw-authent(11),
  transited-policy-checked(12),
  ok-as-delegate(13),
  enc-pa-rep(15),
  anonymous(16)
}
*/

enum { asn1_tag_length_TicketFlags = 1,
       asn1_tag_class_TicketFlags = 0,
       asn1_tag_tag_TicketFlags = 3 };
uint64_t TicketFlags2int(TicketFlags);
TicketFlags int2TicketFlags(uint64_t);
const struct units * asn1_TicketFlags_units(void);
ASN1EXP int    ASN1CALL decode_TicketFlags(const unsigned char *, size_t, TicketFlags *, size_t *);
ASN1EXP int    ASN1CALL encode_TicketFlags(unsigned char *, size_t, const TicketFlags *, size_t *);
ASN1EXP size_t ASN1CALL length_TicketFlags(const TicketFlags *);
ASN1EXP int    ASN1CALL copy_TicketFlags  (const TicketFlags *, TicketFlags *);
ASN1EXP void   ASN1CALL free_TicketFlags  (TicketFlags *);
ASN1EXP char * ASN1CALL print_TicketFlags (const TicketFlags *, int);


/*
KDCOptions ::= BIT STRING {
  reserved(0),
  forwardable(1),
  forwarded(2),
  proxiable(3),
  proxy(4),
  allow-postdate(5),
  postdated(6),
  renewable(8),
  cname-in-addl-tkt(14),
  canonicalize(15),
  request-anonymous(16),
  disable-transited-check(26),
  renewable-ok(27),
  enc-tkt-in-skey(28),
  renew(30),
  validate(31)
}
*/

enum { asn1_tag_length_KDCOptions = 1,
       asn1_tag_class_KDCOptions = 0,
       asn1_tag_tag_KDCOptions = 3 };
uint64_t KDCOptions2int(KDCOptions);
KDCOptions int2KDCOptions(uint64_t);
const struct units * asn1_KDCOptions_units(void);
ASN1EXP int    ASN1CALL decode_KDCOptions(const unsigned char *, size_t, KDCOptions *, size_t *);
ASN1EXP int    ASN1CALL encode_KDCOptions(unsigned char *, size_t, const KDCOptions *, size_t *);
ASN1EXP size_t ASN1CALL length_KDCOptions(const KDCOptions *);
ASN1EXP int    ASN1CALL copy_KDCOptions  (const KDCOptions *, KDCOptions *);
ASN1EXP void   ASN1CALL free_KDCOptions  (KDCOptions *);
ASN1EXP char * ASN1CALL print_KDCOptions (const KDCOptions *, int);


/*
LR-TYPE ::= INTEGER {
  LR_NONE(0),
  LR_INITIAL_TGT(1),
  LR_INITIAL(2),
  LR_ISSUE_USE_TGT(3),
  LR_RENEWAL(4),
  LR_REQUEST(5),
  LR_PW_EXPTIME(6),
  LR_ACCT_EXPTIME(7)
}
*/

enum { asn1_tag_length_LR_TYPE = 1,
       asn1_tag_class_LR_TYPE = 0,
       asn1_tag_tag_LR_TYPE = 2 };
ASN1EXP int    ASN1CALL decode_LR_TYPE(const unsigned char *, size_t, LR_TYPE *, size_t *);
ASN1EXP int    ASN1CALL encode_LR_TYPE(unsigned char *, size_t, const LR_TYPE *, size_t *);
ASN1EXP size_t ASN1CALL length_LR_TYPE(const LR_TYPE *);
ASN1EXP int    ASN1CALL copy_LR_TYPE  (const LR_TYPE *, LR_TYPE *);
ASN1EXP void   ASN1CALL free_LR_TYPE  (LR_TYPE *);
ASN1EXP char * ASN1CALL print_LR_TYPE (const LR_TYPE *, int);


/*
LastReq ::= SEQUENCE OF SEQUENCE {
  lr-type         [0] LR-TYPE,
  lr-value        [1] KerberosTime,
}
*/

enum { asn1_tag_length_LastReq = 1,
       asn1_tag_class_LastReq = 0,
       asn1_tag_tag_LastReq = 16 };
struct LastReq {
  unsigned int len;
  struct LastReq_val {
    LR_TYPE lr_type;
    KerberosTime lr_value;
  } *val;
};

ASN1EXP int    ASN1CALL decode_LastReq(const unsigned char *, size_t, LastReq *, size_t *);
ASN1EXP int    ASN1CALL encode_LastReq(unsigned char *, size_t, const LastReq *, size_t *);
ASN1EXP size_t ASN1CALL length_LastReq(const LastReq *);
ASN1EXP int    ASN1CALL copy_LastReq  (const LastReq *, LastReq *);
ASN1EXP void   ASN1CALL free_LastReq  (LastReq *);
ASN1EXP char * ASN1CALL print_LastReq (const LastReq *, int);


/*
EncryptedData ::= SEQUENCE {
  etype           [0] ENCTYPE,
  kvno            [1] Krb5Int32 OPTIONAL,
  cipher          [2] OCTET STRING,
}
*/

enum { asn1_tag_length_EncryptedData = 1,
       asn1_tag_class_EncryptedData = 0,
       asn1_tag_tag_EncryptedData = 16 };
struct EncryptedData {
  ENCTYPE etype;
  Krb5Int32 *kvno;
  heim_octet_string cipher;
};

ASN1EXP int    ASN1CALL decode_EncryptedData(const unsigned char *, size_t, EncryptedData *, size_t *);
ASN1EXP int    ASN1CALL encode_EncryptedData(unsigned char *, size_t, const EncryptedData *, size_t *);
ASN1EXP size_t ASN1CALL length_EncryptedData(const EncryptedData *);
ASN1EXP int    ASN1CALL copy_EncryptedData  (const EncryptedData *, EncryptedData *);
ASN1EXP void   ASN1CALL free_EncryptedData  (EncryptedData *);
ASN1EXP char * ASN1CALL print_EncryptedData (const EncryptedData *, int);


/*
EncryptionKey ::= SEQUENCE {
  keytype         [0] Krb5Int32,
  keyvalue        [1] OCTET STRING,
}
*/

enum { asn1_tag_length_EncryptionKey = 1,
       asn1_tag_class_EncryptionKey = 0,
       asn1_tag_tag_EncryptionKey = 16 };
struct EncryptionKey {
  Krb5Int32 keytype;
  heim_octet_string keyvalue;
};

ASN1EXP int    ASN1CALL decode_EncryptionKey(const unsigned char *, size_t, EncryptionKey *, size_t *);
ASN1EXP int    ASN1CALL encode_EncryptionKey(unsigned char *, size_t, const EncryptionKey *, size_t *);
ASN1EXP size_t ASN1CALL length_EncryptionKey(const EncryptionKey *);
ASN1EXP int    ASN1CALL copy_EncryptionKey  (const EncryptionKey *, EncryptionKey *);
ASN1EXP void   ASN1CALL free_EncryptionKey  (EncryptionKey *);
ASN1EXP char * ASN1CALL print_EncryptionKey (const EncryptionKey *, int);


/*
TransitedEncoding ::= SEQUENCE {
  tr-type         [0] Krb5Int32,
  contents        [1] OCTET STRING,
}
*/

enum { asn1_tag_length_TransitedEncoding = 1,
       asn1_tag_class_TransitedEncoding = 0,
       asn1_tag_tag_TransitedEncoding = 16 };
struct TransitedEncoding {
  Krb5Int32 tr_type;
  heim_octet_string contents;
};

ASN1EXP int    ASN1CALL decode_TransitedEncoding(const unsigned char *, size_t, TransitedEncoding *, size_t *);
ASN1EXP int    ASN1CALL encode_TransitedEncoding(unsigned char *, size_t, const TransitedEncoding *, size_t *);
ASN1EXP size_t ASN1CALL length_TransitedEncoding(const TransitedEncoding *);
ASN1EXP int    ASN1CALL copy_TransitedEncoding  (const TransitedEncoding *, TransitedEncoding *);
ASN1EXP void   ASN1CALL free_TransitedEncoding  (TransitedEncoding *);
ASN1EXP char * ASN1CALL print_TransitedEncoding (const TransitedEncoding *, int);


/*
Ticket ::= [APPLICATION 1] SEQUENCE {
  tkt-vno         [0] Krb5Int32,
  realm           [1] Realm,
  sname           [2] PrincipalName,
  enc-part        [3] EncryptedData,
}
*/

enum { asn1_tag_length_Ticket = 1,
       asn1_tag_class_Ticket = 1,
       asn1_tag_tag_Ticket = 1 };
struct Ticket {
  Krb5Int32 tkt_vno;
  Realm realm;
  PrincipalName sname;
  EncryptedData enc_part;
};

ASN1EXP int    ASN1CALL decode_Ticket(const unsigned char *, size_t, Ticket *, size_t *);
ASN1EXP int    ASN1CALL encode_Ticket(unsigned char *, size_t, const Ticket *, size_t *);
ASN1EXP size_t ASN1CALL length_Ticket(const Ticket *);
ASN1EXP int    ASN1CALL copy_Ticket  (const Ticket *, Ticket *);
ASN1EXP void   ASN1CALL free_Ticket  (Ticket *);
ASN1EXP char * ASN1CALL print_Ticket (const Ticket *, int);


/*
EncTicketPart ::= [APPLICATION 3] SEQUENCE {
  flags                [0] TicketFlags,
  key                  [1] EncryptionKey,
  crealm               [2] Realm,
  cname                [3] PrincipalName,
  transited            [4] TransitedEncoding,
  authtime             [5] KerberosTime,
  starttime            [6] KerberosTime OPTIONAL,
  endtime              [7] KerberosTime,
  renew-till           [8] KerberosTime OPTIONAL,
  caddr                [9] HostAddresses OPTIONAL,
  authorization-data   [10] AuthorizationData OPTIONAL,
}
*/

enum { asn1_tag_length_EncTicketPart = 1,
       asn1_tag_class_EncTicketPart = 1,
       asn1_tag_tag_EncTicketPart = 3 };
struct EncTicketPart {
  TicketFlags flags;
  EncryptionKey key;
  Realm crealm;
  PrincipalName cname;
  TransitedEncoding transited;
  KerberosTime authtime;
  KerberosTime *starttime;
  KerberosTime endtime;
  KerberosTime *renew_till;
  HostAddresses *caddr;
  AuthorizationData *authorization_data;
};

ASN1EXP int    ASN1CALL decode_EncTicketPart(const unsigned char *, size_t, EncTicketPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncTicketPart(unsigned char *, size_t, const EncTicketPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncTicketPart(const EncTicketPart *);
ASN1EXP int    ASN1CALL copy_EncTicketPart  (const EncTicketPart *, EncTicketPart *);
ASN1EXP void   ASN1CALL free_EncTicketPart  (EncTicketPart *);
ASN1EXP char * ASN1CALL print_EncTicketPart (const EncTicketPart *, int);


/*
Checksum ::= SEQUENCE {
  cksumtype       [0] CKSUMTYPE,
  checksum        [1] OCTET STRING,
}
*/

enum { asn1_tag_length_Checksum = 1,
       asn1_tag_class_Checksum = 0,
       asn1_tag_tag_Checksum = 16 };
struct Checksum {
  CKSUMTYPE cksumtype;
  heim_octet_string checksum;
};

ASN1EXP int    ASN1CALL decode_Checksum(const unsigned char *, size_t, Checksum *, size_t *);
ASN1EXP int    ASN1CALL encode_Checksum(unsigned char *, size_t, const Checksum *, size_t *);
ASN1EXP size_t ASN1CALL length_Checksum(const Checksum *);
ASN1EXP int    ASN1CALL copy_Checksum  (const Checksum *, Checksum *);
ASN1EXP void   ASN1CALL free_Checksum  (Checksum *);
ASN1EXP char * ASN1CALL print_Checksum (const Checksum *, int);


/*
EncKDCRepPart ::= SEQUENCE {
  key                 [0] EncryptionKey,
  last-req            [1] LastReq,
  nonce               [2] Krb5Int32,
  key-expiration      [3] KerberosTime OPTIONAL,
  flags               [4] TicketFlags,
  authtime            [5] KerberosTime,
  starttime           [6] KerberosTime OPTIONAL,
  endtime             [7] KerberosTime,
  renew-till          [8] KerberosTime OPTIONAL,
  srealm              [9] Realm,
  sname               [10] PrincipalName,
  caddr               [11] HostAddresses OPTIONAL,
  encrypted-pa-data   [12] METHOD-DATA OPTIONAL,
}
*/

enum { asn1_tag_length_EncKDCRepPart = 1,
       asn1_tag_class_EncKDCRepPart = 0,
       asn1_tag_tag_EncKDCRepPart = 16 };
struct EncKDCRepPart {
  EncryptionKey key;
  LastReq last_req;
  Krb5Int32 nonce;
  KerberosTime *key_expiration;
  TicketFlags flags;
  KerberosTime authtime;
  KerberosTime *starttime;
  KerberosTime endtime;
  KerberosTime *renew_till;
  Realm srealm;
  PrincipalName sname;
  HostAddresses *caddr;
  METHOD_DATA *encrypted_pa_data;
};

ASN1EXP int    ASN1CALL decode_EncKDCRepPart(const unsigned char *, size_t, EncKDCRepPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncKDCRepPart(unsigned char *, size_t, const EncKDCRepPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncKDCRepPart(const EncKDCRepPart *);
ASN1EXP int    ASN1CALL copy_EncKDCRepPart  (const EncKDCRepPart *, EncKDCRepPart *);
ASN1EXP void   ASN1CALL free_EncKDCRepPart  (EncKDCRepPart *);
ASN1EXP char * ASN1CALL print_EncKDCRepPart (const EncKDCRepPart *, int);


/*
PrincipalNameAttrSrc ::= CHOICE {
  enc-kdc-rep-part   [0] EncKDCRepPart,
  enc-ticket-part    [1] EncTicketPart,
}
*/

enum { asn1_tag_length_PrincipalNameAttrSrc = 1,
       asn1_tag_class_PrincipalNameAttrSrc = 0,
       asn1_tag_tag_PrincipalNameAttrSrc = 0 };
struct PrincipalNameAttrSrc {
  enum PrincipalNameAttrSrc_enum {
    choice_PrincipalNameAttrSrc_enc_kdc_rep_part = 1,
    choice_PrincipalNameAttrSrc_enc_ticket_part
  } element;
  union {
    EncKDCRepPart enc_kdc_rep_part;
    EncTicketPart enc_ticket_part;
  } u;
};

/*
PrincipalNameAttrs ::= SEQUENCE {
  authenticated         [0] BOOLEAN,
  source                [1] PrincipalNameAttrSrc OPTIONAL,
  authenticator-ad      [2] AuthorizationData OPTIONAL,
  peer-realm            [3] Realm OPTIONAL,
  transited             [4] TransitedEncoding OPTIONAL,
  pac-verified          [5] BOOLEAN,
  kdc-issued-verified   [6] BOOLEAN,
  want-ad               [7] AuthorizationData OPTIONAL,
}
*/

enum { asn1_tag_length_PrincipalNameAttrs = 1,
       asn1_tag_class_PrincipalNameAttrs = 0,
       asn1_tag_tag_PrincipalNameAttrs = 16 };
struct PrincipalNameAttrs {
  int authenticated;
  PrincipalNameAttrSrc *source;
  AuthorizationData *authenticator_ad;
  Realm *peer_realm;
  TransitedEncoding *transited;
  int pac_verified;
  int kdc_issued_verified;
  AuthorizationData *want_ad;
  void * pac;
};

/*
CompositePrincipal ::= [APPLICATION 48] SEQUENCE {
  name            [0] PrincipalName,
  realm           [1] Realm,
  nameattrs       [2] PrincipalNameAttrs OPTIONAL,
}
*/

enum { asn1_tag_length_CompositePrincipal = 2,
       asn1_tag_class_CompositePrincipal = 1,
       asn1_tag_tag_CompositePrincipal = 48 };
struct CompositePrincipal {
  PrincipalName name;
  Realm realm;
  PrincipalNameAttrs *nameattrs;
};

ASN1EXP int    ASN1CALL decode_CompositePrincipal(const unsigned char *, size_t, CompositePrincipal *, size_t *);
ASN1EXP int    ASN1CALL encode_CompositePrincipal(unsigned char *, size_t, const CompositePrincipal *, size_t *);
ASN1EXP size_t ASN1CALL length_CompositePrincipal(const CompositePrincipal *);
ASN1EXP int    ASN1CALL copy_CompositePrincipal  (const CompositePrincipal *, CompositePrincipal *);
ASN1EXP void   ASN1CALL free_CompositePrincipal  (CompositePrincipal *);
ASN1EXP char * ASN1CALL print_CompositePrincipal (const CompositePrincipal *, int);


/*
Principal ::= SEQUENCE {
  name            [0] PrincipalName,
  realm           [1] Realm,
}
*/

enum { asn1_tag_length_Principal = 1,
       asn1_tag_class_Principal = 0,
       asn1_tag_tag_Principal = 16 };
struct Principal {
  PrincipalName name;
  Realm realm;
  PrincipalNameAttrs *nameattrs;
};

ASN1EXP int    ASN1CALL decode_Principal(const unsigned char *, size_t, Principal *, size_t *);
ASN1EXP int    ASN1CALL encode_Principal(unsigned char *, size_t, const Principal *, size_t *);
ASN1EXP size_t ASN1CALL length_Principal(const Principal *);
ASN1EXP int    ASN1CALL copy_Principal  (const Principal *, Principal *);
ASN1EXP void   ASN1CALL free_Principal  (Principal *);
ASN1EXP char * ASN1CALL print_Principal (const Principal *, int);


/*
Principals ::= SEQUENCE OF Principal
*/

enum { asn1_tag_length_Principals = 1,
       asn1_tag_class_Principals = 0,
       asn1_tag_tag_Principals = 16 };
struct Principals {
  unsigned int len;
  Principal *val;
};

ASN1EXP int   ASN1CALL add_Principals  (Principals *, const Principal *);
ASN1EXP int   ASN1CALL remove_Principals  (Principals *, unsigned int);
ASN1EXP int    ASN1CALL decode_Principals(const unsigned char *, size_t, Principals *, size_t *);
ASN1EXP int    ASN1CALL encode_Principals(unsigned char *, size_t, const Principals *, size_t *);
ASN1EXP size_t ASN1CALL length_Principals(const Principals *);
ASN1EXP int    ASN1CALL copy_Principals  (const Principals *, Principals *);
ASN1EXP void   ASN1CALL free_Principals  (Principals *);
ASN1EXP char * ASN1CALL print_Principals (const Principals *, int);


/*
Authenticator ::= [APPLICATION 2] SEQUENCE {
  authenticator-vno    [0] Krb5Int32,
  crealm               [1] Realm,
  cname                [2] PrincipalName,
  cksum                [3] Checksum OPTIONAL,
  cusec                [4] Krb5Int32,
  ctime                [5] KerberosTime,
  subkey               [6] EncryptionKey OPTIONAL,
  seq-number           [7] Krb5UInt32 OPTIONAL,
  authorization-data   [8] AuthorizationData OPTIONAL,
}
*/

enum { asn1_tag_length_Authenticator = 1,
       asn1_tag_class_Authenticator = 1,
       asn1_tag_tag_Authenticator = 2 };
struct Authenticator {
  Krb5Int32 authenticator_vno;
  Realm crealm;
  PrincipalName cname;
  Checksum *cksum;
  Krb5Int32 cusec;
  KerberosTime ctime;
  EncryptionKey *subkey;
  Krb5UInt32 *seq_number;
  AuthorizationData *authorization_data;
};

ASN1EXP int    ASN1CALL decode_Authenticator(const unsigned char *, size_t, Authenticator *, size_t *);
ASN1EXP int    ASN1CALL encode_Authenticator(unsigned char *, size_t, const Authenticator *, size_t *);
ASN1EXP size_t ASN1CALL length_Authenticator(const Authenticator *);
ASN1EXP int    ASN1CALL copy_Authenticator  (const Authenticator *, Authenticator *);
ASN1EXP void   ASN1CALL free_Authenticator  (Authenticator *);
ASN1EXP char * ASN1CALL print_Authenticator (const Authenticator *, int);


/*
PA-DATA ::= SEQUENCE {
  padata-type     [1] PADATA-TYPE,
  padata-value    [2] OCTET STRING,
}
*/

enum { asn1_tag_length_PA_DATA = 1,
       asn1_tag_class_PA_DATA = 0,
       asn1_tag_tag_PA_DATA = 16 };
struct PA_DATA {
  PADATA_TYPE padata_type;
  heim_octet_string padata_value;
};

ASN1EXP int    ASN1CALL decode_PA_DATA(const unsigned char *, size_t, PA_DATA *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_DATA(unsigned char *, size_t, const PA_DATA *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_DATA(const PA_DATA *);
ASN1EXP int    ASN1CALL copy_PA_DATA  (const PA_DATA *, PA_DATA *);
ASN1EXP void   ASN1CALL free_PA_DATA  (PA_DATA *);
ASN1EXP char * ASN1CALL print_PA_DATA (const PA_DATA *, int);


/*
ETYPE-INFO-ENTRY ::= SEQUENCE {
  etype           [0] ENCTYPE,
  salt            [1] OCTET STRING OPTIONAL,
  salttype        [2] Krb5Int32 OPTIONAL,
}
*/

enum { asn1_tag_length_ETYPE_INFO_ENTRY = 1,
       asn1_tag_class_ETYPE_INFO_ENTRY = 0,
       asn1_tag_tag_ETYPE_INFO_ENTRY = 16 };
struct ETYPE_INFO_ENTRY {
  ENCTYPE etype;
  heim_octet_string *salt;
  Krb5Int32 *salttype;
};

ASN1EXP int    ASN1CALL decode_ETYPE_INFO_ENTRY(const unsigned char *, size_t, ETYPE_INFO_ENTRY *, size_t *);
ASN1EXP int    ASN1CALL encode_ETYPE_INFO_ENTRY(unsigned char *, size_t, const ETYPE_INFO_ENTRY *, size_t *);
ASN1EXP size_t ASN1CALL length_ETYPE_INFO_ENTRY(const ETYPE_INFO_ENTRY *);
ASN1EXP int    ASN1CALL copy_ETYPE_INFO_ENTRY  (const ETYPE_INFO_ENTRY *, ETYPE_INFO_ENTRY *);
ASN1EXP void   ASN1CALL free_ETYPE_INFO_ENTRY  (ETYPE_INFO_ENTRY *);
ASN1EXP char * ASN1CALL print_ETYPE_INFO_ENTRY (const ETYPE_INFO_ENTRY *, int);


/*
ETYPE-INFO ::= SEQUENCE OF ETYPE-INFO-ENTRY
*/

enum { asn1_tag_length_ETYPE_INFO = 1,
       asn1_tag_class_ETYPE_INFO = 0,
       asn1_tag_tag_ETYPE_INFO = 16 };
struct ETYPE_INFO {
  unsigned int len;
  ETYPE_INFO_ENTRY *val;
};

ASN1EXP int   ASN1CALL add_ETYPE_INFO  (ETYPE_INFO *, const ETYPE_INFO_ENTRY *);
ASN1EXP int   ASN1CALL remove_ETYPE_INFO  (ETYPE_INFO *, unsigned int);
ASN1EXP int    ASN1CALL decode_ETYPE_INFO(const unsigned char *, size_t, ETYPE_INFO *, size_t *);
ASN1EXP int    ASN1CALL encode_ETYPE_INFO(unsigned char *, size_t, const ETYPE_INFO *, size_t *);
ASN1EXP size_t ASN1CALL length_ETYPE_INFO(const ETYPE_INFO *);
ASN1EXP int    ASN1CALL copy_ETYPE_INFO  (const ETYPE_INFO *, ETYPE_INFO *);
ASN1EXP void   ASN1CALL free_ETYPE_INFO  (ETYPE_INFO *);
ASN1EXP char * ASN1CALL print_ETYPE_INFO (const ETYPE_INFO *, int);


/*
ETYPE-INFO2-ENTRY ::= SEQUENCE {
  etype           [0] ENCTYPE,
  salt            [1] KerberosString OPTIONAL,
  s2kparams       [2] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_ETYPE_INFO2_ENTRY = 1,
       asn1_tag_class_ETYPE_INFO2_ENTRY = 0,
       asn1_tag_tag_ETYPE_INFO2_ENTRY = 16 };
struct ETYPE_INFO2_ENTRY {
  ENCTYPE etype;
  KerberosString *salt;
  heim_octet_string *s2kparams;
};

ASN1EXP int    ASN1CALL decode_ETYPE_INFO2_ENTRY(const unsigned char *, size_t, ETYPE_INFO2_ENTRY *, size_t *);
ASN1EXP int    ASN1CALL encode_ETYPE_INFO2_ENTRY(unsigned char *, size_t, const ETYPE_INFO2_ENTRY *, size_t *);
ASN1EXP size_t ASN1CALL length_ETYPE_INFO2_ENTRY(const ETYPE_INFO2_ENTRY *);
ASN1EXP int    ASN1CALL copy_ETYPE_INFO2_ENTRY  (const ETYPE_INFO2_ENTRY *, ETYPE_INFO2_ENTRY *);
ASN1EXP void   ASN1CALL free_ETYPE_INFO2_ENTRY  (ETYPE_INFO2_ENTRY *);
ASN1EXP char * ASN1CALL print_ETYPE_INFO2_ENTRY (const ETYPE_INFO2_ENTRY *, int);


/*
ETYPE-INFO2 ::= SEQUENCE OF ETYPE-INFO2-ENTRY
*/

enum { asn1_tag_length_ETYPE_INFO2 = 1,
       asn1_tag_class_ETYPE_INFO2 = 0,
       asn1_tag_tag_ETYPE_INFO2 = 16 };
struct ETYPE_INFO2 {
  unsigned int len;
  ETYPE_INFO2_ENTRY *val;
};

ASN1EXP int   ASN1CALL add_ETYPE_INFO2  (ETYPE_INFO2 *, const ETYPE_INFO2_ENTRY *);
ASN1EXP int   ASN1CALL remove_ETYPE_INFO2  (ETYPE_INFO2 *, unsigned int);
ASN1EXP int    ASN1CALL decode_ETYPE_INFO2(const unsigned char *, size_t, ETYPE_INFO2 *, size_t *);
ASN1EXP int    ASN1CALL encode_ETYPE_INFO2(unsigned char *, size_t, const ETYPE_INFO2 *, size_t *);
ASN1EXP size_t ASN1CALL length_ETYPE_INFO2(const ETYPE_INFO2 *);
ASN1EXP int    ASN1CALL copy_ETYPE_INFO2  (const ETYPE_INFO2 *, ETYPE_INFO2 *);
ASN1EXP void   ASN1CALL free_ETYPE_INFO2  (ETYPE_INFO2 *);
ASN1EXP char * ASN1CALL print_ETYPE_INFO2 (const ETYPE_INFO2 *, int);


/*
METHOD-DATA ::= SEQUENCE OF PA-DATA
*/

enum { asn1_tag_length_METHOD_DATA = 1,
       asn1_tag_class_METHOD_DATA = 0,
       asn1_tag_tag_METHOD_DATA = 16 };
struct METHOD_DATA {
  unsigned int len;
  PA_DATA *val;
};

ASN1EXP int   ASN1CALL add_METHOD_DATA  (METHOD_DATA *, const PA_DATA *);
ASN1EXP int   ASN1CALL remove_METHOD_DATA  (METHOD_DATA *, unsigned int);
ASN1EXP int    ASN1CALL decode_METHOD_DATA(const unsigned char *, size_t, METHOD_DATA *, size_t *);
ASN1EXP int    ASN1CALL encode_METHOD_DATA(unsigned char *, size_t, const METHOD_DATA *, size_t *);
ASN1EXP size_t ASN1CALL length_METHOD_DATA(const METHOD_DATA *);
ASN1EXP int    ASN1CALL copy_METHOD_DATA  (const METHOD_DATA *, METHOD_DATA *);
ASN1EXP void   ASN1CALL free_METHOD_DATA  (METHOD_DATA *);
ASN1EXP char * ASN1CALL print_METHOD_DATA (const METHOD_DATA *, int);


/*
TypedData ::= SEQUENCE {
  data-type       [0] Krb5Int32,
  data-value      [1] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_TypedData = 1,
       asn1_tag_class_TypedData = 0,
       asn1_tag_tag_TypedData = 16 };
struct TypedData {
  Krb5Int32 data_type;
  heim_octet_string *data_value;
};

ASN1EXP int    ASN1CALL decode_TypedData(const unsigned char *, size_t, TypedData *, size_t *);
ASN1EXP int    ASN1CALL encode_TypedData(unsigned char *, size_t, const TypedData *, size_t *);
ASN1EXP size_t ASN1CALL length_TypedData(const TypedData *);
ASN1EXP int    ASN1CALL copy_TypedData  (const TypedData *, TypedData *);
ASN1EXP void   ASN1CALL free_TypedData  (TypedData *);
ASN1EXP char * ASN1CALL print_TypedData (const TypedData *, int);


/*
TYPED-DATA ::= SEQUENCE OF TypedData
*/

enum { asn1_tag_length_TYPED_DATA = 1,
       asn1_tag_class_TYPED_DATA = 0,
       asn1_tag_tag_TYPED_DATA = 16 };
struct TYPED_DATA {
  unsigned int len;
  TypedData *val;
};

/*
KDC-REQ-BODY ::= SEQUENCE {
  kdc-options              [0] KDCOptions,
  cname                    [1] PrincipalName OPTIONAL,
  realm                    [2] Realm,
  sname                    [3] PrincipalName OPTIONAL,
  from                     [4] KerberosTime OPTIONAL,
  till                     [5] KerberosTime OPTIONAL,
  rtime                    [6] KerberosTime OPTIONAL,
  nonce                    [7] Krb5Int32,
  etype                    [8] SEQUENCE OF ENCTYPE,
  addresses                [9] HostAddresses OPTIONAL,
  enc-authorization-data   [10] EncryptedData OPTIONAL,
  additional-tickets       [11] SEQUENCE OF Ticket OPTIONAL,
}
*/

enum { asn1_tag_length_KDC_REQ_BODY = 1,
       asn1_tag_class_KDC_REQ_BODY = 0,
       asn1_tag_tag_KDC_REQ_BODY = 16 };
struct KDC_REQ_BODY {
  heim_octet_string _save;
  KDCOptions kdc_options;
  PrincipalName *cname;
  Realm realm;
  PrincipalName *sname;
  KerberosTime *from;
  KerberosTime *till;
  KerberosTime *rtime;
  Krb5Int32 nonce;
  struct KDC_REQ_BODY_etype {
    unsigned int len;
    ENCTYPE *val;
  } etype;
  HostAddresses *addresses;
  EncryptedData *enc_authorization_data;
  struct KDC_REQ_BODY_additional_tickets {
    unsigned int len;
    Ticket *val;
  } *additional_tickets;
};

ASN1EXP int    ASN1CALL decode_KDC_REQ_BODY(const unsigned char *, size_t, KDC_REQ_BODY *, size_t *);
ASN1EXP int    ASN1CALL encode_KDC_REQ_BODY(unsigned char *, size_t, const KDC_REQ_BODY *, size_t *);
ASN1EXP size_t ASN1CALL length_KDC_REQ_BODY(const KDC_REQ_BODY *);
ASN1EXP int    ASN1CALL copy_KDC_REQ_BODY  (const KDC_REQ_BODY *, KDC_REQ_BODY *);
ASN1EXP void   ASN1CALL free_KDC_REQ_BODY  (KDC_REQ_BODY *);
ASN1EXP char * ASN1CALL print_KDC_REQ_BODY (const KDC_REQ_BODY *, int);


/*
KDC-REQ ::= SEQUENCE {
  pvno            [1] Krb5Int32,
  msg-type        [2] MESSAGE-TYPE,
  padata          [3] METHOD-DATA OPTIONAL,
  req-body        [4] KDC-REQ-BODY,
}
*/

enum { asn1_tag_length_KDC_REQ = 1,
       asn1_tag_class_KDC_REQ = 0,
       asn1_tag_tag_KDC_REQ = 16 };
struct KDC_REQ {
  Krb5Int32 pvno;
  MESSAGE_TYPE msg_type;
  METHOD_DATA *padata;
  KDC_REQ_BODY req_body;
};

/*
AS-REQ ::= [APPLICATION 10] KDC-REQ
*/

enum { asn1_tag_length_AS_REQ = 1,
       asn1_tag_class_AS_REQ = 1,
       asn1_tag_tag_AS_REQ = 10 };

ASN1EXP int    ASN1CALL decode_AS_REQ(const unsigned char *, size_t, AS_REQ *, size_t *);
ASN1EXP int    ASN1CALL encode_AS_REQ(unsigned char *, size_t, const AS_REQ *, size_t *);
ASN1EXP size_t ASN1CALL length_AS_REQ(const AS_REQ *);
ASN1EXP int    ASN1CALL copy_AS_REQ  (const AS_REQ *, AS_REQ *);
ASN1EXP void   ASN1CALL free_AS_REQ  (AS_REQ *);
ASN1EXP char * ASN1CALL print_AS_REQ (const AS_REQ *, int);


/*
TGS-REQ ::= [APPLICATION 12] KDC-REQ
*/

enum { asn1_tag_length_TGS_REQ = 1,
       asn1_tag_class_TGS_REQ = 1,
       asn1_tag_tag_TGS_REQ = 12 };

ASN1EXP int    ASN1CALL decode_TGS_REQ(const unsigned char *, size_t, TGS_REQ *, size_t *);
ASN1EXP int    ASN1CALL encode_TGS_REQ(unsigned char *, size_t, const TGS_REQ *, size_t *);
ASN1EXP size_t ASN1CALL length_TGS_REQ(const TGS_REQ *);
ASN1EXP int    ASN1CALL copy_TGS_REQ  (const TGS_REQ *, TGS_REQ *);
ASN1EXP void   ASN1CALL free_TGS_REQ  (TGS_REQ *);
ASN1EXP char * ASN1CALL print_TGS_REQ (const TGS_REQ *, int);


/*
PA-ENC-TS-ENC ::= SEQUENCE {
  patimestamp     [0] KerberosTime,
  pausec          [1] Krb5Int32 OPTIONAL,
}
*/

enum { asn1_tag_length_PA_ENC_TS_ENC = 1,
       asn1_tag_class_PA_ENC_TS_ENC = 0,
       asn1_tag_tag_PA_ENC_TS_ENC = 16 };
struct PA_ENC_TS_ENC {
  KerberosTime patimestamp;
  Krb5Int32 *pausec;
};

ASN1EXP int    ASN1CALL decode_PA_ENC_TS_ENC(const unsigned char *, size_t, PA_ENC_TS_ENC *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_ENC_TS_ENC(unsigned char *, size_t, const PA_ENC_TS_ENC *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_ENC_TS_ENC(const PA_ENC_TS_ENC *);
ASN1EXP int    ASN1CALL copy_PA_ENC_TS_ENC  (const PA_ENC_TS_ENC *, PA_ENC_TS_ENC *);
ASN1EXP void   ASN1CALL free_PA_ENC_TS_ENC  (PA_ENC_TS_ENC *);
ASN1EXP char * ASN1CALL print_PA_ENC_TS_ENC (const PA_ENC_TS_ENC *, int);


/*
PA-PAC-REQUEST ::= SEQUENCE {
  include-pac     [0] BOOLEAN,
}
*/

enum { asn1_tag_length_PA_PAC_REQUEST = 1,
       asn1_tag_class_PA_PAC_REQUEST = 0,
       asn1_tag_tag_PA_PAC_REQUEST = 16 };
struct PA_PAC_REQUEST {
  int include_pac;
};

ASN1EXP int    ASN1CALL decode_PA_PAC_REQUEST(const unsigned char *, size_t, PA_PAC_REQUEST *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_PAC_REQUEST(unsigned char *, size_t, const PA_PAC_REQUEST *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_PAC_REQUEST(const PA_PAC_REQUEST *);
ASN1EXP int    ASN1CALL copy_PA_PAC_REQUEST  (const PA_PAC_REQUEST *, PA_PAC_REQUEST *);
ASN1EXP void   ASN1CALL free_PA_PAC_REQUEST  (PA_PAC_REQUEST *);
ASN1EXP char * ASN1CALL print_PA_PAC_REQUEST (const PA_PAC_REQUEST *, int);


/*
KerbErrorDataType ::= INTEGER {
  kERB_AP_ERR_TYPE_SKEW_RECOVERY(2),
  kERB_ERR_TYPE_EXTENDED(3)
}
*/

enum { asn1_tag_length_KerbErrorDataType = 1,
       asn1_tag_class_KerbErrorDataType = 0,
       asn1_tag_tag_KerbErrorDataType = 2 };
/*
KERB-ERROR-DATA ::= SEQUENCE {
  data-type       [1] KerbErrorDataType,
  data-value      [2] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_KERB_ERROR_DATA = 1,
       asn1_tag_class_KERB_ERROR_DATA = 0,
       asn1_tag_tag_KERB_ERROR_DATA = 16 };
struct KERB_ERROR_DATA {
  KerbErrorDataType data_type;
  heim_octet_string *data_value;
};

ASN1EXP int    ASN1CALL decode_KERB_ERROR_DATA(const unsigned char *, size_t, KERB_ERROR_DATA *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_ERROR_DATA(unsigned char *, size_t, const KERB_ERROR_DATA *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_ERROR_DATA(const KERB_ERROR_DATA *);
ASN1EXP int    ASN1CALL copy_KERB_ERROR_DATA  (const KERB_ERROR_DATA *, KERB_ERROR_DATA *);
ASN1EXP void   ASN1CALL free_KERB_ERROR_DATA  (KERB_ERROR_DATA *);
ASN1EXP char * ASN1CALL print_KERB_ERROR_DATA (const KERB_ERROR_DATA *, int);


/*
PAC-OPTIONS-FLAGS ::= BIT STRING {
  claims(0),
  branch-aware(1),
  forward-to-full-dc(2),
  resource-based-constrained-delegation(3)
}
*/

enum { asn1_tag_length_PAC_OPTIONS_FLAGS = 1,
       asn1_tag_class_PAC_OPTIONS_FLAGS = 0,
       asn1_tag_tag_PAC_OPTIONS_FLAGS = 3 };
uint64_t PAC_OPTIONS_FLAGS2int(PAC_OPTIONS_FLAGS);
PAC_OPTIONS_FLAGS int2PAC_OPTIONS_FLAGS(uint64_t);
const struct units * asn1_PAC_OPTIONS_FLAGS_units(void);
/*
PA-PAC-OPTIONS ::= SEQUENCE {
  flags           [0] PAC-OPTIONS-FLAGS,
}
*/

enum { asn1_tag_length_PA_PAC_OPTIONS = 1,
       asn1_tag_class_PA_PAC_OPTIONS = 0,
       asn1_tag_tag_PA_PAC_OPTIONS = 16 };
struct PA_PAC_OPTIONS {
  PAC_OPTIONS_FLAGS flags;
};

ASN1EXP int    ASN1CALL decode_PA_PAC_OPTIONS(const unsigned char *, size_t, PA_PAC_OPTIONS *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_PAC_OPTIONS(unsigned char *, size_t, const PA_PAC_OPTIONS *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_PAC_OPTIONS(const PA_PAC_OPTIONS *);
ASN1EXP int    ASN1CALL copy_PA_PAC_OPTIONS  (const PA_PAC_OPTIONS *, PA_PAC_OPTIONS *);
ASN1EXP void   ASN1CALL free_PA_PAC_OPTIONS  (PA_PAC_OPTIONS *);
ASN1EXP char * ASN1CALL print_PA_PAC_OPTIONS (const PA_PAC_OPTIONS *, int);


/*
KERB-AD-RESTRICTION-ENTRY ::= SEQUENCE {
  restriction-type   [0] Krb5Int32,
  restriction        [1] OCTET STRING,
}
*/

enum { asn1_tag_length_KERB_AD_RESTRICTION_ENTRY = 1,
       asn1_tag_class_KERB_AD_RESTRICTION_ENTRY = 0,
       asn1_tag_tag_KERB_AD_RESTRICTION_ENTRY = 16 };
struct KERB_AD_RESTRICTION_ENTRY {
  Krb5Int32 restriction_type;
  heim_octet_string restriction;
};

ASN1EXP int    ASN1CALL decode_KERB_AD_RESTRICTION_ENTRY(const unsigned char *, size_t, KERB_AD_RESTRICTION_ENTRY *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_AD_RESTRICTION_ENTRY(unsigned char *, size_t, const KERB_AD_RESTRICTION_ENTRY *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_AD_RESTRICTION_ENTRY(const KERB_AD_RESTRICTION_ENTRY *);
ASN1EXP int    ASN1CALL copy_KERB_AD_RESTRICTION_ENTRY  (const KERB_AD_RESTRICTION_ENTRY *, KERB_AD_RESTRICTION_ENTRY *);
ASN1EXP void   ASN1CALL free_KERB_AD_RESTRICTION_ENTRY  (KERB_AD_RESTRICTION_ENTRY *);
ASN1EXP char * ASN1CALL print_KERB_AD_RESTRICTION_ENTRY (const KERB_AD_RESTRICTION_ENTRY *, int);


/*
PA-KERB-KEY-LIST-REQ ::= SEQUENCE OF ENCTYPE
*/

enum { asn1_tag_length_PA_KERB_KEY_LIST_REQ = 1,
       asn1_tag_class_PA_KERB_KEY_LIST_REQ = 0,
       asn1_tag_tag_PA_KERB_KEY_LIST_REQ = 16 };
struct PA_KERB_KEY_LIST_REQ {
  unsigned int len;
  ENCTYPE *val;
};

ASN1EXP int    ASN1CALL decode_PA_KERB_KEY_LIST_REQ(const unsigned char *, size_t, PA_KERB_KEY_LIST_REQ *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_KERB_KEY_LIST_REQ(unsigned char *, size_t, const PA_KERB_KEY_LIST_REQ *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_KERB_KEY_LIST_REQ(const PA_KERB_KEY_LIST_REQ *);
ASN1EXP int    ASN1CALL copy_PA_KERB_KEY_LIST_REQ  (const PA_KERB_KEY_LIST_REQ *, PA_KERB_KEY_LIST_REQ *);
ASN1EXP void   ASN1CALL free_PA_KERB_KEY_LIST_REQ  (PA_KERB_KEY_LIST_REQ *);
ASN1EXP char * ASN1CALL print_PA_KERB_KEY_LIST_REQ (const PA_KERB_KEY_LIST_REQ *, int);


/*
PA-KERB-KEY-LIST-REP ::= SEQUENCE OF ENCTYPE
*/

enum { asn1_tag_length_PA_KERB_KEY_LIST_REP = 1,
       asn1_tag_class_PA_KERB_KEY_LIST_REP = 0,
       asn1_tag_tag_PA_KERB_KEY_LIST_REP = 16 };
struct PA_KERB_KEY_LIST_REP {
  unsigned int len;
  ENCTYPE *val;
};

ASN1EXP int    ASN1CALL decode_PA_KERB_KEY_LIST_REP(const unsigned char *, size_t, PA_KERB_KEY_LIST_REP *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_KERB_KEY_LIST_REP(unsigned char *, size_t, const PA_KERB_KEY_LIST_REP *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_KERB_KEY_LIST_REP(const PA_KERB_KEY_LIST_REP *);
ASN1EXP int    ASN1CALL copy_PA_KERB_KEY_LIST_REP  (const PA_KERB_KEY_LIST_REP *, PA_KERB_KEY_LIST_REP *);
ASN1EXP void   ASN1CALL free_PA_KERB_KEY_LIST_REP  (PA_KERB_KEY_LIST_REP *);
ASN1EXP char * ASN1CALL print_PA_KERB_KEY_LIST_REP (const PA_KERB_KEY_LIST_REP *, int);


/*
PROV-SRV-LOCATION ::= GeneralString
*/

enum { asn1_tag_length_PROV_SRV_LOCATION = 1,
       asn1_tag_class_PROV_SRV_LOCATION = 0,
       asn1_tag_tag_PROV_SRV_LOCATION = 27 };
/*
KDC-REP ::= SEQUENCE {
  pvno            [0] Krb5Int32,
  msg-type        [1] MESSAGE-TYPE,
  padata          [2] METHOD-DATA OPTIONAL,
  crealm          [3] Realm,
  cname           [4] PrincipalName,
  ticket          [5] Ticket,
  enc-part        [6] EncryptedData,
}
*/

enum { asn1_tag_length_KDC_REP = 1,
       asn1_tag_class_KDC_REP = 0,
       asn1_tag_tag_KDC_REP = 16 };
struct KDC_REP {
  Krb5Int32 pvno;
  MESSAGE_TYPE msg_type;
  METHOD_DATA *padata;
  Realm crealm;
  PrincipalName cname;
  Ticket ticket;
  EncryptedData enc_part;
};

ASN1EXP int    ASN1CALL decode_KDC_REP(const unsigned char *, size_t, KDC_REP *, size_t *);
ASN1EXP int    ASN1CALL encode_KDC_REP(unsigned char *, size_t, const KDC_REP *, size_t *);
ASN1EXP size_t ASN1CALL length_KDC_REP(const KDC_REP *);
ASN1EXP int    ASN1CALL copy_KDC_REP  (const KDC_REP *, KDC_REP *);
ASN1EXP void   ASN1CALL free_KDC_REP  (KDC_REP *);
ASN1EXP char * ASN1CALL print_KDC_REP (const KDC_REP *, int);


/*
AS-REP ::= [APPLICATION 11] KDC-REP
*/

enum { asn1_tag_length_AS_REP = 1,
       asn1_tag_class_AS_REP = 1,
       asn1_tag_tag_AS_REP = 11 };

ASN1EXP int    ASN1CALL decode_AS_REP(const unsigned char *, size_t, AS_REP *, size_t *);
ASN1EXP int    ASN1CALL encode_AS_REP(unsigned char *, size_t, const AS_REP *, size_t *);
ASN1EXP size_t ASN1CALL length_AS_REP(const AS_REP *);
ASN1EXP int    ASN1CALL copy_AS_REP  (const AS_REP *, AS_REP *);
ASN1EXP void   ASN1CALL free_AS_REP  (AS_REP *);
ASN1EXP char * ASN1CALL print_AS_REP (const AS_REP *, int);


/*
TGS-REP ::= [APPLICATION 13] KDC-REP
*/

enum { asn1_tag_length_TGS_REP = 1,
       asn1_tag_class_TGS_REP = 1,
       asn1_tag_tag_TGS_REP = 13 };

ASN1EXP int    ASN1CALL decode_TGS_REP(const unsigned char *, size_t, TGS_REP *, size_t *);
ASN1EXP int    ASN1CALL encode_TGS_REP(unsigned char *, size_t, const TGS_REP *, size_t *);
ASN1EXP size_t ASN1CALL length_TGS_REP(const TGS_REP *);
ASN1EXP int    ASN1CALL copy_TGS_REP  (const TGS_REP *, TGS_REP *);
ASN1EXP void   ASN1CALL free_TGS_REP  (TGS_REP *);
ASN1EXP char * ASN1CALL print_TGS_REP (const TGS_REP *, int);


/*
EncASRepPart ::= [APPLICATION 25] EncKDCRepPart
*/

enum { asn1_tag_length_EncASRepPart = 1,
       asn1_tag_class_EncASRepPart = 1,
       asn1_tag_tag_EncASRepPart = 25 };

ASN1EXP int    ASN1CALL decode_EncASRepPart(const unsigned char *, size_t, EncASRepPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncASRepPart(unsigned char *, size_t, const EncASRepPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncASRepPart(const EncASRepPart *);
ASN1EXP int    ASN1CALL copy_EncASRepPart  (const EncASRepPart *, EncASRepPart *);
ASN1EXP void   ASN1CALL free_EncASRepPart  (EncASRepPart *);
ASN1EXP char * ASN1CALL print_EncASRepPart (const EncASRepPart *, int);


/*
EncTGSRepPart ::= [APPLICATION 26] EncKDCRepPart
*/

enum { asn1_tag_length_EncTGSRepPart = 1,
       asn1_tag_class_EncTGSRepPart = 1,
       asn1_tag_tag_EncTGSRepPart = 26 };

ASN1EXP int    ASN1CALL decode_EncTGSRepPart(const unsigned char *, size_t, EncTGSRepPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncTGSRepPart(unsigned char *, size_t, const EncTGSRepPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncTGSRepPart(const EncTGSRepPart *);
ASN1EXP int    ASN1CALL copy_EncTGSRepPart  (const EncTGSRepPart *, EncTGSRepPart *);
ASN1EXP void   ASN1CALL free_EncTGSRepPart  (EncTGSRepPart *);
ASN1EXP char * ASN1CALL print_EncTGSRepPart (const EncTGSRepPart *, int);


/*
AP-REQ ::= [APPLICATION 14] SEQUENCE {
  pvno            [0] Krb5Int32,
  msg-type        [1] MESSAGE-TYPE,
  ap-options      [2] APOptions,
  ticket          [3] Ticket,
  authenticator   [4] EncryptedData,
}
*/

enum { asn1_tag_length_AP_REQ = 1,
       asn1_tag_class_AP_REQ = 1,
       asn1_tag_tag_AP_REQ = 14 };
struct AP_REQ {
  Krb5Int32 pvno;
  MESSAGE_TYPE msg_type;
  APOptions ap_options;
  Ticket ticket;
  EncryptedData authenticator;
};

ASN1EXP int    ASN1CALL decode_AP_REQ(const unsigned char *, size_t, AP_REQ *, size_t *);
ASN1EXP int    ASN1CALL encode_AP_REQ(unsigned char *, size_t, const AP_REQ *, size_t *);
ASN1EXP size_t ASN1CALL length_AP_REQ(const AP_REQ *);
ASN1EXP int    ASN1CALL copy_AP_REQ  (const AP_REQ *, AP_REQ *);
ASN1EXP void   ASN1CALL free_AP_REQ  (AP_REQ *);
ASN1EXP char * ASN1CALL print_AP_REQ (const AP_REQ *, int);


/*
AP-REP ::= [APPLICATION 15] SEQUENCE {
  pvno            [0] Krb5Int32,
  msg-type        [1] MESSAGE-TYPE,
  enc-part        [2] EncryptedData,
}
*/

enum { asn1_tag_length_AP_REP = 1,
       asn1_tag_class_AP_REP = 1,
       asn1_tag_tag_AP_REP = 15 };
struct AP_REP {
  Krb5Int32 pvno;
  MESSAGE_TYPE msg_type;
  EncryptedData enc_part;
};

ASN1EXP int    ASN1CALL decode_AP_REP(const unsigned char *, size_t, AP_REP *, size_t *);
ASN1EXP int    ASN1CALL encode_AP_REP(unsigned char *, size_t, const AP_REP *, size_t *);
ASN1EXP size_t ASN1CALL length_AP_REP(const AP_REP *);
ASN1EXP int    ASN1CALL copy_AP_REP  (const AP_REP *, AP_REP *);
ASN1EXP void   ASN1CALL free_AP_REP  (AP_REP *);
ASN1EXP char * ASN1CALL print_AP_REP (const AP_REP *, int);


/*
EncAPRepPart ::= [APPLICATION 27] SEQUENCE {
  ctime           [0] KerberosTime,
  cusec           [1] Krb5Int32,
  subkey          [2] EncryptionKey OPTIONAL,
  seq-number      [3] Krb5UInt32 OPTIONAL,
}
*/

enum { asn1_tag_length_EncAPRepPart = 1,
       asn1_tag_class_EncAPRepPart = 1,
       asn1_tag_tag_EncAPRepPart = 27 };
struct EncAPRepPart {
  KerberosTime ctime;
  Krb5Int32 cusec;
  EncryptionKey *subkey;
  Krb5UInt32 *seq_number;
};

ASN1EXP int    ASN1CALL decode_EncAPRepPart(const unsigned char *, size_t, EncAPRepPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncAPRepPart(unsigned char *, size_t, const EncAPRepPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncAPRepPart(const EncAPRepPart *);
ASN1EXP int    ASN1CALL copy_EncAPRepPart  (const EncAPRepPart *, EncAPRepPart *);
ASN1EXP void   ASN1CALL free_EncAPRepPart  (EncAPRepPart *);
ASN1EXP char * ASN1CALL print_EncAPRepPart (const EncAPRepPart *, int);


/*
KRB-SAFE-BODY ::= SEQUENCE {
  user-data       [0] OCTET STRING,
  timestamp       [1] KerberosTime OPTIONAL,
  usec            [2] Krb5Int32 OPTIONAL,
  seq-number      [3] Krb5UInt32 OPTIONAL,
  s-address       [4] HostAddress OPTIONAL,
  r-address       [5] HostAddress OPTIONAL,
}
*/

enum { asn1_tag_length_KRB_SAFE_BODY = 1,
       asn1_tag_class_KRB_SAFE_BODY = 0,
       asn1_tag_tag_KRB_SAFE_BODY = 16 };
struct KRB_SAFE_BODY {
  heim_octet_string user_data;
  KerberosTime *timestamp;
  Krb5Int32 *usec;
  Krb5UInt32 *seq_number;
  HostAddress *s_address;
  HostAddress *r_address;
};

ASN1EXP int    ASN1CALL decode_KRB_SAFE_BODY(const unsigned char *, size_t, KRB_SAFE_BODY *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB_SAFE_BODY(unsigned char *, size_t, const KRB_SAFE_BODY *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB_SAFE_BODY(const KRB_SAFE_BODY *);
ASN1EXP int    ASN1CALL copy_KRB_SAFE_BODY  (const KRB_SAFE_BODY *, KRB_SAFE_BODY *);
ASN1EXP void   ASN1CALL free_KRB_SAFE_BODY  (KRB_SAFE_BODY *);
ASN1EXP char * ASN1CALL print_KRB_SAFE_BODY (const KRB_SAFE_BODY *, int);


/*
KRB-SAFE ::= [APPLICATION 20] SEQUENCE {
  pvno            [0] Krb5Int32,
  msg-type        [1] MESSAGE-TYPE,
  safe-body       [2] KRB-SAFE-BODY,
  cksum           [3] Checksum,
}
*/

enum { asn1_tag_length_KRB_SAFE = 1,
       asn1_tag_class_KRB_SAFE = 1,
       asn1_tag_tag_KRB_SAFE = 20 };
struct KRB_SAFE {
  Krb5Int32 pvno;
  MESSAGE_TYPE msg_type;
  KRB_SAFE_BODY safe_body;
  Checksum cksum;
};

ASN1EXP int    ASN1CALL decode_KRB_SAFE(const unsigned char *, size_t, KRB_SAFE *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB_SAFE(unsigned char *, size_t, const KRB_SAFE *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB_SAFE(const KRB_SAFE *);
ASN1EXP int    ASN1CALL copy_KRB_SAFE  (const KRB_SAFE *, KRB_SAFE *);
ASN1EXP void   ASN1CALL free_KRB_SAFE  (KRB_SAFE *);
ASN1EXP char * ASN1CALL print_KRB_SAFE (const KRB_SAFE *, int);


/*
KRB-PRIV ::= [APPLICATION 21] SEQUENCE {
  pvno            [0] Krb5Int32,
  msg-type        [1] MESSAGE-TYPE,
  enc-part        [3] EncryptedData,
}
*/

enum { asn1_tag_length_KRB_PRIV = 1,
       asn1_tag_class_KRB_PRIV = 1,
       asn1_tag_tag_KRB_PRIV = 21 };
struct KRB_PRIV {
  Krb5Int32 pvno;
  MESSAGE_TYPE msg_type;
  EncryptedData enc_part;
};

ASN1EXP int    ASN1CALL decode_KRB_PRIV(const unsigned char *, size_t, KRB_PRIV *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB_PRIV(unsigned char *, size_t, const KRB_PRIV *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB_PRIV(const KRB_PRIV *);
ASN1EXP int    ASN1CALL copy_KRB_PRIV  (const KRB_PRIV *, KRB_PRIV *);
ASN1EXP void   ASN1CALL free_KRB_PRIV  (KRB_PRIV *);
ASN1EXP char * ASN1CALL print_KRB_PRIV (const KRB_PRIV *, int);


/*
EncKrbPrivPart ::= [APPLICATION 28] SEQUENCE {
  user-data       [0] OCTET STRING,
  timestamp       [1] KerberosTime OPTIONAL,
  usec            [2] Krb5Int32 OPTIONAL,
  seq-number      [3] Krb5UInt32 OPTIONAL,
  s-address       [4] HostAddress OPTIONAL,
  r-address       [5] HostAddress OPTIONAL,
}
*/

enum { asn1_tag_length_EncKrbPrivPart = 1,
       asn1_tag_class_EncKrbPrivPart = 1,
       asn1_tag_tag_EncKrbPrivPart = 28 };
struct EncKrbPrivPart {
  heim_octet_string user_data;
  KerberosTime *timestamp;
  Krb5Int32 *usec;
  Krb5UInt32 *seq_number;
  HostAddress *s_address;
  HostAddress *r_address;
};

ASN1EXP int    ASN1CALL decode_EncKrbPrivPart(const unsigned char *, size_t, EncKrbPrivPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncKrbPrivPart(unsigned char *, size_t, const EncKrbPrivPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncKrbPrivPart(const EncKrbPrivPart *);
ASN1EXP int    ASN1CALL copy_EncKrbPrivPart  (const EncKrbPrivPart *, EncKrbPrivPart *);
ASN1EXP void   ASN1CALL free_EncKrbPrivPart  (EncKrbPrivPart *);
ASN1EXP char * ASN1CALL print_EncKrbPrivPart (const EncKrbPrivPart *, int);


/*
KRB-CRED ::= [APPLICATION 22] SEQUENCE {
  pvno            [0] Krb5Int32,
  msg-type        [1] MESSAGE-TYPE,
  tickets         [2] SEQUENCE OF Ticket,
  enc-part        [3] EncryptedData,
}
*/

enum { asn1_tag_length_KRB_CRED = 1,
       asn1_tag_class_KRB_CRED = 1,
       asn1_tag_tag_KRB_CRED = 22 };
struct KRB_CRED {
  Krb5Int32 pvno;
  MESSAGE_TYPE msg_type;
  struct KRB_CRED_tickets {
    unsigned int len;
    Ticket *val;
  } tickets;
  EncryptedData enc_part;
};

ASN1EXP int    ASN1CALL decode_KRB_CRED(const unsigned char *, size_t, KRB_CRED *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB_CRED(unsigned char *, size_t, const KRB_CRED *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB_CRED(const KRB_CRED *);
ASN1EXP int    ASN1CALL copy_KRB_CRED  (const KRB_CRED *, KRB_CRED *);
ASN1EXP void   ASN1CALL free_KRB_CRED  (KRB_CRED *);
ASN1EXP char * ASN1CALL print_KRB_CRED (const KRB_CRED *, int);


/*
KrbCredInfo ::= SEQUENCE {
  key             [0] EncryptionKey,
  prealm          [1] Realm OPTIONAL,
  pname           [2] PrincipalName OPTIONAL,
  flags           [3] TicketFlags OPTIONAL,
  authtime        [4] KerberosTime OPTIONAL,
  starttime       [5] KerberosTime OPTIONAL,
  endtime         [6] KerberosTime OPTIONAL,
  renew-till      [7] KerberosTime OPTIONAL,
  srealm          [8] Realm OPTIONAL,
  sname           [9] PrincipalName OPTIONAL,
  caddr           [10] HostAddresses OPTIONAL,
}
*/

enum { asn1_tag_length_KrbCredInfo = 1,
       asn1_tag_class_KrbCredInfo = 0,
       asn1_tag_tag_KrbCredInfo = 16 };
struct KrbCredInfo {
  EncryptionKey key;
  Realm *prealm;
  PrincipalName *pname;
  TicketFlags *flags;
  KerberosTime *authtime;
  KerberosTime *starttime;
  KerberosTime *endtime;
  KerberosTime *renew_till;
  Realm *srealm;
  PrincipalName *sname;
  HostAddresses *caddr;
};

ASN1EXP int    ASN1CALL decode_KrbCredInfo(const unsigned char *, size_t, KrbCredInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_KrbCredInfo(unsigned char *, size_t, const KrbCredInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_KrbCredInfo(const KrbCredInfo *);
ASN1EXP int    ASN1CALL copy_KrbCredInfo  (const KrbCredInfo *, KrbCredInfo *);
ASN1EXP void   ASN1CALL free_KrbCredInfo  (KrbCredInfo *);
ASN1EXP char * ASN1CALL print_KrbCredInfo (const KrbCredInfo *, int);


/*
EncKrbCredPart ::= [APPLICATION 29] SEQUENCE {
  ticket-info     [0] SEQUENCE OF KrbCredInfo,
  nonce           [1] Krb5Int32 OPTIONAL,
  timestamp       [2] KerberosTime OPTIONAL,
  usec            [3] Krb5Int32 OPTIONAL,
  s-address       [4] HostAddress OPTIONAL,
  r-address       [5] HostAddress OPTIONAL,
}
*/

enum { asn1_tag_length_EncKrbCredPart = 1,
       asn1_tag_class_EncKrbCredPart = 1,
       asn1_tag_tag_EncKrbCredPart = 29 };
struct EncKrbCredPart {
  struct EncKrbCredPart_ticket_info {
    unsigned int len;
    KrbCredInfo *val;
  } ticket_info;
  Krb5Int32 *nonce;
  KerberosTime *timestamp;
  Krb5Int32 *usec;
  HostAddress *s_address;
  HostAddress *r_address;
};

ASN1EXP int    ASN1CALL decode_EncKrbCredPart(const unsigned char *, size_t, EncKrbCredPart *, size_t *);
ASN1EXP int    ASN1CALL encode_EncKrbCredPart(unsigned char *, size_t, const EncKrbCredPart *, size_t *);
ASN1EXP size_t ASN1CALL length_EncKrbCredPart(const EncKrbCredPart *);
ASN1EXP int    ASN1CALL copy_EncKrbCredPart  (const EncKrbCredPart *, EncKrbCredPart *);
ASN1EXP void   ASN1CALL free_EncKrbCredPart  (EncKrbCredPart *);
ASN1EXP char * ASN1CALL print_EncKrbCredPart (const EncKrbCredPart *, int);


/*
KRB-ERROR ::= [APPLICATION 30] SEQUENCE {
  pvno            [0] Krb5Int32,
  msg-type        [1] MESSAGE-TYPE,
  ctime           [2] KerberosTime OPTIONAL,
  cusec           [3] Krb5Int32 OPTIONAL,
  stime           [4] KerberosTime,
  susec           [5] Krb5Int32,
  error-code      [6] Krb5Int32,
  crealm          [7] Realm OPTIONAL,
  cname           [8] PrincipalName OPTIONAL,
  realm           [9] Realm,
  sname           [10] PrincipalName,
  e-text          [11] GeneralString OPTIONAL,
  e-data          [12] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_KRB_ERROR = 1,
       asn1_tag_class_KRB_ERROR = 1,
       asn1_tag_tag_KRB_ERROR = 30 };
struct KRB_ERROR {
  Krb5Int32 pvno;
  MESSAGE_TYPE msg_type;
  KerberosTime *ctime;
  Krb5Int32 *cusec;
  KerberosTime stime;
  Krb5Int32 susec;
  Krb5Int32 error_code;
  Realm *crealm;
  PrincipalName *cname;
  Realm realm;
  PrincipalName sname;
  heim_general_string *e_text;
  heim_octet_string *e_data;
};

ASN1EXP int    ASN1CALL decode_KRB_ERROR(const unsigned char *, size_t, KRB_ERROR *, size_t *);
ASN1EXP int    ASN1CALL encode_KRB_ERROR(unsigned char *, size_t, const KRB_ERROR *, size_t *);
ASN1EXP size_t ASN1CALL length_KRB_ERROR(const KRB_ERROR *);
ASN1EXP int    ASN1CALL copy_KRB_ERROR  (const KRB_ERROR *, KRB_ERROR *);
ASN1EXP void   ASN1CALL free_KRB_ERROR  (KRB_ERROR *);
ASN1EXP char * ASN1CALL print_KRB_ERROR (const KRB_ERROR *, int);


/*
ChangePasswdDataMS ::= SEQUENCE {
  newpasswd       [0] OCTET STRING,
  targname        [1] PrincipalName OPTIONAL,
  targrealm       [2] Realm OPTIONAL,
}
*/

enum { asn1_tag_length_ChangePasswdDataMS = 1,
       asn1_tag_class_ChangePasswdDataMS = 0,
       asn1_tag_tag_ChangePasswdDataMS = 16 };
struct ChangePasswdDataMS {
  heim_octet_string newpasswd;
  PrincipalName *targname;
  Realm *targrealm;
};

ASN1EXP int    ASN1CALL decode_ChangePasswdDataMS(const unsigned char *, size_t, ChangePasswdDataMS *, size_t *);
ASN1EXP int    ASN1CALL encode_ChangePasswdDataMS(unsigned char *, size_t, const ChangePasswdDataMS *, size_t *);
ASN1EXP size_t ASN1CALL length_ChangePasswdDataMS(const ChangePasswdDataMS *);
ASN1EXP int    ASN1CALL copy_ChangePasswdDataMS  (const ChangePasswdDataMS *, ChangePasswdDataMS *);
ASN1EXP void   ASN1CALL free_ChangePasswdDataMS  (ChangePasswdDataMS *);
ASN1EXP char * ASN1CALL print_ChangePasswdDataMS (const ChangePasswdDataMS *, int);


/*
EtypeList ::= SEQUENCE OF ENCTYPE
*/

enum { asn1_tag_length_EtypeList = 1,
       asn1_tag_class_EtypeList = 0,
       asn1_tag_tag_EtypeList = 16 };
struct EtypeList {
  unsigned int len;
  ENCTYPE *val;
};

ASN1EXP int    ASN1CALL decode_EtypeList(const unsigned char *, size_t, EtypeList *, size_t *);
ASN1EXP int    ASN1CALL encode_EtypeList(unsigned char *, size_t, const EtypeList *, size_t *);
ASN1EXP size_t ASN1CALL length_EtypeList(const EtypeList *);
ASN1EXP int    ASN1CALL copy_EtypeList  (const EtypeList *, EtypeList *);
ASN1EXP void   ASN1CALL free_EtypeList  (EtypeList *);
ASN1EXP char * ASN1CALL print_EtypeList (const EtypeList *, int);


/*
AD-IF-RELEVANT ::= AuthorizationData
*/

enum { asn1_tag_length_AD_IF_RELEVANT = 1,
       asn1_tag_class_AD_IF_RELEVANT = 0,
       asn1_tag_tag_AD_IF_RELEVANT = 0 };

ASN1EXP int    ASN1CALL decode_AD_IF_RELEVANT(const unsigned char *, size_t, AD_IF_RELEVANT *, size_t *);
ASN1EXP int    ASN1CALL encode_AD_IF_RELEVANT(unsigned char *, size_t, const AD_IF_RELEVANT *, size_t *);
ASN1EXP size_t ASN1CALL length_AD_IF_RELEVANT(const AD_IF_RELEVANT *);
ASN1EXP int    ASN1CALL copy_AD_IF_RELEVANT  (const AD_IF_RELEVANT *, AD_IF_RELEVANT *);
ASN1EXP void   ASN1CALL free_AD_IF_RELEVANT  (AD_IF_RELEVANT *);
ASN1EXP char * ASN1CALL print_AD_IF_RELEVANT (const AD_IF_RELEVANT *, int);


/*
AD-KDCIssued ::= SEQUENCE {
  ad-checksum     [0] Checksum,
  i-realm         [1] Realm OPTIONAL,
  i-sname         [2] PrincipalName OPTIONAL,
  elements        [3] AuthorizationData,
}
*/

enum { asn1_tag_length_AD_KDCIssued = 1,
       asn1_tag_class_AD_KDCIssued = 0,
       asn1_tag_tag_AD_KDCIssued = 16 };
struct AD_KDCIssued {
  Checksum ad_checksum;
  Realm *i_realm;
  PrincipalName *i_sname;
  AuthorizationData elements;
};

ASN1EXP int    ASN1CALL decode_AD_KDCIssued(const unsigned char *, size_t, AD_KDCIssued *, size_t *);
ASN1EXP int    ASN1CALL encode_AD_KDCIssued(unsigned char *, size_t, const AD_KDCIssued *, size_t *);
ASN1EXP size_t ASN1CALL length_AD_KDCIssued(const AD_KDCIssued *);
ASN1EXP int    ASN1CALL copy_AD_KDCIssued  (const AD_KDCIssued *, AD_KDCIssued *);
ASN1EXP void   ASN1CALL free_AD_KDCIssued  (AD_KDCIssued *);
ASN1EXP char * ASN1CALL print_AD_KDCIssued (const AD_KDCIssued *, int);


/*
AD-AND-OR ::= SEQUENCE {
  condition-count   [0] Krb5Int32,
  elements          [1] AuthorizationData,
}
*/

enum { asn1_tag_length_AD_AND_OR = 1,
       asn1_tag_class_AD_AND_OR = 0,
       asn1_tag_tag_AD_AND_OR = 16 };
struct AD_AND_OR {
  Krb5Int32 condition_count;
  AuthorizationData elements;
};

ASN1EXP int    ASN1CALL decode_AD_AND_OR(const unsigned char *, size_t, AD_AND_OR *, size_t *);
ASN1EXP int    ASN1CALL encode_AD_AND_OR(unsigned char *, size_t, const AD_AND_OR *, size_t *);
ASN1EXP size_t ASN1CALL length_AD_AND_OR(const AD_AND_OR *);
ASN1EXP int    ASN1CALL copy_AD_AND_OR  (const AD_AND_OR *, AD_AND_OR *);
ASN1EXP void   ASN1CALL free_AD_AND_OR  (AD_AND_OR *);
ASN1EXP char * ASN1CALL print_AD_AND_OR (const AD_AND_OR *, int);


/*
AD-MANDATORY-FOR-KDC ::= AuthorizationData
*/

enum { asn1_tag_length_AD_MANDATORY_FOR_KDC = 1,
       asn1_tag_class_AD_MANDATORY_FOR_KDC = 0,
       asn1_tag_tag_AD_MANDATORY_FOR_KDC = 0 };

/*
PA-SAM-TYPE ::= INTEGER {
  PA_SAM_TYPE_ENIGMA(1),
  PA_SAM_TYPE_DIGI_PATH(2),
  PA_SAM_TYPE_SKEY_K0(3),
  PA_SAM_TYPE_SKEY(4),
  PA_SAM_TYPE_SECURID(5),
  PA_SAM_TYPE_CRYPTOCARD(6)
}
*/

enum { asn1_tag_length_PA_SAM_TYPE = 1,
       asn1_tag_class_PA_SAM_TYPE = 0,
       asn1_tag_tag_PA_SAM_TYPE = 2 };
/*
PA-SAM-REDIRECT ::= HostAddresses
*/

enum { asn1_tag_length_PA_SAM_REDIRECT = 1,
       asn1_tag_class_PA_SAM_REDIRECT = 0,
       asn1_tag_tag_PA_SAM_REDIRECT = 0 };

/*
SAMFlags ::= BIT STRING {
  use-sad-as-key(0),
  send-encrypted-sad(1),
  must-pk-encrypt-sad(2)
}
*/

enum { asn1_tag_length_SAMFlags = 1,
       asn1_tag_class_SAMFlags = 0,
       asn1_tag_tag_SAMFlags = 3 };
uint64_t SAMFlags2int(SAMFlags);
SAMFlags int2SAMFlags(uint64_t);
const struct units * asn1_SAMFlags_units(void);
/*
PA-SAM-CHALLENGE-2-BODY ::= SEQUENCE {
  sam-type              [0] Krb5Int32,
  sam-flags             [1] SAMFlags,
  sam-type-name         [2] GeneralString OPTIONAL,
  sam-track-id          [3] GeneralString OPTIONAL,
  sam-challenge-label   [4] GeneralString OPTIONAL,
  sam-challenge         [5] GeneralString OPTIONAL,
  sam-response-prompt   [6] GeneralString OPTIONAL,
  sam-pk-for-sad        [7] EncryptionKey OPTIONAL,
  sam-nonce             [8] Krb5Int32,
  sam-etype             [9] Krb5Int32,
  ...,
}
*/

enum { asn1_tag_length_PA_SAM_CHALLENGE_2_BODY = 1,
       asn1_tag_class_PA_SAM_CHALLENGE_2_BODY = 0,
       asn1_tag_tag_PA_SAM_CHALLENGE_2_BODY = 16 };
struct PA_SAM_CHALLENGE_2_BODY {
  Krb5Int32 sam_type;
  SAMFlags sam_flags;
  heim_general_string *sam_type_name;
  heim_general_string *sam_track_id;
  heim_general_string *sam_challenge_label;
  heim_general_string *sam_challenge;
  heim_general_string *sam_response_prompt;
  EncryptionKey *sam_pk_for_sad;
  Krb5Int32 sam_nonce;
  Krb5Int32 sam_etype;
};

/*
PA-SAM-CHALLENGE-2 ::= SEQUENCE {
  sam-body        [0] PA-SAM-CHALLENGE-2-BODY,
  sam-cksum       [1] SEQUENCE OF Checksum,
  ...,
}
*/

enum { asn1_tag_length_PA_SAM_CHALLENGE_2 = 1,
       asn1_tag_class_PA_SAM_CHALLENGE_2 = 0,
       asn1_tag_tag_PA_SAM_CHALLENGE_2 = 16 };
struct PA_SAM_CHALLENGE_2 {
  PA_SAM_CHALLENGE_2_BODY sam_body;
  struct PA_SAM_CHALLENGE_2_sam_cksum {
    unsigned int len;
    Checksum *val;
  } sam_cksum;
};

/*
PA-SAM-RESPONSE-2 ::= SEQUENCE {
  sam-type               [0] Krb5Int32,
  sam-flags              [1] SAMFlags,
  sam-track-id           [2] GeneralString OPTIONAL,
  sam-enc-nonce-or-sad   [3] EncryptedData,
  sam-nonce              [4] Krb5Int32,
  ...,
}
*/

enum { asn1_tag_length_PA_SAM_RESPONSE_2 = 1,
       asn1_tag_class_PA_SAM_RESPONSE_2 = 0,
       asn1_tag_tag_PA_SAM_RESPONSE_2 = 16 };
struct PA_SAM_RESPONSE_2 {
  Krb5Int32 sam_type;
  SAMFlags sam_flags;
  heim_general_string *sam_track_id;
  EncryptedData sam_enc_nonce_or_sad;
  Krb5Int32 sam_nonce;
};

/*
PA-ENC-SAM-RESPONSE-ENC ::= SEQUENCE {
  sam-nonce       [0] Krb5Int32,
  sam-sad         [1] GeneralString OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_PA_ENC_SAM_RESPONSE_ENC = 1,
       asn1_tag_class_PA_ENC_SAM_RESPONSE_ENC = 0,
       asn1_tag_tag_PA_ENC_SAM_RESPONSE_ENC = 16 };
struct PA_ENC_SAM_RESPONSE_ENC {
  Krb5Int32 sam_nonce;
  heim_general_string *sam_sad;
};

/*
PA-S4U2Self ::= SEQUENCE {
  name            [0] PrincipalName,
  realm           [1] Realm,
  cksum           [2] Checksum,
  auth            [3] GeneralString,
}
*/

enum { asn1_tag_length_PA_S4U2Self = 1,
       asn1_tag_class_PA_S4U2Self = 0,
       asn1_tag_tag_PA_S4U2Self = 16 };
struct PA_S4U2Self {
  PrincipalName name;
  Realm realm;
  Checksum cksum;
  heim_general_string auth;
};

ASN1EXP int    ASN1CALL decode_PA_S4U2Self(const unsigned char *, size_t, PA_S4U2Self *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_S4U2Self(unsigned char *, size_t, const PA_S4U2Self *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_S4U2Self(const PA_S4U2Self *);
ASN1EXP int    ASN1CALL copy_PA_S4U2Self  (const PA_S4U2Self *, PA_S4U2Self *);
ASN1EXP void   ASN1CALL free_PA_S4U2Self  (PA_S4U2Self *);
ASN1EXP char * ASN1CALL print_PA_S4U2Self (const PA_S4U2Self *, int);


/*
S4UUserID ::= SEQUENCE {
  nonce                 [0] Krb5UInt32,
  cname                 [1] PrincipalName OPTIONAL,
  crealm                [2] Realm,
  subject-certificate   [3] OCTET STRING OPTIONAL,
  options               [4]   BIT STRING {
  } OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_S4UUserID = 1,
       asn1_tag_class_S4UUserID = 0,
       asn1_tag_tag_S4UUserID = 16 };
struct S4UUserID {
  Krb5UInt32 nonce;
  PrincipalName *cname;
  Realm crealm;
  heim_octet_string *subject_certificate;
  heim_bit_string *options;
};

/*
PA-S4U-X509-USER ::= SEQUENCE {
  user-id         [0] S4UUserID,
  checksum        [1] Checksum,
}
*/

enum { asn1_tag_length_PA_S4U_X509_USER = 1,
       asn1_tag_class_PA_S4U_X509_USER = 0,
       asn1_tag_tag_PA_S4U_X509_USER = 16 };
struct PA_S4U_X509_USER {
  S4UUserID user_id;
  Checksum checksum;
};

ASN1EXP int    ASN1CALL decode_PA_S4U_X509_USER(const unsigned char *, size_t, PA_S4U_X509_USER *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_S4U_X509_USER(unsigned char *, size_t, const PA_S4U_X509_USER *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_S4U_X509_USER(const PA_S4U_X509_USER *);
ASN1EXP int    ASN1CALL copy_PA_S4U_X509_USER  (const PA_S4U_X509_USER *, PA_S4U_X509_USER *);
ASN1EXP void   ASN1CALL free_PA_S4U_X509_USER  (PA_S4U_X509_USER *);
ASN1EXP char * ASN1CALL print_PA_S4U_X509_USER (const PA_S4U_X509_USER *, int);


/*
AD-LoginAlias ::= SEQUENCE {
  login-alias     [0] PrincipalName,
  checksum        [1] Checksum,
}
*/

enum { asn1_tag_length_AD_LoginAlias = 1,
       asn1_tag_class_AD_LoginAlias = 0,
       asn1_tag_tag_AD_LoginAlias = 16 };
struct AD_LoginAlias {
  PrincipalName login_alias;
  Checksum checksum;
};

ASN1EXP int    ASN1CALL decode_AD_LoginAlias(const unsigned char *, size_t, AD_LoginAlias *, size_t *);
ASN1EXP int    ASN1CALL encode_AD_LoginAlias(unsigned char *, size_t, const AD_LoginAlias *, size_t *);
ASN1EXP size_t ASN1CALL length_AD_LoginAlias(const AD_LoginAlias *);
ASN1EXP int    ASN1CALL copy_AD_LoginAlias  (const AD_LoginAlias *, AD_LoginAlias *);
ASN1EXP void   ASN1CALL free_AD_LoginAlias  (AD_LoginAlias *);
ASN1EXP char * ASN1CALL print_AD_LoginAlias (const AD_LoginAlias *, int);


/*
PA-SvrReferralData ::= SEQUENCE {
  referred-name    [1] PrincipalName OPTIONAL,
  referred-realm   [0] Realm,
}
*/

enum { asn1_tag_length_PA_SvrReferralData = 1,
       asn1_tag_class_PA_SvrReferralData = 0,
       asn1_tag_tag_PA_SvrReferralData = 16 };
struct PA_SvrReferralData {
  PrincipalName *referred_name;
  Realm referred_realm;
};

ASN1EXP int    ASN1CALL decode_PA_SvrReferralData(const unsigned char *, size_t, PA_SvrReferralData *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_SvrReferralData(unsigned char *, size_t, const PA_SvrReferralData *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_SvrReferralData(const PA_SvrReferralData *);
ASN1EXP int    ASN1CALL copy_PA_SvrReferralData  (const PA_SvrReferralData *, PA_SvrReferralData *);
ASN1EXP void   ASN1CALL free_PA_SvrReferralData  (PA_SvrReferralData *);
ASN1EXP char * ASN1CALL print_PA_SvrReferralData (const PA_SvrReferralData *, int);


/*
PA-SERVER-REFERRAL-DATA ::= EncryptedData
*/

enum { asn1_tag_length_PA_SERVER_REFERRAL_DATA = 1,
       asn1_tag_class_PA_SERVER_REFERRAL_DATA = 0,
       asn1_tag_tag_PA_SERVER_REFERRAL_DATA = 0 };

ASN1EXP int    ASN1CALL decode_PA_SERVER_REFERRAL_DATA(const unsigned char *, size_t, PA_SERVER_REFERRAL_DATA *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_SERVER_REFERRAL_DATA(unsigned char *, size_t, const PA_SERVER_REFERRAL_DATA *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_SERVER_REFERRAL_DATA(const PA_SERVER_REFERRAL_DATA *);
ASN1EXP int    ASN1CALL copy_PA_SERVER_REFERRAL_DATA  (const PA_SERVER_REFERRAL_DATA *, PA_SERVER_REFERRAL_DATA *);
ASN1EXP void   ASN1CALL free_PA_SERVER_REFERRAL_DATA  (PA_SERVER_REFERRAL_DATA *);
ASN1EXP char * ASN1CALL print_PA_SERVER_REFERRAL_DATA (const PA_SERVER_REFERRAL_DATA *, int);


/*
PA-ServerReferralData ::= SEQUENCE {
  referred-realm             [0] Realm OPTIONAL,
  true-principal-name        [1] PrincipalName OPTIONAL,
  requested-principal-name   [2] PrincipalName OPTIONAL,
  referral-valid-until       [3] KerberosTime OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_PA_ServerReferralData = 1,
       asn1_tag_class_PA_ServerReferralData = 0,
       asn1_tag_tag_PA_ServerReferralData = 16 };
struct PA_ServerReferralData {
  Realm *referred_realm;
  PrincipalName *true_principal_name;
  PrincipalName *requested_principal_name;
  KerberosTime *referral_valid_until;
};

ASN1EXP int    ASN1CALL decode_PA_ServerReferralData(const unsigned char *, size_t, PA_ServerReferralData *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_ServerReferralData(unsigned char *, size_t, const PA_ServerReferralData *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_ServerReferralData(const PA_ServerReferralData *);
ASN1EXP int    ASN1CALL copy_PA_ServerReferralData  (const PA_ServerReferralData *, PA_ServerReferralData *);
ASN1EXP void   ASN1CALL free_PA_ServerReferralData  (PA_ServerReferralData *);
ASN1EXP char * ASN1CALL print_PA_ServerReferralData (const PA_ServerReferralData *, int);


/*
FastOptions ::= BIT STRING {
  reserved(0),
  hide-client-names(1),
  critical2(2),
  critical3(3),
  critical4(4),
  critical5(5),
  critical6(6),
  critical7(7),
  critical8(8),
  critical9(9),
  critical10(10),
  critical11(11),
  critical12(12),
  critical13(13),
  critical14(14),
  critical15(15),
  kdc-follow-referrals(16)
}
*/

enum { asn1_tag_length_FastOptions = 1,
       asn1_tag_class_FastOptions = 0,
       asn1_tag_tag_FastOptions = 3 };
uint64_t FastOptions2int(FastOptions);
FastOptions int2FastOptions(uint64_t);
const struct units * asn1_FastOptions_units(void);
/*
KrbFastReq ::= SEQUENCE {
  fast-options    [0] FastOptions,
  padata          [1] METHOD-DATA,
  req-body        [2] KDC-REQ-BODY,
  ...,
}
*/

enum { asn1_tag_length_KrbFastReq = 1,
       asn1_tag_class_KrbFastReq = 0,
       asn1_tag_tag_KrbFastReq = 16 };
struct KrbFastReq {
  FastOptions fast_options;
  METHOD_DATA padata;
  KDC_REQ_BODY req_body;
};

ASN1EXP int    ASN1CALL decode_KrbFastReq(const unsigned char *, size_t, KrbFastReq *, size_t *);
ASN1EXP int    ASN1CALL encode_KrbFastReq(unsigned char *, size_t, const KrbFastReq *, size_t *);
ASN1EXP size_t ASN1CALL length_KrbFastReq(const KrbFastReq *);
ASN1EXP int    ASN1CALL copy_KrbFastReq  (const KrbFastReq *, KrbFastReq *);
ASN1EXP void   ASN1CALL free_KrbFastReq  (KrbFastReq *);
ASN1EXP char * ASN1CALL print_KrbFastReq (const KrbFastReq *, int);


/*
KrbFastArmor ::= SEQUENCE {
  armor-type      [0] Krb5Int32,
  armor-value     [1] OCTET STRING,
  ...,
}
*/

enum { asn1_tag_length_KrbFastArmor = 1,
       asn1_tag_class_KrbFastArmor = 0,
       asn1_tag_tag_KrbFastArmor = 16 };
struct KrbFastArmor {
  Krb5Int32 armor_type;
  heim_octet_string armor_value;
};

ASN1EXP int    ASN1CALL decode_KrbFastArmor(const unsigned char *, size_t, KrbFastArmor *, size_t *);
ASN1EXP int    ASN1CALL encode_KrbFastArmor(unsigned char *, size_t, const KrbFastArmor *, size_t *);
ASN1EXP size_t ASN1CALL length_KrbFastArmor(const KrbFastArmor *);
ASN1EXP int    ASN1CALL copy_KrbFastArmor  (const KrbFastArmor *, KrbFastArmor *);
ASN1EXP void   ASN1CALL free_KrbFastArmor  (KrbFastArmor *);
ASN1EXP char * ASN1CALL print_KrbFastArmor (const KrbFastArmor *, int);


/*
KrbFastArmoredReq ::= SEQUENCE {
  armor           [0] KrbFastArmor OPTIONAL,
  req-checksum    [1] Checksum,
  enc-fast-req    [2] EncryptedData,
}
*/

enum { asn1_tag_length_KrbFastArmoredReq = 1,
       asn1_tag_class_KrbFastArmoredReq = 0,
       asn1_tag_tag_KrbFastArmoredReq = 16 };
struct KrbFastArmoredReq {
  KrbFastArmor *armor;
  Checksum req_checksum;
  EncryptedData enc_fast_req;
};

ASN1EXP int    ASN1CALL decode_KrbFastArmoredReq(const unsigned char *, size_t, KrbFastArmoredReq *, size_t *);
ASN1EXP int    ASN1CALL encode_KrbFastArmoredReq(unsigned char *, size_t, const KrbFastArmoredReq *, size_t *);
ASN1EXP size_t ASN1CALL length_KrbFastArmoredReq(const KrbFastArmoredReq *);
ASN1EXP int    ASN1CALL copy_KrbFastArmoredReq  (const KrbFastArmoredReq *, KrbFastArmoredReq *);
ASN1EXP void   ASN1CALL free_KrbFastArmoredReq  (KrbFastArmoredReq *);
ASN1EXP char * ASN1CALL print_KrbFastArmoredReq (const KrbFastArmoredReq *, int);


/*
PA-FX-FAST-REQUEST ::= CHOICE {
  armored-data    [0] KrbFastArmoredReq,
  ...,
}
*/

enum { asn1_tag_length_PA_FX_FAST_REQUEST = 1,
       asn1_tag_class_PA_FX_FAST_REQUEST = 0,
       asn1_tag_tag_PA_FX_FAST_REQUEST = 0 };
struct PA_FX_FAST_REQUEST {
  enum PA_FX_FAST_REQUEST_enum {
    choice_PA_FX_FAST_REQUEST_asn1_ellipsis = 0,
    choice_PA_FX_FAST_REQUEST_armored_data
    /* ... */
  } element;
  union {
    KrbFastArmoredReq armored_data;
    heim_octet_string asn1_ellipsis;
  } u;
};

ASN1EXP int    ASN1CALL decode_PA_FX_FAST_REQUEST(const unsigned char *, size_t, PA_FX_FAST_REQUEST *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_FX_FAST_REQUEST(unsigned char *, size_t, const PA_FX_FAST_REQUEST *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_FX_FAST_REQUEST(const PA_FX_FAST_REQUEST *);
ASN1EXP int    ASN1CALL copy_PA_FX_FAST_REQUEST  (const PA_FX_FAST_REQUEST *, PA_FX_FAST_REQUEST *);
ASN1EXP void   ASN1CALL free_PA_FX_FAST_REQUEST  (PA_FX_FAST_REQUEST *);
ASN1EXP char * ASN1CALL print_PA_FX_FAST_REQUEST (const PA_FX_FAST_REQUEST *, int);


/*
KrbFastFinished ::= SEQUENCE {
  timestamp         [0] KerberosTime,
  usec              [1] Krb5Int32,
  crealm            [2] Realm,
  cname             [3] PrincipalName,
  ticket-checksum   [4] Checksum,
  ...,
}
*/

enum { asn1_tag_length_KrbFastFinished = 1,
       asn1_tag_class_KrbFastFinished = 0,
       asn1_tag_tag_KrbFastFinished = 16 };
struct KrbFastFinished {
  KerberosTime timestamp;
  Krb5Int32 usec;
  Realm crealm;
  PrincipalName cname;
  Checksum ticket_checksum;
};

ASN1EXP int    ASN1CALL decode_KrbFastFinished(const unsigned char *, size_t, KrbFastFinished *, size_t *);
ASN1EXP int    ASN1CALL encode_KrbFastFinished(unsigned char *, size_t, const KrbFastFinished *, size_t *);
ASN1EXP size_t ASN1CALL length_KrbFastFinished(const KrbFastFinished *);
ASN1EXP int    ASN1CALL copy_KrbFastFinished  (const KrbFastFinished *, KrbFastFinished *);
ASN1EXP void   ASN1CALL free_KrbFastFinished  (KrbFastFinished *);
ASN1EXP char * ASN1CALL print_KrbFastFinished (const KrbFastFinished *, int);


/*
KrbFastResponse ::= SEQUENCE {
  padata           [0] METHOD-DATA,
  strengthen-key   [1] EncryptionKey OPTIONAL,
  finished         [2] KrbFastFinished OPTIONAL,
  nonce            [3] Krb5UInt32,
  ...,
}
*/

enum { asn1_tag_length_KrbFastResponse = 1,
       asn1_tag_class_KrbFastResponse = 0,
       asn1_tag_tag_KrbFastResponse = 16 };
struct KrbFastResponse {
  METHOD_DATA padata;
  EncryptionKey *strengthen_key;
  KrbFastFinished *finished;
  Krb5UInt32 nonce;
};

ASN1EXP int    ASN1CALL decode_KrbFastResponse(const unsigned char *, size_t, KrbFastResponse *, size_t *);
ASN1EXP int    ASN1CALL encode_KrbFastResponse(unsigned char *, size_t, const KrbFastResponse *, size_t *);
ASN1EXP size_t ASN1CALL length_KrbFastResponse(const KrbFastResponse *);
ASN1EXP int    ASN1CALL copy_KrbFastResponse  (const KrbFastResponse *, KrbFastResponse *);
ASN1EXP void   ASN1CALL free_KrbFastResponse  (KrbFastResponse *);
ASN1EXP char * ASN1CALL print_KrbFastResponse (const KrbFastResponse *, int);


/*
KrbFastArmoredRep ::= SEQUENCE {
  enc-fast-rep    [0] EncryptedData,
  ...,
}
*/

enum { asn1_tag_length_KrbFastArmoredRep = 1,
       asn1_tag_class_KrbFastArmoredRep = 0,
       asn1_tag_tag_KrbFastArmoredRep = 16 };
struct KrbFastArmoredRep {
  EncryptedData enc_fast_rep;
};

/*
PA-FX-FAST-REPLY ::= CHOICE {
  armored-data    [0] KrbFastArmoredRep,
  ...,
}
*/

enum { asn1_tag_length_PA_FX_FAST_REPLY = 1,
       asn1_tag_class_PA_FX_FAST_REPLY = 0,
       asn1_tag_tag_PA_FX_FAST_REPLY = 0 };
struct PA_FX_FAST_REPLY {
  enum PA_FX_FAST_REPLY_enum {
    choice_PA_FX_FAST_REPLY_asn1_ellipsis = 0,
    choice_PA_FX_FAST_REPLY_armored_data
    /* ... */
  } element;
  union {
    KrbFastArmoredRep armored_data;
    heim_octet_string asn1_ellipsis;
  } u;
};

ASN1EXP int    ASN1CALL decode_PA_FX_FAST_REPLY(const unsigned char *, size_t, PA_FX_FAST_REPLY *, size_t *);
ASN1EXP int    ASN1CALL encode_PA_FX_FAST_REPLY(unsigned char *, size_t, const PA_FX_FAST_REPLY *, size_t *);
ASN1EXP size_t ASN1CALL length_PA_FX_FAST_REPLY(const PA_FX_FAST_REPLY *);
ASN1EXP int    ASN1CALL copy_PA_FX_FAST_REPLY  (const PA_FX_FAST_REPLY *, PA_FX_FAST_REPLY *);
ASN1EXP void   ASN1CALL free_PA_FX_FAST_REPLY  (PA_FX_FAST_REPLY *);
ASN1EXP char * ASN1CALL print_PA_FX_FAST_REPLY (const PA_FX_FAST_REPLY *, int);


/*
KDCFastFlags ::= BIT STRING {
  use-reply-key(0),
  reply-key-used(1),
  reply-key-replaced(2),
  kdc-verified(3),
  requested-hidden-names(4)
}
*/

enum { asn1_tag_length_KDCFastFlags = 1,
       asn1_tag_class_KDCFastFlags = 0,
       asn1_tag_tag_KDCFastFlags = 3 };
uint64_t KDCFastFlags2int(KDCFastFlags);
KDCFastFlags int2KDCFastFlags(uint64_t);
const struct units * asn1_KDCFastFlags_units(void);
/*
KDCFastState ::= SEQUENCE {
  flags               [0] KDCFastFlags,
  expiration          [1] GeneralizedTime,
  fast-state          [2] METHOD-DATA,
  expected-pa-types   [3] SEQUENCE OF PADATA-TYPE OPTIONAL,
}
*/

enum { asn1_tag_length_KDCFastState = 1,
       asn1_tag_class_KDCFastState = 0,
       asn1_tag_tag_KDCFastState = 16 };
struct KDCFastState {
  KDCFastFlags flags;
  time_t expiration;
  METHOD_DATA fast_state;
  struct KDCFastState_expected_pa_types {
    unsigned int len;
    PADATA_TYPE *val;
  } *expected_pa_types;
};

ASN1EXP int    ASN1CALL decode_KDCFastState(const unsigned char *, size_t, KDCFastState *, size_t *);
ASN1EXP int    ASN1CALL encode_KDCFastState(unsigned char *, size_t, const KDCFastState *, size_t *);
ASN1EXP size_t ASN1CALL length_KDCFastState(const KDCFastState *);
ASN1EXP int    ASN1CALL copy_KDCFastState  (const KDCFastState *, KDCFastState *);
ASN1EXP void   ASN1CALL free_KDCFastState  (KDCFastState *);
ASN1EXP char * ASN1CALL print_KDCFastState (const KDCFastState *, int);


/*
KDCFastCookie ::= SEQUENCE {
  version         [0]   UTF8String,
  cookie          [1] EncryptedData,
}
*/

enum { asn1_tag_length_KDCFastCookie = 1,
       asn1_tag_class_KDCFastCookie = 0,
       asn1_tag_tag_KDCFastCookie = 16 };
struct KDCFastCookie {
  heim_utf8_string version;
  EncryptedData cookie;
};

ASN1EXP int    ASN1CALL decode_KDCFastCookie(const unsigned char *, size_t, KDCFastCookie *, size_t *);
ASN1EXP int    ASN1CALL encode_KDCFastCookie(unsigned char *, size_t, const KDCFastCookie *, size_t *);
ASN1EXP size_t ASN1CALL length_KDCFastCookie(const KDCFastCookie *);
ASN1EXP int    ASN1CALL copy_KDCFastCookie  (const KDCFastCookie *, KDCFastCookie *);
ASN1EXP void   ASN1CALL free_KDCFastCookie  (KDCFastCookie *);
ASN1EXP char * ASN1CALL print_KDCFastCookie (const KDCFastCookie *, int);


/*
KDC-PROXY-MESSAGE ::= SEQUENCE {
  kerb-message     [0] OCTET STRING,
  target-domain    [1] Realm OPTIONAL,
  dclocator-hint   [2] INTEGER OPTIONAL,
}
*/

enum { asn1_tag_length_KDC_PROXY_MESSAGE = 1,
       asn1_tag_class_KDC_PROXY_MESSAGE = 0,
       asn1_tag_tag_KDC_PROXY_MESSAGE = 16 };
struct KDC_PROXY_MESSAGE {
  heim_octet_string kerb_message;
  Realm *target_domain;
  heim_integer *dclocator_hint;
};

ASN1EXP int    ASN1CALL decode_KDC_PROXY_MESSAGE(const unsigned char *, size_t, KDC_PROXY_MESSAGE *, size_t *);
ASN1EXP int    ASN1CALL encode_KDC_PROXY_MESSAGE(unsigned char *, size_t, const KDC_PROXY_MESSAGE *, size_t *);
ASN1EXP size_t ASN1CALL length_KDC_PROXY_MESSAGE(const KDC_PROXY_MESSAGE *);
ASN1EXP int    ASN1CALL copy_KDC_PROXY_MESSAGE  (const KDC_PROXY_MESSAGE *, KDC_PROXY_MESSAGE *);
ASN1EXP void   ASN1CALL free_KDC_PROXY_MESSAGE  (KDC_PROXY_MESSAGE *);
ASN1EXP char * ASN1CALL print_KDC_PROXY_MESSAGE (const KDC_PROXY_MESSAGE *, int);


/*
KERB-TIMES ::= SEQUENCE {
  authtime        [0] KerberosTime,
  starttime       [1] KerberosTime,
  endtime         [2] KerberosTime,
  renew_till      [3] KerberosTime,
}
*/

enum { asn1_tag_length_KERB_TIMES = 1,
       asn1_tag_class_KERB_TIMES = 0,
       asn1_tag_tag_KERB_TIMES = 16 };
struct KERB_TIMES {
  KerberosTime authtime;
  KerberosTime starttime;
  KerberosTime endtime;
  KerberosTime renew_till;
};

ASN1EXP int    ASN1CALL decode_KERB_TIMES(const unsigned char *, size_t, KERB_TIMES *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_TIMES(unsigned char *, size_t, const KERB_TIMES *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_TIMES(const KERB_TIMES *);
ASN1EXP int    ASN1CALL copy_KERB_TIMES  (const KERB_TIMES *, KERB_TIMES *);
ASN1EXP void   ASN1CALL free_KERB_TIMES  (KERB_TIMES *);
ASN1EXP char * ASN1CALL print_KERB_TIMES (const KERB_TIMES *, int);


/*
KERB-CRED ::= SEQUENCE {
  client          [0] Principal,
  server          [1] Principal,
  keyblock        [2] EncryptionKey,
  times           [3] KERB-TIMES,
  ticket          [4] OCTET STRING,
  authdata        [5] OCTET STRING,
  addresses       [6] HostAddresses,
  flags           [7] TicketFlags,
}
*/

enum { asn1_tag_length_KERB_CRED = 1,
       asn1_tag_class_KERB_CRED = 0,
       asn1_tag_tag_KERB_CRED = 16 };
struct KERB_CRED {
  Principal client;
  Principal server;
  EncryptionKey keyblock;
  KERB_TIMES times;
  heim_octet_string ticket;
  heim_octet_string authdata;
  HostAddresses addresses;
  TicketFlags flags;
};

ASN1EXP int    ASN1CALL decode_KERB_CRED(const unsigned char *, size_t, KERB_CRED *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_CRED(unsigned char *, size_t, const KERB_CRED *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_CRED(const KERB_CRED *);
ASN1EXP int    ASN1CALL copy_KERB_CRED  (const KERB_CRED *, KERB_CRED *);
ASN1EXP void   ASN1CALL free_KERB_CRED  (KERB_CRED *);
ASN1EXP char * ASN1CALL print_KERB_CRED (const KERB_CRED *, int);


/*
KERB-TGS-REQ-IN ::= SEQUENCE {
  cache           [0] OCTET STRING,
  addrs           [1] HostAddresses,
  flags           [2] Krb5UInt32,
  imp             [3] Principal OPTIONAL,
  ticket          [4] OCTET STRING OPTIONAL,
  in_cred         [5] KERB-CRED,
  krbtgt          [6] KERB-CRED,
  padata          [7] METHOD-DATA,
}
*/

enum { asn1_tag_length_KERB_TGS_REQ_IN = 1,
       asn1_tag_class_KERB_TGS_REQ_IN = 0,
       asn1_tag_tag_KERB_TGS_REQ_IN = 16 };
struct KERB_TGS_REQ_IN {
  heim_octet_string cache;
  HostAddresses addrs;
  Krb5UInt32 flags;
  Principal *imp;
  heim_octet_string *ticket;
  KERB_CRED in_cred;
  KERB_CRED krbtgt;
  METHOD_DATA padata;
};

ASN1EXP int    ASN1CALL decode_KERB_TGS_REQ_IN(const unsigned char *, size_t, KERB_TGS_REQ_IN *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_TGS_REQ_IN(unsigned char *, size_t, const KERB_TGS_REQ_IN *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_TGS_REQ_IN(const KERB_TGS_REQ_IN *);
ASN1EXP int    ASN1CALL copy_KERB_TGS_REQ_IN  (const KERB_TGS_REQ_IN *, KERB_TGS_REQ_IN *);
ASN1EXP void   ASN1CALL free_KERB_TGS_REQ_IN  (KERB_TGS_REQ_IN *);
ASN1EXP char * ASN1CALL print_KERB_TGS_REQ_IN (const KERB_TGS_REQ_IN *, int);


/*
KERB-TGS-REQ-OUT ::= SEQUENCE {
  subkey          [0] EncryptionKey OPTIONAL,
  t               [1] TGS-REQ,
}
*/

enum { asn1_tag_length_KERB_TGS_REQ_OUT = 1,
       asn1_tag_class_KERB_TGS_REQ_OUT = 0,
       asn1_tag_tag_KERB_TGS_REQ_OUT = 16 };
struct KERB_TGS_REQ_OUT {
  EncryptionKey *subkey;
  TGS_REQ t;
};

ASN1EXP int    ASN1CALL decode_KERB_TGS_REQ_OUT(const unsigned char *, size_t, KERB_TGS_REQ_OUT *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_TGS_REQ_OUT(unsigned char *, size_t, const KERB_TGS_REQ_OUT *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_TGS_REQ_OUT(const KERB_TGS_REQ_OUT *);
ASN1EXP int    ASN1CALL copy_KERB_TGS_REQ_OUT  (const KERB_TGS_REQ_OUT *, KERB_TGS_REQ_OUT *);
ASN1EXP void   ASN1CALL free_KERB_TGS_REQ_OUT  (KERB_TGS_REQ_OUT *);
ASN1EXP char * ASN1CALL print_KERB_TGS_REQ_OUT (const KERB_TGS_REQ_OUT *, int);


/*
KERB-TGS-REP-IN ::= SEQUENCE {
  cache           [0] OCTET STRING,
  subkey          [1] EncryptionKey OPTIONAL,
  in_cred         [2] KERB-CRED,
  t               [3] TGS-REP,
}
*/

enum { asn1_tag_length_KERB_TGS_REP_IN = 1,
       asn1_tag_class_KERB_TGS_REP_IN = 0,
       asn1_tag_tag_KERB_TGS_REP_IN = 16 };
struct KERB_TGS_REP_IN {
  heim_octet_string cache;
  EncryptionKey *subkey;
  KERB_CRED in_cred;
  TGS_REP t;
};

/*
KERB-TGS-REP-OUT ::= SEQUENCE {
  cache           [0] OCTET STRING,
  cred            [1] KERB-CRED,
  subkey          [2] EncryptionKey,
}
*/

enum { asn1_tag_length_KERB_TGS_REP_OUT = 1,
       asn1_tag_class_KERB_TGS_REP_OUT = 0,
       asn1_tag_tag_KERB_TGS_REP_OUT = 16 };
struct KERB_TGS_REP_OUT {
  heim_octet_string cache;
  KERB_CRED cred;
  EncryptionKey subkey;
};

/*
KERB-ARMOR-SERVICE-REPLY ::= SEQUENCE {
  armor           [0] KrbFastArmor,
  armor-key       [1] EncryptionKey,
}
*/

enum { asn1_tag_length_KERB_ARMOR_SERVICE_REPLY = 1,
       asn1_tag_class_KERB_ARMOR_SERVICE_REPLY = 0,
       asn1_tag_tag_KERB_ARMOR_SERVICE_REPLY = 16 };
struct KERB_ARMOR_SERVICE_REPLY {
  KrbFastArmor armor;
  EncryptionKey armor_key;
};

ASN1EXP int    ASN1CALL decode_KERB_ARMOR_SERVICE_REPLY(const unsigned char *, size_t, KERB_ARMOR_SERVICE_REPLY *, size_t *);
ASN1EXP int    ASN1CALL encode_KERB_ARMOR_SERVICE_REPLY(unsigned char *, size_t, const KERB_ARMOR_SERVICE_REPLY *, size_t *);
ASN1EXP size_t ASN1CALL length_KERB_ARMOR_SERVICE_REPLY(const KERB_ARMOR_SERVICE_REPLY *);
ASN1EXP int    ASN1CALL copy_KERB_ARMOR_SERVICE_REPLY  (const KERB_ARMOR_SERVICE_REPLY *, KERB_ARMOR_SERVICE_REPLY *);
ASN1EXP void   ASN1CALL free_KERB_ARMOR_SERVICE_REPLY  (KERB_ARMOR_SERVICE_REPLY *);
ASN1EXP char * ASN1CALL print_KERB_ARMOR_SERVICE_REPLY (const KERB_ARMOR_SERVICE_REPLY *, int);


#endif /* __krb5_asn1_h__ */
