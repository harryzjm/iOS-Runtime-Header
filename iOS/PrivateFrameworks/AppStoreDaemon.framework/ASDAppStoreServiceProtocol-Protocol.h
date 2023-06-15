//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSURL;
@protocol OS_nw_endpoint, OS_nw_parameters;

@protocol ASDAppStoreServiceProtocol
- (void)reloadWidgetOnConnectivityToEndpoint:(NSObject<OS_nw_endpoint> *)arg1 parameters:(NSObject<OS_nw_parameters> *)arg2 replyHandler:(void (^)(_Bool, NSError *))arg3;
- (void)removeBadgeMetricsForBadgeIDs:(NSArray *)arg1 replyHandler:(void (^)(_Bool, NSError *))arg2;
- (void)removeBadgeIDs:(NSArray *)arg1 replyHandler:(void (^)(_Bool, NSError *))arg2;
- (void)removeAllBadgeIDsWithReplyHandler:(void (^)(_Bool, NSError *))arg1;
- (void)badgeIDCountWithReplyHandler:(void (^)(long long, NSError *))arg1;
- (void)allBadgeMetricsWithReplyHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)allBadgeIDsWithReplyHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)addBadgeIDs:(NSArray *)arg1 replyHandler:(void (^)(_Bool, NSError *))arg2;
- (void)launchAppStoreWithURL:(NSURL *)arg1 withReplyHandler:(void (^)(long long, NSError *))arg2;
@end

