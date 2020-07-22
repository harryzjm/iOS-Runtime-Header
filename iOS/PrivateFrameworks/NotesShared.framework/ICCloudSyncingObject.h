//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <NotesShared/ICCloudObject-Protocol.h>
#import <NotesShared/ICLoggable-Protocol.h>

@class CKRecord, CKShare, ICCloudState, NSData, NSMutableDictionary, NSString;

@interface ICCloudSyncingObject : NSManagedObject <ICCloudObject, ICLoggable>
{
    _Bool _needsToLoadDecryptedValues;
    _Bool mergingUnappliedEncryptedRecord;
    NSMutableDictionary *_decryptedValues;
    CKRecord *_serverRecord;
    CKShare *_serverShare;
    CKRecord *_userSpecificServerRecord;
}

+ (id)shareSystemFieldsTransformer;
+ (id)recordSystemFieldsTransformer;
+ (void)resetAllDeletedByThisDeviceProperties;
+ (id)deletedByThisDeviceSet;
+ (id)deletedByThisDeviceOperationQueue;
+ (id)versionsByRecordIDByOperation;
+ (id)versionsByOperationQueue;
+ (id)keyPathsForValuesAffectingServerShareCheckingParent;
+ (id)keyPathsForValuesAffectingIsSharedReadOnly;
+ (id)keyPathsForValuesAffectingIsSharedViaICloud;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)currentNotesVersion;
+ (id)keyPathsForValuesAffectingNeedsToBeDeletedFromCloud;
+ (void)deleteAllTemporaryAssetFilesForAllObjects;
+ (void)deleteTemporaryFilesForAsset:(id)arg1;
+ (void)deleteTemporaryAssetFilesForOperation:(id)arg1;
+ (id)temporaryAssetDirectoryURL;
+ (id)assetForData:(id)arg1;
+ (id)temporaryAssets;
+ (_Bool)supportsUserSpecificRecords;
+ (_Bool)needsToReFetchServerRecordValue:(id)arg1;
+ (id)keyPathsForValuesAffectingNeedsToBePushedToCloud;
+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)cloudObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newPlaceholderObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)newObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)keyPathsForValuesAffectingZoneOwnerName;
+ (id)numberOfPushAttemptsToWaitByIdentifier;
+ (id)failedToSyncCountsByIdentifier;
+ (id)failureCountQueue;
+ (id)objectWithRecordID:(id)arg1 context:(id)arg2;
+ (id)keyPathsForValuesAffectingCloudAccount;
@property(nonatomic, getter=isMergingUnappliedEncryptedRecord) _Bool mergingUnappliedEncryptedRecord; // @synthesize mergingUnappliedEncryptedRecord;
@property(nonatomic) _Bool needsToLoadDecryptedValues; // @synthesize needsToLoadDecryptedValues=_needsToLoadDecryptedValues;
- (void).cxx_destruct;
- (id)ic_loggingValues;
- (id)ic_loggingIdentifier;
- (id)shortLoggingDescription;
- (id)loggingDescription;
- (_Bool)hasAllMandatoryFields;
- (void)resetUniqueIdentifier;
@property(retain, nonatomic) CKRecord *userSpecificServerRecord; // @synthesize userSpecificServerRecord=_userSpecificServerRecord;
@property(retain, nonatomic) CKShare *serverShare; // @synthesize serverShare=_serverShare;
@property(retain, nonatomic) CKRecord *serverRecord; // @synthesize serverRecord=_serverRecord;
@property(readonly, nonatomic) _Bool isUnsupported;
- (_Bool)isInCloud;
- (void)setInCloud:(_Bool)arg1;
- (_Bool)deletedByThisDevice;
- (void)setDeletedByThisDevice:(_Bool)arg1;
- (long long)isPushingSameOrLaterThanVersion:(long long)arg1;
- (void)setVersion:(long long)arg1 forOperation:(id)arg2;
- (long long)versionForOperation:(id)arg1;
- (_Bool)shouldFallBackToCheckAllCryptoKeys;
- (id)parentEncryptableObject;
- (id)cryptoPassphraseVerifier;
- (void)setCryptoMasterKey:(id)arg1;
- (id)cryptoMasterKey;
- (void)saveEncryptedJSON;
- (_Bool)isEncryptableKeyBinaryData:(id)arg1;
- (void)setPrimitiveValue:(id)arg1 forEncryptableKey:(id)arg2;
- (void)setValue:(id)arg1 forEncryptableKey:(id)arg2;
- (id)primitiveValueForEncryptableKey:(id)arg1;
- (id)valueForEncryptableKey:(id)arg1;
- (void)setDecryptedValue:(id)arg1 forKey:(id)arg2;
- (id)decryptedValueForKey:(id)arg1;
- (id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3;
- (void)decryptAndMergeEncryptedJSON:(id)arg1;
- (void)mergeUnappliedEncryptedRecord;
- (void)loadDecryptedValuesIfNecessary;
- (void)initializeCryptoPropertiesFromObject:(id)arg1;
- (void)initializeCryptoProperties;
@property(readonly, nonatomic) NSMutableDictionary *decryptedValues; // @synthesize decryptedValues=_decryptedValues;
- (_Bool)supportsEncryptedValuesDictionary;
- (void)saveAndClearDecryptedData;
- (void)saveAndClearDecryptedDataIfNecessary;
@property(retain, nonatomic) NSData *cryptoInitializationVector; // @dynamic cryptoInitializationVector;
@property(retain, nonatomic) NSData *cryptoTag; // @dynamic cryptoTag;
- (void)didAcceptShare:(id)arg1;
- (void)setServerShareIfNewer:(id)arg1;
- (id)shareType;
- (id)shareTitle;
- (id)serverShareCheckingParent;
- (_Bool)isSharedReadOnly;
- (_Bool)isSharedRootObject;
- (_Bool)isOwnedByCurrentUser;
- (_Bool)canBeRootShareObject;
- (_Bool)isSharedViaICloud;
- (_Bool)canBeSharedViaICloud;
- (_Bool)needsToDeleteShare;
- (void)updateChangeCountsForUnsavedParentReferences;
- (void)updateParentReferenceIfNecessary;
- (id)childCloudObjects;
- (id)parentCloudObject;
- (void)updateMinimumSupportedNotesVersion;
- (_Bool)supportsDeletionByTTL;
@property(nonatomic) _Bool markedForDeletion; // @dynamic markedForDeletion;
- (void)unmarkForDeletion;
- (void)markForDeletion;
- (void)fixBrokenReferences;
- (id)objectsToBeDeletedBeforeThisObject;
- (void)deleteFromLocalDatabase;
- (_Bool)shouldBeDeletedFromLocalDatabase;
- (_Bool)isDeletable;
- (void)didDeleteUserSpecificRecordID:(id)arg1;
- (void)didFailToSaveUserSpecificRecord:(id)arg1 error:(id)arg2;
- (void)didSaveUserSpecificRecord:(id)arg1;
- (void)mergeDataFromUserSpecificRecord:(id)arg1;
- (void)didFetchUserSpecificRecord:(id)arg1;
- (id)newlyCreatedUserSpecificRecord;
- (id)userSpecificRecordID;
- (id)userSpecificRecordType;
- (_Bool)wantsUserSpecificRecord;
- (void)objectWasFetchedButDoesNotExistInCloud;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
- (void)objectFailedToBePushedToCloudWithOperation:(id)arg1 record:(id)arg2 error:(id)arg3;
- (void)objectWillBePushedToCloudWithOperation:(id)arg1;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasDeletedFromCloud;
- (_Bool)needsToFetchAfterServerRecordChanged:(id)arg1;
- (_Bool)hasSuccessfullyPushedLatestVersionToCloud;
- (_Bool)needsToBePushedToCloud;
- (void)mergeCryptoTagAndInitializationVectorFromRecord:(id)arg1;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1;
- (id)newlyCreatedRecord;
- (_Bool)isValidObject;
- (_Bool)isInICloudAccount;
- (_Bool)needsToBeDeletedFromCloud;
- (id)recordType;
- (long long)databaseScope;
- (id)recordID;
@property(retain, nonatomic) NSString *zoneOwnerName; // @dynamic zoneOwnerName;
- (id)recordZoneName;
- (id)recordName;
@property(readonly, nonatomic) _Bool shouldBeIgnoredForSync;
- (void)resetFailureCounts;
- (void)deleteChangeTokensAndReSync;
- (void)decrementFailureCounts;
- (void)incrementFailureCounts;
@property long long numberOfPushAttemptsToWaitCount;
@property long long failedToSyncCount;
- (void)clearServerRecord;
- (void)clearChangeCount;
- (void)updateChangeCount;
@property(nonatomic) _Bool needsToBeFetchedFromCloud; // @dynamic needsToBeFetchedFromCloud;
- (id)cloudAccount;
- (_Bool)validateIdentifier:(inout id *)arg1 error:(out id *)arg2;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)didTurnIntoFault;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) ICCloudState *cloudState; // @dynamic cloudState;
@property(nonatomic) long long cryptoIterationCount; // @dynamic cryptoIterationCount;
@property(retain, nonatomic) NSData *cryptoSalt; // @dynamic cryptoSalt;
@property(retain, nonatomic) NSData *cryptoWrappedKey; // @dynamic cryptoWrappedKey;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSData *encryptedValuesJSON; // @dynamic encryptedValuesJSON;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) _Bool isPasswordProtected; // @dynamic isPasswordProtected;
@property(nonatomic) long long minimumSupportedNotesVersion; // @dynamic minimumSupportedNotesVersion;
@property(nonatomic) _Bool needsInitialFetchFromCloud; // @dynamic needsInitialFetchFromCloud;
@property(nonatomic) _Bool needsToSaveUserSpecificRecord; // @dynamic needsToSaveUserSpecificRecord;
@property(retain, nonatomic) NSString *passwordHint; // @dynamic passwordHint;
@property(retain, nonatomic) NSString *primitiveZoneOwnerName; // @dynamic primitiveZoneOwnerName;
@property(retain, nonatomic) NSData *serverRecordData; // @dynamic serverRecordData;
@property(retain, nonatomic) NSData *serverShareData; // @dynamic serverShareData;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSData *unappliedEncryptedRecord; // @dynamic unappliedEncryptedRecord;
@property(retain, nonatomic) NSData *userSpecificServerRecordData; // @dynamic userSpecificServerRecordData;

@end

