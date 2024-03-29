//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageSymbolConfiguration, UILayoutGuide, _UIImageViewAnimationProperties, _UIImageViewImageLoadingProperties, _UIImageViewImageProperties, _UIImageViewUncommonProperties;

__attribute__((visibility("hidden")))
@interface _UIImageViewExtendedStorage
{
    _UIImageViewImageProperties *_highlightedImageProperties;
    _UIImageViewAnimationProperties *_animationProperties;
    _UIImageViewImageLoadingProperties *_imageLoadingProperties;
    _UIImageViewUncommonProperties *_uncommonProperties;
    _Bool highlighted;
    _Bool masksTemplateImages;
    _Bool adjustsImageSizeForAccessibilityContentSizeCategory;
    UIImageSymbolConfiguration *preferredSymbolConfiguration;
    UILayoutGuide *imageContentGuide;
}

+ (id)storageFromSimpleStorage:(id)arg1;
- (void).cxx_destruct;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(_Bool)arg1;
- (_Bool)adjustsImageSizeForAccessibilityContentSizeCategory;
- (void)setMasksTemplateImages:(_Bool)arg1;
- (_Bool)masksTemplateImages;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)setImageContentGuide:(id)arg1;
- (id)imageContentGuide;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (id)preferredSymbolConfiguration;
- (void)setStoppingLoad:(_Bool)arg1;
- (_Bool)isStoppingLoad;
- (void)setEnqueueingLoad:(_Bool)arg1;
- (_Bool)isEnqueueingLoad;
- (void)setStartingLoad:(_Bool)arg1;
- (_Bool)isStartingLoad;
- (void)setPlaceholderView:(id)arg1;
- (id)placeholderView;
- (void)setImageBeingSetByLoader:(id)arg1;
- (id)imageBeingSetByLoader;
- (void)setLoadingDelegate:(id)arg1;
- (id)loadingDelegate;
- (void)setImageLoader:(id)arg1;
- (id)imageLoader;
- (void)setDrawMode:(unsigned int)arg1;
- (unsigned int)drawMode;
- (void)setCIContext:(id)arg1;
- (id)CIContext;
- (void)setTemplateImageRenderingEffects:(unsigned long long)arg1;
- (unsigned long long)templateImageRenderingEffects;
- (void)setDefaultRenderingMode:(long long)arg1;
- (long long)defaultRenderingMode;
- (void)setOverridingSymbolConfiguration:(id)arg1;
- (id)overridingSymbolConfiguration;
- (void)setAnimationRepeatCount:(long long)arg1;
- (long long)animationRepeatCount;
- (void)setAnimationDuration:(double)arg1;
- (double)animationDuration;
- (void)setHighlightedAnimationImages:(id)arg1;
- (id)highlightedAnimationImages;
- (void)setAnimationImages:(id)arg1;
- (id)animationImages;
- (void)setResolvedHighlightedImage:(id)arg1;
- (id)resolvedHighlightedImage;
- (void)setHighlightedImage:(id)arg1;
- (id)highlightedImage;
- (id)uncommonProperties;
- (id)imageLoadingProperties;
- (id)animationProperties;
- (id)highlightedImageProperties;

@end

