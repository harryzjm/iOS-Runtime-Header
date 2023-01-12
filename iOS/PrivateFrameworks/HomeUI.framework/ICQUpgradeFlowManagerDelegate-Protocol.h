//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class ICQUpgradeFlowManager, NSError, UIViewController;

@protocol ICQUpgradeFlowManagerDelegate <NSObject>

@optional
- (void)upgradeFlowManagerDidFail:(ICQUpgradeFlowManager *)arg1 error:(NSError *)arg2;
- (void)manager:(ICQUpgradeFlowManager *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)upgradeFlowManager:(ICQUpgradeFlowManager *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)upgradeFlowManagerDidComplete:(ICQUpgradeFlowManager *)arg1;
- (void)upgradeFlowManagerDidCancel:(ICQUpgradeFlowManager *)arg1;
@end

