//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CPSPromise, LoadingViewController, NSString, NSTimer, UIWebClip, _SFWebAppViewController, _UIAsyncInvocation;

__attribute__((visibility("hidden")))
@interface WebAppViewController : UIViewController
{
    _SFWebAppViewController *_contentViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    _Bool _hasShownLoadingViewController;
    _Bool _hasCustomScheme;
    LoadingViewController *_loadingViewController;
    long long _orientation;
    NSTimer *_hideSnapshotTimer;
    CPSPromise *_connectionPromiseForPush;
    _Bool _wasLaunchedForWebPush;
    UIWebClip *_webClip;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool wasLaunchedForWebPush; // @synthesize wasLaunchedForWebPush=_wasLaunchedForWebPush;
@property(readonly, nonatomic) UIWebClip *webClip; // @synthesize webClip=_webClip;
- (void)webAppViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)webAppViewControllerDidFinishInitialLoad:(id)arg1;
- (void)webAppViewController:(id)arg1 didChangeLoadingState:(_Bool)arg2;
- (void)processWebPushWithIdentifier:(id)arg1;
- (void)openURLWithCustomSchemeIfNeeded;
- (void)viewDidAppear:(_Bool)arg1;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)hideLoadingView;
- (void)timeLimitForLoadCompletionExpired;
- (void)_cancelHideSnapshotTimer;
- (void)_setUpContentViewController:(id)arg1;
- (void)_removeRemoteView;
- (void)_connectToService;
- (void)dealloc;
- (id)initWithWebClip:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

