//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <SpringBoard/SBLockScreenPluginDelegate-Protocol.h>

@class NSString, SBLockScreenPlugin;

@interface SBDashBoardPluginViewController : CSCoverSheetViewControllerBase <SBLockScreenPluginDelegate>
{
    SBLockScreenPlugin *_plugin;
}

+ (Class)viewClass;
@property(readonly, nonatomic) SBLockScreenPlugin *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (long long)_presentationPriority;
- (void)_updateLegibility;
- (_Bool)handleEvent:(id)arg1;
- (void)pluginAppearanceDidChange:(id)arg1;
- (id)coverSheetIdentifier;
- (long long)presentationType;
- (long long)presentationPriority;
- (long long)presentationTransition;
- (long long)presentationStyle;
- (void)willTransitionToPresented:(_Bool)arg1;
- (id)displayLayoutElementIdentifier;
- (void)updateForPresentation:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)aggregateAppearance:(id)arg1;
- (id)succinctDescriptionBuilder;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)performCustomTransitionToVisible:(_Bool)arg1 withAnimationSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)view;
- (id)initWithLockScreenPlugin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
