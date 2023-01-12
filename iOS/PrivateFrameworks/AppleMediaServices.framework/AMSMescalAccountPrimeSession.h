//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMescalSession;
@protocol AMSBagProtocol;

@interface AMSMescalAccountPrimeSession : NSObject
{
    id <AMSBagProtocol> _bag;
    AMSMescalSession *_session;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSMescalSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (id)verifyPrimeSignature:(id)arg1;
- (id)signData:(id)arg1;
- (id)primeSignatureForData:(id)arg1;
- (id)initWithBag:(id)arg1;

@end
