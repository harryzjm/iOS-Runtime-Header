//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplicationIcon;

@interface SBAppBlacklistedAlertItem : SBAlertItem
{
    SBApplicationIcon *_icon;
}

- (void).cxx_destruct;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithIcon:(id)arg1;

@end
