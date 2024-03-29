//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class AMSNotificationSettingsItem, UISwitch;
@protocol AMSUINotificationInAppSettingsTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface AMSUINotificationSettingsTableViewCell : UITableViewCell
{
    id <AMSUINotificationInAppSettingsTableViewCellDelegate> _delegate;
    AMSNotificationSettingsItem *_item;
    UISwitch *_itemSwitch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UISwitch *itemSwitch; // @synthesize itemSwitch=_itemSwitch;
@property(retain, nonatomic) AMSNotificationSettingsItem *item; // @synthesize item=_item;
@property(nonatomic) __weak id <AMSUINotificationInAppSettingsTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)switchToggled:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

