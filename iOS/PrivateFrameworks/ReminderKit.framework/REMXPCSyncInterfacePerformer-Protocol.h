//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, REMObjectID;

@protocol REMXPCSyncInterfacePerformer
- (void)observeCloudKitNetworkActivityChanges;
- (void)fetchServerRecordFor:(REMObjectID *)arg1 completion:(void (^)(CKRecord *, NSError *))arg2;
- (void)setMigrationStateToDidChooseToMigrate:(_Bool)arg1 didFinishMigration:(_Bool)arg2 createZoneAccountIfFinishMigration:(_Bool)arg3 accountID:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)fetchUserRecordWithAccountID:(NSString *)arg1 completion:(void (^)(CKRecord *, NSError *))arg2;
- (void)debugDownloadMigrationCacheWithAccountID:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)migrateICloudCalDavToCloudKitWithAccountID:(REMObjectID *)arg1 disableCache:(_Bool)arg2 userInitiated:(_Bool)arg3 completion:(void (^)(REMMigrationResult *, NSError *))arg4;
- (void)deleteApplicationDataFromCloudKitWithAccountID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)syncDataAccessAccountsWithAccountIDs:(NSArray *)arg1 bypassThrottler:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)restartCloudKitSyncWithReason:(NSString *)arg1 bypassThrottler:(_Bool)arg2 completion:(void (^)(NSError *))arg3;
- (void)syncCloudKitWithReason:(NSString *)arg1 discretionary:(_Bool)arg2 bypassThrottler:(_Bool)arg3 completion:(void (^)(NSError *))arg4;
@end

