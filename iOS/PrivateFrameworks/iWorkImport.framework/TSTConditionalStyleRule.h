//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSTCellStyle, TSTFormulaPredicate, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTConditionalStyleRule : NSObject <NSCopying>
{
    TSTFormulaPredicate *mPredicate;
    TSWPParagraphStyle *mTextStyle;
    TSTCellStyle *mCellStyle;
    int mPredicateType;
}

+ (id)conditionalStyleRuleWithRule:(id)arg1;
@property(readonly, nonatomic) int predicateType; // @synthesize predicateType=mPredicateType;
- (_Bool)hasBadRefWithUidInfo;
- (_Bool)containsUidReferences;
- (void)setHostCell:(const UUIDData_5fbc143e *)arg1 hostColumnUID:(const UUIDData_5fbc143e *)arg2 hostRowUID:(const UUIDData_5fbc143e *)arg3;
- (id)copyByClearingUids:(id)arg1 containingTableUID:(const UUIDData_5fbc143e *)arg2;
- (id)copyByRepairingBadReferences:(id)arg1;
- (id)copyToGeometricFormWithRewriteContext:(id)arg1;
- (id)copyToUidFormForTableInfo:(id)arg1 inCellCoordinate:(struct TSUCellCoord)arg2 preserveHostCell:(_Bool)arg3;
- (id)copyByUpdatingHostCellRef:(const struct TSCECellRef *)arg1;
- (id)copyByUpgradingToLinkedRefAtHostCellRef:(const struct TSCECellRef *)arg1;
- (id)copyByOffsettingRelativeReferencesWithColumnOffset:(short)arg1 rowOffset:(int)arg2;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord)arg3;
- (id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(const UUIDMap_727ee07e *)arg1 calcEngine:(id)arg2 ownerUID:(const UUIDData_5fbc143e *)arg3 error:(_Bool *)arg4;
- (id)copyByRemappingOwnerUIDsWithMap:(const UUIDMap_727ee07e *)arg1 calcEngine:(id)arg2 error:(_Bool *)arg3;
- (id)description;
- (_Bool)evaluateFormulaAtCellID:(struct TSUCellCoord)arg1 withCalcEngine:(id)arg2 withFormulaTableUID:(const UUIDData_5fbc143e *)arg3;
@property(readonly, nonatomic) struct TSCEFormula *formula;
@property(readonly, copy, nonatomic) TSTFormulaPredicate *predicate;
@property(readonly, copy, nonatomic) TSWPParagraphStyle *textStyle;
@property(readonly, copy, nonatomic) TSTCellStyle *cellStyle;
- (_Bool)isEqualForInspector:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithPredicate:(id)arg1 cellStyle:(id)arg2 textStyle:(id)arg3;

@end

