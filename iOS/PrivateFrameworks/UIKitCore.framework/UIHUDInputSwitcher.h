//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInputSwitcherView;

__attribute__((visibility("hidden")))
@interface UIHUDInputSwitcher
{
    UIInputSwitcherView *m_switcherView;
}

- (void).cxx_destruct;
- (_Bool)switchMode:(id)arg1 withHUD:(_Bool)arg2 withDelay:(_Bool)arg3;
- (_Bool)handleSwitchCommand:(_Bool)arg1 withHUD:(_Bool)arg2 withDelay:(_Bool)arg3;
- (void)_showSwitcherViewAsHUD;
- (void)dismissSwitcher:(_Bool)arg1;
- (void)dismissSwitcherWithDelay:(double)arg1;
- (_Bool)isVisibleOrHiding;
- (void)setShowingCapsLockSwitcher:(_Bool)arg1;
- (id)previousInputMode;
- (id)nextInputMode;
- (void)setSelectedInputMode:(id)arg1;
- (id)selectedInputMode;
- (id)availableInputModes;
- (void)reloadInputModes;
- (id)init;

@end

