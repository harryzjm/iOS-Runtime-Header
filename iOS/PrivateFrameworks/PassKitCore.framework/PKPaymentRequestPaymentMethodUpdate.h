//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PKPeerPaymentQuote;

@interface PKPaymentRequestPaymentMethodUpdate <NSSecureCoding>
{
    PKPeerPaymentQuote *_peerPaymentQuote;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) PKPeerPaymentQuote *peerPaymentQuote; // @synthesize peerPaymentQuote=_peerPaymentQuote;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

