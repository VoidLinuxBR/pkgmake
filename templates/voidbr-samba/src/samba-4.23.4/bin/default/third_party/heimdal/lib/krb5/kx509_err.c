#include "config.h"
/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/krb5/kx509_err.et */

#include <stddef.h>
#include <com_err.h>
#include "kx509_err.h"

#define N_(x) (x)

static const char *const kx59_error_strings[] = {
	/* 000 */ N_("Kx509 success"),
	/* 001 */ N_("Kx509 request error, possibly unsupported version"),
	/* 002 */ N_("Kx509 request error such as expired credentials"),
	/* 003 */ N_("Kx509 request timed out"),
	/* 004 */ N_("Permanent server problem"),
	/* 005 */ N_("Kx509 server is overloaded"),
	NULL
};

#define num_errors 6

void initialize_kx59_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, kx59_error_strings, num_errors, ERROR_TABLE_BASE_kx59);
}

void initialize_kx59_error_table(void)
{
    init_error_table(kx59_error_strings, ERROR_TABLE_BASE_kx59, num_errors);
}
