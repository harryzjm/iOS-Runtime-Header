//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DAAccount, MFDAMailbox, MFDAOfflineCache, MFMailboxUid, MFRecursiveLock, NSArray, NSCountedSet, NSLock, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol ASAccountActorMessages;

@interface DAMailAccount
{
    NSObject<ASAccountActorMessages> *_accountConduit;
    DAAccount *_daAccount;
    MFRecursiveLock *_offlineCacheLock;
    MFDAOfflineCache *_offlineCache;
    _Bool _isNetworkReachable;
    NSString *_cachedAccountID;
    NSString *_cachedAccountPersistentUUID;
    NSString *_cachedDisplayName;
    NSString *_cachedEmailAddress;
    NSArray *_cachedEmailAddresses;
    NSString *_cachedIconString;
    _Bool _cachedIsActive;
    _Bool _cachedIsHotmailAccount;
    _Bool _cachedCalendarEnabled;
    _Bool _cachedSecureMIMEEnabled;
    _Bool _cachedPerMessageEncryptionEnabled;
    _Bool _cachedSecureMIMEShouldSign;
    _Bool _cachedSecureMIMEShouldEncrypt;
    _Bool _cachedRestrictMessageTransfersToOtherAccounts;
    _Bool _cachedRestrictSendingFromExternalProcesses;
    _Bool _cachedRestrictSyncingRecents;
    _Bool _cachedIsManaged;
    _Bool _cachedSupportsMailDrop;
    _Bool _cachedArchiveByDefault;
    _Bool _cachedSourceIsManaged;
    _Bool _cachedStoreDraftsOnServer;
    NSString *_cachedInboxFolderID;
    NSString *_cachedSentMessagesFolderID;
    NSString *_cachedTrashFolderID;
    NSString *_cachedJunkFolderID;
    NSString *_cachedDraftsFolderID;
    MFDAMailbox *_temporaryInbox;
    _Bool _loadedInitialMailboxList;
    _Bool _receivedInitialMailboxUpdate;
    _Bool _doneInitialInboxCheck;
    _Bool _observingPushedFoldersPrefsChanged;
    int _supportsServerSearch;
    int _supportsMessageFlagging;
    int _supportsConversations;
    int _supportsServerDrafts;
    int _supportsUniqueServerId;
    unsigned int _daysToSync;
    NSMutableDictionary *_requestQueuesByFolderID;
    NSLock *_watchedFolderIdsLock;
    NSSet *_watchedFolderIds;
    NSCountedSet *_userFocusMailboxIds;
    NSString *_folderTag;
    MFMailboxUid *_virtualAllSearchMailbox;
}

+ (id)accountIDForDirectoryName:(id)arg1 isAccountDirectory:(_Bool *)arg2;
+ (id)_URLScheme;
+ (id)displayedShortAccountTypeString;
+ (id)displayedAccountTypeString;
+ (id)csAccountTypeString;
+ (id)accountTypeString;
+ (id)folderIDForRelativePath:(id)arg1 accountID:(id *)arg2;
+ (Class)_accountConduitClass;
@property(retain, nonatomic) MFMailboxUid *virtualAllSearchMailbox; // @synthesize virtualAllSearchMailbox=_virtualAllSearchMailbox;
- (id)unsupportedContinuationTypes;
- (id)fetchLimits;
- (_Bool)supportsMailDrop;
- (_Bool)isManaged;
- (_Bool)restrictedFromSyncingRecents;
- (_Bool)restrictedFromSendingExternally;
- (_Bool)restrictedFromTransferingMessagesToOtherAccounts;
- (id)copyDataForRemoteEncryptionCertificatesForAddress:(id)arg1 error:(id *)arg2;
- (int)secureCompositionEncryptionPolicyForAddress:(id)arg1;
- (int)secureCompositionSigningPolicyForAddress:(id)arg1;
- (_Bool)perMessageEncryptionEnabled;
- (_Bool)secureMIMEEnabled;
- (void)setEncryptionIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (id)encryptionIdentityPersistentReferenceForAddress:(id)arg1;
- (void)setSigningIdentityPersistentReference:(id)arg1 forAddress:(id)arg2;
- (id)signingIdentityPersistentReferenceForAddress:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (_Bool)_replayOfflineCache:(id)arg1;
- (void)_deferMailboxRequests:(id)arg1 mailbox:(id)arg2 offlineCache:(id)arg3;
- (id)_offlineCache;
- (_Bool)canGoOffline;
- (void)removeUserFocusMailbox:(id)arg1;
- (void)addUserFocusMailbox:(id)arg1;
- (id)_watchedFolderIds;
- (void)changePushedMailboxUidsAdded:(id)arg1 deleted:(id)arg2;
- (id)_folderIdsForMailboxUids:(id)arg1;
- (id)pushedMailboxUids;
- (_Bool)supportsUserPushedMailboxes;
- (unsigned int)daysToSync;
- (_Bool)supportsServerSearch;
- (_Bool)shouldRestoreMessagesAfterFailedDelete;
- (_Bool)shouldDisplayHostnameInErrorMessages;
- (void)cancelSearchQuery:(id)arg1;
- (void)performSearchQuery:(id)arg1;
- (void)setSyncAnchor:(id)arg1 forFolderID:(id)arg2 mailbox:(id *)arg3;
- (id)syncAnchorForFolderID:(id)arg1 mailbox:(id *)arg2;
- (void)stopListeningForNotifications;
- (void)startListeningForNotifications;
- (id)_updateWatchedFolderIdsAndNotify:(_Bool)arg1;
- (id)_inboxFolderID;
- (id)meetingStorePersistentID;
- (id)unactionableInvitationICSRepresentationInMessage:(id)arg1 summary:(id *)arg2;
- (_Bool)reconstituteOrphanedMeetingInMessage:(id)arg1;
- (void)dealloc;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (_Bool)derivesDeliveryAccountInfoFromMailAccount;
- (id)iconString;
- (void)invalidate;
- (id)accountPropertyForKey:(id)arg1;
- (_Bool)isActive;
- (id)uniqueServerIdForMessage:(id)arg1;
- (_Bool)needsRemoteSearchResultsVerification;
- (_Bool)shouldFetchAgainWithError:(id)arg1 foregroundRequest:(_Bool)arg2;
- (_Bool)_isUnitTesting;
- (_Bool)sourceIsManaged;
- (_Bool)shouldArchiveByDefault;
- (_Bool)supportsServerDrafts;
- (_Bool)supportsUniqueServerId;
- (_Bool)supportsThreadOperations;
- (_Bool)supportsMessageFlagging;
- (id)primaryMailboxUid;
- (void)_ensureWeHaveLoadedInitialMailboxList;
- (_Bool)isMailboxLocalForType:(int)arg1;
- (id)_specialMailboxUidWithType:(int)arg1 create:(_Bool)arg2;
- (id)_relativePathSpecialMailboxUidWithType:(int)arg1 create:(_Bool)arg2;
- (id)_relativePathForType:(int)arg1;
- (id)moveMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3 markAsRead:(_Bool)arg4;
- (_Bool)performRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3;
- (void)processRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3;
- (void)addRequests:(id)arg1 mailbox:(id)arg2 consumers:(id)arg3;
- (void)addRequest:(id)arg1 mailbox:(id)arg2 consumer:(id)arg3;
- (id)mailboxUidForInfo:(id)arg1;
- (id)mailboxForFolderID:(id)arg1;
- (id)_infoForMatchingURL:(id)arg1;
- (_Bool)supportsMailboxEditing;
- (_Bool)supportsRemoteAppend;
- (id)syncAnchorForMailbox:(id)arg1;
- (void)setDAAccount:(id)arg1;
- (id)mailboxPathExtension;
- (id)_URLScheme;
- (_Bool)shouldAppearInMailSettings;
- (_Bool)newMailboxNameIsAcceptable:(id)arg1 reasonForFailure:(id *)arg2;
- (void)_performFolderChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_deleteMailbox:(id)arg1;
- (_Bool)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (id)_newMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4 withCreationOption:(int)arg5;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)folderIDForMailbox:(id)arg1;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned int)arg3 dictionary:(id)arg4;
- (Class)storeClass;
- (_Bool)canReceiveNewMailNotifications;
- (void)fetchMailboxList;
- (_Bool)finishedInitialMailboxListLoad;
- (void)pushedFoldersPrefsChanged:(id)arg1;
- (id)accountConduit;
- (void)accountHierarchyChanged:(id)arg1;
- (void)_loadChildrenForParent:(id)arg1 fromMap:(id)arg2 intoArray:(id)arg3 replacingInbox:(id)arg4 withID:(id)arg5;
- (_Bool)isRunningInDisallowedBundle;
- (int)emptyFrequencyForMailboxType:(int)arg1;
- (id)allMailMailboxUid;
- (void)resetSpecialMailboxes;
- (id)allMailboxUids;
- (id)uniqueIdForPersistentConnection;
- (id)identifier;
- (id)uniqueId;
- (id)deliveryAccount;
- (id)hostname;
- (id)username;
- (id)accountForRenewingCredentials;
- (id)displayName;
- (void)foldersContentsChanged:(id)arg1;
- (id)statisticsKind;
- (id)initWithDAAccount:(id)arg1;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;

@end

