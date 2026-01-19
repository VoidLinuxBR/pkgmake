#include "config.h"
/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/krb5/k5e1_err.et */
/* $Id$ */

#include <stddef.h>
#include <com_err.h>
#include "k5e1_err.h"

#define N_(x) (x)

static const char *const k5e1_error_strings[] = {
	/* 000 */ "Reserved k5e1 error (0)",
	/* 001 */ "Reserved k5e1 error (1)",
	/* 002 */ "Reserved k5e1 error (2)",
	/* 003 */ "Reserved k5e1 error (3)",
	/* 004 */ N_("Can't create new subsidiary cache"),
	/* 005 */ N_("Invalid keyring anchor name"),
	/* 006 */ N_("Unknown keyring collection version"),
	/* 007 */ N_("Invalid UID in persistent keyring name"),
	NULL
};

#define num_errors 8

void initialize_k5e1_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, k5e1_error_strings, num_errors, ERROR_TABLE_BASE_k5e1);
}

void initialize_k5e1_error_table(void)
{
    init_error_table(k5e1_error_strings, ERROR_TABLE_BASE_k5e1, num_errors);
}
