//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, PUValueFilter, UIView;
@protocol PUTransitionViewAnimatorDelegate;

__attribute__((visibility("hidden")))
@interface PUTransitionViewAnimator : NSObject
{
    struct {
        unsigned int respondsToDidUpdate:1;
        unsigned int respondsToWillEnd:1;
        unsigned int respondsToDidEnd:1;
    } _delegateFlags;
    _Bool _autoUpdates;
    _Bool _appliesScaleViaTransform;
    _Bool _shouldFinish;
    _Bool _shouldUseTargetAspectRatio;
    _Bool __isAutoUpdating;
    _Bool __isEnding;
    unsigned long long _direction;
    id <PUTransitionViewAnimatorDelegate> _delegate;
    double _progress;
    double _unfilteredProgress;
    UIView *_view;
    double _rampUpDuration;
    double __desiredRotation;
    double __desiredScale;
    double __desiredSizeMixFactor;
    double __currentRotation;
    double __currentScale;
    double __currentSizeMixFactor;
    double __targetScale;
    CADisplayLink *__autoUpdateDisplayLink;
    PUValueFilter *__rampUpFilter;
    PUValueFilter *__progressFilter;
    PUValueFilter *__shouldFinishFilter;
    struct CGPoint _currentTranslation;
    struct CGPoint _anchorPoint;
    struct CGPoint __desiredTranslation;
    struct CGRect _sourceFrame;
    struct CGRect _targetFrame;
    struct CGRect __targetAspectRatioSourceFrame;
}

@property(nonatomic, setter=_setEnding:) _Bool _isEnding; // @synthesize _isEnding=__isEnding;
@property(retain, nonatomic, setter=_setShouldFinishFilter:) PUValueFilter *_shouldFinishFilter; // @synthesize _shouldFinishFilter=__shouldFinishFilter;
@property(retain, nonatomic, setter=_setProgressFilter:) PUValueFilter *_progressFilter; // @synthesize _progressFilter=__progressFilter;
@property(retain, nonatomic, setter=_setRampUpFilter:) PUValueFilter *_rampUpFilter; // @synthesize _rampUpFilter=__rampUpFilter;
@property(retain, nonatomic, setter=_setAutoUpdateDisplayLink:) CADisplayLink *_autoUpdateDisplayLink; // @synthesize _autoUpdateDisplayLink=__autoUpdateDisplayLink;
@property(nonatomic, setter=_setAutoUpdating:) _Bool _isAutoUpdating; // @synthesize _isAutoUpdating=__isAutoUpdating;
@property(nonatomic, setter=_setTargetScale:) double _targetScale; // @synthesize _targetScale=__targetScale;
@property(nonatomic, setter=_setTargetAspectRatioSourceFrame:) struct CGRect _targetAspectRatioSourceFrame; // @synthesize _targetAspectRatioSourceFrame=__targetAspectRatioSourceFrame;
@property(nonatomic, setter=_setCurrentSizeMixFactor:) double _currentSizeMixFactor; // @synthesize _currentSizeMixFactor=__currentSizeMixFactor;
@property(nonatomic, setter=_setCurrentScale:) double _currentScale; // @synthesize _currentScale=__currentScale;
@property(nonatomic, setter=_setCurrentRotation:) double _currentRotation; // @synthesize _currentRotation=__currentRotation;
@property(nonatomic, setter=_setDesiredSizeMixFactor:) double _desiredSizeMixFactor; // @synthesize _desiredSizeMixFactor=__desiredSizeMixFactor;
@property(nonatomic, setter=_setDesiredScale:) double _desiredScale; // @synthesize _desiredScale=__desiredScale;
@property(nonatomic, setter=_setDesiredRotation:) double _desiredRotation; // @synthesize _desiredRotation=__desiredRotation;
@property(nonatomic, setter=_setDesiredTranslation:) struct CGPoint _desiredTranslation; // @synthesize _desiredTranslation=__desiredTranslation;
@property(nonatomic, setter=_setRampUpDuration:) double rampUpDuration; // @synthesize rampUpDuration=_rampUpDuration;
@property(nonatomic, setter=_setShouldUseTargetAspectRatio:) _Bool shouldUseTargetAspectRatio; // @synthesize shouldUseTargetAspectRatio=_shouldUseTargetAspectRatio;
@property(nonatomic, setter=_setAnchorPoint:) struct CGPoint anchorPoint; // @synthesize anchorPoint=_anchorPoint;
@property(nonatomic, setter=_setTargetFrame:) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic, setter=_setSourceFrame:) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(retain, nonatomic, setter=_setView:) UIView *view; // @synthesize view=_view;
@property(nonatomic, setter=_setCurrentTranslation:) struct CGPoint currentTranslation; // @synthesize currentTranslation=_currentTranslation;
@property(nonatomic, setter=_setShouldFinish:) _Bool shouldFinish; // @synthesize shouldFinish=_shouldFinish;
@property(nonatomic, setter=_setUnfilteredProgress:) double unfilteredProgress; // @synthesize unfilteredProgress=_unfilteredProgress;
@property(nonatomic, setter=_setProgress:) double progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <PUTransitionViewAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setDirection:) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool appliesScaleViaTransform; // @synthesize appliesScaleViaTransform=_appliesScaleViaTransform;
@property(nonatomic) _Bool autoUpdates; // @synthesize autoUpdates=_autoUpdates;
- (void).cxx_destruct;
- (void)_endWithTranslationVelocity:(struct CGPoint)arg1 rotationVelocity:(double)arg2 scaleVelocity:(double)arg3 shouldBounce:(_Bool)arg4 finish:(_Bool)arg5 animated:(_Bool)arg6;
- (void)_autoUpdate:(id)arg1;
- (void)_updateAutoUpdateDisplayLink;
- (void)_update;
- (void)cancelWithoutAnimation;
- (void)cancelWithTranslationVelocity:(struct CGPoint)arg1 rotationVelocity:(double)arg2 scaleVelocity:(double)arg3 shouldBounce:(_Bool)arg4;
- (void)finishWithTranslationVelocity:(struct CGPoint)arg1 rotationVelocity:(double)arg2 scaleVelocity:(double)arg3 shouldBounce:(_Bool)arg4;
- (void)updateWithTranslation:(struct CGPoint)arg1 rotation:(double)arg2 scale:(double)arg3;
- (id)initWithView:(id)arg1 sourceFrame:(struct CGRect)arg2 targetFrame:(struct CGRect)arg3 anchorPoint:(struct CGPoint)arg4 shouldUseTargetAspectRatio:(_Bool)arg5 rampUpDuration:(double)arg6 direction:(unsigned long long)arg7;

@end

