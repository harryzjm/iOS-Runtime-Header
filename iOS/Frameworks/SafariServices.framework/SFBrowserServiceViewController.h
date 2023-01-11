//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/SFServiceViewControllerProtocol-Protocol.h>
#import <SafariServices/_SFActivityDelegate-Protocol.h>
#import <SafariServices/_SFLinkPreviewHeaderDelegate-Protocol.h>

@class NSDate, NSString, NSTimer, SFBrowserPersonaAnalyticsHelper, SFSystemAlert, WKProcessPool, _SFWebViewUsageMonitor;

__attribute__((visibility("hidden")))
@interface SFBrowserServiceViewController <_SFActivityDelegate, _SFLinkPreviewHeaderDelegate, SFServiceViewControllerProtocol>
{
    CDUnknownBlockType _activityViewControllerInfoFetchCompletionHandler;
    _SFWebViewUsageMonitor *_usageMonitor;
    NSDate *_lastHostApplicationSuspendDate;
    WKProcessPool *_processPool;
    _Bool _usingSharedProcessPool;
    _Bool _canNotifyHostApplicationOfRedirects;
    _Bool _touchEventsShouldStopRedirectNotifications;
    _Bool _isExpectingClientRedirect;
    _Bool _hasBegunFirstNavigation;
    _Bool _hasConnectedToHostApplication;
    SFBrowserPersonaAnalyticsHelper *_cachedAnalyticsHelper;
    NSTimer *_redirectNotificationTimer;
    _Bool _hostApplicationIsForeground;
    _Bool _isUsedForAuthentication;
    SFSystemAlert *_webAuthenticationDataSharingConfirmation;
    NSString *_hostApplicationCallbackURLScheme;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *hostApplicationCallbackURLScheme; // @synthesize hostApplicationCallbackURLScheme=_hostApplicationCallbackURLScheme;
@property(retain, nonatomic) SFSystemAlert *webAuthenticationDataSharingConfirmation; // @synthesize webAuthenticationDataSharingConfirmation=_webAuthenticationDataSharingConfirmation;
@property(nonatomic) _Bool _isUsedForAuthentication; // @synthesize _isUsedForAuthentication;
- (void)linkPreviewHeader:(id)arg1 didEnableLinkPreview:(_Bool)arg2;
- (void)browserViewDidReceiveTouchEvent:(id)arg1;
- (void)safariActivity:(id)arg1 didFinish:(_Bool)arg2;
- (void)webViewControllerWebProcessDidCrash:(id)arg1;
- (void)webViewController:(id)arg1 didChangeFullScreen:(_Bool)arg2;
- (void)webViewController:(id)arg1 didFinishDocumentLoadForNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewController:(id)arg1 willPerformClientRedirectToURL:(id)arg2 withDelay:(double)arg3;
- (void)webViewControllerDidCancelClientRedirect:(id)arg1;
- (void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (_Bool)_shouldReloadImmediatelyAfterPageLoadError;
- (id)_hostAppBundleId;
- (unsigned long long)_persona;
- (id)_analyticsHelper;
- (id)bundleIdentifierForProfileInstallation;
- (id)_applicationPayloadForOpeningInSafari;
- (void)_closeDatabasesOnBackgroundingOrDismissal;
- (void)_recordHostAppIdAndURLForTapToRadar:(id)arg1;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_didLoadWebView;
- (_Bool)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2;
- (_Bool)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg1;
- (_Bool)_notifyInitialLoadDidFinish:(_Bool)arg1;
- (void)_updateRemoteSwipeGestureState;
- (void)_dismiss;
- (void)didRequestShowLinkPreviews:(_Bool)arg1;
- (void)didDetectUserInteractionFromHostApp;
- (void)didDetectRemoteViewControllerViewIsHidden;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)setIsRunningTransitionAnimation:(_Bool)arg1;
- (void)repostNotificationInViewService:(id)arg1;
- (void)_fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didFetchCustomActivities:(id)arg1 excludedActivityTypes:(id)arg2;
- (void)_getSafariDataSharingModeWithCompletion:(CDUnknownBlockType)arg1;
- (id)websiteDataStoreConfiguration;
- (_Bool)_ensureWebsiteDataStoreURL:(id)arg1 cookieStoreURL:(id)arg2;
- (id)_websiteDataStoreURLForHSTSStorage:(_Bool)arg1;
- (id)_webDataStoreRootURLForHSTSStorage:(_Bool)arg1;
- (void)_openCurrentURLInSafari;
- (void)openCurrentURLInSafariFromPreviewAction;
- (void)_didResolveDestinationURL:(id)arg1 pendingAppLinkCheck:(_Bool)arg2;
- (void)prepareForDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startResolveRedirectionForURL:(id)arg1;
- (void)decideCookieSharingForURL:(id)arg1 callbackURLScheme:(id)arg2;
- (void)loadURL:(id)arg1;
- (id)processPool;
- (void)updateScrollViewIndicatorVerticalInsets:(struct UIEdgeInsets)arg1 horizontalInsets:(struct UIEdgeInsets)arg2;
- (id)processPoolConfiguration;
- (void)setPreferredBarTintColor:(id)arg1 controlTintColor:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)setDisplayMode:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_willAppearInRemoteViewController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
