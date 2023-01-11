//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, UIImageView, UIView, UIVisualEffectView;

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    _Bool _hasExplicitlyDefinedSupportedInterfaceOrientations;
    unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
    UIView *_backgroundView;
    UIImageView *_wallpaperView;
    UIVisualEffectView *_blurView;
    _Bool _hasStatusBarStyleOverride;
    long long _statusBarStyleOverride;
}

- (void).cxx_destruct;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)_updateWithWallpaperImage:(id)arg1;
- (void)setNeedsNavigationBarUpdate;
- (void)setupWallpaper;
- (void)setupBackgroundViewWithBlurEffect:(long long)arg1;
- (void)_updateBarAppearanceForViewController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
