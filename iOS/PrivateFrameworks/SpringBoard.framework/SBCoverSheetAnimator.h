//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBFolderController, SBHUnlockSettings, SBIconZoomAnimator, SBLockToAppStatusBarAnimator, SBSceneManager, SBWallpaperController, SBWindowSelfHostWrapper, UIWindow;

@interface SBCoverSheetAnimator : NSObject
{
    _Bool _transitioning;
    SBLockToAppStatusBarAnimator *_statusBarAnimator;
    SBIconZoomAnimator *_iconAnimator;
    SBWindowSelfHostWrapper *_coverSheetWindowHostWrapper;
    SBSceneManager *_sceneManager;
    UIWindow *_hostingWindow;
    UIWindow *_switcherWindow;
    SBWallpaperController *_wallpaperController;
    SBFolderController *_folderController;
    SBHUnlockSettings *_unlockSettings;
    UIWindow *_coverSheetWindow;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIWindow *coverSheetWindow; // @synthesize coverSheetWindow=_coverSheetWindow;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(retain, nonatomic) SBHUnlockSettings *unlockSettings; // @synthesize unlockSettings=_unlockSettings;
@property(retain, nonatomic) SBFolderController *folderController; // @synthesize folderController=_folderController;
@property(retain, nonatomic) SBWallpaperController *wallpaperController; // @synthesize wallpaperController=_wallpaperController;
@property(retain, nonatomic) UIWindow *switcherWindow; // @synthesize switcherWindow=_switcherWindow;
@property(retain, nonatomic) UIWindow *hostingWindow; // @synthesize hostingWindow=_hostingWindow;
@property(retain, nonatomic) SBSceneManager *sceneManager; // @synthesize sceneManager=_sceneManager;
@property(retain, nonatomic) SBWindowSelfHostWrapper *coverSheetWindowHostWrapper; // @synthesize coverSheetWindowHostWrapper=_coverSheetWindowHostWrapper;
@property(retain, nonatomic) SBIconZoomAnimator *iconAnimator; // @synthesize iconAnimator=_iconAnimator;
@property(retain, nonatomic) SBLockToAppStatusBarAnimator *statusBarAnimator; // @synthesize statusBarAnimator=_statusBarAnimator;
- (void)_setWallpaperToLocked:(_Bool)arg1 duration:(double)arg2;
- (void)_prepareIconAnimatorIncludingLockScreen:(_Bool)arg1;
- (void)_updateCoverSheetHosting;
- (void)animateToCoverSheet:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)initWithCoverSheetWindow:(id)arg1 sceneManager:(id)arg2 hostingWindow:(id)arg3 switcherWindow:(id)arg4 wallpaperController:(id)arg5 folderController:(id)arg6 unlockSettings:(id)arg7;

@end
