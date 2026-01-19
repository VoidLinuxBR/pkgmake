/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/ocsp.asn1 */
/* Do not edit */

#ifndef __ocsp_asn1_h__
#define __ocsp_asn1_h__

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

#include <rfc2459_asn1.h>
typedef enum OCSPVersion {
  ocsp_v1 = 0
} OCSPVersion;

typedef struct OCSPCertStatus OCSPCertStatus;

typedef struct OCSPCertID OCSPCertID;

typedef struct OCSPSingleResponse OCSPSingleResponse;

typedef struct OCSPInnerRequest OCSPInnerRequest;

typedef struct OCSPTBSRequest OCSPTBSRequest;

typedef struct OCSPSignature OCSPSignature;

typedef struct OCSPRequest OCSPRequest;

typedef struct OCSPResponseBytes OCSPResponseBytes;

typedef enum OCSPResponseStatus {
  successful = 0,
  malformedRequest = 1,
  internalError = 2,
  tryLater = 3,
  sigRequired = 5,
  unauthorized = 6
} OCSPResponseStatus;

typedef struct OCSPResponse OCSPResponse;

typedef heim_octet_string OCSPKeyHash;

typedef struct OCSPResponderID OCSPResponderID;

typedef struct OCSPResponseData OCSPResponseData;

typedef struct OCSPBasicOCSPResponse OCSPBasicOCSPResponse;

/* OBJECT IDENTIFIER id-pkix-ocsp ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) pkix-ad(48) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ocsp;
#define ASN1_OID_ID_PKIX_OCSP (&asn1_oid_id_pkix_ocsp)

/* OBJECT IDENTIFIER id-pkix-ocsp-basic ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) pkix-ad(48) label-less(1) label-less(1) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ocsp_basic;
#define ASN1_OID_ID_PKIX_OCSP_BASIC (&asn1_oid_id_pkix_ocsp_basic)

/* OBJECT IDENTIFIER id-pkix-ocsp-nonce ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) pkix-ad(48) label-less(1) label-less(2) } */
extern ASN1EXP const heim_oid asn1_oid_id_pkix_ocsp_nonce;
#define ASN1_OID_ID_PKIX_OCSP_NONCE (&asn1_oid_id_pkix_ocsp_nonce)

/*
OCSPVersion ::= INTEGER {
  ocsp_v1(0)
}
*/

enum { asn1_tag_length_OCSPVersion = 1,
       asn1_tag_class_OCSPVersion = 0,
       asn1_tag_tag_OCSPVersion = 2 };
ASN1EXP int    ASN1CALL decode_OCSPVersion(const unsigned char *, size_t, OCSPVersion *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPVersion(unsigned char *, size_t, const OCSPVersion *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPVersion(const OCSPVersion *);
ASN1EXP int    ASN1CALL copy_OCSPVersion  (const OCSPVersion *, OCSPVersion *);
ASN1EXP void   ASN1CALL free_OCSPVersion  (OCSPVersion *);
ASN1EXP char * ASN1CALL print_OCSPVersion (const OCSPVersion *, int);


/*
OCSPCertStatus ::= CHOICE {
  good            [0] IMPLICIT   NULL,
  revoked         [1] IMPLICIT SEQUENCE {
    revocationTime     GeneralizedTime,
    revocationReason   [0] CRLReason OPTIONAL,
  },
  unknown         [2] IMPLICIT   NULL,
}
*/

enum { asn1_tag_length_OCSPCertStatus = 1,
       asn1_tag_class_OCSPCertStatus = 0,
       asn1_tag_tag_OCSPCertStatus = 0 };
struct OCSPCertStatus {
  enum OCSPCertStatus_enum {
    choice_OCSPCertStatus_good = 1,
    choice_OCSPCertStatus_revoked,
    choice_OCSPCertStatus_unknown
  } element;
  union {
    int good;
    struct OCSPCertStatus_revoked {
      time_t revocationTime;
      CRLReason *revocationReason;
    } revoked;
    int unknown;
  } u;
};

ASN1EXP int    ASN1CALL decode_OCSPCertStatus(const unsigned char *, size_t, OCSPCertStatus *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPCertStatus(unsigned char *, size_t, const OCSPCertStatus *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPCertStatus(const OCSPCertStatus *);
ASN1EXP int    ASN1CALL copy_OCSPCertStatus  (const OCSPCertStatus *, OCSPCertStatus *);
ASN1EXP void   ASN1CALL free_OCSPCertStatus  (OCSPCertStatus *);
ASN1EXP char * ASN1CALL print_OCSPCertStatus (const OCSPCertStatus *, int);


/*
OCSPCertID ::= SEQUENCE {
  hashAlgorithm    AlgorithmIdentifier,
  issuerNameHash   OCTET STRING,
  issuerKeyHash    OCTET STRING,
  serialNumber     CertificateSerialNumber,
}
*/

enum { asn1_tag_length_OCSPCertID = 1,
       asn1_tag_class_OCSPCertID = 0,
       asn1_tag_tag_OCSPCertID = 16 };
struct OCSPCertID {
  AlgorithmIdentifier hashAlgorithm;
  heim_octet_string issuerNameHash;
  heim_octet_string issuerKeyHash;
  CertificateSerialNumber serialNumber;
};

ASN1EXP int    ASN1CALL decode_OCSPCertID(const unsigned char *, size_t, OCSPCertID *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPCertID(unsigned char *, size_t, const OCSPCertID *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPCertID(const OCSPCertID *);
ASN1EXP int    ASN1CALL copy_OCSPCertID  (const OCSPCertID *, OCSPCertID *);
ASN1EXP void   ASN1CALL free_OCSPCertID  (OCSPCertID *);
ASN1EXP char * ASN1CALL print_OCSPCertID (const OCSPCertID *, int);


/*
OCSPSingleResponse ::= SEQUENCE {
  certID             OCSPCertID,
  certStatus         OCSPCertStatus,
  thisUpdate         GeneralizedTime,
  nextUpdate         [0] GeneralizedTime OPTIONAL,
  singleExtensions   [1] Extensions OPTIONAL,
}
*/

enum { asn1_tag_length_OCSPSingleResponse = 1,
       asn1_tag_class_OCSPSingleResponse = 0,
       asn1_tag_tag_OCSPSingleResponse = 16 };
struct OCSPSingleResponse {
  OCSPCertID certID;
  OCSPCertStatus certStatus;
  time_t thisUpdate;
  time_t *nextUpdate;
  Extensions *singleExtensions;
};

ASN1EXP int    ASN1CALL decode_OCSPSingleResponse(const unsigned char *, size_t, OCSPSingleResponse *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPSingleResponse(unsigned char *, size_t, const OCSPSingleResponse *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPSingleResponse(const OCSPSingleResponse *);
ASN1EXP int    ASN1CALL copy_OCSPSingleResponse  (const OCSPSingleResponse *, OCSPSingleResponse *);
ASN1EXP void   ASN1CALL free_OCSPSingleResponse  (OCSPSingleResponse *);
ASN1EXP char * ASN1CALL print_OCSPSingleResponse (const OCSPSingleResponse *, int);


/*
OCSPInnerRequest ::= SEQUENCE {
  reqCert                   OCSPCertID,
  singleRequestExtensions   [0] Extensions OPTIONAL,
}
*/

enum { asn1_tag_length_OCSPInnerRequest = 1,
       asn1_tag_class_OCSPInnerRequest = 0,
       asn1_tag_tag_OCSPInnerRequest = 16 };
struct OCSPInnerRequest {
  OCSPCertID reqCert;
  Extensions *singleRequestExtensions;
};

ASN1EXP int    ASN1CALL decode_OCSPInnerRequest(const unsigned char *, size_t, OCSPInnerRequest *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPInnerRequest(unsigned char *, size_t, const OCSPInnerRequest *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPInnerRequest(const OCSPInnerRequest *);
ASN1EXP int    ASN1CALL copy_OCSPInnerRequest  (const OCSPInnerRequest *, OCSPInnerRequest *);
ASN1EXP void   ASN1CALL free_OCSPInnerRequest  (OCSPInnerRequest *);
ASN1EXP char * ASN1CALL print_OCSPInnerRequest (const OCSPInnerRequest *, int);


/*
OCSPTBSRequest ::= SEQUENCE {
  version             [0] OCSPVersion OPTIONAL,
  requestorName       [1] GeneralName OPTIONAL,
  requestList         SEQUENCE OF OCSPInnerRequest,
  requestExtensions   [2] Extensions OPTIONAL,
}
*/

enum { asn1_tag_length_OCSPTBSRequest = 1,
       asn1_tag_class_OCSPTBSRequest = 0,
       asn1_tag_tag_OCSPTBSRequest = 16 };
struct OCSPTBSRequest {
  heim_octet_string _save;
  OCSPVersion *version;
  GeneralName *requestorName;
  struct OCSPTBSRequest_requestList {
    unsigned int len;
    OCSPInnerRequest *val;
  } requestList;
  Extensions *requestExtensions;
};

ASN1EXP int    ASN1CALL decode_OCSPTBSRequest(const unsigned char *, size_t, OCSPTBSRequest *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPTBSRequest(unsigned char *, size_t, const OCSPTBSRequest *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPTBSRequest(const OCSPTBSRequest *);
ASN1EXP int    ASN1CALL copy_OCSPTBSRequest  (const OCSPTBSRequest *, OCSPTBSRequest *);
ASN1EXP void   ASN1CALL free_OCSPTBSRequest  (OCSPTBSRequest *);
ASN1EXP char * ASN1CALL print_OCSPTBSRequest (const OCSPTBSRequest *, int);


/*
OCSPSignature ::= SEQUENCE {
  signatureAlgorithm   AlgorithmIdentifier,
  signature              BIT STRING {
  },
  certs                [0] SEQUENCE OF Certificate OPTIONAL,
}
*/

enum { asn1_tag_length_OCSPSignature = 1,
       asn1_tag_class_OCSPSignature = 0,
       asn1_tag_tag_OCSPSignature = 16 };
struct OCSPSignature {
  AlgorithmIdentifier signatureAlgorithm;
  heim_bit_string signature;
  struct OCSPSignature_certs {
    unsigned int len;
    Certificate *val;
  } *certs;
};

ASN1EXP int    ASN1CALL decode_OCSPSignature(const unsigned char *, size_t, OCSPSignature *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPSignature(unsigned char *, size_t, const OCSPSignature *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPSignature(const OCSPSignature *);
ASN1EXP int    ASN1CALL copy_OCSPSignature  (const OCSPSignature *, OCSPSignature *);
ASN1EXP void   ASN1CALL free_OCSPSignature  (OCSPSignature *);
ASN1EXP char * ASN1CALL print_OCSPSignature (const OCSPSignature *, int);


/*
OCSPRequest ::= SEQUENCE {
  tbsRequest          OCSPTBSRequest,
  optionalSignature   [0] OCSPSignature OPTIONAL,
}
*/

enum { asn1_tag_length_OCSPRequest = 1,
       asn1_tag_class_OCSPRequest = 0,
       asn1_tag_tag_OCSPRequest = 16 };
struct OCSPRequest {
  OCSPTBSRequest tbsRequest;
  OCSPSignature *optionalSignature;
};

ASN1EXP int    ASN1CALL decode_OCSPRequest(const unsigned char *, size_t, OCSPRequest *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPRequest(unsigned char *, size_t, const OCSPRequest *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPRequest(const OCSPRequest *);
ASN1EXP int    ASN1CALL copy_OCSPRequest  (const OCSPRequest *, OCSPRequest *);
ASN1EXP void   ASN1CALL free_OCSPRequest  (OCSPRequest *);
ASN1EXP char * ASN1CALL print_OCSPRequest (const OCSPRequest *, int);


/*
OCSPResponseBytes ::= SEQUENCE {
  responseType      OBJECT IDENTIFIER,
  response        OCTET STRING,
}
*/

enum { asn1_tag_length_OCSPResponseBytes = 1,
       asn1_tag_class_OCSPResponseBytes = 0,
       asn1_tag_tag_OCSPResponseBytes = 16 };
struct OCSPResponseBytes {
  heim_oid responseType;
  heim_octet_string response;
};

ASN1EXP int    ASN1CALL decode_OCSPResponseBytes(const unsigned char *, size_t, OCSPResponseBytes *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPResponseBytes(unsigned char *, size_t, const OCSPResponseBytes *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPResponseBytes(const OCSPResponseBytes *);
ASN1EXP int    ASN1CALL copy_OCSPResponseBytes  (const OCSPResponseBytes *, OCSPResponseBytes *);
ASN1EXP void   ASN1CALL free_OCSPResponseBytes  (OCSPResponseBytes *);
ASN1EXP char * ASN1CALL print_OCSPResponseBytes (const OCSPResponseBytes *, int);


/*
OCSPResponseStatus ::= INTEGER {
  successful(0),
  malformedRequest(1),
  internalError(2),
  tryLater(3),
  sigRequired(5),
  unauthorized(6)
}
*/

enum { asn1_tag_length_OCSPResponseStatus = 1,
       asn1_tag_class_OCSPResponseStatus = 0,
       asn1_tag_tag_OCSPResponseStatus = 10 };
ASN1EXP int    ASN1CALL decode_OCSPResponseStatus(const unsigned char *, size_t, OCSPResponseStatus *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPResponseStatus(unsigned char *, size_t, const OCSPResponseStatus *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPResponseStatus(const OCSPResponseStatus *);
ASN1EXP int    ASN1CALL copy_OCSPResponseStatus  (const OCSPResponseStatus *, OCSPResponseStatus *);
ASN1EXP void   ASN1CALL free_OCSPResponseStatus  (OCSPResponseStatus *);
ASN1EXP char * ASN1CALL print_OCSPResponseStatus (const OCSPResponseStatus *, int);


/*
OCSPResponse ::= SEQUENCE {
  responseStatus   OCSPResponseStatus,
  responseBytes    [0] OCSPResponseBytes OPTIONAL,
}
*/

enum { asn1_tag_length_OCSPResponse = 1,
       asn1_tag_class_OCSPResponse = 0,
       asn1_tag_tag_OCSPResponse = 16 };
struct OCSPResponse {
  OCSPResponseStatus responseStatus;
  OCSPResponseBytes *responseBytes;
};

ASN1EXP int    ASN1CALL decode_OCSPResponse(const unsigned char *, size_t, OCSPResponse *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPResponse(unsigned char *, size_t, const OCSPResponse *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPResponse(const OCSPResponse *);
ASN1EXP int    ASN1CALL copy_OCSPResponse  (const OCSPResponse *, OCSPResponse *);
ASN1EXP void   ASN1CALL free_OCSPResponse  (OCSPResponse *);
ASN1EXP char * ASN1CALL print_OCSPResponse (const OCSPResponse *, int);


/*
OCSPKeyHash ::= OCTET STRING
*/

enum { asn1_tag_length_OCSPKeyHash = 1,
       asn1_tag_class_OCSPKeyHash = 0,
       asn1_tag_tag_OCSPKeyHash = 4 };
ASN1EXP int    ASN1CALL decode_OCSPKeyHash(const unsigned char *, size_t, OCSPKeyHash *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPKeyHash(unsigned char *, size_t, const OCSPKeyHash *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPKeyHash(const OCSPKeyHash *);
ASN1EXP int    ASN1CALL copy_OCSPKeyHash  (const OCSPKeyHash *, OCSPKeyHash *);
ASN1EXP void   ASN1CALL free_OCSPKeyHash  (OCSPKeyHash *);
ASN1EXP char * ASN1CALL print_OCSPKeyHash (const OCSPKeyHash *, int);


/*
OCSPResponderID ::= CHOICE {
  byName          [1] Name,
  byKey           [2] OCSPKeyHash,
}
*/

enum { asn1_tag_length_OCSPResponderID = 1,
       asn1_tag_class_OCSPResponderID = 0,
       asn1_tag_tag_OCSPResponderID = 0 };
struct OCSPResponderID {
  enum OCSPResponderID_enum {
    choice_OCSPResponderID_byName = 1,
    choice_OCSPResponderID_byKey
  } element;
  union {
    Name byName;
    OCSPKeyHash byKey;
  } u;
};

ASN1EXP int    ASN1CALL decode_OCSPResponderID(const unsigned char *, size_t, OCSPResponderID *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPResponderID(unsigned char *, size_t, const OCSPResponderID *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPResponderID(const OCSPResponderID *);
ASN1EXP int    ASN1CALL copy_OCSPResponderID  (const OCSPResponderID *, OCSPResponderID *);
ASN1EXP void   ASN1CALL free_OCSPResponderID  (OCSPResponderID *);
ASN1EXP char * ASN1CALL print_OCSPResponderID (const OCSPResponderID *, int);


/*
OCSPResponseData ::= SEQUENCE {
  version              [0] OCSPVersion OPTIONAL,
  responderID          OCSPResponderID,
  producedAt           GeneralizedTime,
  responses            SEQUENCE OF OCSPSingleResponse,
  responseExtensions   [1] Extensions OPTIONAL,
}
*/

enum { asn1_tag_length_OCSPResponseData = 1,
       asn1_tag_class_OCSPResponseData = 0,
       asn1_tag_tag_OCSPResponseData = 16 };
struct OCSPResponseData {
  heim_octet_string _save;
  OCSPVersion *version;
  OCSPResponderID responderID;
  time_t producedAt;
  struct OCSPResponseData_responses {
    unsigned int len;
    OCSPSingleResponse *val;
  } responses;
  Extensions *responseExtensions;
};

ASN1EXP int    ASN1CALL decode_OCSPResponseData(const unsigned char *, size_t, OCSPResponseData *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPResponseData(unsigned char *, size_t, const OCSPResponseData *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPResponseData(const OCSPResponseData *);
ASN1EXP int    ASN1CALL copy_OCSPResponseData  (const OCSPResponseData *, OCSPResponseData *);
ASN1EXP void   ASN1CALL free_OCSPResponseData  (OCSPResponseData *);
ASN1EXP char * ASN1CALL print_OCSPResponseData (const OCSPResponseData *, int);


/*
OCSPBasicOCSPResponse ::= SEQUENCE {
  tbsResponseData      OCSPResponseData,
  signatureAlgorithm   AlgorithmIdentifier,
  signature              BIT STRING {
  },
  certs                [0] SEQUENCE OF Certificate OPTIONAL,
}
*/

enum { asn1_tag_length_OCSPBasicOCSPResponse = 1,
       asn1_tag_class_OCSPBasicOCSPResponse = 0,
       asn1_tag_tag_OCSPBasicOCSPResponse = 16 };
struct OCSPBasicOCSPResponse {
  OCSPResponseData tbsResponseData;
  AlgorithmIdentifier signatureAlgorithm;
  heim_bit_string signature;
  struct OCSPBasicOCSPResponse_certs {
    unsigned int len;
    Certificate *val;
  } *certs;
};

ASN1EXP int    ASN1CALL decode_OCSPBasicOCSPResponse(const unsigned char *, size_t, OCSPBasicOCSPResponse *, size_t *);
ASN1EXP int    ASN1CALL encode_OCSPBasicOCSPResponse(unsigned char *, size_t, const OCSPBasicOCSPResponse *, size_t *);
ASN1EXP size_t ASN1CALL length_OCSPBasicOCSPResponse(const OCSPBasicOCSPResponse *);
ASN1EXP int    ASN1CALL copy_OCSPBasicOCSPResponse  (const OCSPBasicOCSPResponse *, OCSPBasicOCSPResponse *);
ASN1EXP void   ASN1CALL free_OCSPBasicOCSPResponse  (OCSPBasicOCSPResponse *);
ASN1EXP char * ASN1CALL print_OCSPBasicOCSPResponse (const OCSPBasicOCSPResponse *, int);


#endif /* __ocsp_asn1_h__ */
