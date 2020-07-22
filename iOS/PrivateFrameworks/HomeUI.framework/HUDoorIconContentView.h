//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HUShapeLayerView, HUVisualEffectContainerView, UIViewPropertyAnimator, UIVisualEffectView;

@interface HUDoorIconContentView
{
    HUShapeLayerView *_frameView;
    HUVisualEffectContainerView *_frameContainerView;
    HUShapeLayerView *_doorView;
    UIVisualEffectView *_doorContainerView;
    UIViewPropertyAnimator *_doorAnimator;
}

@property(retain, nonatomic) UIViewPropertyAnimator *doorAnimator; // @synthesize doorAnimator=_doorAnimator;
@property(retain, nonatomic) UIVisualEffectView *doorContainerView; // @synthesize doorContainerView=_doorContainerView;
@property(retain, nonatomic) HUShapeLayerView *doorView; // @synthesize doorView=_doorView;
@property(retain, nonatomic) HUVisualEffectContainerView *frameContainerView; // @synthesize frameContainerView=_frameContainerView;
@property(retain, nonatomic) HUShapeLayerView *frameView; // @synthesize frameView=_frameView;
- (void).cxx_destruct;
- (struct CATransform3D)doorTransformForAngle:(double)arg1;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;
- (id)managedVisualEffectViews;
- (_Bool)wantsManagedVibrancyEffect;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
