//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class SFAddSavedAccountViewController, WBSSavedAccount, _SFAccountIconController;

@protocol SFAddSavedAccountViewControllerDelegate <NSObject>

@optional
- (_SFAccountIconController *)iconControllerForAddSavedAccountDetailViewController:(SFAddSavedAccountViewController *)arg1;
- (void)addSavedAccountViewControllerDidFinish:(SFAddSavedAccountViewController *)arg1 withSavedAccount:(WBSSavedAccount *)arg2;
@end

