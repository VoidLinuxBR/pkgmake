/* This is a generated file */
#ifndef __hdb_protos_h__
#define __hdb_protos_h__
#ifndef DOXY

#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

size_t ASN1CALL
copy_hdb_entry (
	const HDB_entry */*from*/,
	HDB_entry */*to*/);

size_t ASN1CALL
copy_hdb_entry_alias (
	const HDB_entry_alias */*from*/,
	HDB_entry_alias */*to*/);

size_t ASN1CALL
copy_hdb_keyset (
	const HDB_keyset */*from*/,
	HDB_keyset */*to*/);

int ASN1CALL
decode_hdb_entry (
	const unsigned char */*p*/,
	size_t /*len*/,
	HDB_entry */*data*/,
	size_t */*size*/);

int ASN1CALL
decode_hdb_entry_alias (
	const unsigned char */*p*/,
	size_t /*len*/,
	HDB_entry_alias */*data*/,
	size_t */*size*/);

int ASN1CALL
decode_hdb_keyset (
	const unsigned char */*p*/,
	size_t /*len*/,
	HDB_keyset */*data*/,
	size_t */*size*/);

int ASN1CALL
encode_hdb_entry (
	unsigned char */*p*/,
	size_t /*len*/,
	const HDB_entry */*data*/,
	size_t */*size*/);

int ASN1CALL
encode_hdb_entry_alias (
	unsigned char */*p*/,
	size_t /*len*/,
	const HDB_entry_alias */*data*/,
	size_t */*size*/);

int ASN1CALL
encode_hdb_keyset (
	unsigned char */*p*/,
	size_t /*len*/,
	const HDB_keyset */*data*/,
	size_t */*size*/);

void ASN1CALL
free_hdb_entry (HDB_entry */*data*/);

void ASN1CALL
free_hdb_entry_alias (HDB_entry_alias */*data*/);

void ASN1CALL
free_hdb_keyset (HDB_keyset */*data*/);

/**
 * This function adds an HDB entry's current keyset to the entry's key
 * history.  The current keyset is left alone; the caller is responsible
 * for freeing it.
 *
 * @param context   Context
 * @param entry	    HDB entry
 *
 * @return Zero on success, or an error code otherwise.
 */

krb5_error_code
hdb_add_current_keys_to_history (
	krb5_context /*context*/,
	hdb_entry */*entry*/);

/**
 * This function adds a key to an HDB entry's key history.
 *
 * @param context   Context
 * @param entry	    HDB entry
 * @param kvno	    Key version number of the key to add to the history
 * @param key	    The Key to add
 *
 * @return Zero on success, or an error code otherwise.
 */

krb5_error_code
hdb_add_history_key (
	krb5_context /*context*/,
	hdb_entry */*entry*/,
	krb5_kvno /*kvno*/,
	Key */*key*/);

/**
 * This function adds a keyset to an HDB entry's key history.
 *
 * @param context   Context
 * @param entry	    HDB entry
 * @param kvno	    Key version number of the key to add to the history
 * @param key	    The Key to add
 */

krb5_error_code
hdb_add_history_keyset (
	krb5_context /*context*/,
	hdb_entry */*entry*/,
	const hdb_keyset */*ks*/);

krb5_error_code
hdb_add_master_key (
	krb5_context /*context*/,
	krb5_keyblock */*key*/,
	hdb_master_key */*inout*/);

/**
 * This function changes an hdb_entry's kvno, swapping the current key
 * set with a historical keyset.  If no historical keys are found then
 * an error is returned (the caller can still set entry->kvno directly).
 *
 * @param context	krb5_context
 * @param new_kvno	New kvno for the entry
 * @param entry		hdb_entry to modify
 */

krb5_error_code
hdb_change_kvno (
	krb5_context /*context*/,
	krb5_kvno /*new_kvno*/,
	hdb_entry */*entry*/);

krb5_error_code
hdb_check_db_format (
	krb5_context /*context*/,
	HDB */*db*/);

krb5_error_code
hdb_clear_extension (
	krb5_context /*context*/,
	hdb_entry */*entry*/,
	int /*type*/);

krb5_error_code
hdb_clear_master_key (
	krb5_context /*context*/,
	HDB */*db*/);

/**
 * Create a handle for a Kerberos database
 *
 * Create a handle for a Kerberos database backend specified by a
 * filename.  Doesn't actually create or even open an HDB file(s);
 * you have to call the hdb_open() open method of the resulting HDB
 * to open the database, and you have to use O_CREAT to create it.
 *
 * If `filename' does not have a backend type prefix, all file-based
 * backends will be tried until one succeeds or all fail, and if the
 * HDB exists for some backend, that will be used.  A build-time
 * default backend type will be used if the `filename' does not exist.
 *
 * Note that the actual filename may have a suffix added, such as
 * ".db".  Also, for backends such as "ldap:" and "ldapi:" the
 * `filename' is more like a URI.
 *
 * @param [in] context Context
 * @param [out] db HDB handle output
 * @param [in] filename The name of the HDB
 *
 * @return Zero on success else a krb5 error code.
 */

krb5_error_code
hdb_create (
	krb5_context /*context*/,
	HDB **/*db*/,
	const char */*filename*/);

krb5_error_code
hdb_db1_create (
	krb5_context /*context*/,
	HDB **/*db*/,
	const char */*filename*/);

/**
 * Return the directory where the hdb database resides.
 *
 * @param context Kerberos 5 context.
 *
 * @return string pointing to directory.
 */

const char *
hdb_db_dir (krb5_context /*context*/);

const char *
hdb_dbinfo_get_acl_file (
	krb5_context /*context*/,
	struct hdb_dbinfo */*dbp*/);

const krb5_config_binding *
hdb_dbinfo_get_binding (
	krb5_context /*context*/,
	struct hdb_dbinfo */*dbp*/);

const char *
hdb_dbinfo_get_dbname (
	krb5_context /*context*/,
	struct hdb_dbinfo */*dbp*/);

const char *
hdb_dbinfo_get_label (
	krb5_context /*context*/,
	struct hdb_dbinfo */*dbp*/);

const char *
hdb_dbinfo_get_log_file (
	krb5_context /*context*/,
	struct hdb_dbinfo */*dbp*/);

const char *
hdb_dbinfo_get_mkey_file (
	krb5_context /*context*/,
	struct hdb_dbinfo */*dbp*/);

struct hdb_dbinfo *
hdb_dbinfo_get_next (
	struct hdb_dbinfo */*dbp*/,
	struct hdb_dbinfo */*dbprevp*/);

const char *
hdb_dbinfo_get_realm (
	krb5_context /*context*/,
	struct hdb_dbinfo */*dbp*/);

/**
 * Return the default hdb database resides.
 *
 * @param context Kerberos 5 context.
 *
 * @return string pointing to directory.
 */

const char *
hdb_default_db (krb5_context /*context*/);

krb5_error_code
hdb_derive_etypes (
	krb5_context /*context*/,
	hdb_entry */*e*/,
	HDB_Ext_KeySet */*base_keys*/);

krb5_error_code
hdb_enctype2key (
	krb5_context /*context*/,
	const hdb_entry */*e*/,
	const Keys */*keyset*/,
	krb5_enctype /*enctype*/,
	Key **/*key*/);

int
hdb_entry2value (
	krb5_context /*context*/,
	const hdb_entry */*ent*/,
	krb5_data */*value*/);

/**
 * This function adds a KeyRotation value to an entry, validating the
 * change.  One of `entry' and `krs' must be NULL, and the other non-NULL, and
 * whichever is given will be altered.
 *
 * @param context Context
 * @param entry An HDB entry
 * @param krs A key rotation extension for hdb_entry
 * @param kr A new KeyRotation value
 *
 * @return Zero on success, an error otherwise.
 */

krb5_error_code
hdb_entry_add_key_rotation (
	krb5_context /*context*/,
	hdb_entry */*entry*/,
	HDB_Ext_KeyRotation */*krs*/,
	const KeyRotation */*kr*/);

int
hdb_entry_alias2value (
	krb5_context /*context*/,
	const hdb_entry_alias */*alias*/,
	krb5_data */*value*/);

krb5_error_code
hdb_entry_check_mandatory (
	krb5_context /*context*/,
	const hdb_entry */*ent*/);

krb5_error_code
hdb_entry_clear_kvno_diff_clnt (
	krb5_context /*context*/,
	hdb_entry */*entry*/);

krb5_error_code
hdb_entry_clear_kvno_diff_svc (
	krb5_context /*context*/,
	hdb_entry */*entry*/);

int
hdb_entry_clear_password (
	krb5_context /*context*/,
	hdb_entry */*entry*/);

krb5_error_code
hdb_entry_get_ConstrainedDelegACL (
	const hdb_entry */*entry*/,
	const HDB_Ext_Constrained_delegation_acl **/*a*/);

krb5_error_code
hdb_entry_get_aliases (
	const hdb_entry */*entry*/,
	const HDB_Ext_Aliases **/*a*/);

krb5_error_code
hdb_entry_get_key_rotation (
	krb5_context /*context*/,
	const hdb_entry */*entry*/,
	const HDB_Ext_KeyRotation **/*kr*/);

krb5_error_code
hdb_entry_get_krb5_config (
	const hdb_entry */*entry*/,
	heim_octet_string */*c*/);

unsigned int
hdb_entry_get_kvno_diff_clnt (const hdb_entry */*entry*/);

unsigned int
hdb_entry_get_kvno_diff_svc (const hdb_entry */*entry*/);

int
hdb_entry_get_password (
	krb5_context /*context*/,
	HDB */*db*/,
	const hdb_entry */*entry*/,
	char **/*p*/);

krb5_error_code
hdb_entry_get_pkinit_acl (
	const hdb_entry */*entry*/,
	const HDB_Ext_PKINIT_acl **/*a*/);

krb5_error_code
hdb_entry_get_pkinit_cert (
	const hdb_entry */*entry*/,
	const HDB_Ext_PKINIT_cert **/*a*/);

krb5_error_code
hdb_entry_get_pkinit_hash (
	const hdb_entry */*entry*/,
	const HDB_Ext_PKINIT_hash **/*a*/);

krb5_error_code
hdb_entry_get_pw_change_time (
	const hdb_entry */*entry*/,
	time_t */*t*/);

krb5_error_code
hdb_entry_set_krb5_config (
	krb5_context /*context*/,
	hdb_entry */*entry*/,
	heim_octet_string */*s*/);

krb5_error_code
hdb_entry_set_kvno_diff_clnt (
	krb5_context /*context*/,
	hdb_entry */*entry*/,
	unsigned int /*diff*/);

krb5_error_code
hdb_entry_set_kvno_diff_svc (
	krb5_context /*context*/,
	hdb_entry */*entry*/,
	unsigned int /*diff*/);

int
hdb_entry_set_password (
	krb5_context /*context*/,
	HDB */*db*/,
	hdb_entry */*entry*/,
	const char */*p*/);

krb5_error_code
hdb_entry_set_pw_change_time (
	krb5_context /*context*/,
	hdb_entry */*entry*/,
	time_t /*t*/);

/**
 * Fetch a principal's HDB entry, possibly generating virtual keys from base
 * keys according to strict key rotation schedules.  If a time is given, other
 * than HDB I/O, this function is pure, thus usable for testing.
 *
 * HDB writers should use `db->hdb_fetch_kvno()' to avoid materializing virtual
 * principals.
 *
 * HDB readers should use this function rather than `db->hdb_fetch_kvno()'
 * unless they only want to see concrete principals and not bother generating
 * any virtual keys.
 *
 * @param context Context
 * @param db HDB
 * @param principal Principal name
 * @param flags Fetch flags
 * @param t For virtual keys, use this as the point in time (use zero to mean "now")
 * @param etype Key enctype (use KRB5_ENCTYPE_NULL to mean "preferred")
 * @param kvno Key version number (use zero to mean "current")
 * @param h Output HDB entry
 *
 * @return Zero or HDB_ERR_WRONG_REALM on success, an error code otherwise.
 */

krb5_error_code
hdb_fetch_kvno (
	krb5_context /*context*/,
	HDB */*db*/,
	krb5_const_principal /*principal*/,
	unsigned int /*flags*/,
	krb5_timestamp /*t*/,
	krb5int32 /*etype*/,
	krb5uint32 /*kvno*/,
	hdb_entry */*h*/);

HDB_extension *
hdb_find_extension (
	const hdb_entry */*entry*/,
	int /*type*/);

krb5_error_code
hdb_foreach (
	krb5_context /*context*/,
	HDB */*db*/,
	unsigned /*flags*/,
	hdb_foreach_func_t /*func*/,
	void */*data*/);

void
hdb_free_dbinfo (
	krb5_context /*context*/,
	struct hdb_dbinfo **/*dbp*/);

void
hdb_free_entry (
	krb5_context /*context*/,
	HDB */*db*/,
	hdb_entry */*ent*/);

void
hdb_free_key (Key */*key*/);

void
hdb_free_keys (
	krb5_context /*context*/,
	int /*len*/,
	Key */*keys*/);

void
hdb_free_master_key (
	krb5_context /*context*/,
	hdb_master_key /*mkey*/);

krb5_error_code
hdb_generate_key_set (
	krb5_context /*context*/,
	krb5_principal /*principal*/,
	krb5_key_salt_tuple */*ks_tuple*/,
	int /*n_ks_tuple*/,
	Key **/*ret_key_set*/,
	size_t */*nkeyset*/,
	int /*no_salt*/);

krb5_error_code
hdb_generate_key_set_password (
	krb5_context /*context*/,
	krb5_principal /*principal*/,
	const char */*password*/,
	Key **/*keys*/,
	size_t */*num_keys*/);

krb5_error_code
hdb_generate_key_set_password_with_ks_tuple (
	krb5_context /*context*/,
	krb5_principal /*principal*/,
	const char */*password*/,
	krb5_key_salt_tuple */*ks_tuple*/,
	int /*n_ks_tuple*/,
	Key **/*keys*/,
	size_t */*num_keys*/);

int
hdb_get_dbinfo (
	krb5_context /*context*/,
	struct hdb_dbinfo **/*dbp*/);

uintptr_t KRB5_CALLCONV
hdb_get_instance (const char */*libname*/);

krb5_error_code
hdb_init_db (
	krb5_context /*context*/,
	HDB */*db*/);

/**
 * Removes from `e' and outputs all the base keys for virtual principal and/or
 * key derivation.
 *
 * @param context Context
 * @param e The HDB entry
 * @param is_current_keyset Whether to make the keys the current keys for `e'
 * @param ks A pointer to an hdb_keyset containing the keys to set
 *
 * @return Zero on success, an error code otherwise.
 */

krb5_error_code
hdb_install_keyset (
	krb5_context /*context*/,
	hdb_entry */*e*/,
	int /*is_current_keyset*/,
	const hdb_keyset */*ks*/);

int
hdb_key2principal (
	krb5_context /*context*/,
	krb5_data */*key*/,
	krb5_principal /*p*/);

krb5_error_code
hdb_keytab_create (
	krb5_context /*context*/,
	HDB ** /*db*/,
	const char */*arg*/);

/**
 * Returns the Keys of `e' for `kvno', or NULL if not found.  The Keys will
 * remain valid provided that the entry is not mutated.
 *
 * @param context Context
 * @param e The HDB entry
 * @param kvno The kvno
 *
 * @return A pointer to the Keys for the requested kvno.
 */

const Keys *
hdb_kvno2keys (
	krb5_context /*context*/,
	const hdb_entry */*e*/,
	krb5_kvno /*kvno*/);

krb5_error_code
hdb_list_builtin (
	krb5_context /*context*/,
	char **/*list*/);

krb5_error_code
hdb_lock (
	int /*fd*/,
	int /*operation*/);

krb5_error_code
hdb_ndbm_create (
	krb5_context /*context*/,
	HDB **/*db*/,
	const char */*filename*/);

krb5_error_code
hdb_next_enctype2key (
	krb5_context /*context*/,
	const hdb_entry */*e*/,
	const Keys */*keyset*/,
	krb5_enctype /*enctype*/,
	Key **/*key*/);

int
hdb_principal2key (
	krb5_context /*context*/,
	krb5_const_principal /*p*/,
	krb5_data */*key*/);

krb5_error_code
hdb_process_master_key (
	krb5_context /*context*/,
	int /*kvno*/,
	krb5_keyblock */*key*/,
	krb5_enctype /*etype*/,
	hdb_master_key */*mkey*/);

/**
 * This function prunes an HDB entry's keys that are too old to have been used
 * to mint still valid tickets (based on the entry's maximum ticket lifetime).
 * 
 * @param context   Context
 * @param entry	    HDB entry
 */

krb5_error_code
hdb_prune_keys (
	krb5_context /*context*/,
	hdb_entry */*entry*/);

/**
 * This function prunes an HDB entry's historic keys by kvno.
 *
 * @param context   Context
 * @param entry	    HDB entry
 * @param kvno      Keyset kvno to prune, or zero to prune all too-old keys
 */

krb5_error_code
hdb_prune_keys_kvno (
	krb5_context /*context*/,
	hdb_entry */*entry*/,
	int /*kvno*/);

krb5_error_code
hdb_read_master_key (
	krb5_context /*context*/,
	const char */*filename*/,
	hdb_master_key */*mkey*/);

/**
 * Removes from `e' and optionally outputs the keyset for the requested `kvno'.
 *
 * @param context Context
 * @param e The HDB entry
 * @param kvno The key version number
 * @param ks A pointer to a variable of type hdb_keyset (may be NULL)
 *
 * @return Zero on success, an error code otherwise.
 */

krb5_error_code
hdb_remove_keys (
	krb5_context /*context*/,
	hdb_entry */*e*/,
	krb5_kvno /*kvno*/,
	hdb_keyset */*ks*/);

krb5_error_code
hdb_replace_extension (
	krb5_context /*context*/,
	hdb_entry */*entry*/,
	const HDB_extension */*ext*/);

krb5_error_code
hdb_seal_key (
	krb5_context /*context*/,
	HDB */*db*/,
	Key */*k*/);

krb5_error_code
hdb_seal_key_mkey (
	krb5_context /*context*/,
	Key */*k*/,
	hdb_master_key /*mkey*/);

krb5_error_code
hdb_seal_keys (
	krb5_context /*context*/,
	HDB */*db*/,
	hdb_entry */*ent*/);

krb5_error_code
hdb_seal_keys_mkey (
	krb5_context /*context*/,
	hdb_entry */*ent*/,
	hdb_master_key /*mkey*/);

krb5_error_code
hdb_set_last_modified_by (
	krb5_context /*context*/,
	hdb_entry */*entry*/,
	krb5_principal /*modby*/,
	time_t /*modtime*/);

krb5_error_code
hdb_set_master_key (
	krb5_context /*context*/,
	HDB */*db*/,
	krb5_keyblock */*key*/);

krb5_error_code
hdb_set_master_keyfile (
	krb5_context /*context*/,
	HDB */*db*/,
	const char */*keyfile*/);

krb5_error_code
hdb_sqlite_create (
	krb5_context /*context*/,
	HDB **/*db*/,
	const char */*argument*/);

krb5_error_code
hdb_unlock (int /*fd*/);

krb5_error_code
hdb_unseal_key (
	krb5_context /*context*/,
	HDB */*db*/,
	Key */*k*/);

krb5_error_code
hdb_unseal_key_mkey (
	krb5_context /*context*/,
	Key */*k*/,
	hdb_master_key /*mkey*/);

krb5_error_code
hdb_unseal_keys (
	krb5_context /*context*/,
	HDB */*db*/,
	hdb_entry */*ent*/);

krb5_error_code
hdb_unseal_keys_kvno (
	krb5_context /*context*/,
	HDB */*db*/,
	krb5_kvno /*kvno*/,
	unsigned /*flags*/,
	hdb_entry */*ent*/);

krb5_error_code
hdb_unseal_keys_mkey (
	krb5_context /*context*/,
	hdb_entry */*ent*/,
	hdb_master_key /*mkey*/);

krb5_error_code
hdb_validate_key_rotation (
	krb5_context /*context*/,
	const KeyRotation */*past_kr*/,
	const KeyRotation */*new_kr*/);

krb5_error_code
hdb_validate_key_rotations (
	krb5_context /*context*/,
	const HDB_Ext_KeyRotation */*existing*/,
	const HDB_Ext_KeyRotation */*krs*/);

int
hdb_value2entry (
	krb5_context /*context*/,
	krb5_data */*value*/,
	hdb_entry */*ent*/);

int
hdb_value2entry_alias (
	krb5_context /*context*/,
	krb5_data */*value*/,
	hdb_entry_alias */*ent*/);

krb5_error_code
hdb_write_master_key (
	krb5_context /*context*/,
	const char */*filename*/,
	hdb_master_key /*mkey*/);

void
initialize_hdb_error_table (void);

void
initialize_hdb_error_table_r (struct et_list **/*list*/);

size_t ASN1CALL
length_hdb_entry (HDB_entry */*data*/);

size_t ASN1CALL
length_hdb_entry_alias (HDB_entry_alias */*data*/);

size_t ASN1CALL
length_hdb_keyset (HDB_keyset */*data*/);

#ifdef __cplusplus
}
#endif

#endif /* DOXY */
#endif /* __hdb_protos_h__ */
