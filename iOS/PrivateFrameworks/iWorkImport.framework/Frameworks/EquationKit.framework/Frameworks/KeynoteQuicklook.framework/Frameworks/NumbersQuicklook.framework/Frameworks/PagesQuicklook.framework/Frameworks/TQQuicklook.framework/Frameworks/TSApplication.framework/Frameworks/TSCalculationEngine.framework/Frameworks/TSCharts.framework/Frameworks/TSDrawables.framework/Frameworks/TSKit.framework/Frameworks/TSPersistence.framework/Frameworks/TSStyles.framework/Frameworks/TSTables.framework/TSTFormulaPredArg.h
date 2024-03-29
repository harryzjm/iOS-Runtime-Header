//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableSet, NSNumber, NSString, TSCECategoryRef, TSCEUndoTractList, TSCEViewTractRef, TSTFormulaPredArgData, TSTUIDRectRef;

@interface TSTFormulaPredArg : NSObject
{
    TSCECategoryRef *_categoryRef;
    TSCEViewTractRef *_viewTractRef;
    struct TSUModelCellCoord _hostCellCoord;
    RefTypeHolder_cdce8eef _baseCellRef;
    TSTFormulaPredArgData *_data;
    NSArray *_dataList;
    TSCEUndoTractList *_uidTractList;
    struct TSCERelativeCellRef _relativeCellRef;
    _Bool _hasRelativeCellRef;
    unsigned char _type;
    struct TSUPreserveFlags _preserveFlags;
    NSMutableSet *_listItemsSet;
}

+ (id)defaultPredicateArg;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct TSUModelCellCoord hostCellCoord; // @synthesize hostCellCoord=_hostCellCoord;
@property(readonly, nonatomic) _Bool hasRelativeCellRef; // @synthesize hasRelativeCellRef=_hasRelativeCellRef;
@property(readonly, nonatomic) TSTFormulaPredArgData *data; // @synthesize data=_data;
@property(readonly, nonatomic) unsigned char type; // @synthesize type=_type;
@property(retain, nonatomic) TSCEUndoTractList *uidTractList; // @synthesize uidTractList=_uidTractList;
- (struct TSCEFormulaCreator)formulaCreatorForPredArg0UsingLinkedRef:(_Bool)arg1 useColumnRef:(_Bool)arg2;
- (struct TSCEFormulaCreator)formulaCreatorForPredArg;
- (id)rewriteWithContext:(struct TSCEFormulaRewriteContext *)arg1 forArgAt:(long long)arg2 usingLinkedRef:(_Bool)arg3 useColumnRef:(_Bool)arg4 hostCellRef:(struct TSCEUidCellRef *)arg5 rewriteBlock:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) _Bool needsFormulaRewriting;
- (id)description;
- (_Bool)isEqual:(id)arg1 atHostCoord:(struct TSUModelCellCoord)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned char durationUnits;
@property(readonly) struct TSCENumberValue duration;
@property(nonatomic) double durationValue;
- (id)initWithDuration:(double)arg1 units:(unsigned char)arg2;
- (void)setBaseCellReference:(id)arg1 preserveColumn:(_Bool)arg2 preserveRow:(_Bool)arg3;
- (void)setBaseCellReference:(id)arg1;
- (id)cellReference;
- (id)initWithBaseCellReference:(id)arg1 preserveColumn:(_Bool)arg2 preserveRow:(_Bool)arg3;
- (void)setBaseCellRef:(const void *)arg1 preserveColumn:(_Bool)arg2 preserveRow:(_Bool)arg3;
- (void)setBaseCellRef:(const void *)arg1 preserveFlags:(const struct TSUPreserveFlags *)arg2;
- (void)setBaseCellRef:(const void *)arg1;
- (id)convertToRelativeRefIfPossible;
- (struct TSCECellRef)cellRefForHostCoord:(struct TSUModelCellCoord)arg1;
- (const void *)baseCellRef;
- (id)initWithBaseCellRef:(const void *)arg1 preserveFlags:(const struct TSUPreserveFlags *)arg2;
- (id)initWithTableUID:(const struct TSKUIDStruct *)arg1 uidTractList:(id)arg2;
- (id)initAsBadRefWithTableUID:(const struct TSKUIDStruct *)arg1 uidTractList:(id)arg2;
@property(retain, nonatomic) TSCEViewTractRef *viewTractRef;
@property(readonly, nonatomic) _Bool hasViewTractRef;
- (id)initWithViewTractRef:(id)arg1;
@property(retain, nonatomic) TSCECategoryRef *categoryRef;
@property(readonly, nonatomic) _Bool hasCategoryRef;
- (id)initWithCategoryRef:(id)arg1;
@property(readonly, nonatomic) TSTUIDRectRef *uidRectRef;
- (struct TSCECrossTableReference)crossTableRef;
- (id)initWithCrossTableRef:(const struct TSCECrossTableReference *)arg1;
- (void)setRelativeCellRef:(const struct TSCERelativeCellRef *)arg1;
- (const struct TSCERelativeCellRef *)relativeCellRef;
- (id)initWithRelativeCellRef:(const struct TSCERelativeCellRef *)arg1;
- (_Bool)isCellValueInList:(id)arg1;
- (_Bool)isBoolValueInList:(_Bool)arg1;
- (_Bool)isDurationValueInList:(double)arg1;
- (_Bool)isNumberValueInList:(const struct TSUDecimal *)arg1 locale:(id)arg2;
- (_Bool)isDateValueInListYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (_Bool)isStringValueInList:(id)arg1;
@property(readonly, nonatomic) NSArray *dataList;
- (id)initWithDataList:(id)arg1;
@property(copy, nonatomic) NSString *string;
- (id)initWithString:(id)arg1;
@property(retain, nonatomic) NSDate *date;
@property(readonly, nonatomic) _Bool preserveColumn;
@property(readonly, nonatomic) _Bool preserveRow;
@property(nonatomic) struct TSUPreserveFlags preserveFlags;
- (id)initWithDate:(id)arg1;
@property(nonatomic) double numberValue;
@property(retain, nonatomic) NSNumber *number;
- (id)initWithNumber:(id)arg1;
- (id)initWithDouble:(double)arg1;
@property(nonatomic) _Bool boolValue;
- (id)initWithBool:(_Bool)arg1;
- (void)encodeToArchive:(void *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const void *)arg1;
- (id)init;

@end

