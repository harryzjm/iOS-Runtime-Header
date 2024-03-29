//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSTColumnRowUIDMap, TSTConcurrentSparseCellList;

@interface TSTTableModelCellModificationHelper : NSObject
{
    TSTConcurrentSparseCellList *_sparseCellList;
    unsigned long long _emptyCellCount;
    TSTColumnRowUIDMap *_columnRowUIDMap;
    struct TSUCellRect _sourceRect;
}

+ (id)perChunkHelperWithSourceRect:(struct TSUCellRect)arg1 columnRowUIDMap:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) TSTColumnRowUIDMap *columnRowUIDMap; // @synthesize columnRowUIDMap=_columnRowUIDMap;
@property(readonly, nonatomic) struct TSUCellRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) unsigned long long emptyCellCount; // @synthesize emptyCellCount=_emptyCellCount;
@property(readonly, nonatomic) TSTConcurrentSparseCellList *sparseCellList; // @synthesize sparseCellList=_sparseCellList;
- (void)prepareToAddCells;
@property(readonly, nonatomic) struct TSUCellCoord sourceRectOrigin;
- (id)initWithSourceRect:(struct TSUCellRect)arg1 columnRowUIDMap:(id)arg2;

@end

