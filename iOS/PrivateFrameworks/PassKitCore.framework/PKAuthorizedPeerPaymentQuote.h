//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, PKPeerPaymentQuote;

@interface PKAuthorizedPeerPaymentQuote : NSObject <NSSecureCoding>
{
    PKPeerPaymentQuote *_peerPaymentQuote;
    NSData *_transactionData;
    NSDictionary *_certificates;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDictionary *certificates; // @synthesize certificates=_certificates;
@property(readonly, nonatomic) NSData *transactionData; // @synthesize transactionData=_transactionData;
@property(readonly, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // @synthesize peerPaymentQuote=_peerPaymentQuote;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuote:(id)arg1 transactionData:(id)arg2 certificates:(id)arg3;

@end

