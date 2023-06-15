//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSObject-Protocol.h>

@class COCluster, COHomeKitAccessoryMemento, MTTimer, NSArray, NSSet, NSString, NSUUID;

@protocol COTimerManagerServiceInterface <NSObject>
- (void)canDispatchAsAccessory:(COHomeKitAccessoryMemento *)arg1 asInstance:(NSUUID *)arg2 reply:(void (^)(_Bool))arg3;
- (void)removeObserverForNotificationName:(NSString *)arg1 cluster:(COCluster *)arg2 withCallback:(void (^)(NSError *))arg3;
- (void)addObserverForNotificationName:(NSString *)arg1 asAccessory:(COHomeKitAccessoryMemento *)arg2 asInstance:(NSUUID *)arg3 constraints:(NSSet *)arg4 cluster:(COCluster *)arg5 withCallback:(void (^)(NSError *))arg6;
- (void)dismissTimerWithIdentifier:(NSString *)arg1 cluster:(COCluster *)arg2 withCallback:(void (^)(NSError *))arg3;
- (void)removeTimer:(MTTimer *)arg1 cluster:(COCluster *)arg2 withCallback:(void (^)(NSError *))arg3;
- (void)updateTimer:(MTTimer *)arg1 cluster:(COCluster *)arg2 withCallback:(void (^)(NSError *))arg3;
- (void)addTimer:(MTTimer *)arg1 asInstance:(NSUUID *)arg2 cluster:(COCluster *)arg3 withCallback:(void (^)(NSError *))arg4;
- (void)timersForAccessories:(NSArray *)arg1 cluster:(COCluster *)arg2 callback:(void (^)(NSDictionary *, NSError *))arg3;
- (void)timersforAccessoryUniqueIdentifier:(NSUUID *)arg1 asInstance:(NSUUID *)arg2 cluster:(COCluster *)arg3 withCallback:(void (^)(NSArray *, NSError *))arg4;
@end

