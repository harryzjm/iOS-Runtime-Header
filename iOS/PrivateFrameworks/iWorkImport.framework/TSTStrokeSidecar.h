//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSTCustomStrokeProviding-Protocol.h>

@class NSPointerArray, NSString;

__attribute__((visibility("hidden")))
@interface TSTStrokeSidecar <TSTCustomStrokeProviding>
{
    int _maxOrder;
    NSPointerArray *_leftColumnStrokes;
    NSPointerArray *_rightColumnStrokes;
    NSPointerArray *_topRowStrokes;
    NSPointerArray *_bottomRowStrokes;
}

@property(retain, nonatomic) NSPointerArray *bottomRowStrokes; // @synthesize bottomRowStrokes=_bottomRowStrokes;
@property(retain, nonatomic) NSPointerArray *topRowStrokes; // @synthesize topRowStrokes=_topRowStrokes;
@property(retain, nonatomic) NSPointerArray *rightColumnStrokes; // @synthesize rightColumnStrokes=_rightColumnStrokes;
@property(retain, nonatomic) NSPointerArray *leftColumnStrokes; // @synthesize leftColumnStrokes=_leftColumnStrokes;
@property(nonatomic) int maxOrder; // @synthesize maxOrder=_maxOrder;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)strokeLayerForBottomOfRow:(unsigned short)arg1;
- (id)strokeLayerForTopOfRow:(unsigned short)arg1;
- (id)strokeLayerForRightSideOfColumn:(unsigned char)arg1;
- (id)strokeLayerForLeftSideOfColumn:(unsigned char)arg1;
- (void)swapRowAtIndex:(unsigned short)arg1 withRowAtIndex:(unsigned short)arg2;
- (void)moveRowIndexRange:(struct _NSRange)arg1 toIndex:(unsigned short)arg2;
- (void)moveColumnIndexRange:(struct _NSRange)arg1 toIndex:(unsigned char)arg2;
- (void)removeRows:(struct _NSRange)arg1;
- (void)insertRows:(struct _NSRange)arg1;
- (void)removeColumns:(struct _NSRange)arg1;
- (void)insertColumns:(struct _NSRange)arg1;
- (void)enumerateStrokesInRegion:(id)arg1 usingTopStrokeBlock:(CDUnknownBlockType)arg2 usingBottomStrokeBlock:(CDUnknownBlockType)arg3 usingLeftStrokeBlock:(CDUnknownBlockType)arg4 usingRightStrokeBlock:(CDUnknownBlockType)arg5;
- (void)flattenStrokeOrder;
- (id)p_flattenMajorStrokeLayer:(id)arg1 minorStrokeLayer:(id)arg2;
- (void)setStroke:(id)arg1 forRightOfColumn:(unsigned char)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forLeftOfColumn:(unsigned char)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forBottomOfRow:(unsigned short)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange)arg4;
- (void)setStroke:(id)arg1 forTopOfRow:(unsigned short)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange)arg4;
- (void)setBordersWithCellMap:(id)arg1;
- (void)setCellBorder:(id)arg1 atCellID:(struct TSUCellCoord)arg2;
- (id)cellBorderAtCellID:(struct TSUCellCoord)arg1;
- (void)p_setBottomStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord)arg3;
- (void)p_setTopStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord)arg3;
- (void)p_setRightStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord)arg3;
- (void)p_setLeftStroke:(id)arg1 order:(int)arg2 atCellID:(struct TSUCellCoord)arg3;
- (void)p_setStroke:(id)arg1 order:(int)arg2 inStrokesArray:(id)arg3 atIndex:(unsigned short)arg4 atRange:(struct TSTSimpleRange)arg5;
- (id)initForUpgradeWithTableModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

