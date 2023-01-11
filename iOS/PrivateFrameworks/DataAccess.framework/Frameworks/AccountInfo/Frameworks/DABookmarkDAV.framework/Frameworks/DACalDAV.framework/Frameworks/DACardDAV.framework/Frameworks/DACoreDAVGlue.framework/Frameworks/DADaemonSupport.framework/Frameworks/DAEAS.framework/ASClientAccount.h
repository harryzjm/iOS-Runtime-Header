//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface ASClientAccount
{
    NSMutableSet *_daemonMonitoredFolders;
    NSMutableSet *_foldersToRetryForMonitoring;
    NSMutableSet *_folderIDsOnRemoteHold;
}

- (void).cxx_destruct;
- (void)_reportFolderItemSyncSuccess:(_Bool)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3;
- (id)mailboxes;
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(_Bool)arg4 consumer:(id)arg5;
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(_Bool)arg4 consumer:(id)arg5;
- (id)_copySetFlagsActionForRequest:(id)arg1;
- (void)performFolderChange:(id)arg1;
- (int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;
- (void)resolveRecipientsTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 queriedEmailAddressToRecpient:(id)arg4;
- (int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
- (int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
- (int)performMoveRequests:(id)arg1 consumer:(id)arg2;
- (void)sendMailTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3;
- (void)_sync:(id)arg1 withConsumer:(id)arg2;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id *)arg3;
- (_Bool)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (void)stopMonitoringAllFolders;
- (void)stopMonitoringFoldersForUpdates:(id)arg1;
- (void)monitorFoldersForUpdates:(id)arg1 persistent:(_Bool)arg2;
- (void)monitorFoldersForUpdates:(id)arg1;
- (void)_monitorFoldersForUpdates:(id)arg1 persistent:(_Bool)arg2 sequentialRetryCount:(int)arg3;
- (void)_retryMonitoringWithRetryCount:(id)arg1 persistent:(_Bool)arg2;
- (void)_retryPersistentMonitoringWithRetryCount:(id)arg1;
- (void)_retryMonitoringWithRetryCount:(id)arg1;
- (void)_removeFoldersFromDaemonMonitoring:(id)arg1;
- (void)_addFoldersToDaemonMonitoring:(id)arg1;
- (void)_logStatus:(id)arg1;
- (void)_daemonDied;
- (void)_foldersUpdated:(id)arg1;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)_foldersThatExternalClientsCareAboutChanged;
- (void)_folderHierarchyChanged;
- (void)clearFolderHierarchyCache;
- (id)onBehalfOfBundleIdentifier;
- (void)dealloc;
- (id)initWithBackingAccountInfo:(id)arg1;
- (id)_newPolicyManager;

@end

