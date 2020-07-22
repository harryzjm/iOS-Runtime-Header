//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TSUHTMLTable : NSObject
{
    NSMutableDictionary *_columnAttributes;
    NSMutableDictionary *_rowClasses;
    NSMutableDictionary *_cellAttributes;
    NSMutableArray *_columnHeaders;
    NSMutableArray *_rows;
    unsigned long long _rowClassStride;
}

+ (id)_attributesStringFromAttributes:(id)arg1;
+ (id)_keyForCell:(unsigned long long)arg1:(unsigned long long)arg2;
+ (id)htmlTable;
@property(nonatomic) unsigned long long rowClassStride; // @synthesize rowClassStride=_rowClassStride;
- (void)deleteColumnWithTitle:(id)arg1;
- (unsigned long long)indexOfColumnWithTitle:(id)arg1;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setCellAttributes:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (void)setCellMarkup:(id)arg1 atRowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (void)setClass:(id)arg1 ofColumnIndex:(unsigned long long)arg2;
- (void)setColumnHeaders:(id)arg1;
- (void)setRowClass:(id)arg1 atRowIndex:(unsigned long long)arg2;
- (void)setColumnClasses:(id)arg1;
- (void)addRowWithCellText:(id)arg1;
- (void)addRowWithCellMarkup:(id)arg1;
- (id)markup;
@property(readonly, nonatomic) unsigned long long lastRowIndex;
@property(readonly, nonatomic) unsigned long long count;
- (void)dealloc;
- (id)init;

@end

