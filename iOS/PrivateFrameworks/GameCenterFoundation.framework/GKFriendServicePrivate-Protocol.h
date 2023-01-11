//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKFriendService-Protocol.h>

@class GKConcernInternal, GKPlayerInternal, NSArray, NSString;

@protocol GKFriendServicePrivate <GKFriendService>
- (oneway void)getFriendsForPlayer:(GKPlayerInternal *)arg1 withFilter:(NSString *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)requestGKPlayerIDforiCloudIDs:(NSArray *)arg1 handler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)reportConcern:(GKConcernInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getConcernsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)removeAllFriendsWithHandler:(void (^)(_Bool))arg1;
- (oneway void)removeFriendWithPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getCommonFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)acceptFriendRequestWithIdentifier:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)cancelFriendRequestWithIdentifier:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)createFriendRequestWithIdentifier:(NSString *)arg1 handler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)getPlayerIDFromFriendCode:(NSString *)arg1 handler:(void (^)(NSString *, NSError *))arg2;
@end
