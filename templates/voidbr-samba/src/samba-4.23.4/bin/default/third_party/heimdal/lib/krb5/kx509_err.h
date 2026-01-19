/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/krb5/kx509_err.et */

#ifndef __kx509_err_h__
#define __kx509_err_h__

struct et_list;

void initialize_kx59_error_table_r(struct et_list **);

void initialize_kx59_error_table(void);
#define init_kx59_err_tbl initialize_kx59_error_table

typedef enum kx59_error_number{
	KX509_ERR_NONE = -1758544384,
	KX509_ERR_CLNT_FATAL = -1758544383,
	KX509_ERR_CLNT_SOLVABLE = -1758544382,
	KX509_ERR_TIMEOUT = -1758544381,
	KX509_ERR_SRV_FATAL = -1758544380,
	KX509_ERR_SRV_OVERLOADED = -1758544379
} kx59_error_number;

#define ERROR_TABLE_BASE_kx59 -1758544384

#define COM_ERR_BINDDOMAIN_kx59 "heim_com_err-1758544384"

#endif /* __kx509_err_h__ */
