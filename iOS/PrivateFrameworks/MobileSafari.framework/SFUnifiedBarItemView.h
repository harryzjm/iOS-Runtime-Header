//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class SFUnifiedBarItem, SFUnifiedBarMetrics, SFUnifiedBarTheme, UIPreviewParameters, UIView, UIVisualEffectView;

@interface SFUnifiedBarItemView : UIButton
{
    UIVisualEffectView *_platterView;
    UIVisualEffectView *_platterFillView;
    UIView *_cutoutView;
    _Bool _showsPlatter;
    _Bool _visible;
    _Bool _occluded;
    _Bool _hovering;
    UIView *_contentView;
    SFUnifiedBarMetrics *_barMetrics;
    SFUnifiedBarTheme *_barTheme;
    long long _platterStyle;
    double _barBackgroundAlpha;
    double _themeColorVisibility;
    double _squishTransformFactor;
    SFUnifiedBarItem *_item;
    unsigned long long _occludingItemIndex;
    SFUnifiedBarItemView *_occludingView;
    double _squishedInset;
    struct CGRect _initialFrame;
}

- (void).cxx_destruct;
@property(nonatomic) double squishedInset; // @synthesize squishedInset=_squishedInset;
@property(nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
@property(nonatomic, getter=isHovering) _Bool hovering; // @synthesize hovering=_hovering;
@property(nonatomic) __weak SFUnifiedBarItemView *occludingView; // @synthesize occludingView=_occludingView;
@property(nonatomic) unsigned long long occludingItemIndex; // @synthesize occludingItemIndex=_occludingItemIndex;
@property(nonatomic, getter=isOccluded) _Bool occluded; // @synthesize occluded=_occluded;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property __weak SFUnifiedBarItem *item; // @synthesize item=_item;
@property(nonatomic) double squishTransformFactor; // @synthesize squishTransformFactor=_squishTransformFactor;
@property(nonatomic) double themeColorVisibility; // @synthesize themeColorVisibility=_themeColorVisibility;
@property(nonatomic) double barBackgroundAlpha; // @synthesize barBackgroundAlpha=_barBackgroundAlpha;
@property(nonatomic) long long platterStyle; // @synthesize platterStyle=_platterStyle;
@property(retain, nonatomic) SFUnifiedBarTheme *barTheme; // @synthesize barTheme=_barTheme;
@property(retain, nonatomic) SFUnifiedBarMetrics *barMetrics; // @synthesize barMetrics=_barMetrics;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool showsPlatter; // @synthesize showsPlatter=_showsPlatter;
- (void)_layOutCutoutUsingPresentationFrames:(_Bool)arg1;
- (void)layOutCutout;
- (void)_updateContentAlpha;
- (void)didEndDragging;
- (void)willBeginDragging;
- (void)prepareForReuse;
@property(readonly, nonatomic) UIPreviewParameters *previewParameters;
@property(readonly, nonatomic) double preferredWidth;
- (void)_updateBackgroundAlpha;
- (void)_applyPlatterColor:(id)arg1;
- (void)_updatePlatterEffect;
- (void)_disableVibrancyIfNeededForTheme:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
