//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class WBSSavedAccount, _SFAccountPickerTableViewController;

@protocol _SFAccountPickerTableViewControllerDelegate <NSObject>

@optional
- (void)accountPickerTableViewController:(_SFAccountPickerTableViewController *)arg1 didPickSavedAccount:(WBSSavedAccount *)arg2;
- (void)accountPickerTableViewControllerDidCancel:(_SFAccountPickerTableViewController *)arg1;
@end

