/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/krb5/k5e1_err.et */
/* $Id$ */

#ifndef __k5e1_err_h__
#define __k5e1_err_h__

struct et_list;

void initialize_k5e1_error_table_r(struct et_list **);

void initialize_k5e1_error_table(void);
#define init_k5e1_err_tbl initialize_k5e1_error_table

typedef enum k5e1_error_number{
	KRB5_DCC_CANNOT_CREATE = -1750600188,
	KRB5_KCC_INVALID_ANCHOR = -1750600187,
	KRB5_KCC_UNKNOWN_VERSION = -1750600186,
	KRB5_KCC_INVALID_UID = -1750600185
} k5e1_error_number;

#define ERROR_TABLE_BASE_k5e1 -1750600192

#define COM_ERR_BINDDOMAIN_k5e1 "heim_com_err-1750600192"

#endif /* __k5e1_err_h__ */
