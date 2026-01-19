/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/gssapi/spnego/spnego.asn1 */
/* Do not edit */

#ifndef __spnego_asn1_h__
#define __spnego_asn1_h__

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

typedef heim_oid MechType;

typedef struct MechTypeList MechTypeList;

typedef struct ContextFlags {
  unsigned int delegFlag:1;
  unsigned int mutualFlag:1;
  unsigned int replayFlag:1;
  unsigned int sequenceFlag:1;
  unsigned int anonFlag:1;
  unsigned int confFlag:1;
  unsigned int integFlag:1;
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
} ContextFlags;


typedef struct NegHints NegHints;

typedef struct NegTokenInit2 NegTokenInit2;

typedef struct NegTokenInit NegTokenInit;

typedef enum NegStateEnum {
  accept_completed = 0,
  accept_incomplete = 1,
  reject = 2,
  request_mic = 3
} NegStateEnum;

typedef struct NegTokenResp NegTokenResp;

typedef struct NegotiationToken NegotiationToken;

typedef struct NegotiationToken2 NegotiationToken2;

/*
MechType ::= OBJECT IDENTIFIER
*/

enum { asn1_tag_length_MechType = 1,
       asn1_tag_class_MechType = 0,
       asn1_tag_tag_MechType = 6 };
ASN1EXP int    ASN1CALL decode_MechType(const unsigned char *, size_t, MechType *, size_t *);
ASN1EXP int    ASN1CALL encode_MechType(unsigned char *, size_t, const MechType *, size_t *);
ASN1EXP size_t ASN1CALL length_MechType(const MechType *);
ASN1EXP int    ASN1CALL copy_MechType  (const MechType *, MechType *);
ASN1EXP void   ASN1CALL free_MechType  (MechType *);
ASN1EXP char * ASN1CALL print_MechType (const MechType *, int);


/*
MechTypeList ::= SEQUENCE OF MechType
*/

enum { asn1_tag_length_MechTypeList = 1,
       asn1_tag_class_MechTypeList = 0,
       asn1_tag_tag_MechTypeList = 16 };
struct MechTypeList {
  unsigned int len;
  MechType *val;
};

ASN1EXP int   ASN1CALL add_MechTypeList  (MechTypeList *, const MechType *);
ASN1EXP int   ASN1CALL remove_MechTypeList  (MechTypeList *, unsigned int);
ASN1EXP int    ASN1CALL decode_MechTypeList(const unsigned char *, size_t, MechTypeList *, size_t *);
ASN1EXP int    ASN1CALL encode_MechTypeList(unsigned char *, size_t, const MechTypeList *, size_t *);
ASN1EXP size_t ASN1CALL length_MechTypeList(const MechTypeList *);
ASN1EXP int    ASN1CALL copy_MechTypeList  (const MechTypeList *, MechTypeList *);
ASN1EXP void   ASN1CALL free_MechTypeList  (MechTypeList *);
ASN1EXP char * ASN1CALL print_MechTypeList (const MechTypeList *, int);


/*
ContextFlags ::= BIT STRING {
  delegFlag(0),
  mutualFlag(1),
  replayFlag(2),
  sequenceFlag(3),
  anonFlag(4),
  confFlag(5),
  integFlag(6)
}
*/

enum { asn1_tag_length_ContextFlags = 1,
       asn1_tag_class_ContextFlags = 0,
       asn1_tag_tag_ContextFlags = 3 };
uint64_t ContextFlags2int(ContextFlags);
ContextFlags int2ContextFlags(uint64_t);
const struct units * asn1_ContextFlags_units(void);
ASN1EXP int    ASN1CALL decode_ContextFlags(const unsigned char *, size_t, ContextFlags *, size_t *);
ASN1EXP int    ASN1CALL encode_ContextFlags(unsigned char *, size_t, const ContextFlags *, size_t *);
ASN1EXP size_t ASN1CALL length_ContextFlags(const ContextFlags *);
ASN1EXP int    ASN1CALL copy_ContextFlags  (const ContextFlags *, ContextFlags *);
ASN1EXP void   ASN1CALL free_ContextFlags  (ContextFlags *);
ASN1EXP char * ASN1CALL print_ContextFlags (const ContextFlags *, int);


/*
NegHints ::= SEQUENCE {
  hintName        [0] GeneralString OPTIONAL,
  hintAddress     [1] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_NegHints = 1,
       asn1_tag_class_NegHints = 0,
       asn1_tag_tag_NegHints = 16 };
struct NegHints {
  heim_general_string *hintName;
  heim_octet_string *hintAddress;
};

ASN1EXP int    ASN1CALL decode_NegHints(const unsigned char *, size_t, NegHints *, size_t *);
ASN1EXP int    ASN1CALL encode_NegHints(unsigned char *, size_t, const NegHints *, size_t *);
ASN1EXP size_t ASN1CALL length_NegHints(const NegHints *);
ASN1EXP int    ASN1CALL copy_NegHints  (const NegHints *, NegHints *);
ASN1EXP void   ASN1CALL free_NegHints  (NegHints *);
ASN1EXP char * ASN1CALL print_NegHints (const NegHints *, int);


/*
NegTokenInit2 ::= SEQUENCE {
  mechTypes       [0] MechTypeList,
  reqFlags        [1] ContextFlags OPTIONAL,
  mechToken       [2] OCTET STRING OPTIONAL,
  negHints        [3] NegHints OPTIONAL,
}
*/

enum { asn1_tag_length_NegTokenInit2 = 1,
       asn1_tag_class_NegTokenInit2 = 0,
       asn1_tag_tag_NegTokenInit2 = 16 };
struct NegTokenInit2 {
  MechTypeList mechTypes;
  ContextFlags *reqFlags;
  heim_octet_string *mechToken;
  NegHints *negHints;
};

ASN1EXP int    ASN1CALL decode_NegTokenInit2(const unsigned char *, size_t, NegTokenInit2 *, size_t *);
ASN1EXP int    ASN1CALL encode_NegTokenInit2(unsigned char *, size_t, const NegTokenInit2 *, size_t *);
ASN1EXP size_t ASN1CALL length_NegTokenInit2(const NegTokenInit2 *);
ASN1EXP int    ASN1CALL copy_NegTokenInit2  (const NegTokenInit2 *, NegTokenInit2 *);
ASN1EXP void   ASN1CALL free_NegTokenInit2  (NegTokenInit2 *);
ASN1EXP char * ASN1CALL print_NegTokenInit2 (const NegTokenInit2 *, int);


/*
NegTokenInit ::= SEQUENCE {
  mechTypes       [0] MechTypeList,
  reqFlags        [1] ContextFlags OPTIONAL,
  mechToken       [2] OCTET STRING OPTIONAL,
  mechListMIC     [3] OCTET STRING OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_NegTokenInit = 1,
       asn1_tag_class_NegTokenInit = 0,
       asn1_tag_tag_NegTokenInit = 16 };
struct NegTokenInit {
  MechTypeList mechTypes;
  ContextFlags *reqFlags;
  heim_octet_string *mechToken;
  heim_octet_string *mechListMIC;
};

ASN1EXP int    ASN1CALL decode_NegTokenInit(const unsigned char *, size_t, NegTokenInit *, size_t *);
ASN1EXP int    ASN1CALL encode_NegTokenInit(unsigned char *, size_t, const NegTokenInit *, size_t *);
ASN1EXP size_t ASN1CALL length_NegTokenInit(const NegTokenInit *);
ASN1EXP int    ASN1CALL copy_NegTokenInit  (const NegTokenInit *, NegTokenInit *);
ASN1EXP void   ASN1CALL free_NegTokenInit  (NegTokenInit *);
ASN1EXP char * ASN1CALL print_NegTokenInit (const NegTokenInit *, int);


/*
NegStateEnum ::= INTEGER {
  accept_completed(0),
  accept_incomplete(1),
  reject(2),
  request_mic(3)
}
*/

enum { asn1_tag_length_NegStateEnum = 1,
       asn1_tag_class_NegStateEnum = 0,
       asn1_tag_tag_NegStateEnum = 10 };
ASN1EXP int    ASN1CALL decode_NegStateEnum(const unsigned char *, size_t, NegStateEnum *, size_t *);
ASN1EXP int    ASN1CALL encode_NegStateEnum(unsigned char *, size_t, const NegStateEnum *, size_t *);
ASN1EXP size_t ASN1CALL length_NegStateEnum(const NegStateEnum *);
ASN1EXP int    ASN1CALL copy_NegStateEnum  (const NegStateEnum *, NegStateEnum *);
ASN1EXP void   ASN1CALL free_NegStateEnum  (NegStateEnum *);
ASN1EXP char * ASN1CALL print_NegStateEnum (const NegStateEnum *, int);


/*
NegTokenResp ::= SEQUENCE {
  negState        [0] NegStateEnum OPTIONAL,
  supportedMech   [1] MechType OPTIONAL,
  responseToken   [2] OCTET STRING OPTIONAL,
  mechListMIC     [3] OCTET STRING OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_NegTokenResp = 1,
       asn1_tag_class_NegTokenResp = 0,
       asn1_tag_tag_NegTokenResp = 16 };
struct NegTokenResp {
  NegStateEnum *negState;
  MechType *supportedMech;
  heim_octet_string *responseToken;
  heim_octet_string *mechListMIC;
};

ASN1EXP int    ASN1CALL decode_NegTokenResp(const unsigned char *, size_t, NegTokenResp *, size_t *);
ASN1EXP int    ASN1CALL encode_NegTokenResp(unsigned char *, size_t, const NegTokenResp *, size_t *);
ASN1EXP size_t ASN1CALL length_NegTokenResp(const NegTokenResp *);
ASN1EXP int    ASN1CALL copy_NegTokenResp  (const NegTokenResp *, NegTokenResp *);
ASN1EXP void   ASN1CALL free_NegTokenResp  (NegTokenResp *);
ASN1EXP char * ASN1CALL print_NegTokenResp (const NegTokenResp *, int);


/*
NegotiationToken ::= CHOICE {
  negTokenInit    [0] NegTokenInit,
  negTokenResp    [1] NegTokenResp,
}
*/

enum { asn1_tag_length_NegotiationToken = 1,
       asn1_tag_class_NegotiationToken = 0,
       asn1_tag_tag_NegotiationToken = 0 };
struct NegotiationToken {
  enum NegotiationToken_enum {
    choice_NegotiationToken_negTokenInit = 1,
    choice_NegotiationToken_negTokenResp
  } element;
  union {
    NegTokenInit negTokenInit;
    NegTokenResp negTokenResp;
  } u;
};

ASN1EXP int    ASN1CALL decode_NegotiationToken(const unsigned char *, size_t, NegotiationToken *, size_t *);
ASN1EXP int    ASN1CALL encode_NegotiationToken(unsigned char *, size_t, const NegotiationToken *, size_t *);
ASN1EXP size_t ASN1CALL length_NegotiationToken(const NegotiationToken *);
ASN1EXP int    ASN1CALL copy_NegotiationToken  (const NegotiationToken *, NegotiationToken *);
ASN1EXP void   ASN1CALL free_NegotiationToken  (NegotiationToken *);
ASN1EXP char * ASN1CALL print_NegotiationToken (const NegotiationToken *, int);


/*
NegotiationToken2 ::= CHOICE {
  negTokenInit    [0] NegTokenInit2,
}
*/

enum { asn1_tag_length_NegotiationToken2 = 1,
       asn1_tag_class_NegotiationToken2 = 0,
       asn1_tag_tag_NegotiationToken2 = 0 };
struct NegotiationToken2 {
  enum NegotiationToken2_enum {
    choice_NegotiationToken2_negTokenInit = 1
  } element;
  union {
    NegTokenInit2 negTokenInit;
  } u;
};

ASN1EXP int    ASN1CALL decode_NegotiationToken2(const unsigned char *, size_t, NegotiationToken2 *, size_t *);
ASN1EXP int    ASN1CALL encode_NegotiationToken2(unsigned char *, size_t, const NegotiationToken2 *, size_t *);
ASN1EXP size_t ASN1CALL length_NegotiationToken2(const NegotiationToken2 *);
ASN1EXP int    ASN1CALL copy_NegotiationToken2  (const NegotiationToken2 *, NegotiationToken2 *);
ASN1EXP void   ASN1CALL free_NegotiationToken2  (NegotiationToken2 *);
ASN1EXP char * ASN1CALL print_NegotiationToken2 (const NegotiationToken2 *, int);


#endif /* __spnego_asn1_h__ */
