//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMCloudKitHooks : NSObject
{
}

+ (id)logHandle;
+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
- (_Bool)mocAccountsMatch;
- (void)broadcastCloudKitStateAfterClearingErrors;
- (void)broadcastCloudKitState;
- (void)tryToAutoCollectLogsWithErrorString:(id)arg1 sendLogsTo:(id)arg2;
- (void)fetchCloudKitSyncStateDebuggingInfo:(id)arg1;
- (id)syncStateDictionary;
- (void)syncDeletesToCloudKit;
- (void)printCachedRampState;
- (void)fetchLatestRampState;
- (void)removePathFromiCloudBackups:(id)arg1;
- (void)setiCloudBackupsDisabled:(_Bool)arg1;
- (void)toggleiCloudBackupsIfNeeded;
- (void)writeCloudKitSyncCounts:(id)arg1;
- (void)fetchSyncStateStatistics;
- (void)purgeAttachments:(long long)arg1;
- (void)metricAttachments:(long long)arg1;
- (void)deleteSalt;
- (void)printCachedSalt;
- (void)fetchLatestSalt;
- (void)clearTombStoneMessagesTable;
- (void)loadDeletedMessagesWithLimit:(long long)arg1;
- (void)_updateCloudKitState;
- (void)_updateCloudKitStateWithDictionary:(id)arg1;
- (id)exitDate;
- (_Bool)isInExitState;
- (void)_didAttemptToDisableAllDevicesResult:(_Bool)arg1;
- (_Bool)isDisablingDevices;
- (void)_didPerformAdditionalStorageRequiredCheckWithSuccess:(_Bool)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4;
- (long long)isChangingEnabledState;
- (void)_didAttemptToSetEnabledTo:(_Bool)arg1 result:(_Bool)arg2;
- (id)lastSyncDate;
- (_Bool)isSyncing;
- (_Bool)isStartingSync;
- (void)initiateSync;
- (void)_requestMOCEnabledReturned:(unsigned long long)arg1;
- (void)requestMOCEnabledState;
- (void)setShouldOptimizeAttachmentStorage:(_Bool)arg1;
- (_Bool)shouldOptimizeAttachmentStorage;
- (_Bool)eligibleForTruthZone;
- (_Bool)rampedIntoTruthZone;
- (_Bool)removedFromiCloudBackup;
- (void)tryToDisableAllDevices;
- (void)fetchSecurityLevelAndUpdateMiCSwitchEligibility;
- (void)performAdditionalStorageRequiredCheck;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)isEnabled;
- (_Bool)shouldShowCloudKitUI;
- (void)sendRestoreFailuresLogDumps;
- (void)clearDataFromCloudKit;
- (void)clearLocalSyncState;
- (void)loadDirtyMessagesWithLimit:(long long)arg1;
- (void)initiatePeriodicSync;
- (void)downloadAttachmentAssets;
- (void)syncMessages;
- (void)deleteExitRecord;
- (void)fetchExitRecord;
- (void)writeExitRecord;
- (void)deleteMessagesZone;
- (void)writeDirtyMessages;
- (void)deleteAttachmentZone;
- (void)syncAttachments;
- (void)writeAttachments;
- (void)createAttachmentZone;
- (void)clearChatZoneSyncToken;
- (void)markAllChatsAsDirty;
- (void)syncChats;
- (void)deleteChatZone;
- (void)writeDirtyChats;
- (void)createChatZone;
- (void)setupIMCloudKitHooks;
- (id)init;
- (id)logHandle;

@end

