//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBAppLayout, SBSwitcherModifier;

@interface SBHomeGestureToZoomDownSwitcherModifier
{
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_nonGestureInitiatedZoomModifier;
    long long _startingEnvironmentMode;
    struct CGPoint _liftOffVelocity;
    unsigned long long _iconGridSizeClass;
    _Bool _overshootScaleForWidgetZoomDown;
}

- (void).cxx_destruct;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
- (id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3;
- (id)appLayoutsToCacheFullsizeSnapshots;
- (id)appLayoutsToCacheSnapshots;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (long long)homeScreenBackdropBlurType;
- (id)_scaleSettings;
- (id)_positionSettings;
- (id)_layoutSettings;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)transitionWillUpdate;
- (id)responseForProposedChildResponse:(id)arg1 childModifier:(id)arg2 event:(id)arg3;
- (_Bool)completesWhenChildrenComplete;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 nonGestureInitiatedZoomModifier:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4 liftOffVelocity:(struct CGPoint)arg5;

@end
