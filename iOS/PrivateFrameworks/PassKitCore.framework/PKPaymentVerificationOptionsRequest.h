//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKPaymentPass;

@interface PKPaymentVerificationOptionsRequest
{
    NSString *_stepIdentifier;
    PKPaymentPass *_pass;
}

+ (id)requestWithPass:(id)arg1;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(copy, nonatomic) NSString *stepIdentifier; // @synthesize stepIdentifier=_stepIdentifier;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3;

@end
