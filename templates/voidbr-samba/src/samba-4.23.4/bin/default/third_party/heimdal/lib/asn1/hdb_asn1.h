/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/hdb/hdb.asn1 */
/* Do not edit */

#ifndef __hdb_asn1_h__
#define __hdb_asn1_h__

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
#ifdef hdb_db_format
#undef hdb_db_format
#endif
enum { hdb_db_format = 2 };

#ifdef hdb_pw_salt
#undef hdb_pw_salt
#endif
enum { hdb_pw_salt = 3 };

#ifdef hdb_afs3_salt
#undef hdb_afs3_salt
#endif
enum { hdb_afs3_salt = 10 };

typedef struct Salt Salt;

typedef struct Key Key;

typedef struct Event Event;

typedef struct HDBFlags {
  unsigned int initial:1;
  unsigned int forwardable:1;
  unsigned int proxiable:1;
  unsigned int renewable:1;
  unsigned int postdate:1;
  unsigned int server:1;
  unsigned int client:1;
  unsigned int invalid:1;
  unsigned int require_preauth:1;
  unsigned int change_pw:1;
  unsigned int require_hwauth:1;
  unsigned int ok_as_delegate:1;
  unsigned int user_to_user:1;
  unsigned int immutable:1;
  unsigned int trusted_for_delegation:1;
  unsigned int allow_kerberos4:1;
  unsigned int allow_digest:1;
  unsigned int locked_out:1;
  unsigned int require_pwchange:1;
  unsigned int materialize:1;
  unsigned int virtual_keys:1;
  unsigned int virtual:1;
  unsigned int synthetic:1;
  unsigned int no_auth_data_reqd:1;
  unsigned int auth_data_reqd:1;
  unsigned int _unused25:1;
  unsigned int _unused26:1;
  unsigned int _unused27:1;
  unsigned int _unused28:1;
  unsigned int _unused29:1;
  unsigned int force_canonicalize:1;
  unsigned int do_not_store:1;
} HDBFlags;


typedef struct GENERATION GENERATION;

typedef struct HDB_Ext_PKINIT_acl HDB_Ext_PKINIT_acl;

typedef struct HDB_Ext_PKINIT_hash HDB_Ext_PKINIT_hash;

typedef struct HDB_Ext_PKINIT_cert HDB_Ext_PKINIT_cert;

typedef struct HDB_Ext_Constrained_delegation_acl HDB_Ext_Constrained_delegation_acl;

typedef heim_octet_string HDB_Ext_Lan_Manager_OWF;

typedef struct HDB_Ext_Password HDB_Ext_Password;

typedef struct HDB_Ext_Aliases HDB_Ext_Aliases;

typedef struct Keys Keys;

typedef struct HDB_keyset HDB_keyset;

typedef struct HDB_Ext_KeySet HDB_Ext_KeySet;

typedef struct KeyRotationFlags {
  unsigned int deleted:1;
  unsigned int parent:1;
  unsigned int _unused2:1;
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
} KeyRotationFlags;


typedef struct KeyRotation KeyRotation;

typedef struct HDB_Ext_KeyRotation HDB_Ext_KeyRotation;

typedef struct HDB_extension HDB_extension;

typedef struct HDB_extensions HDB_extensions;

typedef struct HDB_EncTypeList HDB_EncTypeList;

typedef struct HDB_entry HDB_entry;

typedef struct HDB_entry_alias HDB_entry_alias;

typedef struct HDB_EntryOrAlias HDB_EntryOrAlias;

/*
Salt ::= SEQUENCE {
  type            [0] INTEGER (0..4294967295),
  salt            [1] OCTET STRING,
  opaque          [2] OCTET STRING OPTIONAL,
}
*/

enum { asn1_tag_length_Salt = 1,
       asn1_tag_class_Salt = 0,
       asn1_tag_tag_Salt = 16 };
struct Salt {
  unsigned int type;
  heim_octet_string salt;
  heim_octet_string *opaque;
};

ASN1EXP int    ASN1CALL decode_Salt(const unsigned char *, size_t, Salt *, size_t *);
ASN1EXP int    ASN1CALL encode_Salt(unsigned char *, size_t, const Salt *, size_t *);
ASN1EXP size_t ASN1CALL length_Salt(const Salt *);
ASN1EXP int    ASN1CALL copy_Salt  (const Salt *, Salt *);
ASN1EXP void   ASN1CALL free_Salt  (Salt *);
ASN1EXP char * ASN1CALL print_Salt (const Salt *, int);


/*
Key ::= SEQUENCE {
  mkvno           [0] INTEGER (0..4294967295) OPTIONAL,
  key             [1] EncryptionKey,
  salt            [2] Salt OPTIONAL,
}
*/

enum { asn1_tag_length_Key = 1,
       asn1_tag_class_Key = 0,
       asn1_tag_tag_Key = 16 };
struct Key {
  unsigned int *mkvno;
  EncryptionKey key;
  Salt *salt;
};

ASN1EXP int    ASN1CALL decode_Key(const unsigned char *, size_t, Key *, size_t *);
ASN1EXP int    ASN1CALL encode_Key(unsigned char *, size_t, const Key *, size_t *);
ASN1EXP size_t ASN1CALL length_Key(const Key *);
ASN1EXP int    ASN1CALL copy_Key  (const Key *, Key *);
ASN1EXP void   ASN1CALL free_Key  (Key *);
ASN1EXP char * ASN1CALL print_Key (const Key *, int);


/*
Event ::= SEQUENCE {
  time            [0] KerberosTime,
  principal       [1] Principal OPTIONAL,
}
*/

enum { asn1_tag_length_Event = 1,
       asn1_tag_class_Event = 0,
       asn1_tag_tag_Event = 16 };
struct Event {
  KerberosTime time;
  Principal *principal;
};

ASN1EXP int    ASN1CALL decode_Event(const unsigned char *, size_t, Event *, size_t *);
ASN1EXP int    ASN1CALL encode_Event(unsigned char *, size_t, const Event *, size_t *);
ASN1EXP size_t ASN1CALL length_Event(const Event *);
ASN1EXP int    ASN1CALL copy_Event  (const Event *, Event *);
ASN1EXP void   ASN1CALL free_Event  (Event *);
ASN1EXP char * ASN1CALL print_Event (const Event *, int);


/*
HDBFlags ::= BIT STRING {
  initial(0),
  forwardable(1),
  proxiable(2),
  renewable(3),
  postdate(4),
  server(5),
  client(6),
  invalid(7),
  require-preauth(8),
  change-pw(9),
  require-hwauth(10),
  ok-as-delegate(11),
  user-to-user(12),
  immutable(13),
  trusted-for-delegation(14),
  allow-kerberos4(15),
  allow-digest(16),
  locked-out(17),
  require-pwchange(18),
  materialize(19),
  virtual-keys(20),
  virtual(21),
  synthetic(22),
  no-auth-data-reqd(23),
  auth-data-reqd(24),
  force-canonicalize(30),
  do-not-store(31)
}
*/

enum { asn1_tag_length_HDBFlags = 1,
       asn1_tag_class_HDBFlags = 0,
       asn1_tag_tag_HDBFlags = 3 };
uint64_t HDBFlags2int(HDBFlags);
HDBFlags int2HDBFlags(uint64_t);
const struct units * asn1_HDBFlags_units(void);
ASN1EXP int    ASN1CALL decode_HDBFlags(const unsigned char *, size_t, HDBFlags *, size_t *);
ASN1EXP int    ASN1CALL encode_HDBFlags(unsigned char *, size_t, const HDBFlags *, size_t *);
ASN1EXP size_t ASN1CALL length_HDBFlags(const HDBFlags *);
ASN1EXP int    ASN1CALL copy_HDBFlags  (const HDBFlags *, HDBFlags *);
ASN1EXP void   ASN1CALL free_HDBFlags  (HDBFlags *);
ASN1EXP char * ASN1CALL print_HDBFlags (const HDBFlags *, int);


/*
GENERATION ::= SEQUENCE {
  time            [0] KerberosTime,
  usec            [1] INTEGER (0..4294967295),
  gen             [2] INTEGER (0..4294967295),
}
*/

enum { asn1_tag_length_GENERATION = 1,
       asn1_tag_class_GENERATION = 0,
       asn1_tag_tag_GENERATION = 16 };
struct GENERATION {
  KerberosTime time;
  unsigned int usec;
  unsigned int gen;
};

ASN1EXP int    ASN1CALL decode_GENERATION(const unsigned char *, size_t, GENERATION *, size_t *);
ASN1EXP int    ASN1CALL encode_GENERATION(unsigned char *, size_t, const GENERATION *, size_t *);
ASN1EXP size_t ASN1CALL length_GENERATION(const GENERATION *);
ASN1EXP int    ASN1CALL copy_GENERATION  (const GENERATION *, GENERATION *);
ASN1EXP void   ASN1CALL free_GENERATION  (GENERATION *);
ASN1EXP char * ASN1CALL print_GENERATION (const GENERATION *, int);


/*
HDB-Ext-PKINIT-acl ::= SEQUENCE OF SEQUENCE {
  subject         [0]   UTF8String,
  issuer          [1]   UTF8String OPTIONAL,
  anchor          [2]   UTF8String OPTIONAL,
}
*/

enum { asn1_tag_length_HDB_Ext_PKINIT_acl = 1,
       asn1_tag_class_HDB_Ext_PKINIT_acl = 0,
       asn1_tag_tag_HDB_Ext_PKINIT_acl = 16 };
struct HDB_Ext_PKINIT_acl {
  unsigned int len;
  struct HDB_Ext_PKINIT_acl_val {
    heim_utf8_string subject;
    heim_utf8_string *issuer;
    heim_utf8_string *anchor;
  } *val;
};

ASN1EXP int    ASN1CALL decode_HDB_Ext_PKINIT_acl(const unsigned char *, size_t, HDB_Ext_PKINIT_acl *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_PKINIT_acl(unsigned char *, size_t, const HDB_Ext_PKINIT_acl *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_PKINIT_acl(const HDB_Ext_PKINIT_acl *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_PKINIT_acl  (const HDB_Ext_PKINIT_acl *, HDB_Ext_PKINIT_acl *);
ASN1EXP void   ASN1CALL free_HDB_Ext_PKINIT_acl  (HDB_Ext_PKINIT_acl *);
ASN1EXP char * ASN1CALL print_HDB_Ext_PKINIT_acl (const HDB_Ext_PKINIT_acl *, int);


/*
HDB-Ext-PKINIT-hash ::= SEQUENCE OF SEQUENCE {
  digest-type     [0]   OBJECT IDENTIFIER,
  digest          [1] OCTET STRING,
}
*/

enum { asn1_tag_length_HDB_Ext_PKINIT_hash = 1,
       asn1_tag_class_HDB_Ext_PKINIT_hash = 0,
       asn1_tag_tag_HDB_Ext_PKINIT_hash = 16 };
struct HDB_Ext_PKINIT_hash {
  unsigned int len;
  struct HDB_Ext_PKINIT_hash_val {
    heim_oid digest_type;
    heim_octet_string digest;
  } *val;
};

ASN1EXP int    ASN1CALL decode_HDB_Ext_PKINIT_hash(const unsigned char *, size_t, HDB_Ext_PKINIT_hash *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_PKINIT_hash(unsigned char *, size_t, const HDB_Ext_PKINIT_hash *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_PKINIT_hash(const HDB_Ext_PKINIT_hash *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_PKINIT_hash  (const HDB_Ext_PKINIT_hash *, HDB_Ext_PKINIT_hash *);
ASN1EXP void   ASN1CALL free_HDB_Ext_PKINIT_hash  (HDB_Ext_PKINIT_hash *);
ASN1EXP char * ASN1CALL print_HDB_Ext_PKINIT_hash (const HDB_Ext_PKINIT_hash *, int);


/*
HDB-Ext-PKINIT-cert ::= SEQUENCE OF SEQUENCE {
  cert            [0] OCTET STRING,
}
*/

enum { asn1_tag_length_HDB_Ext_PKINIT_cert = 1,
       asn1_tag_class_HDB_Ext_PKINIT_cert = 0,
       asn1_tag_tag_HDB_Ext_PKINIT_cert = 16 };
struct HDB_Ext_PKINIT_cert {
  unsigned int len;
  struct HDB_Ext_PKINIT_cert_val {
    heim_octet_string cert;
  } *val;
};

ASN1EXP int    ASN1CALL decode_HDB_Ext_PKINIT_cert(const unsigned char *, size_t, HDB_Ext_PKINIT_cert *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_PKINIT_cert(unsigned char *, size_t, const HDB_Ext_PKINIT_cert *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_PKINIT_cert(const HDB_Ext_PKINIT_cert *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_PKINIT_cert  (const HDB_Ext_PKINIT_cert *, HDB_Ext_PKINIT_cert *);
ASN1EXP void   ASN1CALL free_HDB_Ext_PKINIT_cert  (HDB_Ext_PKINIT_cert *);
ASN1EXP char * ASN1CALL print_HDB_Ext_PKINIT_cert (const HDB_Ext_PKINIT_cert *, int);


/*
HDB-Ext-Constrained-delegation-acl ::= SEQUENCE OF Principal
*/

enum { asn1_tag_length_HDB_Ext_Constrained_delegation_acl = 1,
       asn1_tag_class_HDB_Ext_Constrained_delegation_acl = 0,
       asn1_tag_tag_HDB_Ext_Constrained_delegation_acl = 16 };
struct HDB_Ext_Constrained_delegation_acl {
  unsigned int len;
  Principal *val;
};

ASN1EXP int    ASN1CALL decode_HDB_Ext_Constrained_delegation_acl(const unsigned char *, size_t, HDB_Ext_Constrained_delegation_acl *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_Constrained_delegation_acl(unsigned char *, size_t, const HDB_Ext_Constrained_delegation_acl *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_Constrained_delegation_acl(const HDB_Ext_Constrained_delegation_acl *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_Constrained_delegation_acl  (const HDB_Ext_Constrained_delegation_acl *, HDB_Ext_Constrained_delegation_acl *);
ASN1EXP void   ASN1CALL free_HDB_Ext_Constrained_delegation_acl  (HDB_Ext_Constrained_delegation_acl *);
ASN1EXP char * ASN1CALL print_HDB_Ext_Constrained_delegation_acl (const HDB_Ext_Constrained_delegation_acl *, int);


/*
HDB-Ext-Lan-Manager-OWF ::= OCTET STRING
*/

enum { asn1_tag_length_HDB_Ext_Lan_Manager_OWF = 1,
       asn1_tag_class_HDB_Ext_Lan_Manager_OWF = 0,
       asn1_tag_tag_HDB_Ext_Lan_Manager_OWF = 4 };
ASN1EXP int    ASN1CALL decode_HDB_Ext_Lan_Manager_OWF(const unsigned char *, size_t, HDB_Ext_Lan_Manager_OWF *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_Lan_Manager_OWF(unsigned char *, size_t, const HDB_Ext_Lan_Manager_OWF *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_Lan_Manager_OWF(const HDB_Ext_Lan_Manager_OWF *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_Lan_Manager_OWF  (const HDB_Ext_Lan_Manager_OWF *, HDB_Ext_Lan_Manager_OWF *);
ASN1EXP void   ASN1CALL free_HDB_Ext_Lan_Manager_OWF  (HDB_Ext_Lan_Manager_OWF *);
ASN1EXP char * ASN1CALL print_HDB_Ext_Lan_Manager_OWF (const HDB_Ext_Lan_Manager_OWF *, int);


/*
HDB-Ext-Password ::= SEQUENCE {
  mkvno           [0] INTEGER (0..4294967295) OPTIONAL,
  password        OCTET STRING,
}
*/

enum { asn1_tag_length_HDB_Ext_Password = 1,
       asn1_tag_class_HDB_Ext_Password = 0,
       asn1_tag_tag_HDB_Ext_Password = 16 };
struct HDB_Ext_Password {
  unsigned int *mkvno;
  heim_octet_string password;
};

ASN1EXP int    ASN1CALL decode_HDB_Ext_Password(const unsigned char *, size_t, HDB_Ext_Password *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_Password(unsigned char *, size_t, const HDB_Ext_Password *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_Password(const HDB_Ext_Password *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_Password  (const HDB_Ext_Password *, HDB_Ext_Password *);
ASN1EXP void   ASN1CALL free_HDB_Ext_Password  (HDB_Ext_Password *);
ASN1EXP char * ASN1CALL print_HDB_Ext_Password (const HDB_Ext_Password *, int);


/*
HDB-Ext-Aliases ::= SEQUENCE {
  case-insensitive   [0] BOOLEAN,
  aliases            [1] SEQUENCE OF Principal,
}
*/

enum { asn1_tag_length_HDB_Ext_Aliases = 1,
       asn1_tag_class_HDB_Ext_Aliases = 0,
       asn1_tag_tag_HDB_Ext_Aliases = 16 };
struct HDB_Ext_Aliases {
  int case_insensitive;
  struct HDB_Ext_Aliases_aliases {
    unsigned int len;
    Principal *val;
  } aliases;
};

ASN1EXP int    ASN1CALL decode_HDB_Ext_Aliases(const unsigned char *, size_t, HDB_Ext_Aliases *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_Aliases(unsigned char *, size_t, const HDB_Ext_Aliases *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_Aliases(const HDB_Ext_Aliases *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_Aliases  (const HDB_Ext_Aliases *, HDB_Ext_Aliases *);
ASN1EXP void   ASN1CALL free_HDB_Ext_Aliases  (HDB_Ext_Aliases *);
ASN1EXP char * ASN1CALL print_HDB_Ext_Aliases (const HDB_Ext_Aliases *, int);


/*
Keys ::= SEQUENCE OF Key
*/

enum { asn1_tag_length_Keys = 1,
       asn1_tag_class_Keys = 0,
       asn1_tag_tag_Keys = 16 };
struct Keys {
  unsigned int len;
  Key *val;
};

ASN1EXP int   ASN1CALL add_Keys  (Keys *, const Key *);
ASN1EXP int   ASN1CALL remove_Keys  (Keys *, unsigned int);
ASN1EXP int    ASN1CALL decode_Keys(const unsigned char *, size_t, Keys *, size_t *);
ASN1EXP int    ASN1CALL encode_Keys(unsigned char *, size_t, const Keys *, size_t *);
ASN1EXP size_t ASN1CALL length_Keys(const Keys *);
ASN1EXP int    ASN1CALL copy_Keys  (const Keys *, Keys *);
ASN1EXP void   ASN1CALL free_Keys  (Keys *);
ASN1EXP char * ASN1CALL print_Keys (const Keys *, int);


/*
HDB_keyset ::= SEQUENCE {
  kvno            [0] INTEGER (0..4294967295),
  keys            [1] Keys,
  set-time        [2] KerberosTime OPTIONAL,
  ...,
}
*/

enum { asn1_tag_length_HDB_keyset = 1,
       asn1_tag_class_HDB_keyset = 0,
       asn1_tag_tag_HDB_keyset = 16 };
struct HDB_keyset {
  unsigned int kvno;
  Keys keys;
  KerberosTime *set_time;
};

ASN1EXP int    ASN1CALL decode_HDB_keyset(const unsigned char *, size_t, HDB_keyset *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_keyset(unsigned char *, size_t, const HDB_keyset *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_keyset(const HDB_keyset *);
ASN1EXP int    ASN1CALL copy_HDB_keyset  (const HDB_keyset *, HDB_keyset *);
ASN1EXP void   ASN1CALL free_HDB_keyset  (HDB_keyset *);
ASN1EXP char * ASN1CALL print_HDB_keyset (const HDB_keyset *, int);


/*
HDB-Ext-KeySet ::= SEQUENCE OF HDB_keyset
*/

enum { asn1_tag_length_HDB_Ext_KeySet = 1,
       asn1_tag_class_HDB_Ext_KeySet = 0,
       asn1_tag_tag_HDB_Ext_KeySet = 16 };
struct HDB_Ext_KeySet {
  unsigned int len;
  HDB_keyset *val;
};

ASN1EXP int   ASN1CALL add_HDB_Ext_KeySet  (HDB_Ext_KeySet *, const HDB_keyset *);
ASN1EXP int   ASN1CALL remove_HDB_Ext_KeySet  (HDB_Ext_KeySet *, unsigned int);
ASN1EXP int    ASN1CALL decode_HDB_Ext_KeySet(const unsigned char *, size_t, HDB_Ext_KeySet *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_KeySet(unsigned char *, size_t, const HDB_Ext_KeySet *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_KeySet(const HDB_Ext_KeySet *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_KeySet  (const HDB_Ext_KeySet *, HDB_Ext_KeySet *);
ASN1EXP void   ASN1CALL free_HDB_Ext_KeySet  (HDB_Ext_KeySet *);
ASN1EXP char * ASN1CALL print_HDB_Ext_KeySet (const HDB_Ext_KeySet *, int);


/*
KeyRotationFlags ::= BIT STRING {
  deleted(0),
  parent(1)
}
*/

enum { asn1_tag_length_KeyRotationFlags = 1,
       asn1_tag_class_KeyRotationFlags = 0,
       asn1_tag_tag_KeyRotationFlags = 3 };
uint64_t KeyRotationFlags2int(KeyRotationFlags);
KeyRotationFlags int2KeyRotationFlags(uint64_t);
const struct units * asn1_KeyRotationFlags_units(void);
ASN1EXP int    ASN1CALL decode_KeyRotationFlags(const unsigned char *, size_t, KeyRotationFlags *, size_t *);
ASN1EXP int    ASN1CALL encode_KeyRotationFlags(unsigned char *, size_t, const KeyRotationFlags *, size_t *);
ASN1EXP size_t ASN1CALL length_KeyRotationFlags(const KeyRotationFlags *);
ASN1EXP int    ASN1CALL copy_KeyRotationFlags  (const KeyRotationFlags *, KeyRotationFlags *);
ASN1EXP void   ASN1CALL free_KeyRotationFlags  (KeyRotationFlags *);
ASN1EXP char * ASN1CALL print_KeyRotationFlags (const KeyRotationFlags *, int);


/*
KeyRotation ::= SEQUENCE {
  flags           [0] KeyRotationFlags,
  epoch           [1] KerberosTime,
  period          [2] INTEGER (0..4294967295),
  base-kvno       [3] INTEGER (0..4294967295),
  base-key-kvno   [4] INTEGER (0..4294967295),
  ...,
}
*/

enum { asn1_tag_length_KeyRotation = 1,
       asn1_tag_class_KeyRotation = 0,
       asn1_tag_tag_KeyRotation = 16 };
struct KeyRotation {
  KeyRotationFlags flags;
  KerberosTime epoch;
  unsigned int period;
  unsigned int base_kvno;
  unsigned int base_key_kvno;
};

ASN1EXP int    ASN1CALL decode_KeyRotation(const unsigned char *, size_t, KeyRotation *, size_t *);
ASN1EXP int    ASN1CALL encode_KeyRotation(unsigned char *, size_t, const KeyRotation *, size_t *);
ASN1EXP size_t ASN1CALL length_KeyRotation(const KeyRotation *);
ASN1EXP int    ASN1CALL copy_KeyRotation  (const KeyRotation *, KeyRotation *);
ASN1EXP void   ASN1CALL free_KeyRotation  (KeyRotation *);
ASN1EXP char * ASN1CALL print_KeyRotation (const KeyRotation *, int);


/*
HDB-Ext-KeyRotation ::= SEQUENCE OF KeyRotation
*/

enum { asn1_tag_length_HDB_Ext_KeyRotation = 1,
       asn1_tag_class_HDB_Ext_KeyRotation = 0,
       asn1_tag_tag_HDB_Ext_KeyRotation = 16 };
struct HDB_Ext_KeyRotation {
  unsigned int len;
  KeyRotation *val;
};

ASN1EXP int   ASN1CALL add_HDB_Ext_KeyRotation  (HDB_Ext_KeyRotation *, const KeyRotation *);
ASN1EXP int   ASN1CALL remove_HDB_Ext_KeyRotation  (HDB_Ext_KeyRotation *, unsigned int);
ASN1EXP int    ASN1CALL decode_HDB_Ext_KeyRotation(const unsigned char *, size_t, HDB_Ext_KeyRotation *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_Ext_KeyRotation(unsigned char *, size_t, const HDB_Ext_KeyRotation *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_Ext_KeyRotation(const HDB_Ext_KeyRotation *);
ASN1EXP int    ASN1CALL copy_HDB_Ext_KeyRotation  (const HDB_Ext_KeyRotation *, HDB_Ext_KeyRotation *);
ASN1EXP void   ASN1CALL free_HDB_Ext_KeyRotation  (HDB_Ext_KeyRotation *);
ASN1EXP char * ASN1CALL print_HDB_Ext_KeyRotation (const HDB_Ext_KeyRotation *, int);


/*
HDB-extension ::= SEQUENCE {
  mandatory       [0] BOOLEAN,
  data            [1] CHOICE {
    pkinit-acl               [0] HDB-Ext-PKINIT-acl,
    pkinit-cert-hash         [1] HDB-Ext-PKINIT-hash,
    allowed-to-delegate-to   [2] HDB-Ext-Constrained-delegation-acl,
    lm-owf                   [4] HDB-Ext-Lan-Manager-OWF,
    password                 [5] HDB-Ext-Password,
    aliases                  [6] HDB-Ext-Aliases,
    last-pw-change           [7] KerberosTime,
    pkinit-cert              [8] HDB-Ext-PKINIT-cert,
    hist-keys                [9] HDB-Ext-KeySet,
    hist-kvno-diff-clnt      [10] INTEGER (0..4294967295),
    hist-kvno-diff-svc       [11] INTEGER (0..4294967295),
    policy                   [12]     UTF8String,
    principal-id             [13] INTEGER (-9223372036854775808..9223372036854775807),
    key-rotation             [14] HDB-Ext-KeyRotation,
    krb5-config              [15] OCTET STRING,
    ...,
  },
  ...,
}
*/

enum { asn1_tag_length_HDB_extension = 1,
       asn1_tag_class_HDB_extension = 0,
       asn1_tag_tag_HDB_extension = 16 };
struct HDB_extension {
  int mandatory;
  struct HDB_extension_data {
    enum HDB_extension_data_enum {
      choice_HDB_extension_data_asn1_ellipsis = 0,
      choice_HDB_extension_data_pkinit_acl,
      choice_HDB_extension_data_pkinit_cert_hash,
      choice_HDB_extension_data_allowed_to_delegate_to,
      choice_HDB_extension_data_lm_owf,
      choice_HDB_extension_data_password,
      choice_HDB_extension_data_aliases,
      choice_HDB_extension_data_last_pw_change,
      choice_HDB_extension_data_pkinit_cert,
      choice_HDB_extension_data_hist_keys,
      choice_HDB_extension_data_hist_kvno_diff_clnt,
      choice_HDB_extension_data_hist_kvno_diff_svc,
      choice_HDB_extension_data_policy,
      choice_HDB_extension_data_principal_id,
      choice_HDB_extension_data_key_rotation,
      choice_HDB_extension_data_krb5_config
      /* ... */
    } element;
    union {
      HDB_Ext_PKINIT_acl pkinit_acl;
      HDB_Ext_PKINIT_hash pkinit_cert_hash;
      HDB_Ext_Constrained_delegation_acl allowed_to_delegate_to;
      HDB_Ext_Lan_Manager_OWF lm_owf;
      HDB_Ext_Password password;
      HDB_Ext_Aliases aliases;
      KerberosTime last_pw_change;
      HDB_Ext_PKINIT_cert pkinit_cert;
      HDB_Ext_KeySet hist_keys;
      unsigned int hist_kvno_diff_clnt;
      unsigned int hist_kvno_diff_svc;
      heim_utf8_string policy;
      int64_t principal_id;
      HDB_Ext_KeyRotation key_rotation;
      heim_octet_string krb5_config;
      heim_octet_string asn1_ellipsis;
    } u;
  } data;
};

ASN1EXP int    ASN1CALL decode_HDB_extension(const unsigned char *, size_t, HDB_extension *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_extension(unsigned char *, size_t, const HDB_extension *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_extension(const HDB_extension *);
ASN1EXP int    ASN1CALL copy_HDB_extension  (const HDB_extension *, HDB_extension *);
ASN1EXP void   ASN1CALL free_HDB_extension  (HDB_extension *);
ASN1EXP char * ASN1CALL print_HDB_extension (const HDB_extension *, int);


/*
HDB-extensions ::= SEQUENCE OF HDB-extension
*/

enum { asn1_tag_length_HDB_extensions = 1,
       asn1_tag_class_HDB_extensions = 0,
       asn1_tag_tag_HDB_extensions = 16 };
struct HDB_extensions {
  unsigned int len;
  HDB_extension *val;
};

ASN1EXP int   ASN1CALL add_HDB_extensions  (HDB_extensions *, const HDB_extension *);
ASN1EXP int   ASN1CALL remove_HDB_extensions  (HDB_extensions *, unsigned int);
ASN1EXP int    ASN1CALL decode_HDB_extensions(const unsigned char *, size_t, HDB_extensions *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_extensions(unsigned char *, size_t, const HDB_extensions *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_extensions(const HDB_extensions *);
ASN1EXP int    ASN1CALL copy_HDB_extensions  (const HDB_extensions *, HDB_extensions *);
ASN1EXP void   ASN1CALL free_HDB_extensions  (HDB_extensions *);
ASN1EXP char * ASN1CALL print_HDB_extensions (const HDB_extensions *, int);


/*
HDB-EncTypeList ::= SEQUENCE OF INTEGER (0..4294967295)
*/

enum { asn1_tag_length_HDB_EncTypeList = 1,
       asn1_tag_class_HDB_EncTypeList = 0,
       asn1_tag_tag_HDB_EncTypeList = 16 };
struct HDB_EncTypeList {
  unsigned int len;
  unsigned int *val;
};

ASN1EXP int    ASN1CALL decode_HDB_EncTypeList(const unsigned char *, size_t, HDB_EncTypeList *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_EncTypeList(unsigned char *, size_t, const HDB_EncTypeList *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_EncTypeList(const HDB_EncTypeList *);
ASN1EXP int    ASN1CALL copy_HDB_EncTypeList  (const HDB_EncTypeList *, HDB_EncTypeList *);
ASN1EXP void   ASN1CALL free_HDB_EncTypeList  (HDB_EncTypeList *);
ASN1EXP char * ASN1CALL print_HDB_EncTypeList (const HDB_EncTypeList *, int);


/*
HDB_entry ::= SEQUENCE {
  principal        [0] Principal OPTIONAL,
  kvno             [1] INTEGER (0..4294967295),
  keys             [2] Keys,
  created-by       [3] Event,
  modified-by      [4] Event OPTIONAL,
  valid-start      [5] KerberosTime OPTIONAL,
  valid-end        [6] KerberosTime OPTIONAL,
  pw-end           [7] KerberosTime OPTIONAL,
  max-life         [8] INTEGER (-2147483648..2147483647) OPTIONAL,
  max-renew        [9] INTEGER (-2147483648..2147483647) OPTIONAL,
  flags            [10] HDBFlags,
  etypes           [11] HDB-EncTypeList OPTIONAL,
  generation       [12] GENERATION OPTIONAL,
  extensions       [13] HDB-extensions OPTIONAL,
  session-etypes   [14] HDB-EncTypeList OPTIONAL,
}
*/

enum { asn1_tag_length_HDB_entry = 1,
       asn1_tag_class_HDB_entry = 0,
       asn1_tag_tag_HDB_entry = 16 };
struct HDB_entry {
  Principal *principal;
  unsigned int kvno;
  Keys keys;
  Event created_by;
  Event *modified_by;
  KerberosTime *valid_start;
  KerberosTime *valid_end;
  KerberosTime *pw_end;
  int *max_life;
  int *max_renew;
  HDBFlags flags;
  HDB_EncTypeList *etypes;
  GENERATION *generation;
  HDB_extensions *extensions;
  HDB_EncTypeList *session_etypes;
  void *context;
  int aliased;
};

ASN1EXP int    ASN1CALL decode_HDB_entry(const unsigned char *, size_t, HDB_entry *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_entry(unsigned char *, size_t, const HDB_entry *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_entry(const HDB_entry *);
ASN1EXP int    ASN1CALL copy_HDB_entry  (const HDB_entry *, HDB_entry *);
ASN1EXP void   ASN1CALL free_HDB_entry  (HDB_entry *);
ASN1EXP char * ASN1CALL print_HDB_entry (const HDB_entry *, int);


/*
HDB_entry_alias ::= [APPLICATION 0] SEQUENCE {
  principal       [0] Principal OPTIONAL,
}
*/

enum { asn1_tag_length_HDB_entry_alias = 1,
       asn1_tag_class_HDB_entry_alias = 1,
       asn1_tag_tag_HDB_entry_alias = 0 };
struct HDB_entry_alias {
  Principal *principal;
};

ASN1EXP int    ASN1CALL decode_HDB_entry_alias(const unsigned char *, size_t, HDB_entry_alias *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_entry_alias(unsigned char *, size_t, const HDB_entry_alias *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_entry_alias(const HDB_entry_alias *);
ASN1EXP int    ASN1CALL copy_HDB_entry_alias  (const HDB_entry_alias *, HDB_entry_alias *);
ASN1EXP void   ASN1CALL free_HDB_entry_alias  (HDB_entry_alias *);
ASN1EXP char * ASN1CALL print_HDB_entry_alias (const HDB_entry_alias *, int);


/*
HDB-EntryOrAlias ::= CHOICE {
  entry           HDB_entry,
  alias           HDB_entry_alias,
}
*/

enum { asn1_tag_length_HDB_EntryOrAlias = 1,
       asn1_tag_class_HDB_EntryOrAlias = 0,
       asn1_tag_tag_HDB_EntryOrAlias = 0 };
struct HDB_EntryOrAlias {
  enum HDB_EntryOrAlias_enum {
    choice_HDB_EntryOrAlias_entry = 1,
    choice_HDB_EntryOrAlias_alias
  } element;
  union {
    HDB_entry entry;
    HDB_entry_alias alias;
  } u;
};

ASN1EXP int    ASN1CALL decode_HDB_EntryOrAlias(const unsigned char *, size_t, HDB_EntryOrAlias *, size_t *);
ASN1EXP int    ASN1CALL encode_HDB_EntryOrAlias(unsigned char *, size_t, const HDB_EntryOrAlias *, size_t *);
ASN1EXP size_t ASN1CALL length_HDB_EntryOrAlias(const HDB_EntryOrAlias *);
ASN1EXP int    ASN1CALL copy_HDB_EntryOrAlias  (const HDB_EntryOrAlias *, HDB_EntryOrAlias *);
ASN1EXP void   ASN1CALL free_HDB_EntryOrAlias  (HDB_EntryOrAlias *);
ASN1EXP char * ASN1CALL print_HDB_EntryOrAlias (const HDB_EntryOrAlias *, int);


#endif /* __hdb_asn1_h__ */
