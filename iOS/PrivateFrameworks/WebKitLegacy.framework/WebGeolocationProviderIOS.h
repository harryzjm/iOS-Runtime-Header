//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebGeolocationProvider-Protocol.h>

@class NSString;

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider>
{
    struct RetainPtr<WebGeolocationCoreLocationProvider> _coreLocationProvider;
    struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> _coreLocationUpdateListenerProxy;
    _Bool _enableHighAccuracy;
    _Bool _isSuspended;
    _Bool _shouldResetOnResume;
    struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>> _webViewsWaitingForCoreLocationAuthorization;
    struct HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>> _pendingInitialPositionWebView;
    struct HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>> _registeredWebViews;
    struct HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>> _trackedWebViews;
    struct RetainPtr<NSTimer> _sendLastPositionAsynchronouslyTimer;
    struct RetainPtr<WebGeolocationPosition> _lastPosition;
}

+ (id)sharedGeolocationProvider;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetGeolocation;
- (void)errorOccurred:(id)arg1;
- (void)positionChanged:(id)arg1;
- (void)stopTrackingWebView:(id)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;
- (void)setEnableHighAccuracy:(_Bool)arg1;
- (id)lastPosition;
- (void)unregisterWebView:(id)arg1;
- (void)registerWebView:(id)arg1;
- (void)_handlePendingInitialPosition:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
