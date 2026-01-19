int    ASN1CALL decode_MESSAGE_TYPE(const unsigned char *, size_t, MESSAGE_TYPE *, size_t *);
int    ASN1CALL encode_MESSAGE_TYPE(unsigned char *, size_t, const MESSAGE_TYPE *, size_t *);
size_t ASN1CALL length_MESSAGE_TYPE(const MESSAGE_TYPE *);
int    ASN1CALL copy_MESSAGE_TYPE  (const MESSAGE_TYPE *, MESSAGE_TYPE *);
void   ASN1CALL free_MESSAGE_TYPE  (MESSAGE_TYPE *);
char * ASN1CALL print_MESSAGE_TYPE (const MESSAGE_TYPE *, int);


int    ASN1CALL decode_Krb5UInt32(const unsigned char *, size_t, Krb5UInt32 *, size_t *);
int    ASN1CALL encode_Krb5UInt32(unsigned char *, size_t, const Krb5UInt32 *, size_t *);
size_t ASN1CALL length_Krb5UInt32(const Krb5UInt32 *);
int    ASN1CALL copy_Krb5UInt32  (const Krb5UInt32 *, Krb5UInt32 *);
void   ASN1CALL free_Krb5UInt32  (Krb5UInt32 *);
char * ASN1CALL print_Krb5UInt32 (const Krb5UInt32 *, int);


int    ASN1CALL decode_Krb5Int32(const unsigned char *, size_t, Krb5Int32 *, size_t *);
int    ASN1CALL encode_Krb5Int32(unsigned char *, size_t, const Krb5Int32 *, size_t *);
size_t ASN1CALL length_Krb5Int32(const Krb5Int32 *);
int    ASN1CALL copy_Krb5Int32  (const Krb5Int32 *, Krb5Int32 *);
void   ASN1CALL free_Krb5Int32  (Krb5Int32 *);
char * ASN1CALL print_Krb5Int32 (const Krb5Int32 *, int);


int    ASN1CALL decode_APOptions(const unsigned char *, size_t, APOptions *, size_t *);
int    ASN1CALL encode_APOptions(unsigned char *, size_t, const APOptions *, size_t *);
size_t ASN1CALL length_APOptions(const APOptions *);
int    ASN1CALL copy_APOptions  (const APOptions *, APOptions *);
void   ASN1CALL free_APOptions  (APOptions *);
char * ASN1CALL print_APOptions (const APOptions *, int);


int    ASN1CALL decode_PrincipalNameAttrSrc(const unsigned char *, size_t, PrincipalNameAttrSrc *, size_t *);
int    ASN1CALL encode_PrincipalNameAttrSrc(unsigned char *, size_t, const PrincipalNameAttrSrc *, size_t *);
size_t ASN1CALL length_PrincipalNameAttrSrc(const PrincipalNameAttrSrc *);
int    ASN1CALL copy_PrincipalNameAttrSrc  (const PrincipalNameAttrSrc *, PrincipalNameAttrSrc *);
void   ASN1CALL free_PrincipalNameAttrSrc  (PrincipalNameAttrSrc *);
char * ASN1CALL print_PrincipalNameAttrSrc (const PrincipalNameAttrSrc *, int);


int    ASN1CALL decode_PrincipalNameAttrs(const unsigned char *, size_t, PrincipalNameAttrs *, size_t *);
int    ASN1CALL encode_PrincipalNameAttrs(unsigned char *, size_t, const PrincipalNameAttrs *, size_t *);
size_t ASN1CALL length_PrincipalNameAttrs(const PrincipalNameAttrs *);
int    ASN1CALL copy_PrincipalNameAttrs  (const PrincipalNameAttrs *, PrincipalNameAttrs *);
void   ASN1CALL free_PrincipalNameAttrs  (PrincipalNameAttrs *);
char * ASN1CALL print_PrincipalNameAttrs (const PrincipalNameAttrs *, int);


int    ASN1CALL decode_TYPED_DATA(const unsigned char *, size_t, TYPED_DATA *, size_t *);
int    ASN1CALL encode_TYPED_DATA(unsigned char *, size_t, const TYPED_DATA *, size_t *);
size_t ASN1CALL length_TYPED_DATA(const TYPED_DATA *);
int    ASN1CALL copy_TYPED_DATA  (const TYPED_DATA *, TYPED_DATA *);
void   ASN1CALL free_TYPED_DATA  (TYPED_DATA *);
char * ASN1CALL print_TYPED_DATA (const TYPED_DATA *, int);


int    ASN1CALL decode_KDC_REQ(const unsigned char *, size_t, KDC_REQ *, size_t *);
int    ASN1CALL encode_KDC_REQ(unsigned char *, size_t, const KDC_REQ *, size_t *);
size_t ASN1CALL length_KDC_REQ(const KDC_REQ *);
int    ASN1CALL copy_KDC_REQ  (const KDC_REQ *, KDC_REQ *);
void   ASN1CALL free_KDC_REQ  (KDC_REQ *);
char * ASN1CALL print_KDC_REQ (const KDC_REQ *, int);


int    ASN1CALL decode_KerbErrorDataType(const unsigned char *, size_t, KerbErrorDataType *, size_t *);
int    ASN1CALL encode_KerbErrorDataType(unsigned char *, size_t, const KerbErrorDataType *, size_t *);
size_t ASN1CALL length_KerbErrorDataType(const KerbErrorDataType *);
int    ASN1CALL copy_KerbErrorDataType  (const KerbErrorDataType *, KerbErrorDataType *);
void   ASN1CALL free_KerbErrorDataType  (KerbErrorDataType *);
char * ASN1CALL print_KerbErrorDataType (const KerbErrorDataType *, int);


int    ASN1CALL decode_PAC_OPTIONS_FLAGS(const unsigned char *, size_t, PAC_OPTIONS_FLAGS *, size_t *);
int    ASN1CALL encode_PAC_OPTIONS_FLAGS(unsigned char *, size_t, const PAC_OPTIONS_FLAGS *, size_t *);
size_t ASN1CALL length_PAC_OPTIONS_FLAGS(const PAC_OPTIONS_FLAGS *);
int    ASN1CALL copy_PAC_OPTIONS_FLAGS  (const PAC_OPTIONS_FLAGS *, PAC_OPTIONS_FLAGS *);
void   ASN1CALL free_PAC_OPTIONS_FLAGS  (PAC_OPTIONS_FLAGS *);
char * ASN1CALL print_PAC_OPTIONS_FLAGS (const PAC_OPTIONS_FLAGS *, int);


int    ASN1CALL decode_PROV_SRV_LOCATION(const unsigned char *, size_t, PROV_SRV_LOCATION *, size_t *);
int    ASN1CALL encode_PROV_SRV_LOCATION(unsigned char *, size_t, const PROV_SRV_LOCATION *, size_t *);
size_t ASN1CALL length_PROV_SRV_LOCATION(const PROV_SRV_LOCATION *);
int    ASN1CALL copy_PROV_SRV_LOCATION  (const PROV_SRV_LOCATION *, PROV_SRV_LOCATION *);
void   ASN1CALL free_PROV_SRV_LOCATION  (PROV_SRV_LOCATION *);
char * ASN1CALL print_PROV_SRV_LOCATION (const PROV_SRV_LOCATION *, int);


int    ASN1CALL decode_AD_MANDATORY_FOR_KDC(const unsigned char *, size_t, AD_MANDATORY_FOR_KDC *, size_t *);
int    ASN1CALL encode_AD_MANDATORY_FOR_KDC(unsigned char *, size_t, const AD_MANDATORY_FOR_KDC *, size_t *);
size_t ASN1CALL length_AD_MANDATORY_FOR_KDC(const AD_MANDATORY_FOR_KDC *);
int    ASN1CALL copy_AD_MANDATORY_FOR_KDC  (const AD_MANDATORY_FOR_KDC *, AD_MANDATORY_FOR_KDC *);
void   ASN1CALL free_AD_MANDATORY_FOR_KDC  (AD_MANDATORY_FOR_KDC *);
char * ASN1CALL print_AD_MANDATORY_FOR_KDC (const AD_MANDATORY_FOR_KDC *, int);


int    ASN1CALL decode_PA_SAM_TYPE(const unsigned char *, size_t, PA_SAM_TYPE *, size_t *);
int    ASN1CALL encode_PA_SAM_TYPE(unsigned char *, size_t, const PA_SAM_TYPE *, size_t *);
size_t ASN1CALL length_PA_SAM_TYPE(const PA_SAM_TYPE *);
int    ASN1CALL copy_PA_SAM_TYPE  (const PA_SAM_TYPE *, PA_SAM_TYPE *);
void   ASN1CALL free_PA_SAM_TYPE  (PA_SAM_TYPE *);
char * ASN1CALL print_PA_SAM_TYPE (const PA_SAM_TYPE *, int);


int    ASN1CALL decode_PA_SAM_REDIRECT(const unsigned char *, size_t, PA_SAM_REDIRECT *, size_t *);
int    ASN1CALL encode_PA_SAM_REDIRECT(unsigned char *, size_t, const PA_SAM_REDIRECT *, size_t *);
size_t ASN1CALL length_PA_SAM_REDIRECT(const PA_SAM_REDIRECT *);
int    ASN1CALL copy_PA_SAM_REDIRECT  (const PA_SAM_REDIRECT *, PA_SAM_REDIRECT *);
void   ASN1CALL free_PA_SAM_REDIRECT  (PA_SAM_REDIRECT *);
char * ASN1CALL print_PA_SAM_REDIRECT (const PA_SAM_REDIRECT *, int);


int    ASN1CALL decode_SAMFlags(const unsigned char *, size_t, SAMFlags *, size_t *);
int    ASN1CALL encode_SAMFlags(unsigned char *, size_t, const SAMFlags *, size_t *);
size_t ASN1CALL length_SAMFlags(const SAMFlags *);
int    ASN1CALL copy_SAMFlags  (const SAMFlags *, SAMFlags *);
void   ASN1CALL free_SAMFlags  (SAMFlags *);
char * ASN1CALL print_SAMFlags (const SAMFlags *, int);


int    ASN1CALL decode_PA_SAM_CHALLENGE_2_BODY(const unsigned char *, size_t, PA_SAM_CHALLENGE_2_BODY *, size_t *);
int    ASN1CALL encode_PA_SAM_CHALLENGE_2_BODY(unsigned char *, size_t, const PA_SAM_CHALLENGE_2_BODY *, size_t *);
size_t ASN1CALL length_PA_SAM_CHALLENGE_2_BODY(const PA_SAM_CHALLENGE_2_BODY *);
int    ASN1CALL copy_PA_SAM_CHALLENGE_2_BODY  (const PA_SAM_CHALLENGE_2_BODY *, PA_SAM_CHALLENGE_2_BODY *);
void   ASN1CALL free_PA_SAM_CHALLENGE_2_BODY  (PA_SAM_CHALLENGE_2_BODY *);
char * ASN1CALL print_PA_SAM_CHALLENGE_2_BODY (const PA_SAM_CHALLENGE_2_BODY *, int);


int    ASN1CALL decode_PA_SAM_CHALLENGE_2(const unsigned char *, size_t, PA_SAM_CHALLENGE_2 *, size_t *);
int    ASN1CALL encode_PA_SAM_CHALLENGE_2(unsigned char *, size_t, const PA_SAM_CHALLENGE_2 *, size_t *);
size_t ASN1CALL length_PA_SAM_CHALLENGE_2(const PA_SAM_CHALLENGE_2 *);
int    ASN1CALL copy_PA_SAM_CHALLENGE_2  (const PA_SAM_CHALLENGE_2 *, PA_SAM_CHALLENGE_2 *);
void   ASN1CALL free_PA_SAM_CHALLENGE_2  (PA_SAM_CHALLENGE_2 *);
char * ASN1CALL print_PA_SAM_CHALLENGE_2 (const PA_SAM_CHALLENGE_2 *, int);


int    ASN1CALL decode_PA_SAM_RESPONSE_2(const unsigned char *, size_t, PA_SAM_RESPONSE_2 *, size_t *);
int    ASN1CALL encode_PA_SAM_RESPONSE_2(unsigned char *, size_t, const PA_SAM_RESPONSE_2 *, size_t *);
size_t ASN1CALL length_PA_SAM_RESPONSE_2(const PA_SAM_RESPONSE_2 *);
int    ASN1CALL copy_PA_SAM_RESPONSE_2  (const PA_SAM_RESPONSE_2 *, PA_SAM_RESPONSE_2 *);
void   ASN1CALL free_PA_SAM_RESPONSE_2  (PA_SAM_RESPONSE_2 *);
char * ASN1CALL print_PA_SAM_RESPONSE_2 (const PA_SAM_RESPONSE_2 *, int);


int    ASN1CALL decode_PA_ENC_SAM_RESPONSE_ENC(const unsigned char *, size_t, PA_ENC_SAM_RESPONSE_ENC *, size_t *);
int    ASN1CALL encode_PA_ENC_SAM_RESPONSE_ENC(unsigned char *, size_t, const PA_ENC_SAM_RESPONSE_ENC *, size_t *);
size_t ASN1CALL length_PA_ENC_SAM_RESPONSE_ENC(const PA_ENC_SAM_RESPONSE_ENC *);
int    ASN1CALL copy_PA_ENC_SAM_RESPONSE_ENC  (const PA_ENC_SAM_RESPONSE_ENC *, PA_ENC_SAM_RESPONSE_ENC *);
void   ASN1CALL free_PA_ENC_SAM_RESPONSE_ENC  (PA_ENC_SAM_RESPONSE_ENC *);
char * ASN1CALL print_PA_ENC_SAM_RESPONSE_ENC (const PA_ENC_SAM_RESPONSE_ENC *, int);


int    ASN1CALL decode_S4UUserID(const unsigned char *, size_t, S4UUserID *, size_t *);
int    ASN1CALL encode_S4UUserID(unsigned char *, size_t, const S4UUserID *, size_t *);
size_t ASN1CALL length_S4UUserID(const S4UUserID *);
int    ASN1CALL copy_S4UUserID  (const S4UUserID *, S4UUserID *);
void   ASN1CALL free_S4UUserID  (S4UUserID *);
char * ASN1CALL print_S4UUserID (const S4UUserID *, int);


int    ASN1CALL decode_FastOptions(const unsigned char *, size_t, FastOptions *, size_t *);
int    ASN1CALL encode_FastOptions(unsigned char *, size_t, const FastOptions *, size_t *);
size_t ASN1CALL length_FastOptions(const FastOptions *);
int    ASN1CALL copy_FastOptions  (const FastOptions *, FastOptions *);
void   ASN1CALL free_FastOptions  (FastOptions *);
char * ASN1CALL print_FastOptions (const FastOptions *, int);


int    ASN1CALL decode_KrbFastArmoredRep(const unsigned char *, size_t, KrbFastArmoredRep *, size_t *);
int    ASN1CALL encode_KrbFastArmoredRep(unsigned char *, size_t, const KrbFastArmoredRep *, size_t *);
size_t ASN1CALL length_KrbFastArmoredRep(const KrbFastArmoredRep *);
int    ASN1CALL copy_KrbFastArmoredRep  (const KrbFastArmoredRep *, KrbFastArmoredRep *);
void   ASN1CALL free_KrbFastArmoredRep  (KrbFastArmoredRep *);
char * ASN1CALL print_KrbFastArmoredRep (const KrbFastArmoredRep *, int);


int    ASN1CALL decode_KDCFastFlags(const unsigned char *, size_t, KDCFastFlags *, size_t *);
int    ASN1CALL encode_KDCFastFlags(unsigned char *, size_t, const KDCFastFlags *, size_t *);
size_t ASN1CALL length_KDCFastFlags(const KDCFastFlags *);
int    ASN1CALL copy_KDCFastFlags  (const KDCFastFlags *, KDCFastFlags *);
void   ASN1CALL free_KDCFastFlags  (KDCFastFlags *);
char * ASN1CALL print_KDCFastFlags (const KDCFastFlags *, int);


int    ASN1CALL decode_KERB_TGS_REP_IN(const unsigned char *, size_t, KERB_TGS_REP_IN *, size_t *);
int    ASN1CALL encode_KERB_TGS_REP_IN(unsigned char *, size_t, const KERB_TGS_REP_IN *, size_t *);
size_t ASN1CALL length_KERB_TGS_REP_IN(const KERB_TGS_REP_IN *);
int    ASN1CALL copy_KERB_TGS_REP_IN  (const KERB_TGS_REP_IN *, KERB_TGS_REP_IN *);
void   ASN1CALL free_KERB_TGS_REP_IN  (KERB_TGS_REP_IN *);
char * ASN1CALL print_KERB_TGS_REP_IN (const KERB_TGS_REP_IN *, int);


int    ASN1CALL decode_KERB_TGS_REP_OUT(const unsigned char *, size_t, KERB_TGS_REP_OUT *, size_t *);
int    ASN1CALL encode_KERB_TGS_REP_OUT(unsigned char *, size_t, const KERB_TGS_REP_OUT *, size_t *);
size_t ASN1CALL length_KERB_TGS_REP_OUT(const KERB_TGS_REP_OUT *);
int    ASN1CALL copy_KERB_TGS_REP_OUT  (const KERB_TGS_REP_OUT *, KERB_TGS_REP_OUT *);
void   ASN1CALL free_KERB_TGS_REP_OUT  (KERB_TGS_REP_OUT *);
char * ASN1CALL print_KERB_TGS_REP_OUT (const KERB_TGS_REP_OUT *, int);


