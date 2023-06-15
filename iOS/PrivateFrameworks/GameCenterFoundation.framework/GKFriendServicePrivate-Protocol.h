//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKFriendService-Protocol.h>

@class GKConcernInternal, GKPlayerInternal, NSArray, NSString;

@protocol GKFriendServicePrivate <GKFriendService>
- (void)getFriendsForPlayer:(GKPlayerInternal *)arg1 fetchOptions:(unsigned long long)arg2 withFilter:(NSString *)arg3 handler:(void (^)(NSArray *, NSError *))arg4;
- (void)getFriendsForPlayer:(GKPlayerInternal *)arg1 fetchOptions:(unsigned long long)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getChallengableFriendsForPlayer:(GKPlayerInternal *)arg1 fetchOptions:(unsigned long long)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getFriendsForPlayer:(GKPlayerInternal *)arg1 withFilter:(NSString *)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)requestGKPlayerIDforiCloudIDs:(NSArray *)arg1 handler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)reportConcern:(GKConcernInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getConcernsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)removeAllFriendsWithHandler:(void (^)(_Bool))arg1;
- (oneway void)removeFriendWithPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getCommonFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)removeMessageInboxEntries:(NSArray *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getMessageInboxEntries:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)didAccept:(_Bool)arg1 friendRequest:(GKPlayerInternal *)arg2 handler:(void (^)(NSError *))arg3;
- (oneway void)getActiveFriendRequests:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)clearActivityFeedCacheWithHandler:(void (^)(NSError *))arg1;
- (oneway void)getPlayerActivityFeed:(NSString *)arg1 gameID:(NSString *)arg2 continuation:(NSString *)arg3 handler:(void (^)(GKPlayerActivityInternal *, NSError *))arg4;
- (oneway void)getPlayerActivityFeed:(NSString *)arg1 bundleID:(NSString *)arg2 continuation:(NSString *)arg3 gameCategoryFilter:(NSString *)arg4 handler:(void (^)(GKPlayerActivityInternal *, NSError *))arg5;
- (oneway void)getPlayerActivityFeed:(NSString *)arg1 bundleID:(NSString *)arg2 continuation:(NSString *)arg3 handler:(void (^)(GKPlayerActivityInternal *, NSError *))arg4;
- (oneway void)getFriendCodeDetailWithIdentifiers:(NSArray *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)rejectFriendRequestWithIdentifier:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)acceptFriendRequestWithIdentifier:(NSString *)arg1 sendPush:(_Bool)arg2 handler:(void (^)(NSError *))arg3;
- (oneway void)cancelFriendRequestWithIdentifier:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)expireFriendList;
@end

