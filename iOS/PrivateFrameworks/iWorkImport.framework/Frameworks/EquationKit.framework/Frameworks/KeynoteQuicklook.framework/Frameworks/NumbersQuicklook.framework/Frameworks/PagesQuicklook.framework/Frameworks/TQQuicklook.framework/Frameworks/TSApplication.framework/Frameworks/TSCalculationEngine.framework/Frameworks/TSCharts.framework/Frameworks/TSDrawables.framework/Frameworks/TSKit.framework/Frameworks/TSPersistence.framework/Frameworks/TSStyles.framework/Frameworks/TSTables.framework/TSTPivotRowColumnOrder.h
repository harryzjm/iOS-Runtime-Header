//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class TSTColumnRowUIDMap, TSTGroupBy, TSTTableInfo;

@interface TSTPivotRowColumnOrder : TSPObject
{
    _Bool _isRowOrderTemporary;
    _Bool _isColumnOrderTemporary;
    TSTTableInfo *_tableInfo;
    TSTColumnRowUIDMap *_uidMap;
    TSTGroupBy *_groupBy;
}

+ (void)initialGroupOrderForGroupBy:(id)arg1 baseLevel:(unsigned char)arg2 outAllUids:(void *)arg3 outBaseUids:(void *)arg4 outSummaryUids:(void *)arg5;
- (void).cxx_destruct;
@property(readonly) TSTGroupBy *groupBy; // @synthesize groupBy=_groupBy;
@property _Bool isColumnOrderTemporary; // @synthesize isColumnOrderTemporary=_isColumnOrderTemporary;
@property _Bool isRowOrderTemporary; // @synthesize isRowOrderTemporary=_isRowOrderTemporary;
@property(retain) TSTColumnRowUIDMap *uidMap; // @synthesize uidMap=_uidMap;
@property(nonatomic) __weak TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (id)columnRowUIDMap;
- (TSKUIDStructVectorTemplate_de88e035)groupUidsGivenUids:(const void *)arg1 selectedLevels:(const void *)arg2 forDimension:(long long)arg3;
- (void)removeUids:(const void *)arg1 forDimension:(long long)arg2;
- (void)insertUids:(const void *)arg1 beforeUid:(const struct TSKUIDStruct *)arg2 forDimension:(long long)arg3;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const void *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (const void *)setOrderUsingViewOrderForDimension:(long long)arg1;
- (void)setTemporaryOrder:(const void *)arg1 forDimension:(long long)arg2;
- (void)setOrder:(const void *)arg1 forDimension:(long long)arg2;
- (const void *)orderForDimension:(long long)arg1;
- (_Bool)hasValidUidMap;
- (_Bool)hasValidInfo;
- (id)sortedArrayFromArray:(id)arg1 forDimension:(long long)arg2;
- (unsigned char)minimumCategoryLevelInRange:(struct _NSRange)arg1 forDimension:(long long)arg2;
- (id)targetGroupFromIndex:(unsigned int)arg1 minSourceLevel:(unsigned char)arg2 templateUID:(struct TSKUIDStruct *)arg3 forDimension:(long long)arg4;
- (TSKUIDStructVectorTemplate_de88e035)orderedUidsForDimension:(long long)arg1;
- (TSKUIDStructVectorTemplate_de88e035)orderedUidsFromUids:(const void *)arg1 forDimension:(long long)arg2;
- (unsigned char)_maxLevel:(_Bool)arg1;
- (unsigned long long)_numberOfLevels:(_Bool)arg1;
- (id)_groupBy:(_Bool)arg1;
- (id)copyWithContext:(id)arg1 tableInfo:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithTableInfo:(id)arg1;
- (id)initWithTableInfo:(id)arg1 rowUids:(const void *)arg2 columnUids:(const void *)arg3;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2 rowUids:(const void *)arg3 columnUids:(const void *)arg4;

@end

