//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NPKGizmoDatabase : NSObject
{
    struct sqlite3 *_database;
    struct sqlite3_stmt *_deleteStatement;
    struct sqlite3_stmt *_insertStatement;
    struct sqlite3_stmt *_insertDiffStatement;
    struct sqlite3_stmt *_selectPassDataStatement;
    struct sqlite3_stmt *_selectPassAndImageSetsDataStatement;
    struct sqlite3_stmt *_selectPassDiffStatement;
    struct sqlite3_stmt *_updateDeletePendingStatment;
    struct sqlite3_stmt *_selectDeletePendingStatement;
    struct sqlite3_stmt *_updatePreferredAIDStatement;
    struct sqlite3_stmt *_selectPreferredAIDStatement;
    struct sqlite3_stmt *_insertTransactionStatement;
    struct sqlite3_stmt *_removeTransactionStatement;
    struct sqlite3_stmt *_removeTransactionWithServiceIdentifier;
    struct sqlite3_stmt *_selectTransactionsStatement;
    struct sqlite3_stmt *_selectTransactionsStatementWithSource;
    struct sqlite3_stmt *_selectTransactionsStatementWithoutSource;
    struct sqlite3_stmt *_selectTransactionWithIdentifierStatement;
    struct sqlite3_stmt *_selectTransactionWithServiceIdentifierStatement;
    struct sqlite3_stmt *_selectPassUniqueIDAsssociateToTransactionWithIdentifierStatement;
    struct sqlite3_stmt *_selectPassUniqueIDAsssociateToTransactionWithServiceIdentifierStatement;
    struct sqlite3_stmt *_deleteTransactionsForPassStatement;
    struct sqlite3_stmt *_trimTransactionsForPassStatement;
    struct sqlite3_stmt *_selectTransitAppletStateForPassStatement;
    struct sqlite3_stmt *_updateTransitAppletStateForPassStatement;
    struct sqlite3_stmt *_insertEphemeralTransactionStatement;
    struct sqlite3_stmt *_deleteEphemeralTransactionByPassUniqueIDStatement;
    struct sqlite3_stmt *_currentEphemeralTransactionIdentifierStatement;
    struct sqlite3_stmt *_selectLastAddValueAmountForPassStatement;
    struct sqlite3_stmt *_updateLastAddValueAmountForPassStatement;
    struct sqlite3_stmt *_selectPendingAddValueDateForPassStatement;
    struct sqlite3_stmt *_updatePendingAddValueDateForPassStatement;
    struct sqlite3_stmt *_selectCloudKitArchivedTransactionsStatement;
    struct sqlite3_stmt *_selectBalancesForPassStatement;
    struct sqlite3_stmt *_updateBalancesForPassStatement;
    NSObject<OS_dispatch_queue> *_dbQueue;
    _Bool _isInTransaction;
    NSMutableDictionary *_manifest;
    NSMutableArray *_passDescriptions;
    NSArray *_libraryHashes;
    int _externallyChangedBroadcasts;
    _Bool _sendingLocalNotifyDatabaseChanged;
    _Bool _needsMoreLocalNotifyDatabaseChanged;
    _Bool _passDBIsAvailable;
}

+ (unsigned long long)latestWatchOSMajorVersion;
+ (void)setMigrationDataSource:(id)arg1;
+ (id)_migrationDataSource;
+ (id)_migrationDelegateQueue;
+ (long long)maxDatabaseVersion;
+ (id)sharedDatabase;
@property(nonatomic) _Bool passDBIsAvailable; // @synthesize passDBIsAvailable=_passDBIsAvailable;
- (void).cxx_destruct;
- (_Bool)_table:(id)arg1 containsColumn:(id)arg2;
- (void)_attemptDatabaseOpen;
- (void)_handleHasMigrationDataSource;
- (void)_handleFirstUnlock;
- (void)_handleDatabaseChangedExternally;
- (_Bool)_preconditionsMetForDatabaseOpen;
- (void)_updateDatabaseVersionRow:(long long)arg1;
- (void)_insertDatabaseVersionRow:(long long)arg1;
- (long long)_databaseVersionExists:(_Bool *)arg1 valid:(_Bool *)arg2;
- (_Bool)_migrateDatabase:(CDUnknownBlockType)arg1;
- (id)filteredPassesUsingPassDescriptionPredicate:(id)arg1 includeImageSets:(_Bool)arg2;
- (_Bool)hasPassesMatchingPassDescriptionPredicate:(id)arg1;
- (void)enumerateAllPassesAndDescriptionsWithBlock:(CDUnknownBlockType)arg1 includeImageSets:(_Bool)arg2;
- (void)enumerateAllPassesWithBlock:(CDUnknownBlockType)arg1 includeImageSets:(_Bool)arg2;
- (id)manifestHashesForWatchOSMajorVersion:(unsigned long long)arg1;
@property(readonly) NSDictionary *manifestHashes; // @dynamic manifestHashes;
- (id)_libraryHashLockedForWatchOSMajorVersion:(unsigned long long)arg1;
- (id)libraryHashForWatchOSMajorVersion:(unsigned long long)arg1;
@property(readonly) NSData *libraryHash; // @dynamic libraryHash;
@property(readonly) NSArray *passDescriptions;
- (id)_getPreferredPaymentApplicationForPaymentPass:(id)arg1 aid:(id *)arg2;
- (id)preferredPaymentApplicationForPaymentPass:(id)arg1;
- (void)setPreferredPaymentApplication:(id)arg1 forPaymentPass:(id)arg2;
- (_Bool)_getDeletePendingForUniqueID:(id)arg1;
- (void)setDeletePending:(_Bool)arg1 forUniqueID:(id)arg2;
- (id)diffForUniqueID:(id)arg1;
- (id)passForUniqueID:(id)arg1 includeImageSets:(_Bool)arg2;
- (id)passForUniqueID:(id)arg1;
- (void)_saveDiffLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)_diffForUniqueIDLocked:(id)arg1;
- (id)_passForUniqueIDLocked:(id)arg1 includeImageSets:(_Bool)arg2;
- (_Bool)_updateCompleteRemoteHashesDuringMigration;
- (_Bool)_updateSettingsDuringMigration:(id)arg1;
- (_Bool)_updateHasStoredValueDuringMigration:(id)arg1;
- (_Bool)_updateEncodedPaymentPassDuringMigration:(id)arg1;
- (_Bool)_updateHasUserSelectableContactlessPaymentApplications:(id)arg1;
- (_Bool)_updateEffectivePaymentApplicationStateDuringMigration:(id)arg1;
- (_Bool)_updateLocalizedDescriptionDuringMigration:(id)arg1;
- (_Bool)_updateOrganizationNamesDuringMigration:(id)arg1;
- (_Bool)_updateAvailableActionsDuringMigration:(id)arg1;
- (_Bool)_updateFrontAndBackFieldBucketsDuringMigration:(id)arg1;
- (_Bool)_updateCompleteLocalHashesDuringMigration:(id)arg1;
- (_Bool)_updateIngestedDatesDuringMigration:(id)arg1;
- (_Bool)_updateDevicePaymentApplicationsDuringMigration:(id)arg1;
- (_Bool)_updateExpressPassTypesMaskDuringMigration:(id)arg1;
- (_Bool)_updateIssuerCountryCodesDuringMigration:(id)arg1;
- (_Bool)_repairEncodedImagesDuringMigration:(id)arg1;
- (_Bool)_updateEncodedImageSetsDuringMigration:(id)arg1;
- (_Bool)_updatePrimaryContactlessAndInAppPaymentApplicationsDuringMigration:(id)arg1;
- (_Bool)_updateDeviceAndPreferredPaymentApplicationsDuringMigration:(id)arg1;
- (_Bool)_updatePrivateLabelAndCobrandDuringMigration:(id)arg1;
- (_Bool)_updateNFCPayloadDuringMigration:(id)arg1;
- (void)_enumerateAllPassesForMigration:(CDUnknownBlockType)arg1;
- (void)_setPaymentBalancesLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)_paymentBalancesForPassWithUniqueIDLocked:(id)arg1;
- (void)_setPendingAddValueDateLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)_pendingAddValueDateForPassWithUniqueIDLocked:(id)arg1;
- (void)_setLastAddValueAmountLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)_lastAddValueAmountForPassWithUniqueIDLocked:(id)arg1;
- (id)_currentEphemeralTransactionIdentifierForPassWithUniqueID:(id)arg1;
- (void)_setCurrentEphemeralTransactionIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_setTransitAppletStateLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)_transitAppletStateForPassWithUniqueIDLocked:(id)arg1;
- (id)_passUniqueIDForTransactionWithServiceIdentifier:(id)arg1;
- (id)_passUniqueIDForTransactionWithIdentifier:(id)arg1;
- (id)_transactionWithServiceIdentifierLocked:(id)arg1;
- (id)_transactionWithIdentifierLocked:(id)arg1;
- (id)_transactionsWithCloudKitArchivedState:(_Bool)arg1;
- (id)_transactionsForUniqueIDLocked:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (void)_trimTransactionsForPassWithUniqueIDLocked:(id)arg1 withPaymentCredentialType:(long long)arg2;
- (void)_removeTransactionWithIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_removeTransactionWithServiceIdentifierLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_saveTransactionLocked:(id)arg1 forPassWithUniqueID:(id)arg2;
- (_Bool)_removePassWithUniqueIDLocked:(id)arg1;
- (void)_savePassLocked:(id)arg1 locallyAdded:(_Bool)arg2 wasUpdate:(_Bool *)arg3;
- (_Bool)_passDBIsAvailableLocked;
@property(readonly, nonatomic) unsigned long long numberOfPasses;
- (void)_notifyDatabaseChangedExternally;
- (void)_notifyDatabaseChangedWithNoop:(_Bool)arg1 firstUnlock:(_Bool)arg2;
- (void)_notifyForFirstUnlock;
- (void)_notifyDatabaseChangedWithNoop:(_Bool)arg1;
- (void)_notifyTransactionRemoved:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_notifyTransactionAddedOrUpdated:(id)arg1 forPassWithUniqueID:(id)arg2;
- (CDUnknownBlockType)restoreBlockForVolatilePassData;
- (id)pendingAddValueDateForPassWithUniqueID:(id)arg1;
- (void)setPendingAddValueDate:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)lastAddValueAmountForPassWithUniqueID:(id)arg1;
- (void)setLastAddValueAmount:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)transactionsWithCloudKitArchivedState:(_Bool)arg1;
- (id)currentEphemeralTransactionIdentifierForPassWithUniqueID:(id)arg1;
- (void)setCurrentEphemeralTransactionIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)setPaymentBalances:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)paymentBalancesForPassWithUniqueID:(id)arg1;
- (void)setTransitAppletState:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)transitAppletStateForPassWithUniqueID:(id)arg1;
- (id)passUniqueIDForTransactionWithServiceIdentifier:(id)arg1;
- (id)passUniqueIDForTransactionWithIdentifier:(id)arg1;
- (id)transactionWithServiceIdentifier:(id)arg1;
- (id)transactionWithIdentifier:(id)arg1;
- (id)transactionsForPassWithUniqueID:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(unsigned long long)arg4;
- (void)removeTransactionWithIdentifier:(id)arg1 forPassWithUniqueID:(id)arg2;
- (void)_saveTransaction:(id)arg1 forPassWithUniqueID:(id)arg2 withPaymentCredentialType:(long long)arg3 shouldTrim:(_Bool)arg4;
- (void)saveTransaction:(id)arg1 forPass:(id)arg2;
- (void)saveTransaction:(id)arg1 forPassWithUniqueID:(id)arg2 withPaymentCredentialType:(long long)arg3;
- (id)rebuildDatabaseWithPasses:(id)arg1;
- (id)removePassWithUniqueID:(id)arg1;
- (void)saveDiff:(id)arg1 forPassWithUniqueID:(id)arg2;
- (id)savePass:(id)arg1 isLocalPass:(_Bool)arg2;
- (id)_decodeObjectOfClass:(Class)arg1 fromStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (id)_decodeObjectOfClasses:(id)arg1 fromStatement:(struct sqlite3_stmt *)arg2 column:(int)arg3;
- (void)_performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)_loadInitialManifestLocked;
- (struct sqlite3_stmt *)updateBalancesForPassStatement;
- (struct sqlite3_stmt *)selectBalancesForPassStatement;
@property(readonly) struct sqlite3_stmt *selectCloudKitArchivedTransactionsStatement;
@property(readonly) struct sqlite3_stmt *updatePendingAddValueDateForPassStatement;
@property(readonly) struct sqlite3_stmt *selectPendingAddValueDateForPassStatement;
@property(readonly) struct sqlite3_stmt *updateLastAddValueAmountForPassStatement;
@property(readonly) struct sqlite3_stmt *selectLastAddValueAmountForPassStatement;
@property(readonly) struct sqlite3_stmt *currentEphemeralTransactionIdentifierStatement;
@property(readonly) struct sqlite3_stmt *deleteEphemeralTransactionByPassUniqueIDStatement;
@property(readonly) struct sqlite3_stmt *insertEphemeralTransactionStatement;
@property(readonly) struct sqlite3_stmt *updateTransitAppletStateForPassStatement;
@property(readonly) struct sqlite3_stmt *selectTransitAppletStateForPassStatement;
@property(readonly) struct sqlite3_stmt *trimTransactionsForPassStatement;
@property(readonly) struct sqlite3_stmt *deleteTransactionsForPassStatement;
- (struct sqlite3_stmt *)selectPassUniqueIDAsssociateToTransactionWithServiceIdentifierStatement;
- (struct sqlite3_stmt *)selectPassUniqueIDAsssociateToTransactionWithIdentifierStatement;
@property(readonly) struct sqlite3_stmt *selectTransactionWithServiceIdentifierStatement;
@property(readonly) struct sqlite3_stmt *selectTransactionWithIdentifierStatement;
- (struct sqlite3_stmt *)selectTransactionsStatementWithTransactionSource:(unsigned long long)arg1;
- (struct sqlite3_stmt *)removeTransactionWithServiceIdentifierStatement;
- (struct sqlite3_stmt *)removeTransactionStatement;
- (struct sqlite3_stmt *)insertTransactionStatement;
@property(readonly) struct sqlite3_stmt *selectPassDiffStatement; // @dynamic selectPassDiffStatement;
@property(readonly) struct sqlite3_stmt *selectPassAndImageSetsDataStatement; // @dynamic selectPassAndImageSetsDataStatement;
@property(readonly) struct sqlite3_stmt *selectPassDataStatement; // @dynamic selectPassDataStatement;
@property(readonly) struct sqlite3_stmt *selectPreferredAIDStatement;
@property(readonly) struct sqlite3_stmt *updatePreferredAIDStatement;
- (struct sqlite3_stmt *)selectDeletePendingStatement;
@property(readonly) struct sqlite3_stmt *updateDeletePendingStatement;
@property(readonly) struct sqlite3_stmt *insertDiffStatement;
@property(readonly) struct sqlite3_stmt *insertStatement; // @dynamic insertStatement;
@property(readonly) struct sqlite3_stmt *deleteStatement; // @dynamic deleteStatement;
@property(readonly) struct sqlite3 *database; // @dynamic database;
- (void)_executeSQLQuery:(id)arg1 processResultsBlock:(CDUnknownBlockType)arg2;
- (_Bool)_executeSQL:(id)arg1;
- (void)dealloc;
- (id)init;

@end

