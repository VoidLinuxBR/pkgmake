/* Generated from /github/voidbr/pkgmake/templates/voidbr-samba/src/samba-4.23.4/third_party/heimdal/lib/asn1/crmf.asn1 */
/* Do not edit */

#if defined(_WIN32) && !defined(ASN1_LIB)
# error "ASN1_LIB must be defined"
#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <krb5-types.h>
#include "crmf_asn1.h"
#include "crmf_asn1-priv.h"
#include <asn1_err.h>
#include <der.h>
#include <asn1-template.h>

#include <parse_units.h>

int ASN1CALL
encode_CRMFRDNSequence(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const CRMFRDNSequence *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

for(i = (int)(data)->len - 1; i >= 0; --i) {
size_t Top_tag_for_oldret = ret;
ret = 0;
e = encode_RelativeDistinguishedName(p, len, &(data)->val[i], &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_for_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_CRMFRDNSequence(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, CRMFRDNSequence *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen;
Der_type Top_type;
size_t Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &Top_type, UT_Sequence, &Top_datalen, &l);
if (e == 0 && Top_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
{
size_t Top_Tag_origlen = len;
size_t Top_Tag_oldret = ret;
size_t Top_Tag_olen = 0;
void *Top_Tag_tmp;
ret = 0;
(data)->len = 0;
(data)->val = NULL;
while(ret < Top_Tag_origlen) {
size_t Top_Tag_nlen = Top_Tag_olen + sizeof(*((data)->val));
if (Top_Tag_olen > Top_Tag_nlen) { e = ASN1_OVERFLOW; goto fail; }
Top_Tag_olen = Top_Tag_nlen;
Top_Tag_tmp = realloc((data)->val, Top_Tag_olen);
if (Top_Tag_tmp == NULL) { e = ENOMEM; goto fail; }
(data)->val = Top_Tag_tmp;
e = decode_RelativeDistinguishedName(p, len, &(data)->val[(data)->len], &l);
if(e) goto fail;
p += l; len -= l; ret += l;
(data)->len++;
len = Top_Tag_origlen - ret;
}
ret += Top_Tag_oldret;
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_CRMFRDNSequence(data);
return e;
}

void ASN1CALL
free_CRMFRDNSequence(CRMFRDNSequence *data)
{
if ((data)->val)
while((data)->len){
free_RelativeDistinguishedName(&(data)->val[(data)->len-1]);
(data)->len--;
} else (data)->len = 0;
free((data)->val);
(data)->val = NULL;
}

size_t ASN1CALL
length_CRMFRDNSequence(const CRMFRDNSequence *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
unsigned int n_Top_tag;
ret = 0;
for(n_Top_tag = (data)->len; n_Top_tag > 0; --n_Top_tag){
size_t Top_tag_for_oldret = ret;
ret = 0;
ret += length_RelativeDistinguishedName(&(data)->val[n_Top_tag - 1]);
ret += Top_tag_for_oldret;
}
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_CRMFRDNSequence(const CRMFRDNSequence *from, CRMFRDNSequence *to)
{
memset(to, 0, sizeof(*to));
if(((to)->val = calloc(1, (from)->len * sizeof(*(to)->val))) == NULL && (from)->len != 0)
goto fail;
for((to)->len = 0; (to)->len < (from)->len; (to)->len++){
if(copy_RelativeDistinguishedName(&(from)->val[(to)->len], &(to)->val[(to)->len])) goto fail;
}
return 0;
fail:
free_CRMFRDNSequence(to);
return ENOMEM;
}

char * ASN1CALL
print_CRMFRDNSequence(const CRMFRDNSequence *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_Controls(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const Controls *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

for(i = (int)(data)->len - 1; i >= 0; --i) {
size_t Top_tag_for_oldret = ret;
ret = 0;
e = encode_AttributeTypeAndValue(p, len, &(data)->val[i], &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_for_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_Controls(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, Controls *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen;
Der_type Top_type;
size_t Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &Top_type, UT_Sequence, &Top_datalen, &l);
if (e == 0 && Top_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
{
size_t Top_Tag_origlen = len;
size_t Top_Tag_oldret = ret;
size_t Top_Tag_olen = 0;
void *Top_Tag_tmp;
ret = 0;
(data)->len = 0;
(data)->val = NULL;
while(ret < Top_Tag_origlen) {
size_t Top_Tag_nlen = Top_Tag_olen + sizeof(*((data)->val));
if (Top_Tag_olen > Top_Tag_nlen) { e = ASN1_OVERFLOW; goto fail; }
Top_Tag_olen = Top_Tag_nlen;
Top_Tag_tmp = realloc((data)->val, Top_Tag_olen);
if (Top_Tag_tmp == NULL) { e = ENOMEM; goto fail; }
(data)->val = Top_Tag_tmp;
e = decode_AttributeTypeAndValue(p, len, &(data)->val[(data)->len], &l);
if(e) goto fail;
p += l; len -= l; ret += l;
(data)->len++;
len = Top_Tag_origlen - ret;
}
ret += Top_Tag_oldret;
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_Controls(data);
return e;
}

void ASN1CALL
free_Controls(Controls *data)
{
if ((data)->val)
while((data)->len){
free_AttributeTypeAndValue(&(data)->val[(data)->len-1]);
(data)->len--;
} else (data)->len = 0;
free((data)->val);
(data)->val = NULL;
}

size_t ASN1CALL
length_Controls(const Controls *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
unsigned int n_Top_tag;
ret = 0;
for(n_Top_tag = (data)->len; n_Top_tag > 0; --n_Top_tag){
size_t Top_tag_for_oldret = ret;
ret = 0;
ret += length_AttributeTypeAndValue(&(data)->val[n_Top_tag - 1]);
ret += Top_tag_for_oldret;
}
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_Controls(const Controls *from, Controls *to)
{
memset(to, 0, sizeof(*to));
if(((to)->val = calloc(1, (from)->len * sizeof(*(to)->val))) == NULL && (from)->len != 0)
goto fail;
for((to)->len = 0; (to)->len < (from)->len; (to)->len++){
if(copy_AttributeTypeAndValue(&(from)->val[(to)->len], &(to)->val[(to)->len])) goto fail;
}
return 0;
fail:
free_Controls(to);
return ENOMEM;
}

char * ASN1CALL
print_Controls(const Controls *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_PKMACValue(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const PKMACValue *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

/* value */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_bit_string(p, len, &(data)->value, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_BitString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* algId */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_AlgorithmIdentifier(p, len, &(data)->algId, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_PKMACValue(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, PKMACValue *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen;
Der_type Top_type;
size_t Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &Top_type, UT_Sequence, &Top_datalen, &l);
if (e == 0 && Top_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
e = decode_AlgorithmIdentifier(p, len, &(data)->algId, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
{
size_t value_datalen;
Der_type value_type;
size_t value_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &value_type, UT_BitString, &value_datalen, &l);
if (e == 0 && value_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
value_oldlen = len;
if (value_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = value_datalen;
e = der_get_bit_string(p, len, &(data)->value, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = value_oldlen - value_datalen;
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_PKMACValue(data);
return e;
}

void ASN1CALL
free_PKMACValue(PKMACValue *data)
{
free_AlgorithmIdentifier(&(data)->algId);
der_free_bit_string(&(data)->value);
}

size_t ASN1CALL
length_PKMACValue(const PKMACValue *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_AlgorithmIdentifier(&(data)->algId);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_bit_string(&(data)->value);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_PKMACValue(const PKMACValue *from, PKMACValue *to)
{
memset(to, 0, sizeof(*to));
if(copy_AlgorithmIdentifier(&(from)->algId, &(to)->algId)) goto fail;
if(der_copy_bit_string(&(from)->value, &(to)->value)) goto fail;
return 0;
fail:
free_PKMACValue(to);
return ENOMEM;
}

char * ASN1CALL
print_PKMACValue(const PKMACValue *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_POPOSigningKeyInput(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const POPOSigningKeyInput *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

/* publicKey */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_SubjectPublicKeyInfo(p, len, &(data)->publicKey, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* authInfo */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;

switch((&(data)->authInfo)->element) {
case choice_POPOSigningKeyInput_authInfo_publicKeyMAC: {size_t authInfo_oldret = ret;
ret = 0;
e = encode_PKMACValue(p, len, &((&(data)->authInfo))->u.publicKeyMAC, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += authInfo_oldret;
break;
}
case choice_POPOSigningKeyInput_authInfo_sender: {size_t authInfo_oldret = ret;
ret = 0;
{ unsigned char *psave_sender = p, *pfree_sender = NULL;
size_t l2_sender, lensave_sender = len;
len = length_GeneralName(&((&(data)->authInfo))->u.sender);
if ((p = pfree_sender = calloc(1, len)) == NULL) return ENOMEM;
p += len - 1;
e = encode_GeneralName(p, len, &((&(data)->authInfo))->u.sender, &l);
if (e) return e;
p -= l; len -= l; ret += l;

if (len) { free(pfree_sender); return EINVAL; }
psave_sender -= l;
psave_sender += asn1_tag_length_GeneralName;
memcpy(psave_sender + 1, p + 1 + asn1_tag_length_GeneralName, l - asn1_tag_length_GeneralName);
e = der_put_tag(psave_sender, 1, ASN1_C_CONTEXT, CONS, 0, &l2_sender);
if (e) { free(pfree_sender); return e; }
len = lensave_sender - (l + 1 - asn1_tag_length_GeneralName);
ret += 1 - asn1_tag_length_GeneralName;
free(pfree_sender);
p = psave_sender - (1 + 1 - asn1_tag_length_GeneralName); }
ret += authInfo_oldret;
break;
}
};
ret += Top_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_POPOSigningKeyInput(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, POPOSigningKeyInput *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen;
Der_type Top_type;
size_t Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &Top_type, UT_Sequence, &Top_datalen, &l);
if (e == 0 && Top_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
if (der_match_tag(p, len, ASN1_C_CONTEXT, CONS, 0, NULL) == 0) {
(&(data)->authInfo)->element = choice_POPOSigningKeyInput_authInfo_sender;
{
size_t sender_datalen;
Der_type sender_type;
const unsigned char *psave4 = p;
unsigned char *pcopy4;
size_t lensave4, lsave4;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &sender_type, 0, &sender_datalen, &l);
if (e == 0 && sender_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
lsave4 = sender_datalen + l;
lensave4 = len;
e = der_replace_tag(p, len, &pcopy4, &len, asn1_tag_class_GeneralName, CONS, asn1_tag_tag_GeneralName);
if (e) goto fail;
p = pcopy4;
e = decode_GeneralName(p, len, &(&(data)->authInfo)->u.sender, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
p = psave4 + lsave4;
len = lensave4 - lsave4;
ret += lsave4 - l;
free(pcopy4);
}
}
else if (der_match_tag(p, len, ASN1_C_UNIV, CONS, UT_Sequence, NULL) == 0) {
(&(data)->authInfo)->element = choice_POPOSigningKeyInput_authInfo_publicKeyMAC;
e = decode_PKMACValue(p, len, &(&(data)->authInfo)->u.publicKeyMAC, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
}
else {
e = ASN1_PARSE_ERROR;
goto fail;
}
e = decode_SubjectPublicKeyInfo(p, len, &(data)->publicKey, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_POPOSigningKeyInput(data);
return e;
}

void ASN1CALL
free_POPOSigningKeyInput(POPOSigningKeyInput *data)
{
switch((&(data)->authInfo)->element) {
case choice_POPOSigningKeyInput_authInfo_sender:
free_GeneralName(&(&(data)->authInfo)->u.sender);
break;
case choice_POPOSigningKeyInput_authInfo_publicKeyMAC:
free_PKMACValue(&(&(data)->authInfo)->u.publicKeyMAC);
break;
}
free_SubjectPublicKeyInfo(&(data)->publicKey);
}

size_t ASN1CALL
length_POPOSigningKeyInput(const POPOSigningKeyInput *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
switch((&(data)->authInfo)->element) {
case choice_POPOSigningKeyInput_authInfo_sender:
{
size_t authInfo_oldret = ret;
ret = 0;
ret += length_GeneralName(&(&(data)->authInfo)->u.sender);
ret += 1 - asn1_tag_length_GeneralName;
ret += authInfo_oldret;
}
break;
case choice_POPOSigningKeyInput_authInfo_publicKeyMAC:
{
size_t authInfo_oldret = ret;
ret = 0;
ret += length_PKMACValue(&(&(data)->authInfo)->u.publicKeyMAC);
ret += authInfo_oldret;
}
break;
}
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_SubjectPublicKeyInfo(&(data)->publicKey);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_POPOSigningKeyInput(const POPOSigningKeyInput *from, POPOSigningKeyInput *to)
{
memset(to, 0, sizeof(*to));
(&(to)->authInfo)->element = (&(from)->authInfo)->element;
switch((&(from)->authInfo)->element) {
case choice_POPOSigningKeyInput_authInfo_sender:
if(copy_GeneralName(&(&(from)->authInfo)->u.sender, &(&(to)->authInfo)->u.sender)) goto fail;
break;
case choice_POPOSigningKeyInput_authInfo_publicKeyMAC:
if(copy_PKMACValue(&(&(from)->authInfo)->u.publicKeyMAC, &(&(to)->authInfo)->u.publicKeyMAC)) goto fail;
break;
}
if(copy_SubjectPublicKeyInfo(&(from)->publicKey, &(to)->publicKey)) goto fail;
return 0;
fail:
free_POPOSigningKeyInput(to);
return ENOMEM;
}

char * ASN1CALL
print_POPOSigningKeyInput(const POPOSigningKeyInput *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_POPOSigningKey(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const POPOSigningKey *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

/* signature */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_bit_string(p, len, &(data)->signature, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_BitString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* algorithmIdentifier */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_AlgorithmIdentifier(p, len, &(data)->algorithmIdentifier, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* poposkInput */
if((data)->poposkInput) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
{ unsigned char *psave_poposkInput = p, *pfree_poposkInput = NULL;
size_t l2_poposkInput, lensave_poposkInput = len;
len = length_POPOSigningKeyInput((data)->poposkInput);
if ((p = pfree_poposkInput = calloc(1, len)) == NULL) return ENOMEM;
p += len - 1;
e = encode_POPOSigningKeyInput(p, len, (data)->poposkInput, &l);
if (e) return e;
p -= l; len -= l; ret += l;

if (len) { free(pfree_poposkInput); return EINVAL; }
psave_poposkInput -= l;
psave_poposkInput += asn1_tag_length_POPOSigningKeyInput;
memcpy(psave_poposkInput + 1, p + 1 + asn1_tag_length_POPOSigningKeyInput, l - asn1_tag_length_POPOSigningKeyInput);
e = der_put_tag(psave_poposkInput, 1, ASN1_C_CONTEXT, CONS, 0, &l2_poposkInput);
if (e) { free(pfree_poposkInput); return e; }
len = lensave_poposkInput - (l + 1 - asn1_tag_length_POPOSigningKeyInput);
ret += 1 - asn1_tag_length_POPOSigningKeyInput;
free(pfree_poposkInput);
p = psave_poposkInput - (1 + 1 - asn1_tag_length_POPOSigningKeyInput); }
ret += Top_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_POPOSigningKey(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, POPOSigningKey *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen;
Der_type Top_type;
size_t Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &Top_type, UT_Sequence, &Top_datalen, &l);
if (e == 0 && Top_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
{
size_t poposkInput_datalen;
Der_type poposkInput_type;
const unsigned char *psave3 = p;
unsigned char *pcopy3;
size_t lensave3, lsave3;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &poposkInput_type, 0, &poposkInput_datalen, &l);
if (e == 0 && poposkInput_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
(data)->poposkInput = NULL;
} else {
(data)->poposkInput = calloc(1, sizeof(*(data)->poposkInput));
if ((data)->poposkInput == NULL) { e = ENOMEM; goto fail; }
lsave3 = poposkInput_datalen + l;
lensave3 = len;
e = der_replace_tag(p, len, &pcopy3, &len, asn1_tag_class_POPOSigningKeyInput, CONS, asn1_tag_tag_POPOSigningKeyInput);
if (e) goto fail;
p = pcopy3;
e = decode_POPOSigningKeyInput(p, len, (data)->poposkInput, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
p = psave3 + lsave3;
len = lensave3 - lsave3;
ret += lsave3 - l;
free(pcopy3);
}
}
e = decode_AlgorithmIdentifier(p, len, &(data)->algorithmIdentifier, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
{
size_t signature_datalen;
Der_type signature_type;
size_t signature_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &signature_type, UT_BitString, &signature_datalen, &l);
if (e == 0 && signature_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
signature_oldlen = len;
if (signature_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = signature_datalen;
e = der_get_bit_string(p, len, &(data)->signature, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = signature_oldlen - signature_datalen;
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_POPOSigningKey(data);
return e;
}

void ASN1CALL
free_POPOSigningKey(POPOSigningKey *data)
{
if((data)->poposkInput) {
free_POPOSigningKeyInput((data)->poposkInput);
free((data)->poposkInput);
(data)->poposkInput = NULL;
}
free_AlgorithmIdentifier(&(data)->algorithmIdentifier);
der_free_bit_string(&(data)->signature);
}

size_t ASN1CALL
length_POPOSigningKey(const POPOSigningKey *data)
{
size_t ret = 0;
if((data)->poposkInput){
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_POPOSigningKeyInput((data)->poposkInput);
ret += 1 - asn1_tag_length_POPOSigningKeyInput;
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_AlgorithmIdentifier(&(data)->algorithmIdentifier);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_bit_string(&(data)->signature);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_POPOSigningKey(const POPOSigningKey *from, POPOSigningKey *to)
{
memset(to, 0, sizeof(*to));
if((from)->poposkInput) {
(to)->poposkInput = calloc(1, sizeof(*(to)->poposkInput));
if((to)->poposkInput == NULL) goto fail;
if(copy_POPOSigningKeyInput((from)->poposkInput, (to)->poposkInput)) goto fail;
}else
(to)->poposkInput = NULL;
if(copy_AlgorithmIdentifier(&(from)->algorithmIdentifier, &(to)->algorithmIdentifier)) goto fail;
if(der_copy_bit_string(&(from)->signature, &(to)->signature)) goto fail;
return 0;
fail:
free_POPOSigningKey(to);
return ENOMEM;
}

char * ASN1CALL
print_POPOSigningKey(const POPOSigningKey *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_PBMParameter(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const PBMParameter *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

/* mac */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_AlgorithmIdentifier(p, len, &(data)->mac, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* iterationCount */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_heim_integer(p, len, &(data)->iterationCount, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_Integer, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* owf */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_AlgorithmIdentifier(p, len, &(data)->owf, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* salt */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_octet_string(p, len, &(data)->salt, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_OctetString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_PBMParameter(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, PBMParameter *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen;
Der_type Top_type;
size_t Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &Top_type, UT_Sequence, &Top_datalen, &l);
if (e == 0 && Top_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
{
size_t salt_datalen;
Der_type salt_type;
size_t salt_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &salt_type, UT_OctetString, &salt_datalen, &l);
if (e == 0 && salt_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
salt_oldlen = len;
if (salt_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = salt_datalen;
e = der_get_octet_string(p, len, &(data)->salt, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = salt_oldlen - salt_datalen;
}
e = decode_AlgorithmIdentifier(p, len, &(data)->owf, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
{
size_t iterationCount_datalen;
Der_type iterationCount_type;
size_t iterationCount_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &iterationCount_type, UT_Integer, &iterationCount_datalen, &l);
if (e == 0 && iterationCount_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
iterationCount_oldlen = len;
if (iterationCount_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = iterationCount_datalen;
e = der_get_heim_integer(p, len, &(data)->iterationCount, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = iterationCount_oldlen - iterationCount_datalen;
}
e = decode_AlgorithmIdentifier(p, len, &(data)->mac, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_PBMParameter(data);
return e;
}

void ASN1CALL
free_PBMParameter(PBMParameter *data)
{
der_free_octet_string(&(data)->salt);
free_AlgorithmIdentifier(&(data)->owf);
der_free_heim_integer(&(data)->iterationCount);
free_AlgorithmIdentifier(&(data)->mac);
}

size_t ASN1CALL
length_PBMParameter(const PBMParameter *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_octet_string(&(data)->salt);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_AlgorithmIdentifier(&(data)->owf);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_heim_integer(&(data)->iterationCount);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_AlgorithmIdentifier(&(data)->mac);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_PBMParameter(const PBMParameter *from, PBMParameter *to)
{
memset(to, 0, sizeof(*to));
if(der_copy_octet_string(&(from)->salt, &(to)->salt)) goto fail;
if(copy_AlgorithmIdentifier(&(from)->owf, &(to)->owf)) goto fail;
if(der_copy_heim_integer(&(from)->iterationCount, &(to)->iterationCount)) goto fail;
if(copy_AlgorithmIdentifier(&(from)->mac, &(to)->mac)) goto fail;
return 0;
fail:
free_PBMParameter(to);
return ENOMEM;
}

char * ASN1CALL
print_PBMParameter(const PBMParameter *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_SubsequentMessage(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const SubsequentMessage *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

{
int enumint = (int)*data;
e = der_put_integer(p, len, &enumint, &l);
if (e) return e;
p -= l; len -= l; ret += l;

}
;e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_Integer, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_SubsequentMessage(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, SubsequentMessage *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen;
Der_type Top_type;
size_t Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &Top_type, UT_Integer, &Top_datalen, &l);
if (e == 0 && Top_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
{
int enumint;
e = der_get_integer(p, len, &enumint, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
*data = enumint;
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_SubsequentMessage(data);
return e;
}

void ASN1CALL
free_SubsequentMessage(SubsequentMessage *data)
{
*data = 0;
}

size_t ASN1CALL
length_SubsequentMessage(const SubsequentMessage *data)
{
size_t ret = 0;
{
int enumint = *data;
ret += der_length_integer(&enumint);
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_SubsequentMessage(const SubsequentMessage *from, SubsequentMessage *to)
{
memset(to, 0, sizeof(*to));
*(to) = *(from);
return 0;
}

char * ASN1CALL
print_SubsequentMessage(const SubsequentMessage *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_POPOPrivKey(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const POPOPrivKey *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;


switch((data)->element) {
case choice_POPOPrivKey_encryptedKey: {size_t Top_oldret = ret;
ret = 0;
e = encode_HEIM_ANY(p, len, &((data))->u.encryptedKey, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 4, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_oldret;
break;
}
case choice_POPOPrivKey_agreeMAC: {size_t Top_oldret = ret;
ret = 0;
{ unsigned char *psave_agreeMAC = p, *pfree_agreeMAC = NULL;
size_t l2_agreeMAC, lensave_agreeMAC = len;
len = length_PKMACValue(&((data))->u.agreeMAC);
if ((p = pfree_agreeMAC = calloc(1, len)) == NULL) return ENOMEM;
p += len - 1;
e = encode_PKMACValue(p, len, &((data))->u.agreeMAC, &l);
if (e) return e;
p -= l; len -= l; ret += l;

if (len) { free(pfree_agreeMAC); return EINVAL; }
psave_agreeMAC -= l;
psave_agreeMAC += asn1_tag_length_PKMACValue;
memcpy(psave_agreeMAC + 1, p + 1 + asn1_tag_length_PKMACValue, l - asn1_tag_length_PKMACValue);
e = der_put_tag(psave_agreeMAC, 1, ASN1_C_CONTEXT, CONS, 3, &l2_agreeMAC);
if (e) { free(pfree_agreeMAC); return e; }
len = lensave_agreeMAC - (l + 1 - asn1_tag_length_PKMACValue);
ret += 1 - asn1_tag_length_PKMACValue;
free(pfree_agreeMAC);
p = psave_agreeMAC - (1 + 1 - asn1_tag_length_PKMACValue); }
ret += Top_oldret;
break;
}
case choice_POPOPrivKey_dhMAC: {size_t Top_oldret = ret;
ret = 0;
e = der_put_bit_string(p, len, &((data))->u.dhMAC, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_BitString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 2, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_oldret;
break;
}
case choice_POPOPrivKey_subsequentMessage: {size_t Top_oldret = ret;
ret = 0;
{ unsigned char *psave_subsequentMessage = p, *pfree_subsequentMessage = NULL;
size_t l2_subsequentMessage, lensave_subsequentMessage = len;
len = length_SubsequentMessage(&((data))->u.subsequentMessage);
if ((p = pfree_subsequentMessage = calloc(1, len)) == NULL) return ENOMEM;
p += len - 1;
e = encode_SubsequentMessage(p, len, &((data))->u.subsequentMessage, &l);
if (e) return e;
p -= l; len -= l; ret += l;

if (len) { free(pfree_subsequentMessage); return EINVAL; }
psave_subsequentMessage -= l;
psave_subsequentMessage += asn1_tag_length_SubsequentMessage;
memcpy(psave_subsequentMessage + 1, p + 1 + asn1_tag_length_SubsequentMessage, l - asn1_tag_length_SubsequentMessage);
e = der_put_tag(psave_subsequentMessage, 1, ASN1_C_CONTEXT, PRIM, 1, &l2_subsequentMessage);
if (e) { free(pfree_subsequentMessage); return e; }
len = lensave_subsequentMessage - (l + 1 - asn1_tag_length_SubsequentMessage);
ret += 1 - asn1_tag_length_SubsequentMessage;
free(pfree_subsequentMessage);
p = psave_subsequentMessage - (1 + 1 - asn1_tag_length_SubsequentMessage); }
ret += Top_oldret;
break;
}
case choice_POPOPrivKey_thisMessage: {size_t Top_oldret = ret;
ret = 0;
e = der_put_bit_string(p, len, &((data))->u.thisMessage, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_BitString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 0, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_oldret;
break;
}
};
*size = ret;
return 0;
}

int ASN1CALL
decode_POPOPrivKey(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, POPOPrivKey *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
if (der_match_tag(p, len, ASN1_C_CONTEXT, CONS, 0, NULL) == 0) {
(data)->element = choice_POPOPrivKey_thisMessage;
{
size_t thisMessage_datalen;
Der_type thisMessage_type;
size_t thisMessage_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &thisMessage_type, 0, &thisMessage_datalen, &l);
if (e == 0 && thisMessage_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
thisMessage_oldlen = len;
if (thisMessage_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = thisMessage_datalen;
{
size_t thisMessage_Tag_datalen;
Der_type thisMessage_Tag_type;
size_t thisMessage_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &thisMessage_Tag_type, UT_BitString, &thisMessage_Tag_datalen, &l);
if (e == 0 && thisMessage_Tag_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
thisMessage_Tag_oldlen = len;
if (thisMessage_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = thisMessage_Tag_datalen;
e = der_get_bit_string(p, len, &(data)->u.thisMessage, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = thisMessage_Tag_oldlen - thisMessage_Tag_datalen;
}
len = thisMessage_oldlen - thisMessage_datalen;
}
}
else if (der_match_tag(p, len, ASN1_C_CONTEXT, PRIM, 1, NULL) == 0) {
(data)->element = choice_POPOPrivKey_subsequentMessage;
{
size_t subsequentMessage_datalen;
Der_type subsequentMessage_type;
const unsigned char *psave2 = p;
unsigned char *pcopy2;
size_t lensave2, lsave2;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &subsequentMessage_type, 1, &subsequentMessage_datalen, &l);
if (e == 0 && subsequentMessage_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
lsave2 = subsequentMessage_datalen + l;
lensave2 = len;
e = der_replace_tag(p, len, &pcopy2, &len, asn1_tag_class_SubsequentMessage, PRIM, asn1_tag_tag_SubsequentMessage);
if (e) goto fail;
p = pcopy2;
e = decode_SubsequentMessage(p, len, &(data)->u.subsequentMessage, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
p = psave2 + lsave2;
len = lensave2 - lsave2;
ret += lsave2 - l;
free(pcopy2);
}
}
else if (der_match_tag(p, len, ASN1_C_CONTEXT, CONS, 2, NULL) == 0) {
(data)->element = choice_POPOPrivKey_dhMAC;
{
size_t dhMAC_datalen;
Der_type dhMAC_type;
size_t dhMAC_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &dhMAC_type, 2, &dhMAC_datalen, &l);
if (e == 0 && dhMAC_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
dhMAC_oldlen = len;
if (dhMAC_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = dhMAC_datalen;
{
size_t dhMAC_Tag_datalen;
Der_type dhMAC_Tag_type;
size_t dhMAC_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &dhMAC_Tag_type, UT_BitString, &dhMAC_Tag_datalen, &l);
if (e == 0 && dhMAC_Tag_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
dhMAC_Tag_oldlen = len;
if (dhMAC_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = dhMAC_Tag_datalen;
e = der_get_bit_string(p, len, &(data)->u.dhMAC, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = dhMAC_Tag_oldlen - dhMAC_Tag_datalen;
}
len = dhMAC_oldlen - dhMAC_datalen;
}
}
else if (der_match_tag(p, len, ASN1_C_CONTEXT, CONS, 3, NULL) == 0) {
(data)->element = choice_POPOPrivKey_agreeMAC;
{
size_t agreeMAC_datalen;
Der_type agreeMAC_type;
const unsigned char *psave2 = p;
unsigned char *pcopy2;
size_t lensave2, lsave2;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &agreeMAC_type, 3, &agreeMAC_datalen, &l);
if (e == 0 && agreeMAC_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
lsave2 = agreeMAC_datalen + l;
lensave2 = len;
e = der_replace_tag(p, len, &pcopy2, &len, asn1_tag_class_PKMACValue, CONS, asn1_tag_tag_PKMACValue);
if (e) goto fail;
p = pcopy2;
e = decode_PKMACValue(p, len, &(data)->u.agreeMAC, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
p = psave2 + lsave2;
len = lensave2 - lsave2;
ret += lsave2 - l;
free(pcopy2);
}
}
else if (der_match_tag(p, len, ASN1_C_CONTEXT, CONS, 4, NULL) == 0) {
(data)->element = choice_POPOPrivKey_encryptedKey;
{
size_t encryptedKey_datalen;
Der_type encryptedKey_type;
size_t encryptedKey_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &encryptedKey_type, 4, &encryptedKey_datalen, &l);
if (e == 0 && encryptedKey_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
encryptedKey_oldlen = len;
if (encryptedKey_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = encryptedKey_datalen;
e = decode_HEIM_ANY(p, len, &(data)->u.encryptedKey, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = encryptedKey_oldlen - encryptedKey_datalen;
}
}
else {
e = ASN1_PARSE_ERROR;
goto fail;
}
if(size) *size = ret;
return 0;
fail:
free_POPOPrivKey(data);
return e;
}

void ASN1CALL
free_POPOPrivKey(POPOPrivKey *data)
{
switch((data)->element) {
case choice_POPOPrivKey_thisMessage:
der_free_bit_string(&(data)->u.thisMessage);
break;
case choice_POPOPrivKey_subsequentMessage:
free_SubsequentMessage(&(data)->u.subsequentMessage);
break;
case choice_POPOPrivKey_dhMAC:
der_free_bit_string(&(data)->u.dhMAC);
break;
case choice_POPOPrivKey_agreeMAC:
free_PKMACValue(&(data)->u.agreeMAC);
break;
case choice_POPOPrivKey_encryptedKey:
free_HEIM_ANY(&(data)->u.encryptedKey);
break;
}
}

size_t ASN1CALL
length_POPOPrivKey(const POPOPrivKey *data)
{
size_t ret = 0;
switch((data)->element) {
case choice_POPOPrivKey_thisMessage:
{
size_t Top_oldret = ret;
ret = 0;
ret += der_length_bit_string(&(data)->u.thisMessage);
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_oldret;
}
break;
case choice_POPOPrivKey_subsequentMessage:
{
size_t Top_oldret = ret;
ret = 0;
ret += length_SubsequentMessage(&(data)->u.subsequentMessage);
ret += 1 - asn1_tag_length_SubsequentMessage;
ret += Top_oldret;
}
break;
case choice_POPOPrivKey_dhMAC:
{
size_t Top_oldret = ret;
ret = 0;
ret += der_length_bit_string(&(data)->u.dhMAC);
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_oldret;
}
break;
case choice_POPOPrivKey_agreeMAC:
{
size_t Top_oldret = ret;
ret = 0;
ret += length_PKMACValue(&(data)->u.agreeMAC);
ret += 1 - asn1_tag_length_PKMACValue;
ret += Top_oldret;
}
break;
case choice_POPOPrivKey_encryptedKey:
{
size_t Top_oldret = ret;
ret = 0;
ret += length_HEIM_ANY(&(data)->u.encryptedKey);
ret += 1 + der_length_len (ret);
ret += Top_oldret;
}
break;
}
return ret;
}

int ASN1CALL
copy_POPOPrivKey(const POPOPrivKey *from, POPOPrivKey *to)
{
memset(to, 0, sizeof(*to));
(to)->element = (from)->element;
switch((from)->element) {
case choice_POPOPrivKey_thisMessage:
if(der_copy_bit_string(&(from)->u.thisMessage, &(to)->u.thisMessage)) goto fail;
break;
case choice_POPOPrivKey_subsequentMessage:
if(copy_SubsequentMessage(&(from)->u.subsequentMessage, &(to)->u.subsequentMessage)) goto fail;
break;
case choice_POPOPrivKey_dhMAC:
if(der_copy_bit_string(&(from)->u.dhMAC, &(to)->u.dhMAC)) goto fail;
break;
case choice_POPOPrivKey_agreeMAC:
if(copy_PKMACValue(&(from)->u.agreeMAC, &(to)->u.agreeMAC)) goto fail;
break;
case choice_POPOPrivKey_encryptedKey:
if(copy_HEIM_ANY(&(from)->u.encryptedKey, &(to)->u.encryptedKey)) goto fail;
break;
}
return 0;
fail:
free_POPOPrivKey(to);
return ENOMEM;
}

char * ASN1CALL
print_POPOPrivKey(const POPOPrivKey *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_ProofOfPossession(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const ProofOfPossession *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;


switch((data)->element) {
case choice_ProofOfPossession_keyAgreement: {size_t Top_oldret = ret;
ret = 0;
e = encode_POPOPrivKey(p, len, &((data))->u.keyAgreement, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 3, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_oldret;
break;
}
case choice_ProofOfPossession_keyEncipherment: {size_t Top_oldret = ret;
ret = 0;
e = encode_POPOPrivKey(p, len, &((data))->u.keyEncipherment, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 2, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_oldret;
break;
}
case choice_ProofOfPossession_signature: {size_t Top_oldret = ret;
ret = 0;
e = encode_POPOSigningKey(p, len, &((data))->u.signature, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 1, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_oldret;
break;
}
case choice_ProofOfPossession_raVerified: {size_t Top_oldret = ret;
ret = 0;
/* NULL */
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_Null, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 0, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_oldret;
break;
}
};
*size = ret;
return 0;
}

int ASN1CALL
decode_ProofOfPossession(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, ProofOfPossession *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
if (der_match_tag(p, len, ASN1_C_CONTEXT, CONS, 0, NULL) == 0) {
(data)->element = choice_ProofOfPossession_raVerified;
{
size_t raVerified_datalen;
Der_type raVerified_type;
size_t raVerified_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &raVerified_type, 0, &raVerified_datalen, &l);
if (e == 0 && raVerified_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
raVerified_oldlen = len;
if (raVerified_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = raVerified_datalen;
{
size_t raVerified_Tag_datalen;
Der_type raVerified_Tag_type;
size_t raVerified_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &raVerified_Tag_type, UT_Null, &raVerified_Tag_datalen, &l);
if (e == 0 && raVerified_Tag_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
raVerified_Tag_oldlen = len;
if (raVerified_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = raVerified_Tag_datalen;
/* NULL */
len = raVerified_Tag_oldlen - raVerified_Tag_datalen;
}
len = raVerified_oldlen - raVerified_datalen;
}
}
else if (der_match_tag(p, len, ASN1_C_CONTEXT, CONS, 1, NULL) == 0) {
(data)->element = choice_ProofOfPossession_signature;
{
size_t signature_datalen;
Der_type signature_type;
size_t signature_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &signature_type, 1, &signature_datalen, &l);
if (e == 0 && signature_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
signature_oldlen = len;
if (signature_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = signature_datalen;
e = decode_POPOSigningKey(p, len, &(data)->u.signature, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = signature_oldlen - signature_datalen;
}
}
else if (der_match_tag(p, len, ASN1_C_CONTEXT, CONS, 2, NULL) == 0) {
(data)->element = choice_ProofOfPossession_keyEncipherment;
{
size_t keyEncipherment_datalen;
Der_type keyEncipherment_type;
size_t keyEncipherment_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &keyEncipherment_type, 2, &keyEncipherment_datalen, &l);
if (e == 0 && keyEncipherment_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
keyEncipherment_oldlen = len;
if (keyEncipherment_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = keyEncipherment_datalen;
e = decode_POPOPrivKey(p, len, &(data)->u.keyEncipherment, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = keyEncipherment_oldlen - keyEncipherment_datalen;
}
}
else if (der_match_tag(p, len, ASN1_C_CONTEXT, CONS, 3, NULL) == 0) {
(data)->element = choice_ProofOfPossession_keyAgreement;
{
size_t keyAgreement_datalen;
Der_type keyAgreement_type;
size_t keyAgreement_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &keyAgreement_type, 3, &keyAgreement_datalen, &l);
if (e == 0 && keyAgreement_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
keyAgreement_oldlen = len;
if (keyAgreement_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = keyAgreement_datalen;
e = decode_POPOPrivKey(p, len, &(data)->u.keyAgreement, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = keyAgreement_oldlen - keyAgreement_datalen;
}
}
else {
e = ASN1_PARSE_ERROR;
goto fail;
}
if(size) *size = ret;
return 0;
fail:
free_ProofOfPossession(data);
return e;
}

void ASN1CALL
free_ProofOfPossession(ProofOfPossession *data)
{
switch((data)->element) {
case choice_ProofOfPossession_raVerified:
*&(data)->u.raVerified = 0;
break;
case choice_ProofOfPossession_signature:
free_POPOSigningKey(&(data)->u.signature);
break;
case choice_ProofOfPossession_keyEncipherment:
free_POPOPrivKey(&(data)->u.keyEncipherment);
break;
case choice_ProofOfPossession_keyAgreement:
free_POPOPrivKey(&(data)->u.keyAgreement);
break;
}
}

size_t ASN1CALL
length_ProofOfPossession(const ProofOfPossession *data)
{
size_t ret = 0;
switch((data)->element) {
case choice_ProofOfPossession_raVerified:
{
size_t Top_oldret = ret;
ret = 0;
/* NULL */
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_oldret;
}
break;
case choice_ProofOfPossession_signature:
{
size_t Top_oldret = ret;
ret = 0;
ret += length_POPOSigningKey(&(data)->u.signature);
ret += 1 + der_length_len (ret);
ret += Top_oldret;
}
break;
case choice_ProofOfPossession_keyEncipherment:
{
size_t Top_oldret = ret;
ret = 0;
ret += length_POPOPrivKey(&(data)->u.keyEncipherment);
ret += 1 + der_length_len (ret);
ret += Top_oldret;
}
break;
case choice_ProofOfPossession_keyAgreement:
{
size_t Top_oldret = ret;
ret = 0;
ret += length_POPOPrivKey(&(data)->u.keyAgreement);
ret += 1 + der_length_len (ret);
ret += Top_oldret;
}
break;
}
return ret;
}

int ASN1CALL
copy_ProofOfPossession(const ProofOfPossession *from, ProofOfPossession *to)
{
memset(to, 0, sizeof(*to));
(to)->element = (from)->element;
switch((from)->element) {
case choice_ProofOfPossession_raVerified:
break;
case choice_ProofOfPossession_signature:
if(copy_POPOSigningKey(&(from)->u.signature, &(to)->u.signature)) goto fail;
break;
case choice_ProofOfPossession_keyEncipherment:
if(copy_POPOPrivKey(&(from)->u.keyEncipherment, &(to)->u.keyEncipherment)) goto fail;
break;
case choice_ProofOfPossession_keyAgreement:
if(copy_POPOPrivKey(&(from)->u.keyAgreement, &(to)->u.keyAgreement)) goto fail;
break;
}
return 0;
fail:
free_ProofOfPossession(to);
return ENOMEM;
}

char * ASN1CALL
print_ProofOfPossession(const ProofOfPossession *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_CertTemplate(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const CertTemplate *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

/* extensions */
if((data)->extensions) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
for(i = (int)((data)->extensions)->len - 1; i >= 0; --i) {
size_t extensions_tag_for_oldret = ret;
ret = 0;
e = encode_Extension(p, len, &((data)->extensions)->val[i], &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += extensions_tag_for_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 9, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* subjectUID */
if((data)->subjectUID) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_bit_string(p, len, (data)->subjectUID, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, PRIM, 8, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* issuerUID */
if((data)->issuerUID) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_bit_string(p, len, (data)->issuerUID, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, PRIM, 7, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* publicKey */
if((data)->publicKey) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
/* subjectPublicKey */
if(((data)->publicKey)->subjectPublicKey) {
size_t publicKey_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_bit_string(p, len, ((data)->publicKey)->subjectPublicKey, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_BitString, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += publicKey_tag_oldret;
}
/* algorithm */
{
size_t publicKey_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_AlgorithmIdentifier(p, len, &((data)->publicKey)->algorithm, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += publicKey_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 6, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* subject */
if((data)->subject) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;

switch(((data)->subject)->element) {
case choice_CertTemplate_subject_rdnSequence: {size_t subject_tag_oldret = ret;
ret = 0;
e = encode_CRMFRDNSequence(p, len, &(((data)->subject))->u.rdnSequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += subject_tag_oldret;
break;
}
};
e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 5, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* validity */
if((data)->validity) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
/* notAfter */
if(((data)->validity)->notAfter) {
size_t validity_tag_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_Time(p, len, ((data)->validity)->notAfter, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 1, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += validity_tag_tag_oldret;
}
/* notBefore */
if(((data)->validity)->notBefore) {
size_t validity_tag_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_Time(p, len, ((data)->validity)->notBefore, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 0, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += validity_tag_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 4, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* issuer */
if((data)->issuer) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;

switch(((data)->issuer)->element) {
case choice_CertTemplate_issuer_rdnSequence: {size_t issuer_tag_oldret = ret;
ret = 0;
e = encode_CRMFRDNSequence(p, len, &(((data)->issuer))->u.rdnSequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += issuer_tag_oldret;
break;
}
};
e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 3, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* signingAlg */
if((data)->signingAlg) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
/* parameters */
if(((data)->signingAlg)->parameters) {
size_t signingAlg_tag_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_HEIM_ANY(p, len, ((data)->signingAlg)->parameters, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += signingAlg_tag_tag_oldret;
}
/* algorithm */
{
size_t signingAlg_tag_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_oid(p, len, &((data)->signingAlg)->algorithm, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_OID, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += signingAlg_tag_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 2, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* serialNumber */
if((data)->serialNumber) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_heim_integer(p, len, (data)->serialNumber, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_Integer, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 1, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* version */
if((data)->version) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_heim_integer(p, len, (data)->version, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_Integer, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_CONTEXT, CONS, 0, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_CertTemplate(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, CertTemplate *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen;
Der_type Top_type;
size_t Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &Top_type, UT_Sequence, &Top_datalen, &l);
if (e == 0 && Top_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
{
size_t version_datalen;
Der_type version_type;
size_t version_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &version_type, 0, &version_datalen, &l);
if (e == 0 && version_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
(data)->version = NULL;
} else {
(data)->version = calloc(1, sizeof(*(data)->version));
if ((data)->version == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
version_oldlen = len;
if (version_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = version_datalen;
{
size_t version_Tag_datalen;
Der_type version_Tag_type;
size_t version_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &version_Tag_type, UT_Integer, &version_Tag_datalen, &l);
if (e == 0 && version_Tag_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
version_Tag_oldlen = len;
if (version_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = version_Tag_datalen;
e = der_get_heim_integer(p, len, (data)->version, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = version_Tag_oldlen - version_Tag_datalen;
}
len = version_oldlen - version_datalen;
}
}
{
size_t serialNumber_datalen;
Der_type serialNumber_type;
size_t serialNumber_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &serialNumber_type, 1, &serialNumber_datalen, &l);
if (e == 0 && serialNumber_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
(data)->serialNumber = NULL;
} else {
(data)->serialNumber = calloc(1, sizeof(*(data)->serialNumber));
if ((data)->serialNumber == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
serialNumber_oldlen = len;
if (serialNumber_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = serialNumber_datalen;
{
size_t serialNumber_Tag_datalen;
Der_type serialNumber_Tag_type;
size_t serialNumber_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &serialNumber_Tag_type, UT_Integer, &serialNumber_Tag_datalen, &l);
if (e == 0 && serialNumber_Tag_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
serialNumber_Tag_oldlen = len;
if (serialNumber_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = serialNumber_Tag_datalen;
e = der_get_heim_integer(p, len, (data)->serialNumber, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = serialNumber_Tag_oldlen - serialNumber_Tag_datalen;
}
len = serialNumber_oldlen - serialNumber_datalen;
}
}
{
size_t signingAlg_datalen;
Der_type signingAlg_type;
size_t signingAlg_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &signingAlg_type, 2, &signingAlg_datalen, &l);
if (e == 0 && signingAlg_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
(data)->signingAlg = NULL;
} else {
(data)->signingAlg = calloc(1, sizeof(*(data)->signingAlg));
if ((data)->signingAlg == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
signingAlg_oldlen = len;
if (signingAlg_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = signingAlg_datalen;
{
size_t signingAlg_Tag_datalen;
Der_type signingAlg_Tag_type;
size_t signingAlg_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &signingAlg_Tag_type, UT_Sequence, &signingAlg_Tag_datalen, &l);
if (e == 0 && signingAlg_Tag_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
signingAlg_Tag_oldlen = len;
if (signingAlg_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = signingAlg_Tag_datalen;
{
size_t algorithm_datalen;
Der_type algorithm_type;
size_t algorithm_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &algorithm_type, UT_OID, &algorithm_datalen, &l);
if (e == 0 && algorithm_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
algorithm_oldlen = len;
if (algorithm_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = algorithm_datalen;
e = der_get_oid(p, len, &((data)->signingAlg)->algorithm, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = algorithm_oldlen - algorithm_datalen;
}
((data)->signingAlg)->parameters = calloc(1, sizeof(*((data)->signingAlg)->parameters));
if (((data)->signingAlg)->parameters == NULL) goto fail;
e = decode_HEIM_ANY(p, len, ((data)->signingAlg)->parameters, &l);
if(e == ASN1_MISSING_FIELD) {
free(((data)->signingAlg)->parameters);
((data)->signingAlg)->parameters = NULL;
} else if (e) { goto fail; 
} else {
p += l; len -= l; ret += l;
}
len = signingAlg_Tag_oldlen - signingAlg_Tag_datalen;
}
len = signingAlg_oldlen - signingAlg_datalen;
}
}
{
size_t issuer_datalen;
Der_type issuer_type;
size_t issuer_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &issuer_type, 3, &issuer_datalen, &l);
if (e == 0 && issuer_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
(data)->issuer = NULL;
} else {
(data)->issuer = calloc(1, sizeof(*(data)->issuer));
if ((data)->issuer == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
issuer_oldlen = len;
if (issuer_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = issuer_datalen;
if (der_match_tag(p, len, ASN1_C_UNIV, CONS, UT_Sequence, NULL) == 0) {
((data)->issuer)->element = choice_CertTemplate_issuer_rdnSequence;
e = decode_CRMFRDNSequence(p, len, &((data)->issuer)->u.rdnSequence, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
}
else {
e = ASN1_PARSE_ERROR;
goto fail;
}
len = issuer_oldlen - issuer_datalen;
}
}
{
size_t validity_datalen;
Der_type validity_type;
size_t validity_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &validity_type, 4, &validity_datalen, &l);
if (e == 0 && validity_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
(data)->validity = NULL;
} else {
(data)->validity = calloc(1, sizeof(*(data)->validity));
if ((data)->validity == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
validity_oldlen = len;
if (validity_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = validity_datalen;
{
size_t validity_Tag_datalen;
Der_type validity_Tag_type;
size_t validity_Tag_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &validity_Tag_type, UT_Sequence, &validity_Tag_datalen, &l);
if (e == 0 && validity_Tag_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
validity_Tag_oldlen = len;
if (validity_Tag_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = validity_Tag_datalen;
{
size_t notBefore_datalen;
Der_type notBefore_type;
size_t notBefore_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &notBefore_type, 0, &notBefore_datalen, &l);
if (e == 0 && notBefore_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
((data)->validity)->notBefore = NULL;
} else {
((data)->validity)->notBefore = calloc(1, sizeof(*((data)->validity)->notBefore));
if (((data)->validity)->notBefore == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
notBefore_oldlen = len;
if (notBefore_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = notBefore_datalen;
e = decode_Time(p, len, ((data)->validity)->notBefore, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = notBefore_oldlen - notBefore_datalen;
}
}
{
size_t notAfter_datalen;
Der_type notAfter_type;
size_t notAfter_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &notAfter_type, 1, &notAfter_datalen, &l);
if (e == 0 && notAfter_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
((data)->validity)->notAfter = NULL;
} else {
((data)->validity)->notAfter = calloc(1, sizeof(*((data)->validity)->notAfter));
if (((data)->validity)->notAfter == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
notAfter_oldlen = len;
if (notAfter_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = notAfter_datalen;
e = decode_Time(p, len, ((data)->validity)->notAfter, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = notAfter_oldlen - notAfter_datalen;
}
}
len = validity_Tag_oldlen - validity_Tag_datalen;
}
len = validity_oldlen - validity_datalen;
}
}
{
size_t subject_datalen;
Der_type subject_type;
size_t subject_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &subject_type, 5, &subject_datalen, &l);
if (e == 0 && subject_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
(data)->subject = NULL;
} else {
(data)->subject = calloc(1, sizeof(*(data)->subject));
if ((data)->subject == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
subject_oldlen = len;
if (subject_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = subject_datalen;
if (der_match_tag(p, len, ASN1_C_UNIV, CONS, UT_Sequence, NULL) == 0) {
((data)->subject)->element = choice_CertTemplate_subject_rdnSequence;
e = decode_CRMFRDNSequence(p, len, &((data)->subject)->u.rdnSequence, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
}
else {
e = ASN1_PARSE_ERROR;
goto fail;
}
len = subject_oldlen - subject_datalen;
}
}
{
size_t publicKey_datalen;
Der_type publicKey_type;
size_t publicKey_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &publicKey_type, 6, &publicKey_datalen, &l);
if (e == 0 && publicKey_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
(data)->publicKey = NULL;
} else {
(data)->publicKey = calloc(1, sizeof(*(data)->publicKey));
if ((data)->publicKey == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
publicKey_oldlen = len;
if (publicKey_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = publicKey_datalen;
e = decode_AlgorithmIdentifier(p, len, &((data)->publicKey)->algorithm, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
{
size_t subjectPublicKey_datalen;
Der_type subjectPublicKey_type;
size_t subjectPublicKey_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &subjectPublicKey_type, UT_BitString, &subjectPublicKey_datalen, &l);
if (e == 0 && subjectPublicKey_type != PRIM) { e = ASN1_BAD_ID; }
if(e) {
((data)->publicKey)->subjectPublicKey = NULL;
} else {
((data)->publicKey)->subjectPublicKey = calloc(1, sizeof(*((data)->publicKey)->subjectPublicKey));
if (((data)->publicKey)->subjectPublicKey == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
subjectPublicKey_oldlen = len;
if (subjectPublicKey_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = subjectPublicKey_datalen;
e = der_get_bit_string(p, len, ((data)->publicKey)->subjectPublicKey, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = subjectPublicKey_oldlen - subjectPublicKey_datalen;
}
}
len = publicKey_oldlen - publicKey_datalen;
}
}
{
size_t issuerUID_datalen;
Der_type issuerUID_type;
size_t issuerUID_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &issuerUID_type, 7, &issuerUID_datalen, &l);
if (e == 0 && issuerUID_type != PRIM) { e = ASN1_BAD_ID; }
if(e) {
(data)->issuerUID = NULL;
} else {
(data)->issuerUID = calloc(1, sizeof(*(data)->issuerUID));
if ((data)->issuerUID == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
issuerUID_oldlen = len;
if (issuerUID_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = issuerUID_datalen;
e = der_get_bit_string(p, len, (data)->issuerUID, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = issuerUID_oldlen - issuerUID_datalen;
}
}
{
size_t subjectUID_datalen;
Der_type subjectUID_type;
size_t subjectUID_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &subjectUID_type, 8, &subjectUID_datalen, &l);
if (e == 0 && subjectUID_type != PRIM) { e = ASN1_BAD_ID; }
if(e) {
(data)->subjectUID = NULL;
} else {
(data)->subjectUID = calloc(1, sizeof(*(data)->subjectUID));
if ((data)->subjectUID == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
subjectUID_oldlen = len;
if (subjectUID_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = subjectUID_datalen;
e = der_get_bit_string(p, len, (data)->subjectUID, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = subjectUID_oldlen - subjectUID_datalen;
}
}
{
size_t extensions_datalen;
Der_type extensions_type;
size_t extensions_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_CONTEXT, &extensions_type, 9, &extensions_datalen, &l);
if (e == 0 && extensions_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
(data)->extensions = NULL;
} else {
(data)->extensions = calloc(1, sizeof(*(data)->extensions));
if ((data)->extensions == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
extensions_oldlen = len;
if (extensions_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = extensions_datalen;
{
size_t extensions_Tag_origlen = len;
size_t extensions_Tag_oldret = ret;
size_t extensions_Tag_olen = 0;
void *extensions_Tag_tmp;
ret = 0;
((data)->extensions)->len = 0;
((data)->extensions)->val = NULL;
while(ret < extensions_Tag_origlen) {
size_t extensions_Tag_nlen = extensions_Tag_olen + sizeof(*(((data)->extensions)->val));
if (extensions_Tag_olen > extensions_Tag_nlen) { e = ASN1_OVERFLOW; goto fail; }
extensions_Tag_olen = extensions_Tag_nlen;
extensions_Tag_tmp = realloc(((data)->extensions)->val, extensions_Tag_olen);
if (extensions_Tag_tmp == NULL) { e = ENOMEM; goto fail; }
((data)->extensions)->val = extensions_Tag_tmp;
e = decode_Extension(p, len, &((data)->extensions)->val[((data)->extensions)->len], &l);
if(e) goto fail;
p += l; len -= l; ret += l;
((data)->extensions)->len++;
len = extensions_Tag_origlen - ret;
}
ret += extensions_Tag_oldret;
}
len = extensions_oldlen - extensions_datalen;
}
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_CertTemplate(data);
return e;
}

void ASN1CALL
free_CertTemplate(CertTemplate *data)
{
if((data)->version) {
der_free_heim_integer((data)->version);
free((data)->version);
(data)->version = NULL;
}
if((data)->serialNumber) {
der_free_heim_integer((data)->serialNumber);
free((data)->serialNumber);
(data)->serialNumber = NULL;
}
if((data)->signingAlg) {
der_free_oid(&((data)->signingAlg)->algorithm);
if(((data)->signingAlg)->parameters) {
free_HEIM_ANY(((data)->signingAlg)->parameters);
free(((data)->signingAlg)->parameters);
((data)->signingAlg)->parameters = NULL;
}
free((data)->signingAlg);
(data)->signingAlg = NULL;
}
if((data)->issuer) {
switch(((data)->issuer)->element) {
case choice_CertTemplate_issuer_rdnSequence:
free_CRMFRDNSequence(&((data)->issuer)->u.rdnSequence);
break;
}
free((data)->issuer);
(data)->issuer = NULL;
}
if((data)->validity) {
if(((data)->validity)->notBefore) {
free_Time(((data)->validity)->notBefore);
free(((data)->validity)->notBefore);
((data)->validity)->notBefore = NULL;
}
if(((data)->validity)->notAfter) {
free_Time(((data)->validity)->notAfter);
free(((data)->validity)->notAfter);
((data)->validity)->notAfter = NULL;
}
free((data)->validity);
(data)->validity = NULL;
}
if((data)->subject) {
switch(((data)->subject)->element) {
case choice_CertTemplate_subject_rdnSequence:
free_CRMFRDNSequence(&((data)->subject)->u.rdnSequence);
break;
}
free((data)->subject);
(data)->subject = NULL;
}
if((data)->publicKey) {
free_AlgorithmIdentifier(&((data)->publicKey)->algorithm);
if(((data)->publicKey)->subjectPublicKey) {
der_free_bit_string(((data)->publicKey)->subjectPublicKey);
free(((data)->publicKey)->subjectPublicKey);
((data)->publicKey)->subjectPublicKey = NULL;
}
free((data)->publicKey);
(data)->publicKey = NULL;
}
if((data)->issuerUID) {
der_free_bit_string((data)->issuerUID);
free((data)->issuerUID);
(data)->issuerUID = NULL;
}
if((data)->subjectUID) {
der_free_bit_string((data)->subjectUID);
free((data)->subjectUID);
(data)->subjectUID = NULL;
}
if((data)->extensions) {
if (((data)->extensions)->val)
while(((data)->extensions)->len){
free_Extension(&((data)->extensions)->val[((data)->extensions)->len-1]);
((data)->extensions)->len--;
} else ((data)->extensions)->len = 0;
free(((data)->extensions)->val);
((data)->extensions)->val = NULL;
free((data)->extensions);
(data)->extensions = NULL;
}
}

size_t ASN1CALL
length_CertTemplate(const CertTemplate *data)
{
size_t ret = 0;
if((data)->version){
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_heim_integer((data)->version);
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->serialNumber){
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_heim_integer((data)->serialNumber);
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->signingAlg){
size_t Top_tag_oldret = ret;
ret = 0;
{
size_t signingAlg_tag_tag_oldret = ret;
ret = 0;
ret += der_length_oid(&((data)->signingAlg)->algorithm);
ret += 1 + der_length_len (ret);
ret += signingAlg_tag_tag_oldret;
}
if(((data)->signingAlg)->parameters){
size_t signingAlg_tag_tag_oldret = ret;
ret = 0;
ret += length_HEIM_ANY(((data)->signingAlg)->parameters);
ret += signingAlg_tag_tag_oldret;
}
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->issuer){
size_t Top_tag_oldret = ret;
ret = 0;
switch(((data)->issuer)->element) {
case choice_CertTemplate_issuer_rdnSequence:
{
size_t issuer_tag_oldret = ret;
ret = 0;
ret += length_CRMFRDNSequence(&((data)->issuer)->u.rdnSequence);
ret += issuer_tag_oldret;
}
break;
}
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->validity){
size_t Top_tag_oldret = ret;
ret = 0;
if(((data)->validity)->notBefore){
size_t validity_tag_tag_oldret = ret;
ret = 0;
ret += length_Time(((data)->validity)->notBefore);
ret += 1 + der_length_len (ret);
ret += validity_tag_tag_oldret;
}
if(((data)->validity)->notAfter){
size_t validity_tag_tag_oldret = ret;
ret = 0;
ret += length_Time(((data)->validity)->notAfter);
ret += 1 + der_length_len (ret);
ret += validity_tag_tag_oldret;
}
ret += 1 + der_length_len (ret);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->subject){
size_t Top_tag_oldret = ret;
ret = 0;
switch(((data)->subject)->element) {
case choice_CertTemplate_subject_rdnSequence:
{
size_t subject_tag_oldret = ret;
ret = 0;
ret += length_CRMFRDNSequence(&((data)->subject)->u.rdnSequence);
ret += subject_tag_oldret;
}
break;
}
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->publicKey){
size_t Top_tag_oldret = ret;
ret = 0;
{
size_t publicKey_tag_oldret = ret;
ret = 0;
ret += length_AlgorithmIdentifier(&((data)->publicKey)->algorithm);
ret += publicKey_tag_oldret;
}
if(((data)->publicKey)->subjectPublicKey){
size_t publicKey_tag_oldret = ret;
ret = 0;
ret += der_length_bit_string(((data)->publicKey)->subjectPublicKey);
ret += 1 + der_length_len (ret);
ret += publicKey_tag_oldret;
}
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->issuerUID){
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_bit_string((data)->issuerUID);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->subjectUID){
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_bit_string((data)->subjectUID);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
if((data)->extensions){
size_t Top_tag_oldret = ret;
ret = 0;
{
size_t extensions_tag_oldret = ret;
unsigned int n_extensions_tag;
ret = 0;
for(n_extensions_tag = ((data)->extensions)->len; n_extensions_tag > 0; --n_extensions_tag){
size_t extensions_tag_for_oldret = ret;
ret = 0;
ret += length_Extension(&((data)->extensions)->val[n_extensions_tag - 1]);
ret += extensions_tag_for_oldret;
}
ret += extensions_tag_oldret;
}
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_CertTemplate(const CertTemplate *from, CertTemplate *to)
{
memset(to, 0, sizeof(*to));
if((from)->version) {
(to)->version = calloc(1, sizeof(*(to)->version));
if((to)->version == NULL) goto fail;
if(der_copy_heim_integer((from)->version, (to)->version)) goto fail;
}else
(to)->version = NULL;
if((from)->serialNumber) {
(to)->serialNumber = calloc(1, sizeof(*(to)->serialNumber));
if((to)->serialNumber == NULL) goto fail;
if(der_copy_heim_integer((from)->serialNumber, (to)->serialNumber)) goto fail;
}else
(to)->serialNumber = NULL;
if((from)->signingAlg) {
(to)->signingAlg = calloc(1, sizeof(*(to)->signingAlg));
if((to)->signingAlg == NULL) goto fail;
if(der_copy_oid(&((from)->signingAlg)->algorithm, &((to)->signingAlg)->algorithm)) goto fail;
if(((from)->signingAlg)->parameters) {
((to)->signingAlg)->parameters = calloc(1, sizeof(*((to)->signingAlg)->parameters));
if(((to)->signingAlg)->parameters == NULL) goto fail;
if(copy_HEIM_ANY(((from)->signingAlg)->parameters, ((to)->signingAlg)->parameters)) goto fail;
}else
((to)->signingAlg)->parameters = NULL;
}else
(to)->signingAlg = NULL;
if((from)->issuer) {
(to)->issuer = calloc(1, sizeof(*(to)->issuer));
if((to)->issuer == NULL) goto fail;
((to)->issuer)->element = ((from)->issuer)->element;
switch(((from)->issuer)->element) {
case choice_CertTemplate_issuer_rdnSequence:
if(copy_CRMFRDNSequence(&((from)->issuer)->u.rdnSequence, &((to)->issuer)->u.rdnSequence)) goto fail;
break;
}
}else
(to)->issuer = NULL;
if((from)->validity) {
(to)->validity = calloc(1, sizeof(*(to)->validity));
if((to)->validity == NULL) goto fail;
if(((from)->validity)->notBefore) {
((to)->validity)->notBefore = calloc(1, sizeof(*((to)->validity)->notBefore));
if(((to)->validity)->notBefore == NULL) goto fail;
if(copy_Time(((from)->validity)->notBefore, ((to)->validity)->notBefore)) goto fail;
}else
((to)->validity)->notBefore = NULL;
if(((from)->validity)->notAfter) {
((to)->validity)->notAfter = calloc(1, sizeof(*((to)->validity)->notAfter));
if(((to)->validity)->notAfter == NULL) goto fail;
if(copy_Time(((from)->validity)->notAfter, ((to)->validity)->notAfter)) goto fail;
}else
((to)->validity)->notAfter = NULL;
}else
(to)->validity = NULL;
if((from)->subject) {
(to)->subject = calloc(1, sizeof(*(to)->subject));
if((to)->subject == NULL) goto fail;
((to)->subject)->element = ((from)->subject)->element;
switch(((from)->subject)->element) {
case choice_CertTemplate_subject_rdnSequence:
if(copy_CRMFRDNSequence(&((from)->subject)->u.rdnSequence, &((to)->subject)->u.rdnSequence)) goto fail;
break;
}
}else
(to)->subject = NULL;
if((from)->publicKey) {
(to)->publicKey = calloc(1, sizeof(*(to)->publicKey));
if((to)->publicKey == NULL) goto fail;
if(copy_AlgorithmIdentifier(&((from)->publicKey)->algorithm, &((to)->publicKey)->algorithm)) goto fail;
if(((from)->publicKey)->subjectPublicKey) {
((to)->publicKey)->subjectPublicKey = calloc(1, sizeof(*((to)->publicKey)->subjectPublicKey));
if(((to)->publicKey)->subjectPublicKey == NULL) goto fail;
if(der_copy_bit_string(((from)->publicKey)->subjectPublicKey, ((to)->publicKey)->subjectPublicKey)) goto fail;
}else
((to)->publicKey)->subjectPublicKey = NULL;
}else
(to)->publicKey = NULL;
if((from)->issuerUID) {
(to)->issuerUID = calloc(1, sizeof(*(to)->issuerUID));
if((to)->issuerUID == NULL) goto fail;
if(der_copy_bit_string((from)->issuerUID, (to)->issuerUID)) goto fail;
}else
(to)->issuerUID = NULL;
if((from)->subjectUID) {
(to)->subjectUID = calloc(1, sizeof(*(to)->subjectUID));
if((to)->subjectUID == NULL) goto fail;
if(der_copy_bit_string((from)->subjectUID, (to)->subjectUID)) goto fail;
}else
(to)->subjectUID = NULL;
if((from)->extensions) {
(to)->extensions = calloc(1, sizeof(*(to)->extensions));
if((to)->extensions == NULL) goto fail;
if((((to)->extensions)->val = calloc(1, ((from)->extensions)->len * sizeof(*((to)->extensions)->val))) == NULL && ((from)->extensions)->len != 0)
goto fail;
for(((to)->extensions)->len = 0; ((to)->extensions)->len < ((from)->extensions)->len; ((to)->extensions)->len++){
if(copy_Extension(&((from)->extensions)->val[((to)->extensions)->len], &((to)->extensions)->val[((to)->extensions)->len])) goto fail;
}
}else
(to)->extensions = NULL;
return 0;
fail:
free_CertTemplate(to);
return ENOMEM;
}

char * ASN1CALL
print_CertTemplate(const CertTemplate *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_CertRequest(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const CertRequest *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

/* controls */
if((data)->controls) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_Controls(p, len, (data)->controls, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* certTemplate */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_CertTemplate(p, len, &(data)->certTemplate, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* certReqId */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = der_put_heim_integer(p, len, &(data)->certReqId, &l);
if (e) return e;
p -= l; len -= l; ret += l;

e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, PRIM, UT_Integer, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_CertRequest(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, CertRequest *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen;
Der_type Top_type;
size_t Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &Top_type, UT_Sequence, &Top_datalen, &l);
if (e == 0 && Top_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
{
size_t certReqId_datalen;
Der_type certReqId_type;
size_t certReqId_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &certReqId_type, UT_Integer, &certReqId_datalen, &l);
if (e == 0 && certReqId_type != PRIM) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
certReqId_oldlen = len;
if (certReqId_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = certReqId_datalen;
e = der_get_heim_integer(p, len, &(data)->certReqId, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
len = certReqId_oldlen - certReqId_datalen;
}
e = decode_CertTemplate(p, len, &(data)->certTemplate, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
(data)->controls = calloc(1, sizeof(*(data)->controls));
if ((data)->controls == NULL) goto fail;
e = decode_Controls(p, len, (data)->controls, &l);
if(e == ASN1_MISSING_FIELD) {
free((data)->controls);
(data)->controls = NULL;
} else if (e) { goto fail; 
} else {
p += l; len -= l; ret += l;
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_CertRequest(data);
return e;
}

void ASN1CALL
free_CertRequest(CertRequest *data)
{
der_free_heim_integer(&(data)->certReqId);
free_CertTemplate(&(data)->certTemplate);
if((data)->controls) {
free_Controls((data)->controls);
free((data)->controls);
(data)->controls = NULL;
}
}

size_t ASN1CALL
length_CertRequest(const CertRequest *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += der_length_heim_integer(&(data)->certReqId);
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_CertTemplate(&(data)->certTemplate);
ret += Top_tag_oldret;
}
if((data)->controls){
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_Controls((data)->controls);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_CertRequest(const CertRequest *from, CertRequest *to)
{
memset(to, 0, sizeof(*to));
if(der_copy_heim_integer(&(from)->certReqId, &(to)->certReqId)) goto fail;
if(copy_CertTemplate(&(from)->certTemplate, &(to)->certTemplate)) goto fail;
if((from)->controls) {
(to)->controls = calloc(1, sizeof(*(to)->controls));
if((to)->controls == NULL) goto fail;
if(copy_Controls((from)->controls, (to)->controls)) goto fail;
}else
(to)->controls = NULL;
return 0;
fail:
free_CertRequest(to);
return ENOMEM;
}

char * ASN1CALL
print_CertRequest(const CertRequest *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_CertReqMsg(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const CertReqMsg *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

/* regInfo */
if((data)->regInfo) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
for(i = (int)((data)->regInfo)->len - 1; i >= 0; --i) {
size_t regInfo_tag_for_oldret = ret;
ret = 0;
e = encode_AttributeTypeAndValue(p, len, &((data)->regInfo)->val[i], &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += regInfo_tag_for_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* popo */
if((data)->popo) {
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_ProofOfPossession(p, len, (data)->popo, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
/* certReq */
{
size_t Top_tag_oldret HEIMDAL_UNUSED_ATTRIBUTE = ret;
ret = 0;
e = encode_CertRequest(p, len, &(data)->certReq, &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_CertReqMsg(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, CertReqMsg *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen;
Der_type Top_type;
size_t Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &Top_type, UT_Sequence, &Top_datalen, &l);
if (e == 0 && Top_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
e = decode_CertRequest(p, len, &(data)->certReq, &l);
if(e) goto fail;
p += l; len -= l; ret += l;
(data)->popo = calloc(1, sizeof(*(data)->popo));
if ((data)->popo == NULL) goto fail;
e = decode_ProofOfPossession(p, len, (data)->popo, &l);
if(e == ASN1_MISSING_FIELD) {
free((data)->popo);
(data)->popo = NULL;
} else if (e) { goto fail; 
} else {
p += l; len -= l; ret += l;
}
{
size_t regInfo_datalen;
Der_type regInfo_type;
size_t regInfo_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &regInfo_type, UT_Sequence, &regInfo_datalen, &l);
if (e == 0 && regInfo_type != CONS) { e = ASN1_BAD_ID; }
if(e) {
(data)->regInfo = NULL;
} else {
(data)->regInfo = calloc(1, sizeof(*(data)->regInfo));
if ((data)->regInfo == NULL) { e = ENOMEM; goto fail; }
p += l; len -= l; ret += l;
regInfo_oldlen = len;
if (regInfo_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = regInfo_datalen;
{
size_t regInfo_Tag_origlen = len;
size_t regInfo_Tag_oldret = ret;
size_t regInfo_Tag_olen = 0;
void *regInfo_Tag_tmp;
ret = 0;
((data)->regInfo)->len = 0;
((data)->regInfo)->val = NULL;
while(ret < regInfo_Tag_origlen) {
size_t regInfo_Tag_nlen = regInfo_Tag_olen + sizeof(*(((data)->regInfo)->val));
if (regInfo_Tag_olen > regInfo_Tag_nlen) { e = ASN1_OVERFLOW; goto fail; }
regInfo_Tag_olen = regInfo_Tag_nlen;
regInfo_Tag_tmp = realloc(((data)->regInfo)->val, regInfo_Tag_olen);
if (regInfo_Tag_tmp == NULL) { e = ENOMEM; goto fail; }
((data)->regInfo)->val = regInfo_Tag_tmp;
e = decode_AttributeTypeAndValue(p, len, &((data)->regInfo)->val[((data)->regInfo)->len], &l);
if(e) goto fail;
p += l; len -= l; ret += l;
((data)->regInfo)->len++;
len = regInfo_Tag_origlen - ret;
}
ret += regInfo_Tag_oldret;
}
len = regInfo_oldlen - regInfo_datalen;
}
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_CertReqMsg(data);
return e;
}

void ASN1CALL
free_CertReqMsg(CertReqMsg *data)
{
free_CertRequest(&(data)->certReq);
if((data)->popo) {
free_ProofOfPossession((data)->popo);
free((data)->popo);
(data)->popo = NULL;
}
if((data)->regInfo) {
if (((data)->regInfo)->val)
while(((data)->regInfo)->len){
free_AttributeTypeAndValue(&((data)->regInfo)->val[((data)->regInfo)->len-1]);
((data)->regInfo)->len--;
} else ((data)->regInfo)->len = 0;
free(((data)->regInfo)->val);
((data)->regInfo)->val = NULL;
free((data)->regInfo);
(data)->regInfo = NULL;
}
}

size_t ASN1CALL
length_CertReqMsg(const CertReqMsg *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_CertRequest(&(data)->certReq);
ret += Top_tag_oldret;
}
if((data)->popo){
size_t Top_tag_oldret = ret;
ret = 0;
ret += length_ProofOfPossession((data)->popo);
ret += Top_tag_oldret;
}
if((data)->regInfo){
size_t Top_tag_oldret = ret;
ret = 0;
{
size_t regInfo_tag_oldret = ret;
unsigned int n_regInfo_tag;
ret = 0;
for(n_regInfo_tag = ((data)->regInfo)->len; n_regInfo_tag > 0; --n_regInfo_tag){
size_t regInfo_tag_for_oldret = ret;
ret = 0;
ret += length_AttributeTypeAndValue(&((data)->regInfo)->val[n_regInfo_tag - 1]);
ret += regInfo_tag_for_oldret;
}
ret += regInfo_tag_oldret;
}
ret += 1 + der_length_len (ret);
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_CertReqMsg(const CertReqMsg *from, CertReqMsg *to)
{
memset(to, 0, sizeof(*to));
if(copy_CertRequest(&(from)->certReq, &(to)->certReq)) goto fail;
if((from)->popo) {
(to)->popo = calloc(1, sizeof(*(to)->popo));
if((to)->popo == NULL) goto fail;
if(copy_ProofOfPossession((from)->popo, (to)->popo)) goto fail;
}else
(to)->popo = NULL;
if((from)->regInfo) {
(to)->regInfo = calloc(1, sizeof(*(to)->regInfo));
if((to)->regInfo == NULL) goto fail;
if((((to)->regInfo)->val = calloc(1, ((from)->regInfo)->len * sizeof(*((to)->regInfo)->val))) == NULL && ((from)->regInfo)->len != 0)
goto fail;
for(((to)->regInfo)->len = 0; ((to)->regInfo)->len < ((from)->regInfo)->len; ((to)->regInfo)->len++){
if(copy_AttributeTypeAndValue(&((from)->regInfo)->val[((to)->regInfo)->len], &((to)->regInfo)->val[((to)->regInfo)->len])) goto fail;
}
}else
(to)->regInfo = NULL;
return 0;
fail:
free_CertReqMsg(to);
return ENOMEM;
}

char * ASN1CALL
print_CertReqMsg(const CertReqMsg *data, int flags)
{ errno = EINVAL; return 0; }

int ASN1CALL
encode_CertReqMessages(unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, const CertReqMessages *data, size_t *size)
{
size_t ret HEIMDAL_UNUSED_ATTRIBUTE = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int i HEIMDAL_UNUSED_ATTRIBUTE, e HEIMDAL_UNUSED_ATTRIBUTE;

for(i = (int)(data)->len - 1; i >= 0; --i) {
size_t Top_tag_for_oldret = ret;
ret = 0;
e = encode_CertReqMsg(p, len, &(data)->val[i], &l);
if (e) return e;
p -= l; len -= l; ret += l;

ret += Top_tag_for_oldret;
}
e = der_put_length_and_tag (p, len, ret, ASN1_C_UNIV, CONS, UT_Sequence, &l);
if (e) return e;
p -= l; len -= l; ret += l;

*size = ret;
return 0;
}

int ASN1CALL
decode_CertReqMessages(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE, size_t len HEIMDAL_UNUSED_ATTRIBUTE, CertReqMessages *data, size_t *size)
{
size_t ret = 0;
size_t l HEIMDAL_UNUSED_ATTRIBUTE;
int e HEIMDAL_UNUSED_ATTRIBUTE;

memset(data, 0, sizeof(*data));
{
size_t Top_datalen;
Der_type Top_type;
size_t Top_oldlen;
e = der_match_tag_and_length(p, len, ASN1_C_UNIV, &Top_type, UT_Sequence, &Top_datalen, &l);
if (e == 0 && Top_type != CONS) { e = ASN1_BAD_ID; }
if (e) goto fail;
p += l; len -= l; ret += l;
Top_oldlen = len;
if (Top_datalen > len) { e = ASN1_OVERRUN; goto fail; }
len = Top_datalen;
{
size_t Top_Tag_origlen = len;
size_t Top_Tag_oldret = ret;
size_t Top_Tag_olen = 0;
void *Top_Tag_tmp;
ret = 0;
(data)->len = 0;
(data)->val = NULL;
while(ret < Top_Tag_origlen) {
size_t Top_Tag_nlen = Top_Tag_olen + sizeof(*((data)->val));
if (Top_Tag_olen > Top_Tag_nlen) { e = ASN1_OVERFLOW; goto fail; }
Top_Tag_olen = Top_Tag_nlen;
Top_Tag_tmp = realloc((data)->val, Top_Tag_olen);
if (Top_Tag_tmp == NULL) { e = ENOMEM; goto fail; }
(data)->val = Top_Tag_tmp;
e = decode_CertReqMsg(p, len, &(data)->val[(data)->len], &l);
if(e) goto fail;
p += l; len -= l; ret += l;
(data)->len++;
len = Top_Tag_origlen - ret;
}
ret += Top_Tag_oldret;
}
len = Top_oldlen - Top_datalen;
}
if(size) *size = ret;
return 0;
fail:
free_CertReqMessages(data);
return e;
}

void ASN1CALL
free_CertReqMessages(CertReqMessages *data)
{
if ((data)->val)
while((data)->len){
free_CertReqMsg(&(data)->val[(data)->len-1]);
(data)->len--;
} else (data)->len = 0;
free((data)->val);
(data)->val = NULL;
}

size_t ASN1CALL
length_CertReqMessages(const CertReqMessages *data)
{
size_t ret = 0;
{
size_t Top_tag_oldret = ret;
unsigned int n_Top_tag;
ret = 0;
for(n_Top_tag = (data)->len; n_Top_tag > 0; --n_Top_tag){
size_t Top_tag_for_oldret = ret;
ret = 0;
ret += length_CertReqMsg(&(data)->val[n_Top_tag - 1]);
ret += Top_tag_for_oldret;
}
ret += Top_tag_oldret;
}
ret += 1 + der_length_len (ret);
return ret;
}

int ASN1CALL
copy_CertReqMessages(const CertReqMessages *from, CertReqMessages *to)
{
memset(to, 0, sizeof(*to));
if(((to)->val = calloc(1, (from)->len * sizeof(*(to)->val))) == NULL && (from)->len != 0)
goto fail;
for((to)->len = 0; (to)->len < (from)->len; (to)->len++){
if(copy_CertReqMsg(&(from)->val[(to)->len], &(to)->val[(to)->len])) goto fail;
}
return 0;
fail:
free_CertReqMessages(to);
return ENOMEM;
}

char * ASN1CALL
print_CertReqMessages(const CertReqMessages *data, int flags)
{ errno = EINVAL; return 0; }

