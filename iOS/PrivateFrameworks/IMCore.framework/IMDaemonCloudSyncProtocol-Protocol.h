//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol IMDaemonCloudSyncProtocol <NSObject>
- (void)tryToAutoCollectLogsWithErrorString:(NSString *)arg1 sendLogsTo:(NSString *)arg2;
- (void)fetchCloudKitSyncStateDebuggingInfo:(NSDictionary *)arg1;
- (void)syncDeletesToCloudKit;
- (void)printCachedRampState;
- (void)fetchLatestRampState;
- (void)removePathFromiCloudBackups:(NSString *)arg1;
- (void)setiCloudBackupsDisabled:(_Bool)arg1;
- (void)toggleiCloudBackupsIfNeeded;
- (void)reportMetricToCK:(NSString *)arg1 withDict:(NSDictionary *)arg2;
- (void)writeCloudKitSyncCounts:(NSDictionary *)arg1;
- (void)fetchSyncStateStatistics;
- (void)updateAttachmentFileSizes;
- (void)metricAttachments:(long long)arg1;
- (void)purgeAttachments:(long long)arg1;
- (void)deleteSalt;
- (void)printCachedSalt;
- (void)fetchLatestSalt;
- (void)fetchAccountStatusAndUpdateMiCSwitchEligibility;
- (void)broadcastCloudKitStateAfterClearingErrors;
- (void)clearAnalyticDefaultsAndLocalSyncState;
- (void)uploadDailyAnalyticstoCloudKit;
- (void)broadcastCloudKitStateAfterFetchingAccountStatus;
- (void)broadcastCloudKitState;
- (void)tryToDisableAllDevices;
- (void)performAdditionalStorageRequiredCheck;
- (void)setCloudKitEnabled:(_Bool)arg1;
- (void)sendRestoreFailuresLogDumps;
- (void)clearDataFromCloudKit;
- (void)clearLocalCloudKitSyncState;
- (void)deleteExitRecord;
- (void)fetchExitRecord;
- (void)writeExitRecord;
- (void)loadDeletedMessagesWithLimit:(long long)arg1;
- (void)loadDirtyMessagesWithLimit:(long long)arg1;
- (void)initiateSync:(NSString *)arg1 forceRunNow:(_Bool)arg2 reply:(void (^)(_Bool, NSDictionary *))arg3;
- (void)initiatePeriodicSync;
- (void)syncMessages;
- (void)deleteMessagesZone;
- (void)writeDirtyMessages;
- (void)downloadAttachmentAssets;
- (void)syncAttachments;
- (void)writeAttachments;
- (void)deleteAttachmentZone;
- (void)createAttachmentZone;
- (void)clearChatZoneSyncToken;
- (void)markAllChatsAsDirty;
- (void)syncChats;
- (void)writeDirtyChats;
- (void)deleteChatZone;
- (void)createChatZone;
@end

