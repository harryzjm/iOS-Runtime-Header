//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableDictionary, NSString, _UIFloatingShadowView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTVBackgroundView : UIView
{
    NSMutableDictionary *_alphas;
    _Bool _shouldUseTintColorAsBackgroundColor;
    _Bool _isHighlighted;
    _Bool _isPressed;
    _Bool _shouldShowShadow;
    _UIFloatingShadowView *_shadowView;
    UIView *_backgroundView;
}

+ (struct CGSize)backgroundInsetAmount;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowShadow; // @synthesize shouldShowShadow=_shouldShowShadow;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isPressed; // @synthesize isPressed=_isPressed;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(retain, nonatomic) _UIFloatingShadowView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) _Bool shouldUseTintColorAsBackgroundColor; // @synthesize shouldUseTintColorAsBackgroundColor=_shouldUseTintColorAsBackgroundColor;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (struct CGSize)_shadowOffset;
- (id)_displayedBackgroundColor;
- (double)_alphaForHighlighted:(_Bool)arg1 pressed:(_Bool)arg2;
- (void)setPressed:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (double)alphaForState:(unsigned long long)arg1;
- (void)setAlpha:(double)arg1 forState:(unsigned long long)arg2;
- (void)_updateBackgroundColor;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

