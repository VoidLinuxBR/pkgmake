/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/gssapi/spnego/negoex_err.et */
/* $Id$ */

#ifndef __negoex_err_h__
#define __negoex_err_h__

struct et_list;

void initialize_ngex_error_table_r(struct et_list **);

void initialize_ngex_error_table(void);
#define init_ngex_err_tbl initialize_ngex_error_table

typedef enum ngex_error_number{
	NEGOEX_INVALID_MESSAGE_SIGNATURE = -1575489024,
	NEGOEX_INVALID_MESSAGE_TYPE = -1575489023,
	NEGOEX_INVALID_MESSAGE_SIZE = -1575489022,
	NEGOEX_INVALID_CONVERSATION_ID = -1575489021,
	NEGOEX_AUTH_SCHEME_NOT_FOUND = -1575489020,
	NEGOEX_MISSING_NEGO_MESSAGE = -1575489019,
	NEGOEX_MISSING_AP_REQUEST_MESSAGE = -1575489018,
	NEGOEX_NO_AVAILABLE_MECHS = -1575489017,
	NEGOEX_NO_VERIFY_KEY = -1575489016,
	NEGOEX_UNKNOWN_CHECKSUM_SCHEME = -1575489015,
	NEGOEX_INVALID_CHECKSUM = -1575489014,
	NEGOEX_UNSUPPORTED_CRITICAL_EXTENSION = -1575489013,
	NEGOEX_UNSUPPORTED_VERSION = -1575489012,
	NEGOEX_MESSAGE_OUT_OF_SEQUENCE = -1575489011
} ngex_error_number;

#define ERROR_TABLE_BASE_ngex -1575489024

#define COM_ERR_BINDDOMAIN_ngex "heim_com_err-1575489024"

#endif /* __negoex_err_h__ */
