//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/SCNView.h>

@class AVTAvatar, AVTAvatarEnvironment, AVTFaceTracker, AVTHUDView, NSLock, NSTimer, SCNNode;
@protocol AVTViewFaceTrackingDelegate, SCNSceneRendererDelegate;

@interface AVTView : SCNView
{
    unsigned long long _currentExpressionIndex[100];
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    _Bool _lockLookAt;
    AVTAvatarEnvironment *_environment;
    AVTFaceTracker *_faceTracker;
    _Bool _enableFaceTracking;
    _Bool _faceIsTracked;
    _Bool _captureImageIsTooDark;
    _Bool _directRetargetingMode;
    id <AVTViewFaceTrackingDelegate> _faceTrackingDelegate;
    _Bool _arMode;
    unsigned long long _lastTrackingUpdateTimestamp;
    unsigned long long _noTrackingFrameCount;
    id <SCNSceneRendererDelegate> _fwdDelegate;
    double _currentlyRenderedTrackingDate;
    struct {
        struct os_unfair_lock_s lock;
        struct *head;
        int current;
        int capacity;
        _Bool reached_max_capacity;
    } _perfTimes;
    double _perfPacketUpdateTimestamp;
    _Bool _packetNeedRecording;
    _Bool _showPerfHUD;
    _Bool _enableReticle;
    int _droppedFrameCount;
    NSTimer *_perfTimeRefreshTimer;
    AVTHUDView *_debugView;
    NSLock *_lock;
    AVTAvatar *_lastRenderedAvatar;
    _Bool _faceTrackingPaused;
}

@property(nonatomic, getter=faceTrackingIsPaused) _Bool faceTrackingPaused; // @synthesize faceTrackingPaused=_faceTrackingPaused;
@property(nonatomic) _Bool enableReticle; // @synthesize enableReticle=_enableReticle;
- (void).cxx_destruct;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(CDUnknownBlockType)arg3;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (void)layoutSubviews;
- (double)currentAudioTime;
- (_Bool)isDoubleBuffered;
- (void)_refreshPerfTimesInfo;
- (void)setShowPerfHUD:(_Bool)arg1;
- (_Bool)showPerfHUD;
- (double)currentlyRenderedTrackingDate;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (void)renderer:(id)arg1 didApplyConstraintsAtTime:(double)arg2;
- (void)renderer:(id)arg1 didSimulatePhysicsAtTime:(double)arg2;
- (struct UIImage *)snapshotWithSize:(struct CGSize)arg1 scaleFactor:(float)arg2;
- (struct UIImage *)snapshotWithSize:(struct CGSize)arg1;
- (id)transitionTexture;
- (void)warmupMemoji;
- (void)setDirectRetargetingMode:(_Bool)arg1;
- (_Bool)directRetargetingMode;
@property(nonatomic) _Bool enableFaceTracking;
@property(readonly, nonatomic) _Bool captureImageIsTooDark;
- (void)setCaptureImageIsTooDark:(_Bool)arg1;
- (void)setFaceTrackingDelegate:(id)arg1;
- (id)faceTrackingDelegate;
- (_Bool)faceIsFullyActive;
- (void)updateForChangedFaceTrackingPaused;
- (void)setFaceIsTracked:(_Bool)arg1;
@property(readonly, nonatomic) _Bool faceIsTracked; // @synthesize faceIsTracked=_faceIsTracked;
- (void)setFaceTracker:(id)arg1;
- (id)faceTracker;
- (void)_resetFaceToRandomPosition;
- (id)arSession;
- (void)faceTracker:(id)arg1 sessionInterruptionEnded:(id)arg2;
- (void)faceTracker:(id)arg1 sessionWasInterrupted:(id)arg2;
- (void)faceTracker:(id)arg1 session:(id)arg2 didFailWithError:(id)arg3;
- (void)faceTrackerDidUpdate:(id)arg1 trackingInfo:(id)arg2;
- (void)_cancelDelayedtrackingLoss;
- (void)_delayedTrackingLoss;
- (void)_fireTrackingLoss;
- (void)_UIOrientationDidChangeNotification:(id)arg1;
- (void)setupOrientation;
- (void)setInterfaceOrientation:(long long)arg1;
- (long long)interfaceOrientation;
- (void)avatarDidChange;
@property(retain, nonatomic) AVTAvatar *avatar;
- (id)environment;
- (void)_drawAtTime:(double)arg1;
- (void)renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)updateAtTime:(double)arg1;
- (_Bool)allowTrackSmoothing;
- (void)_willRecord;
- (void)willUpdateAvatarWithNewFaceTrackingData:(double)arg1;
- (void)didLostTrackingForAWhile;
- (void)_animateToNoTrackingState:(_Bool)arg1;
- (void)_enablePhysics:(_Bool)arg1;
- (void)renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
@property(nonatomic) _Bool arMode;
- (void)_updateAvatarForARMode:(_Bool)arg1;
- (void)_updateFocal;
- (void)unlockAvatar;
- (void)lockAvatar;
- (void)setup;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (void)dealloc;
- (void)_avtCommonInit;

@end

