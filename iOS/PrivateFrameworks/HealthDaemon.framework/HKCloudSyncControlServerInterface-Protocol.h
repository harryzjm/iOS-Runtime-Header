//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKCloudSyncRequest, NSProgress, NSString;

@protocol HKCloudSyncControlServerInterface <NSObject>
- (void)remote_requestDataRefreshWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (NSProgress *)remote_fetchCloudSyncProgressWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(void (^)(NSDate *, NSError *))arg1;
- (void)remote_accountConfigurationDidChangeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_enableCloudSyncWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_disableCloudSyncWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (NSProgress *)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_fetchCloudSyncStatusWithCompletion:(void (^)(_Bool, NSDate *, NSDate *, _Bool, NSError *))arg1;
- (NSProgress *)remote_fetchCloudDescriptionWithCompletion:(void (^)(NSString *, NSArray *, NSError *))arg1;
- (NSProgress *)remote_forceCloudSyncDataUploadForProfileWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (NSProgress *)remote_forceCloudResetWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (NSProgress *)remote_forceCloudSyncWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_syncWithRequest:(HKCloudSyncRequest *)arg1 reason:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

