//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

@class NSArray, NSMutableArray;
@protocol TSCHNotifyOnModify;

__attribute__((visibility("hidden")))
@interface TSCHChartGrid : NSObject <NSCopying, TSDMixing>
{
    id <TSCHNotifyOnModify> mModifyDelegate;
    int mDirection;
    NSMutableArray *mRowNames;
    NSMutableArray *mColumnNames;
    NSMutableArray *mValues;
    _Bool mDirty;
    _Bool mAddingMultipleRows;
    unsigned long long mNextRowNumber;
    _Bool mAddingMultipleCols;
    unsigned long long mNextColNumber;
    NSMutableArray *mRowIds;
    NSMutableArray *mColumnIds;
    unsigned long long mTransitionLevel;
    _Bool mSkipUUIDAssertions;
}

@property(readonly, copy, nonatomic) NSArray *columnIds; // @synthesize columnIds=mColumnIds;
@property(readonly, copy, nonatomic) NSArray *rowIds; // @synthesize rowIds=mRowIds;
@property(nonatomic) id <TSCHNotifyOnModify> objectToNotify; // @synthesize objectToNotify=mModifyDelegate;
@property(nonatomic) _Bool dirty; // @synthesize dirty=mDirty;
@property(nonatomic) int direction; // @synthesize direction=mDirection;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)gridAdapterForColumnConstant;
- (id)gridAdapterForRowConstant;
- (id)gridAdapterForColumnCount;
- (id)gridAdapterForRowCount;
- (id)gridAdapterForColumn:(unsigned long long)arg1;
- (id)gridAdapterForRow:(unsigned long long)arg1;
- (void)takeDataFromDictionary:(id)arg1 rowIds:(id)arg2 columnIds:(id)arg3;
- (void)takeDataFromDictionary:(id)arg1;
- (void)insertColumnNames:(id)arg1 at:(unsigned long long)arg2 withIds:(id)arg3;
- (void)insertRowsNames:(id)arg1 at:(unsigned long long)arg2 withIds:(id)arg3;
- (void)insertColumnsAt:(unsigned long long)arg1 names:(id)arg2 data:(id)arg3 withIds:(id)arg4;
- (void)insertRowsAt:(unsigned long long)arg1 names:(id)arg2 data:(id)arg3 withIds:(id)arg4;
- (id)extractGridValuesReturningRowNames:(id *)arg1 rowIds:(id *)arg2 columnNames:(id *)arg3 columnIds:(id *)arg4;
- (id)extractColumnNames:(struct _NSRange)arg1 returningColumnIds:(id *)arg2 valueColumns:(id *)arg3;
- (id)extractRowNames:(struct _NSRange)arg1 returningRowIds:(id *)arg2 valueRows:(id *)arg3;
- (void)moveColumns:(struct _NSRange)arg1 afterColumn:(long long)arg2;
- (void)moveRows:(struct _NSRange)arg1 afterRow:(long long)arg2;
- (void)setValue:(id)arg1 forRow:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (void)removeColumn:(unsigned long long)arg1;
- (void)removeRow:(unsigned long long)arg1;
- (void)setNameForColumn:(unsigned long long)arg1 toName:(id)arg2;
- (void)setNameForRow:(unsigned long long)arg1 toName:(id)arg2;
- (void)insertColumn:(unsigned long long)arg1 withName:(id)arg2 withId:(id)arg3;
- (void)insertRow:(unsigned long long)arg1 withName:(id)arg2 withId:(id)arg3;
- (void)setColumnIds:(id)arg1;
- (void)setRowIds:(id)arg1;
- (id)p_uuidsForColumns:(struct _NSRange)arg1;
- (id)p_uuidsForRows:(struct _NSRange)arg1;
- (id)createUUIDArrayWithCount:(unsigned long long)arg1;
- (id)createUUID;
- (void)validateRowColumnIdMapsAndFix:(_Bool)arg1;
- (void)generateRowColumnIdMaps;
- (void)adjustRowAndColumnNameListLength;
- (void)p_adjustNameListLength:(_Bool)arg1;
- (id)getNewRowNameForLocale:(id)arg1;
- (id)getNewColumnNameForLocale:(id)arg1;
- (void)addingMultipleCols:(_Bool)arg1;
- (void)addingMultipleRows:(_Bool)arg1;
- (_Bool)p_name:(id)arg1 isInArray:(id)arg2;
- (id)description;
- (unsigned long long)columnIndexForColumnId:(id)arg1;
- (unsigned long long)rowIndexForRowId:(id)arg1;
- (id)columnIdForColumn:(unsigned long long)arg1;
- (id)rowIdForRow:(unsigned long long)arg1;
- (id *)valuesForRows:(struct _NSRange)arg1 column:(unsigned long long)arg2;
- (id *)valuesForRow:(unsigned long long)arg1 columns:(struct _NSRange)arg2;
- (id)valueForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)nameForColumn:(unsigned long long)arg1;
- (id)nameForRow:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfColumns;
@property(readonly, nonatomic) unsigned long long numberOfRows;
- (unsigned long long)noAssertNumberOfColumns;
- (unsigned long long)noAssertNumberOfRows;
- (void)decrementTransitionLevel;
- (void)incrementTransitionLevel;
- (_Bool)contentsEqualToGrid:(id)arg1;
- (void)willModify;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)loadFromPreUFFArchive:(const struct ChartGridArchive *)arg1;
- (void)insertColumn:(unsigned long long)arg1 withName:(id)arg2;
- (void)insertRow:(unsigned long long)arg1 withName:(id)arg2;
- (void)saveToUnityArchive:(struct ChartArchive *)arg1 forCopy:(_Bool)arg2;
- (void)loadFromUnityArchive:(const struct ChartArchive *)arg1 chartInfo:(id)arg2;

@end

