//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pegasus/PGPictureInPictureRemoteObjectInterface-Protocol.h>
#import <Pegasus/PGPictureInPictureViewControllerDelegate-Protocol.h>

@class BKSProcessAssertion, NSString, NSTimer, NSUUID, NSXPCConnection, PGInterruptionAssistant, PGPictureInPictureApplication, PGPictureInPictureViewController;
@protocol BSInvalidatable, OS_dispatch_queue, PGPictureInPictureAnalyticsDelegate, PGPictureInPictureRemoteObjectDelegate;

__attribute__((visibility("hidden")))
@interface PGPictureInPictureRemoteObject : NSObject <PGPictureInPictureRemoteObjectInterface, PGPictureInPictureViewControllerDelegate>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _controlsStyle;
    long long _currentState;
    BKSProcessAssertion *_processAssertion;
    BKSProcessAssertion *_interruptionBeganFinishTaskAssertion;
    BKSProcessAssertion *_cancelPictureInPictureFinishTaskAssertion;
    NSUUID *_finishTaskInvalidationUUID;
    NSTimer *_twoStagedStopInvalidationTimer;
    NSUUID *_analyticsSourceUUID;
    _Bool _shouldNoteStartedAutomaticallyForAnalytics;
    _Bool _isPictureInPicturePossible;
    _Bool _pictureInPictureShouldStartWhenEnteringBackground;
    _Bool _shouldShowAlternateActionButtonImage;
    _Bool _shouldShowLoadingIndicator;
    PGInterruptionAssistant *_interruptionAssistant;
    unsigned long long _transitioningState;
    _Bool _hasBegunTwoStateStop;
    unsigned long long _resourcesUsageReductionReasons;
    id <BSInvalidatable> _stateCaptureInvalidatable;
    id <PGPictureInPictureRemoteObjectDelegate> _delegate;
    struct {
        unsigned int pictureInPictureRemoteObject_shouldAcceptSetupRequest:1;
        unsigned int pictureInPictureRemoteObject_shouldCancelActivePictureInPictureOnStart:1;
        unsigned int pictureInPictureRemoteObject_shouldUpdateCancellationPolicyOnStart:1;
        unsigned int pictureInPictureRemoteObject_didCreatePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willShowPictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_didShowPictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willHidePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_didHidePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willDestroyPictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_didRequestPictureInPictureStopForViewController_sourceSceneSessionIdentifier_animated:1;
    } _delegateRespondsTo;
    PGPictureInPictureApplication *_pictureInPictureApplication;
    PGPictureInPictureViewController *_pictureInPictureViewController;
    id <PGPictureInPictureAnalyticsDelegate> _analyticsDelegate;
    NSString *_sourceSceneSessionPersistentIdentifier;
    struct CGSize _preferredContentSize;
    struct CGRect _initialLayerFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sourceSceneSessionPersistentIdentifier; // @synthesize sourceSceneSessionPersistentIdentifier=_sourceSceneSessionPersistentIdentifier;
@property(readonly, nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(readonly, nonatomic) struct CGRect initialLayerFrame; // @synthesize initialLayerFrame=_initialLayerFrame;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak id <PGPictureInPictureAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(readonly, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
@property(readonly, nonatomic) PGPictureInPictureApplication *pictureInPictureApplication; // @synthesize pictureInPictureApplication=_pictureInPictureApplication;
- (void)pictureInPictureViewController:(id)arg1 didTransitionToStashed:(_Bool)arg2 shouldBeginOrEndInterruption:(_Bool)arg3;
- (void)pictureInPictureViewControllerDidRequestCancel:(id)arg1;
- (void)pictureInPictureViewController:(id)arg1 didReceiveCommand:(id)arg2;
- (void)pictureInPictureViewControllerDidRequestStop:(id)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg1;
- (void)pictureInPictureViewController:(id)arg1 updateHostedWindowSize:(struct CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;
- (oneway void)stopPictureInPictureAndRestoreUserInterface;
- (oneway void)updatePlaybackStateWithDiff:(id)arg1;
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)stopPictureInPictureAnimated:(_Bool)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (oneway void)setupStopAnimated:(_Bool)arg1 needsApplicationActivation:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(struct CGRect)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)startPictureInPictureAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setupStartAnimated:(_Bool)arg1 hostedWindowHostingHandle:(id)arg2 sceneSessionPersistentIdentifier:(id)arg3 preferredContentSize:(struct CGSize)arg4 initialInterfaceOrientation:(long long)arg5 initialLayerFrame:(struct CGRect)arg6 playbackState:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_startPreventingCancelAndRestoreUserActions;
- (id)_invalidationTimerWithTimeout:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)_invalidationTimerWithTimeout:(double)arg1;
- (void)_tearDownAndNotifyClientAboutCancellation:(_Bool)arg1;
- (void)_invalidateInterruptionBeganFinishTaskAssertion;
- (id)_finishTaskAssertionForProcessIdentifier:(int)arg1;
- (id)_processAssertionForProcessIdentifier:(int)arg1;
- (void)_setCurrentState:(long long)arg1;
- (void)setCurrentResourcesUsageReductionReasons:(unsigned long long)arg1;
- (void)invalidate;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)pictureInPictureInterruptionEndedWithReason:(long long)arg1;
- (void)pictureInPictureInterruptionBeganWithReason:(long long)arg1;
- (void)endTwoStageStopPictureInPictureWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)beginTwoStageStopPictureInPictureByRestoringUserInterfaceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopPictureInPictureAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)startPictureInPictureEnteringBackgroundAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
@property(readonly, nonatomic) unsigned long long transitioningState;
@property(readonly, nonatomic) _Bool isStartingStoppingOrCancellingPictureInPicture;
@property(readonly, nonatomic) _Bool canEndTwoStageStopPictureInPicture;
@property(readonly, nonatomic) _Bool canCancelPictureInPicture;
@property(readonly, nonatomic) _Bool canStopPictureInPicture;
@property(readonly, nonatomic) _Bool shouldStartPictureInPictureEnteringBackground;
@property(nonatomic) __weak id <PGPictureInPictureRemoteObjectDelegate> delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(readonly, nonatomic) NSXPCConnection *connection;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (_Bool)matchesSceneSessionIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
