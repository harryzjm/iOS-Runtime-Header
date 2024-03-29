//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class TSTColumnRowUIDMap, TSTTableInfo;

@interface TSTCategoryOrder : TSPObject
{
    _Bool _isRowOrderTemporary;
    TSTTableInfo *_tableInfo;
    TSTColumnRowUIDMap *_uidMap;
}

- (void).cxx_destruct;
@property _Bool isRowOrderTemporary; // @synthesize isRowOrderTemporary=_isRowOrderTemporary;
@property(retain) TSTColumnRowUIDMap *uidMap; // @synthesize uidMap=_uidMap;
@property(readonly) __weak TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (id)columnRowUIDMap;
- (TSKUIDStructVectorTemplate_de88e035)groupUidsGivenRowUids:(const void *)arg1 selectedLevels:(const void *)arg2;
- (void)removeRowUids:(const void *)arg1;
- (void)insertRowUids:(const void *)arg1 beforeUid:(const struct TSKUIDStruct *)arg2;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const void *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (TSKUIDStructVectorTemplate_de88e035)setRowOrderUsingViewOrder;
- (void)setTemporaryRowOrder:(const void *)arg1;
- (void)setRowOrder:(const void *)arg1;
- (TSKUIDStructVectorTemplate_de88e035)rowOrder;
- (_Bool)hasValidUidMap;
- (_Bool)hasValidInfo;
- (id)sortedArrayFromArray:(id)arg1;
- (unsigned char)minimumCategoryLevelInRowRange:(struct _NSRange)arg1;
- (id)targetGroupFromRowIndex:(unsigned int)arg1 minSourceLevel:(unsigned char)arg2 templateRowUID:(struct TSKUIDStruct *)arg3;
- (TSKUIDStructVectorTemplate_de88e035)orderedRowUidsWithLabels;
- (TSKUIDStructVectorTemplate_de88e035)orderedRowUidsFromUids:(const void *)arg1;
- (id)copyWithContext:(id)arg1 tableInfo:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithTableInfo:(id)arg1;
- (id)initWithTableInfo:(id)arg1 rowUids:(const void *)arg2;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2 rowUids:(const void *)arg3;

@end

