//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FMFHandle, NSDate, NSSet, NSString;

@protocol _TtP14FamilyCircleUI18FMFSessionProtocol_
- (void)forceRefresh;
- (NSSet *)getHandlesFollowingMyLocation;
- (NSSet *)getHandlesSharingLocationsWithMe;
- (void)stopSharingMyLocationWithHandles:(NSSet *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (void)sendFriendshipOfferToHandles:(NSSet *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(NSDictionary *, NSError *))arg5;
@end

