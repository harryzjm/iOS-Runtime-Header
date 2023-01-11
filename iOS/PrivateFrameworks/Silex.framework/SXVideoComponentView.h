//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/SWReachabilityObserver-Protocol.h>
#import <Silex/SXFullscreenVideoPlaybackCandidate-Protocol.h>
#import <Silex/SXMediaPlaybackDelegate-Protocol.h>
#import <Silex/SXVideoPlayerViewControllerDataSource-Protocol.h>
#import <Silex/SXVideoPlayerViewControllerDelegate-Protocol.h>
#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SVVolumeProvider, SXPosterFrameView, SXVideoAnalyticsRouter, SXVideoComponentAnalyticsReporting, SXVideoPlayerViewController, SXVideoPlayerViewControllerManager;
@protocol SWReachabilityProvider, SXAppStateMonitor, SXBookmarkManager, SXResourceDataSource, SXScrollObserverManager, SXVideoAdProviderFactory;

@interface SXVideoComponentView <SXViewportChangeListener, SXMediaPlaybackDelegate, SXVideoPlayerViewControllerDelegate, SXVideoPlayerViewControllerDataSource, SWReachabilityObserver, SXFullscreenVideoPlaybackCandidate>
{
    _Bool _isReceivingViewportDynamicBoundsChanges;
    SXVideoPlayerViewController *_videoPlayerViewController;
    id <SXResourceDataSource> _resourceDataSource;
    id <SWReachabilityProvider> _reachabilityProvider;
    id <SXAppStateMonitor> _appStateMonitor;
    SXPosterFrameView *_posterFrame;
    CDUnknownBlockType _thumbnailRequestCancelHandler;
    SXVideoAnalyticsRouter *_analyticsRouter;
    SXVideoComponentAnalyticsReporting *_videoComponentAnalyticsReporter;
    id <SXScrollObserverManager> _scrollObserverManager;
    SVVolumeProvider *_volumeProvider;
    SXVideoPlayerViewControllerManager *_videoPlayerViewControllerManager;
    id <SXBookmarkManager> _bookmarkManager;
    CDUnknownBlockType _presentationBlock;
    id <SXVideoAdProviderFactory> _prerollAdFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXVideoAdProviderFactory> prerollAdFactory; // @synthesize prerollAdFactory=_prerollAdFactory;
@property(copy, nonatomic) CDUnknownBlockType presentationBlock; // @synthesize presentationBlock=_presentationBlock;
@property(readonly, nonatomic) id <SXBookmarkManager> bookmarkManager; // @synthesize bookmarkManager=_bookmarkManager;
@property(readonly, nonatomic) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager; // @synthesize videoPlayerViewControllerManager=_videoPlayerViewControllerManager;
@property(readonly, nonatomic) SVVolumeProvider *volumeProvider; // @synthesize volumeProvider=_volumeProvider;
@property(readonly, nonatomic) id <SXScrollObserverManager> scrollObserverManager; // @synthesize scrollObserverManager=_scrollObserverManager;
@property(retain, nonatomic) SXVideoComponentAnalyticsReporting *videoComponentAnalyticsReporter; // @synthesize videoComponentAnalyticsReporter=_videoComponentAnalyticsReporter;
@property(retain, nonatomic) SXVideoAnalyticsRouter *analyticsRouter; // @synthesize analyticsRouter=_analyticsRouter;
@property(copy, nonatomic) CDUnknownBlockType thumbnailRequestCancelHandler; // @synthesize thumbnailRequestCancelHandler=_thumbnailRequestCancelHandler;
@property(retain, nonatomic) SXPosterFrameView *posterFrame; // @synthesize posterFrame=_posterFrame;
@property(nonatomic) _Bool isReceivingViewportDynamicBoundsChanges; // @synthesize isReceivingViewportDynamicBoundsChanges=_isReceivingViewportDynamicBoundsChanges;
@property(readonly, nonatomic) id <SXAppStateMonitor> appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property(readonly, nonatomic) id <SWReachabilityProvider> reachabilityProvider; // @synthesize reachabilityProvider=_reachabilityProvider;
@property(readonly, nonatomic) id <SXResourceDataSource> resourceDataSource; // @synthesize resourceDataSource=_resourceDataSource;
@property(retain, nonatomic) SXVideoPlayerViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
- (_Bool)allowHierarchyRemoval;
- (void)reachabilityChanged:(_Bool)arg1;
- (unsigned long long)analyticsVideoType;
- (unsigned long long)analyticsMediaType;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (id)transitionContentView;
- (_Bool)usesThumbnailWithImageIdentifier:(id)arg1;
- (struct CGRect)transitionContentFrame;
- (void)enterFullscreen;
- (_Bool)canEnterFullscreen;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (void)pausePrerollIfNeeded;
- (_Bool)videoPlayerIsMoreThan50PercentVisible;
- (void)viewport:(id)arg1 interfaceOrientationChangedFromOrientation:(long long)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)unregisterForViewportDynamicBoundsChanges;
- (void)registerForViewportDynamicBoundsChanges;
- (void)pauseMediaPlayback;
- (void)registerAsMediaPlaybackDelegate;
- (void)videoPlayerViewControllerWillExitFullscreen:(id)arg1;
- (void)videoPlayerViewControllerWillEnterFullscreen:(id)arg1;
- (_Bool)videoPlayerViewControllerShouldStartPlayback:(id)arg1;
- (void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg1;
- (id)videoAdForVideoPlayerViewController:(id)arg1;
- (id)videoForVideoPlayerViewController:(id)arg1;
- (void)setupVideoPlayerViewController:(id)arg1;
- (void)unloadVideoPlayerIfShowingAd;
- (void)playButtonTapped;
- (void)loadPosterFrameImage;
- (void)showPosterFrame;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponentWithChanges:(CDStruct_12a35e6e)arg1;
- (void)loadComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 resourceDataSource:(id)arg7 reachabilityProvider:(id)arg8 scrollObserverManager:(id)arg9 volumeProvider:(id)arg10 videoPlayerViewControllerManager:(id)arg11 bookmarkManager:(id)arg12 prerollAdFactory:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
