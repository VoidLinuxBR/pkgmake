/* This is a generated file */
#ifndef __gss_preauth_protos_h__
#define __gss_preauth_protos_h__
#ifndef DOXY

#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef KRB5_LIB
 #ifndef KRB5_LIB_FUNCTION
  #if defined(_WIN32)
   #define KRB5_LIB_FUNCTION __declspec(dllimport)
  #else
   #define KRB5_LIB_FUNCTION
  #endif
 #endif
 #ifndef KRB5_LIB_NORETURN_FUNCTION
  #if defined(_WIN32)
   #define KRB5_LIB_NORETURN_FUNCTION __declspec(dllimport noreturn)
  #else
   #define KRB5_LIB_NORETURN_FUNCTION
  #endif
 #endif
 #ifndef KRB5_LIB_CALL
  #if defined(_WIN32)
   #define KRB5_LIB_CALL __stdcall
  #else
   #define KRB5_LIB_CALL
  #endif
 #endif
 #ifndef KRB5_LIB_VARIABLE
  #if defined(_WIN32)
   #define KRB5_LIB_VARIABLE __declspec(dllimport)
  #else
   #define KRB5_LIB_VARIABLE
  #endif
 #endif
#endif
krb5_error_code
krb5_gss_set_init_creds (
	krb5_context,
	krb5_init_creds_context,
	gss_const_cred_id_t,
	gss_const_OID);

#ifdef __cplusplus
}
#endif

#endif /* DOXY */
#endif /* __gss_preauth_protos_h__ */
