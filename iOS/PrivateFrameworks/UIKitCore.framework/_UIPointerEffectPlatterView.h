//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray, UIPointerShape, UITargetedPreview, _UILumaTrackingBackdropView, _UIPointerEffectTintView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIPointerEffectPlatterView : UIView
{
    _Bool _tintDisabled;
    _Bool _useSoftShadow;
    _Bool _geometryFrozen;
    _Bool _pressed;
    UITargetedPreview *_targetedPreview;
    double _shadowAlpha;
    long long _tintMode;
    UIView *_specularHighlight;
    unsigned long long _specularOptions;
    CDUnknownBlockType _tintColorMatrixProvider;
    UIView *_contentSourceView;
    UIView *_shadowView;
    _UIPortalView *_contentPortalView;
    _UIPointerEffectTintView *_tintView;
    _UILumaTrackingBackdropView *_lumaTrackingView;
    UIView *_specularOverlayView;
    NSMutableArray *_accessoryPortals;
    UIPointerShape *_tintViewShape;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPointerShape *tintViewShape; // @synthesize tintViewShape=_tintViewShape;
@property(retain, nonatomic) NSMutableArray *accessoryPortals; // @synthesize accessoryPortals=_accessoryPortals;
@property(retain, nonatomic) UIView *specularOverlayView; // @synthesize specularOverlayView=_specularOverlayView;
@property(retain, nonatomic) _UILumaTrackingBackdropView *lumaTrackingView; // @synthesize lumaTrackingView=_lumaTrackingView;
@property(retain, nonatomic) _UIPointerEffectTintView *tintView; // @synthesize tintView=_tintView;
@property(retain, nonatomic) _UIPortalView *contentPortalView; // @synthesize contentPortalView=_contentPortalView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *contentSourceView; // @synthesize contentSourceView=_contentSourceView;
@property(copy, nonatomic) CDUnknownBlockType tintColorMatrixProvider; // @synthesize tintColorMatrixProvider=_tintColorMatrixProvider;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) _Bool geometryFrozen; // @synthesize geometryFrozen=_geometryFrozen;
@property(nonatomic) _Bool useSoftShadow; // @synthesize useSoftShadow=_useSoftShadow;
@property(nonatomic) unsigned long long specularOptions; // @synthesize specularOptions=_specularOptions;
@property(retain, nonatomic) UIView *specularHighlight; // @synthesize specularHighlight=_specularHighlight;
@property(nonatomic) long long tintMode; // @synthesize tintMode=_tintMode;
@property(nonatomic, getter=isTintDisabled) _Bool tintDisabled; // @synthesize tintDisabled=_tintDisabled;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(copy, nonatomic) UITargetedPreview *targetedPreview; // @synthesize targetedPreview=_targetedPreview;
- (_Bool)_isEligibleForFocusOcclusion;
- (id)_specularOverlayWithHighlightPortal:(id)arg1 options:(unsigned long long)arg2;
- (id)_newLumaTrackingViewForTintView:(id)arg1;
- (void)_layoutTintView;
- (id)_newTintView;
- (id)_newShadowView;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_updateContentMask;
- (_Bool)_ignoreRemoveAllAnimations;
- (void)_installAccessoryView:(id)arg1;
- (id)initWithTargetedPreview:(id)arg1 tintViewShape:(id)arg2;

@end

