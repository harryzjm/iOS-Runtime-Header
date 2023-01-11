//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, PKApplePayTrustSignatureRequest;

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding>
{
    PKApplePayTrustSignatureRequest *_signatureRequest;
    NSData *_signatureData;
    NSData *_paymentData;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(readonly, copy, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(readonly, nonatomic) PKApplePayTrustSignatureRequest *signatureRequest; // @synthesize signatureRequest=_signatureRequest;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignatureRequest:(id)arg1 signature:(id)arg2;

@end
