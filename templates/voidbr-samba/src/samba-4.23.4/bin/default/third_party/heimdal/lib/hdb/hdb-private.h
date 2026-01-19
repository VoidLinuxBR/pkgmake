/* This is a generated file */
#ifndef __hdb_private_h__
#define __hdb_private_h__

#include <stdarg.h>

krb5_error_code
_hdb_fetch_kvno (
	krb5_context /*context*/,
	HDB */*db*/,
	krb5_const_principal /*principal*/,
	unsigned /*flags*/,
	krb5_kvno /*kvno*/,
	hdb_entry */*entry*/);

hdb_master_key
_hdb_find_master_key (
	unsigned int */*mkvno*/,
	hdb_master_key /*mkey*/);

krb5_error_code
_hdb_keytab2hdb_entry (
	krb5_context /*context*/,
	const krb5_keytab_entry */*ktentry*/,
	hdb_entry */*entry*/);

int
_hdb_mkey_decrypt (
	krb5_context /*context*/,
	hdb_master_key /*key*/,
	krb5_key_usage /*usage*/,
	void */*ptr*/,
	size_t /*size*/,
	krb5_data */*res*/);

int
_hdb_mkey_encrypt (
	krb5_context /*context*/,
	hdb_master_key /*key*/,
	krb5_key_usage /*usage*/,
	const void */*ptr*/,
	size_t /*size*/,
	krb5_data */*res*/);

int
_hdb_mkey_version (hdb_master_key /*mkey*/);

krb5_error_code
_hdb_remove (
	krb5_context /*context*/,
	HDB */*db*/,
	unsigned /*flags*/,
	krb5_const_principal /*principal*/);

krb5_error_code
_hdb_remove_base_keys (
	krb5_context /*context*/,
	hdb_entry */*e*/,
	HDB_Ext_KeySet */*base_keys*/,
	const HDB_Ext_KeyRotation */*ckr*/);

krb5_error_code
_hdb_set_master_key_usage (
	krb5_context /*context*/,
	HDB */*db*/,
	unsigned int /*key_usage*/);

krb5_error_code
_hdb_store (
	krb5_context /*context*/,
	HDB */*db*/,
	unsigned /*flags*/,
	hdb_entry */*entry*/);

#endif /* __hdb_private_h__ */
