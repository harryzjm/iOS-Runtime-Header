//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate-Protocol.h>
#import <HealthUI/_HKRecalibrateEstimatesPresentationController-Protocol.h>

@class HKHealthPrivacyHostRecalibrateEstimatesViewController, NSString, UIWindow, _UIAsyncInvocation;

@interface HKRecalibrateEstimatesPresentationController : NSObject <HKHealthPrivacyHostRecalibrateEstimatesControllerDelegate, _HKRecalibrateEstimatesPresentationController>
{
    _Bool _didPresent;
    _UIAsyncInvocation *_requestCancellationInvocation;
    HKHealthPrivacyHostRecalibrateEstimatesViewController *_hostViewController;
    UIWindow *_savedKeyWindow;
    UIWindow *_window;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didPresent; // @synthesize didPresent=_didPresent;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIWindow *savedKeyWindow; // @synthesize savedKeyWindow=_savedKeyWindow;
@property(retain, nonatomic) HKHealthPrivacyHostRecalibrateEstimatesViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) _UIAsyncInvocation *requestCancellationInvocation; // @synthesize requestCancellationInvocation=_requestCancellationInvocation;
- (void)healthPrivacyHostRecalibrateEstimatesControllerDidFinishWithError:(id)arg1;
- (void)_dismissRemoteViewController;
- (void)_makeRemoteViewControllerKeyAndVisible:(id)arg1;
- (void)_requestAndConfigureHostViewController:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentWithRequestRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
