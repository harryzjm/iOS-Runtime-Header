//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CCUIAppLauncherModule, SBFApplication, SCUIAssetProvider;

@interface CCUIAppLauncherViewController
{
    SBFApplication *_application;
    SCUIAssetProvider *_assetProvider;
    CCUIAppLauncherModule *_module;
}

@property(nonatomic) __weak CCUIAppLauncherModule *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)_activateApplicationForShortcutItem:(id)arg1;
- (void)_addActionForShortcutItem:(id)arg1;
- (void)_updateApplicationShortcutsActions;
- (_Bool)shouldBeginTransitionToExpandedContentModule;
- (void)viewDidLoad;
- (void)buttonTapped:(id)arg1 forEvent:(id)arg2;

@end

