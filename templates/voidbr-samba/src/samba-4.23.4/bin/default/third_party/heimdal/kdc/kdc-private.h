/* This is a generated file */
#ifndef __kdc_private_h__
#define __kdc_private_h__

#include <stdarg.h>

#if !defined(__GNUC__) && !defined(__attribute__)
#define __attribute__(x)
#endif

krb5_error_code
_kdc_add_initial_verified_cas (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	pk_client_params */*cp*/,
	EncTicketPart */*tkt*/);

krb5_error_code
_kdc_as_rep (astgs_request_t /*r*/);

krb5_error_code
_kdc_audit_request (astgs_request_t /*r*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
_kdc_audit_trail (
	kdc_request_t /*r*/,
	krb5_error_code /*ret*/);

krb5_error_code
_kdc_check_access (astgs_request_t /*r*/);

krb5_boolean
_kdc_check_addresses (
	astgs_request_t /*r*/,
	HostAddresses */*addresses*/,
	const struct sockaddr */*from*/);

krb5_error_code
_kdc_check_anon_policy (astgs_request_t /*r*/);

krb5_error_code
_kdc_check_client_matches_target_service (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	HDB */*clientdb*/,
	hdb_entry */*client*/,
	hdb_entry */*target_server*/,
	krb5_const_principal /*target_server_principal*/);

krb5_error_code
_kdc_check_pac (
	astgs_request_t /*r*/,
	const krb5_principal /*client_principal*/,
	hdb_entry */*delegated_proxy*/,
	hdb_entry */*client*/,
	hdb_entry */*server*/,
	hdb_entry */*krbtgt*/,
	hdb_entry */*ticket_server*/,
	const EncryptionKey */*server_check_key*/,
	const EncryptionKey */*krbtgt_check_key*/,
	EncTicketPart */*tkt*/,
	krb5_boolean */*kdc_issued*/,
	krb5_pac */*ppac*/,
	krb5_principal */*pac_canon_name*/,
	uint64_t */*pac_attributes*/);

KDC_LIB_FUNCTION krb5_error_code KDC_LIB_CALL
_kdc_db_fetch (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	krb5_const_principal /*principal*/,
	unsigned /*flags*/,
	krb5uint32 */*kvno_ptr*/,
	HDB **/*db*/,
	hdb_entry **/*h*/);

krb5_error_code
_kdc_db_fetch_client (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	int /*flags*/,
	krb5_principal /*cp*/,
	const char */*cpn*/,
	const char */*krbtgt_realm*/,
	HDB **/*clientdb*/,
	hdb_entry **/*client_out*/);

krb5_error_code
_kdc_do_digest (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	const struct DigestREQ */*req*/,
	krb5_data */*reply*/,
	const char */*from*/,
	struct sockaddr */*addr*/);

krb5_error_code
_kdc_do_kx509 (kx509_req_context /*r*/);

krb5_error_code
_kdc_encode_reply (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	astgs_request_t /*r*/,
	uint32_t /*nonce*/,
	krb5_enctype /*etype*/,
	int /*skvno*/,
	const EncryptionKey */*skey*/,
	int /*ckvno*/,
	int /*rk_is_subkey*/,
	krb5_data */*reply*/);

krb5_error_code
_kdc_fast_check_armor_pac (
	astgs_request_t /*r*/,
	int /*flags*/);

krb5_error_code
_kdc_fast_mk_error (
	astgs_request_t /*r*/,
	METHOD_DATA */*error_method*/,
	krb5_crypto /*armor_crypto*/,
	const KDC_REQ_BODY */*req_body*/,
	krb5_error_code /*outer_error*/,
	krb5_principal /*error_client*/,
	krb5_principal /*error_server*/,
	time_t */*csec*/,
	int */*cusec*/,
	krb5_data */*error_msg*/);

krb5_error_code
_kdc_fast_mk_response (
	krb5_context /*context*/,
	krb5_crypto /*armor_crypto*/,
	METHOD_DATA */*pa_data*/,
	krb5_keyblock */*strengthen_key*/,
	KrbFastFinished */*finished*/,
	krb5uint32 /*nonce*/,
	krb5_data */*data*/);

krb5_error_code
_kdc_fast_strengthen_reply_key (astgs_request_t /*r*/);

krb5_error_code
_kdc_fast_unwrap_request (
	astgs_request_t /*r*/,
	krb5_ticket */*tgs_ticket*/,
	krb5_auth_context /*tgs_ac*/);

krb5_error_code
_kdc_finalize_reply (astgs_request_t /*r*/);

krb5_error_code
_kdc_find_etype (
	astgs_request_t /*r*/,
	uint32_t /*flags*/,
	krb5_enctype */*etypes*/,
	unsigned /*len*/,
	krb5_enctype */*ret_enctype*/,
	Key **/*ret_key*/,
	krb5_boolean */*ret_default_salt*/);

const PA_DATA*
_kdc_find_padata (
	const KDC_REQ */*req*/,
	int */*start*/,
	int /*type*/);

krb5_error_code
_kdc_find_session_etype (
	astgs_request_t /*r*/,
	krb5_enctype */*etypes*/,
	size_t /*len*/,
	const hdb_entry */*princ*/,
	krb5_enctype */*ret_enctype*/);

void
_kdc_fix_time (time_t **/*t*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
_kdc_free_ent (
	krb5_context /*context*/,
	HDB */*db*/,
	hdb_entry */*ent*/);

void
_kdc_free_fast_state (KDCFastState */*state*/);

krb5_error_code
_kdc_generate_ecdh_keyblock (
	krb5_context /*context*/,
	void */*ec_key_pk*/,
	void **/*ec_key_key*/,
	unsigned char **/*dh_gen_key*/,
	size_t */*dh_gen_keylen*/);

krb5_error_code
_kdc_get_ecdh_param (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	SubjectPublicKeyInfo */*dh_key_info*/,
	void **/*out*/);

krb5_error_code
_kdc_get_preferred_key (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	hdb_entry */*h*/,
	const char */*name*/,
	krb5_enctype */*enctype*/,
	Key **/*key*/);

krb5_error_code
_kdc_gss_check_client (
	astgs_request_t /*r*/,
	gss_client_params */*gcp*/,
	char **/*client_name*/);

krb5_timestamp
_kdc_gss_endtime (
	astgs_request_t /*r*/,
	gss_client_params */*gcp*/);

krb5_error_code
_kdc_gss_finalize_pac (
	astgs_request_t /*r*/,
	gss_client_params */*gcp*/);

krb5_error_code
_kdc_gss_get_mechanism_config (
	krb5_context /*context*/,
	const char */*section*/,
	const char */*key*/,
	gss_OID_set */*oidsp*/);

krb5_error_code
_kdc_gss_mk_composite_name_ad (
	astgs_request_t /*r*/,
	gss_client_params */*gcp*/);

krb5_error_code
_kdc_gss_mk_pa_reply (
	astgs_request_t /*r*/,
	gss_client_params */*gcp*/);

krb5_error_code
_kdc_gss_rd_padata (
	astgs_request_t /*r*/,
	const PA_DATA */*pa*/,
	gss_client_params **/*pgcp*/,
	int */*open*/);

krb5_error_code
_kdc_hwauth_policy (astgs_request_t /*r*/);

krb5_boolean
_kdc_include_pac_p (astgs_request_t /*r*/);

krb5_boolean
_kdc_is_anon_request (const KDC_REQ */*req*/);

krb5_boolean
_kdc_is_anonymous (
	krb5_context /*context*/,
	krb5_const_principal /*principal*/);

krb5_boolean
_kdc_is_anonymous_pkinit (
	krb5_context /*context*/,
	krb5_const_principal /*principal*/);

krb5_boolean
_kdc_is_weak_exception (
	krb5_principal /*principal*/,
	krb5_enctype /*etype*/);

void
_kdc_log_timestamp (
	astgs_request_t /*r*/,
	const char */*type*/,
	KerberosTime /*authtime*/,
	KerberosTime */*starttime*/,
	KerberosTime /*endtime*/,
	KerberosTime */*renew_till*/);

krb5_error_code
_kdc_make_anonymous_principalname (PrincipalName */*pn*/);

krb5_error_code
_kdc_pac_generate (
	astgs_request_t /*r*/,
	hdb_entry */*client*/,
	hdb_entry */*server*/,
	const krb5_keyblock */*reply_key*/,
	uint64_t /*pac_attributes*/,
	krb5_pac */*pac*/);

krb5_error_code
_kdc_pac_update (
	astgs_request_t /*r*/,
	krb5_const_principal /*client_principal*/,
	hdb_entry */*delegated_proxy*/,
	krb5_const_pac /*delegated_proxy_pac*/,
	hdb_entry */*client*/,
	hdb_entry */*server*/,
	hdb_entry */*krbtgt*/,
	krb5_pac */*pac*/);

krb5_error_code
_kdc_pac_verify (
	astgs_request_t /*r*/,
	krb5_const_principal /*client_principal*/,
	hdb_entry */*delegated_proxy*/,
	hdb_entry */*client*/,
	hdb_entry */*server*/,
	hdb_entry */*krbtgt*/,
	EncTicketPart */*ticket*/,
	krb5_pac /*pac*/);

krb5_error_code
_kdc_pk_check_client (
	astgs_request_t /*r*/,
	pk_client_params */*cp*/,
	char **/*subject_name*/);

krb5_timestamp
_kdc_pk_endtime (pk_client_params */*pkp*/);

void
_kdc_pk_free_client_ec_param (
	krb5_context /*context*/,
	void */*k0*/,
	void */*k1*/);

void
_kdc_pk_free_client_param (
	krb5_context /*context*/,
	pk_client_params */*cp*/);

krb5_timestamp
_kdc_pk_max_life (pk_client_params */*pkp*/);

krb5_error_code
_kdc_pk_mk_pa_reply (
	astgs_request_t /*r*/,
	pk_client_params */*cp*/);

unsigned
_kdc_pk_nonce (pk_client_params */*pkp*/);

krb5_error_code
_kdc_pk_rd_padata (
	astgs_request_t /*priv*/,
	const PA_DATA */*pa*/,
	pk_client_params **/*ret_params*/);

krb5_error_code
_kdc_pk_validate_freshness_token (
	astgs_request_t /*r*/,
	pk_client_params */*cp*/);

krb5_error_code
_kdc_plugin_audit (astgs_request_t /*r*/);

krb5_error_code
_kdc_referral_policy (astgs_request_t /*r*/);

krb5_error_code
_kdc_serialize_ecdh_key (
	krb5_context /*context*/,
	void */*key*/,
	unsigned char **/*out*/,
	size_t */*out_len*/);

void
_kdc_set_const_e_text (
	astgs_request_t /*r*/,
	const char */*e_text*/);

void
_kdc_set_e_text (
	astgs_request_t /*r*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 2, 3)));

krb5_boolean
_kdc_synthetic_princ_used_p (
	krb5_context /*context*/,
	krb5_ticket */*ticket*/);

krb5_error_code
_kdc_tgs_rep (astgs_request_t /*r*/);

krb5_error_code
_kdc_try_kx509_request (kx509_req_context /*r*/);

krb5_error_code
_kdc_validate_constrained_delegation (astgs_request_t /*r*/);

krb5_error_code
_kdc_validate_protocol_transition (
	astgs_request_t /*r*/,
	const PA_DATA */*for_user*/);

krb5_error_code
_kdc_verify_checksum (
	krb5_context /*context*/,
	krb5_crypto /*crypto*/,
	krb5_key_usage /*usage*/,
	const krb5_data */*data*/,
	Checksum */*cksum*/);

krb5_error_code
_kdc_verify_flags (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	const EncTicketPart */*et*/,
	const char */*pstr*/);

void
_log_astgs_req (
	astgs_request_t /*r*/,
	krb5_enctype /*setype*/);

#endif /* __kdc_private_h__ */
