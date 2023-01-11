//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBLowEndHardwareSwitcherModifier
{
    unsigned long long _options;
    _Bool _floatingAppVisibleOverSplitView;
    _Bool _floatingAppVisibleOverExclusiveForegroundApp;
}

- (_Bool)_shouldSimplifyForWidgetCenterAndLibrary;
- (_Bool)_shouldSimplifyForOpenFolder;
- (_Bool)_shouldResignActiveAppsUnderFloatingApp;
- (id)keyboardSuppressionMode;
- (id)appLayoutsToResignActive;
- (id)handleMainTransitionEvent:(id)arg1;
- (double)wallpaperScale;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (id)initWithSimplificationOptions:(unsigned long long)arg1;

@end
