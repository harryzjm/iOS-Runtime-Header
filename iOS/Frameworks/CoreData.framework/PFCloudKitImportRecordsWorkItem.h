//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/PFCloudKitSerializerDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSUUID, PFCloudKitFetchedAssetBytesMetric, PFCloudKitFetchedRecordBytesMetric;

__attribute__((visibility("hidden")))
@interface PFCloudKitImportRecordsWorkItem <PFCloudKitSerializerDelegate>
{
    NSMutableDictionary *_assetPathToSafeSaveURL;
    NSUUID *_importOperationIdentifier;
    NSMutableArray *_updatedRecords;
    unsigned long long _totalOperationBytes;
    PFCloudKitFetchedAssetBytesMetric *_fetchedAssetBytesMetric;
    PFCloudKitFetchedRecordBytesMetric *_fetchedRecordBytesMetric;
    NSMutableDictionary *_recordTypeToDeletedRecordID;
    NSMutableArray *_allRecordIDs;
    NSMutableArray *_encounteredErrors;
    NSMutableArray *_failedRelationships;
    NSMutableArray *_incrementalResults;
    NSMutableArray *_unknownItemRecordIDs;
    NSMutableDictionary *_updatedShares;
    unsigned long long _currentOperationBytes;
    unsigned long long _countUpdatedRecords;
    unsigned long long _countDeletedRecords;
}

- (id)entityNameToRelationshipsToUpdate;
- (id)entityNameToAttributesToUpdate;
- (id)cloudKitSerializer:(id)arg1 safeSaveURLForAsset:(id)arg2;
- (void)cloudKitSerializer:(id)arg1 failedToUpdateRelationship:(id)arg2 withError:(id)arg3;
- (id)createMirroringResultForRequest:(id)arg1 success:(_Bool)arg2 madeChanges:(_Bool)arg3 error:(id)arg4;
- (void)addUpdatedRecord:(id)arg1;
- (_Bool)commitMetadataChangesWithContext:(id)arg1 forStore:(id)arg2 error:(id *)arg3;
- (_Bool)updateMetadataForAccumulatedChangesInContext:(id)arg1 inStore:(id)arg2 error:(id *)arg3;
- (_Bool)applyAccumulatedChangesToStore:(id)arg1 inManagedObjectContext:(id)arg2 withStoreMonitor:(id)arg3 madeChanges:(_Bool *)arg4 error:(id *)arg5;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 request:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
