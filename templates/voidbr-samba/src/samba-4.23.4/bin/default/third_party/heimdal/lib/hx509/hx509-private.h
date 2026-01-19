/* This is a generated file */
#ifndef __hx509_private_h__
#define __hx509_private_h__

#include <stdarg.h>

#if !defined(__GNUC__) && !defined(__attribute__)
#define __attribute__(x)
#endif

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_AlgorithmIdentifier_cmp (
	const AlgorithmIdentifier */*p*/,
	const AlgorithmIdentifier */*q*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_Certificate_cmp (
	const Certificate */*p*/,
	const Certificate */*q*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_Name_to_string (
	const Name */*n*/,
	char **/*str*/);

HX509_LIB_FUNCTION time_t HX509_LIB_CALL
_hx509_Time2time_t (const Time */*t*/);

HX509_LIB_NORETURN_FUNCTION void HX509_LIB_CALL
_hx509_abort (
	const char */*fmt*/,
	...)
     __attribute__ ((__noreturn__, __format__ (__printf__, 1, 2)));

heim_error_code
_hx509_ca_issue_certificate (
	hx509_context /*context*/,
	const heim_config_binding */*cf*/,
	heim_log_facility */*logf*/,
	hx509_request /*req*/,
	KRB5PrincipalName */*cprinc*/,
	time_t /*starttime*/,
	time_t /*endtime*/,
	time_t /*req_life*/,
	int /*send_chain*/,
	hx509_certs */*out*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_calculate_path (
	hx509_context /*context*/,
	int /*flags*/,
	time_t /*time_now*/,
	hx509_certs /*anchors*/,
	unsigned int /*max_depth*/,
	hx509_cert /*cert*/,
	hx509_certs /*pool*/,
	hx509_path */*path*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_cert_assign_key (
	hx509_cert /*cert*/,
	hx509_private_key /*private_key*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_cert_get_eku (
	hx509_context /*context*/,
	hx509_cert /*cert*/,
	ExtKeyUsage */*e*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_cert_get_keyusage (
	hx509_context /*context*/,
	hx509_cert /*c*/,
	KeyUsage */*ku*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_cert_get_version (const Certificate */*t*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_cert_is_parent_cmp (
	const Certificate */*subject*/,
	const Certificate */*issuer*/,
	int /*allow_self_signed*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_cert_private_decrypt (
	hx509_context /*context*/,
	const heim_octet_string */*ciphertext*/,
	const heim_oid */*encryption_oid*/,
	hx509_cert /*p*/,
	heim_octet_string */*cleartext*/);

HX509_LIB_FUNCTION hx509_private_key HX509_LIB_CALL
_hx509_cert_private_key (hx509_cert /*p*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_cert_private_key_exportable (hx509_cert /*p*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_cert_set_release (
	hx509_cert /*cert*/,
	_hx509_cert_release_func /*release*/,
	void */*ctx*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_cert_to_env (
	hx509_context /*context*/,
	hx509_cert /*cert*/,
	hx509_env */*env*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_certs_keys_add (
	hx509_context /*context*/,
	hx509_certs /*certs*/,
	hx509_private_key /*key*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_certs_keys_free (
	hx509_context /*context*/,
	hx509_private_key */*keys*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_certs_keys_get (
	hx509_context /*context*/,
	hx509_certs /*certs*/,
	hx509_private_key **/*keys*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_check_key_usage (
	hx509_context /*context*/,
	hx509_cert /*cert*/,
	unsigned /*flags*/,
	int /*req_present*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_collector_alloc (
	hx509_context /*context*/,
	hx509_lock /*lock*/,
	struct hx509_collector **/*collector*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_collector_certs_add (
	hx509_context /*context*/,
	struct hx509_collector */*c*/,
	hx509_cert /*cert*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_collector_collect_certs (
	hx509_context /*context*/,
	struct hx509_collector */*c*/,
	hx509_certs */*ret_certs*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_collector_collect_private_keys (
	hx509_context /*context*/,
	struct hx509_collector */*c*/,
	hx509_private_key **/*keys*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_collector_free (struct hx509_collector */*c*/);

HX509_LIB_FUNCTION hx509_lock HX509_LIB_CALL
_hx509_collector_get_lock (struct hx509_collector */*c*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_collector_private_key_add (
	hx509_context /*context*/,
	struct hx509_collector */*c*/,
	const AlgorithmIdentifier */*alg*/,
	hx509_private_key /*private_key*/,
	const heim_octet_string */*key_data*/,
	const heim_octet_string */*localKeyId*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_create_signature (
	hx509_context /*context*/,
	const hx509_private_key /*signer*/,
	const AlgorithmIdentifier */*alg*/,
	const heim_octet_string */*data*/,
	AlgorithmIdentifier */*signatureAlgorithm*/,
	heim_octet_string */*sig*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_create_signature_bitstring (
	hx509_context /*context*/,
	const hx509_private_key /*signer*/,
	const AlgorithmIdentifier */*alg*/,
	const heim_octet_string */*data*/,
	AlgorithmIdentifier */*signatureAlgorithm*/,
	heim_bit_string */*sig*/);

int
_hx509_erase_file (
	hx509_context /*context*/,
	const char */*fn*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_expr_eval (
	hx509_context /*context*/,
	hx509_env /*env*/,
	struct hx_expr */*expr*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_expr_free (struct hx_expr */*expr*/);

HX509_LIB_FUNCTION struct hx_expr * HX509_LIB_CALL
_hx509_expr_parse (const char */*buf*/);

const char *
_hx509_expr_parse_error (void);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_find_extension_subject_key_id (
	const Certificate */*issuer*/,
	SubjectKeyIdentifier */*si*/);

const struct signature_alg *
_hx509_find_sig_alg (const heim_oid */*oid*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_generate_private_key (
	hx509_context /*context*/,
	struct hx509_generate_private_context */*ctx*/,
	hx509_private_key */*private_key*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_generate_private_key_bits (
	hx509_context /*context*/,
	struct hx509_generate_private_context */*ctx*/,
	unsigned long /*bits*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_generate_private_key_free (struct hx509_generate_private_context **/*ctx*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_generate_private_key_init (
	hx509_context /*context*/,
	const heim_oid */*oid*/,
	struct hx509_generate_private_context **/*ctx*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_generate_private_key_is_ca (
	hx509_context /*context*/,
	struct hx509_generate_private_context */*ctx*/);

HX509_LIB_FUNCTION Certificate * HX509_LIB_CALL
_hx509_get_cert (hx509_cert /*cert*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_ks_dir_register (hx509_context /*context*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_ks_file_register (hx509_context /*context*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_ks_keychain_register (hx509_context /*context*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_ks_mem_register (hx509_context /*context*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_ks_null_register (hx509_context /*context*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_ks_pkcs11_register (hx509_context /*context*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_ks_pkcs12_register (hx509_context /*context*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_ks_register (
	hx509_context /*context*/,
	struct hx509_keyset_ops */*ops*/);

struct hx509_keyset_ops *
_hx509_ks_type (
	hx509_context /*context*/,
	const char */*type*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_lock_find_cert (
	hx509_lock /*lock*/,
	const hx509_query */*q*/,
	hx509_cert */*c*/);

HX509_LIB_FUNCTION const struct _hx509_password * HX509_LIB_CALL
_hx509_lock_get_passwords (hx509_lock /*lock*/);

HX509_LIB_FUNCTION hx509_certs HX509_LIB_CALL
_hx509_lock_unlock_certs (hx509_lock /*lock*/);

HX509_LIB_FUNCTION struct hx_expr * HX509_LIB_CALL
_hx509_make_expr (
	enum hx_expr_op /*op*/,
	void */*arg1*/,
	void */*arg2*/);

int
_hx509_make_pkinit_san (
	hx509_context /*context*/,
	const char */*principal*/,
	heim_octet_string */*os*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_map_file_os (
	const char */*fn*/,
	heim_octet_string */*os*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_match_keys (
	hx509_cert /*c*/,
	hx509_private_key /*key*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_name_cmp (
	const Name */*n1*/,
	const Name */*n2*/,
	int */*c*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_name_ds_cmp (
	const DirectoryString */*ds1*/,
	const DirectoryString */*ds2*/,
	int */*diff*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_name_from_Name (
	const Name */*n*/,
	hx509_name */*name*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_name_modify (
	hx509_context /*context*/,
	Name */*name*/,
	int /*append*/,
	const heim_oid */*oid*/,
	const char */*str*/);

int
_hx509_ossl_oid2nid (heim_oid */*oid*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_path_append (
	hx509_context /*context*/,
	hx509_path */*path*/,
	hx509_cert /*cert*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_path_free (hx509_path */*path*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_pbe_decrypt (
	hx509_context /*context*/,
	hx509_lock /*lock*/,
	const AlgorithmIdentifier */*ai*/,
	const heim_octet_string */*econtent*/,
	heim_octet_string */*content*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_pbe_encrypt (
	hx509_context /*context*/,
	hx509_lock /*lock*/,
	const AlgorithmIdentifier */*ai*/,
	const heim_octet_string */*content*/,
	heim_octet_string */*econtent*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_pi_printf (
	int (*/*func*/)(void *, const char *),
	void */*ctx*/,
	const char */*fmt*/,
	...);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_private_eckey_free (void */*eckey*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_private_key_export (
	hx509_context /*context*/,
	const hx509_private_key /*key*/,
	hx509_key_format_t /*format*/,
	heim_octet_string */*data*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_private_key_exportable (hx509_private_key /*key*/);

HX509_LIB_FUNCTION BIGNUM * HX509_LIB_CALL
_hx509_private_key_get_internal (
	hx509_context /*context*/,
	hx509_private_key /*key*/,
	const char */*type*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_private_key_oid (
	hx509_context /*context*/,
	const hx509_private_key /*key*/,
	heim_oid */*data*/);

HX509_LIB_FUNCTION hx509_private_key HX509_LIB_CALL
_hx509_private_key_ref (hx509_private_key /*key*/);

HX509_LIB_FUNCTION const char * HX509_LIB_CALL
_hx509_private_pem_name (hx509_private_key /*key*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_public_encrypt (
	hx509_context /*context*/,
	const heim_octet_string */*cleartext*/,
	const Certificate */*cert*/,
	heim_oid */*encryption_oid*/,
	heim_octet_string */*ciphertext*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_query_clear (hx509_query */*q*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_query_match_cert (
	hx509_context /*context*/,
	const hx509_query */*q*/,
	hx509_cert /*cert*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_query_statistic (
	hx509_context /*context*/,
	int /*type*/,
	const hx509_query */*q*/);

HX509_LIB_FUNCTION hx509_revoke_ctx HX509_LIB_CALL
_hx509_revoke_ref (hx509_revoke_ctx /*ctx*/);

void
_hx509_sel_yyerror (const char */*s*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_self_signed_valid (
	hx509_context /*context*/,
	const AlgorithmIdentifier */*alg*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_set_cert_attribute (
	hx509_context /*context*/,
	hx509_cert /*cert*/,
	const heim_oid */*oid*/,
	const heim_octet_string */*attr*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_set_digest_alg (
	DigestAlgorithmIdentifier */*id*/,
	const heim_oid */*oid*/,
	const void */*param*/,
	size_t /*length*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_signature_is_weak (
	hx509_context /*context*/,
	const AlgorithmIdentifier */*alg*/);

HX509_LIB_FUNCTION void HX509_LIB_CALL
_hx509_unmap_file_os (heim_octet_string */*os*/);

int
_hx509_unparse_HardwareModuleName (
	hx509_context /*context*/,
	struct rk_strpool **/*strpool*/,
	heim_any */*value*/);

int
_hx509_unparse_KRB5PrincipalName (
	hx509_context /*context*/,
	struct rk_strpool **/*strpool*/,
	heim_any */*value*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_unparse_Name (
	const Name */*aname*/,
	char **/*str*/);

int
_hx509_unparse_PermanentIdentifier (
	hx509_context /*context*/,
	struct rk_strpool **/*strpool*/,
	heim_any */*value*/);

int
_hx509_unparse_ia5_string_name (
	hx509_context /*context*/,
	struct rk_strpool **/*strpool*/,
	heim_any */*value*/);

struct rk_strpool *
_hx509_unparse_kerberos_name (
	struct rk_strpool */*strpool*/,
	KRB5PrincipalName */*kn*/);

int
_hx509_unparse_utf8_string_name (
	hx509_context /*context*/,
	struct rk_strpool **/*strpool*/,
	heim_any */*value*/);

HX509_LIB_FUNCTION time_t HX509_LIB_CALL
_hx509_verify_get_time (hx509_verify_ctx /*ctx*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_verify_signature (
	hx509_context /*context*/,
	const hx509_cert /*cert*/,
	const AlgorithmIdentifier */*alg*/,
	const heim_octet_string */*data*/,
	const heim_octet_string */*sig*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_verify_signature_bitstring (
	hx509_context /*context*/,
	const hx509_cert /*signer*/,
	const AlgorithmIdentifier */*alg*/,
	const heim_octet_string */*data*/,
	const heim_bit_string */*sig*/);

HX509_LIB_FUNCTION int HX509_LIB_CALL
_hx509_write_file (
	const char */*fn*/,
	const void */*data*/,
	size_t /*length*/);

#endif /* __hx509_private_h__ */
