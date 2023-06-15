//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class CAShapeLayer, LPAudioPlayButtonStyle, LPAudioPlayButtonTheme, NSString, UIImageView, UILongPressGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface LPPlayButtonControl : UIControl
{
    LPAudioPlayButtonStyle *_style;
    LPAudioPlayButtonTheme *_theme;
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_innerProgressLayer;
    CAShapeLayer *_outerProgressLayer;
    CAShapeLayer *_highlightLayer;
    UILongPressGestureRecognizer *_highlightRecognizer;
    UIView *_backgroundView;
    UIImageView *_imageView;
    _Bool _indeterminate;
    float _progress;
    _Bool _showingProgress;
    _Bool _isPlaying;
}

- (void).cxx_destruct;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)playable;
- (void)_traitAffectingColorAppearanceDidChange:(id)arg1;
- (void)_updateEnabledState;
- (void)_updateInnerProgressLayerStroke;
- (void)_toggleToPlayState;
- (void)_showPlayIndicator:(_Bool)arg1;
- (void)_createHighlightLayer;
- (void)_createOuterProgressView;
- (void)_createInnerProgressView;
- (void)_createImageView;
- (void)_createBackgroundView;
- (void)_createBorderView;
- (id)_createProgressIndicatorLayerWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;
- (void)_updateOuterProgressLayerStroke;
- (void)showPlayIndicator:(_Bool)arg1;
- (void)setShowOuterBorder:(_Bool)arg1;
- (void)setShowBorder:(_Bool)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)hideProgressAnimated:(_Bool)arg1;
- (void)endIndeterminateAnimation;
- (void)beginIndeterminateAnimation;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setEnabled:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_hideTapHighlight;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_didScroll;
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)buttonPressed:(id)arg1;
- (void)installRecognizersOnView:(id)arg1;
- (void)layoutPlayButton;
- (void)layoutSubviews;
- (float)buttonCornerRadius;
- (struct CGSize)buttonSize;
- (id)defaultBackgroundColor;
- (id)outerBorderColor;
- (id)pauseImage;
- (id)playImage;
- (void)setPlayButtonState:(unsigned long long)arg1;
- (_Bool)isFlipped;
- (id)initWithStyle:(id)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

