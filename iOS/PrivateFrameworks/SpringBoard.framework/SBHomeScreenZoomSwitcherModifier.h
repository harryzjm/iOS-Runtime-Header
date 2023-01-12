//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBHomeScreenZoomSwitcherModifier
{
    long long _direction;
}

- (_Bool)_isEffectivelyHome;
- (long long)wallpaperStyle;
- (double)wallpaperScale;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isHomeScreenContentRequired;
- (double)homeScreenScale;
- (double)homeScreenDimmingAlpha;
- (long long)homeScreenBackdropBlurType;
- (double)homeScreenBackdropBlurProgress;
- (double)homeScreenAlpha;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2;

@end
