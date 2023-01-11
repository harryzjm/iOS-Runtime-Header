//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSSet;

@protocol HMDNetworkRouterFirewallRuleManager <NSObject>
@property(readonly, nonatomic) NSSet *interestedAccessories;
- (void)fetchRulesForAccessories:(NSSet *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)fetchCloudChangesWithCompletion:(void (^)(NSSet *, NSError *))arg1;
- (void)removeInterestedAccessories:(NSSet *)arg1;
- (void)addInterestedAccessories:(NSSet *)arg1;
- (void)shutdownWithCompletion:(void (^)(NSError *))arg1;
- (void)startupWithCompletion:(void (^)(NSError *))arg1;
@end
