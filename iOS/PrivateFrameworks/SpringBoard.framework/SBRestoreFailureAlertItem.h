//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBAlertItem.h>

@interface SBRestoreFailureAlertItem : SBAlertItem
{
}

- (_Bool)suppressForKeynote;
- (_Bool)allowInSetup;
- (_Bool)forcesModalAlertAppearance;
- (_Bool)shouldShowInLockScreen;
- (_Bool)allowMenuButtonDismissal;
- (void)performUnlockAction;
- (void)restartSystemEvent;
- (void)_rebootNow;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;

@end
