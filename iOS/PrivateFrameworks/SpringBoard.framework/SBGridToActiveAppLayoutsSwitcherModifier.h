//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, SBSwitcherModifier;

@interface SBGridToActiveAppLayoutsSwitcherModifier
{
    long long _direction;
    NSArray *_activeAppLayouts;
    SBSwitcherModifier *_gridModifier;
    _Bool _wantsMinificationFilter;
}

- (void).cxx_destruct;
- (_Bool)_isEffectivelyFullScreen;
- (double)_unselectedCardScale;
- (_Bool)_isIndexActive:(unsigned long long)arg1;
- (id)liveContentRasterizationAttributesForAppLayout:(id)arg1;
- (id)topMostLayoutElements;
- (id)appLayoutsToCacheSnapshots;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)homeScreenBackdropBlurProgress;
- (long long)homeScreenBackdropBlurType;
- (double)wallpaperScale;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (double)opacityForIndex:(unsigned long long)arg1;
- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)visibleAppLayouts;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)transitionWillBegin;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 activeAppLayouts:(id)arg3 gridModifier:(id)arg4;

@end
