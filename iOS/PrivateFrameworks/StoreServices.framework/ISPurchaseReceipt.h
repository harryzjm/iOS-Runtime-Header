//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ISPurchaseReceipt : NSObject
{
    NSString *_cancellationReason;
    NSDate *_expirationDate;
    NSDate *_receiptCreationDate;
    NSDate *_renewalDate;
}

+ (id)receiptWithContentsOfFile:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (long long)_verifySignatureForSignedData:(struct SecCmsSignedDataStr *)arg1 onDate:(id)arg2;
- (_Bool)_setPoliciesForTrust:(struct __SecTrust *)arg1;
- (void)_parseTokens:(id)arg1;
- (_Bool)_parseReceiptFromMessage:(struct SecCmsMessageStr *)arg1;
- (struct SecCmsSignedDataStr *)_extractSignedDataFromMessage:(struct SecCmsMessageStr *)arg1;
- (_Bool)_decodeReceiptData:(id)arg1 toDecodedMessage:(inout struct SecCmsMessageStr **)arg2;
- (struct __CFArray *)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr *)arg1;
- (_Bool)_checkIfCertificate:(struct __SecCertificate *)arg1 containsOID:(struct __CFString *)arg2;
- (_Bool)_checkArray:(struct __CFArray *)arg1 containsCertificateWithOID:(struct __CFString *)arg2;
- (_Bool)_anchorTrust:(struct __SecTrust *)arg1 toRootCertificateIn:(struct __CFArray *)arg2;
@property(readonly) _Bool isVPPLicensed;
@property(readonly) _Bool isRevoked;
- (id)initWithContentsOfFile:(id)arg1;

@end
