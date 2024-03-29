//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPContainedObject.h>

@class NSIndexSet, NSMutableIndexSet, TSTTableTileGroup;

@interface TSTTableTileStorage : TSPContainedObject
{
    NSMutableIndexSet *_tileIDSet;
    TSTTableTileGroup *_tileGroups[16];
    unsigned long long _archivingCompatibilityVersion;
    _Bool _upgradeRepairedTiles;
    _Bool _shouldUseWideRows;
}

+ (id)_sharedQueue;
+ (unsigned int)tileSize;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUseWideRows; // @synthesize shouldUseWideRows=_shouldUseWideRows;
@property(readonly, nonatomic) _Bool upgradeRepairedTiles; // @synthesize upgradeRepairedTiles=_upgradeRepairedTiles;
- (void)prepareToApplyConcurrentCellMap:(id)arg1;
- (multimap_46d3afcc)makeStorageMap;
- (void)widenTilesForUpgrade;
- (void)reset;
- (_Bool)auditTilesForRowOverlapAndExtensionPastTableBounds:(struct TSUCellCoord)arg1 withDataStore:(id)arg2 result:(id *)arg3;
- (_Bool)auditRowInfoCellCountsReturningResult:(id *)arg1;
@property(readonly, nonatomic) _Bool needToUpgradeCellStorage;
- (void)pruneTilesForRows:(id)arg1;
- (void)pruneTileForRowIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int lastPopulatedRowIndex;
@property(readonly, nonatomic) NSIndexSet *populatedRows;
@property(readonly, nonatomic) NSIndexSet *populatedTiles;
- (void)moveColumnIndexRange:(struct _NSRange)arg1 toIndex:(unsigned short)arg2;
- (id)removeColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (void)insertColumnsAtIndex:(unsigned short)arg1 count:(unsigned int)arg2;
- (id)columnCellCountsOfRowsInRange:(struct _NSRange)arg1;
- (void)moveRowIndexRange:(struct _NSRange)arg1 toIndex:(unsigned int)arg2;
- (void)swapRowAtIndex:(unsigned int)arg1 withRowAtIndex:(unsigned int)arg2;
- (void)removeRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)insertRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (id)tileStartingAtOrAfterRowIndex:(unsigned int)arg1 outTileRange:(struct _NSRange *)arg2;
- (id)tileStartingAtOrBeforeRowIndex:(unsigned int)arg1 outTileRange:(struct _NSRange *)arg2;
- (id)tileForWritingAtRowIndex:(unsigned int)arg1 outTileRange:(struct _NSRange *)arg2;
- (id)rowInfoAtIndex:(unsigned int)arg1;
- (void)enumerateRowByRowInRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowsInRange:(struct _NSRange)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateTilesConcurrentlyUsingBlock:(CDUnknownBlockType)arg1;
- (void)loadAllLazyReferences;
- (void)_spliceRows:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_yankRowRange:(struct _NSRange)arg1;
- (void)_removeRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_insertRowsAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_shiftRowsDownAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_shiftRowsUpAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_clearContentAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_enumerateLoadedTiles:(CDUnknownBlockType)arg1;
- (void)_enumerateTiles:(CDUnknownBlockType)arg1;
- (void)_enumerateGroups:(CDUnknownBlockType)arg1;
- (void)_removeTileForID:(unsigned long long)arg1;
- (id)_createTileWithID:(unsigned long long)arg1;
- (void)_setTile:(id)arg1 forID:(unsigned long long)arg2;
- (id)_tileForID:(unsigned long long)arg1 createIfMissing:(_Bool)arg2;
- (id)_tileFromGroupForTileID:(unsigned long long)arg1;
- (id)_groupForTileID:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long nextTileID;
@property(readonly, nonatomic) unsigned long long archivingCompatibilityVersion; // @synthesize archivingCompatibilityVersion=_archivingCompatibilityVersion;
@property(readonly, nonatomic) _Bool isEmbiggened; // @dynamic isEmbiggened;
- (void)saveToStorageArchive:(void *)arg1 treeArchive:(void *)arg2 archiver:(id)arg3;
- (void)_upgradeFromTileIDMap:(void *)arg1 referenceMap:(void *)arg2;
- (id)initWithStorageArchive:(const void *)arg1 treeArchive:(const void *)arg2 nextTileID:(unsigned long long)arg3 unarchiver:(id)arg4 owner:(id)arg5;
- (id)initWithOwner:(id)arg1;

@end

