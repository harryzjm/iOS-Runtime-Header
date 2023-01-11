//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString;

@interface SBIconListGridCellInfo : NSObject <NSCopying, BSDescriptionProviding>
{
    unsigned short _indexes[128];
    unsigned short *_extraGridCellIndexes;
    unsigned long long _extraGridCellIndexesSize;
    unsigned short *_extraIconIndexes;
    unsigned long long _extraIconIndexesSize;
    struct SBHIconGridSize _gridSize;
    unsigned long long _numberOfUsedRows;
    unsigned long long _numberOfUsedColumns;
}

@property(nonatomic) unsigned long long numberOfUsedColumns; // @synthesize numberOfUsedColumns=_numberOfUsedColumns;
@property(nonatomic) unsigned long long numberOfUsedRows; // @synthesize numberOfUsedRows=_numberOfUsedRows;
@property(nonatomic) struct SBHIconGridSize gridSize; // @synthesize gridSize=_gridSize;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *layoutDescription;
- (void)addEmptyRows:(unsigned long long)arg1;
- (void)addEmptyColumns:(unsigned long long)arg1;
- (_Bool)isOutOfBoundsAtIconIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfOutOfBoundsIconInRange:(struct _NSRange)arg1;
@property(readonly, nonatomic, getter=isLayoutOutOfBounds) _Bool layoutOutOfBounds;
- (struct SBHIconGridRange)gridRangeForGridCellIndex:(unsigned long long)arg1;
- (struct SBHIconGridSize)gridSizeForGridCellIndex:(unsigned long long)arg1;
- (unsigned long long)maxGridCellIndexForIconIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfUsedGridCellsInColumn:(unsigned long long)arg1 rowRange:(struct _NSRange)arg2;
- (unsigned long long)numberOfUsedGridCellsInColumn:(unsigned long long)arg1;
- (unsigned long long)numberOfUsedGridCellsInRow:(unsigned long long)arg1 columnRange:(struct _NSRange)arg2;
- (unsigned long long)numberOfUsedGridCellsInRow:(unsigned long long)arg1;
- (unsigned long long)gridCellIndexForCoordinate:(struct SBIconCoordinate)arg1;
- (struct SBIconCoordinate)coordinateForGridCellIndex:(unsigned long long)arg1;
- (void)clearAllIconAndGridCellIndexes;
- (void)setIconIndex:(unsigned long long)arg1 forGridCellIndex:(unsigned long long)arg2;
- (unsigned long long)iconIndexForGridCellIndex:(unsigned long long)arg1;
- (void)setGridCellIndex:(unsigned long long)arg1 forIconIndex:(unsigned long long)arg2;
- (unsigned long long)gridCellIndexForIconIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
