//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UISwitch;
@protocol CRKSwitchTableViewCellDelegate;

@interface CRKSwitchTableViewCell : UITableViewCell
{
    id <CRKSwitchTableViewCellDelegate> _delegate;
    UISwitch *_switchControl;
}

@property(readonly, nonatomic) UISwitch *switchControl; // @synthesize switchControl=_switchControl;
@property(nonatomic) __weak id <CRKSwitchTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switchControlDidChangeValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

