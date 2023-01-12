//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SKUIMenuPopoverController, SKUINavigationBarMenusView, UIControl;

__attribute__((visibility("hidden")))
@interface SKUINavigationBarMenusController
{
    UIControl *_focusedMenuButton;
    SKUINavigationBarMenusView *_menusView;
    NSArray *_menuViewElements;
    SKUIMenuPopoverController *_popoverController;
}

- (void).cxx_destruct;
- (id)_menuViewElementForView:(id)arg1;
- (void)_destroyPopover;
- (void)_menuButtonAction:(id)arg1;
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;
- (void)menuPopoverDidCancel:(id)arg1;
- (void)willAppearInNavigationBar;
- (id)view;
- (void)reloadSectionViews;
- (void)dealloc;
- (id)initWithMenuViewElements:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

