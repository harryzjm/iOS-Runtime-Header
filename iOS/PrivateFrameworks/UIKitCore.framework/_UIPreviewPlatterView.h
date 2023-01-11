//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UITargetedPreview, UIViewFloatAnimatableProperty, _UIPlatterClippingView, _UIPlatterSoftShadowView, _UIPlatterTransformView, _UIRoundedRectShadowView;

__attribute__((visibility("hidden")))
@interface _UIPreviewPlatterView
{
    _Bool _expanded;
    _Bool _hideShadowWhenCollapsed;
    _Bool _hideChromeWhenCollapsed;
    _Bool _alwaysCompact;
    _Bool _preventPreviewRasterization;
    _Bool _shouldMorphContents;
    _Bool _frozen;
    _Bool _contentSizeDidChange;
    UITargetedPreview *_collapsedPreview;
    UITargetedPreview *_expandedPreview;
    _UIPlatterClippingView *_collapsedClippingView;
    _UIPlatterTransformView *_collapsedTransformView;
    _UIPlatterClippingView *_expandedClippingView;
    _UIPlatterTransformView *_expandedTransformView;
    _UIPlatterSoftShadowView *_pathShadowView;
    _UIRoundedRectShadowView *_rectangularShadowView;
    unsigned long long _preferredMorphingAxis;
    UIViewFloatAnimatableProperty *_expansionProgress;
    UIViewFloatAnimatableProperty *_platterWidth;
    UIViewFloatAnimatableProperty *_platterHeight;
    UIViewFloatAnimatableProperty *_collapsedContentWidth;
    UIViewFloatAnimatableProperty *_collapsedContentHeight;
    UIViewFloatAnimatableProperty *_expandedContentWidth;
    UIViewFloatAnimatableProperty *_expandedContentHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *expandedContentHeight; // @synthesize expandedContentHeight=_expandedContentHeight;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *expandedContentWidth; // @synthesize expandedContentWidth=_expandedContentWidth;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *collapsedContentHeight; // @synthesize collapsedContentHeight=_collapsedContentHeight;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *collapsedContentWidth; // @synthesize collapsedContentWidth=_collapsedContentWidth;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *platterHeight; // @synthesize platterHeight=_platterHeight;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *platterWidth; // @synthesize platterWidth=_platterWidth;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *expansionProgress; // @synthesize expansionProgress=_expansionProgress;
@property(nonatomic) unsigned long long preferredMorphingAxis; // @synthesize preferredMorphingAxis=_preferredMorphingAxis;
@property(nonatomic) _Bool contentSizeDidChange; // @synthesize contentSizeDidChange=_contentSizeDidChange;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
@property(retain, nonatomic) _UIRoundedRectShadowView *rectangularShadowView; // @synthesize rectangularShadowView=_rectangularShadowView;
@property(retain, nonatomic) _UIPlatterSoftShadowView *pathShadowView; // @synthesize pathShadowView=_pathShadowView;
@property(retain, nonatomic) _UIPlatterTransformView *expandedTransformView; // @synthesize expandedTransformView=_expandedTransformView;
@property(retain, nonatomic) _UIPlatterClippingView *expandedClippingView; // @synthesize expandedClippingView=_expandedClippingView;
@property(retain, nonatomic) _UIPlatterTransformView *collapsedTransformView; // @synthesize collapsedTransformView=_collapsedTransformView;
@property(retain, nonatomic) _UIPlatterClippingView *collapsedClippingView; // @synthesize collapsedClippingView=_collapsedClippingView;
@property(nonatomic) _Bool shouldMorphContents; // @synthesize shouldMorphContents=_shouldMorphContents;
@property(nonatomic) _Bool preventPreviewRasterization; // @synthesize preventPreviewRasterization=_preventPreviewRasterization;
@property(nonatomic) _Bool alwaysCompact; // @synthesize alwaysCompact=_alwaysCompact;
@property(nonatomic) _Bool hideChromeWhenCollapsed; // @synthesize hideChromeWhenCollapsed=_hideChromeWhenCollapsed;
@property(nonatomic) _Bool hideShadowWhenCollapsed; // @synthesize hideShadowWhenCollapsed=_hideShadowWhenCollapsed;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) UITargetedPreview *expandedPreview; // @synthesize expandedPreview=_expandedPreview;
@property(retain, nonatomic) UITargetedPreview *collapsedPreview; // @synthesize collapsedPreview=_collapsedPreview;
- (void)updateContentSize;
- (id)_interfaceLevelOverrideTraitCollectionForView:(id)arg1 expanded:(_Bool)arg2;
- (void)_installPreview:(id)arg1 inClippingView:(id)arg2 transformView:(id)arg3;
- (void)_updateCollapsedChrome;
- (void)_updatePathShadow;
- (_Bool)_previewPrefersApplyingMask:(id)arg1;
- (_Bool)_previewIsLikelyOpaque:(id)arg1;
@property(readonly, nonatomic) _Bool bothViewsAreLikelyOpaque;
- (void)didTearOffForDrag;
- (void)freezeExpandedPreview;
- (void)_updateClippingViews;
- (double)_pathShadowAlphaForExpansionProgress:(double)arg1;
- (double)_rectangularShadowAlphaForExpansionProgress:(double)arg1;
- (void)_updatePathShadowTransform;
- (void)_prepareAnimatableProperties;
- (void)_modelUpdates;
- (void)layoutSubviews;
- (void)didMoveToWindow;
@property(nonatomic) _Bool hidesCollapsedSourceView; // @dynamic hidesCollapsedSourceView;
@property(nonatomic) _Bool allowsUserInteractionInExpandedPreview;
- (id)initWithFrame:(struct CGRect)arg1;

@end
