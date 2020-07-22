//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKAstronomyDummy_InputSequencerDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKAstronomyRotationModelObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKAstronomyViewObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeView-Protocol.h>
#import <NanoTimeKitCompanion/UIGestureRecognizerDelegate-Protocol.h>

@class MISSING_TYPE, NSDate, NSDateFormatter, NSString, NTKAstronomyDummy_ClientSideAnimation, NTKAstronomyDummy_CrownInputSequencer, NTKAstronomyLocationDot, NTKAstronomyRotationModel, NTKAstronomyView, NTKDateComplicationLabel, NTKDelayedBlock, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface NTKAstronomyFaceView <NTKTimeView, NTKAstronomyRotationModelObserver, NTKAstronomyViewObserver, NTKAstronomyDummy_InputSequencerDelegate, UIGestureRecognizerDelegate>
{
    NTKDigitalTimeLabelStyle *_digitalTimeLabelDefaultLayoutStyle;
    NTKDigitalTimeLabelStyle *_digitalTimeLabelSmallInUpperRightStyle;
    NTKDigitalTimeLabel *_digitalTimeLabel;
    struct CGPoint _digitalTimeLabelZoomEndingCenter;
    struct CGPoint _dateLabelZoomEndingCenter;
    NTKAstronomyDummy_ClientSideAnimation *_poseInterpolationAnimation;
    NTKAstronomyRotationModel *_rotationModel;
    struct CLLocationCoordinate2D _initialCoordinate;
    MISSING_TYPE *_previousTranslation;
    float _recentMovement;
    NTKAstronomyDummy_CrownInputSequencer *_crownSequencer;
    UIPanGestureRecognizer *_spheroidPanGesture;
    UITapGestureRecognizer *_supplementalModeDoubleTapGesture;
    UITapGestureRecognizer *_interactiveModeTapGesture;
    struct NSString *_locationManagerToken;
    NTKAstronomyView *_astronomyView;
    NTKDateComplicationLabel *_dateLabel;
    UILabel *_scrubLabel;
    UILabel *_phaseLabel;
    UILabel *_overrideDateLabel;
    UIImageView *_spheroidLabels[8];
    NTKAstronomyLocationDot *_locationDot;
    NSDate *_overrideDate;
    NSDate *_crownDate;
    struct NSNumber *_clockTimerToken;
    unsigned long long _dateFormatterStyle;
    NSDateFormatter *_scrubDateFormatter[3];
    UIButton *_leftButton;
    UIButton *_rightButton;
    struct CGRect _phaseLabelDefaultFrame;
    double _supplementalFontLineHeightPlusDescender;
    NTKDelayedBlock *_wheelDelayedBlock;
    NTKDelayedBlock *_physicalButtonDelayedBlock;
    long long _previousDataMode;
    unsigned int _isAnimatingViewMode:1;
    unsigned int _isContentLoaded:1;
    unsigned int _isFlying:1;
    unsigned int _isLocationCurrent:1;
    unsigned int _canHandleCrownEvents:1;
    unsigned int _canHandleButtonEvents:1;
}

+ (void)_prewarm;
- (void).cxx_destruct;
- (void)_renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
- (_Bool)_canEnterInteractiveMode;
- (void)_disableCrown;
- (void)_enableCrownForAstronomyTarget:(unsigned long long)arg1;
- (void)_physicalButtonDelayedBlockFired;
- (void)_wheelDelayedBlockFired;
- (_Bool)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2;
- (_Bool)_wheelChangedWithEvent:(id)arg1;
- (void)_performWristRaiseAnimation;
- (void)_prepareWristRaiseAnimation;
- (void)_cleanupAfterZoom;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (_Bool)_usesCustomZoom;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)_updateLocation:(id)arg1 lastLocation:(id)arg2;
- (void)_updateTimeAnimated:(_Bool)arg1;
- (void)_updateLocaleAnimated:(_Bool)arg1;
- (void)_asyncUpdateTime;
- (void)_asyncUpdateLocale;
- (void)_hideLocationDot;
- (void)_showLocationDotIfNeeded;
- (void)layoutSubviews;
- (void)_layoutSpheroidLabel:(int)arg1;
- (void)_layoutPhaseLabel;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_unloadSnapshotContentViews;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (void)_applyDataModeAnimated:(_Bool)arg1;
- (void)_applyDataMode;
- (id)_digitalTimeLabelStyle:(long long)arg1;
- (void)astronomyViewContentsAnimationFinished:(id)arg1;
- (void)rotationModelStoppedByDecelerating:(id)arg1;
- (void)_handleSpheroidPanGesture:(id)arg1;
- (void)_handleSupplementalModeGesture:(id)arg1;
- (void)_handleInteractiveModeGesture:(id)arg1;
- (void)_handleVirtualButton:(id)arg1;
- (void)_handleDateLabelButton:(id)arg1;
- (void)_setAstronomyFaceViewModeInteractive;
- (void)_setAstronomyFaceViewModeNonInteractive;
- (void)_setAstronomyFaceViewModeDefault;
- (void)_setAstronomyFaceViewModeSupplemental;
- (void)_stopClockUpdates;
- (void)_startClockUpdates;
- (_Bool)_shouldHideStatusBarForViewMode:(long long)arg1;
- (void)_applyViewMode:(long long)arg1;
- (void)setViewMode:(long long)arg1;
- (void)_setIsAnimatingViewMode:(_Bool)arg1;
- (void)_animateTransitionToViewMode:(long long)arg1;
- (id)_date;
- (void)_interpolateFromPose:(const struct NTKAstronomyFaceViewAnimationPose *)arg1 toPose:(const struct NTKAstronomyFaceViewAnimationPose *)arg2 progress:(float)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isFrozen) _Bool frozen;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
