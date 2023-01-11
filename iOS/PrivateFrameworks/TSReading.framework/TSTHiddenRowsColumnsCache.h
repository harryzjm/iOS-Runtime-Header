//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class NSIndexSet, TSTHiddenDimensionCache;

@interface TSTHiddenRowsColumnsCache : NSObject <NSCopying>
{
    TSTHiddenDimensionCache *mHiddenRows;
    TSTHiddenDimensionCache *mHiddenColumns;
}

- (id)description;
- (void)validateChangeDescriptors:(id)arg1;
- (void)validate:(id)arg1;
- (void)pop;
- (void)swap;
- (void)push;
- (void)pushAndValidate:(id)arg1;
- (unsigned short)numberOfVisibleRowsFromHeader:(unsigned short)arg1;
@property(readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property(readonly, nonatomic) NSIndexSet *visibleRowIndices;
- (CDStruct_0441cfb5)visibleCellOffsetBy:(CDStruct_79c71658)arg1 fromCellID:(CDStruct_0441cfb5)arg2;
- (unsigned char)previousNthVisibleColumn:(unsigned short)arg1 fromColumnIndex:(unsigned char)arg2;
- (unsigned short)previousNthVisibleRow:(unsigned short)arg1 fromRowIndex:(unsigned short)arg2;
- (unsigned char)nextVisibleColumn:(unsigned char)arg1;
- (unsigned char)previousVisibleColumn:(unsigned char)arg1;
- (unsigned short)nextVisibleRow:(unsigned short)arg1;
- (unsigned short)previousVisibleRow:(unsigned short)arg1;
- (_Bool)anyColumnsHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)anyRowsUserHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)anyRowsHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (unsigned short)numberColumnsHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (unsigned short)numberRowsUserHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (unsigned short)numberRowsHiddenInCellRange:(CDStruct_5f1f7aa9)arg1;
- (_Bool)isColumnHidden:(unsigned char)arg1;
- (_Bool)isRowUserHidden:(unsigned short)arg1;
- (_Bool)isRowHidden:(unsigned short)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

