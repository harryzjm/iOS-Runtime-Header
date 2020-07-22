//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HUDynamicStateAnimationApplier, HUNonAnimatingTintImageView, UIImageView, UIVisualEffectView;

@interface HUFanIconContentView
{
    UIImageView *_baseView;
    HUNonAnimatingTintImageView *_bladesView;
    UIVisualEffectView *_baseVisualEffectView;
    UIVisualEffectView *_bladesVisualEffectView;
    unsigned long long _rotationState;
    double _rotationSpeed;
    HUDynamicStateAnimationApplier *_speedRampApplier;
}

@property(retain, nonatomic) HUDynamicStateAnimationApplier *speedRampApplier; // @synthesize speedRampApplier=_speedRampApplier;
@property(nonatomic) double rotationSpeed; // @synthesize rotationSpeed=_rotationSpeed;
@property(nonatomic) unsigned long long rotationState; // @synthesize rotationState=_rotationState;
@property(retain, nonatomic) UIVisualEffectView *bladesVisualEffectView; // @synthesize bladesVisualEffectView=_bladesVisualEffectView;
@property(retain, nonatomic) UIVisualEffectView *baseVisualEffectView; // @synthesize baseVisualEffectView=_baseVisualEffectView;
@property(retain, nonatomic) HUNonAnimatingTintImageView *bladesView; // @synthesize bladesView=_bladesView;
@property(retain, nonatomic) UIImageView *baseView; // @synthesize baseView=_baseView;
- (void).cxx_destruct;
- (void)_setBladesLayerSpeed:(float)arg1;
- (void)_rampBladesLayerToRotationSpeedAnimated:(_Bool)arg1;
- (void)_updateImages;
- (void)_updateRotationAnimationFromState:(unsigned long long)arg1 shouldRampSpeed:(_Bool)arg2;
- (void)_updateVisualEffects;
- (void)setVibrancyEffect:(id)arg1;
- (_Bool)wantsManagedVibrancyEffect;
- (void)setDisableContinuousAnimation:(_Bool)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setIconSize:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

