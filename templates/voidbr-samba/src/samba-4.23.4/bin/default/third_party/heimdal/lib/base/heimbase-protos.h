/* This is a generated file */
#ifndef __heimbase_protos_h__
#define __heimbase_protos_h__
#ifndef DOXY

#include <stdarg.h>

#if !defined(__GNUC__) && !defined(__attribute__)
#define __attribute__(x)
#endif

#ifdef __cplusplus
extern "C" {
#endif

size_t
addkv (
	heim_svc_req_desc /*r*/,
	heim_object_t /*key*/,
	heim_object_t /*value*/);

/**
 * Abort and log the failure (using syslog)
 */

void
heim_abort (
	const char */*fmt*/,
	...) HEIMDAL_NORETURN_ATTRIBUTE 
     HEIMDAL_PRINTF_ATTRIBUTE((__printf__, 1, 2));

/**
 * Abort and log the failure (using syslog)
 */

void
heim_abortv (
	const char */*fmt*/,
	va_list ap) HEIMDAL_NORETURN_ATTRIBUTE 
     HEIMDAL_PRINTF_ATTRIBUTE((__printf__, 1, 0));

heim_error_code
heim_add_debug_dest (
	heim_context /*context*/,
	const char */*program*/,
	const char */*log_spec*/);

heim_error_code
heim_add_et_list (
	heim_context /*context*/,
	void (*/*func*/)(struct et_list **));

heim_error_code
heim_add_warn_dest (
	heim_context /*context*/,
	const char */*program*/,
	const char */*log_spec*/);

heim_error_code
heim_addlog_dest (
	heim_context /*context*/,
	heim_log_facility */*f*/,
	const char */*orig*/);

heim_error_code
heim_addlog_func (
	heim_context /*context*/,
	heim_log_facility */*fac*/,
	int /*min*/,
	int /*max*/,
	heim_log_log_func_t /*log_func*/,
	heim_log_close_func_t /*close_func*/,
	void */*data*/);

/**
 * Allocate memory for an object of anonymous type
 *
 * @param size size of object to be allocated
 * @param name name of ad-hoc type
 * @param dealloc destructor function
 *
 * Objects allocated with this interface do not serialize.
 *
 * @return allocated object
 */

void *
heim_alloc (
	size_t /*size*/,
	const char */*name*/,
	heim_type_dealloc /*dealloc*/);

/**
 * Append object to array
 *
 * @param array array to add too
 * @param object the object to add
 *
 * @return zero if added, errno otherwise
 */

int
heim_array_append_value (
	heim_array_t /*array*/,
	heim_object_t /*object*/);

/**
 * Get value of element at array index
 *
 * @param array array copy object from
 * @param idx index of object, 0 based, must be smaller then
 *        heim_array_get_length()
 *
 * @return a retained copy of the object
 */

heim_object_t
heim_array_copy_value (
	heim_array_t /*array*/,
	size_t /*idx*/);

/**
 * Allocate an array
 *
 * @return A new allocated array, free with heim_release()
 */

heim_array_t
heim_array_create (void);

/**
 * Delete value at idx
 *
 * @param array the array to modify
 * @param idx the key to delete
 */

void
heim_array_delete_value (
	heim_array_t /*array*/,
	size_t /*idx*/);

/**
 * Filter out entres of array when block return true
 *
 * @param array the array to modify
 * @param block filter block
 */

#ifdef __BLOCKS__
void
heim_array_filter (
	heim_array_t /*array*/,
	int (^block)(heim_object_t));
#endif /* __BLOCKS__ */

/**
 * Filter out entres of array when function return true
 *
 * @param array the array to modify
 * @param fn filter function
 */

void
heim_array_filter_f (
	heim_array_t /*array*/,
	void */*ctx*/,
	heim_array_filter_f_t /*fn*/);

/**
 * Get length of array
 *
 * @param array array to get length of
 *
 * @return length of array
 */

size_t
heim_array_get_length (heim_array_t /*array*/);

/**
 * Get type id of an dict
 *
 * @return the type id
 */

heim_tid_t
heim_array_get_type_id (void);

/**
 * Get value of element at array index
 *
 * @param array array copy object from
 * @param idx index of object, 0 based, must be smaller then
 *        heim_array_get_length()
 *
 * @return a not-retained copy of the object
 */

heim_object_t
heim_array_get_value (
	heim_array_t /*array*/,
	size_t /*idx*/);

/**
 * Insert an object at a given index in an array
 *
 * @param array array to add too
 * @param idx index where to add element (-1 == append, -2 next to last, ...)
 * @param object the object to add
 *
 * @return zero if added, errno otherwise
 */

int
heim_array_insert_value (
	heim_array_t /*array*/,
	size_t /*idx*/,
	heim_object_t /*object*/);

/**
 * Iterate over all objects in array
 *
 * @param array array to iterate over
 * @param fn block to call on each object
 */

#ifdef __BLOCKS__
void
heim_array_iterate (
	heim_array_t /*array*/,
	void (^fn)(heim_object_t, int *));
#endif /* __BLOCKS__ */

/**
 * Iterate over all objects in array
 *
 * @param array array to iterate over
 * @param ctx context passed to fn
 * @param fn function to call on each object
 */

void
heim_array_iterate_f (
	heim_array_t /*array*/,
	void */*ctx*/,
	heim_array_iterator_f_t /*fn*/);

/**
 * Iterate over all objects in array, backwards
 *
 * @param array array to iterate over
 * @param fn block to call on each object
 */

#ifdef __BLOCKS__
void
heim_array_iterate_reverse (
	heim_array_t /*array*/,
	void (^fn)(heim_object_t, int *));
#endif /* __BLOCKS__ */

/**
 * Iterate over all objects in array, backwards
 *
 * @param array array to iterate over
 * @param ctx context passed to fn
 * @param fn function to call on each object
 */

void
heim_array_iterate_reverse_f (
	heim_array_t /*array*/,
	void */*ctx*/,
	heim_array_iterator_f_t /*fn*/);

/**
 * Set value at array index
 *
 * @param array array copy object from
 * @param idx index of object, 0 based, must be smaller then
 *        heim_array_get_length()
 * @param value value to set 
 *
 */

void
heim_array_set_value (
	heim_array_t /*array*/,
	size_t /*idx*/,
	heim_object_t /*value*/);

void
heim_audit_addkv (
	heim_svc_req_desc /*r*/,
	int /*flags*/,
	const char */*k*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 4, 5)));

void
heim_audit_addkv_number (
	heim_svc_req_desc /*r*/,
	const char */*k*/,
	int64_t /*v*/);

void
heim_audit_addkv_object (
	heim_svc_req_desc /*r*/,
	const char */*k*/,
	heim_object_t /*value*/);

void
heim_audit_addkv_timediff (
	heim_svc_req_desc /*r*/,
	const char */*k*/,
	const struct timeval */*start*/,
	const struct timeval */*end*/);

void
heim_audit_addreason (
	heim_svc_req_desc /*r*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 2, 3)));

heim_object_t
heim_audit_getkv (
	heim_svc_req_desc /*r*/,
	const char */*k*/);

void
heim_audit_setkv_bool (
	heim_svc_req_desc /*r*/,
	const char */*k*/,
	int /*v*/);

void
heim_audit_setkv_number (
	heim_svc_req_desc /*r*/,
	const char */*k*/,
	int64_t /*v*/);

void
heim_audit_setkv_object (
	heim_svc_req_desc /*r*/,
	const char */*k*/,
	heim_object_t /*value*/);

void
heim_audit_trail (
	heim_svc_req_desc /*r*/,
	heim_error_code /*ret*/,
	const char */*retname*/);

void
heim_audit_vaddkv (
	heim_svc_req_desc /*r*/,
	int /*flags*/,
	const char */*k*/,
	const char */*fmt*/,
	va_list /*ap*/)
     __attribute__ ((__format__ (__printf__, 4, 0)));

void
heim_audit_vaddreason (
	heim_svc_req_desc /*r*/,
	const char */*fmt*/,
	va_list /*ap*/)
     __attribute__ ((__format__ (__printf__, 2, 0)));

/**
 * Place the current object on the thread's auto-release pool
 *
 * @param ptr object
 */

heim_object_t
heim_auto_release (heim_object_t /*ptr*/);

/**
 * Create thread-specific object auto-release pool
 *
 * Objects placed on the per-thread auto-release pool (with
 * heim_auto_release()) can be released in one fell swoop by calling
 * heim_auto_release_drain().
 */

heim_auto_release_t
heim_auto_release_create (void);

/**
 * Release all objects on the given auto-release pool
 */

void
heim_auto_release_drain (heim_auto_release_t /*autorel*/);

HEIMDAL_MUTEX * HEIM_CALLCONV
heim_base_mutex (void);

/**
 * Call func once and only once
 *
 * @param once pointer to a heim_base_once_t
 * @param ctx context passed to func
 * @param func function to be called
 */

void
heim_base_once_f (
	heim_base_once_t */*once*/,
	void */*ctx*/,
	void (*/*func*/)(void *));

heim_bool_t
heim_bool_create (int /*val*/);

int
heim_bool_val (heim_bool_t /*ptr*/);

void
heim_clear_error_message (heim_context /*context*/);

void
heim_closelog (
	heim_context /*context*/,
	heim_log_facility */*fac*/);

/**
 * Compare two objects, returns 0 if equal, can use used for qsort()
 * and friends.
 *
 * @param a first object to compare
 * @param b first object to compare
 *
 * @return 0 if objects are equal
 */

int
heim_cmp (
	heim_object_t /*a*/,
	heim_object_t /*b*/);

heim_error_code
heim_config_copy (
	heim_context /*context*/,
	heim_config_section */*c*/,
	heim_config_section **/*head*/);

/**
 * Free configuration file section, the result of
 * heim_config_parse_file() and heim_config_parse_file_multi().
 *
 * @param context A Kerberos 5 context
 * @param s the configuration section to free
 *
 * @return returns 0 on successes, otherwise an error code, see
 *          heim_get_error_message()
 *
 * @ingroup heim_support
 */

heim_error_code
heim_config_file_free (
	heim_context /*context*/,
	heim_config_section */*s*/);

/**
 * Free the resulting strings from heim_config-get_strings() and
 * heim_config_vget_strings().
 *
 * @param strings strings to free
 *
 * @ingroup heim_support
 */

void
heim_config_free_strings (char **/*strings*/);

const void *
heim_config_get (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	int /*type*/,
	...);

/**
 * Like heim_config_get_bool() but with a va_list list of
 * configuration selection.
 *
 * Configuration value to a boolean value, where yes/true and any
 * non-zero number means TRUE and other value is FALSE.
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param ... a list of names, terminated with NULL.
 *
 * @return TRUE or FALSE
 *
 * @ingroup heim_support
 */

int
heim_config_get_bool (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	...);

/**
 * heim_config_get_bool_default() will convert the configuration
 * option value to a boolean value, where yes/true and any non-zero
 * number means TRUE and other value is FALSE.
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param def_value the default value to return if no configuration
 *        found in the database.
 * @param ... a list of names, terminated with NULL.
 *
 * @return TRUE or FALSE
 *
 * @ingroup heim_support
 */

int
heim_config_get_bool_default (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	int /*def_value*/,
	...);

heim_config_section *
heim_config_get_entry (
	heim_config_section **/*parent*/,
	const char */*name*/,
	int /*type*/);

int
heim_config_get_int (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	...);

int
heim_config_get_int_default (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	int /*def_value*/,
	...);

/**
 * Get a list of configuration binding list for more processing
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param ... a list of names, terminated with NULL.
 *
 * @return NULL if configuration list is not found, a list otherwise
 *
 * @ingroup heim_support
 */

const heim_config_binding *
heim_config_get_list (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	...);

const void *
heim_config_get_next (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	const heim_config_binding **/*pointer*/,
	int /*type*/,
	...);

/**
 * Returns a "const char *" to a string in the configuration database.
 * The string may not be valid after a reload of the configuration
 * database so a caller should make a local copy if it needs to keep
 * the string.
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param ... a list of names, terminated with NULL.
 *
 * @return NULL if configuration string not found, a string otherwise
 *
 * @ingroup heim_support
 */

const char *
heim_config_get_string (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	...);

/**
 * Like heim_config_get_string(), but instead of returning NULL,
 * instead return a default value.
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param def_value the default value to return if no configuration
 *        found in the database.
 * @param ... a list of names, terminated with NULL.
 *
 * @return a configuration string
 *
 * @ingroup heim_support
 */

const char *
heim_config_get_string_default (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	const char */*def_value*/,
	...);

/**
 * Get a list of configuration strings, free the result with
 * heim_config_free_strings().
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param ... a list of names, terminated with NULL.
 *
 * @return TRUE or FALSE
 *
 * @ingroup heim_support
 */

char **
heim_config_get_strings (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	...);

/**
 * Get the time from the configuration file using a relative time, for example: 1h30s
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param ... a list of names, terminated with NULL.
 *
 * @return parsed the time or -1 on error
 *
 * @ingroup heim_support
 */

time_t
heim_config_get_time (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	...);

/**
 * Get the time from the configuration file using a relative time, for example: 1h30s
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param def_value the default value to return if no configuration
 *        found in the database.
 * @param ... a list of names, terminated with NULL.
 *
 * @return parsed the time (or def_value on parse error)
 *
 * @ingroup heim_support
 */

time_t
heim_config_get_time_default (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	int /*def_value*/,
	...);

/**
 * Parse configuration files in the given directory and add the result
 * into res.  Only files whose names consist only of alphanumeric
 * characters, hyphen, and underscore, will be parsed, though files
 * ending in ".conf" will also be parsed.
 *
 * This interface can be used to parse several configuration directories
 * into one resulting heim_config_section by calling it repeatably.
 *
 * @param context a Kerberos 5 context.
 * @param dname a directory name to a Kerberos configuration file
 * @param res the returned result, must be free with heim_free_config_files().
 * @return Return an error code or 0, see heim_get_error_message().
 *
 * @ingroup heim_support
 */

heim_error_code
heim_config_parse_dir_multi (
	heim_context /*context*/,
	const char */*dname*/,
	heim_config_section **/*res*/);

/**
     * If the fname starts with "~/" parse configuration file in the
     * current users home directory. The behavior can be disabled and
     * enabled by calling heim_set_home_dir_access().
 */

heim_error_code
heim_config_parse_file (
	heim_context /*context*/,
	const char */*fname*/,
	heim_config_section **/*res*/);

/**
 * Parse a configuration file and add the result into res. This
 * interface can be used to parse several configuration files into one
 * resulting heim_config_section by calling it repeatably.
 *
 * @param context a Kerberos 5 context.
 * @param fname a file name to a Kerberos configuration file
 * @param res the returned result, must be free with heim_free_config_files().
 * @return Return an error code or 0, see heim_get_error_message().
 *
 * @ingroup heim_support
 */

heim_error_code
heim_config_parse_file_multi (
	heim_context /*context*/,
	const char */*fname*/,
	heim_config_section **/*res*/);

heim_error_code
heim_config_parse_string_multi (
	heim_context /*context*/,
	const char */*string*/,
	heim_config_section **/*res*/);

const void *
heim_config_vget (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	int /*type*/,
	va_list /*args*/);

/**
 * heim_config_get_bool() will convert the configuration
 * option value to a boolean value, where yes/true and any non-zero
 * number means TRUE and other value is FALSE.
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param args a va_list of arguments
 *
 * @return TRUE or FALSE
 *
 * @ingroup heim_support
 */

int
heim_config_vget_bool (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	va_list /*args*/);

/**
 * Like heim_config_get_bool_default() but with a va_list list of
 * configuration selection.
 *
 * Configuration value to a boolean value, where yes/true and any
 * non-zero number means TRUE and other value is FALSE.
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param def_value the default value to return if no configuration
 *        found in the database.
 * @param args a va_list of arguments
 *
 * @return TRUE or FALSE
 *
 * @ingroup heim_support
 */

int
heim_config_vget_bool_default (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	int /*def_value*/,
	va_list /*args*/);

int
heim_config_vget_int (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	va_list /*args*/);

int
heim_config_vget_int_default (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	int /*def_value*/,
	va_list /*args*/);

/**
 * Get a list of configuration binding list for more processing
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param args a va_list of arguments
 *
 * @return NULL if configuration list is not found, a list otherwise
 *
 * @ingroup heim_support
 */

const heim_config_binding *
heim_config_vget_list (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	va_list /*args*/);

const void *
heim_config_vget_next (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	const heim_config_binding **/*pointer*/,
	int /*type*/,
	va_list /*args*/);

/**
 * Like heim_config_get_string(), but uses a va_list instead of ...
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param args a va_list of arguments
 *
 * @return NULL if configuration string not found, a string otherwise
 *
 * @ingroup heim_support
 */

const char *
heim_config_vget_string (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	va_list /*args*/);

/**
 * Like heim_config_vget_string(), but instead of returning NULL,
 * instead return a default value.
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param def_value the default value to return if no configuration
 *        found in the database.
 * @param args a va_list of arguments
 *
 * @return a configuration string
 *
 * @ingroup heim_support
 */

const char *
heim_config_vget_string_default (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	const char */*def_value*/,
	va_list /*args*/);

/**
 * Get a list of configuration strings, free the result with
 * heim_config_free_strings().
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param args a va_list of arguments
 *
 * @return TRUE or FALSE
 *
 * @ingroup heim_support
 */

char **
heim_config_vget_strings (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	va_list /*args*/);

/**
 * Get the time from the configuration file using a relative time, for example: 1h30s
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param args a va_list of arguments
 *
 * @return parsed the time or -1 on error
 *
 * @ingroup heim_support
 */

time_t
heim_config_vget_time (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	va_list /*args*/);

/**
 * Get the time from the configuration file using a relative time.
 *
 * Like heim_config_get_time_default() but with a va_list list of
 * configuration selection.
 *
 * @param context A Kerberos 5 context.
 * @param c a configuration section, or NULL to use the section from context
 * @param def_value the default value to return if no configuration
 *        found in the database.
 * @param args a va_list of arguments
 *
 * @return parsed the time (or def_value on parse error)
 *
 * @ingroup heim_support
 */

time_t
heim_config_vget_time_default (
	heim_context /*context*/,
	const heim_config_section */*c*/,
	int /*def_value*/,
	va_list /*args*/);

void
heim_context_free (heim_context */*contextp*/);

unsigned int
heim_context_get_homedir_access (heim_context /*context*/);

int
heim_context_get_log_utc (heim_context /*context*/);

const char *
heim_context_get_time_fmt (heim_context /*context*/);

heim_context
heim_context_init (void);

unsigned int
heim_context_set_homedir_access (
	heim_context /*context*/,
	unsigned int /*homedir_access*/);

unsigned int
heim_context_set_log_utc (
	heim_context /*context*/,
	unsigned int /*log_utc*/);

heim_error_code
heim_context_set_time_fmt (
	heim_context /*context*/,
	const char */*fmt*/);

/**
 * Create a data object
 *
 * @param string the string to create, must be an utf8 string
 *
 * @return string object
 */

heim_data_t
heim_data_create (
	const void */*data*/,
	size_t /*length*/);

/**
 * Get the data value of the content.
 *
 * @param data the data object to get the value from
 *
 * @return a heim_octet_string
 */

const heim_octet_string *
heim_data_get_data (heim_data_t /*data*/);

size_t
heim_data_get_length (heim_data_t /*data*/);

const void *
heim_data_get_ptr (heim_data_t /*data*/);

/**
 * Return the type ID of data objects
 *
 * @return type id of data objects
 */

heim_tid_t
heim_data_get_type_id (void);

heim_data_t
heim_data_ref_create (
	const void */*data*/,
	size_t /*length*/,
	heim_data_free_f_t /*dealloc*/);

/**
 * Open a transaction on the given db.
 *
 * @param db    Open DB handle
 * @param error Output error object
 *
 * @return 0 on success, system error otherwise
 *
 * @addtogroup heimbase
 */

int
heim_db_begin (
	heim_db_t /*db*/,
	int /*read_only*/,
	heim_error_t */*error*/);

/**
 * Clone (duplicate) an open DB handle.
 *
 * This is useful for multi-threaded applications.  Applications must
 * synchronize access to any given DB handle.
 *
 * Returns EBUSY if there is an open transaction for the input db.
 *
 * @param db      Open DB handle
 * @param error   Output error object
 *
 * @return a DB handle
 *
 * @addtogroup heimbase
 */

heim_db_t
heim_db_clone (
	heim_db_t /*db*/,
	heim_error_t */*error*/);

/**
 * Commit an open transaction on the given db.
 *
 * @param db    Open DB handle
 * @param error Output error object
 *
 * @return 0 on success, system error otherwise
 *
 * @addtogroup heimbase
 */

int
heim_db_commit (
	heim_db_t /*db*/,
	heim_error_t */*error*/);

/**
 * Lookup a key's value in the DB.
 *
 * Returns 0 on success, -1 if the key does not exist in the DB, or a
 * system error number on failure.
 *
 * @param db    Open DB handle
 * @param key   Key
 * @param error Output error object
 *
 * @return the value (retained), if there is one for the given key
 *
 * @addtogroup heimbase
 */

heim_data_t
heim_db_copy_value (
	heim_db_t /*db*/,
	heim_string_t /*table*/,
	heim_data_t /*key*/,
	heim_error_t */*error*/);

/**
 * Open a database of the given dbtype.
 *
 * Database type names can be composed of one or more pseudo-DB types
 * and one concrete DB type joined with a '+' between each.  For
 * example: "transaction+bdb" might be a Berkeley DB with a layer above
 * that provides transactions.
 *
 * Options may be provided via a dict (an associative array).  Existing
 * options include:
 *
 *  - "create", with any value (create if DB doesn't exist)
 *  - "exclusive", with any value (exclusive create)
 *  - "truncate", with any value (truncate the DB)
 *  - "read-only", with any value (disallow writes)
 *  - "sync", with any value (make transactions durable)
 *  - "journal-name", with a string value naming a journal file name
 *
 * @param dbtype  Name of DB type
 * @param dbname  Name of DB (likely a file path)
 * @param options Options dict
 * @param db      Output open DB handle
 * @param error   Output error  object
 *
 * @return a DB handle
 *
 * @addtogroup heimbase
 */

heim_db_t
heim_db_create (
	const char */*dbtype*/,
	const char */*dbname*/,
	heim_dict_t /*options*/,
	heim_error_t */*error*/);

/**
 * Delete a key and its value from the DB
 *
 *
 * @param db    Open DB handle
 * @param key   Key
 * @param error Output error object
 *
 * @return 0 on success, system error otherwise
 *
 * @addtogroup heimbase
 */

int
heim_db_delete_key (
	heim_db_t /*db*/,
	heim_string_t /*table*/,
	heim_data_t /*key*/,
	heim_error_t */*error*/);

/**
 * Get type ID of heim_db_t objects.
 *
 * @addtogroup heimbase
 */

heim_tid_t
heim_db_get_type_id (void);

/**
 * Iterate a callback function over keys and values from a DB.
 *
 * @param db        Open DB handle
 * @param iter_data Callback function's private data
 * @param iter_f    Callback function, called once per-key/value pair
 * @param error     Output error object
 *
 * @addtogroup heimbase
 */

void
heim_db_iterate_f (
	heim_db_t /*db*/,
	heim_string_t /*table*/,
	void */*iter_data*/,
	heim_db_iterator_f_t /*iter_f*/,
	heim_error_t */*error*/);

/**
 heim_db_register * @brief Registers a DB type for use with heim_db_create().
 *
 * @param dbtype Name of DB type
 * @param data   Private data argument to the dbtype's openf method
 * @param plugin Structure with DB type methods (function pointers)
 *
 * Backends that provide begin/commit/rollback methods must provide ACID
 * semantics.
 *
 * The registered DB type will have ACID semantics for backends that do
 * not provide begin/commit/rollback methods but do provide lock/unlock
 * and rdjournal/wrjournal methods (using a replay log journalling
 * scheme).
 *
 * If the registered DB type does not natively provide read vs. write
 * transaction isolation but does provide a lock method then the DB will
 * provide read/write transaction isolation.
 *
 * @return ENOMEM on failure, else 0.
 *
 * @addtogroup heimbase
 */

int
heim_db_register (
	const char */*dbtype*/,
	void */*data*/,
	struct heim_db_type */*plugin*/);

/**
 * Rollback an open transaction on the given db.
 *
 * @param db    Open DB handle
 * @param error Output error object
 *
 * @return 0 on success, system error otherwise
 *
 * @addtogroup heimbase
 */

int
heim_db_rollback (
	heim_db_t /*db*/,
	heim_error_t */*error*/);

/**
 * Set a key's value in the DB.
 *
 * @param db    Open DB handle
 * @param key   Key
 * @param value Value (if NULL the key will be deleted, but empty is OK)
 * @param error Output error object
 *
 * @return 0 on success, system error otherwise
 *
 * @addtogroup heimbase
 */

int
heim_db_set_value (
	heim_db_t /*db*/,
	heim_string_t /*table*/,
	heim_data_t /*key*/,
	heim_data_t /*value*/,
	heim_error_t */*error*/);

void
heim_debug (
	heim_context /*context*/,
	int /*level*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 3, 4)));

/**
 * If used require wrapped in autorelease pool
 */

heim_string_t
heim_description (heim_object_t /*ptr*/);

/**
 * Search for element in hash table
 *
 * @value dict the dict to search in
 * @value key the key to search for
 *
 * @return a retained copy of the value for key or NULL if not found
 */

heim_object_t
heim_dict_copy_value (
	heim_dict_t /*dict*/,
	heim_object_t /*key*/);

/**
 * Allocate an array
 *
 * @return A new allocated array, free with heim_release()
 */

heim_dict_t
heim_dict_create (size_t /*size*/);

/**
 * Delete element with key key
 *
 * @value dict the dict to delete from
 * @value key the key to delete
 */

void
heim_dict_delete_key (
	heim_dict_t /*dict*/,
	heim_object_t /*key*/);

/**
 * Get type id of an dict
 *
 * @return the type id
 */

heim_tid_t
heim_dict_get_type_id (void);

/**
 * Search for element in hash table
 *
 * @value dict the dict to search in
 * @value key the key to search for
 *
 * @return a not-retained copy of the value for key or NULL if not found
 */

heim_object_t
heim_dict_get_value (
	heim_dict_t /*dict*/,
	heim_object_t /*key*/);

/**
 * Do something for each element
 *
 * @value dict the dict to interate over
 * @value func the function to search for
 */

#ifdef __BLOCKS__
void
heim_dict_iterate (
	heim_dict_t /*dict*/,
	void (^func)(heim_object_t, heim_object_t));
#endif /* __BLOCKS__ */

/**
 * Do something for each element
 *
 * @value dict the dict to interate over
 * @value func the function to search for
 * @value arg argument to func
 */

void
heim_dict_iterate_f (
	heim_dict_t /*dict*/,
	void */*arg*/,
	heim_dict_iterator_f_t /*func*/);

/**
 * Add key and value to dict
 *
 * @value dict the dict to add too
 * @value key the key to add
 * @value value the value to add
 *
 * @return 0 if added, errno if not
 */

int
heim_dict_set_value (
	heim_dict_t /*dict*/,
	heim_object_t /*key*/,
	heim_object_t /*value*/);

heim_error_code
heim_enomem (heim_context /*context*/);

heim_error_t
heim_error_append (
	heim_error_t /*top*/,
	heim_error_t /*append*/);

heim_string_t
heim_error_copy_string (heim_error_t /*error*/);

heim_error_t
heim_error_create (
	int /*error_code*/,
	const char */*fmt*/,
	...)
     HEIMDAL_PRINTF_ATTRIBUTE((__printf__, 2, 3));

heim_error_t
heim_error_create_enomem (void);

void
heim_error_create_opt (
	heim_error_t */*error*/,
	int /*error_code*/,
	const char */*fmt*/,
	...)
     HEIMDAL_PRINTF_ATTRIBUTE((__printf__, 3, 4));

heim_error_t
heim_error_createv (
	int /*error_code*/,
	const char */*fmt*/,
	va_list /*ap*/)
     HEIMDAL_PRINTF_ATTRIBUTE((__printf__, 2, 0));

int
heim_error_get_code (heim_error_t /*error*/);

/**
 * Internal function to expand tokens in paths.
 *
 * Params:
 *
 * @context   A heim_context
 * @path_in   The path to expand tokens from
 * @filepath  True if this is a filesystem path (converts slashes to
 *            backslashes on Windows)
 * @ppath_out The expanded path
 * @...       Variable number of pairs of strings, the first of each
 *            being a token (e.g., "luser") and the second a string to
 *            replace it with.  The list is terminated by a NULL.
 */

heim_error_code
heim_expand_path_tokens (
	heim_context /*context*/,
	const char */*path_in*/,
	int /*filepath*/,
	char **/*ppath_out*/,
	...);

/**
 * Internal function to expand tokens in paths.
 *
 * Inputs:
 *
 * @context   A heim_context
 * @path_in   The path to expand tokens from
 * @filepath  True if this is a filesystem path (converts slashes to
 *            backslashes on Windows)
 * @ppath_out The expanded path
 * @ap        A NULL-terminated va_list of pairs of strings, the first of each
 *            being a token (e.g., "luser") and the second a string to replace
 *            it with.
 * 
 * Outputs:
 *
 * @ppath_out Path with expanded tokens (caller must free() this)
 */

heim_error_code
heim_expand_path_tokensv (
	heim_context /*context*/,
	const char */*path_in*/,
	int /*filepath*/,
	char **/*ppath_out*/,
	va_list /*ap*/);

void
heim_free_config_files (char **/*filenames*/);

void
heim_free_error_message (
	heim_context /*context*/,
	const char */*msg*/);

heim_log_facility *
heim_get_debug_dest (heim_context /*context*/);

heim_error_code
heim_get_default_config_files (
	const char */*def*/,
	const char */*envvar*/,
	char ***/*pfilenames*/);

const char *
heim_get_error_message (
	heim_context /*context*/,
	heim_error_code /*code*/);

const char *
heim_get_error_string (heim_context /*context*/);

/**
 * Get hash value of object
 *
 * @param object object to get hash value for
 *
 * @return a hash value
 */

uintptr_t
heim_get_hash (heim_object_t /*ptr*/);

heim_log_facility *
heim_get_log_dest (heim_context /*context*/);

/**
 * Get type ID of object
 *
 * @param object object to get type id of
 *
 * @return type id of object
 */

heim_tid_t
heim_get_tid (heim_object_t /*ptr*/);

heim_log_facility *
heim_get_warn_dest (heim_context /*context*/);

heim_error_code
heim_have_debug (
	heim_context /*context*/,
	int /*level*/);

int
heim_have_error_string (heim_context /*context*/);

heim_error_code
heim_initlog (
	heim_context /*context*/,
	const char */*program*/,
	heim_log_facility **/*fac*/);

heim_string_t
heim_json_copy_serialize (
	heim_object_t /*obj*/,
	heim_json_flags_t /*flags*/,
	heim_error_t */*error*/);

heim_object_t
heim_json_create (
	const char */*string*/,
	size_t /*max_depth*/,
	heim_json_flags_t /*flags*/,
	heim_error_t */*error*/);

heim_object_t
heim_json_create_with_bytes (
	const void */*data*/,
	size_t /*length*/,
	size_t /*max_depth*/,
	heim_json_flags_t /*flags*/,
	heim_error_t */*error*/);

int
heim_json_eq (
	heim_object_t /*a*/,
	heim_object_t /*b*/);

/**
 * Load plugins (new system) for the given module @module from the given
 * directory @paths.
 *
 * Inputs:
 *
 * @context A heim_context
 * @module Name of plugin module (typically "krb5")
 * @paths Array of directory paths where to look
 */

void
heim_load_plugins (
	heim_context /*context*/,
	const char */*module*/,
	const char **/*paths*/);

int
heim_locale_is_utf8 (void);

heim_error_code
heim_log (
	heim_context /*context*/,
	heim_log_facility */*fac*/,
	int /*level*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 4, 5)));

heim_error_code
heim_log_msg (
	heim_context /*context*/,
	heim_log_facility */*fac*/,
	int /*level*/,
	char **/*reply*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 5, 6)));

heim_log_facility *
heim_log_ref (heim_log_facility */*fac*/);

heim_null_t
heim_null_create (void);

/**
 * Create a number object
 *
 * @param the number to contain in the object
 *
 * @return a number object
 */

heim_number_t
heim_number_create (int64_t /*number*/);

/**
 * Get the int value of the content
 *
 * @param number the number object to get the value from
 *
 * @return an int
 */

int
heim_number_get_int (heim_number_t /*number*/);

int64_t
heim_number_get_long (heim_number_t /*number*/);

/**
 * Return the type ID of number objects
 *
 * @return type id of number objects
 */

heim_tid_t
heim_number_get_type_id (void);

heim_error_code
heim_openlog (
	heim_context /*context*/,
	const char */*program*/,
	const char **/*specs*/,
	heim_log_facility **/*fac*/);

/**
 * Get a node in a tree by path, with retained reference
 *
 * @param ptr tree
 * @param error error (output)
 * @param ... NULL-terminated va_list of heim_object_ts that form a path
 *
 * @return retained object if found
 *
 * @addtogroup heimbase
 */

heim_object_t
heim_path_copy (
	heim_object_t /*ptr*/,
	heim_error_t */*error*/,
	...);

/**
 * Create a path in a heim_object_t tree
 *
 * @param ptr the tree
 * @param size the size of the heim_dict_t nodes to be created
 * @param leaf leaf node to be added, if any
 * @param error error (output)
 * @param ... NULL-terminated list of path component objects
 *
 * Create a path of heim_dict_t interior nodes in a given heim_object_t
 * tree, as necessary, and set/replace a leaf, if given (if leaf is NULL
 * then the leaf is not deleted).
 *
 * @return 0 on success, else a system error
 *
 * @addtogroup heimbase
 */

int
heim_path_create (
	heim_object_t /*ptr*/,
	size_t /*size*/,
	heim_object_t /*leaf*/,
	heim_error_t */*error*/,
	...);

/**
 * Delete leaf node named by a path in a heim_object_t tree
 *
 * @param ptr the tree
 * @param error error (output)
 * @param ap NULL-terminated list of path component objects
 *
 * @addtogroup heimbase
 */

void
heim_path_delete (
	heim_object_t /*ptr*/,
	heim_error_t */*error*/,
	...);

/**
 * Get a node in a tree by path
 *
 * @param ptr tree
 * @param error error (output)
 * @param ... NULL-terminated va_list of heim_object_ts that form a path
 *
 * @return object (not retained) if found
 *
 * @addtogroup heimbase
 */

heim_object_t
heim_path_get (
	heim_object_t /*ptr*/,
	heim_error_t */*error*/,
	...);

/**
 * Get a node in a tree by path, with retained reference
 *
 * @param ptr tree
 * @param error error (output)
 * @param ap NULL-terminated va_list of heim_object_ts that form a path
 *
 * @return retained object if found
 *
 * @addtogroup heimbase
 */

heim_object_t
heim_path_vcopy (
	heim_object_t /*ptr*/,
	heim_error_t */*error*/,
	va_list /*ap*/);

/**
 * Create a path in a heim_object_t tree
 *
 * @param ptr the tree
 * @param size the size of the heim_dict_t nodes to be created
 * @param leaf leaf node to be added, if any
 * @param error error (output)
 * @param ap NULL-terminated of path component objects
 *
 * Create a path of heim_dict_t interior nodes in a given heim_object_t
 * tree, as necessary, and set/replace a leaf, if given (if leaf is NULL
 * then the leaf is not deleted).
 *
 * @return 0 on success, else a system error
 *
 * @addtogroup heimbase
 */

int
heim_path_vcreate (
	heim_object_t /*ptr*/,
	size_t /*size*/,
	heim_object_t /*leaf*/,
	heim_error_t */*error*/,
	va_list /*ap*/);

/**
 * Delete leaf node named by a path in a heim_object_t tree
 *
 * @param ptr the tree
 * @param error error (output)
 * @param ap NULL-terminated list of path component objects
 *
 * @addtogroup heimbase
 */

void
heim_path_vdelete (
	heim_object_t /*ptr*/,
	heim_error_t */*error*/,
	va_list /*ap*/);

/**
 * Get a node in a heim_object tree by path
 *
 * @param ptr tree
 * @param error error (output)
 * @param ap NULL-terminated va_list of heim_object_ts that form a path
 *
 * @return object (not retained) if found
 *
 * @addtogroup heimbase
 */

heim_object_t
heim_path_vget (
	heim_object_t /*ptr*/,
	heim_error_t */*error*/,
	va_list /*ap*/);

/**
 * Register a plugin symbol name of specific type.
 * @param context a Keberos context
 * @param module name of plugin module (e.g., "krb5")
 * @param name name of plugin symbol (e.g., "krb5_plugin_kuserok")
 * @param ftable a pointer to a function pointer table
 * @return In case of error a non zero error com_err error is returned
 * and the Kerberos error string is set.
 *
 * @ingroup heim_support
 */

heim_error_code
heim_plugin_register (
	heim_context /*context*/,
	heim_pcontext /*pcontext*/,
	const char */*module*/,
	const char */*name*/,
	const void */*ftable*/);

/**
 * Run plugins for the given @module (e.g., "krb5") and @name (e.g.,
 * "kuserok").  Specifically, the @func is invoked once per-plugin with
 * four arguments: the @context, the plugin symbol value (a pointer to a
 * struct whose first three fields are the same as common_plugin_ftable),
 * a context value produced by the plugin's init method, and @userctx.
 *
 * @func should unpack arguments for a plugin function and invoke it
 * with arguments taken from @userctx.  @func should save plugin
 * outputs, if any, in @userctx.
 *
 * All loaded and registered plugins are invoked via @func until @func
 * returns something other than @nohandle.  Plugins that have nothing to
 * do for the given arguments should return the same value as @nohandle.
 *
 * Inputs:
 *
 * @context     A heim_context
 * @pcontext    A context for the plugin, such as a krb5_context
 * @module      Name of module (typically "krb5")
 * @name        Name of pluggable interface (e.g., "kuserok")
 * @min_version Lowest acceptable plugin minor version number
 * @flags       Flags (none defined at this time)
 * @nohandle    Flags (none defined at this time)
 * @userctx     Callback data for the callback function @func
 * @func        A callback function, invoked once per-plugin
 *
 * Outputs: None, other than the return value and such outputs as are
 *          gathered by @func.
 */

heim_error_code
heim_plugin_run_f (
	heim_context /*context*/,
	heim_pcontext /*pcontext*/,
	const struct heim_plugin_data */*caller*/,
	int /*flags*/,
	int32_t /*nohandle*/,
	void */*userctx*/,
	int32_t (HEIM_LIB_CALL *func)(void *, const void *, void *, void *));

heim_error_code
heim_prepend_config_files (
	const char */*filelist*/,
	char **/*pq*/,
	char ***/*ret_pp*/);

heim_error_code
heim_prepend_config_files_default (
	const char */*prepend*/,
	const char */*def*/,
	const char */*envvar*/,
	char ***/*pfilenames*/);

void
heim_prepend_error_message (
	heim_context /*context*/,
	heim_error_code /*ret*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 3, 4)));

/**
 * Release object, free if reference count reaches zero
 *
 * @param object to be released
 */

void
heim_release (void */*ptr*/);

/**
 * Retain object (i.e., take a reference)
 *
 * @param object to be released, NULL is ok
 *
 * @return the same object as passed in
 */

heim_object_t
heim_retain (heim_object_t /*ptr*/);

heim_error_code
heim_set_config_files (
	heim_context /*context*/,
	char **/*filenames*/,
	heim_config_binding **/*res*/);

heim_error_code
heim_set_debug_dest (
	heim_context /*context*/,
	heim_log_facility */*fac*/);

void
heim_set_error_message (
	heim_context /*context*/,
	heim_error_code /*ret*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 3, 4)));

heim_error_code
heim_set_log_dest (
	heim_context /*context*/,
	heim_log_facility */*fac*/);

heim_error_code
heim_set_warn_dest (
	heim_context /*context*/,
	heim_log_facility */*fac*/);

/**
 * Dump a heimbase object to stderr (useful from the debugger!)
 *
 * @param obj object to dump using JSON or JSON-like format
 *
 * @addtogroup heimbase
 */

void
heim_show (heim_object_t /*obj*/);

/**
 * Create a string object
 *
 * @param string the string to create, must be an utf8 string
 *
 * @return string object
 */

heim_string_t
heim_string_create (const char */*string*/);

/**
 * Create a string object
 *
 * @param string the string to create, must be an utf8 string
 * @param len the length of the string
 *
 * @return string object
 */

heim_string_t
heim_string_create_with_bytes (
	const void */*data*/,
	size_t /*len*/);

/**
 * Create a string object using a format string
 *
 * @param fmt format string
 * @param ...
 *
 * @return string object
 */

heim_string_t
heim_string_create_with_format (
	const char */*fmt*/,
	...);

/**
 * Return the type ID of string objects
 *
 * @return type id of string objects
 */

heim_tid_t
heim_string_get_type_id (void);

/**
 * Get the string value of the content.
 *
 * @param string the string object to get the value from
 *
 * @return a utf8 string
 */

const char *
heim_string_get_utf8 (heim_string_t /*string*/);

/**
 * Create a string object without copying the source.
 *
 * @param string the string to referenced, must be UTF-8
 * @param dealloc the function to use to release the referece to the string
 *
 * @return string object
 */

heim_string_t
heim_string_ref_create (
	const char */*string*/,
	heim_string_free_f_t /*dealloc*/);

/**
 * Unload plugins of the given @module name.
 *
 * Params:
 *
 * @module Name of module whose plusins to unload.
 */

void
heim_unload_plugins (
	heim_context /*context*/,
	const char */*module*/);

void
heim_vdebug (
	heim_context /*context*/,
	int /*level*/,
	const char */*fmt*/,
	va_list /*ap*/)
     __attribute__ ((__format__ (__printf__, 3, 0)));

heim_error_code
heim_vlog (
	heim_context /*context*/,
	heim_log_facility */*fac*/,
	int /*level*/,
	const char */*fmt*/,
	va_list /*ap*/)
     __attribute__ ((__format__ (__printf__, 4, 0)));

heim_error_code
heim_vlog_msg (
	heim_context /*context*/,
	heim_log_facility */*fac*/,
	char **/*reply*/,
	int /*level*/,
	const char */*fmt*/,
	va_list /*ap*/)
     __attribute__ ((__format__ (__printf__, 5, 0)));

void
heim_vprepend_error_message (
	heim_context /*context*/,
	heim_error_code /*ret*/,
	const char */*fmt*/,
	va_list /*args*/)
     __attribute__ ((__format__ (__printf__, 3, 0)));

void
heim_vset_error_message (
	heim_context /*context*/,
	heim_error_code /*ret*/,
	const char */*fmt*/,
	va_list /*args*/)
     __attribute__ ((__format__ (__printf__, 3, 0)));

/**
 * Log a warning to the log, default stderr, include the error from
 * the last failure.
 *
 * @param context A Kerberos 5 context.
 * @param code error code of the last error
 * @param fmt message to print
 * @param ap arguments
 *
 * @ingroup heim_error
 */

heim_error_code
heim_vwarn (
	heim_context /*context*/,
	heim_error_code /*code*/,
	const char */*fmt*/,
	va_list /*ap*/)
     __attribute__ ((__format__ (__printf__, 3, 0)));

/**
 * Log a warning to the log, default stderr.
 *
 * @param context A Kerberos 5 context.
 * @param fmt message to print
 * @param ap arguments
 *
 * @ingroup heim_error
 */

heim_error_code
heim_vwarnx (
	heim_context /*context*/,
	const char */*fmt*/,
	va_list /*ap*/)
     __attribute__ ((__format__ (__printf__, 2, 0)));

/**
 * Log a warning to the log, default stderr, include the error from
 * the last failure.
 *
 * @param context A Kerberos 5 context.
 * @param code error code of the last error
 * @param fmt message to print
 *
 * @ingroup heim_error
 */

heim_error_code
heim_warn (
	heim_context /*context*/,
	heim_error_code /*code*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 3, 4)));

/**
 * Log a warning to the log, default stderr.
 *
 * @param context A Kerberos 5 context.
 * @param fmt message to print
 *
 * @ingroup heim_error
 */

heim_error_code
heim_warnx (
	heim_context /*context*/,
	const char */*fmt*/,
	...)
     __attribute__ ((__format__ (__printf__, 2, 3)));

void
initialize_heim_error_table (void);

void
initialize_heim_error_table_r (struct et_list **/*list*/);

#ifdef __cplusplus
}
#endif

#endif /* DOXY */
#endif /* __heimbase_protos_h__ */
