//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TSTCellRegion;

@interface TSTLayoutDynamicResizeInfo : NSObject
{
    struct vector<double, std::allocator<double>> _capturedRowHeights;
    struct vector<double, std::allocator<double>> _currentRowHeights;
    struct vector<double, std::allocator<double>> _minimumRowHeights;
    struct vector<double, std::allocator<double>> _capturedColumnWidths;
    struct vector<double, std::allocator<double>> _currentColumnWidths;
    struct vector<double, std::allocator<double>> _minimumColumnWidths;
    _Bool _valid;
    unsigned short _startColumnIndex;
    int _tableRowsBehavior;
    unsigned int _startRowIndex;
    unsigned int _numberOfRows;
    unsigned int _numberOfResizableRows;
    unsigned int _numberOfColumns;
    unsigned int _numberOfResizableColumns;
    double _capturedRowHeightTotal;
    double _capturedColumnWidthTotal;
    TSTCellRegion *_rowRegion;
    TSTCellRegion *_columnRegion;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) TSTCellRegion *columnRegion; // @synthesize columnRegion=_columnRegion;
@property(retain, nonatomic) TSTCellRegion *rowRegion; // @synthesize rowRegion=_rowRegion;
@property(readonly, nonatomic) double capturedColumnWidthTotal; // @synthesize capturedColumnWidthTotal=_capturedColumnWidthTotal;
@property(readonly, nonatomic) unsigned int numberOfResizableColumns; // @synthesize numberOfResizableColumns=_numberOfResizableColumns;
@property(readonly, nonatomic) unsigned int numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(readonly, nonatomic) unsigned short startColumnIndex; // @synthesize startColumnIndex=_startColumnIndex;
@property(readonly, nonatomic) double capturedRowHeightTotal; // @synthesize capturedRowHeightTotal=_capturedRowHeightTotal;
@property(readonly, nonatomic) unsigned int numberOfResizableRows; // @synthesize numberOfResizableRows=_numberOfResizableRows;
@property(readonly, nonatomic) unsigned int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(readonly, nonatomic) unsigned int startRowIndex; // @synthesize startRowIndex=_startRowIndex;
@property(readonly, nonatomic) int tableRowsBehavior; // @synthesize tableRowsBehavior=_tableRowsBehavior;
@property(readonly, nonatomic) _Bool valid; // @synthesize valid=_valid;
- (double)totalMinimumColumnWidths;
- (double)totalMinimumRowHeights;
- (double)totalCurrentColumnWidths;
- (double)totalCurrentRowHeights;
- (double)totalCapturedColumnWidths;
- (double)totalCapturedRowHeights;
- (id)columnWidths;
- (id)rowHeights;
- (void)enumerateRowHeightsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateColumnWidthsUsingBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)capturedTableSize;
- (void)captureNewMinimumRowHeights:(id)arg1;
- (double)applyColumnTotalWidth:(double)arg1;
- (double)applyRowTotalHeight:(double)arg1;
- (double)applyResizeWidthFactor:(double)arg1;
- (double)applyResizeHeightFactor:(double)arg1;
- (double)getMinimumColumnWidth:(unsigned short)arg1;
- (double)getMinimumRowHeight:(unsigned int)arg1;
- (double)getColumnWidthResize:(unsigned short)arg1;
- (double)getRowHeightResize:(unsigned int)arg1;
- (double)getColumnWidth:(unsigned short)arg1;
- (double)getRowHeight:(unsigned int)arg1;
- (double)getColumnInitialWidth:(unsigned short)arg1;
- (double)getRowInitialHeight:(unsigned int)arg1;
- (_Bool)hasWidthForColumn:(unsigned short)arg1;
- (_Bool)hasHeightForRow:(unsigned int)arg1;
- (void)invalidate;
- (void)p_captureRowColumnInformation:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3;
- (id)initWithDynamicResizeInfo:(id)arg1;
- (id)initWithLayoutEngine:(id)arg1 rowRegion:(id)arg2;
- (id)initWithLayoutEngine:(id)arg1 columnRegion:(id)arg2;
- (id)initWithLayoutEngine:(id)arg1;
- (id)initWithLayoutEngine:(id)arg1 columnRegion:(id)arg2 rowRegion:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

