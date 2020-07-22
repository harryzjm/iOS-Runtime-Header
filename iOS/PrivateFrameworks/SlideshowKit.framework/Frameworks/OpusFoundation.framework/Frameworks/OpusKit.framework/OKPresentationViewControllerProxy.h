//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OpusFoundation/OFUIViewController.h>

#import <OpusKit/OKActionResponder-Protocol.h>
#import <OpusKit/OKActionResponderPrivate-Protocol.h>
#import <OpusKit/OKClickWheelViewDelegate-Protocol.h>
#import <OpusKit/OKCollectionProxyDataSource-Protocol.h>
#import <OpusKit/OKCouchControllerDelegate-Protocol.h>
#import <OpusKit/OKPresentationViewControllerProxyExport-Protocol.h>
#import <OpusKit/OKProducerDelegate-Protocol.h>
#import <OpusKit/OKSynopsisViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSOperationQueue, NSRecursiveLock, NSString, OFNSOperationQueue, OFReachability, OFUIView, OKClickWheelView, OKCouchController, OKJavaScriptContext, OKNavigatorViewController, OKPageViewController, OKPresentation, OKPresentationView, OKProducer, OKProducerSettings, OKResourceManager, OKSynopsisView;
@protocol NSObject, OKPresentationViewControllerDelegate, OKPresentationViewControllerEditingDelegate, OS_dispatch_queue;

@interface OKPresentationViewControllerProxy : OFUIViewController <OKCollectionProxyDataSource, OKProducerDelegate, OKSynopsisViewDelegate, OKCouchControllerDelegate, OKClickWheelViewDelegate, OKActionResponderPrivate, OKPresentationViewControllerProxyExport, OKActionResponder>
{
    _Bool _hasStartedCouchBefore;
    unsigned long long _playbackMode;
    _Bool _rootNavigatorIsReady;
    OKPresentation *_presentation;
    NSMutableArray *_producerPlugins;
    OKProducer *_producer;
    NSString *_mainNavigatorName;
    OKProducerSettings *_producerSettings;
    OFNSOperationQueue *_highSpeedOperationQueue;
    OFNSOperationQueue *_consumingOperationQueue;
    NSMutableDictionary *_navigatorViewControllers;
    OKNavigatorViewController *_mainNavigatorViewController;
    NSString *_resolution;
    struct CGSize _resolutionSize;
    struct CGSize _displaySize;
    _Bool _allowsResizing;
    _Bool _keepAspectRatio;
    OKJavaScriptContext *_jsContext;
    NSRecursiveLock *_jsEvaluationInitRecursiveLock;
    NSObject<OS_dispatch_queue> *_jsEvaluationScriptQueue;
    _Bool _jsEvaluationInit;
    NSMutableArray *_audioDuckingStack;
    NSMutableDictionary *_controllerAudioTrackIDs;
    double _audioVolume;
    _Bool _isPaused;
    _Bool _isFinished;
    _Bool _hasAppeared;
    _Bool _shouldCleanup;
    id <OKPresentationViewControllerDelegate> _delegate;
    id <OKPresentationViewControllerEditingDelegate> _editingDelegate;
    id <NSObject> _activityLatency;
    struct CGPoint _arrowKeyMaxPanVelocity;
    struct CGPoint _arrowKeyPanAcceleration;
    struct CGPoint _arrowKeyCurrentPanVelocity;
    double _lastArrowKeyTimestamp;
    _Bool _arrowKeyIsRepeating;
    NSOperationQueue *_preparationOperationQueue;
    OFReachability *_reachability;
    long long _reachabilityStatus;
    _Bool _logRenderingTimes;
    _Bool _isRenderLoggingActive;
    _Bool _couchModeLoops;
    _Bool _interactivityEnabled;
    _Bool _isExporting;
    _Bool _downloadIndicatorEnabled;
    _Bool _muted;
    _Bool _rewindAudioOnCouchPotatoLoop;
    _Bool _arrowKeysSendSwipeAndPan;
    _Bool _hasBeenHidden;
    OKPresentationView *_presentationView;
    OKResourceManager *_resourceManager;
    OKCouchController *_couchController;
    double _couchInitialDelay;
    double _couchModeDefaultStepDuration;
    double _couchModeIsReadySpinnerDelay;
    double _audioFadeOutDuration;
    OKSynopsisView *_synopsisView;
    OKClickWheelView *_clickWheelView;
    NSArray *_audioURLs;
    double _interactiveTransitionTrackingBoxRadius;
    double _interactiveTransitionProgressThreshold;
    double _interactiveTransitionVelocityThreshold;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (Class)viewClass;
@property(nonatomic) double interactiveTransitionVelocityThreshold; // @synthesize interactiveTransitionVelocityThreshold=_interactiveTransitionVelocityThreshold;
@property(nonatomic) double interactiveTransitionProgressThreshold; // @synthesize interactiveTransitionProgressThreshold=_interactiveTransitionProgressThreshold;
@property(nonatomic) double interactiveTransitionTrackingBoxRadius; // @synthesize interactiveTransitionTrackingBoxRadius=_interactiveTransitionTrackingBoxRadius;
@property(nonatomic) _Bool logRenderingTimes; // @synthesize logRenderingTimes=_logRenderingTimes;
@property(readonly, nonatomic) _Bool hasBeenHidden; // @synthesize hasBeenHidden=_hasBeenHidden;
@property(nonatomic) _Bool arrowKeysSendSwipeAndPan; // @synthesize arrowKeysSendSwipeAndPan=_arrowKeysSendSwipeAndPan;
@property(retain, nonatomic) NSArray *audioURLs; // @synthesize audioURLs=_audioURLs;
@property(readonly, nonatomic) OKClickWheelView *clickWheelView; // @synthesize clickWheelView=_clickWheelView;
@property(readonly, nonatomic) OKSynopsisView *synopsisView; // @synthesize synopsisView=_synopsisView;
@property(nonatomic) _Bool rewindAudioOnCouchPotatoLoop; // @synthesize rewindAudioOnCouchPotatoLoop=_rewindAudioOnCouchPotatoLoop;
@property(nonatomic) double audioVolume; // @synthesize audioVolume=_audioVolume;
@property(nonatomic) double audioFadeOutDuration; // @synthesize audioFadeOutDuration=_audioFadeOutDuration;
@property(nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool downloadIndicatorEnabled; // @synthesize downloadIndicatorEnabled=_downloadIndicatorEnabled;
@property(nonatomic) _Bool isExporting; // @synthesize isExporting=_isExporting;
@property(nonatomic) _Bool interactivityEnabled; // @synthesize interactivityEnabled=_interactivityEnabled;
@property(readonly, nonatomic) _Bool keepAspectRatio; // @synthesize keepAspectRatio=_keepAspectRatio;
@property(nonatomic) _Bool allowsResizing; // @synthesize allowsResizing=_allowsResizing;
@property(readonly, nonatomic) struct CGSize resolutionSize; // @synthesize resolutionSize=_resolutionSize;
@property(readonly, retain, nonatomic) NSString *resolution; // @synthesize resolution=_resolution;
@property(readonly, nonatomic) struct CGSize displaySize; // @synthesize displaySize=_displaySize;
@property(retain, nonatomic) OKNavigatorViewController *mainNavigatorViewController; // @synthesize mainNavigatorViewController=_mainNavigatorViewController;
@property(readonly, retain, nonatomic) OFNSOperationQueue *consumingOperationQueue; // @synthesize consumingOperationQueue=_consumingOperationQueue;
@property(readonly, retain, nonatomic) OFNSOperationQueue *highSpeedOperationQueue; // @synthesize highSpeedOperationQueue=_highSpeedOperationQueue;
@property(nonatomic) unsigned long long playbackMode; // @synthesize playbackMode=_playbackMode;
@property(nonatomic) double couchModeIsReadySpinnerDelay; // @synthesize couchModeIsReadySpinnerDelay=_couchModeIsReadySpinnerDelay;
@property(nonatomic) double couchModeDefaultStepDuration; // @synthesize couchModeDefaultStepDuration=_couchModeDefaultStepDuration;
@property(nonatomic) _Bool couchModeLoops; // @synthesize couchModeLoops=_couchModeLoops;
@property(nonatomic) double couchInitialDelay; // @synthesize couchInitialDelay=_couchInitialDelay;
@property(readonly, nonatomic) long long reachabilityStatus; // @synthesize reachabilityStatus=_reachabilityStatus;
@property(readonly, retain, nonatomic) OKPresentation *presentation; // @synthesize presentation=_presentation;
@property(readonly, retain, nonatomic) OKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
- (void)synopsisViewUpdated:(id)arg1 withProgress:(double)arg2;
- (void)synopsisViewDidEnd:(id)arg1;
- (void)synopsisViewDidBegin:(id)arg1;
- (void)synopsisViewWillBegin:(id)arg1;
- (_Bool)shouldShowSynopsisView;
- (id)visibleWidgets;
- (id)visibleMediaObjects;
- (id)visibleMediaItems;
- (id)visibleItemKeyPaths;
- (void)synopsisView:(id)arg1 didSelectItem:(id)arg2;
- (void)initSynopsisView;
- (void)updateTimeLeft;
- (void)initWheelController;
- (_Bool)shouldShowPlayIcon;
- (void)clickWheelViewClosePressed:(id)arg1;
- (_Bool)clickWheelViewShouldAppear;
- (void)clickWheelViewWillDisappear:(id)arg1;
- (void)clickWheelViewWillAppear:(id)arg1;
- (void)clickWheelViewMenuButtonPressed:(id)arg1;
- (id)colorSpace;
- (void)_endCARenderLogging;
- (void)_beginCARenderLogging;
- (void)renderingTimeLogMessage:(id)arg1 withTimestamp:(double)arg2;
- (void)endEditingTextInWidget:(id)arg1 finalSettings:(id)arg2;
- (_Bool)validateChangingTextInWidget:(id)arg1 toSettings:(id)arg2;
- (void)beginEditingTextInWidget:(id)arg1;
- (_Bool)canEditTextInWidget:(id)arg1;
- (void)endPanningMediaInWidget:(id)arg1 finalState:(id)arg2;
- (_Bool)validatePanningMediaInWidget:(id)arg1 toState:(id)arg2;
- (void)beginPanningMediaInWidget:(id)arg1;
- (_Bool)canPanMediaInWidget:(id)arg1;
- (void)audioFinishedPlayingForTrackID:(id)arg1;
- (void)audioStartedPlayingForTrackID:(id)arg1 withAVAsset:(id)arg2 andVolume:(float)arg3;
- (void)endAudioForController:(id)arg1 andTrackID:(id)arg2;
- (id)beginAudioForController:(id)arg1 withAVAsset:(id)arg2 andVolume:(float)arg3;
- (void)fadeMainNavigatorTracksWithDuration:(double)arg1;
- (void)fadeAllAudioTracksWithDuration:(double)arg1;
- (_Bool)isEditable;
@property(readonly) OKCouchController *couchController; // @synthesize couchController=_couchController;
- (void)cancelCouchPotatoIfNeededWithAction:(id)arg1;
- (void)cancelCouchPotatoPlayback;
- (void)startCouchPotatoPlayback;
- (void)prepareCouchPotatoPlayback;
- (void)_prepareInitialCouchPotatoPlayback;
- (_Bool)canStartCouchPotatoPlayback;
- (void)preventCouchPlayback;
- (void)allowCouchPlayback;
- (void)couchControllerPlaybackCompleted:(id)arg1;
- (void)couchControllerPlaybackLooped:(id)arg1;
- (void)couchControllerWaitingForReadiness:(id)arg1 withProgress:(double)arg2;
- (void)couchControllerStopsWaitingForReadiness:(id)arg1;
- (void)couchControllerStartsWaitingForReadiness:(id)arg1;
- (_Bool)couchController:(id)arg1 thingsAreReadyForNextStep:(id)arg2 withProgress:(double *)arg3;
- (_Bool)thingsAreReadyInCurrentPageForCouchController:(id)arg1;
- (void)couchControllerDidStopPlayback:(id)arg1;
- (void)couchControllerWillStartPlayback:(id)arg1;
- (_Bool)couchControllerCanStartPlayback:(id)arg1;
@property(readonly) OKPageViewController *currentPageViewController;
- (id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2;
- (id)allKeysForDictionaryProxy:(id)arg1;
- (unsigned long long)countOfDictionaryProxy:(id)arg1;
- (struct CGPoint)convertPointToBackingLayout:(struct CGPoint)arg1 fromWidget:(id)arg2;
- (struct CGPoint)convertPointToBackingLayout:(struct CGPoint)arg1 fromPage:(id)arg2;
- (struct CGPoint)convertLocationInWindow:(struct CGPoint)arg1 toWidget:(id)arg2;
- (struct CGPoint)convertLocationInWindow:(struct CGPoint)arg1 toPage:(id)arg2;
- (id)evaluateScript:(id)arg1;
- (id)evaluateScript:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3 forNavigatorViewController:(id)arg4 pageViewController:(id)arg5 andWidgetView:(id)arg6;
- (void)setPropertyWithValue:(id)arg1 forKey:(id)arg2 inJSObject:(struct OpaqueJSValue *)arg3;
- (id)dynamicsPushBehaviors;
- (void)updateMotion;
- (_Bool)_hasAppeared;
- (void)restart;
- (_Bool)isPaused;
- (_Bool)isFinished;
- (void)instantPlay;
- (void)instantResume;
- (void)instantPause;
- (void)_addSubWidgetViewsFromSubWidgets:(id)arg1 toWidgetView:(id)arg2;
- (id)widgetViewFromWidget:(id)arg1;
- (void)_doArrowKeyUpForDirection:(unsigned long long)arg1 atTimestamp:(double)arg2;
- (void)_doArrowKeyDownForDirection:(unsigned long long)arg1 atTimestamp:(double)arg2;
- (void)_repeatArrowKeyForDirection:(id)arg1;
@property(readonly) OFUIView *actionView;
- (id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (id)allActionBindings;
- (void)removeAllActionBindings;
- (void)removeActionBinding:(id)arg1;
- (void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2;
- (_Bool)performActionScript:(id)arg1 withAction:(id)arg2;
- (_Bool)canPerformAction:(id)arg1;
- (_Bool)sendAction:(id)arg1 toTarget:(id)arg2;
- (id)deepestDisplayedPageViewController;
- (id)displayedPageViewControllers;
- (void)navigateToItemAtKeyPath:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)cachedNavigatorPageViewControllers;
- (id)navigatorViewControllerForNavigatorWithName:(id)arg1;
- (id)visibleMediaItemsForProducer:(id)arg1;
- (void)producer:(id)arg1 didProcessLiveAuthoringKeyPaths:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly, retain, nonatomic) OKJavaScriptContext *jsContext;
@property(readonly, retain, nonatomic) OKProducer *producer; // @synthesize producer=_producer;
- (_Bool)_registerProducerPlugin:(id)arg1;
- (id)_registeredProducerPluginWithIdentifier:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) OKPresentationView *presentationView; // @synthesize presentationView=_presentationView;
- (void)prepareForRefreshWithDelay:(double)arg1;
- (void)_delayedPrepareForRefresh;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (double)presentationViewScale;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (struct CGSize)layoutFactor;
- (void)updateDisplayResolution;
- (struct CGSize)_fitDisplaySizeForRenderSize:(struct CGSize)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)displayPresentation:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_stopPresentation;
- (void)_startPresentation;
- (void)_rootNavigatorDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_rootNavigatorWillAppear:(_Bool)arg1;
- (void)_rootNavigatorPrepareForDisplay;
- (void)viewDidLoad;
- (void)_loadMainNavigatorIfNeeded;
- (_Bool)_prepareNavigationOffscreenWithProgressBlock:(CDUnknownBlockType)arg1 colorSpace:(id)arg2 error:(id *)arg3;
- (_Bool)prepareWithProgressBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)updateActivityIndicatorWithProgress:(double)arg1;
- (void)setActivityIndicatorVisible:(_Bool)arg1;
- (_Bool)isActivityIndicatorVisible;
- (void)_stopActivityIndicatorWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_stopActivityIndicator:(CDUnknownBlockType)arg1;
- (void)_startActivityIndicatorWithDelay;
- (void)_startActivityIndicator;
@property(nonatomic) id <OKPresentationViewControllerEditingDelegate> editingDelegate;
@property(nonatomic) id <OKPresentationViewControllerDelegate> delegate;
- (void)_unloadContent;
- (void)_cleanupIfNecessary;
- (void)forceCleanup;
- (void)dealloc;
- (id)initWithPreset:(id)arg1 guidelines:(id)arg2 mediaFeeder:(id)arg3;
- (id)initWithPresentation:(id)arg1;
- (id)initWithPresentation:(id)arg1 andMainNavigatorName:(id)arg2;
- (void)_reachabilityChanged:(id)arg1;
- (void)commonInit;
- (void)setInteractiveTransitionVelocityThresholdFromNumber:(id)arg1;
- (void)setInteractiveTransitionProgressThresholdFromNumber:(id)arg1;
- (void)setInteractiveTransitionTrackingBoxRadiusFromNumber:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

