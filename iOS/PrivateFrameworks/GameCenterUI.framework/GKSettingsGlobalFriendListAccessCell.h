//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSwitchTableCell.h>

@class PSSpecifier;

@interface GKSettingsGlobalFriendListAccessCell : PSSwitchTableCell
{
    PSSpecifier *_specfier;
}

- (void).cxx_destruct;
@property(nonatomic) __weak PSSpecifier *specfier; // @synthesize specfier=_specfier;
- (_Bool)globalFriendListAccess;
- (_Bool)canReload;
- (void)controlChanged:(id)arg1;
- (id)getSwitch;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
