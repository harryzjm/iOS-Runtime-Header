//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL, PKPaymentMethod;

@interface PKPaymentToken : NSObject <NSSecureCoding>
{
    PKPaymentMethod *_paymentMethod;
    NSString *_paymentInstrumentName;
    NSString *_paymentNetwork;
    NSString *_transactionIdentifier;
    NSData *_paymentData;
    NSURL *_redeemURL;
    NSString *_retryNonce;
}

+ (id)simulatedTokenForNetwork:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (long long)version;
+ (id)paymentTokenWithProtobuf:(id)arg1;
@property(copy, nonatomic) NSString *retryNonce; // @synthesize retryNonce=_retryNonce;
@property(retain, nonatomic) NSURL *redeemURL; // @synthesize redeemURL=_redeemURL;
@property(copy, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(copy, nonatomic) NSString *paymentNetwork; // @synthesize paymentNetwork=_paymentNetwork;
@property(copy, nonatomic) NSString *paymentInstrumentName; // @synthesize paymentInstrumentName=_paymentInstrumentName;
@property(retain, nonatomic) PKPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;

@end
