//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class CAGradientLayer, UITraitCollection, WFGradient;

@interface WFFloatingLayer : CALayer
{
    _Bool _pressed;
    _Bool _colorizesShadow;
    _Bool _usePillCornerRadius;
    WFGradient *_gradient;
    double _scalingFactor;
    CAGradientLayer *_gradientLayer;
    UITraitCollection *_traitCollection;
}

@property(retain, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(nonatomic) __weak CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) double scalingFactor; // @synthesize scalingFactor=_scalingFactor;
@property(nonatomic) _Bool usePillCornerRadius; // @synthesize usePillCornerRadius=_usePillCornerRadius;
@property(nonatomic) _Bool colorizesShadow; // @synthesize colorizesShadow=_colorizesShadow;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(copy, nonatomic) WFGradient *gradient; // @synthesize gradient=_gradient;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateShadowColor;
- (void)updateBackgroundColor;
- (void)applyConfiguration:(id)arg1;
- (id)init;

@end
