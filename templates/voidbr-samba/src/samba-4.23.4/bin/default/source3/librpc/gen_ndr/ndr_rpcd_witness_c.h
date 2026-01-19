#include "librpc/rpc/dcerpc.h"
#include "bin/default/source3/librpc/gen_ndr/rpcd_witness.h"
#ifndef _HEADER_RPC_rpcd_witness
#define _HEADER_RPC_rpcd_witness

extern const struct ndr_interface_table ndr_table_rpcd_witness;

struct tevent_req *dcerpc_rpcd_witness_registration_decode_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct rpcd_witness_registration_decode *r);
NTSTATUS dcerpc_rpcd_witness_registration_decode_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_rpcd_witness_registration_decode_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct rpcd_witness_registration_decode *r);
struct tevent_req *dcerpc_rpcd_witness_registration_decode_send(TALLOC_CTX *mem_ctx,
								struct tevent_context *ev,
								struct dcerpc_binding_handle *h,
								struct rpcd_witness_registration _reg /* [in]  */);
NTSTATUS dcerpc_rpcd_witness_registration_decode_recv(struct tevent_req *req,
						      TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_rpcd_witness_registration_decode(struct dcerpc_binding_handle *h,
						 TALLOC_CTX *mem_ctx,
						 struct rpcd_witness_registration _reg /* [in]  */);

struct tevent_req *dcerpc_rpcd_witness_registration_update_decode_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct rpcd_witness_registration_update_decode *r);
NTSTATUS dcerpc_rpcd_witness_registration_update_decode_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_rpcd_witness_registration_update_decode_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct rpcd_witness_registration_update_decode *r);
struct tevent_req *dcerpc_rpcd_witness_registration_update_decode_send(TALLOC_CTX *mem_ctx,
								       struct tevent_context *ev,
								       struct dcerpc_binding_handle *h,
								       struct rpcd_witness_registration_updateB _update /* [in]  */);
NTSTATUS dcerpc_rpcd_witness_registration_update_decode_recv(struct tevent_req *req,
							     TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_rpcd_witness_registration_update_decode(struct dcerpc_binding_handle *h,
							TALLOC_CTX *mem_ctx,
							struct rpcd_witness_registration_updateB _update /* [in]  */);

#endif /* _HEADER_RPC_rpcd_witness */
