//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString, SBIcon;

@interface SBHideFolderContentsAlertItem : SBAlertItem
{
    SBIcon *_icon;
    NSString *_iconLocation;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *iconLocation; // @synthesize iconLocation=_iconLocation;
@property(readonly, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
- (_Bool)forcesModalAlertAppearance;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)didActivate;
- (id)initWithIcon:(id)arg1 location:(id)arg2;

@end
