//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindowScene.h>

@class NSString, SBWImageSlotRepository, SBWWallpaperWindowSceneStyleTransitionState, UIColor, _UILegibilitySettings;

@interface SBWWallpaperWindowScene : UIWindowScene
{
    SBWImageSlotRepository *_wallpaperEffectImageSlots;
    _Bool _homescreenWallpaperHidden;
    _Bool _lockscreenWallpaperHidden;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool lockscreenWallpaperHidden; // @synthesize lockscreenWallpaperHidden=_lockscreenWallpaperHidden;
@property(readonly, nonatomic) _Bool homescreenWallpaperHidden; // @synthesize homescreenWallpaperHidden=_homescreenWallpaperHidden;
- (void)_handleUpdateLocationsAction:(id)arg1;
- (void)_handleUpdateAndPrewarmAction:(id)arg1;
- (void)_handlePreheatAction:(id)arg1;
- (void)_handleWallpaperEffectImageRequestAction:(id)arg1;
- (void)_handleImageSlotRequestAction:(id)arg1;
- (void)_updateLiveWallpaperInteractive:(_Bool)arg1;
- (void)_updateLiveWallpaperTouchActive:(_Bool)arg1;
- (void)_updateLockscreenStyleTransitionStateTo:(id)arg1 from:(id)arg2;
- (void)_updateHomescreenStyleTransitionStateTo:(id)arg1 from:(id)arg2;
- (void)_updateHomescreenStyleChangesDelayed:(_Bool)arg1;
- (void)_updateWallpaperRequired:(_Bool)arg1;
- (void)_updateWallpaperAnimationSuspended:(_Bool)arg1;
- (void)_updateColorSamplingSuspended:(_Bool)arg1;
- (void)_updateLockscreenWallpaperScale:(double)arg1;
- (void)_updateHomescreenWallpaperScale:(double)arg1;
- (void)_updateWallpaperHiddenForHomescreen:(_Bool)arg1 lockscreen:(_Bool)arg2;
- (void)_updateDisallowRasterizationForHomescreen:(_Bool)arg1 lockscreen:(_Bool)arg2;
- (void)_updateLockscreenOnlyWallpaperAlpha:(double)arg1;
- (void)_updateHomescreenWallpaperAlpha:(double)arg1;
- (void)_updateLockscreenWallpaperAlpha:(double)arg1;
- (void)_updateLockscreenWallpaperContentsRect:(struct CGRect)arg1;
- (void)_updateWallpaperVariant:(long long)arg1 inAnimationSettings:(id)arg2 outAnimationSettings:(id)arg3;
- (void)_updateWallpaperSceneClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (id)_wallpaperSceneClientSettings;
- (id)_wallpaperSceneSettings;
- (void)noteWallpaperDidCompleteWallpaperChange;
- (void)noteWallpaperDidChangeForVariant:(long long)arg1;
- (void)noteWallpaperWillChangeForVariant:(long long)arg1;
@property(nonatomic) long long liveWallpaperPlaybackState;
@property(nonatomic, getter=isLockscreenContentLiveWallpaper) _Bool lockscreenContentIsLiveWallpaper;
@property(nonatomic, getter=isLockscreenContentStatic) _Bool lockscreenContentStatic;
@property(nonatomic, getter=isHomescreenContentStatic) _Bool homescreenContentStatic;
@property(nonatomic) double lockscreenZoomFactor;
@property(nonatomic) double homescreenZoomFactor;
@property(nonatomic) _Bool lockscreenParallaxEnabled;
@property(nonatomic) _Bool homescreenParallaxEnabled;
@property(nonatomic) double lockscreenParallaxFactor;
@property(nonatomic) double homescreenParallaxFactor;
@property(nonatomic) double lockscreenContrast;
@property(nonatomic) double homescreenContrast;
@property(copy, nonatomic) UIColor *lockscreenAverageColor;
@property(copy, nonatomic) UIColor *homescreenAverageColor;
@property(copy, nonatomic) _UILegibilitySettings *lockscreenLegibilitySettings;
@property(copy, nonatomic) _UILegibilitySettings *homescreenLegibilitySettings;
@property(nonatomic) double lockscreenMinimumWallpaperScale;
@property(nonatomic) double homescreenMinimumWallpaperScale;
@property(readonly, nonatomic) _Bool liveWallpaperInteractive;
@property(readonly, nonatomic) _Bool liveWallpaperTouchActive;
@property(readonly, copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *lockscreenStyleTransitionState;
@property(readonly, copy, nonatomic) SBWWallpaperWindowSceneStyleTransitionState *homescreenStyleTransitionState;
@property(readonly, copy, nonatomic) NSString *cachingIdentifier;
@property(readonly, nonatomic) _Bool homescreenStyleChangesDelayed;
@property(readonly, nonatomic) _Bool wallpaperRequired;
@property(readonly, nonatomic) _Bool wallpaperAnimationSuspended;
@property(readonly, nonatomic) _Bool colorSamplingSuspended;
@property(readonly, nonatomic) double lockscreenWallpaperScale;
@property(readonly, nonatomic) double homescreenWallpaperScale;
@property(readonly, nonatomic) _Bool disallowLockscreenRasterization;
@property(readonly, nonatomic) _Bool disallowHomescreenRasterization;
@property(readonly, nonatomic) double lockscreenOnlyWallpaperAlpha;
@property(readonly, nonatomic) double homescreenWallpaperAlpha;
@property(readonly, nonatomic) double lockscreenWallpaperAlpha;
@property(readonly, nonatomic) struct CGRect lockscreenWallpaperContentsRect;
@property(readonly, nonatomic) long long wallpaperVariant;

@end
