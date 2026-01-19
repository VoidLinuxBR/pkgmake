/* This is a generated file */
#ifndef __spnego_private_h__
#define __spnego_private_h__

#include <stdarg.h>

gssapi_mech_interface
__gss_spnego_initialize (void);

OM_uint32
_gss_negoex_accept (
	OM_uint32 */*minor*/,
	gssspnego_ctx /*ctx*/,
	gss_cred_id_t /*cred*/,
	gss_const_buffer_t /*input_token*/,
	const gss_channel_bindings_t /*input_chan_bindings*/,
	gss_buffer_t /*output_token*/,
	gss_cred_id_t */*deleg_cred*/);

OM_uint32
_gss_negoex_add_auth_mech (
	OM_uint32 */*minor*/,
	gssspnego_ctx /*ctx*/,
	gss_const_OID /*oid*/,
	auth_scheme /*scheme*/);

OM_uint32
_gss_negoex_add_exchange_message (
	OM_uint32 */*minor*/,
	gssspnego_ctx /*ctx*/,
	enum message_type /*type*/,
	const auth_scheme /*scheme*/,
	gss_buffer_t /*token*/);

OM_uint32
_gss_negoex_add_nego_message (
	OM_uint32 */*minor*/,
	gssspnego_ctx /*ctx*/,
	enum message_type /*type*/,
	uint8_t random[32]);

OM_uint32
_gss_negoex_add_verify_message (
	OM_uint32 */*minor*/,
	gssspnego_ctx /*ctx*/,
	const auth_scheme /*scheme*/,
	uint32_t /*cksum_type*/,
	const uint8_t */*cksum*/,
	uint32_t /*cksum_len*/);

OM_uint32
_gss_negoex_add_verify_no_key_alert (
	OM_uint32 */*minor*/,
	gssspnego_ctx /*ctx*/,
	const auth_scheme /*scheme*/);

int
_gss_negoex_and_spnego_mech_p (gss_const_OID /*mech*/);

OM_uint32
_gss_negoex_begin (
	OM_uint32 */*minor*/,
	gssspnego_ctx /*ctx*/);

void
_gss_negoex_common_auth_schemes (
	gssspnego_ctx /*ctx*/,
	const uint8_t */*schemes*/,
	uint16_t /*nschemes*/);

void
_gss_negoex_delete_auth_mech (
	gssspnego_ctx /*ctx*/,
	struct negoex_auth_mech */*mech*/);

void
_gss_negoex_end (gssspnego_ctx /*ctx*/);

OM_uint32
_gss_negoex_init (
	OM_uint32 */*minor*/,
	struct gssspnego_optimistic_ctx */*opt*/,
	gssspnego_ctx /*ctx*/,
	gss_cred_id_t /*cred*/,
	OM_uint32 /*req_flags*/,
	OM_uint32 /*time_req*/,
	const gss_channel_bindings_t /*input_chan_bindings*/,
	gss_const_buffer_t /*input_token*/,
	gss_buffer_t /*output_token*/);

struct alert_message *
_gss_negoex_locate_alert_message (
	struct negoex_message */*messages*/,
	size_t /*nmessages*/);

struct negoex_auth_mech *
_gss_negoex_locate_auth_scheme (
	gssspnego_ctx /*ctx*/,
	const auth_scheme /*scheme*/);

struct exchange_message *
_gss_negoex_locate_exchange_message (
	struct negoex_message */*messages*/,
	size_t /*nmessages*/,
	enum message_type /*type*/);

struct nego_message *
_gss_negoex_locate_nego_message (
	struct negoex_message */*messages*/,
	size_t /*nmessages*/,
	enum message_type /*type*/);

struct verify_message *
_gss_negoex_locate_verify_message (
	struct negoex_message */*messages*/,
	size_t /*nmessages*/);

void
_gss_negoex_log_auth_scheme (
	int /*initiator*/,
	int /*index*/,
	const auth_scheme /*scheme*/);

void
_gss_negoex_log_message (
	int /*direction*/,
	enum message_type /*type*/,
	const conversation_id /*conv_id*/,
	unsigned int /*seqnum*/,
	unsigned int /*header_len*/,
	unsigned int /*msg_len*/);

int
_gss_negoex_mech_p (gss_const_OID /*mech*/);

struct negoex_auth_mech *
_gss_negoex_negotiated_mech (gssspnego_ctx /*ctx*/);

OM_uint32
_gss_negoex_parse_token (
	OM_uint32 */*minor*/,
	gssspnego_ctx /*ctx*/,
	gss_const_buffer_t /*token*/,
	struct negoex_message **/*messages_out*/,
	size_t */*count_out*/);

void
_gss_negoex_release_auth_mech (
	krb5_context /*context*/,
	struct negoex_auth_mech */*mech*/);

void
_gss_negoex_release_context (gssspnego_ctx /*ctx*/);

void
_gss_negoex_restrict_auth_schemes (
	gssspnego_ctx /*ctx*/,
	const uint8_t */*schemes*/,
	uint16_t /*nschemes*/);

void
_gss_negoex_select_auth_mech (
	gssspnego_ctx /*ctx*/,
	struct negoex_auth_mech */*mech*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_accept_sec_context (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t * /*context_handle*/,
	gss_const_cred_id_t /*acceptor_cred_handle*/,
	const gss_buffer_t /*input_token_buffer*/,
	const gss_channel_bindings_t /*input_chan_bindings*/,
	gss_name_t * /*src_name*/,
	gss_OID * /*mech_type*/,
	gss_buffer_t /*output_token*/,
	OM_uint32 * /*ret_flags*/,
	OM_uint32 * /*time_rec*/,
	gss_cred_id_t *delegated_cred_handle );

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_alloc_sec_context (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t */*context_handle*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_context_time (
	OM_uint32 */*minor_status*/,
	gss_const_ctx_id_t /*context_handle*/,
	OM_uint32 *time_rec );

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_delete_sec_context (
	OM_uint32 */*minor_status*/,
	gss_ctx_id_t */*context_handle*/,
	gss_buffer_t output_token );

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_export_sec_context (
	 OM_uint32 * /*minor_status*/,
	gss_ctx_id_t * /*context_handle*/,
	gss_buffer_t interprocess_token );

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_export_sec_context_internal (
	OM_uint32 */*minor*/,
	gssspnego_ctx /*ctx*/,
	gss_buffer_t /*buffer*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_get_mic (
	OM_uint32 */*minor_status*/,
	gss_const_ctx_id_t /*context_handle*/,
	gss_qop_t /*qop_req*/,
	const gss_buffer_t /*message_buffer*/,
	gss_buffer_t message_token );

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_import_sec_context (
	 OM_uint32 * /*minor_status*/,
	const gss_buffer_t /*interprocess_token*/,
	gss_ctx_id_t *context_handle );

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_import_sec_context_internal (
	OM_uint32 */*minor*/,
	gss_const_buffer_t /*buffer*/,
	gssspnego_ctx */*ctxp*/);

OM_uint32
_gss_spnego_indicate_mechs (
	OM_uint32 */*minor_status*/,
	gss_OID_set */*mechs_p*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_indicate_mechtypelist (
	OM_uint32 */*minor_status*/,
	gss_const_name_t /*target_name*/,
	OM_uint32 /*req_flags*/,
	OM_uint32 (*/*func*/)(OM_uint32 *, void *, gss_const_name_t, gss_const_cred_id_t, gss_OID),
	void */*userptr*/,
	int /*includeMSCompatOID*/,
	gss_const_cred_id_t /*cred_handle*/,
	MechTypeList */*mechtypelist*/,
	gss_OID */*preferred_mech*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_init_sec_context (
	OM_uint32 * /*minor_status*/,
	gss_const_cred_id_t /*initiator_cred_handle*/,
	gss_ctx_id_t * /*context_handle*/,
	gss_const_name_t /*target_name*/,
	const gss_OID /*mech_type*/,
	OM_uint32 /*req_flags*/,
	OM_uint32 /*time_req*/,
	const gss_channel_bindings_t /*input_chan_bindings*/,
	const gss_buffer_t /*input_token*/,
	gss_OID * /*actual_mech_type*/,
	gss_buffer_t /*output_token*/,
	OM_uint32 * /*ret_flags*/,
	OM_uint32 * /*time_rec*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_inquire_context (
	 OM_uint32 * /*minor_status*/,
	gss_const_ctx_id_t /*context_handle*/,
	gss_name_t * /*src_name*/,
	gss_name_t * /*targ_name*/,
	OM_uint32 * /*lifetime_rec*/,
	gss_OID * /*mech_type*/,
	OM_uint32 * /*ctx_flags*/,
	int * /*locally_initiated*/,
	int * open_context );

OM_uint32
_gss_spnego_inquire_cred_mechs (
	OM_uint32 */*minor_status*/,
	gss_const_cred_id_t /*cred*/,
	gss_OID_set */*mechs_p*/,
	int */*canonical_order*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_inquire_names_for_mech (
	 OM_uint32 * /*minor_status*/,
	const gss_OID /*mechanism*/,
	gss_OID_set * name_types );

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_inquire_sec_context_by_oid (
	OM_uint32 * /*minor_status*/,
	gss_const_ctx_id_t /*context_handle*/,
	const gss_OID /*desired_object*/,
	gss_buffer_set_t */*data_set*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_internal_delete_sec_context (
	OM_uint32 */*minor_status*/,
	gss_ctx_id_t */*context_handle*/,
	gss_buffer_t output_token );

void
_gss_spnego_log_mech (
	const char */*prefix*/,
	gss_const_OID /*oid*/);

void
_gss_spnego_log_mechTypes (MechTypeList */*mechTypes*/);

OM_uint32
_gss_spnego_ntlm_reset_crypto (
	OM_uint32 */*minor_status*/,
	gssspnego_ctx /*ctx*/,
	OM_uint32 /*verify*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_process_context_token (
	OM_uint32 */*minor_status*/,
	gss_const_ctx_id_t /*context_handle*/,
	const gss_buffer_t token_buffer );

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_pseudo_random (
	OM_uint32 */*minor_status*/,
	gss_ctx_id_t /*context_handle*/,
	int /*prf_key*/,
	const gss_buffer_t /*prf_in*/,
	ssize_t /*desired_output_len*/,
	gss_buffer_t /*prf_out*/);

int
_gss_spnego_safe_omit_mechlist_mic (gssspnego_ctx /*ctx*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_set_sec_context_option (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t * /*context_handle*/,
	const gss_OID /*desired_object*/,
	const gss_buffer_t /*value*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_unwrap (
	OM_uint32 * /*minor_status*/,
	gss_const_ctx_id_t /*context_handle*/,
	const gss_buffer_t /*input_message_buffer*/,
	gss_buffer_t /*output_message_buffer*/,
	int * /*conf_state*/,
	gss_qop_t * qop_state );

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_unwrap_iov (
	OM_uint32 */*minor_status*/,
	gss_ctx_id_t /*context_handle*/,
	int */*conf_state*/,
	gss_qop_t */*qop_state*/,
	gss_iov_buffer_desc */*iov*/,
	int /*iov_count*/);

OM_uint32
_gss_spnego_verify_mechtypes_mic (
	OM_uint32 */*minor_status*/,
	gssspnego_ctx /*ctx*/,
	heim_octet_string */*mic*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_verify_mic (
	OM_uint32 * /*minor_status*/,
	gss_const_ctx_id_t /*context_handle*/,
	const gss_buffer_t /*message_buffer*/,
	const gss_buffer_t /*token_buffer*/,
	gss_qop_t * qop_state );

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_wrap (
	OM_uint32 * /*minor_status*/,
	gss_const_ctx_id_t /*context_handle*/,
	int /*conf_req_flag*/,
	gss_qop_t /*qop_req*/,
	const gss_buffer_t /*input_message_buffer*/,
	int * /*conf_state*/,
	gss_buffer_t output_message_buffer );

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_wrap_iov (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t /*context_handle*/,
	int /*conf_req_flag*/,
	gss_qop_t /*qop_req*/,
	int * /*conf_state*/,
	gss_iov_buffer_desc */*iov*/,
	int /*iov_count*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_wrap_iov_length (
	OM_uint32 * /*minor_status*/,
	gss_ctx_id_t /*context_handle*/,
	int /*conf_req_flag*/,
	gss_qop_t /*qop_req*/,
	int */*conf_state*/,
	gss_iov_buffer_desc */*iov*/,
	int /*iov_count*/);

OM_uint32 GSSAPI_CALLCONV
_gss_spnego_wrap_size_limit (
	 OM_uint32 * /*minor_status*/,
	gss_const_ctx_id_t /*context_handle*/,
	int /*conf_req_flag*/,
	gss_qop_t /*qop_req*/,
	OM_uint32 /*req_output_size*/,
	OM_uint32 * max_input_size );

#endif /* __spnego_private_h__ */
