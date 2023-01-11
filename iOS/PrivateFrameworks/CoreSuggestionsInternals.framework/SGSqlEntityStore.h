//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/CSSearchableIndexDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSSet, NSString, SGBloomFilter, SGDatabaseJournal, SGJournal, SGKeyValueCacheManager, SGSGtoCNContactsCacheUpdateAdapter, SGSpotlightContactsAdapter, SGSqliteDatabase, SGSqliteDatabaseSharedLock, SGSuggestHistory, _PASLock;
@protocol OS_dispatch_queue;

@interface SGSqlEntityStore : NSObject <CSSearchableIndexDelegate>
{
    SGSqliteDatabase *_db;
    SGSqliteDatabaseSharedLock *_sharedWriteLock;
    SGSqliteDatabase *_snippetDb;
    SGDatabaseJournal *_snippetsJournal;
    SGSuggestHistory *_history;
    _Atomic _Bool _identityStoreDirty;
    NSDictionary *_entityMigrations;
    NSDictionary *_snippetsMigrations;
    unsigned int _entityVersion;
    unsigned int _snippetsVersion;
    _Bool _entityMigrationRequiresMergeBlobUpdate;
    unsigned long long _lostMessageOverflow;
    NSMutableArray *_deallocNotifications;
    struct atomic_flag _isClosed;
    SGJournal *_journal;
    SGSpotlightContactsAdapter *_spotlightContactsAdapter;
    SGSGtoCNContactsCacheUpdateAdapter *_sgToCNContactsCacheUpdateAdapter;
    unsigned long long _parentMessagesLimit;
    NSSet *_serializedContactEntityIDs;
    unsigned long long _serializedContactsLimit;
    _PASLock *_recentlyDeletedEmailKeys;
    _Atomic int _spotlightReindexCount;
    NSObject<OS_dispatch_queue> *_spotlightReindexQueue;
    NSSet *_prematchedContactIdentifiers;
    NSObject<OS_dispatch_queue> *_precomputationQueue;
    SGBloomFilter *_messageRecipients;
    CDUnknownBlockType _crLookup;
    NSString *_snippetDbPath;
    id _lockStateNotificationRegistrationToken;
    _Bool _executeJournals;
    NSMutableSet *_phoneNumbersWithNoContact;
    NSMutableOrderedSet *_otherDetailsWithNoContact;
    _Bool _isEphemeral;
    _Bool _waitForMigrations;
    SGKeyValueCacheManager *_kvCacheManager;
}

+ (id)likePrefix:(id)arg1;
+ (id)escapeLike:(id)arg1;
+ (id)globPrefix:(id)arg1;
+ (id)_fieldValuesClassWhitelist;
+ (id)queryForContactMatch;
+ (CDUnknownBlockType)binderForCNContactMatch:(id)arg1 floorEntityID:(long long)arg2 max:(unsigned long long)arg3;
+ (id)_recreateCorruptDatabase:(id)arg1 sharedLock:(id)arg2 withProtection:(_Bool)arg3;
+ (void)releaseInstanceAndWaitForDealloc:(id *)arg1;
+ (void)addPathToFutureDbSchemas:(id)arg1;
+ (_Bool)pathHasFutureDbSchema:(id)arg1;
+ (id)initializeDatabase:(id)arg1 withProtection:(_Bool)arg2 sharedLock:(id)arg3 newDatabaseCreated:(_Bool *)arg4;
+ (id)_initializeDatabaseNolock:(id)arg1 withProtection:(_Bool)arg2 sharedLock:(id)arg3 newDatabaseCreated:(_Bool *)arg4;
+ (id)sqlStoreWithEntityDbPathNoMigrate:(id)arg1 snippetDbPath:(id)arg2 isEphemeral:(_Bool)arg3 executeJournals:(_Bool)arg4;
+ (id)sqlStoreWithEntityDbPath:(id)arg1 snippetDbPath:(id)arg2 isEphemeral:(_Bool)arg3 sharedLock:(id)arg4 executeJournals:(_Bool)arg5;
+ (id)sqlStoreWithEntityDbPath:(id)arg1 snippetDbPath:(id)arg2 isEphemeral:(_Bool)arg3 executeJournals:(_Bool)arg4;
+ (void)deletePreparedSqlStoreInMemory;
+ (void)prepareSqlStoreInMemoryByClearingExistingStore:(id)arg1;
+ (void)prepareSqlStoreInMemory;
+ (id)sqlStoreInMemory;
+ (id)defaultHarvestStore;
+ (id)defaultStore;
+ (id)storeWithDefaultLocationAndExecuteJournals:(_Bool)arg1;
+ (id)defaultSnippetPath;
+ (id)defaultPath;
+ (id)defaultPathCreatingSuggestionsDirectoryIfNeeded:(_Bool)arg1;
+ (id)_deserializeDateComponents:(id)arg1;
+ (id)_serializeDate:(id)arg1;
+ (void)setCachedVIPEmailAddresses:(id)arg1;
+ (id)_cachedVIPEmailAddresses;
+ (_Bool)canStoreEventsForAccountType:(id)arg1;
+ (void)clearMigrationCompletedForPaths;
+ (id)cnContactIdentifiersForContact:(id)arg1;
+ (id)cnContactIdentifiersSpotlightQueryStringForContact:(id)arg1;
+ (id)journalNameForDbPath:(id)arg1;
- (void).cxx_destruct;
@property(readonly) SGKeyValueCacheManager *kvCacheManager; // @synthesize kvCacheManager=_kvCacheManager;
@property(readonly) SGSGtoCNContactsCacheUpdateAdapter *sgToCNContactsCacheUpdateAdapter; // @synthesize sgToCNContactsCacheUpdateAdapter=_sgToCNContactsCacheUpdateAdapter;
@property(readonly) SGSpotlightContactsAdapter *spotlightContactsAdapter; // @synthesize spotlightContactsAdapter=_spotlightContactsAdapter;
@property(readonly, nonatomic) _Bool waitForMigrations; // @synthesize waitForMigrations=_waitForMigrations;
@property(readonly, nonatomic) _Bool isEphemeral; // @synthesize isEphemeral=_isEphemeral;
- (void)truncateContactDetailTable;
- (int)countContactDetailTableRows;
- (void)resolveFullDownloadRequests:(id)arg1;
- (id)loadFullDownloadRequestBatch:(unsigned long long)arg1;
- (id)journal;
- (id)duplicateKeysMatchingInteractionBundleId:(id)arg1 andTags:(id)arg2;
- (id)_hashWithDuplicateKeysMatchingTags:(id)arg1;
- (id)duplicateKeysMatchingAnyReminderHash:(id)arg1;
- (id)duplicateKeysMatchingAnyEventHash:(id)arg1;
- (id)duplicateKeysMatchingAnyTag:(id)arg1;
- (id)duplicateKeysMatchingEmailAddressPrefix:(id)arg1 limitTo:(unsigned long long)arg2;
- (_Bool)reminderAlarmTriggeredForStorageReminder:(id)arg1 error:(id *)arg2;
- (_Bool)rejectStoredReminder:(id)arg1 error:(id *)arg2;
- (_Bool)confirmStoredReminder:(id)arg1 error:(id *)arg2;
- (_Bool)reminderAlarmTriggeredForRecordId:(id)arg1 error:(id *)arg2;
- (_Bool)rejectReminderByKey:(id)arg1 error:(id *)arg2;
- (_Bool)rejectReminderByRecordId:(id)arg1 error:(id *)arg2;
- (_Bool)confirmReminderByRecordId:(id)arg1 error:(id *)arg2;
- (_Bool)rejectStoredEvent:(id)arg1 error:(id *)arg2;
- (_Bool)rejectContactDetailByRecordID:(id)arg1 error:(id *)arg2;
- (_Bool)confirmContactDetailByRecordID:(id)arg1 error:(id *)arg2;
- (_Bool)rejectContactByRecordID:(id)arg1 error:(id *)arg2;
- (_Bool)confirmContactByRecordID:(id)arg1 error:(id *)arg2;
- (_Bool)confirm:(_Bool)arg1 orRejectContactByRecordID:(id)arg2 error:(id *)arg3;
- (_Bool)rejectEventByRecordId:(id)arg1 error:(id *)arg2;
- (_Bool)confirmStoredEvent:(id)arg1 error:(id *)arg2;
- (_Bool)confirmEventByRecordId:(id)arg1 error:(id *)arg2;
- (_Bool)confirmRealtimeContact:(id)arg1 error:(id *)arg2;
- (_Bool)rejectRealtimeContact:(id)arg1 error:(id *)arg2;
- (_Bool)confirmRealtimeEvent:(id)arg1 error:(id *)arg2;
- (_Bool)rejectRealtimeEvent:(id)arg1 error:(id *)arg2;
- (id)confirmedFieldValuesForEvent:(id)arg1;
- (id)confirmedFieldValuesForEntity:(id)arg1;
- (id)rejectFieldValuesForRecordId:(id)arg1;
- (void)confirmFieldValues:(id)arg1 forEntity:(id)arg2;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_)arg1 endingAt:(struct SGUnixTimestamp_)arg2 limitTo:(unsigned long long)arg3 additionalWhereClause:(id)arg4 options:(unsigned int)arg5 onPrep:(CDUnknownBlockType)arg6;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_)arg1 endingAt:(struct SGUnixTimestamp_)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_)arg1 endingAt:(struct SGUnixTimestamp_)arg2 limitTo:(unsigned long long)arg3;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_)arg1 endingAt:(struct SGUnixTimestamp_)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5;
- (id)suggestEventsStartingAt:(struct SGUnixTimestamp_)arg1 endingAt:(struct SGUnixTimestamp_)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4;
- (id)_filterOutAllButAcceptedWithUpdatedFields:(id)arg1;
- (id)_filterOutCancelledEvents:(id)arg1;
- (_Bool)eventIsCancelled:(id)arg1;
- (id)_filterOutOlderVersionsOfPseudoEvents:(id)arg1;
- (id)eventFromSqlResult:(struct sqlite3_stmt *)arg1;
- (id)contactIdsMergedWithMasterEntityId:(id)arg1;
- (id)suggestContactMatchesByContactDetailTag:(id)arg1;
- (id)suggestContactByRecordId:(id)arg1;
- (id)storageContactByRecordId:(id)arg1 withSnippets:(_Bool)arg2;
- (id)suggestContactByIdentityKey:(id)arg1 parentKey:(id)arg2;
- (id)suggestContactByKey:(id)arg1;
- (id)storageContactByKey:(id)arg1;
- (id)suggestContactMatchesByEmailAddress:(id)arg1;
- (id)suggestContactMatchesByEmailAddress:(id)arg1 isMaybe:(_Bool)arg2 onlySignificant:(_Bool)arg3;
- (id)suggestContactMatchesByPhoneNumber:(id)arg1;
- (id)suggestContactMatchesByPhoneNumber:(id)arg1 isMaybe:(_Bool)arg2 onlySignificant:(_Bool)arg3;
- (id)allContactsMasterEntityIdsLimitedTo:(unsigned long long)arg1;
- (id)allContactsWithSnippets:(_Bool)arg1 limitTo:(unsigned long long)arg2;
- (void)enumerateAllContactsWithSnippets:(_Bool)arg1 limitTo:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)_queryForAllContactsWithLimit;
- (id)_matchableUTF8TokenRangesInMatchExpression:(id)arg1;
- (id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2;
- (id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2;
- (id)_matchinfoForFTSMatchWhere:(id)arg1 bindings:(CDUnknownBlockType)arg2;
- (id)suggestContactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2;
- (id)_rankSGContacts:(id)arg1 bySimilarityToContact:(id)arg2;
- (double)_scoreSGContact:(id)arg1 bySimilarityToContact:(id)arg2 cnContactFullname:(id)arg3;
- (id)_buildUnknownMatchContactMatchForSGContact:(id)arg1;
- (void)filterOutRejectedDetailsFromContact:(id)arg1;
- (id)suggestContactsWithContact:(id)arg1 limitTo:(unsigned long long)arg2;
- (id)suggestContactsWithPrefix:(id)arg1 limitTo:(unsigned long long)arg2;
- (id)suggestContactsByMasterEntityQuery:(id)arg1 withSnippets:(_Bool)arg2 limit:(unsigned long long)arg3 bindings:(CDUnknownBlockType)arg4;
- (id)suggestContactsByMasterEntityQuery:(id)arg1 limit:(unsigned long long)arg2 bindings:(CDUnknownBlockType)arg3;
- (void)enumerateContactsByMasterEntityQuery:(id)arg1 withSnippets:(_Bool)arg2 limit:(unsigned long long)arg3 bindings:(CDUnknownBlockType)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)_contactsForMasterEntityIds:(id)arg1 withSnippets:(_Bool)arg2;
- (void)_enumerateContactsForMasterEntityIds:(id)arg1 withSnippets:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)masterEntityIDsForMasterEntityQuery:(id)arg1 bindings:(CDUnknownBlockType)arg2;
- (id)storageContactByMasterEntityId:(long long)arg1 withSnippets:(_Bool)arg2;
- (_Bool)contactIsDisplayable:(id)arg1;
- (id)parentKeysForDuplicateKey:(id)arg1;
- (id)mostRecentParentKeyForDuplicateKey:(id)arg1;
- (id)emailsPendingVerification;
- (id)nextPendingGeocode;
- (void)clearNoContactsCache;
- (_Bool)_isStringInNoContactsCache:(id)arg1;
- (_Bool)_isPhoneNumberInNoContactsCache:(id)arg1;
- (void)_addPhoneNumberToNoDetailsCache:(id)arg1;
- (void)removePhoneNumberFromNoDetailsCache:(id)arg1;
- (void)_addStringToNoContactsCache:(id)arg1;
- (void)removeStringFromNoContactsCache:(id)arg1;
- (void)_addPhoneNumberIntegerToNoContactsCache:(unsigned long long)arg1;
- (void)_removePhoneNumberIntegerFromNoContactsCache:(unsigned long long)arg1;
- (unsigned long long)_unsignedIntegerFromPhoneIfPossible:(id)arg1;
- (void)clearCaches;
- (void)clearMasterEntityCache;
- (void)_removeCorruptionMarker;
- (_Bool)corruptionMarkerPresent;
- (void)addDeallocNotification:(CDUnknownBlockType)arg1;
- (void)closeDatabases;
- (void)dealloc;
- (id)initWithEntityDbPath:(id)arg1 snippetDbPath:(id)arg2 isEphemeral:(_Bool)arg3 sharedLock:(id)arg4 executeJournals:(_Bool)arg5 noMigrate:(_Bool)arg6;
- (_Bool)_runInitMigrationTasks:(id)arg1 noMigrate:(_Bool)arg2;
- (id)initForDbStatsOnlyWithError:(id *)arg1;
- (id)initForRawDatabaseAccessWithEntityPath:(id)arg1 snippetsPath:(id)arg2 error:(id *)arg3;
- (void)_postChangeNotification;
- (_Bool)deleteURLsFromBundleIdentifier:(id)arg1 documentIdentifiers:(id)arg2;
- (_Bool)deleteURLsFromBundleIdentifier:(id)arg1 groupIdentifierGlobs:(id)arg2;
- (_Bool)deleteURLsFromBundleIdentifier:(id)arg1;
- (_Bool)deleteURLsOlderThanDate:(id)arg1;
- (_Bool)trimURLTableDownToLimit:(long long)arg1;
- (_Bool)trimURLs;
- (_Bool)writeURL:(id)arg1;
- (struct _PASDBIterAction_)_updateURLs:(id)arg1 stmt:(struct sqlite3_stmt *)arg2;
- (id)_columnList;
- (id)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 excludingBundleIdentifiers:(id)arg3 limit:(long long)arg4;
- (id)recentURLsWithLimit:(long long)arg1;
- (long long)reminderPrimaryKeyForEntityId:(id)arg1;
- (id)reminderEntityIdForPrimaryKey:(long long)arg1;
- (id)reminderOriginForPrimaryKey:(long long)arg1;
- (id)reminderEntityIdForDuplicateKey:(id)arg1;
- (id)reminderDuplicateKeyForEntityId:(id)arg1;
- (id)reminderSourceKeyForDuplicateKey:(id)arg1;
- (long long)commitStorageReminder:(id)arg1;
- (id)getReminder:(long long)arg1;
- (id)getReminderWithDuplicateKey:(id)arg1;
- (id)getReminderWithRecordId:(id)arg1;
- (void)logConfirmPercentAfterContactDetailRejection;
- (void)logConfirmPercentAfterContactDetailConfirmation;
- (void)logConfirmPercentAfterContactRejection;
- (void)logConfirmPercentAfterContactConfirmation;
- (void)_logConfirmPercentWithConfirmCount:(double)arg1 rejectCount:(double)arg2 domain:(id)arg3 suffix:(id)arg4;
- (double)incStatsCounterWithKey:(id)arg1;
- (double)incStatsCounterWithKey:(id)arg1 byValue:(double)arg2;
- (id)loadStatsCounterWithKey:(id)arg1;
- (void)storeStatsCounterWithKey:(id)arg1 value:(double)arg2;
- (void)analyzeMergeBlobs:(id)arg1;
- (_Bool)_analyzeMergeBlobsIncremental:(id)arg1;
- (_Bool)_isBlobAnalysisQueueEmpty;
- (id)_popMergeBlobForAnalysis;
- (void)_writeMergeBlobSnapshotForAnalysis:(id)arg1;
- (id)makeInterdictsForBlob:(id)arg1 withContactStore:(id)arg2;
- (id)_uniqueGoodDetailMatchFrom:(id)arg1 toDetails:(id)arg2 nonUnique:(_Bool *)arg3;
- (id)unmergedCandidatesLimitedTo:(int)arg1;
- (id)splitBlob:(id)arg1 withInterdicts:(id)arg2 edges:(id)arg3 curatedRecordIds:(id)arg4;
- (id)_makeBlobsFromConnectedComponents:(id)arg1 edges:(id)arg2;
- (id)computeBlobs;
- (id)_computeBlobsRaw:(id *)arg1;
- (void)_linkNamelessPhonesIfAppropriate:(struct graph_t *)arg1 nameToVertex:(id)arg2 disjointSets:(struct DisjointSetHandle *)arg3 edges:(id)arg4;
- (void)_linkNamelessEmailsIfAppropriate:(struct graph_t *)arg1 nameToVertex:(id)arg2 disjointSets:(struct DisjointSetHandle *)arg3 edges:(id)arg4;
- (id)curatedRecordIds;
- (id)getAllLinks;
- (void)deleteByRecordId:(id)arg1;
- (void)link:(id)arg1 to:(id)arg2 type:(unsigned int)arg3 strength:(double)arg4;
- (void)_joinIncompleteIdentityPhonesWithOthersOfTheirIlk:(id)arg1 name:(id)arg2 recordId:(id)arg3;
- (void)_joinIncompleteIdentityEmailWithOthersOfItsIlk:(id)arg1 name:(id)arg2 recordId:(id)arg3;
- (_Bool)registerAndLinkIdentity:(id)arg1 recordId:(id)arg2 phones:(id)arg3 instantMessageAddresses:(id)arg4 email:(id)arg5 curated:(_Bool)arg6 isSent:(_Bool)arg7;
- (_Bool)registerAndLinkIdentity:(id)arg1 recordId:(id)arg2 phones:(id)arg3 instantMessageAddresses:(id)arg4 email:(id)arg5 curated:(_Bool)arg6;
- (_Bool)rebuildIdentityTables;
- (_Bool)processContactEnrichment:(id)arg1 recordId:(id)arg2;
- (_Bool)processPseudoContactEntity:(id)arg1 recordId:(id)arg2;
- (id)splitNeededFor:(id)arg1 withInterdicts:(id)arg2 curatedRecordIds:(id)arg3;
- (id)loadInterdicts;
- (void)addInterdictFrom:(id)arg1 with:(id)arg2;
- (void)forceBlobSync;
- (_Bool)syncNewBlobsIfChanged;
- (id)getNewBlobsIfChanged;
- (id)batch:(CDUnknownBlockType)arg1;
- (void)_markIdentityStoreClean;
- (void)_markIdentityStoreDirty;
- (_Bool)_isIdentityStoreDirty;
- (id)reimportRequestDBStats;
- (void)_deleteOrphanedItems;
- (void)deleteCompletedReimportRequests;
- (void)deleteAllReimportRequestsOlderThanDate:(id)arg1;
- (_Bool)reimportRequestsContainBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)loadUnseenReimportItemsForRequest:(unsigned long long)arg1;
- (id)_loadReimportRequestsWithWhereClause:(id)arg1;
- (id)loadAllReimportRequests;
- (id)loadUnexecutedReimportRequests;
- (id)loadUnqueriedReimportRequests;
- (void)updateReimportItemUniqueIdForBundleId:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (void)markReimportItemAsSeenByReceiverWithBundleId:(id)arg1 uniqueId:(id)arg2;
- (void)markReimportItemsAsSeenByReceiverWithBundleId:(id)arg1 items:(id)arg2;
- (void)markReimportRequestAsExecutedWithRequestId:(unsigned long long)arg1;
- (void)storeReimportItems:(id)arg1 requestId:(unsigned long long)arg2;
- (unsigned long long)storeReimportRequest:(id)arg1;
- (long long)commitStorageLocation:(id)arg1;
- (id)storageLocationWithPrimaryKey:(long long)arg1;
- (void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1;
- (void)deleteItemsWithEntityTag:(id)arg1 preserveEventConfirmationHistory:(_Bool)arg2;
- (void)deleteItemsWithEntityTag:(id)arg1;
- (void)deleteInteractionEntitiesExceedingLimit:(id)arg1 withSuspensionHandler:(CDUnknownBlockType)arg2;
- (void)deleteMessagesByDuplicateKey:(id)arg1;
- (void)deleteEntitiesByDuplicateKey:(id)arg1 preserveEventConfirmationHistory:(_Bool)arg2 emitChangeNotifications:(_Bool)arg3;
- (void)deleteEntitiesByDuplicateKey:(id)arg1 emitChangeNotifications:(_Bool)arg2;
- (id)_deleteMessageMetadataByDuplicateKeyNoRecurse:(id)arg1;
- (void)_deleteContactDetailsByDuplicateKeys:(id)arg1;
- (void)_deleteRemindersByDuplicateKey:(id)arg1;
- (id)_deleteEntitiesByDuplicateKeyNoRecurse:(id)arg1;
- (id)_derefChildrenOf:(id)arg1;
- (id)_deleteChildEntitiesByRecordIdsInTable:(id)arg1;
- (void)_recordPseudoContactsWithDeletedDetailsInTable:(id)arg1 deletedChildrenTable:(id)arg2;
- (id)childrenFromParentKey:(id)arg1;
- (void)deleteMessages:(id)arg1;
- (void)pruneNLEventEntitiesOlderThan:(struct SGUnixTimestamp_)arg1;
- (void)pruneReminders;
- (void)pruneNLEventEntitiesOlderThanTwoWeeks;
- (void)pruneDuplicateEventExtractions:(id)arg1;
- (void)pruneEntitiesOlderThan:(struct SGUnixTimestamp_)arg1 suspensionHandler:(CDUnknownBlockType)arg2 batchSize:(unsigned long long)arg3;
- (void)pruneEntitiesOlderThanOneYearWithSuspensionHandler:(CDUnknownBlockType)arg1;
- (void)pruneEntitiesOlderThan:(struct SGUnixTimestamp_)arg1 suspensionHandler:(CDUnknownBlockType)arg2;
- (void)_removeSnippetsForEmails:(id)arg1;
- (void)removeSnippetsForEntities:(id)arg1;
- (float)_scoreContactDetail:(id)arg1;
- (id)columnQueryPrefixSelect;
- (void)selectAuthoritativeDetailsForContactWithId:(long long)arg1;
- (_Bool)clearDatabases;
- (void)vacuum;
- (void)clearAllTables;
- (void)analyzeDatabase;
- (id)dbStats;
- (id)selectEntityQuery:(id)arg1;
- (unsigned long long)entityCount;
- (id)allPseudoContacts;
- (id)allContactsWithEntityType:(unsigned long long)arg1;
- (id)entityFromSqlResult:(struct sqlite3_stmt *)arg1 withSnippets:(_Bool)arg2;
- (id)entityFromSqlResult:(struct sqlite3_stmt *)arg1;
- (_Bool)databasecheck_contactMergeGroupConsistency;
- (_Bool)databasecheck_BrokenEntityIDReferences;
- (_Bool)databasecheck_IntegrityCheck;
- (_Bool)performIntegrityCheckOnly;
- (_Bool)performDatabaseCheck;
- (void)_reportDbStatsBackground;
- (void)reportDbStats;
- (void)registerCachePrecomputationWithCTS;
- (_Bool)senderIsSignificantForMessage:(id)arg1;
- (void)registerSentTextMessage:(id)arg1;
- (_Bool)mayHaveSentMessageToHandle:(id)arg1;
- (id)normalizeHandleForRecipientFilterAndRemoveFromDetailsCache:(id)arg1;
- (void)registerSentMailMessage:(id)arg1;
- (_Bool)mayHaveSentMessageToEmail:(id)arg1;
- (_Bool)recentsContainSomeOfEmails:(id)arg1 phoneNumbers:(id)arg2 instantMessageAddresses:(id)arg3;
- (void)setCRLookupForTesting:(CDUnknownBlockType)arg1;
- (_Bool)anyHandleIsSignificant:(id)arg1;
- (_Bool)anyEmailAddressIsSignificant:(id)arg1;
- (_Bool)realtimeContactIsSignificantOrSignificanceIsDisabled:(id)arg1;
- (_Bool)realtimeContactIsSignificant:(id)arg1;
- (_Bool)contactIsSignificantOrSignificanceIsDisabled:(id)arg1 usingCoreRecents:(_Bool)arg2;
- (_Bool)contactIsSignificantOrSignificanceIsDisabled:(id)arg1;
- (_Bool)contactIsSignificant:(id)arg1 usingCoreRecents:(_Bool)arg2;
- (_Bool)contactIsSignificant:(id)arg1;
- (id)loadAllContactDetailsFromTableForRecordId:(id)arg1;
- (id)loadAllContactDetailsFromTableForRecordId:(id)arg1 type:(unsigned long long)arg2;
- (id)contactDetailEntityIdForDuplicateKey:(id)arg1;
- (long long)contactDetailPrimaryKeyForDuplicateKey:(id)arg1;
- (long long)commitContactDetail:(id)arg1;
- (void)writeIdentityBlobs:(id)arg1 forceRewrite:(_Bool)arg2;
- (void)_writeLabeledBlobs:(id)arg1 isDelete:(_Bool)arg2;
- (id)_labelIdentityBlobs:(id)arg1;
- (id)_loadIdentityBlobs;
- (void)_writeFTSTermsForEnrichment:(id)arg1 entityId:(long long)arg2;
- (void)_writeContactEntityToJournal:(id)arg1;
- (void)_writeEventEntityToJournal:(id)arg1;
- (void)_writeReminderEntitiesToJournal:(id)arg1;
- (void)_writeEventEntitiesToJournal:(id)arg1;
- (id)_journalEntryFromReminderEntity:(id)arg1;
- (id)_journalEntryFromEntity:(id)arg1;
- (void)_writeEntityParentageFor:(id)arg1 entityId:(long long)arg2;
- (long long)_writeEnrichmentToDb:(id)arg1;
- (void)_contentWriteEnrichmentToDb:(id)arg1;
- (long long)_writeOneEntityToDb:(id)arg1;
- (long long)_writeMessageEntityToDb:(id)arg1;
- (void)markEntityAsDupeByRecordId:(id)arg1;
- (void)writeEmailVerificationResultForEmailWithKey:(id)arg1 eventEntities:(id)arg2;
- (void)writeEntityGeocodeResultToDb:(id)arg1;
- (void)_addLocations:(id)arg1 toEntityWriteDictionary:(id)arg2;
- (void)_addTimeRange:(id)arg1 toEntityWriteDictionary:(id)arg2;
- (void)_writeEnrichmentToSnippetsDb:(id)arg1;
- (void)_writeMessageEntityToSnippetsDb:(id)arg1;
- (_Bool)entityWantsFullDownload:(id)arg1;
- (id)_computePseudoContactContentHash:(id)arg1 contactDetails:(id)arg2;
- (void)_dumpTable:(id)arg1 columns:(id)arg2 limitTo:(int)arg3;
- (void)_addIndexingTagsToParent:(id)arg1;
- (void)_addIndexingTagsTo:(id)arg1;
- (void)_prunePseudoContactGeneratingEmails:(id)arg1;
- (void)_writeContactDetails:(id)arg1;
- (void)_hashAttachedPseudoContacts:(id)arg1;
- (void)_emitChangeNotifications:(id)arg1;
- (void)_emitChangeNotificationForEnrichment:(id)arg1;
- (long long)writeEntity:(id)arg1 withSpotlightReferenceForBundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4;
- (long long)writeEnrichment:(id)arg1;
- (long long)writeEntity:(id)arg1;
- (void)writeInteractionEventEntities:(id)arg1;
- (struct SGUnixTimestamp_)lastSeenTimestampForKey:(id)arg1;
- (void)setParentMessagesLimitForTesting:(unsigned long long)arg1;
- (id)historyForTesting;
- (id)snippetsDbHandleForTesting;
- (id)dbHandleForTesting;
- (void)setLostMessageOverflow:(unsigned long long)arg1;
- (void)updateSerializedContacts:(id)arg1;
- (_Bool)_processBatchOfSerializedContactJobs;
- (long long)_popQueuedSerializedContactId;
- (void)_trimSerializedContacts;
- (id)serializedEntityIds;
- (id)loadAllSerializedContacts;
- (id)loadSerializedContactForId:(long long)arg1;
- (void)deleteSerializedContactsForIdSet:(id)arg1;
- (void)deleteSerializedContactForId:(long long)arg1;
- (void)writeSerializedContactAndUpdateEntityIDSet:(id)arg1;
- (void)writeSerializedContactPlaceholder:(long long)arg1;
- (void)writeSerializedContact:(id)arg1;
- (unsigned long long)serializedContactsLimit;
- (void)setSerializedContactsLimit:(unsigned long long)arg1;
- (id)loadEventsWithInteractionIdentifiers:(id)arg1 fromBundleIdentifier:(id)arg2;
- (id)allDeliveriesWithLimit:(unsigned long long)arg1;
- (id)loadReminderByRecordIdOld:(id)arg1;
- (id)loadReminderByKeyOld:(id)arg1;
- (id)loadReminderByRecordId:(id)arg1;
- (id)loadReminderByKey:(id)arg1;
- (id)allRemindersLimitedTo:(unsigned long long)arg1;
- (id)entityKeyCountsForEntityType:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)loadCuratedEventsStartingAt:(double)arg1;
- (id)loadAllContactDetailsWithWhereClause:(id)arg1 onPrep:(CDUnknownBlockType)arg2 dedupeAgainst:(id)arg3;
- (id)loadAllContactDetailsForRecordId:(id)arg1;
- (id)loadContactDetailsWithWhereClause:(id)arg1 onPrep:(CDUnknownBlockType)arg2 type:(unsigned long long)arg3 dedupeAgainst:(id)arg4 recordId:(id)arg5;
- (id)loadEventByKey:(id)arg1;
- (id)loadContactDetailsForRecordId:(id)arg1 type:(unsigned long long)arg2;
- (id)loadStorageContactByRecordId:(id)arg1;
- (id)loadStorageContactByRecordId:(id)arg1 error:(id *)arg2;
- (id)loadContactForStorageContact:(id)arg1 usingSerializedContactCache:(_Bool)arg2;
- (id)loadEventByRecordId:(id)arg1;
- (id)loadEntitiesBySourceKey:(id)arg1 entityType:(long long)arg2 resolveDuplicates:(CDUnknownBlockType)arg3;
- (id)loadEntitiesByEntityKey:(id)arg1 entityType:(long long)arg2 resolveDuplicates:(CDUnknownBlockType)arg3;
- (id)loadEntityByKey:(id)arg1;
- (id)_loadMessageByKey:(id)arg1;
- (id)loadOriginByRecordId:(id)arg1;
- (id)allEntitiesOfType:(long long)arg1 limitedTo:(unsigned long long)arg2 onlyMLExtractions:(_Bool)arg3;
- (id)allEntitiesOfType:(long long)arg1 limitedTo:(unsigned long long)arg2;
- (id)loadEntityByRecordId:(id)arg1;
- (id)loadSourceKeyByRecordId:(id)arg1;
- (id)loadDuplicateKeyByRecordId:(id)arg1;
- (void)refreshSuggestionsContact:(id)arg1;
- (void)_deltaSyncContactsWithChangeHistory:(id)arg1;
- (void)syncContactsWithStore:(id)arg1;
- (void)setHasFullSync;
- (_Bool)needsFullSync;
- (void)_fullSyncContactsWithStore:(id)arg1;
- (void)clearChangeHistory:(id)arg1;
- (void)updateCNContactMatches:(id)arg1;
- (void)_enqueueBatchOfCNContactIds:(id)arg1;
- (id)_popBatchOfCNContactIds;
- (id)_pendingCNContactIdsJobCache;
- (id)cnContactMatchesForRecordId:(id)arg1 found:(_Bool *)arg2;
- (id)loadAllPrecomputedContactMatches;
- (id)prematchedContactIdentifiers;
- (void)deleteAllCNContactMatchesForEntityID:(long long)arg1;
- (void)deleteAllCNContactMatchesForIdSet:(id)arg1;
- (void)deleteAllCNContactMatches;
- (void)deleteCNContactMatchForContactId:(id)arg1;
- (id)loadCNContactMatchesForContact:(id)arg1 andGetMaxEntityId:(long long *)arg2;
- (void)writeCNContactMatchAndUpdateSetForContact:(id)arg1 withMatches:(id)arg2 andMaxEntityID:(long long)arg3;
- (void)writeCNContactMatchForContact:(id)arg1 withMatches:(id)arg2 andMaxEntityID:(long long)arg3;
- (void)writeCNContactMissForRecordId:(id)arg1;
- (long long)getMaxEntityId;
- (void)stopJournaling;
- (void)startJournaling;
- (void)registerJournalUnlockHandler;
- (void)handleDeviceLockStateEvent:(int)arg1;
- (void)tryExecuteSnippetsJournal;
- (id)loadExtractionInfoForPrimaryKey:(long long)arg1;
- (unsigned long long)commitExtractionInfo:(id)arg1;
- (long long)migration_newContactDetailsSchema;
- (long long)migration_newRemindersSchema;
- (long long)migration_deleteSerializedContacts;
- (long long)migration_deleteInternalExtractionsFromML;
- (long long)migration_deleteEmergencyExtractions;
- (long long)migration_reimport;
- (long long)migration_deleteInteractions;
- (long long)migration_rebuildFTSWithDetailEntityIDDocIDs;
- (long long)migration_separateMessageSnippets;
- (long long)migration_separateMessageEntities;
- (long long)migration_FixupMergeGroups;
- (long long)migration_RemoveEntityReferencesWithoutBundleIdentifier;
- (long long)migration_DropMessagingTermsWithPhoneExtensions;
- (long long)migration_ConvertContentAndDupKeyHashesToBlobs;
- (long long)migration_DeduplicateIdentityPhones;
- (long long)migration_CreateFTSTableWithITS;
- (long long)migration_RecreateFTSTableWithITS;
- (long long)migration_RebuildIdentityTables;
- (long long)migration_FixUpColumnsForDevicesWhoMissedTheImprovedLegacyMigration;
- (long long)migration_AddNewishTablesIfMissing;
- (long long)migration_AddAuthorColumnIfMissing;
- (long long)migration_MoveContentToSnippets;
- (long long)migration_deleteLegacyMessages;
- (long long)migrate;
- (long long)skipFromZeroSchema;
- (void)unsafeMigrateToVersionForTesting:(unsigned long long)arg1;
- (long long)migrateToVersion:(unsigned long long)arg1;
- (long long)fixupVersionMismatch;
- (void)updateLanguageForFTSTablesToLanguage:(id)arg1;
- (_Bool)_prepareToCopyFrom:(id)arg1 toNewTableNamed:(id)arg2;
- (_Bool)_renameTable:(id)arg1 to:(id)arg2;
- (void)_slowCopyFromTable:(id)arg1 toTable:(id)arg2 startingAtEntityId:(unsigned long long)arg3;
- (_Bool)_createEntityFTSTableWithName:(id)arg1;
- (id)languageToUpdateEntityFTSTo;
- (long long)runQueries:(id)arg1 forVersion:(unsigned int)arg2 inTransactionOnDb:(id)arg3;
- (long long)runQuery:(id)arg1 onDb:(id)arg2;
- (_Bool)migrationNeeded;
- (unsigned long long)maxKnownDbVersion;
- (long long)configureMigratorThenMigrateToVersion:(unsigned long long)arg1;
- (long long)clearDatabase:(id)arg1;
- (long long)unmigrateDatabases;
- (id)selectMigrationQueue;
- (long long)migrateDatabases;
- (void)prepMigrator;
- (id)initForMigratorTestWithEntityDb:(id)arg1 snippetDb:(id)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (_Bool)_shouldContinueReindex:(int)arg1;
- (void)reindexSearchableItemsWithMinimumEntityId:(unsigned long long)arg1 searchableIndex:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3 reindexCount:(int)arg4;
- (unsigned long long)_minEntityIdFromMinEntityId:(unsigned long long)arg1 withContactIdentifiers:(id)arg2;
- (id)contactsWithIdentifiers:(id)arg1;
- (id)batchOf:(unsigned long long)arg1 contactsStartingAtEntityId:(unsigned long long)arg2;
- (_Bool)tombstoneExistsForSpotlightReferenceWithBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2 domainIdentifier:(id)arg3;
- (void)clearAllTombstonesForSpotlightReferencesIf:(CDUnknownBlockType)arg1;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)writeTombstoneForSpotlightReferenceWithBundleIdentifier:(id)arg1 domainIdentifier:(id)arg2;
- (_Bool)_tombstoneExistsForBundleIdentifier:(id)arg1;
- (id)_selectingDomainsForDomainIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithNoBundleIdentifier;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)markLostSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (id)_recordIdsFromRemovingSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (_Bool)isRecentlyDeleted:(id)arg1;
- (void)_deleteIfNoSpotlightReferences:(id)arg1 addToRecentlyDeletedCache:(_Bool)arg2;
- (void)_markRecordsLostIfNoSpotlightReferences:(id)arg1;
- (id)_duplicateKeysWithZeroSpotlightReferencesFromRecordIds:(id)arg1;
- (_Bool)addSpotlightReferenceToEmailIfFullyDownloaded:(id)arg1 withBundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4;
- (id)recordIdForKey:(id)arg1;
- (id)duplicateKeysFromRecordIds:(id)arg1;
- (id)duplicateKeysFromMailMessageKeys:(id)arg1;
- (void)addSpotlightReferenceToEmailRecordId:(id)arg1 withBundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4;
- (_Bool)hasSpotlightReferenceForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)domainIdentifierForSpotlightReferenceForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)displayableEntities:(id)arg1;
- (id)filterOutUndisplayableEntities:(id)arg1;
- (void)markMessagesFound:(id)arg1;
- (void)pruneLostMessagesWithSource:(id)arg1 count:(unsigned long long)arg2;
- (void)markMessagesLost:(id)arg1;
- (void)markMessagesUndisplayablyLost:(id)arg1;
- (void)updateMessages:(id)arg1 state:(unsigned long long)arg2;
- (id)loadMessagesToRefresh;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
