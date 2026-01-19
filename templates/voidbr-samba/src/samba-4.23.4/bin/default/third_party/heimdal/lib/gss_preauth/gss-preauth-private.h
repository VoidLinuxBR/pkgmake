/* This is a generated file */
#ifndef __gss_preauth_private_h__
#define __gss_preauth_private_h__

#include <stdarg.h>

void
_krb5_gss_buffer_to_data (
	gss_const_buffer_t,
	krb5_data*);

void
_krb5_gss_data_to_buffer (
	const krb5_data*,
	gss_buffer_t);

krb5_error_code
_krb5_gss_map_error (
	OM_uint32,
	OM_uint32);

krb5_error_code
_krb5_gss_pa_derive_key (
	krb5_context,
	gss_ctx_id_t,
	krb5int32,
	krb5_enctype,
	krb5_keyblock**);

krb5_error_code
_krb5_gss_pa_parse_name (
	krb5_context,
	gss_const_name_t,
	int,
	krb5_principal*);

krb5_error_code
_krb5_gss_pa_unparse_name (
	krb5_context,
	krb5_const_principal,
	gss_name_t*);

#endif /* __gss_preauth_private_h__ */
