//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectModel, NSMutableArray, NSMutableSet, NSNumber, NSSQLModel;

__attribute__((visibility("hidden")))
@interface PFCloudKitMetadataMigrationContext : NSObject
{
    NSMutableArray *_migrationStatements;
    NSMutableArray *_sqlEntitiesToCreate;
    NSMutableSet *_constrainedEntitiesToPreflight;
    _Bool _hasWorkToDo;
    _Bool _needsMetdataMigrationToNSCKRecordMetadata;
    _Bool _needsOldTableDrop;
    _Bool _needsMirroredRelationshipsLinkedToZone;
    _Bool _needsImportAfterClientMigration;
    _Bool _needsBatchUpdateForSystemFieldsAndLastExportedTransaction;
    _Bool _needsAnalyzedHistoryCheck;
    _Bool _needsCleanupFromNeedsNewShareInvitationBug;
    NSManagedObjectModel *_currentModel;
    NSSQLModel *_sqlModel;
    NSManagedObjectModel *_storeMetadataModel;
    NSSQLModel *_storeSQLModel;
    NSNumber *_storeMetadataVersion;
    NSDictionary *_storeMetadataVersionHashes;
}

- (void)addConstrainedEntityToPreflight:(id)arg1;
- (void)dealloc;
- (id)init;

@end

