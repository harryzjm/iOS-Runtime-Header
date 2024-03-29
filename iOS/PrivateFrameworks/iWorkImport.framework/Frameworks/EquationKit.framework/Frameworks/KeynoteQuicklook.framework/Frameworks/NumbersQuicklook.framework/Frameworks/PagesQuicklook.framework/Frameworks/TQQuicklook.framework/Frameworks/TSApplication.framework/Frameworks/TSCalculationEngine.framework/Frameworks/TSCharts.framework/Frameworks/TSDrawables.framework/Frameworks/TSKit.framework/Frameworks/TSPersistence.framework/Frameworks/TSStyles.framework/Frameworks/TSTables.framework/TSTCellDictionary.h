//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSPObjectContext, TSPTemporaryObjectContextDelegate;

@interface TSTCellDictionary : NSObject
{
    struct os_unfair_lock_s _lock[20];
    struct unordered_map<TSUCellCoord, TSTCell *, std::hash<TSUCellCoord>, std::equal_to<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, TSTCell *>>> _cellsByCoord[20];
    struct TSCECellCoordSet _cellCoordsToStyleUpgradeForFormulatext[20];
    struct os_unfair_lock_s _hasRichTextLock;
    _Bool _hasAnyRichTextCells;
    TSPTemporaryObjectContextDelegate *_temporaryObjectContextDelegate;
    TSPObjectContext *_temporaryContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSPObjectContext *temporaryContext; // @synthesize temporaryContext=_temporaryContext;
@property(readonly, nonatomic) TSPTemporaryObjectContextDelegate *temporaryObjectContextDelegate; // @synthesize temporaryObjectContextDelegate=_temporaryObjectContextDelegate;
@property(readonly, nonatomic) _Bool hasAnyRichTextCells; // @synthesize hasAnyRichTextCells=_hasAnyRichTextCells;
- (_Bool)noLockShouldUpgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord *)arg1;
- (_Bool)shouldUpgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord *)arg1;
- (void)upgradeStyleForFormulatextForCellCoord:(const struct TSUCellCoord *)arg1;
- (void)applyBlockToAllCells:(CDUnknownBlockType)arg1;
- (struct TSCECellCoordSet)allCellCoords;
- (id)concurrentCellMapForTable:(id)arg1;
- (id)cellMap;
- (void)removeAllCells;
- (_Bool)hasCellAtCellID:(struct TSUCellCoord)arg1;
- (id)cellAtCellID:(struct TSUCellCoord)arg1;
- (void)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (id)init;

@end

