//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDApp, NSPredicate;

@protocol ASDAppLibraryServiceProtocol
- (void)uninstallApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)launchApp:(ASDApp *)arg1 withReplyHandler:(void (^)(long long))arg2;
- (void)launchApp:(ASDApp *)arg1 extensionType:(long long)arg2 withReplyHandler:(void (^)(long long))arg3;
- (void)resumeApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)pauseApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)cancelApp:(ASDApp *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)executeQueryWithPredicate:(NSPredicate *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
@end

