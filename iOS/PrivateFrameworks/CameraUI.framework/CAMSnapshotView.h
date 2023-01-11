//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CameraUI/_UIBasicAnimationFactory-Protocol.h>

@class NSString, UIVisualEffectView;

@interface CAMSnapshotView : UIView <_UIBasicAnimationFactory>
{
    _Bool _blurred;
    _Bool _dimmed;
    _Bool __supportsBlur;
    UIView *_snapshotView;
    long long _desiredAspectRatio;
    UIView *__lowQualityBlurView;
    UIView *__dimmingView;
    UIVisualEffectView *__blurView;
    long long __blurStyleForEffectAnimationFactory;
}

@property(nonatomic, setter=_setBlurStyleForEffectAnimationFactory:) long long _blurStyleForEffectAnimationFactory; // @synthesize _blurStyleForEffectAnimationFactory=__blurStyleForEffectAnimationFactory;
@property(retain, nonatomic, setter=_setBlurView:) UIVisualEffectView *_blurView; // @synthesize _blurView=__blurView;
@property(readonly, nonatomic) UIView *_dimmingView; // @synthesize _dimmingView=__dimmingView;
@property(readonly, nonatomic) UIView *_lowQualityBlurView; // @synthesize _lowQualityBlurView=__lowQualityBlurView;
@property(readonly, nonatomic) _Bool _supportsBlur; // @synthesize _supportsBlur=__supportsBlur;
@property(nonatomic) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(nonatomic) _Bool blurred; // @synthesize blurred=_blurred;
@property(readonly, nonatomic) long long desiredAspectRatio; // @synthesize desiredAspectRatio=_desiredAspectRatio;
@property(readonly, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void).cxx_destruct;
- (void)prepareForResumingUsingCrossfade;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_removeAnimationOnView:(id)arg1 forKey:(id)arg2;
- (void)removeInflightBlurAnimations;
- (void)_removeSnapshotDimAnimated:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_applySnapshotDimAnimated:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_setupDimOnSnapshot;
- (void)_removeLowQualityBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_applyLowQualityBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_prepareForApplyingLowQualityBlurForStyle:(long long)arg1 applying:(_Bool)arg2 opacityAmount:(double *)arg3 opacityDuration:(double *)arg4 opacityDelay:(double *)arg5 opacityTimingFunction:(id *)arg6 targetView:(id *)arg7;
- (void)_setupLowQualityBlurOnSnapshot;
- (void)_removeSnapshotBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_applySnapshotBlurForStyle:(long long)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (double)_resumeFadeInDuration;
- (void)_prepareForApplyingBlurForStyle:(long long)arg1 applying:(_Bool)arg2 inputRadiusAmount:(double *)arg3 inputRadiusDuration:(double *)arg4 inputRadiusDelay:(double *)arg5 inputRadiusTimingFunction:(id *)arg6 opacityAmount:(double *)arg7 opacityDuration:(double *)arg8 opacityDelay:(double *)arg9 opacityTimingFunction:(id *)arg10;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)setBlurred:(_Bool)arg1 animated:(_Bool)arg2 style:(long long)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)initWithView:(id)arg1 desiredAspectRatio:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

