//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebDelegate-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSPromise, AMSUIPaymentVerificationMetrics, NSDictionary, NSString, UIViewController, WrappedAMSUIWebViewController;
@protocol AMSBagProtocol;

@interface AMSUIPaymentVerificationTokenFetchTask : AMSTask <AMSBagConsumer, AMSUIWebDelegate>
{
    ACAccount *_account;
    NSDictionary *_accountParameters;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    NSString *_displayName;
    unsigned long long _mode;
    UIViewController *_viewController;
    AMSUIPaymentVerificationMetrics *_metrics;
    AMSPromise *_resultPromise;
    WrappedAMSUIWebViewController *_webVC;
}

+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (id)_tokenFromDictionary:(id)arg1;
+ (id)accountForNetworkingFromAccount:(id)arg1 accountParameters:(id)arg2 accountStore:(id)arg3;
+ (id)performCardOnFileTask:(id)arg1;
+ (id)performApplePayTask:(id)arg1;
+ (id)_promiseToTryNextFlowWithResult:(id)arg1 error:(id)arg2 continuationBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) WrappedAMSUIWebViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) AMSPromise *resultPromise; // @synthesize resultPromise=_resultPromise;
@property(retain, nonatomic) AMSUIPaymentVerificationMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) NSDictionary *accountParameters; // @synthesize accountParameters=_accountParameters;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_finishPromiseWithResult:(id)arg1 error:(id)arg2;
- (void)setHeader:(id)arg1 withValueIn:(id)arg2 forKey:(id)arg3 onRequest:(id)arg4;
- (void)webViewController:(id)arg1 didEncodeNetworkRequest:(id)arg2;
- (void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)performWebFlowTask;
- (id)performCardOnFileTaskWithFeatureFlag:(_Bool)arg1;
- (id)performApplePayTaskWithFeatureFlag:(_Bool)arg1;
- (id)performTask;
- (id)initWithMode:(unsigned long long)arg1 accountParameters:(id)arg2 viewController:(id)arg3 bag:(id)arg4 displayName:(id)arg5;
- (id)initWithMode:(unsigned long long)arg1 account:(id)arg2 viewController:(id)arg3 bag:(id)arg4 displayName:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
