//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch, WFSwitchTableItem;

@interface WFSwitchTableCell : UITableViewCell
{
    WFSwitchTableItem *_tableItem;
    UISwitch *_switchView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property(nonatomic) __weak WFSwitchTableItem *tableItem; // @synthesize tableItem=_tableItem;
- (void)switchValueChanged:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
