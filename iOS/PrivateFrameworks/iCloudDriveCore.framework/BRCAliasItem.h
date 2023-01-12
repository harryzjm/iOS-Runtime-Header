//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BRCLocalItem.h"

@class BRCAppLibrary, BRCClientZone, BRCDirectoryItem, BRCDocumentItem, BRCItemID;

__attribute__((visibility("hidden")))
@interface BRCAliasItem : BRCLocalItem
{
}

+ (void)fillStructureRecord:(id)arg1 inZone:(id)arg2 itemID:(id)arg3 ckInfo:(id)arg4 parentID:(id)arg5 targetItemID:(id)arg6 targetZone:(id)arg7 diffs:(unsigned long long)arg8 isFolderShare:(_Bool)arg9 beingDeadInServerTruth:(_Bool)arg10 shouldPCSChainStatus:(unsigned char)arg11;
+ (id)targetReferenceWithItemID:(id)arg1 targetZone:(id)arg2 isFolderShare:(_Bool)arg3;
- (_Bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)targetDocument;
- (void)targetMovedToThisAppLibrary;
- (void)targetMovedToTrashOrDeleted;
- (void)_removeAliasAndMarkDead;
- (_Bool)updateOnDiskWithAliasTarget:(id)arg1 forServerEdit:(_Bool)arg2;
- (void)rewriteOrDeleteAliasOnDiskWithTarget:(id)arg1;
- (void)markLatestSyncRequestRejectedInZone:(id)arg1;
- (void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1;
- (void)markNeedsUploadOrSyncingUp;
- (_Bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (_Bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (_Bool)updateXattrInfoFromPath:(id)arg1 error:(id *)arg2;
- (void)learnTarget:(id)arg1;
@property(readonly, nonatomic) BRCItemID *targetItemID;
@property(readonly, nonatomic) BRCClientZone *targetClientZone;
@property(readonly, nonatomic) BRCAppLibrary *targetAppLibrary;
@property(readonly, nonatomic) BRCAliasItem *asBRAlias;
- (_Bool)isBRAlias;
- (id)structureRecordBeingDeadInServerTruth:(_Bool)arg1 stageID:(id)arg2 shouldPCSChainStatus:(unsigned char)arg3;

// Remaining properties
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory; // @dynamic asDirectory;
@property(readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;

@end

