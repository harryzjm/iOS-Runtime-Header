//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CNAccountsAndGroupsItem;

__attribute__((visibility("hidden")))
@interface CNAccountsAndGroupsTableViewCell : UITableViewCell
{
    CNAccountsAndGroupsItem *_item;
}

@property(retain, nonatomic) CNAccountsAndGroupsItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_cnui_applyContactStyle;
- (void)updateFromItem;
- (void)tintColorDidChange;
- (void)dealloc;

@end

