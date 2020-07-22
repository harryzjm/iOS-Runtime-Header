//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, NSUUID, UAUserActivityInfo;

@protocol UAUserActivityClientProtocol <NSObject>
- (void)doGetLoggingFileForClient:(NSString *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(NSFileHandle *, NSError *))arg3;
- (void)doDetermineIfUserActivityIsCurrent:(NSUUID *)arg1 completionHandler:(void (^)(_Bool, NSString *, int, NSString *, NSError *))arg2;
- (void)doGetCurrentUserActivityInfo:(void (^)(NSUUID *, NSString *, NSError *))arg1;
- (void)doPinUserActivityInfo:(UAUserActivityInfo *)arg1 completionHandler:(void (^)(NSUUID *, NSError *))arg2;
- (void)doMarkUserActivityAsDirty:(NSUUID *)arg1 forceImmediate:(_Bool)arg2 webpageURL:(NSURL *)arg3 expiration:(NSDate *)arg4 hasiCloudDocument:(_Bool)arg5 hasUnsynchronizediCloudDoc:(_Bool)arg6;
- (void)doRemoveDynamicUserActivity:(NSString *)arg1 matching:(NSString *)arg2;
- (void)doAddDynamicUserActivity:(NSString *)arg1 matching:(NSString *)arg2;
- (void)doDeleteUserActivityWithUUID:(NSUUID *)arg1;
- (void)doUpdateUserActivityWithUUID:(NSUUID *)arg1 setActive:(_Bool)arg2;
- (void)doUpdateUserActivityInfo:(UAUserActivityInfo *)arg1 makeCurrent:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)doFetchUserActivityInfoWithUUID:(NSUUID *)arg1 completionHandler:(void (^)(UAUserActivityInfo *, NSError *))arg2;
- (void)doInitializeWithClientVersion:(long long)arg1 clientInfo:(NSDictionary *)arg2 completionHandler:(void (^)(long long, NSDictionary *, NSError *))arg3;
@end

