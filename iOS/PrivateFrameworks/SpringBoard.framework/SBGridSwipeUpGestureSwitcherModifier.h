//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SBDismissSiriSwitcherModifier;

@interface SBGridSwipeUpGestureSwitcherModifier
{
    struct CGPoint _translation;
    _Bool _isApplyingContentViewScaleToSwitcherViewBounds;
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;
}

- (void).cxx_destruct;
- (void)_performBlockByApplyContentViewScaleToSwitcherViewBounds:(CDUnknownBlockType)arg1;
- (void)_applyPrototypeSettings;
- (long long)finalResponseForGestureEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (long long)homeScreenBackdropBlurType;
- (id)visibleAppLayouts;
- (double)contentViewScale;
- (struct CGPoint)scrollViewContentOffset;
- (struct CGRect)switcherViewBounds;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithGestureID:(id)arg1;

@end
