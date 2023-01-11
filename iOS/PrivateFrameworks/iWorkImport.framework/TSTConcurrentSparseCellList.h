//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface TSTConcurrentSparseCellList
{
    NSMutableIndexSet *_validCells;
}

@property(retain, nonatomic) NSMutableIndexSet *validCells; // @synthesize validCells=_validCells;
- (void).cxx_destruct;
- (void)p_pruneCellsAtColumn:(unsigned long long)arg1 rowsSize:(unsigned long long)arg2 columnsSize:(unsigned long long)arg3;
- (void)p_pruneCellsAtRow:(unsigned long long)arg1 rowsSize:(unsigned long long)arg2 columnsSize:(unsigned long long)arg3;
- (void)p_enumerateRowsOfCellsConcurrentlyUsingBlock:(CDUnknownBlockType)arg1;
- (void)p_accumulateCurrentCellsConcurrentlyUsingBlock:(CDUnknownBlockType)arg1;
- (void)p_invokeBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)cellCount;
- (_Bool)hasCells;
- (void)addCell:(id)arg1 atViewCellCoord:(struct TSUViewCellCoord)arg2;
- (id)initWithContext:(id)arg1 viewCellRect:(struct TSUViewCellRect)arg2 cellUIDRange:(UUIDRect_d701734b)arg3;

@end
