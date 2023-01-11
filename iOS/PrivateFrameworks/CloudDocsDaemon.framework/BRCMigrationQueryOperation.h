//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKQueryCursor, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCMigrationQueryOperation
{
    NSString *_migrationKey;
    CKQueryCursor *_continuationCursor;
    NSMutableArray *_shareIDsToFetch;
}

+ (id)allMigrationKeysOrdered;
+ (id)folderShareAliasesMigrationKey;
+ (id)folderSharesMigrationKey;
+ (id)documentSharesMigrationKey;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)_performAfterQueryingForShareIDsOfFolders:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAfterQueryingForShareAliasesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performQuery:(id)arg1 recordFetchedBlock:(CDUnknownBlockType)arg2 cursorUpdatedBlock:(CDUnknownBlockType)arg3 desiredKeys:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_updatedContinuationCursor:(id)arg1 fetchedRecords:(id)arg2 error:(id *)arg3;
- (_Bool)_saveFetchedRecords:(id)arg1 cursor:(id)arg2 error:(id *)arg3;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithServerZone:(id)arg1 migrationKey:(id)arg2 continuationCursor:(id)arg3;

@end
