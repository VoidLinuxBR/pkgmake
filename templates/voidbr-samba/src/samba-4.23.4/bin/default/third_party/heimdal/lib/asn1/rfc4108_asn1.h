/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/rfc4108.asn1 */
/* Do not edit */

#ifndef __rfc4108_asn1_h__
#define __rfc4108_asn1_h__

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

#include <cms_asn1.h>
/* OBJECT IDENTIFIER id-ct-firmwarePackage ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs9(9) smime(16) ct(1) label-less(16) } */
extern ASN1EXP const heim_oid asn1_oid_id_ct_firmwarePackage;
#define ASN1_OID_ID_CT_FIRMWAREPACKAGE (&asn1_oid_id_ct_firmwarePackage)

typedef heim_octet_string FirmwarePkgData;

/* OBJECT IDENTIFIER id-aa-firmwarePackageID ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs9(9) smime(16) aa(2) label-less(35) } */
extern ASN1EXP const heim_oid asn1_oid_id_aa_firmwarePackageID;
#define ASN1_OID_ID_AA_FIRMWAREPACKAGEID (&asn1_oid_id_aa_firmwarePackageID)

typedef struct PreferredPackageIdentifier PreferredPackageIdentifier;

typedef struct PreferredOrLegacyPackageIdentifier PreferredOrLegacyPackageIdentifier;

typedef struct PreferredOrLegacyStalePackageIdentifier PreferredOrLegacyStalePackageIdentifier;

typedef struct FirmwarePackageIdentifier FirmwarePackageIdentifier;

/* OBJECT IDENTIFIER id-aa-targetHardwareIDs ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs9(9) smime(16) aa(2) label-less(36) } */
extern ASN1EXP const heim_oid asn1_oid_id_aa_targetHardwareIDs;
#define ASN1_OID_ID_AA_TARGETHARDWAREIDS (&asn1_oid_id_aa_targetHardwareIDs)

typedef struct TargetHardwareIdentifiers TargetHardwareIdentifiers;

/* OBJECT IDENTIFIER id-aa-decryptKeyID ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs9(9) smime(16) aa(2) label-less(37) } */
extern ASN1EXP const heim_oid asn1_oid_id_aa_decryptKeyID;
#define ASN1_OID_ID_AA_DECRYPTKEYID (&asn1_oid_id_aa_decryptKeyID)

typedef heim_octet_string DecryptKeyIdentifier;

/* OBJECT IDENTIFIER id-aa-implCryptoAlgs ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs9(9) smime(16) aa(2) label-less(38) } */
extern ASN1EXP const heim_oid asn1_oid_id_aa_implCryptoAlgs;
#define ASN1_OID_ID_AA_IMPLCRYPTOALGS (&asn1_oid_id_aa_implCryptoAlgs)

typedef struct ImplementedCryptoAlgorithms ImplementedCryptoAlgorithms;

/* OBJECT IDENTIFIER id-aa-implCompressAlgs ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs9(9) smime(16) aa(2) label-less(43) } */
extern ASN1EXP const heim_oid asn1_oid_id_aa_implCompressAlgs;
#define ASN1_OID_ID_AA_IMPLCOMPRESSALGS (&asn1_oid_id_aa_implCompressAlgs)

typedef struct ImplementedCompressAlgorithms ImplementedCompressAlgorithms;

/* OBJECT IDENTIFIER id-aa-communityIdentifiers ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs9(9) smime(16) aa(2) label-less(40) } */
extern ASN1EXP const heim_oid asn1_oid_id_aa_communityIdentifiers;
#define ASN1_OID_ID_AA_COMMUNITYIDENTIFIERS (&asn1_oid_id_aa_communityIdentifiers)

typedef struct HardwareSerialEntry HardwareSerialEntry;

typedef struct HardwareModules HardwareModules;

typedef struct CommunityIdentifier CommunityIdentifier;

typedef struct CommunityIdentifiers CommunityIdentifiers;

/* OBJECT IDENTIFIER id-aa-firmwarePackageInfo ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs9(9) smime(16) aa(2) label-less(42) } */
extern ASN1EXP const heim_oid asn1_oid_id_aa_firmwarePackageInfo;
#define ASN1_OID_ID_AA_FIRMWAREPACKAGEINFO (&asn1_oid_id_aa_firmwarePackageInfo)

typedef struct FirmwarePackageInfo FirmwarePackageInfo;

/* OBJECT IDENTIFIER id-aa-wrappedFirmwareKey ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs9(9) smime(16) aa(2) label-less(39) } */
extern ASN1EXP const heim_oid asn1_oid_id_aa_wrappedFirmwareKey;
#define ASN1_OID_ID_AA_WRAPPEDFIRMWAREKEY (&asn1_oid_id_aa_wrappedFirmwareKey)

typedef EnvelopedData WrappedFirmwareKey;

/* OBJECT IDENTIFIER id-ct-firmwareLoadReceipt ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs9(9) smime(16) ct(1) label-less(17) } */
extern ASN1EXP const heim_oid asn1_oid_id_ct_firmwareLoadReceipt;
#define ASN1_OID_ID_CT_FIRMWARELOADRECEIPT (&asn1_oid_id_ct_firmwareLoadReceipt)

typedef enum FWReceiptVersion {
  rfc4108_v1 = 1
} FWReceiptVersion;

typedef struct FirmwarePackageLoadReceipt FirmwarePackageLoadReceipt;

/* OBJECT IDENTIFIER id-ct-firmwareLoadError ::= { iso(1) member-body(2) us(840) rsadsi(113549) pkcs(1) pkcs9(9) smime(16) ct(1) label-less(18) } */
extern ASN1EXP const heim_oid asn1_oid_id_ct_firmwareLoadError;
#define ASN1_OID_ID_CT_FIRMWARELOADERROR (&asn1_oid_id_ct_firmwareLoadError)

typedef FWReceiptVersion FWErrorVersion;

typedef enum FirmwarePackageLoadErrorCode {
  decodeFailure = 1,
  badContentInfo = 2,
  badSignedData = 3,
  badEncapContent = 4,
  badCertificate = 5,
  badSignerInfo = 6,
  badSignedAttrs = 7,
  badUnsignedAttrs = 8,
  missingContent = 9,
  noTrustAnchor = 10,
  notAuthorized = 11,
  badDigestAlgorithm = 12,
  badSignatureAlgorithm = 13,
  unsupportedKeySize = 14,
  signatureFailure = 15,
  contentTypeMismatch = 16,
  badEncryptedData = 17,
  unprotectedAttrsPresent = 18,
  badEncryptContent = 19,
  badEncryptAlgorithm = 20,
  missingCiphertext = 21,
  noDecryptKey = 22,
  decryptFailure = 23,
  badCompressAlgorithm = 24,
  missingCompressedContent = 25,
  decompressFailure = 26,
  wrongHardware = 27,
  stalePackage = 28,
  notInCommunity = 29,
  unsupportedPackageType = 30,
  missingDependency = 31,
  wrongDependencyVersion = 32,
  insufficientMemory = 33,
  badFirmware = 34,
  unsupportedParameters = 35,
  breaksDependency = 36,
  otherError = 99
} FirmwarePackageLoadErrorCode;

typedef heim_integer VendorLoadErrorCode;

typedef struct CurrentFWConfig CurrentFWConfig;

typedef struct FirmwarePackageLoadError FirmwarePackageLoadError;

/* OBJECT IDENTIFIER id-on-hardwareModuleName ::= { iso(1) identified-organization(3) dod(6) internet(1) security(5) mechanisms(5) pkix(7) on(8) label-less(4) } */
extern ASN1EXP const heim_oid asn1_oid_id_on_hardwareModuleName;
#define ASN1_OID_ID_ON_HARDWAREMODULENAME (&asn1_oid_id_on_hardwareModuleName)

/*
FirmwarePkgData ::= OCTET STRING
*/

enum { asn1_tag_length_FirmwarePkgData = 1,
       asn1_tag_class_FirmwarePkgData = 0,
       asn1_tag_tag_FirmwarePkgData = 4 };
ASN1EXP int    ASN1CALL decode_FirmwarePkgData(const unsigned char *, size_t, FirmwarePkgData *, size_t *);
ASN1EXP int    ASN1CALL encode_FirmwarePkgData(unsigned char *, size_t, const FirmwarePkgData *, size_t *);
ASN1EXP size_t ASN1CALL length_FirmwarePkgData(const FirmwarePkgData *);
ASN1EXP int    ASN1CALL copy_FirmwarePkgData  (const FirmwarePkgData *, FirmwarePkgData *);
ASN1EXP void   ASN1CALL free_FirmwarePkgData  (FirmwarePkgData *);
ASN1EXP char * ASN1CALL print_FirmwarePkgData (const FirmwarePkgData *, int);


/*
PreferredPackageIdentifier ::= IMPLICIT SEQUENCE {
  fwPkgID           OBJECT IDENTIFIER,
  verNum          INTEGER (0..2147483647),
}
*/

enum { asn1_tag_length_PreferredPackageIdentifier = 1,
       asn1_tag_class_PreferredPackageIdentifier = 0,
       asn1_tag_tag_PreferredPackageIdentifier = 16 };
struct PreferredPackageIdentifier {
  heim_oid fwPkgID;
  unsigned int verNum;
};

ASN1EXP int    ASN1CALL decode_PreferredPackageIdentifier(const unsigned char *, size_t, PreferredPackageIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_PreferredPackageIdentifier(unsigned char *, size_t, const PreferredPackageIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_PreferredPackageIdentifier(const PreferredPackageIdentifier *);
ASN1EXP int    ASN1CALL copy_PreferredPackageIdentifier  (const PreferredPackageIdentifier *, PreferredPackageIdentifier *);
ASN1EXP void   ASN1CALL free_PreferredPackageIdentifier  (PreferredPackageIdentifier *);
ASN1EXP char * ASN1CALL print_PreferredPackageIdentifier (const PreferredPackageIdentifier *, int);


/*
PreferredOrLegacyPackageIdentifier ::= CHOICE {
  preferred       PreferredPackageIdentifier,
  legacy          OCTET STRING,
}
*/

enum { asn1_tag_length_PreferredOrLegacyPackageIdentifier = 1,
       asn1_tag_class_PreferredOrLegacyPackageIdentifier = 0,
       asn1_tag_tag_PreferredOrLegacyPackageIdentifier = 0 };
struct PreferredOrLegacyPackageIdentifier {
  enum PreferredOrLegacyPackageIdentifier_enum {
    choice_PreferredOrLegacyPackageIdentifier_preferred = 1,
    choice_PreferredOrLegacyPackageIdentifier_legacy
  } element;
  union {
    PreferredPackageIdentifier preferred;
    heim_octet_string legacy;
  } u;
};

ASN1EXP int    ASN1CALL decode_PreferredOrLegacyPackageIdentifier(const unsigned char *, size_t, PreferredOrLegacyPackageIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_PreferredOrLegacyPackageIdentifier(unsigned char *, size_t, const PreferredOrLegacyPackageIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_PreferredOrLegacyPackageIdentifier(const PreferredOrLegacyPackageIdentifier *);
ASN1EXP int    ASN1CALL copy_PreferredOrLegacyPackageIdentifier  (const PreferredOrLegacyPackageIdentifier *, PreferredOrLegacyPackageIdentifier *);
ASN1EXP void   ASN1CALL free_PreferredOrLegacyPackageIdentifier  (PreferredOrLegacyPackageIdentifier *);
ASN1EXP char * ASN1CALL print_PreferredOrLegacyPackageIdentifier (const PreferredOrLegacyPackageIdentifier *, int);


/*
PreferredOrLegacyStalePackageIdentifier ::= CHOICE {
  preferredStaleVerNum   INTEGER (0..2147483647),
  legacyStaleVersion     OCTET STRING,
}
*/

enum { asn1_tag_length_PreferredOrLegacyStalePackageIdentifier = 1,
       asn1_tag_class_PreferredOrLegacyStalePackageIdentifier = 0,
       asn1_tag_tag_PreferredOrLegacyStalePackageIdentifier = 0 };
struct PreferredOrLegacyStalePackageIdentifier {
  enum PreferredOrLegacyStalePackageIdentifier_enum {
    choice_PreferredOrLegacyStalePackageIdentifier_preferredStaleVerNum = 1,
    choice_PreferredOrLegacyStalePackageIdentifier_legacyStaleVersion
  } element;
  union {
    unsigned int preferredStaleVerNum;
    heim_octet_string legacyStaleVersion;
  } u;
};

ASN1EXP int    ASN1CALL decode_PreferredOrLegacyStalePackageIdentifier(const unsigned char *, size_t, PreferredOrLegacyStalePackageIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_PreferredOrLegacyStalePackageIdentifier(unsigned char *, size_t, const PreferredOrLegacyStalePackageIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_PreferredOrLegacyStalePackageIdentifier(const PreferredOrLegacyStalePackageIdentifier *);
ASN1EXP int    ASN1CALL copy_PreferredOrLegacyStalePackageIdentifier  (const PreferredOrLegacyStalePackageIdentifier *, PreferredOrLegacyStalePackageIdentifier *);
ASN1EXP void   ASN1CALL free_PreferredOrLegacyStalePackageIdentifier  (PreferredOrLegacyStalePackageIdentifier *);
ASN1EXP char * ASN1CALL print_PreferredOrLegacyStalePackageIdentifier (const PreferredOrLegacyStalePackageIdentifier *, int);


/*
FirmwarePackageIdentifier ::= IMPLICIT SEQUENCE {
  name            PreferredOrLegacyPackageIdentifier,
  stale           PreferredOrLegacyStalePackageIdentifier OPTIONAL,
}
*/

enum { asn1_tag_length_FirmwarePackageIdentifier = 1,
       asn1_tag_class_FirmwarePackageIdentifier = 0,
       asn1_tag_tag_FirmwarePackageIdentifier = 16 };
struct FirmwarePackageIdentifier {
  PreferredOrLegacyPackageIdentifier name;
  PreferredOrLegacyStalePackageIdentifier *stale;
};

ASN1EXP int    ASN1CALL decode_FirmwarePackageIdentifier(const unsigned char *, size_t, FirmwarePackageIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_FirmwarePackageIdentifier(unsigned char *, size_t, const FirmwarePackageIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_FirmwarePackageIdentifier(const FirmwarePackageIdentifier *);
ASN1EXP int    ASN1CALL copy_FirmwarePackageIdentifier  (const FirmwarePackageIdentifier *, FirmwarePackageIdentifier *);
ASN1EXP void   ASN1CALL free_FirmwarePackageIdentifier  (FirmwarePackageIdentifier *);
ASN1EXP char * ASN1CALL print_FirmwarePackageIdentifier (const FirmwarePackageIdentifier *, int);


/*
TargetHardwareIdentifiers ::= IMPLICIT SEQUENCE OF OBJECT IDENTIFIER
*/

enum { asn1_tag_length_TargetHardwareIdentifiers = 1,
       asn1_tag_class_TargetHardwareIdentifiers = 0,
       asn1_tag_tag_TargetHardwareIdentifiers = 16 };
struct TargetHardwareIdentifiers {
  unsigned int len;
  heim_oid *val;
};

ASN1EXP int    ASN1CALL decode_TargetHardwareIdentifiers(const unsigned char *, size_t, TargetHardwareIdentifiers *, size_t *);
ASN1EXP int    ASN1CALL encode_TargetHardwareIdentifiers(unsigned char *, size_t, const TargetHardwareIdentifiers *, size_t *);
ASN1EXP size_t ASN1CALL length_TargetHardwareIdentifiers(const TargetHardwareIdentifiers *);
ASN1EXP int    ASN1CALL copy_TargetHardwareIdentifiers  (const TargetHardwareIdentifiers *, TargetHardwareIdentifiers *);
ASN1EXP void   ASN1CALL free_TargetHardwareIdentifiers  (TargetHardwareIdentifiers *);
ASN1EXP char * ASN1CALL print_TargetHardwareIdentifiers (const TargetHardwareIdentifiers *, int);


/*
DecryptKeyIdentifier ::= OCTET STRING
*/

enum { asn1_tag_length_DecryptKeyIdentifier = 1,
       asn1_tag_class_DecryptKeyIdentifier = 0,
       asn1_tag_tag_DecryptKeyIdentifier = 4 };
ASN1EXP int    ASN1CALL decode_DecryptKeyIdentifier(const unsigned char *, size_t, DecryptKeyIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_DecryptKeyIdentifier(unsigned char *, size_t, const DecryptKeyIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_DecryptKeyIdentifier(const DecryptKeyIdentifier *);
ASN1EXP int    ASN1CALL copy_DecryptKeyIdentifier  (const DecryptKeyIdentifier *, DecryptKeyIdentifier *);
ASN1EXP void   ASN1CALL free_DecryptKeyIdentifier  (DecryptKeyIdentifier *);
ASN1EXP char * ASN1CALL print_DecryptKeyIdentifier (const DecryptKeyIdentifier *, int);


/*
ImplementedCryptoAlgorithms ::= IMPLICIT SEQUENCE OF OBJECT IDENTIFIER
*/

enum { asn1_tag_length_ImplementedCryptoAlgorithms = 1,
       asn1_tag_class_ImplementedCryptoAlgorithms = 0,
       asn1_tag_tag_ImplementedCryptoAlgorithms = 16 };
struct ImplementedCryptoAlgorithms {
  unsigned int len;
  heim_oid *val;
};

ASN1EXP int    ASN1CALL decode_ImplementedCryptoAlgorithms(const unsigned char *, size_t, ImplementedCryptoAlgorithms *, size_t *);
ASN1EXP int    ASN1CALL encode_ImplementedCryptoAlgorithms(unsigned char *, size_t, const ImplementedCryptoAlgorithms *, size_t *);
ASN1EXP size_t ASN1CALL length_ImplementedCryptoAlgorithms(const ImplementedCryptoAlgorithms *);
ASN1EXP int    ASN1CALL copy_ImplementedCryptoAlgorithms  (const ImplementedCryptoAlgorithms *, ImplementedCryptoAlgorithms *);
ASN1EXP void   ASN1CALL free_ImplementedCryptoAlgorithms  (ImplementedCryptoAlgorithms *);
ASN1EXP char * ASN1CALL print_ImplementedCryptoAlgorithms (const ImplementedCryptoAlgorithms *, int);


/*
ImplementedCompressAlgorithms ::= IMPLICIT SEQUENCE OF OBJECT IDENTIFIER
*/

enum { asn1_tag_length_ImplementedCompressAlgorithms = 1,
       asn1_tag_class_ImplementedCompressAlgorithms = 0,
       asn1_tag_tag_ImplementedCompressAlgorithms = 16 };
struct ImplementedCompressAlgorithms {
  unsigned int len;
  heim_oid *val;
};

ASN1EXP int    ASN1CALL decode_ImplementedCompressAlgorithms(const unsigned char *, size_t, ImplementedCompressAlgorithms *, size_t *);
ASN1EXP int    ASN1CALL encode_ImplementedCompressAlgorithms(unsigned char *, size_t, const ImplementedCompressAlgorithms *, size_t *);
ASN1EXP size_t ASN1CALL length_ImplementedCompressAlgorithms(const ImplementedCompressAlgorithms *);
ASN1EXP int    ASN1CALL copy_ImplementedCompressAlgorithms  (const ImplementedCompressAlgorithms *, ImplementedCompressAlgorithms *);
ASN1EXP void   ASN1CALL free_ImplementedCompressAlgorithms  (ImplementedCompressAlgorithms *);
ASN1EXP char * ASN1CALL print_ImplementedCompressAlgorithms (const ImplementedCompressAlgorithms *, int);


/*
HardwareSerialEntry ::= CHOICE {
  all               NULL,
  single          OCTET STRING,
  block           IMPLICIT SEQUENCE {
    low             OCTET STRING,
    high            OCTET STRING,
  },
}
*/

enum { asn1_tag_length_HardwareSerialEntry = 1,
       asn1_tag_class_HardwareSerialEntry = 0,
       asn1_tag_tag_HardwareSerialEntry = 0 };
struct HardwareSerialEntry {
  enum HardwareSerialEntry_enum {
    choice_HardwareSerialEntry_all = 1,
    choice_HardwareSerialEntry_single,
    choice_HardwareSerialEntry_block
  } element;
  union {
    int all;
    heim_octet_string single;
    struct HardwareSerialEntry_block {
      heim_octet_string low;
      heim_octet_string high;
    } block;
  } u;
};

ASN1EXP int    ASN1CALL decode_HardwareSerialEntry(const unsigned char *, size_t, HardwareSerialEntry *, size_t *);
ASN1EXP int    ASN1CALL encode_HardwareSerialEntry(unsigned char *, size_t, const HardwareSerialEntry *, size_t *);
ASN1EXP size_t ASN1CALL length_HardwareSerialEntry(const HardwareSerialEntry *);
ASN1EXP int    ASN1CALL copy_HardwareSerialEntry  (const HardwareSerialEntry *, HardwareSerialEntry *);
ASN1EXP void   ASN1CALL free_HardwareSerialEntry  (HardwareSerialEntry *);
ASN1EXP char * ASN1CALL print_HardwareSerialEntry (const HardwareSerialEntry *, int);


/*
HardwareModules ::= IMPLICIT SEQUENCE {
  hwType              OBJECT IDENTIFIER,
  hwSerialEntries   IMPLICIT SEQUENCE OF HardwareSerialEntry,
}
*/

enum { asn1_tag_length_HardwareModules = 1,
       asn1_tag_class_HardwareModules = 0,
       asn1_tag_tag_HardwareModules = 16 };
struct HardwareModules {
  heim_oid hwType;
  struct HardwareModules_hwSerialEntries {
    unsigned int len;
    HardwareSerialEntry *val;
  } hwSerialEntries;
};

ASN1EXP int    ASN1CALL decode_HardwareModules(const unsigned char *, size_t, HardwareModules *, size_t *);
ASN1EXP int    ASN1CALL encode_HardwareModules(unsigned char *, size_t, const HardwareModules *, size_t *);
ASN1EXP size_t ASN1CALL length_HardwareModules(const HardwareModules *);
ASN1EXP int    ASN1CALL copy_HardwareModules  (const HardwareModules *, HardwareModules *);
ASN1EXP void   ASN1CALL free_HardwareModules  (HardwareModules *);
ASN1EXP char * ASN1CALL print_HardwareModules (const HardwareModules *, int);


/*
CommunityIdentifier ::= CHOICE {
  communityOID      OBJECT IDENTIFIER,
  hwModuleList    HardwareModules,
}
*/

enum { asn1_tag_length_CommunityIdentifier = 1,
       asn1_tag_class_CommunityIdentifier = 0,
       asn1_tag_tag_CommunityIdentifier = 0 };
struct CommunityIdentifier {
  enum CommunityIdentifier_enum {
    choice_CommunityIdentifier_communityOID = 1,
    choice_CommunityIdentifier_hwModuleList
  } element;
  union {
    heim_oid communityOID;
    HardwareModules hwModuleList;
  } u;
};

ASN1EXP int    ASN1CALL decode_CommunityIdentifier(const unsigned char *, size_t, CommunityIdentifier *, size_t *);
ASN1EXP int    ASN1CALL encode_CommunityIdentifier(unsigned char *, size_t, const CommunityIdentifier *, size_t *);
ASN1EXP size_t ASN1CALL length_CommunityIdentifier(const CommunityIdentifier *);
ASN1EXP int    ASN1CALL copy_CommunityIdentifier  (const CommunityIdentifier *, CommunityIdentifier *);
ASN1EXP void   ASN1CALL free_CommunityIdentifier  (CommunityIdentifier *);
ASN1EXP char * ASN1CALL print_CommunityIdentifier (const CommunityIdentifier *, int);


/*
CommunityIdentifiers ::= IMPLICIT SEQUENCE OF CommunityIdentifier
*/

enum { asn1_tag_length_CommunityIdentifiers = 1,
       asn1_tag_class_CommunityIdentifiers = 0,
       asn1_tag_tag_CommunityIdentifiers = 16 };
struct CommunityIdentifiers {
  unsigned int len;
  CommunityIdentifier *val;
};

ASN1EXP int    ASN1CALL decode_CommunityIdentifiers(const unsigned char *, size_t, CommunityIdentifiers *, size_t *);
ASN1EXP int    ASN1CALL encode_CommunityIdentifiers(unsigned char *, size_t, const CommunityIdentifiers *, size_t *);
ASN1EXP size_t ASN1CALL length_CommunityIdentifiers(const CommunityIdentifiers *);
ASN1EXP int    ASN1CALL copy_CommunityIdentifiers  (const CommunityIdentifiers *, CommunityIdentifiers *);
ASN1EXP void   ASN1CALL free_CommunityIdentifiers  (CommunityIdentifiers *);
ASN1EXP char * ASN1CALL print_CommunityIdentifiers (const CommunityIdentifiers *, int);


/*
FirmwarePackageInfo ::= IMPLICIT SEQUENCE {
  fwPkgType       INTEGER OPTIONAL,
  dependencies    IMPLICIT SEQUENCE OF PreferredOrLegacyPackageIdentifier OPTIONAL,
}
*/

enum { asn1_tag_length_FirmwarePackageInfo = 1,
       asn1_tag_class_FirmwarePackageInfo = 0,
       asn1_tag_tag_FirmwarePackageInfo = 16 };
struct FirmwarePackageInfo {
  heim_integer *fwPkgType;
  struct FirmwarePackageInfo_dependencies {
    unsigned int len;
    PreferredOrLegacyPackageIdentifier *val;
  } *dependencies;
};

ASN1EXP int    ASN1CALL decode_FirmwarePackageInfo(const unsigned char *, size_t, FirmwarePackageInfo *, size_t *);
ASN1EXP int    ASN1CALL encode_FirmwarePackageInfo(unsigned char *, size_t, const FirmwarePackageInfo *, size_t *);
ASN1EXP size_t ASN1CALL length_FirmwarePackageInfo(const FirmwarePackageInfo *);
ASN1EXP int    ASN1CALL copy_FirmwarePackageInfo  (const FirmwarePackageInfo *, FirmwarePackageInfo *);
ASN1EXP void   ASN1CALL free_FirmwarePackageInfo  (FirmwarePackageInfo *);
ASN1EXP char * ASN1CALL print_FirmwarePackageInfo (const FirmwarePackageInfo *, int);


/*
WrappedFirmwareKey ::= EnvelopedData
*/

enum { asn1_tag_length_WrappedFirmwareKey = asn1_tag_length_EnvelopedData,
       asn1_tag_class_WrappedFirmwareKey = asn1_tag_class_EnvelopedData,
       asn1_tag_tag_WrappedFirmwareKey = asn1_tag_tag_EnvelopedData };

ASN1EXP int    ASN1CALL decode_WrappedFirmwareKey(const unsigned char *, size_t, WrappedFirmwareKey *, size_t *);
ASN1EXP int    ASN1CALL encode_WrappedFirmwareKey(unsigned char *, size_t, const WrappedFirmwareKey *, size_t *);
ASN1EXP size_t ASN1CALL length_WrappedFirmwareKey(const WrappedFirmwareKey *);
ASN1EXP int    ASN1CALL copy_WrappedFirmwareKey  (const WrappedFirmwareKey *, WrappedFirmwareKey *);
ASN1EXP void   ASN1CALL free_WrappedFirmwareKey  (WrappedFirmwareKey *);
ASN1EXP char * ASN1CALL print_WrappedFirmwareKey (const WrappedFirmwareKey *, int);


/*
FWReceiptVersion ::= INTEGER {
  rfc4108_v1(1)
}
*/

enum { asn1_tag_length_FWReceiptVersion = 1,
       asn1_tag_class_FWReceiptVersion = 0,
       asn1_tag_tag_FWReceiptVersion = 2 };
ASN1EXP int    ASN1CALL decode_FWReceiptVersion(const unsigned char *, size_t, FWReceiptVersion *, size_t *);
ASN1EXP int    ASN1CALL encode_FWReceiptVersion(unsigned char *, size_t, const FWReceiptVersion *, size_t *);
ASN1EXP size_t ASN1CALL length_FWReceiptVersion(const FWReceiptVersion *);
ASN1EXP int    ASN1CALL copy_FWReceiptVersion  (const FWReceiptVersion *, FWReceiptVersion *);
ASN1EXP void   ASN1CALL free_FWReceiptVersion  (FWReceiptVersion *);
ASN1EXP char * ASN1CALL print_FWReceiptVersion (const FWReceiptVersion *, int);


/*
FirmwarePackageLoadReceipt ::= IMPLICIT SEQUENCE {
  version            FWReceiptVersion,
  hwType               OBJECT IDENTIFIER,
  hwSerialNum        OCTET STRING,
  fwPkgName          PreferredOrLegacyPackageIdentifier,
  trustAnchorKeyID   OCTET STRING OPTIONAL,
  decryptKeyID       [1] IMPLICIT OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_FirmwarePackageLoadReceipt = 1,
       asn1_tag_class_FirmwarePackageLoadReceipt = 0,
       asn1_tag_tag_FirmwarePackageLoadReceipt = 16 };
struct FirmwarePackageLoadReceipt {
  FWReceiptVersion version;
  heim_oid hwType;
  heim_octet_string hwSerialNum;
  PreferredOrLegacyPackageIdentifier fwPkgName;
  heim_octet_string *trustAnchorKeyID;
  heim_octet_string *decryptKeyID;
};

ASN1EXP int    ASN1CALL decode_FirmwarePackageLoadReceipt(const unsigned char *, size_t, FirmwarePackageLoadReceipt *, size_t *);
ASN1EXP int    ASN1CALL encode_FirmwarePackageLoadReceipt(unsigned char *, size_t, const FirmwarePackageLoadReceipt *, size_t *);
ASN1EXP size_t ASN1CALL length_FirmwarePackageLoadReceipt(const FirmwarePackageLoadReceipt *);
ASN1EXP int    ASN1CALL copy_FirmwarePackageLoadReceipt  (const FirmwarePackageLoadReceipt *, FirmwarePackageLoadReceipt *);
ASN1EXP void   ASN1CALL free_FirmwarePackageLoadReceipt  (FirmwarePackageLoadReceipt *);
ASN1EXP char * ASN1CALL print_FirmwarePackageLoadReceipt (const FirmwarePackageLoadReceipt *, int);


/*
FWErrorVersion ::= FWReceiptVersion
*/

enum { asn1_tag_length_FWErrorVersion = 1,
       asn1_tag_class_FWErrorVersion = 0,
       asn1_tag_tag_FWErrorVersion = 0 };

ASN1EXP int    ASN1CALL decode_FWErrorVersion(const unsigned char *, size_t, FWErrorVersion *, size_t *);
ASN1EXP int    ASN1CALL encode_FWErrorVersion(unsigned char *, size_t, const FWErrorVersion *, size_t *);
ASN1EXP size_t ASN1CALL length_FWErrorVersion(const FWErrorVersion *);
ASN1EXP int    ASN1CALL copy_FWErrorVersion  (const FWErrorVersion *, FWErrorVersion *);
ASN1EXP void   ASN1CALL free_FWErrorVersion  (FWErrorVersion *);
ASN1EXP char * ASN1CALL print_FWErrorVersion (const FWErrorVersion *, int);


/*
FirmwarePackageLoadErrorCode ::= INTEGER {
  decodeFailure(1),
  badContentInfo(2),
  badSignedData(3),
  badEncapContent(4),
  badCertificate(5),
  badSignerInfo(6),
  badSignedAttrs(7),
  badUnsignedAttrs(8),
  missingContent(9),
  noTrustAnchor(10),
  notAuthorized(11),
  badDigestAlgorithm(12),
  badSignatureAlgorithm(13),
  unsupportedKeySize(14),
  signatureFailure(15),
  contentTypeMismatch(16),
  badEncryptedData(17),
  unprotectedAttrsPresent(18),
  badEncryptContent(19),
  badEncryptAlgorithm(20),
  missingCiphertext(21),
  noDecryptKey(22),
  decryptFailure(23),
  badCompressAlgorithm(24),
  missingCompressedContent(25),
  decompressFailure(26),
  wrongHardware(27),
  stalePackage(28),
  notInCommunity(29),
  unsupportedPackageType(30),
  missingDependency(31),
  wrongDependencyVersion(32),
  insufficientMemory(33),
  badFirmware(34),
  unsupportedParameters(35),
  breaksDependency(36),
  otherError(99)
}
*/

enum { asn1_tag_length_FirmwarePackageLoadErrorCode = 1,
       asn1_tag_class_FirmwarePackageLoadErrorCode = 0,
       asn1_tag_tag_FirmwarePackageLoadErrorCode = 10 };
ASN1EXP int    ASN1CALL decode_FirmwarePackageLoadErrorCode(const unsigned char *, size_t, FirmwarePackageLoadErrorCode *, size_t *);
ASN1EXP int    ASN1CALL encode_FirmwarePackageLoadErrorCode(unsigned char *, size_t, const FirmwarePackageLoadErrorCode *, size_t *);
ASN1EXP size_t ASN1CALL length_FirmwarePackageLoadErrorCode(const FirmwarePackageLoadErrorCode *);
ASN1EXP int    ASN1CALL copy_FirmwarePackageLoadErrorCode  (const FirmwarePackageLoadErrorCode *, FirmwarePackageLoadErrorCode *);
ASN1EXP void   ASN1CALL free_FirmwarePackageLoadErrorCode  (FirmwarePackageLoadErrorCode *);
ASN1EXP char * ASN1CALL print_FirmwarePackageLoadErrorCode (const FirmwarePackageLoadErrorCode *, int);


/*
VendorLoadErrorCode ::= INTEGER
*/

enum { asn1_tag_length_VendorLoadErrorCode = 1,
       asn1_tag_class_VendorLoadErrorCode = 0,
       asn1_tag_tag_VendorLoadErrorCode = 2 };
ASN1EXP int    ASN1CALL decode_VendorLoadErrorCode(const unsigned char *, size_t, VendorLoadErrorCode *, size_t *);
ASN1EXP int    ASN1CALL encode_VendorLoadErrorCode(unsigned char *, size_t, const VendorLoadErrorCode *, size_t *);
ASN1EXP size_t ASN1CALL length_VendorLoadErrorCode(const VendorLoadErrorCode *);
ASN1EXP int    ASN1CALL copy_VendorLoadErrorCode  (const VendorLoadErrorCode *, VendorLoadErrorCode *);
ASN1EXP void   ASN1CALL free_VendorLoadErrorCode  (VendorLoadErrorCode *);
ASN1EXP char * ASN1CALL print_VendorLoadErrorCode (const VendorLoadErrorCode *, int);


/*
CurrentFWConfig ::= IMPLICIT SEQUENCE {
  fwPkgType       INTEGER OPTIONAL,
  fwPkgName       PreferredOrLegacyPackageIdentifier,
}
*/

enum { asn1_tag_length_CurrentFWConfig = 1,
       asn1_tag_class_CurrentFWConfig = 0,
       asn1_tag_tag_CurrentFWConfig = 16 };
struct CurrentFWConfig {
  heim_integer *fwPkgType;
  PreferredOrLegacyPackageIdentifier fwPkgName;
};

ASN1EXP int    ASN1CALL decode_CurrentFWConfig(const unsigned char *, size_t, CurrentFWConfig *, size_t *);
ASN1EXP int    ASN1CALL encode_CurrentFWConfig(unsigned char *, size_t, const CurrentFWConfig *, size_t *);
ASN1EXP size_t ASN1CALL length_CurrentFWConfig(const CurrentFWConfig *);
ASN1EXP int    ASN1CALL copy_CurrentFWConfig  (const CurrentFWConfig *, CurrentFWConfig *);
ASN1EXP void   ASN1CALL free_CurrentFWConfig  (CurrentFWConfig *);
ASN1EXP char * ASN1CALL print_CurrentFWConfig (const CurrentFWConfig *, int);


/*
FirmwarePackageLoadError ::= IMPLICIT SEQUENCE {
  version           FWErrorVersion,
  hwType              OBJECT IDENTIFIER,
  hwSerialNum       OCTET STRING,
  errorCode         FirmwarePackageLoadErrorCode,
  vendorErrorCode   VendorLoadErrorCode OPTIONAL,
  fwPkgName         PreferredOrLegacyPackageIdentifier OPTIONAL,
  config            [1] IMPLICIT IMPLICIT SEQUENCE OF CurrentFWConfig OPTIONAL,
}
*/

enum { asn1_tag_length_FirmwarePackageLoadError = 1,
       asn1_tag_class_FirmwarePackageLoadError = 0,
       asn1_tag_tag_FirmwarePackageLoadError = 16 };
struct FirmwarePackageLoadError {
  FWErrorVersion version;
  heim_oid hwType;
  heim_octet_string hwSerialNum;
  FirmwarePackageLoadErrorCode errorCode;
  VendorLoadErrorCode *vendorErrorCode;
  PreferredOrLegacyPackageIdentifier *fwPkgName;
  struct FirmwarePackageLoadError_config {
    unsigned int len;
    CurrentFWConfig *val;
  } *config;
};

ASN1EXP int    ASN1CALL decode_FirmwarePackageLoadError(const unsigned char *, size_t, FirmwarePackageLoadError *, size_t *);
ASN1EXP int    ASN1CALL encode_FirmwarePackageLoadError(unsigned char *, size_t, const FirmwarePackageLoadError *, size_t *);
ASN1EXP size_t ASN1CALL length_FirmwarePackageLoadError(const FirmwarePackageLoadError *);
ASN1EXP int    ASN1CALL copy_FirmwarePackageLoadError  (const FirmwarePackageLoadError *, FirmwarePackageLoadError *);
ASN1EXP void   ASN1CALL free_FirmwarePackageLoadError  (FirmwarePackageLoadError *);
ASN1EXP char * ASN1CALL print_FirmwarePackageLoadError (const FirmwarePackageLoadError *, int);


#endif /* __rfc4108_asn1_h__ */
