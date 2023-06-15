//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISliderStyle-Protocol.h>

@class UIEvent, UIImage, UIImageView, UISlider, UISliderDataModel, UITouch, UIView;

@protocol _UISliderVisualElement <UISliderStyle>
@property(retain, nonatomic) UISliderDataModel *data;
@property(nonatomic) __weak UISlider *slider;
- (UIView *)thumbViewNeue;
- (UIView *)thumbView;
- (_Bool)cancelTouchTracking;
- (void)_controlTouchEnded:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (void)_controlTouchMoved:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (void)_controlTouchBegan:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (void)endTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (_Bool)continueTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (_Bool)beginTrackingWithTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (_Bool)cancelMouseTracking;
- (UIImageView *)maxValueImageView;
- (UIImageView *)minValueImageView;
- (UIView *)maxTrackView;
- (UIView *)minTrackView;
- (struct UIEdgeInsets)thumbHitEdgeInsets;
- (UIImageView *)createThumbView;
- (struct CGRect)valueTextRectForBounds:(struct CGRect)arg1;
- (_Bool)isAnimatingValueChange;
- (void)didChangeMinimumTrackVisibleWithDuration:(double)arg1;
- (void)didSetThumbEnabled;
- (void)didSetMaximumTrackImageForStates;
- (void)didSetMinimumTrackImageForStates;
- (void)didSetThumbImageForStates;
- (void)didSetShowValue;
- (UIImage *)currentMaximumTrackImage;
- (UIImage *)currentMinimumTrackImage;
- (UIImage *)currentThumbImage;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (void)didPerformLayout;
- (void)didSetContinuous;
- (void)didSetSelected;
- (void)didSetHighlighted;
- (void)didSetEnabled;
- (void)didSetMaximumTrackTintColor;
- (void)didSetMaximumTrackImageForState:(unsigned long long)arg1;
- (void)didSetMinimumTrackTintColor;
- (void)didSetMinimumTrackImageForState:(unsigned long long)arg1;
- (void)didSetThumbTintColor;
- (void)didSetThumbImageForState:(unsigned long long)arg1;
- (void)didSetMaximumValueImage;
- (void)didSetMinimumValueImage;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)didUpdateConfiguration;
- (void)didSetValues;
- (void)didUpdateTraitCollection;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;

@optional
- (_Bool)overriddenTrackingState;
- (void)didSetUserInteractionEnabled;
@end

