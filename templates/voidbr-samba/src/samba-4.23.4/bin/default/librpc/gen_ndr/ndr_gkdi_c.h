#include "librpc/rpc/dcerpc.h"
#include "bin/default/librpc/gen_ndr/gkdi.h"
#ifndef _HEADER_RPC_gkdi
#define _HEADER_RPC_gkdi

extern const struct ndr_interface_table ndr_table_gkdi;

struct tevent_req *dcerpc_gkdi_GetKey_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct gkdi_GetKey *r);
NTSTATUS dcerpc_gkdi_GetKey_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_gkdi_GetKey_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct gkdi_GetKey *r);
struct tevent_req *dcerpc_gkdi_GetKey_send(TALLOC_CTX *mem_ctx,
					   struct tevent_context *ev,
					   struct dcerpc_binding_handle *h,
					   uint32_t _target_sd_len /* [in]  */,
					   uint8_t *_target_sd /* [in] [ref,size_is(target_sd_len)] */,
					   struct GUID *_root_key_id /* [in] [unique] */,
					   int32_t _l0_key_id /* [in]  */,
					   int32_t _l1_key_id /* [in]  */,
					   int32_t _l2_key_id /* [in]  */,
					   uint32_t *_out_len /* [out] [ref] */,
					   uint8_t **_out /* [out] [ref,size_is(,*out_len)] */);
NTSTATUS dcerpc_gkdi_GetKey_recv(struct tevent_req *req,
				 TALLOC_CTX *mem_ctx,
				 HRESULT *result);
NTSTATUS dcerpc_gkdi_GetKey(struct dcerpc_binding_handle *h,
			    TALLOC_CTX *mem_ctx,
			    uint32_t _target_sd_len /* [in]  */,
			    uint8_t *_target_sd /* [in] [ref,size_is(target_sd_len)] */,
			    struct GUID *_root_key_id /* [in] [unique] */,
			    int32_t _l0_key_id /* [in]  */,
			    int32_t _l1_key_id /* [in]  */,
			    int32_t _l2_key_id /* [in]  */,
			    uint32_t *_out_len /* [out] [ref] */,
			    uint8_t **_out /* [out] [ref,size_is(,*out_len)] */,
			    HRESULT *result);

#endif /* _HEADER_RPC_gkdi */
