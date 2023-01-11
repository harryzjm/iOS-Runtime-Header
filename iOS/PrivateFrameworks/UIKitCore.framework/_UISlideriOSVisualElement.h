//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UICursorInteractionDelegate-Protocol.h>
#import <UIKitCore/_UISliderVisualElement-Protocol.h>

@class NSArray, NSString, UIImageView, UISlider, UIView, _UISliderDataModel;

__attribute__((visibility("hidden")))
@interface _UISlideriOSVisualElement <_UICursorInteractionDelegate, _UISliderVisualElement>
{
    UIImageView *_innerThumbView;
    UIImageView *_minValueImageView;
    UIImageView *_maxValueImageView;
    UIImageView *_thumbView;
    UIImageView *_minTrackView;
    UIImageView *_maxTrackView;
    UIView *_minTrackClipView;
    UIView *_maxTrackClipView;
    struct {
        unsigned int animating:1;
        unsigned int preparingToAnimate:1;
    } _sliderFlags;
    double _hitOffset;
    UIView *_thumbViewNeue;
    NSArray *_trackColors;
    _Bool _trackIsArtworkBased;
    _Bool _thumbIsArtworkBased;
    _Bool _maxColorIsValid;
    _UISliderDataModel *_data;
    UISlider *_slider;
}

+ (id)_modernThumbImageWithTraitCollection:(id)arg1 tintColor:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UISlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) _UISliderDataModel *data; // @synthesize data=_data;
- (id)thumbViewNeue;
- (id)thumbView;
- (id)minValueImageView;
- (id)maxValueImageView;
- (void)didSetValues;
- (void)didSetShowValue;
- (void)didSetSelected;
- (void)didSetHighlighted;
- (void)didSetEnabled;
- (id)maxTrackView;
- (id)minTrackView;
- (struct UIEdgeInsets)thumbHitEdgeInsets;
- (void)didChangeMinimumTrackVisibleWithDuration:(double)arg1;
- (void)didSetThumbEnabled;
- (void)didSetMaximumTrackImageForStates;
- (void)didSetMinimumTrackImageForStates;
- (void)didSetThumbImageForStates;
- (id)createThumbView;
- (struct CGRect)valueTextRectForBounds:(struct CGRect)arg1;
- (void)showValueDidChange;
- (_Bool)isAnimatingValueChange;
- (_Bool)cancelTouchTracking;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldBeginTrackingAtPoint:(struct CGPoint)arg1 pointInKnob:(struct CGPoint *)arg2 inKnob:(_Bool *)arg3;
- (_Bool)cancelMouseTracking;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_sliderAnimationDidStop:(_Bool)arg1;
- (void)_sliderAnimationWillStart;
- (void)_setValue:(float)arg1 andSendAction:(_Bool)arg2;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)_updateAppearanceForEnabled:(_Bool)arg1;
- (void)_layoutSubviewsForBoundsChange:(_Bool)arg1;
- (void)_updateMaxTrackColorForInitialization:(_Bool)arg1;
- (void)_traitCollectionDidChangeInternal:(const struct _UITraitCollectionChangeDescription *)arg1;
- (void)_setSliderNeedsLayout;
- (void)didPerformLayout;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (double)thumbDimensionNeue;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (unsigned long long)state;
- (id)currentMaximumTrackImage;
- (id)currentMinimumTrackImage;
- (id)currentThumbImage;
- (void)tintColorDidChange;
- (id)maximumValueImage;
- (void)didSetMaximumValueImage;
- (void)didSetMinimumValueImage;
- (void)didSetMaximumTrackTintColor;
- (void)didSetMaximumTrackImageForState:(unsigned long long)arg1;
- (void)didSetMinimumTrackTintColor;
- (void)_updateMinimumTrackTintColor;
- (void)didSetMinimumTrackImageForState:(unsigned long long)arg1;
- (void)didSetThumbTintColor;
- (id)thumbTintColor;
- (void)didSetThumbImageForState:(unsigned long long)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;
- (void)_rebuildControlThumb:(_Bool)arg1 track:(_Bool)arg2;
- (void)_buildTrackArtwork;
- (double)_cornerRadiusForRect:(struct CGRect)arg1;
- (void)_initSubviews;
- (void)_initImages;
- (id)createThumbViewNeue;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (void)_setupFeedback;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_listenForContentSizeCategoryChangesIfNecessary;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
