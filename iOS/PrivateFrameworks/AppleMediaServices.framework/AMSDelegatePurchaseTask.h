//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSBiometricsSignatureRequest, AMSDelegatePurchaseRequest, AMSPaymentSheetResult, AMSURLResult, AMSURLTaskInfo;

@interface AMSDelegatePurchaseTask
{
    AMSDelegatePurchaseRequest *_request;
    AMSBiometricsSignatureRequest *_biometricsRequest;
    AMSURLResult *_delegateAuthResult;
    AMSURLTaskInfo *_delegateAuthTaskInfo;
    AMSPaymentSheetResult *_paymentSheetResult;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSPaymentSheetResult *paymentSheetResult; // @synthesize paymentSheetResult=_paymentSheetResult;
@property(retain, nonatomic) AMSURLTaskInfo *delegateAuthTaskInfo; // @synthesize delegateAuthTaskInfo=_delegateAuthTaskInfo;
@property(retain, nonatomic) AMSURLResult *delegateAuthResult; // @synthesize delegateAuthResult=_delegateAuthResult;
@property(retain, nonatomic) AMSBiometricsSignatureRequest *biometricsRequest; // @synthesize biometricsRequest=_biometricsRequest;
@property(readonly, nonatomic) AMSDelegatePurchaseRequest *request; // @synthesize request=_request;
- (id)_performPaymentSheetTask;
- (id)_performAuthenticateTaskWithPaymentSheet;
- (id)_performAuthenticateTaskWithPaymentSheetResult:(id)arg1;
- (id)_parseFormDataFromResult:(id)arg1;
- (void)_parseBiometricsSignatureRequestFromTask:(id)arg1;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)performDelegatePurchase;
- (id)initWithDelegatePurchaseRequest:(id)arg1 bag:(id)arg2 account:(id)arg3;

@end
