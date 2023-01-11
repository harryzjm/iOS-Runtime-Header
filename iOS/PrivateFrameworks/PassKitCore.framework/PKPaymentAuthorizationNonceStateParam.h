//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, PKAuthenticatorEvaluationResponse;

@interface PKPaymentAuthorizationNonceStateParam
{
    NSData *_credential;
    PKAuthenticatorEvaluationResponse *_evaluationResponse;
}

+ (id)paramWithAuthenticatorEvaluationResponse:(id)arg1;
+ (id)paramWithCredential:(id)arg1;
@property(retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse; // @synthesize evaluationResponse=_evaluationResponse;
@property(retain, nonatomic) NSData *credential; // @synthesize credential=_credential;
- (void).cxx_destruct;
- (id)description;

@end

