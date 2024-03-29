//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UITabBarVisualProvider.h"

@class NSString, UIPointerInteraction, UIView, _UIBarBackground, _UIBarBackgroundLayout;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderLegacyIOS : _UITabBarVisualProvider
{
    UIPointerInteraction *_pointerInteraction;
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_backgroundViewLayout;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    double _minimumWidthForHorizontalLayout;
    _Bool _useModernAppearance;
    long long _style;
    double _backgroundTransitionProgress;
}

- (void).cxx_destruct;
- (double)backgroundTransitionProgress;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (id)_focusedItemHighlightView;
- (double)_shim_heightForCustomizingItems;
- (void)_shim_updateTabBarItemView:(id)arg1;
- (void)_shim_layoutItemsOnly;
- (void)_shim_setShadowHidden:(_Bool)arg1;
- (_Bool)_shim_shadowHidden;
- (void)_shim_setShadowAlpha:(double)arg1;
- (double)_shim_shadowAlpha;
- (id)_shim_accessoryView;
- (void)_shim_setAccessoryView:(id)arg1;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (id)preferredFocusedView;
- (id)_preferredFocusedViewiOS;
- (id)_preferredFocusedViewCarplay;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setBackgroundTransitionProgress:(double)arg1 forceUpdate:(_Bool)arg2 animated:(_Bool)arg3;
- (void)setBackgroundTransitionProgress:(double)arg1;
- (void)layoutSubviews;
- (void)updateBackgroundGroupName;
- (void)_updateBackgroundAnimated:(_Bool)arg1;
- (void)_updateBackgroundModern;
- (void)_updateBackgroundLegacy;
- (void)_layoutTabBarItems;
- (long long)_styleForTraitCollection:(id)arg1;
- (void)_configureItems:(id)arg1;
- (void)_updateAccessoryView;
- (struct CGRect)_shadowFrameForBounds:(struct CGRect)arg1 height:(double)arg2;
- (struct CGRect)_layoutRegion;
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (id)createViewForTabBarItem:(id)arg1;
- (void)setMinimumWidthForHorizontalLayout:(double)arg1;
- (double)minimumWidthForHorizontalLayout;
- (id)appearanceObserver;
- (void)setUseModernAppearance:(_Bool)arg1;
- (_Bool)useModernAppearance;
- (void)changeLayout;
- (void)changeAppearance;
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 oldSelectedItem:(id)arg4 animate:(_Bool)arg5;
- (void)_updateAppearanceForTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (void)teardown;
- (void)prepare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

