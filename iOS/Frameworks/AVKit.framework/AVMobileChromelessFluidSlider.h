//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UISlider.h>

@class NSArray, NSMutableArray, NSString, UIBlurEffect, UIPointerInteraction, UIView, _UISliderFluidConfiguration;
@protocol AVMobileChromelessFluidSliderDelegate;

__attribute__((visibility("hidden")))
@interface AVMobileChromelessFluidSlider : UISlider
{
    UIView *_contentView;
    float _trackingStartNormalizedValue;
    float _trackingTouchStartNormalizedX;
    NSMutableArray *_sliderMarkViews;
    UIBlurEffect *_enabledFilledBarViewEffect;
    UIBlurEffect *_enabledUnfilledBarViewEffect;
    UIBlurEffect *_disabledFilledBarViewEffect;
    UIBlurEffect *_disabledUnfilledBarViewEffect;
    UIPointerInteraction *_sliderPointerInteraction;
    _UISliderFluidConfiguration *_fluidSliderConfiguration;
    _Bool _usesVolumeStyle;
    float _totalValue;
    double _barHeight;
    NSArray *_sliderMarks;
    unsigned long long _tintState;
    id <AVMobileChromelessFluidSliderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool usesVolumeStyle; // @synthesize usesVolumeStyle=_usesVolumeStyle;
@property(nonatomic) __weak id <AVMobileChromelessFluidSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float totalValue; // @synthesize totalValue=_totalValue;
@property(nonatomic) unsigned long long tintState; // @synthesize tintState=_tintState;
@property(retain, nonatomic) NSArray *sliderMarks; // @synthesize sliderMarks=_sliderMarks;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
- (void)setEnabled:(_Bool)arg1;
- (void)_sliderFluidInteractionWillExtend:(id)arg1 insets:(struct UIEdgeInsets)arg2;
- (void)_sliderFluidInteractionWillEnd:(id)arg1;
- (void)_sliderFluidInteractionWillContinue:(id)arg1 withLocation:(struct CGPoint)arg2;
- (void)_sliderFluidInteractionWillBegin:(id)arg1 withLocation:(struct CGPoint)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)hitRect;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didMoveToWindow;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)frameForSliderMark:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

