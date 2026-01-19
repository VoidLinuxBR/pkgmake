#include "config.h"
/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/gssapi/spnego/negoex_err.et */
/* $Id$ */

#include <stddef.h>
#include <com_err.h>
#include "negoex_err.h"

#define N_(x) (x)

static const char *const ngex_error_strings[] = {
	/* 000 */ N_("Invalid NegoEx signature"),
	/* 001 */ N_("Invalid NegoEx message type"),
	/* 002 */ N_("Invalid NegoEx message size"),
	/* 003 */ N_("Invalid NegoEx conversation ID"),
	/* 004 */ N_("NegoEx authentication scheme not found"),
	/* 005 */ N_("Missing NegoEx negotiate message"),
	/* 006 */ N_("Missing NegoEx authentication protocol request message"),
	/* 007 */ N_("No mutually supported NegoEx authentication schemes"),
	/* 008 */ N_("No NegoEx verify key"),
	/* 009 */ N_("Unknown NegoEx checksum scheme"),
	/* 010 */ N_("Invalid NegoEx checksum"),
	/* 011 */ N_("Unsupported critical NegoEx extension"),
	/* 012 */ N_("Unsupported NegoEx version"),
	/* 013 */ N_("NegoEx message out of sequence"),
	NULL
};

#define num_errors 14

void initialize_ngex_error_table_r(struct et_list **list)
{
    initialize_error_table_r(list, ngex_error_strings, num_errors, ERROR_TABLE_BASE_ngex);
}

void initialize_ngex_error_table(void)
{
    init_error_table(ngex_error_strings, ERROR_TABLE_BASE_ngex, num_errors);
}
