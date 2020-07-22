//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKFriendService-Protocol.h>

@class GKConcernInternal, GKPlayerInternal, NSArray;

@protocol GKFriendServicePrivate <GKFriendService>
- (oneway void)requestGKPlayerIDforiCloudIDs:(NSArray *)arg1 handler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)reportConcern:(GKConcernInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getConcernsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)removeAllFriendsWithPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)removeFriendWithPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getCommonFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

