//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileStoreUI/NSObject-Protocol.h>

@class SUUISettingsEditTransaction;

@protocol SUUISettingsEditTransactionDelegate <NSObject>
- (void)settingsEditTransactionWillCommitTransaction:(SUUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionWillBeginTransaction:(SUUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionDidFailTransaction:(SUUISettingsEditTransaction *)arg1;
- (void)settingsEditTransactionDidCompleteTransaction:(SUUISettingsEditTransaction *)arg1;
@end

