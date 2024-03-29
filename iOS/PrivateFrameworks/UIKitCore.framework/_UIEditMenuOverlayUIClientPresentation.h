//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIHostedMenuManager, _UIOEditMenuPresentationConfiguration, _UIOverlayService;

__attribute__((visibility("hidden")))
@interface _UIEditMenuOverlayUIClientPresentation
{
    _UIOEditMenuPresentationConfiguration *_presentationConfiguration;
    _UIOverlayService *_overlayService;
    _UIHostedMenuManager *_menuManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _UIHostedMenuManager *menuManager; // @synthesize menuManager=_menuManager;
@property(readonly, nonatomic) _UIOverlayService *overlayService; // @synthesize overlayService=_overlayService;
@property(readonly, nonatomic) _UIOEditMenuPresentationConfiguration *presentationConfiguration; // @synthesize presentationConfiguration=_presentationConfiguration;
- (void)overlayServiceDidInvalidate:(id)arg1;
- (void)_configureOverlayServiceIfNeeded;
- (void)didTransitionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)preparedMenuWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performMenuLeafAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleLifecycleEvent:(long long)arg1;
- (void)hideMenuWithReason:(long long)arg1;
- (void)replaceVisibleMenuWithMenu:(id)arg1 reason:(long long)arg2;
- (void)sourceViewDidUpdateFromTraitCollection:(id)arg1;
- (void)displayMenu:(id)arg1 configuration:(id)arg2;
- (id)displayedMenu;
- (void)setDisplayedMenu:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

