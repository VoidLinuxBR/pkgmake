/* This is a generated file */
#ifndef __kdc_protos_h__
#define __kdc_protos_h__
#ifndef DOXY

#include <stdarg.h>

#if !defined(__GNUC__) && !defined(__attribute__)
#define __attribute__(x)
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef KDC_LIB
 #ifndef KDC_LIB_FUNCTION
  #if defined(_WIN32)
   #define KDC_LIB_FUNCTION __declspec(dllimport)
  #else
   #define KDC_LIB_FUNCTION
  #endif
 #endif
 #ifndef KDC_LIB_NORETURN_FUNCTION
  #if defined(_WIN32)
   #define KDC_LIB_NORETURN_FUNCTION __declspec(dllimport noreturn)
  #else
   #define KDC_LIB_NORETURN_FUNCTION
  #endif
 #endif
 #ifndef KDC_LIB_CALL
  #if defined(_WIN32)
   #define KDC_LIB_CALL __stdcall
  #else
   #define KDC_LIB_CALL
  #endif
 #endif
 #ifndef KDC_LIB_VARIABLE
  #if defined(_WIN32)
   #define KDC_LIB_VARIABLE __declspec(dllimport)
  #else
   #define KDC_LIB_VARIABLE
  #endif
 #endif
#endif
KDC_LIB_FUNCTION kdc_object_t KDC_LIB_CALL
kdc_array_copy_value (
	heim_array_t /*a*/,
	size_t /*i*/);

KDC_LIB_FUNCTION size_t KDC_LIB_CALL
kdc_array_get_length (kdc_array_t /*a*/);

KDC_LIB_FUNCTION kdc_object_t KDC_LIB_CALL
kdc_array_get_value (
	heim_array_t /*a*/,
	size_t /*i*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_array_iterate (
	kdc_array_t /*a*/,
	void */*d*/,
	kdc_array_iterator_t /*iter*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_audit_addaddrs (
	kdc_request_t /*r*/,
	HostAddresses */*a*/,
	const char */*key*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_audit_addkv (
	kdc_request_t /*r*/,
	int /*flags*/,
	const char */*k*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 4, 5)));

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_audit_addkv_number (
	kdc_request_t /*r*/,
	const char */*k*/,
	int64_t /*v*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_audit_addkv_object (
	kdc_request_t /*r*/,
	const char */*k*/,
	kdc_object_t /*obj*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_audit_addkv_timediff (
	kdc_request_t /*r*/,
	const char */*k*/,
	const struct timeval */*start*/,
	const struct timeval */*end*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_audit_addreason (
	kdc_request_t /*r*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 2, 3)));

KDC_LIB_FUNCTION kdc_object_t KDC_LIB_CALL
kdc_audit_getkv (
	kdc_request_t /*r*/,
	const char */*k*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_audit_setkv_bool (
	kdc_request_t /*r*/,
	const char */*k*/,
	krb5_boolean /*v*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_audit_setkv_number (
	kdc_request_t /*r*/,
	const char */*k*/,
	int64_t /*v*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_audit_setkv_object (
	kdc_request_t /*r*/,
	const char */*k*/,
	kdc_object_t /*obj*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_audit_vaddkv (
	kdc_request_t /*r*/,
	int /*flags*/,
	const char */*k*/,
	const char */*fmt*/,
	va_list /*ap*/)
     __attribute__ ((__format__ (__printf__, 4, 0)));

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_audit_vaddreason (
	kdc_request_t /*r*/,
	const char */*fmt*/,
	va_list /*ap*/)
     __attribute__ ((__format__ (__printf__, 2, 0)));

KDC_LIB_FUNCTION kdc_object_t KDC_LIB_CALL
kdc_bool_create (krb5_boolean /*v*/);

KDC_LIB_FUNCTION krb5_boolean KDC_LIB_CALL
kdc_bool_get_value (kdc_object_t /*o*/);

KDC_LIB_FUNCTION krb5_error_code KDC_LIB_CALL
kdc_check_flags (
	astgs_request_t /*r*/,
	krb5_boolean /*is_as_req*/,
	hdb_entry */*client*/,
	hdb_entry */*server*/);

KDC_LIB_FUNCTION kdc_data_t
kdc_data_create (
	const void */*d*/,
	size_t /*len*/);

KDC_LIB_FUNCTION const krb5_data * KDC_LIB_CALL
kdc_data_get_data (kdc_data_t /*d*/);

KDC_LIB_FUNCTION uintptr_t KDC_LIB_CALL
kdc_get_instance (const char */*libname*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_log (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	int /*level*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 4, 5)));

KDC_LIB_FUNCTION char * KDC_LIB_CALL
kdc_log_msg (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	int /*level*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 4, 5)));

KDC_LIB_FUNCTION char * KDC_LIB_CALL
kdc_log_msg_va (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	int /*level*/,
	const char */*fmt*/,
	va_list /*ap*/)
     __attribute__ ((__format__ (__printf__, 4, 0)));

KDC_LIB_FUNCTION kdc_number_t KDC_LIB_CALL
kdc_number_create (int64_t /*v*/);

KDC_LIB_FUNCTION int64_t KDC_LIB_CALL
kdc_number_get_value (kdc_number_t /*n*/);

KDC_LIB_FUNCTION kdc_object_t KDC_LIB_CALL
kdc_object_alloc (
	size_t /*size*/,
	const char */*name*/,
	kdc_type_dealloc /*dealloc*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_object_release (kdc_object_t /*o*/);

KDC_LIB_FUNCTION kdc_object_t KDC_LIB_CALL
kdc_object_retain (kdc_object_t /*o*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_openlog (
	krb5_context /*context*/,
	const char */*service*/,
	krb5_kdc_configuration */*config*/);

KDC_LIB_FUNCTION krb5_error_code KDC_LIB_CALL
kdc_request_add_encrypted_padata (
	astgs_request_t /*r*/,
	PA_DATA */*md*/);

KDC_LIB_FUNCTION krb5_error_code KDC_LIB_CALL
kdc_request_add_pac_buffer (
	astgs_request_t /*r*/,
	uint32_t /*pactype*/,
	const krb5_data */*d*/);

KDC_LIB_FUNCTION krb5_error_code KDC_LIB_CALL
kdc_request_add_reply_padata (
	astgs_request_t /*r*/,
	PA_DATA */*md*/);

KDC_LIB_FUNCTION kdc_object_t KDC_LIB_CALL
kdc_request_copy_attribute (
	kdc_request_t /*r*/,
	kdc_object_t /*key*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_request_delete_attribute (
	kdc_request_t /*r*/,
	kdc_object_t /*key*/);

KDC_LIB_FUNCTION kdc_object_t KDC_LIB_CALL
kdc_request_get_attribute (
	kdc_request_t /*r*/,
	kdc_object_t /*key*/);

KDC_LIB_FUNCTION const hdb_entry * KDC_LIB_CALL
kdc_request_get_explicit_armor_client (astgs_request_t /*r*/);

KDC_LIB_FUNCTION const Principal * KDC_LIB_CALL
kdc_request_get_explicit_armor_client_principal (astgs_request_t /*r*/);

KDC_LIB_FUNCTION const HDB * KDC_LIB_CALL
kdc_request_get_explicit_armor_clientdb (astgs_request_t /*r*/);

KDC_LIB_FUNCTION krb5_const_pac KDC_LIB_CALL
kdc_request_get_explicit_armor_pac (astgs_request_t /*r*/);

KDC_LIB_FUNCTION const hdb_entry * KDC_LIB_CALL
kdc_request_get_explicit_armor_server (astgs_request_t /*r*/);

KDC_LIB_FUNCTION krb5_error_code KDC_LIB_CALL
kdc_request_set_attribute (
	kdc_request_t /*r*/,
	kdc_object_t /*key*/,
	kdc_object_t /*value*/);

KDC_LIB_FUNCTION krb5_error_code KDC_LIB_CALL
kdc_request_set_e_data (
	astgs_request_t /*r*/,
	heim_octet_string /*e_data*/);

KDC_LIB_FUNCTION kdc_string_t KDC_LIB_CALL
kdc_string_create (const char */*s*/);

KDC_LIB_FUNCTION const char * KDC_LIB_CALL
kdc_string_get_utf8 (kdc_string_t /*s*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
kdc_vlog (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	int /*level*/,
	const char */*fmt*/,
	va_list /*ap*/)
     __attribute__ ((__format__ (__printf__, 4, 0)));

KDC_LIB_FUNCTION krb5_error_code KDC_LIB_CALL
krb5_kdc_get_config (
	krb5_context /*context*/,
	krb5_kdc_configuration **/*config*/);

KDC_LIB_FUNCTION struct timeval KDC_LIB_CALL
krb5_kdc_get_time (void);

KDC_LIB_FUNCTION krb5_error_code KDC_LIB_CALL
krb5_kdc_pk_initialize (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	const char */*user_id*/,
	const char */*anchors*/,
	char **/*pool*/,
	char **/*revoke_list*/);

KDC_LIB_FUNCTION krb5_error_code KDC_LIB_CALL
krb5_kdc_pkinit_config (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/);

KDC_LIB_FUNCTION krb5_error_code KDC_LIB_CALL
krb5_kdc_plugin_init (krb5_context /*context*/);

KDC_LIB_FUNCTION int KDC_LIB_CALL
krb5_kdc_process_krb5_request (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	unsigned char */*buf*/,
	size_t /*len*/,
	krb5_data */*reply*/,
	const char */*from*/,
	struct sockaddr */*addr*/,
	int /*datagram_reply*/);

KDC_LIB_FUNCTION int KDC_LIB_CALL
krb5_kdc_process_request (
	krb5_context /*context*/,
	krb5_kdc_configuration */*config*/,
	unsigned char */*buf*/,
	size_t /*len*/,
	krb5_data */*reply*/,
	krb5_boolean */*prependlength*/,
	const char */*from*/,
	struct sockaddr */*addr*/,
	int /*datagram_reply*/);

KDC_LIB_FUNCTION int KDC_LIB_CALL
krb5_kdc_save_request (
	krb5_context /*context*/,
	const char */*fn*/,
	const unsigned char */*buf*/,
	size_t /*len*/,
	const krb5_data */*reply*/,
	const struct sockaddr */*sa*/);

KDC_LIB_FUNCTION void KDC_LIB_CALL
krb5_kdc_update_time (struct timeval */*tv*/);

#ifdef __cplusplus
}
#endif

#endif /* DOXY */
#endif /* __kdc_protos_h__ */
