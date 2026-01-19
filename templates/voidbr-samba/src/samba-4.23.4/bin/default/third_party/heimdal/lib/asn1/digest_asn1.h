/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/digest.asn1 */
/* Do not edit */

#ifndef __digest_asn1_h__
#define __digest_asn1_h__

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

#include <krb5_asn1.h>
typedef struct DigestTypes {
  unsigned int ntlm_v1:1;
  unsigned int ntlm_v1_session:1;
  unsigned int ntlm_v2:1;
  unsigned int digest_md5:1;
  unsigned int chap_md5:1;
  unsigned int ms_chap_v2:1;
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
} DigestTypes;


typedef struct DigestInit DigestInit;

typedef struct DigestInitReply DigestInitReply;

typedef struct DigestRequest DigestRequest;

typedef struct DigestError DigestError;

typedef struct DigestResponse DigestResponse;

typedef struct NTLMInit NTLMInit;

typedef struct NTLMInitReply NTLMInitReply;

typedef struct NTLMRequest NTLMRequest;

typedef struct NTLMResponse NTLMResponse;

typedef struct NTLMRequest2 NTLMRequest2;

typedef struct NTLMReply NTLMReply;

typedef struct DigestReqInner DigestReqInner;

typedef struct DigestREQ DigestREQ;

typedef struct DigestRepInner DigestRepInner;

typedef struct DigestREP DigestREP;

/*
DigestTypes ::= BIT STRING {
  ntlm-v1(0),
  ntlm-v1-session(1),
  ntlm-v2(2),
  digest-md5(3),
  chap-md5(4),
  ms-chap-v2(5)
}
*/

enum { asn1_tag_length_DigestTypes = 1,
       asn1_tag_class_DigestTypes = 0,
       asn1_tag_tag_DigestTypes = 3 };
uint64_t DigestTypes2int(DigestTypes);
DigestTypes int2DigestTypes(uint64_t);
const struct units * asn1_DigestTypes_units(void);
ASN1EXP int    ASN1CALL decode_DigestTypes(const unsigned char *, size_t, DigestTypes *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestTypes(unsigned char *, size_t, const DigestTypes *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestTypes(const DigestTypes *);
ASN1EXP int    ASN1CALL copy_DigestTypes  (const DigestTypes *, DigestTypes *);
ASN1EXP void   ASN1CALL free_DigestTypes  (DigestTypes *);
ASN1EXP char * ASN1CALL print_DigestTypes (const DigestTypes *, int);


/*
DigestInit ::= SEQUENCE {
  type              UTF8String,
  channel         [0] SEQUENCE {
    cb-type             UTF8String,
    cb-binding          UTF8String,
  } OPTIONAL,
  hostname        [1]   UTF8String OPTIONAL,
}
*/

enum { asn1_tag_length_DigestInit = 1,
       asn1_tag_class_DigestInit = 0,
       asn1_tag_tag_DigestInit = 16 };
struct DigestInit {
  heim_utf8_string type;
  struct DigestInit_channel {
    heim_utf8_string cb_type;
    heim_utf8_string cb_binding;
  } *channel;
  heim_utf8_string *hostname;
};

ASN1EXP int    ASN1CALL decode_DigestInit(const unsigned char *, size_t, DigestInit *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestInit(unsigned char *, size_t, const DigestInit *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestInit(const DigestInit *);
ASN1EXP int    ASN1CALL copy_DigestInit  (const DigestInit *, DigestInit *);
ASN1EXP void   ASN1CALL free_DigestInit  (DigestInit *);
ASN1EXP char * ASN1CALL print_DigestInit (const DigestInit *, int);


/*
DigestInitReply ::= SEQUENCE {
  nonce             UTF8String,
  opaque            UTF8String,
  identifier      [0]   UTF8String OPTIONAL,
}
*/

enum { asn1_tag_length_DigestInitReply = 1,
       asn1_tag_class_DigestInitReply = 0,
       asn1_tag_tag_DigestInitReply = 16 };
struct DigestInitReply {
  heim_utf8_string nonce;
  heim_utf8_string opaque;
  heim_utf8_string *identifier;
};

ASN1EXP int    ASN1CALL decode_DigestInitReply(const unsigned char *, size_t, DigestInitReply *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestInitReply(unsigned char *, size_t, const DigestInitReply *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestInitReply(const DigestInitReply *);
ASN1EXP int    ASN1CALL copy_DigestInitReply  (const DigestInitReply *, DigestInitReply *);
ASN1EXP void   ASN1CALL free_DigestInitReply  (DigestInitReply *);
ASN1EXP char * ASN1CALL print_DigestInitReply (const DigestInitReply *, int);


/*
DigestRequest ::= SEQUENCE {
  type                    UTF8String,
  digest                  UTF8String,
  username                UTF8String,
  responseData            UTF8String,
  authid                [0]   UTF8String OPTIONAL,
  authentication-user   [1] Principal OPTIONAL,
  realm                 [2]   UTF8String OPTIONAL,
  method                [3]   UTF8String OPTIONAL,
  uri                   [4]   UTF8String OPTIONAL,
  serverNonce             UTF8String,
  clientNonce           [5]   UTF8String OPTIONAL,
  nonceCount            [6]   UTF8String OPTIONAL,
  qop                   [7]   UTF8String OPTIONAL,
  identifier            [8]   UTF8String OPTIONAL,
  hostname              [9]   UTF8String OPTIONAL,
  opaque                  UTF8String,
}
*/

enum { asn1_tag_length_DigestRequest = 1,
       asn1_tag_class_DigestRequest = 0,
       asn1_tag_tag_DigestRequest = 16 };
struct DigestRequest {
  heim_utf8_string type;
  heim_utf8_string digest;
  heim_utf8_string username;
  heim_utf8_string responseData;
  heim_utf8_string *authid;
  Principal *authentication_user;
  heim_utf8_string *realm;
  heim_utf8_string *method;
  heim_utf8_string *uri;
  heim_utf8_string serverNonce;
  heim_utf8_string *clientNonce;
  heim_utf8_string *nonceCount;
  heim_utf8_string *qop;
  heim_utf8_string *identifier;
  heim_utf8_string *hostname;
  heim_utf8_string opaque;
};

ASN1EXP int    ASN1CALL decode_DigestRequest(const unsigned char *, size_t, DigestRequest *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestRequest(unsigned char *, size_t, const DigestRequest *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestRequest(const DigestRequest *);
ASN1EXP int    ASN1CALL copy_DigestRequest  (const DigestRequest *, DigestRequest *);
ASN1EXP void   ASN1CALL free_DigestRequest  (DigestRequest *);
ASN1EXP char * ASN1CALL print_DigestRequest (const DigestRequest *, int);


/*
DigestError ::= SEQUENCE {
  reason            UTF8String,
  code            INTEGER (-2147483648..2147483647),
}
*/

enum { asn1_tag_length_DigestError = 1,
       asn1_tag_class_DigestError = 0,
       asn1_tag_tag_DigestError = 16 };
struct DigestError {
  heim_utf8_string reason;
  int code;
};

ASN1EXP int    ASN1CALL decode_DigestError(const unsigned char *, size_t, DigestError *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestError(unsigned char *, size_t, const DigestError *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestError(const DigestError *);
ASN1EXP int    ASN1CALL copy_DigestError  (const DigestError *, DigestError *);
ASN1EXP void   ASN1CALL free_DigestError  (DigestError *);
ASN1EXP char * ASN1CALL print_DigestError (const DigestError *, int);


/*
DigestResponse ::= SEQUENCE {
  success         BOOLEAN,
  rsp             [0]   UTF8String OPTIONAL,
  tickets         [1] SEQUENCE OF OCTET STRING OPTIONAL,
  channel         [2] SEQUENCE {
    cb-type             UTF8String,
    cb-binding          UTF8String,
  } OPTIONAL,
  session-key     [3] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_DigestResponse = 1,
       asn1_tag_class_DigestResponse = 0,
       asn1_tag_tag_DigestResponse = 16 };
struct DigestResponse {
  int success;
  heim_utf8_string *rsp;
  struct DigestResponse_tickets {
    unsigned int len;
    heim_octet_string *val;
  } *tickets;
  struct DigestResponse_channel {
    heim_utf8_string cb_type;
    heim_utf8_string cb_binding;
  } *channel;
  heim_octet_string *session_key;
};

ASN1EXP int    ASN1CALL decode_DigestResponse(const unsigned char *, size_t, DigestResponse *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestResponse(unsigned char *, size_t, const DigestResponse *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestResponse(const DigestResponse *);
ASN1EXP int    ASN1CALL copy_DigestResponse  (const DigestResponse *, DigestResponse *);
ASN1EXP void   ASN1CALL free_DigestResponse  (DigestResponse *);
ASN1EXP char * ASN1CALL print_DigestResponse (const DigestResponse *, int);


/*
NTLMInit ::= SEQUENCE {
  flags           [0] INTEGER (0..4294967295),
  hostname        [1]   UTF8String OPTIONAL,
  domain          [1]   UTF8String OPTIONAL,
}
*/

enum { asn1_tag_length_NTLMInit = 1,
       asn1_tag_class_NTLMInit = 0,
       asn1_tag_tag_NTLMInit = 16 };
struct NTLMInit {
  unsigned int flags;
  heim_utf8_string *hostname;
  heim_utf8_string *domain;
};

ASN1EXP int    ASN1CALL decode_NTLMInit(const unsigned char *, size_t, NTLMInit *, size_t *);
ASN1EXP int    ASN1CALL encode_NTLMInit(unsigned char *, size_t, const NTLMInit *, size_t *);
ASN1EXP size_t ASN1CALL length_NTLMInit(const NTLMInit *);
ASN1EXP int    ASN1CALL copy_NTLMInit  (const NTLMInit *, NTLMInit *);
ASN1EXP void   ASN1CALL free_NTLMInit  (NTLMInit *);
ASN1EXP char * ASN1CALL print_NTLMInit (const NTLMInit *, int);


/*
NTLMInitReply ::= SEQUENCE {
  flags           [0] INTEGER (0..4294967295),
  opaque          [1] OCTET STRING,
  targetname      [2]   UTF8String,
  challenge       [3] OCTET STRING,
  targetinfo      [4] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_NTLMInitReply = 1,
       asn1_tag_class_NTLMInitReply = 0,
       asn1_tag_tag_NTLMInitReply = 16 };
struct NTLMInitReply {
  unsigned int flags;
  heim_octet_string opaque;
  heim_utf8_string targetname;
  heim_octet_string challenge;
  heim_octet_string *targetinfo;
};

ASN1EXP int    ASN1CALL decode_NTLMInitReply(const unsigned char *, size_t, NTLMInitReply *, size_t *);
ASN1EXP int    ASN1CALL encode_NTLMInitReply(unsigned char *, size_t, const NTLMInitReply *, size_t *);
ASN1EXP size_t ASN1CALL length_NTLMInitReply(const NTLMInitReply *);
ASN1EXP int    ASN1CALL copy_NTLMInitReply  (const NTLMInitReply *, NTLMInitReply *);
ASN1EXP void   ASN1CALL free_NTLMInitReply  (NTLMInitReply *);
ASN1EXP char * ASN1CALL print_NTLMInitReply (const NTLMInitReply *, int);


/*
NTLMRequest ::= SEQUENCE {
  flags           [0] INTEGER (0..4294967295),
  opaque          [1] OCTET STRING,
  username        [2]   UTF8String,
  targetname      [3]   UTF8String,
  targetinfo      [4] OCTET STRING OPTIONAL,
  lm              [5] OCTET STRING,
  ntlm            [6] OCTET STRING,
  sessionkey      [7] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_NTLMRequest = 1,
       asn1_tag_class_NTLMRequest = 0,
       asn1_tag_tag_NTLMRequest = 16 };
struct NTLMRequest {
  unsigned int flags;
  heim_octet_string opaque;
  heim_utf8_string username;
  heim_utf8_string targetname;
  heim_octet_string *targetinfo;
  heim_octet_string lm;
  heim_octet_string ntlm;
  heim_octet_string *sessionkey;
};

ASN1EXP int    ASN1CALL decode_NTLMRequest(const unsigned char *, size_t, NTLMRequest *, size_t *);
ASN1EXP int    ASN1CALL encode_NTLMRequest(unsigned char *, size_t, const NTLMRequest *, size_t *);
ASN1EXP size_t ASN1CALL length_NTLMRequest(const NTLMRequest *);
ASN1EXP int    ASN1CALL copy_NTLMRequest  (const NTLMRequest *, NTLMRequest *);
ASN1EXP void   ASN1CALL free_NTLMRequest  (NTLMRequest *);
ASN1EXP char * ASN1CALL print_NTLMRequest (const NTLMRequest *, int);


/*
NTLMResponse ::= SEQUENCE {
  success         [0] BOOLEAN,
  flags           [1] INTEGER (0..4294967295),
  sessionkey      [2] OCTET STRING OPTIONAL,
  tickets         [3] SEQUENCE OF OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_NTLMResponse = 1,
       asn1_tag_class_NTLMResponse = 0,
       asn1_tag_tag_NTLMResponse = 16 };
struct NTLMResponse {
  int success;
  unsigned int flags;
  heim_octet_string *sessionkey;
  struct NTLMResponse_tickets {
    unsigned int len;
    heim_octet_string *val;
  } *tickets;
};

ASN1EXP int    ASN1CALL decode_NTLMResponse(const unsigned char *, size_t, NTLMResponse *, size_t *);
ASN1EXP int    ASN1CALL encode_NTLMResponse(unsigned char *, size_t, const NTLMResponse *, size_t *);
ASN1EXP size_t ASN1CALL length_NTLMResponse(const NTLMResponse *);
ASN1EXP int    ASN1CALL copy_NTLMResponse  (const NTLMResponse *, NTLMResponse *);
ASN1EXP void   ASN1CALL free_NTLMResponse  (NTLMResponse *);
ASN1EXP char * ASN1CALL print_NTLMResponse (const NTLMResponse *, int);


/*
NTLMRequest2 ::= SEQUENCE {
  loginUserName         [0]   UTF8String,
  loginDomainName       [1]   UTF8String,
  flags                 [2] INTEGER (0..4294967295),
  lmchallenge           [3] OCTET STRING,
  ntChallengeResponce   [4] OCTET STRING,
  lmChallengeResponce   [5] OCTET STRING,
}
*/

enum { asn1_tag_length_NTLMRequest2 = 1,
       asn1_tag_class_NTLMRequest2 = 0,
       asn1_tag_tag_NTLMRequest2 = 16 };
struct NTLMRequest2 {
  heim_utf8_string loginUserName;
  heim_utf8_string loginDomainName;
  unsigned int flags;
  heim_octet_string lmchallenge;
  heim_octet_string ntChallengeResponce;
  heim_octet_string lmChallengeResponce;
};

ASN1EXP int    ASN1CALL decode_NTLMRequest2(const unsigned char *, size_t, NTLMRequest2 *, size_t *);
ASN1EXP int    ASN1CALL encode_NTLMRequest2(unsigned char *, size_t, const NTLMRequest2 *, size_t *);
ASN1EXP size_t ASN1CALL length_NTLMRequest2(const NTLMRequest2 *);
ASN1EXP int    ASN1CALL copy_NTLMRequest2  (const NTLMRequest2 *, NTLMRequest2 *);
ASN1EXP void   ASN1CALL free_NTLMRequest2  (NTLMRequest2 *);
ASN1EXP char * ASN1CALL print_NTLMRequest2 (const NTLMRequest2 *, int);


/*
NTLMReply ::= SEQUENCE {
  success         [0] BOOLEAN,
  flags           [1] INTEGER (0..4294967295),
  sessionkey      [2] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_NTLMReply = 1,
       asn1_tag_class_NTLMReply = 0,
       asn1_tag_tag_NTLMReply = 16 };
struct NTLMReply {
  int success;
  unsigned int flags;
  heim_octet_string *sessionkey;
};

ASN1EXP int    ASN1CALL decode_NTLMReply(const unsigned char *, size_t, NTLMReply *, size_t *);
ASN1EXP int    ASN1CALL encode_NTLMReply(unsigned char *, size_t, const NTLMReply *, size_t *);
ASN1EXP size_t ASN1CALL length_NTLMReply(const NTLMReply *);
ASN1EXP int    ASN1CALL copy_NTLMReply  (const NTLMReply *, NTLMReply *);
ASN1EXP void   ASN1CALL free_NTLMReply  (NTLMReply *);
ASN1EXP char * ASN1CALL print_NTLMReply (const NTLMReply *, int);


/*
DigestReqInner ::= CHOICE {
  init             [0] DigestInit,
  digestRequest    [1] DigestRequest,
  ntlmInit         [2] NTLMInit,
  ntlmRequest      [3] NTLMRequest,
  supportedMechs   [4]   NULL,
}
*/

enum { asn1_tag_length_DigestReqInner = 1,
       asn1_tag_class_DigestReqInner = 0,
       asn1_tag_tag_DigestReqInner = 0 };
struct DigestReqInner {
  enum DigestReqInner_enum {
    choice_DigestReqInner_init = 1,
    choice_DigestReqInner_digestRequest,
    choice_DigestReqInner_ntlmInit,
    choice_DigestReqInner_ntlmRequest,
    choice_DigestReqInner_supportedMechs
  } element;
  union {
    DigestInit init;
    DigestRequest digestRequest;
    NTLMInit ntlmInit;
    NTLMRequest ntlmRequest;
    int supportedMechs;
  } u;
};

ASN1EXP int    ASN1CALL decode_DigestReqInner(const unsigned char *, size_t, DigestReqInner *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestReqInner(unsigned char *, size_t, const DigestReqInner *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestReqInner(const DigestReqInner *);
ASN1EXP int    ASN1CALL copy_DigestReqInner  (const DigestReqInner *, DigestReqInner *);
ASN1EXP void   ASN1CALL free_DigestReqInner  (DigestReqInner *);
ASN1EXP char * ASN1CALL print_DigestReqInner (const DigestReqInner *, int);


/*
DigestREQ ::= [APPLICATION 128] SEQUENCE {
  apReq           [0] OCTET STRING,
  innerReq        [1] EncryptedData,
}
*/

enum { asn1_tag_length_DigestREQ = 3,
       asn1_tag_class_DigestREQ = 1,
       asn1_tag_tag_DigestREQ = 128 };
struct DigestREQ {
  heim_octet_string apReq;
  EncryptedData innerReq;
};

ASN1EXP int    ASN1CALL decode_DigestREQ(const unsigned char *, size_t, DigestREQ *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestREQ(unsigned char *, size_t, const DigestREQ *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestREQ(const DigestREQ *);
ASN1EXP int    ASN1CALL copy_DigestREQ  (const DigestREQ *, DigestREQ *);
ASN1EXP void   ASN1CALL free_DigestREQ  (DigestREQ *);
ASN1EXP char * ASN1CALL print_DigestREQ (const DigestREQ *, int);


/*
DigestRepInner ::= CHOICE {
  error            [0] DigestError,
  initReply        [1] DigestInitReply,
  response         [2] DigestResponse,
  ntlmInitReply    [3] NTLMInitReply,
  ntlmResponse     [4] NTLMResponse,
  supportedMechs   [5] DigestTypes,
  ...,
}
*/

enum { asn1_tag_length_DigestRepInner = 1,
       asn1_tag_class_DigestRepInner = 0,
       asn1_tag_tag_DigestRepInner = 0 };
struct DigestRepInner {
  enum DigestRepInner_enum {
    choice_DigestRepInner_asn1_ellipsis = 0,
    choice_DigestRepInner_error,
    choice_DigestRepInner_initReply,
    choice_DigestRepInner_response,
    choice_DigestRepInner_ntlmInitReply,
    choice_DigestRepInner_ntlmResponse,
    choice_DigestRepInner_supportedMechs
    /* ... */
  } element;
  union {
    DigestError error;
    DigestInitReply initReply;
    DigestResponse response;
    NTLMInitReply ntlmInitReply;
    NTLMResponse ntlmResponse;
    DigestTypes supportedMechs;
    heim_octet_string asn1_ellipsis;
  } u;
};

ASN1EXP int    ASN1CALL decode_DigestRepInner(const unsigned char *, size_t, DigestRepInner *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestRepInner(unsigned char *, size_t, const DigestRepInner *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestRepInner(const DigestRepInner *);
ASN1EXP int    ASN1CALL copy_DigestRepInner  (const DigestRepInner *, DigestRepInner *);
ASN1EXP void   ASN1CALL free_DigestRepInner  (DigestRepInner *);
ASN1EXP char * ASN1CALL print_DigestRepInner (const DigestRepInner *, int);


/*
DigestREP ::= [APPLICATION 129] SEQUENCE {
  apRep           [0] OCTET STRING,
  innerRep        [1] EncryptedData,
}
*/

enum { asn1_tag_length_DigestREP = 3,
       asn1_tag_class_DigestREP = 1,
       asn1_tag_tag_DigestREP = 129 };
struct DigestREP {
  heim_octet_string apRep;
  EncryptedData innerRep;
};

ASN1EXP int    ASN1CALL decode_DigestREP(const unsigned char *, size_t, DigestREP *, size_t *);
ASN1EXP int    ASN1CALL encode_DigestREP(unsigned char *, size_t, const DigestREP *, size_t *);
ASN1EXP size_t ASN1CALL length_DigestREP(const DigestREP *);
ASN1EXP int    ASN1CALL copy_DigestREP  (const DigestREP *, DigestREP *);
ASN1EXP void   ASN1CALL free_DigestREP  (DigestREP *);
ASN1EXP char * ASN1CALL print_DigestREP (const DigestREP *, int);


#endif /* __digest_asn1_h__ */
