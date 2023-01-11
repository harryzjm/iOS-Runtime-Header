//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSCalculationEngine/NSCopying-Protocol.h>
#import <TSCalculationEngine/TSCEFormulaReturning-Protocol.h>

@class NSString;

@interface TSCEFormulaObject : NSObject <NSCopying, TSCEFormulaReturning>
{
    struct TSCEASTNodeArray *_astNodeArray;
    struct TSCEFormulaTranslationFlags _translationFlags;
    unsigned long long _hash;
    UUIDData_5fbc143e _hostTableUID;
    UUIDData_5fbc143e _hostColumnUID;
    UUIDData_5fbc143e _hostRowUID;
}

+ (id)parseFormula:(id)arg1 calcEngine:(id)arg2 containingCell:(const struct TSCECellRef *)arg3 outError:(id *)arg4;
+ (id)parseFormula:(id)arg1 calcEngine:(id)arg2 unqualifiedReferenceTableUID:(const UUIDData_5fbc143e *)arg3 containingCell:(const struct TSUCellCoord *)arg4 outError:(id *)arg5 outNeedsImportRewrite:(_Bool *)arg6 isChartFormula:(_Bool)arg7 isSageUpgrade:(_Bool)arg8;
+ (struct TSCEValue)formulaResultForFormattedValue:(const struct TSCEValue *)arg1 context:(struct TSCEEvaluationContext *)arg2 suppressCycleCheck:(_Bool)arg3;
+ (struct TSCEValue)formulaResultForFormattedValueWithKnownCycleState:(const struct TSCEValue *)arg1 context:(struct TSCEEvaluationContext *)arg2 isInACycle:(_Bool)arg3 outErrorIsDueToCycle:(_Bool *)arg4;
- (id).cxx_construct;
@property(readonly, nonatomic) struct TSCEFormulaTranslationFlags translationFlags; // @synthesize translationFlags=_translationFlags;
@property(readonly, nonatomic) const UUIDData_5fbc143e *hostRowUID; // @synthesize hostRowUID=_hostRowUID;
@property(readonly, nonatomic) const UUIDData_5fbc143e *hostColumnUID; // @synthesize hostColumnUID=_hostColumnUID;
@property(readonly, nonatomic) const UUIDData_5fbc143e *hostTableUID; // @synthesize hostTableUID=_hostTableUID;
- (unsigned char)encodeToArchive:(struct FormulaArchive *)arg1 archiver:(id)arg2;
- (id)copyByRewritingGroupUid:(const UUIDData_5fbc143e *)arg1;
- (id)copyByOffsettingRelativeReferences:(struct TSUColumnRowOffset)arg1;
- (id)copyByOffsettingRelativeReferences:(id)arg1 oldContainingCell:(const struct TSCECellRef *)arg2 newContainingTable:(const UUIDData_5fbc143e *)arg3 offset:(struct TSUColumnRowOffset)arg4;
- (id)copyByRewritingNumberToDurationForSageImport:(const struct TSCECellRef *)arg1 durationUnitLargest:(int)arg2;
- (id)copyByRewritingForExcelExport:(struct TSCEEvaluationContext *)arg1;
- (id)copyByRemovingNumberToDateCoercion:(struct TSCEEvaluationContext *)arg1 outFormulaResult:(struct TSCEValue *)arg2 outDidModifyFormula:(_Bool *)arg3;
- (id)copyByRewritingForExcelImport:(struct TSCEEvaluationContext *)arg1 outFormulaResult:(struct TSCEValue *)arg2 outDidModifyFormula:(_Bool *)arg3 outFormulaReplacedForExcelCompatWarning:(_Bool *)arg4 functionNameReplacedForExcelCompat:(id *)arg5 formulaFormatFromCell:(unsigned int)arg6;
- (id)copyByRewritingForSageImport:(id)arg1 containingCell:(const struct TSCECellRef *)arg2;
- (id)copyByRewritingForSageExport:(struct TSCEEvaluationContext *)arg1 targetDocumentSupportsCrossTableReferences:(_Bool)arg2 outshouldBakeWholeFormula:(_Bool *)arg3 outFeaturesUsed:(char *)arg4;
- (id)copyByUpdatingLinkedTable:(const UUIDData_5fbc143e *)arg1 outfoundLinkedRef:(_Bool *)arg2;
- (id)copyByRemappingUids:(const UUIDMap_b66c2694 *)arg1 rowMap:(const UUIDMap_b66c2694 *)arg2 ownerMap:(const UUIDMap_b66c2694 *)arg3 clearIfMissing:(_Bool)arg4;
- (id)copyByForceSettingOwnerUIDs:(const UUIDData_5fbc143e *)arg1 calcEngine:(id)arg2;
- (id)copyByRemappingOwnerUIDs:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2 badRefFound:(_Bool *)arg3;
- (id)copyByRemappingHostCellAgnosticOwnerUIDs:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2 containingCell:(const struct TSCECellRef *)arg3 outError:(_Bool *)arg4;
- (id)copyByRemappingOwnerUIDs:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2 containingCell:(const struct TSCECellRef *)arg3 outBadRefFound:(_Bool *)arg4;
- (id)copyByMakingAllCategoryRefsIndirect:(id)arg1 containingCell:(const struct TSCEFormulaContainingCell *)arg2;
- (id)copyByClearingUids:(id)arg1 containingTableUID:(const UUIDData_5fbc143e *)arg2;
- (id)copyByConvertingColonToColonTract:(struct TSCEFormulaRewriteContext *)arg1;
- (id)copyByConvertingColonTractToColon:(struct TSCEFormulaRewriteContext *)arg1;
- (id)copyByConvertingColonTractToColon:(struct TSCEFormulaRewriteContext *)arg1 breakUpIntoRefs:(_Bool)arg2;
- (id)copyByThawingRefs:(id)arg1 containingCell:(const struct TSCEFormulaContainingCell *)arg2;
- (id)copyByFreezingRefs:(id)arg1 containingCell:(const struct TSCEFormulaContainingCell *)arg2;
- (id)copyByRepairingBadReferences:(struct TSCEFormulaRewriteContext *)arg1;
- (id)copyByRewritingReferencesToGeometricForm:(struct TSCEFormulaRewriteContext *)arg1;
- (id)copyByRewritingReferencesToUidForm:(struct TSCEFormulaRewriteContext *)arg1;
- (void)iterateWithBlock:(struct TSCEFormulaRewriteContext *)arg1 stop:(_Bool *)arg2 block:(CDUnknownBlockType)arg3;
- (id)copyByRewritingWithBlock:(struct TSCEFormulaRewriteContext *)arg1 rewriteBlock:(CDUnknownBlockType)arg2;
- (id)copyBySettingTranslationFlags:(struct TSCEFormulaTranslationFlags)arg1;
- (id)copyByClearingHostCell;
- (id)copyBySettingHostTableUID:(const UUIDData_5fbc143e *)arg1 hostColumnUID:(const UUIDData_5fbc143e *)arg2 hostRowUID:(const UUIDData_5fbc143e *)arg3;
- (id)copyByRewritingWithSpec:(id)arg1 calcEngine:(id)arg2 containingCell:(const struct TSCEFormulaContainingCell *)arg3;
- (id)copyByRewritingForTranspose:(id)arg1 calcEngine:(id)arg2 containingCell:(const struct TSCEFormulaContainingCell *)arg3 outTransposeWarning:(_Bool *)arg4;
- (id)sageFormulaStringForContainingCell:(const struct TSCECellRef *)arg1 outHasSageUnsupportedFunctions:(_Bool *)arg2;
- (id)hostedDescriptionAtCell:(const struct TSCECellRef *)arg1;
- (id)hostedDescriptionAtCell:(const struct TSCECellRef *)arg1 hideUids:(_Bool)arg2;
@property(readonly, copy) NSString *description;
- (id)descriptionForLevel:(int)arg1;
- (vector_2431c21e)getCategoryReferencesWithCalcEngine:(id)arg1;
- (void)getPrecedents:(struct TSCEReferenceSet *)arg1 calcEngine:(id)arg2 hostCell:(const struct TSCECellRef *)arg3 doImplicitIntersection:(_Bool)arg4 returnUidReferences:(_Bool)arg5;
- (_Bool)isEquivalentToFormula:(id)arg1;
- (_Bool)isEquivalentToFormula:(id)arg1 context:(unsigned long long)arg2 thisContainingCell:(struct TSCECellRef *)arg3 thatContainingCell:(struct TSCECellRef *)arg4;
- (_Bool)isEqualToFormula:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (struct TSCEValue)evaluateWithContextVectorResult:(struct TSCEEvaluationContext *)arg1;
- (struct TSCEValue)evaluateWithContext:(struct TSCEEvaluationContext *)arg1;
- (struct TSCEValue)evaluateWithContext:(struct TSCEEvaluationContext *)arg1 isInACycle:(_Bool)arg2 outErrorIsDueToCycle:(_Bool *)arg3;
- (struct TSCEASTNodeArray *)astNodeArrayCopy;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool hasUidTracts;
@property(readonly) _Bool usesFunctionsWithDateArgs;
- (void)appendExternalTableUIDs:(unordered_set_c6a929bd *)arg1 groupByUIDs:(unordered_set_c6a929bd *)arg2;
@property(readonly) _Bool hasBadRefWithUidInfo;
@property(readonly) _Bool containsUidReferences;
@property(readonly) _Bool containsInvalidRef;
@property(readonly) _Bool hasHostCell;
@property(readonly) _Bool isEmpty;
- (id)initWithArchive:(const struct FormulaArchive *)arg1 isPreUFF:(_Bool)arg2;
- (id)initWithCreator:(struct TSCEFormulaCreator)arg1;
- (id)initWithCreator:(struct TSCEFormulaCreator)arg1 translationFlags:(struct TSCEFormulaTranslationFlags)arg2;
- (id)initWithCreator:(struct TSCEFormulaCreator)arg1 argInfo:(struct TSCEASTNodeArgInfo *)arg2 translationFlags:(struct TSCEFormulaTranslationFlags)arg3;
- (id)initWithNodeArray:(const struct TSCEASTNodeArray *)arg1;
- (id)initWithNodeArray:(const struct TSCEASTNodeArray *)arg1 translationFlags:(struct TSCEFormulaTranslationFlags)arg2;
- (const struct TSCEASTNodeArray *)const_astNodeArray;
@property(readonly, nonatomic) TSCEFormulaObject *formulaObject;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
