#include "librpc/rpc/dcerpc.h"
#include "bin/default/librpc/gen_ndr/winbind.h"
#ifndef _HEADER_RPC_winbind
#define _HEADER_RPC_winbind

extern const struct ndr_interface_table ndr_table_winbind;

struct tevent_req *dcerpc_wbint_Ping_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_Ping *r);
NTSTATUS dcerpc_wbint_Ping_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_Ping_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_Ping *r);
struct tevent_req *dcerpc_wbint_Ping_send(TALLOC_CTX *mem_ctx,
					  struct tevent_context *ev,
					  struct dcerpc_binding_handle *h,
					  uint32_t _in_data /* [in]  */,
					  uint32_t *_out_data /* [out] [ref] */);
NTSTATUS dcerpc_wbint_Ping_recv(struct tevent_req *req,
				TALLOC_CTX *mem_ctx,
				NTSTATUS *result);
NTSTATUS dcerpc_wbint_Ping(struct dcerpc_binding_handle *h,
			   TALLOC_CTX *mem_ctx,
			   uint32_t _in_data /* [in]  */,
			   uint32_t *_out_data /* [out] [ref] */,
			   NTSTATUS *result);

struct tevent_req *dcerpc_wbint_LookupSid_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_LookupSid *r);
NTSTATUS dcerpc_wbint_LookupSid_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_LookupSid_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_LookupSid *r);
struct tevent_req *dcerpc_wbint_LookupSid_send(TALLOC_CTX *mem_ctx,
					       struct tevent_context *ev,
					       struct dcerpc_binding_handle *h,
					       struct dom_sid *_sid /* [in] [ref] */,
					       enum lsa_SidType *_type /* [out] [ref] */,
					       const char **_domain /* [out] [charset(UTF8),ref] */,
					       const char **_name /* [out] [charset(UTF8),ref] */);
NTSTATUS dcerpc_wbint_LookupSid_recv(struct tevent_req *req,
				     TALLOC_CTX *mem_ctx,
				     NTSTATUS *result);
NTSTATUS dcerpc_wbint_LookupSid(struct dcerpc_binding_handle *h,
				TALLOC_CTX *mem_ctx,
				struct dom_sid *_sid /* [in] [ref] */,
				enum lsa_SidType *_type /* [out] [ref] */,
				const char **_domain /* [out] [charset(UTF8),ref] */,
				const char **_name /* [out] [charset(UTF8),ref] */,
				NTSTATUS *result);

struct tevent_req *dcerpc_wbint_LookupSids_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_LookupSids *r);
NTSTATUS dcerpc_wbint_LookupSids_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_LookupSids_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_LookupSids *r);
struct tevent_req *dcerpc_wbint_LookupSids_send(TALLOC_CTX *mem_ctx,
						struct tevent_context *ev,
						struct dcerpc_binding_handle *h,
						struct lsa_SidArray *_sids /* [in] [ref] */,
						struct lsa_RefDomainList *_domains /* [out] [ref] */,
						struct lsa_TransNameArray *_names /* [out] [ref] */);
NTSTATUS dcerpc_wbint_LookupSids_recv(struct tevent_req *req,
				      TALLOC_CTX *mem_ctx,
				      NTSTATUS *result);
NTSTATUS dcerpc_wbint_LookupSids(struct dcerpc_binding_handle *h,
				 TALLOC_CTX *mem_ctx,
				 struct lsa_SidArray *_sids /* [in] [ref] */,
				 struct lsa_RefDomainList *_domains /* [out] [ref] */,
				 struct lsa_TransNameArray *_names /* [out] [ref] */,
				 NTSTATUS *result);

struct tevent_req *dcerpc_wbint_LookupName_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_LookupName *r);
NTSTATUS dcerpc_wbint_LookupName_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_LookupName_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_LookupName *r);
struct tevent_req *dcerpc_wbint_LookupName_send(TALLOC_CTX *mem_ctx,
						struct tevent_context *ev,
						struct dcerpc_binding_handle *h,
						const char *_domain /* [in] [charset(UTF8),ref] */,
						const char *_name /* [in] [charset(UTF8),ref] */,
						uint32_t _flags /* [in]  */,
						enum lsa_SidType *_type /* [out] [ref] */,
						struct dom_sid *_sid /* [out] [ref] */);
NTSTATUS dcerpc_wbint_LookupName_recv(struct tevent_req *req,
				      TALLOC_CTX *mem_ctx,
				      NTSTATUS *result);
NTSTATUS dcerpc_wbint_LookupName(struct dcerpc_binding_handle *h,
				 TALLOC_CTX *mem_ctx,
				 const char *_domain /* [in] [charset(UTF8),ref] */,
				 const char *_name /* [in] [charset(UTF8),ref] */,
				 uint32_t _flags /* [in]  */,
				 enum lsa_SidType *_type /* [out] [ref] */,
				 struct dom_sid *_sid /* [out] [ref] */,
				 NTSTATUS *result);

struct tevent_req *dcerpc_wbint_Sids2UnixIDs_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_Sids2UnixIDs *r);
NTSTATUS dcerpc_wbint_Sids2UnixIDs_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_Sids2UnixIDs_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_Sids2UnixIDs *r);
struct tevent_req *dcerpc_wbint_Sids2UnixIDs_send(TALLOC_CTX *mem_ctx,
						  struct tevent_context *ev,
						  struct dcerpc_binding_handle *h,
						  struct lsa_RefDomainList *_domains /* [in] [ref] */,
						  struct wbint_TransIDArray *_ids /* [in,out] [ref] */);
NTSTATUS dcerpc_wbint_Sids2UnixIDs_recv(struct tevent_req *req,
					TALLOC_CTX *mem_ctx,
					NTSTATUS *result);
NTSTATUS dcerpc_wbint_Sids2UnixIDs(struct dcerpc_binding_handle *h,
				   TALLOC_CTX *mem_ctx,
				   struct lsa_RefDomainList *_domains /* [in] [ref] */,
				   struct wbint_TransIDArray *_ids /* [in,out] [ref] */,
				   NTSTATUS *result);

struct tevent_req *dcerpc_wbint_UnixIDs2Sids_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_UnixIDs2Sids *r);
NTSTATUS dcerpc_wbint_UnixIDs2Sids_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_UnixIDs2Sids_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_UnixIDs2Sids *r);
struct tevent_req *dcerpc_wbint_UnixIDs2Sids_send(TALLOC_CTX *mem_ctx,
						  struct tevent_context *ev,
						  struct dcerpc_binding_handle *h,
						  const char *_domain_name /* [in] [charset(UTF8),ref] */,
						  struct dom_sid _domain_sid /* [in]  */,
						  uint32_t _num_ids /* [in]  */,
						  struct unixid *_xids /* [in,out]  */,
						  struct dom_sid *_sids /* [out]  */);
NTSTATUS dcerpc_wbint_UnixIDs2Sids_recv(struct tevent_req *req,
					TALLOC_CTX *mem_ctx,
					NTSTATUS *result);
NTSTATUS dcerpc_wbint_UnixIDs2Sids(struct dcerpc_binding_handle *h,
				   TALLOC_CTX *mem_ctx,
				   const char *_domain_name /* [in] [charset(UTF8),ref] */,
				   struct dom_sid _domain_sid /* [in]  */,
				   uint32_t _num_ids /* [in]  */,
				   struct unixid *_xids /* [in,out]  */,
				   struct dom_sid *_sids /* [out]  */,
				   NTSTATUS *result);

struct tevent_req *dcerpc_wbint_AllocateUid_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_AllocateUid *r);
NTSTATUS dcerpc_wbint_AllocateUid_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_AllocateUid_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_AllocateUid *r);
struct tevent_req *dcerpc_wbint_AllocateUid_send(TALLOC_CTX *mem_ctx,
						 struct tevent_context *ev,
						 struct dcerpc_binding_handle *h,
						 uint64_t *_uid /* [out] [ref] */);
NTSTATUS dcerpc_wbint_AllocateUid_recv(struct tevent_req *req,
				       TALLOC_CTX *mem_ctx,
				       NTSTATUS *result);
NTSTATUS dcerpc_wbint_AllocateUid(struct dcerpc_binding_handle *h,
				  TALLOC_CTX *mem_ctx,
				  uint64_t *_uid /* [out] [ref] */,
				  NTSTATUS *result);

struct tevent_req *dcerpc_wbint_AllocateGid_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_AllocateGid *r);
NTSTATUS dcerpc_wbint_AllocateGid_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_AllocateGid_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_AllocateGid *r);
struct tevent_req *dcerpc_wbint_AllocateGid_send(TALLOC_CTX *mem_ctx,
						 struct tevent_context *ev,
						 struct dcerpc_binding_handle *h,
						 uint64_t *_gid /* [out] [ref] */);
NTSTATUS dcerpc_wbint_AllocateGid_recv(struct tevent_req *req,
				       TALLOC_CTX *mem_ctx,
				       NTSTATUS *result);
NTSTATUS dcerpc_wbint_AllocateGid(struct dcerpc_binding_handle *h,
				  TALLOC_CTX *mem_ctx,
				  uint64_t *_gid /* [out] [ref] */,
				  NTSTATUS *result);

struct tevent_req *dcerpc_wbint_GetNssInfo_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_GetNssInfo *r);
NTSTATUS dcerpc_wbint_GetNssInfo_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_GetNssInfo_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_GetNssInfo *r);
struct tevent_req *dcerpc_wbint_GetNssInfo_send(TALLOC_CTX *mem_ctx,
						struct tevent_context *ev,
						struct dcerpc_binding_handle *h,
						struct wbint_userinfo *_info /* [in,out] [ref] */);
NTSTATUS dcerpc_wbint_GetNssInfo_recv(struct tevent_req *req,
				      TALLOC_CTX *mem_ctx,
				      NTSTATUS *result);
NTSTATUS dcerpc_wbint_GetNssInfo(struct dcerpc_binding_handle *h,
				 TALLOC_CTX *mem_ctx,
				 struct wbint_userinfo *_info /* [in,out] [ref] */,
				 NTSTATUS *result);

struct tevent_req *dcerpc_wbint_LookupUserAliases_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_LookupUserAliases *r);
NTSTATUS dcerpc_wbint_LookupUserAliases_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_LookupUserAliases_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_LookupUserAliases *r);
struct tevent_req *dcerpc_wbint_LookupUserAliases_send(TALLOC_CTX *mem_ctx,
						       struct tevent_context *ev,
						       struct dcerpc_binding_handle *h,
						       struct wbint_SidArray *_sids /* [in] [ref] */,
						       struct wbint_RidArray *_rids /* [out] [ref] */);
NTSTATUS dcerpc_wbint_LookupUserAliases_recv(struct tevent_req *req,
					     TALLOC_CTX *mem_ctx,
					     NTSTATUS *result);
NTSTATUS dcerpc_wbint_LookupUserAliases(struct dcerpc_binding_handle *h,
					TALLOC_CTX *mem_ctx,
					struct wbint_SidArray *_sids /* [in] [ref] */,
					struct wbint_RidArray *_rids /* [out] [ref] */,
					NTSTATUS *result);

struct tevent_req *dcerpc_wbint_LookupUserGroups_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_LookupUserGroups *r);
NTSTATUS dcerpc_wbint_LookupUserGroups_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_LookupUserGroups_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_LookupUserGroups *r);
struct tevent_req *dcerpc_wbint_LookupUserGroups_send(TALLOC_CTX *mem_ctx,
						      struct tevent_context *ev,
						      struct dcerpc_binding_handle *h,
						      struct dom_sid *_sid /* [in] [ref] */,
						      struct wbint_SidArray *_sids /* [out] [ref] */);
NTSTATUS dcerpc_wbint_LookupUserGroups_recv(struct tevent_req *req,
					    TALLOC_CTX *mem_ctx,
					    NTSTATUS *result);
NTSTATUS dcerpc_wbint_LookupUserGroups(struct dcerpc_binding_handle *h,
				       TALLOC_CTX *mem_ctx,
				       struct dom_sid *_sid /* [in] [ref] */,
				       struct wbint_SidArray *_sids /* [out] [ref] */,
				       NTSTATUS *result);

struct tevent_req *dcerpc_wbint_QuerySequenceNumber_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_QuerySequenceNumber *r);
NTSTATUS dcerpc_wbint_QuerySequenceNumber_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_QuerySequenceNumber_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_QuerySequenceNumber *r);
struct tevent_req *dcerpc_wbint_QuerySequenceNumber_send(TALLOC_CTX *mem_ctx,
							 struct tevent_context *ev,
							 struct dcerpc_binding_handle *h,
							 uint32_t *_sequence /* [out] [ref] */);
NTSTATUS dcerpc_wbint_QuerySequenceNumber_recv(struct tevent_req *req,
					       TALLOC_CTX *mem_ctx,
					       NTSTATUS *result);
NTSTATUS dcerpc_wbint_QuerySequenceNumber(struct dcerpc_binding_handle *h,
					  TALLOC_CTX *mem_ctx,
					  uint32_t *_sequence /* [out] [ref] */,
					  NTSTATUS *result);

struct tevent_req *dcerpc_wbint_LookupGroupMembers_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_LookupGroupMembers *r);
NTSTATUS dcerpc_wbint_LookupGroupMembers_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_LookupGroupMembers_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_LookupGroupMembers *r);
struct tevent_req *dcerpc_wbint_LookupGroupMembers_send(TALLOC_CTX *mem_ctx,
							struct tevent_context *ev,
							struct dcerpc_binding_handle *h,
							struct dom_sid *_sid /* [in] [ref] */,
							enum lsa_SidType _type /* [in]  */,
							struct wbint_Principals *_members /* [out] [ref] */);
NTSTATUS dcerpc_wbint_LookupGroupMembers_recv(struct tevent_req *req,
					      TALLOC_CTX *mem_ctx,
					      NTSTATUS *result);
NTSTATUS dcerpc_wbint_LookupGroupMembers(struct dcerpc_binding_handle *h,
					 TALLOC_CTX *mem_ctx,
					 struct dom_sid *_sid /* [in] [ref] */,
					 enum lsa_SidType _type /* [in]  */,
					 struct wbint_Principals *_members /* [out] [ref] */,
					 NTSTATUS *result);

struct tevent_req *dcerpc_wbint_LookupAliasMembers_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_LookupAliasMembers *r);
NTSTATUS dcerpc_wbint_LookupAliasMembers_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_LookupAliasMembers_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_LookupAliasMembers *r);
struct tevent_req *dcerpc_wbint_LookupAliasMembers_send(TALLOC_CTX *mem_ctx,
							struct tevent_context *ev,
							struct dcerpc_binding_handle *h,
							struct dom_sid *_sid /* [in] [ref] */,
							enum lsa_SidType _type /* [in]  */,
							struct wbint_SidArray *_sids /* [out] [ref] */);
NTSTATUS dcerpc_wbint_LookupAliasMembers_recv(struct tevent_req *req,
					      TALLOC_CTX *mem_ctx,
					      NTSTATUS *result);
NTSTATUS dcerpc_wbint_LookupAliasMembers(struct dcerpc_binding_handle *h,
					 TALLOC_CTX *mem_ctx,
					 struct dom_sid *_sid /* [in] [ref] */,
					 enum lsa_SidType _type /* [in]  */,
					 struct wbint_SidArray *_sids /* [out] [ref] */,
					 NTSTATUS *result);

struct tevent_req *dcerpc_wbint_QueryGroupList_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_QueryGroupList *r);
NTSTATUS dcerpc_wbint_QueryGroupList_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_QueryGroupList_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_QueryGroupList *r);
struct tevent_req *dcerpc_wbint_QueryGroupList_send(TALLOC_CTX *mem_ctx,
						    struct tevent_context *ev,
						    struct dcerpc_binding_handle *h,
						    struct wbint_Principals *_groups /* [out] [ref] */);
NTSTATUS dcerpc_wbint_QueryGroupList_recv(struct tevent_req *req,
					  TALLOC_CTX *mem_ctx,
					  NTSTATUS *result);
NTSTATUS dcerpc_wbint_QueryGroupList(struct dcerpc_binding_handle *h,
				     TALLOC_CTX *mem_ctx,
				     struct wbint_Principals *_groups /* [out] [ref] */,
				     NTSTATUS *result);

struct tevent_req *dcerpc_wbint_QueryUserRidList_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_QueryUserRidList *r);
NTSTATUS dcerpc_wbint_QueryUserRidList_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_QueryUserRidList_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_QueryUserRidList *r);
struct tevent_req *dcerpc_wbint_QueryUserRidList_send(TALLOC_CTX *mem_ctx,
						      struct tevent_context *ev,
						      struct dcerpc_binding_handle *h,
						      struct wbint_RidArray *_rids /* [out] [ref] */);
NTSTATUS dcerpc_wbint_QueryUserRidList_recv(struct tevent_req *req,
					    TALLOC_CTX *mem_ctx,
					    NTSTATUS *result);
NTSTATUS dcerpc_wbint_QueryUserRidList(struct dcerpc_binding_handle *h,
				       TALLOC_CTX *mem_ctx,
				       struct wbint_RidArray *_rids /* [out] [ref] */,
				       NTSTATUS *result);

struct tevent_req *dcerpc_wbint_DsGetDcName_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_DsGetDcName *r);
NTSTATUS dcerpc_wbint_DsGetDcName_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_DsGetDcName_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_DsGetDcName *r);
struct tevent_req *dcerpc_wbint_DsGetDcName_send(TALLOC_CTX *mem_ctx,
						 struct tevent_context *ev,
						 struct dcerpc_binding_handle *h,
						 const char *_domain_name /* [in] [charset(UTF8),ref] */,
						 struct GUID *_domain_guid /* [in] [unique] */,
						 const char *_site_name /* [in] [charset(UTF8),unique] */,
						 uint32_t _flags /* [in]  */,
						 struct netr_DsRGetDCNameInfo **_dc_info /* [out] [ref] */);
NTSTATUS dcerpc_wbint_DsGetDcName_recv(struct tevent_req *req,
				       TALLOC_CTX *mem_ctx,
				       NTSTATUS *result);
NTSTATUS dcerpc_wbint_DsGetDcName(struct dcerpc_binding_handle *h,
				  TALLOC_CTX *mem_ctx,
				  const char *_domain_name /* [in] [charset(UTF8),ref] */,
				  struct GUID *_domain_guid /* [in] [unique] */,
				  const char *_site_name /* [in] [charset(UTF8),unique] */,
				  uint32_t _flags /* [in]  */,
				  struct netr_DsRGetDCNameInfo **_dc_info /* [out] [ref] */,
				  NTSTATUS *result);

struct tevent_req *dcerpc_wbint_LookupRids_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_LookupRids *r);
NTSTATUS dcerpc_wbint_LookupRids_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_LookupRids_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_LookupRids *r);
struct tevent_req *dcerpc_wbint_LookupRids_send(TALLOC_CTX *mem_ctx,
						struct tevent_context *ev,
						struct dcerpc_binding_handle *h,
						struct dom_sid *_domain_sid /* [in] [ref] */,
						struct wbint_RidArray *_rids /* [in] [ref] */,
						const char **_domain_name /* [out] [charset(UTF8),ref] */,
						struct wbint_Principals *_names /* [out] [ref] */);
NTSTATUS dcerpc_wbint_LookupRids_recv(struct tevent_req *req,
				      TALLOC_CTX *mem_ctx,
				      NTSTATUS *result);
NTSTATUS dcerpc_wbint_LookupRids(struct dcerpc_binding_handle *h,
				 TALLOC_CTX *mem_ctx,
				 struct dom_sid *_domain_sid /* [in] [ref] */,
				 struct wbint_RidArray *_rids /* [in] [ref] */,
				 const char **_domain_name /* [out] [charset(UTF8),ref] */,
				 struct wbint_Principals *_names /* [out] [ref] */,
				 NTSTATUS *result);

struct tevent_req *dcerpc_wbint_CheckMachineAccount_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_CheckMachineAccount *r);
NTSTATUS dcerpc_wbint_CheckMachineAccount_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_CheckMachineAccount_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_CheckMachineAccount *r);
struct tevent_req *dcerpc_wbint_CheckMachineAccount_send(TALLOC_CTX *mem_ctx,
							 struct tevent_context *ev,
							 struct dcerpc_binding_handle *h);
NTSTATUS dcerpc_wbint_CheckMachineAccount_recv(struct tevent_req *req,
					       TALLOC_CTX *mem_ctx,
					       NTSTATUS *result);
NTSTATUS dcerpc_wbint_CheckMachineAccount(struct dcerpc_binding_handle *h,
					  TALLOC_CTX *mem_ctx,
					  NTSTATUS *result);

struct tevent_req *dcerpc_wbint_ChangeMachineAccount_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_ChangeMachineAccount *r);
NTSTATUS dcerpc_wbint_ChangeMachineAccount_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_ChangeMachineAccount_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_ChangeMachineAccount *r);
struct tevent_req *dcerpc_wbint_ChangeMachineAccount_send(TALLOC_CTX *mem_ctx,
							  struct tevent_context *ev,
							  struct dcerpc_binding_handle *h,
							  const char *_dcname /* [in] [charset(UTF8),unique] */);
NTSTATUS dcerpc_wbint_ChangeMachineAccount_recv(struct tevent_req *req,
						TALLOC_CTX *mem_ctx,
						NTSTATUS *result);
NTSTATUS dcerpc_wbint_ChangeMachineAccount(struct dcerpc_binding_handle *h,
					   TALLOC_CTX *mem_ctx,
					   const char *_dcname /* [in] [charset(UTF8),unique] */,
					   NTSTATUS *result);

struct tevent_req *dcerpc_wbint_PingDc_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_PingDc *r);
NTSTATUS dcerpc_wbint_PingDc_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_PingDc_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_PingDc *r);
struct tevent_req *dcerpc_wbint_PingDc_send(TALLOC_CTX *mem_ctx,
					    struct tevent_context *ev,
					    struct dcerpc_binding_handle *h,
					    const char **_dcname /* [out] [charset(UTF8),ref] */);
NTSTATUS dcerpc_wbint_PingDc_recv(struct tevent_req *req,
				  TALLOC_CTX *mem_ctx,
				  NTSTATUS *result);
NTSTATUS dcerpc_wbint_PingDc(struct dcerpc_binding_handle *h,
			     TALLOC_CTX *mem_ctx,
			     const char **_dcname /* [out] [charset(UTF8),ref] */,
			     NTSTATUS *result);

struct tevent_req *dcerpc_wbint_ListTrustedDomains_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_ListTrustedDomains *r);
NTSTATUS dcerpc_wbint_ListTrustedDomains_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_ListTrustedDomains_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_ListTrustedDomains *r);
struct tevent_req *dcerpc_wbint_ListTrustedDomains_send(TALLOC_CTX *mem_ctx,
							struct tevent_context *ev,
							struct dcerpc_binding_handle *h,
							const char *_client_name /* [in] [charset(UTF8),ref] */,
							uint64_t _client_pid /* [in]  */,
							struct netr_DomainTrustList *_domains /* [out] [ref] */);
NTSTATUS dcerpc_wbint_ListTrustedDomains_recv(struct tevent_req *req,
					      TALLOC_CTX *mem_ctx,
					      NTSTATUS *result);
NTSTATUS dcerpc_wbint_ListTrustedDomains(struct dcerpc_binding_handle *h,
					 TALLOC_CTX *mem_ctx,
					 const char *_client_name /* [in] [charset(UTF8),ref] */,
					 uint64_t _client_pid /* [in]  */,
					 struct netr_DomainTrustList *_domains /* [out] [ref] */,
					 NTSTATUS *result);

struct tevent_req *dcerpc_wbint_PamAuth_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_PamAuth *r);
NTSTATUS dcerpc_wbint_PamAuth_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_PamAuth_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_PamAuth *r);
struct tevent_req *dcerpc_wbint_PamAuth_send(TALLOC_CTX *mem_ctx,
					     struct tevent_context *ev,
					     struct dcerpc_binding_handle *h,
					     const char *_client_name /* [in] [charset(UTF8),ref] */,
					     uint64_t _client_pid /* [in]  */,
					     uint32_t _flags /* [in]  */,
					     struct wbint_AuthUserInfo *_info /* [in] [ref] */,
					     struct wbint_SidArray *_require_membership_of_sid /* [in] [ref] */,
					     struct wbint_Validation *_validation /* [out] [ref] */);
NTSTATUS dcerpc_wbint_PamAuth_recv(struct tevent_req *req,
				   TALLOC_CTX *mem_ctx,
				   NTSTATUS *result);
NTSTATUS dcerpc_wbint_PamAuth(struct dcerpc_binding_handle *h,
			      TALLOC_CTX *mem_ctx,
			      const char *_client_name /* [in] [charset(UTF8),ref] */,
			      uint64_t _client_pid /* [in]  */,
			      uint32_t _flags /* [in]  */,
			      struct wbint_AuthUserInfo *_info /* [in] [ref] */,
			      struct wbint_SidArray *_require_membership_of_sid /* [in] [ref] */,
			      struct wbint_Validation *_validation /* [out] [ref] */,
			      NTSTATUS *result);

struct tevent_req *dcerpc_wbint_PamAuthCrap_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_PamAuthCrap *r);
NTSTATUS dcerpc_wbint_PamAuthCrap_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_PamAuthCrap_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_PamAuthCrap *r);
struct tevent_req *dcerpc_wbint_PamAuthCrap_send(TALLOC_CTX *mem_ctx,
						 struct tevent_context *ev,
						 struct dcerpc_binding_handle *h,
						 const char *_client_name /* [in] [charset(UTF8),ref] */,
						 uint64_t _client_pid /* [in]  */,
						 uint32_t _flags /* [in]  */,
						 const char *_user /* [in] [charset(UTF8),ref] */,
						 const char *_domain /* [in] [charset(UTF8),ref] */,
						 const char *_workstation /* [in] [charset(UTF8),ref] */,
						 DATA_BLOB _lm_resp /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
						 DATA_BLOB _nt_resp /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
						 DATA_BLOB _chal /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
						 uint32_t _logon_parameters /* [in]  */,
						 struct wbint_SidArray *_require_membership_of_sid /* [in] [ref] */,
						 uint8_t *_authoritative /* [out] [ref] */,
						 struct wbint_PamAuthCrapValidation *_validation /* [out] [ref] */);
NTSTATUS dcerpc_wbint_PamAuthCrap_recv(struct tevent_req *req,
				       TALLOC_CTX *mem_ctx,
				       NTSTATUS *result);
NTSTATUS dcerpc_wbint_PamAuthCrap(struct dcerpc_binding_handle *h,
				  TALLOC_CTX *mem_ctx,
				  const char *_client_name /* [in] [charset(UTF8),ref] */,
				  uint64_t _client_pid /* [in]  */,
				  uint32_t _flags /* [in]  */,
				  const char *_user /* [in] [charset(UTF8),ref] */,
				  const char *_domain /* [in] [charset(UTF8),ref] */,
				  const char *_workstation /* [in] [charset(UTF8),ref] */,
				  DATA_BLOB _lm_resp /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
				  DATA_BLOB _nt_resp /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
				  DATA_BLOB _chal /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
				  uint32_t _logon_parameters /* [in]  */,
				  struct wbint_SidArray *_require_membership_of_sid /* [in] [ref] */,
				  uint8_t *_authoritative /* [out] [ref] */,
				  struct wbint_PamAuthCrapValidation *_validation /* [out] [ref] */,
				  NTSTATUS *result);

struct tevent_req *dcerpc_wbint_PamLogOff_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_PamLogOff *r);
NTSTATUS dcerpc_wbint_PamLogOff_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_PamLogOff_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_PamLogOff *r);
struct tevent_req *dcerpc_wbint_PamLogOff_send(TALLOC_CTX *mem_ctx,
					       struct tevent_context *ev,
					       struct dcerpc_binding_handle *h,
					       const char *_client_name /* [in] [charset(UTF8),ref] */,
					       uint64_t _client_pid /* [in]  */,
					       uint32_t _flags /* [in]  */,
					       const char *_user /* [in] [charset(UTF8),ref] */,
					       const char *_krb5ccname /* [in] [charset(UTF8),ref] */,
					       uint64_t _uid /* [in]  */);
NTSTATUS dcerpc_wbint_PamLogOff_recv(struct tevent_req *req,
				     TALLOC_CTX *mem_ctx,
				     NTSTATUS *result);
NTSTATUS dcerpc_wbint_PamLogOff(struct dcerpc_binding_handle *h,
				TALLOC_CTX *mem_ctx,
				const char *_client_name /* [in] [charset(UTF8),ref] */,
				uint64_t _client_pid /* [in]  */,
				uint32_t _flags /* [in]  */,
				const char *_user /* [in] [charset(UTF8),ref] */,
				const char *_krb5ccname /* [in] [charset(UTF8),ref] */,
				uint64_t _uid /* [in]  */,
				NTSTATUS *result);

struct tevent_req *dcerpc_wbint_PamAuthCrapChangePassword_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_PamAuthCrapChangePassword *r);
NTSTATUS dcerpc_wbint_PamAuthCrapChangePassword_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_PamAuthCrapChangePassword_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_PamAuthCrapChangePassword *r);
struct tevent_req *dcerpc_wbint_PamAuthCrapChangePassword_send(TALLOC_CTX *mem_ctx,
							       struct tevent_context *ev,
							       struct dcerpc_binding_handle *h,
							       const char *_client_name /* [in] [charset(UTF8),ref] */,
							       uint64_t _client_pid /* [in]  */,
							       const char *_user /* [in] [charset(UTF8),ref] */,
							       const char *_domain /* [in] [charset(UTF8),ref] */,
							       DATA_BLOB _new_nt_pswd /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
							       DATA_BLOB _old_nt_hash_enc /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
							       DATA_BLOB _new_lm_pswd /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
							       DATA_BLOB _old_lm_hash_enc /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */);
NTSTATUS dcerpc_wbint_PamAuthCrapChangePassword_recv(struct tevent_req *req,
						     TALLOC_CTX *mem_ctx,
						     NTSTATUS *result);
NTSTATUS dcerpc_wbint_PamAuthCrapChangePassword(struct dcerpc_binding_handle *h,
						TALLOC_CTX *mem_ctx,
						const char *_client_name /* [in] [charset(UTF8),ref] */,
						uint64_t _client_pid /* [in]  */,
						const char *_user /* [in] [charset(UTF8),ref] */,
						const char *_domain /* [in] [charset(UTF8),ref] */,
						DATA_BLOB _new_nt_pswd /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
						DATA_BLOB _old_nt_hash_enc /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
						DATA_BLOB _new_lm_pswd /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
						DATA_BLOB _old_lm_hash_enc /* [in] [flag(LIBNDR_FLAG_IS_SECRET)] */,
						NTSTATUS *result);

struct tevent_req *dcerpc_wbint_PamAuthChangePassword_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_PamAuthChangePassword *r);
NTSTATUS dcerpc_wbint_PamAuthChangePassword_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_PamAuthChangePassword_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_PamAuthChangePassword *r);
struct tevent_req *dcerpc_wbint_PamAuthChangePassword_send(TALLOC_CTX *mem_ctx,
							   struct tevent_context *ev,
							   struct dcerpc_binding_handle *h,
							   const char *_client_name /* [in] [charset(UTF8),ref] */,
							   uint64_t _client_pid /* [in]  */,
							   uint32_t _flags /* [in]  */,
							   const char *_user /* [in] [charset(UTF8),ref] */,
							   const char *_old_password /* [in] [charset(UTF8),flag(LIBNDR_FLAG_IS_SECRET),ref] */,
							   const char *_new_password /* [in] [charset(UTF8),flag(LIBNDR_FLAG_IS_SECRET),ref] */,
							   struct samr_DomInfo1 **_dominfo /* [out] [ref] */,
							   enum samPwdChangeReason *_reject_reason /* [out] [ref] */);
NTSTATUS dcerpc_wbint_PamAuthChangePassword_recv(struct tevent_req *req,
						 TALLOC_CTX *mem_ctx,
						 NTSTATUS *result);
NTSTATUS dcerpc_wbint_PamAuthChangePassword(struct dcerpc_binding_handle *h,
					    TALLOC_CTX *mem_ctx,
					    const char *_client_name /* [in] [charset(UTF8),ref] */,
					    uint64_t _client_pid /* [in]  */,
					    uint32_t _flags /* [in]  */,
					    const char *_user /* [in] [charset(UTF8),ref] */,
					    const char *_old_password /* [in] [charset(UTF8),flag(LIBNDR_FLAG_IS_SECRET),ref] */,
					    const char *_new_password /* [in] [charset(UTF8),flag(LIBNDR_FLAG_IS_SECRET),ref] */,
					    struct samr_DomInfo1 **_dominfo /* [out] [ref] */,
					    enum samPwdChangeReason *_reject_reason /* [out] [ref] */,
					    NTSTATUS *result);

struct tevent_req *dcerpc_wbint_InitConnection_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_InitConnection *r);
NTSTATUS dcerpc_wbint_InitConnection_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_InitConnection_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_InitConnection *r);
struct tevent_req *dcerpc_wbint_InitConnection_send(TALLOC_CTX *mem_ctx,
						    struct tevent_context *ev,
						    struct dcerpc_binding_handle *h,
						    const char *_dcname /* [in] [charset(UTF8),ref] */,
						    const char **_name /* [out] [charset(UTF8),ref] */,
						    const char **_alt_name /* [out] [charset(UTF8),ref] */,
						    struct dom_sid *_sid /* [out] [ref] */,
						    enum DomainInfoFlags *_flags /* [out] [ref] */);
NTSTATUS dcerpc_wbint_InitConnection_recv(struct tevent_req *req,
					  TALLOC_CTX *mem_ctx,
					  NTSTATUS *result);
NTSTATUS dcerpc_wbint_InitConnection(struct dcerpc_binding_handle *h,
				     TALLOC_CTX *mem_ctx,
				     const char *_dcname /* [in] [charset(UTF8),ref] */,
				     const char **_name /* [out] [charset(UTF8),ref] */,
				     const char **_alt_name /* [out] [charset(UTF8),ref] */,
				     struct dom_sid *_sid /* [out] [ref] */,
				     enum DomainInfoFlags *_flags /* [out] [ref] */,
				     NTSTATUS *result);

struct tevent_req *dcerpc_wbint_NormalizeNameMap_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_NormalizeNameMap *r);
NTSTATUS dcerpc_wbint_NormalizeNameMap_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_NormalizeNameMap_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_NormalizeNameMap *r);
struct tevent_req *dcerpc_wbint_NormalizeNameMap_send(TALLOC_CTX *mem_ctx,
						      struct tevent_context *ev,
						      struct dcerpc_binding_handle *h,
						      const char *_domain_name /* [in] [charset(UTF8),ref] */,
						      const char *_name /* [in] [charset(UTF8),ref] */,
						      const char **_mapped_name /* [out] [charset(UTF8),ref] */);
NTSTATUS dcerpc_wbint_NormalizeNameMap_recv(struct tevent_req *req,
					    TALLOC_CTX *mem_ctx,
					    NTSTATUS *result);
NTSTATUS dcerpc_wbint_NormalizeNameMap(struct dcerpc_binding_handle *h,
				       TALLOC_CTX *mem_ctx,
				       const char *_domain_name /* [in] [charset(UTF8),ref] */,
				       const char *_name /* [in] [charset(UTF8),ref] */,
				       const char **_mapped_name /* [out] [charset(UTF8),ref] */,
				       NTSTATUS *result);

struct tevent_req *dcerpc_wbint_NormalizeNameUnmap_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct wbint_NormalizeNameUnmap *r);
NTSTATUS dcerpc_wbint_NormalizeNameUnmap_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_wbint_NormalizeNameUnmap_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct wbint_NormalizeNameUnmap *r);
struct tevent_req *dcerpc_wbint_NormalizeNameUnmap_send(TALLOC_CTX *mem_ctx,
							struct tevent_context *ev,
							struct dcerpc_binding_handle *h,
							const char *_name /* [in] [charset(UTF8),ref] */,
							const char **_unmapped_name /* [out] [charset(UTF8),ref] */);
NTSTATUS dcerpc_wbint_NormalizeNameUnmap_recv(struct tevent_req *req,
					      TALLOC_CTX *mem_ctx,
					      NTSTATUS *result);
NTSTATUS dcerpc_wbint_NormalizeNameUnmap(struct dcerpc_binding_handle *h,
					 TALLOC_CTX *mem_ctx,
					 const char *_name /* [in] [charset(UTF8),ref] */,
					 const char **_unmapped_name /* [out] [charset(UTF8),ref] */,
					 NTSTATUS *result);

struct tevent_req *dcerpc_winbind_SamLogon_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct winbind_SamLogon *r);
NTSTATUS dcerpc_winbind_SamLogon_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_winbind_SamLogon_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct winbind_SamLogon *r);
/*
 * The following functions are skipped because
 * an [out] argument validation is not a pointer or array:
 *
 * dcerpc_winbind_SamLogon_send()
 * dcerpc_winbind_SamLogon_recv()
 * dcerpc_winbind_SamLogon()
 */

struct tevent_req *dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct winbind_DsrUpdateReadOnlyServerDnsRecords *r);
NTSTATUS dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct winbind_DsrUpdateReadOnlyServerDnsRecords *r);
struct tevent_req *dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords_send(TALLOC_CTX *mem_ctx,
									 struct tevent_context *ev,
									 struct dcerpc_binding_handle *h,
									 const char *_site_name /* [in] [charset(UTF16),unique] */,
									 uint32_t _dns_ttl /* [in]  */,
									 struct NL_DNS_NAME_INFO_ARRAY *_dns_names /* [in,out] [ref] */);
NTSTATUS dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords_recv(struct tevent_req *req,
							       TALLOC_CTX *mem_ctx,
							       NTSTATUS *result);
NTSTATUS dcerpc_winbind_DsrUpdateReadOnlyServerDnsRecords(struct dcerpc_binding_handle *h,
							  TALLOC_CTX *mem_ctx,
							  const char *_site_name /* [in] [charset(UTF16),unique] */,
							  uint32_t _dns_ttl /* [in]  */,
							  struct NL_DNS_NAME_INFO_ARRAY *_dns_names /* [in,out] [ref] */,
							  NTSTATUS *result);

struct tevent_req *dcerpc_winbind_LogonControl_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct winbind_LogonControl *r);
NTSTATUS dcerpc_winbind_LogonControl_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_winbind_LogonControl_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct winbind_LogonControl *r);
struct tevent_req *dcerpc_winbind_LogonControl_send(TALLOC_CTX *mem_ctx,
						    struct tevent_context *ev,
						    struct dcerpc_binding_handle *h,
						    enum netr_LogonControlCode _function_code /* [in]  */,
						    uint32_t _level /* [in]  */,
						    union netr_CONTROL_DATA_INFORMATION *_data /* [in] [ref,switch_is(function_code)] */,
						    union netr_CONTROL_QUERY_INFORMATION *_query /* [out] [ref,switch_is(level)] */);
NTSTATUS dcerpc_winbind_LogonControl_recv(struct tevent_req *req,
					  TALLOC_CTX *mem_ctx,
					  WERROR *result);
NTSTATUS dcerpc_winbind_LogonControl(struct dcerpc_binding_handle *h,
				     TALLOC_CTX *mem_ctx,
				     enum netr_LogonControlCode _function_code /* [in]  */,
				     uint32_t _level /* [in]  */,
				     union netr_CONTROL_DATA_INFORMATION *_data /* [in] [ref,switch_is(function_code)] */,
				     union netr_CONTROL_QUERY_INFORMATION *_query /* [out] [ref,switch_is(level)] */,
				     WERROR *result);

struct tevent_req *dcerpc_winbind_GetForestTrustInformation_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct winbind_GetForestTrustInformation *r);
NTSTATUS dcerpc_winbind_GetForestTrustInformation_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_winbind_GetForestTrustInformation_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct winbind_GetForestTrustInformation *r);
struct tevent_req *dcerpc_winbind_GetForestTrustInformation_send(TALLOC_CTX *mem_ctx,
								 struct tevent_context *ev,
								 struct dcerpc_binding_handle *h,
								 const char *_trusted_domain_name /* [in] [charset(UTF16),unique] */,
								 uint32_t _flags /* [in]  */,
								 struct lsa_ForestTrustInformation **_forest_trust_info /* [out] [ref] */);
NTSTATUS dcerpc_winbind_GetForestTrustInformation_recv(struct tevent_req *req,
						       TALLOC_CTX *mem_ctx,
						       WERROR *result);
NTSTATUS dcerpc_winbind_GetForestTrustInformation(struct dcerpc_binding_handle *h,
						  TALLOC_CTX *mem_ctx,
						  const char *_trusted_domain_name /* [in] [charset(UTF16),unique] */,
						  uint32_t _flags /* [in]  */,
						  struct lsa_ForestTrustInformation **_forest_trust_info /* [out] [ref] */,
						  WERROR *result);

struct tevent_req *dcerpc_winbind_SendToSam_r_send(TALLOC_CTX *mem_ctx,
	struct tevent_context *ev,
	struct dcerpc_binding_handle *h,
	struct winbind_SendToSam *r);
NTSTATUS dcerpc_winbind_SendToSam_r_recv(struct tevent_req *req, TALLOC_CTX *mem_ctx);
NTSTATUS dcerpc_winbind_SendToSam_r(struct dcerpc_binding_handle *h, TALLOC_CTX *mem_ctx, struct winbind_SendToSam *r);
struct tevent_req *dcerpc_winbind_SendToSam_send(TALLOC_CTX *mem_ctx,
						 struct tevent_context *ev,
						 struct dcerpc_binding_handle *h,
						 struct netr_SendToSamBase _message /* [in]  */);
NTSTATUS dcerpc_winbind_SendToSam_recv(struct tevent_req *req,
				       TALLOC_CTX *mem_ctx,
				       NTSTATUS *result);
NTSTATUS dcerpc_winbind_SendToSam(struct dcerpc_binding_handle *h,
				  TALLOC_CTX *mem_ctx,
				  struct netr_SendToSamBase _message /* [in]  */,
				  NTSTATUS *result);

#endif /* _HEADER_RPC_winbind */
