//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSProcessHandle, NSArray, NSString;

@protocol ASDUpdatesServiceProtocol
- (void)updateAllWithOrder:(NSArray *)arg1 replyHandler:(void (^)(_Bool, NSArray *, NSError *))arg2;
- (void)setAutoUpdateEnabled:(_Bool)arg1 withReplyHandler:(void (^)(void))arg2;
- (void)shouldUseModernUpdatesWithReplyHandler:(void (^)(_Bool))arg1;
- (void)requestAutomaticUpdateAuthorizationIfNecessaryForProcessHandle:(BSProcessHandle *)arg1 completion:(void (^)(NSError *))arg2;
- (void)reloadManagedUpdatesWithReplyHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)reloadFromServerWithReplyHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)refreshUpdateCountWithReplyHandler:(void (^)(long long, NSError *))arg1;
- (void)getUpdatesWithReplyHandler:(void (^)(NSArray *))arg1;
- (void)getUpdateMetadataForBundleID:(NSString *)arg1 withReplyHandler:(void (^)(NSData *))arg2;
- (void)getManagedUpdatesWithReplyHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)confirmAgentRequestedUpdateAll:(void (^)(_Bool))arg1;
- (void)compatibilityUpdateForBundleIDs:(NSArray *)arg1 userInitiated:(_Bool)arg2 withReplyHandler:(void (^)(NSError *))arg3;
- (void)autoUpdateEnabled:(void (^)(_Bool))arg1;
@end

