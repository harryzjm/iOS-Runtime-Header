//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class NSArray, NSMutableArray;

@interface TSTConditionalStyleSet : TSPObject
{
    NSMutableArray *_conditionalStyleSetRules;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *currentRules; // @synthesize currentRules=_conditionalStyleSetRules;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned long long)ruleCount;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (id)rules;
- (id)rulesDescription;
- (id)description;
- (_Bool)isEqualForInspector:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)precedentsWithCalcEngine:(id)arg1 hostOwnerUID:(const struct TSKUIDStruct *)arg2 hostCellID:(const struct TSUCellCoord *)arg3;
- (_Bool)hasBadRefWithUidInfo;
- (_Bool)containsUidReferences;
- (id)copyByRepairingBadReferences:(struct TSCEFormulaRewriteContext *)arg1 clearUidHistory:(_Bool)arg2;
- (id)copyToGeometricFormWithRewriteContext:(struct TSCEFormulaRewriteContext *)arg1;
- (id)copyToUidFormForTableInfo:(id)arg1 inCellCoordinate:(struct TSUCellCoord)arg2 preserveHostCell:(_Bool)arg3;
- (id)copyToUidFormForTableInfo:(id)arg1 inCellCoordinate:(struct TSUCellCoord)arg2;
- (void)setHostCell:(const struct TSKUIDStruct *)arg1 hostColumnUID:(const struct TSKUIDStruct *)arg2 hostRowUID:(const struct TSKUIDStruct *)arg3;
- (id)copyByClearingUids:(id)arg1 containingTableUID:(const struct TSKUIDStruct *)arg2;
- (id)copyByConvertingToRelativeAncestorsWithRewriteContext:(struct TSCEFormulaRewriteContext *)arg1;
- (id)copyByResolvingRelativeAncestorsWithRewriteContext:(struct TSCEFormulaRewriteContext *)arg1;
- (id)copyByReparenting:(id)arg1 groupByUID:(const struct TSKUIDStruct *)arg2 rewriteContext:(struct TSCEFormulaRewriteContext *)arg3;
- (void)iterateFormulasWithContext:(struct TSCEFormulaRewriteContext *)arg1 block:(CDUnknownBlockType)arg2;
- (id)copyByRewritingWithContext:(struct TSCEFormulaRewriteContext *)arg1 rewriteBlock:(CDUnknownBlockType)arg2;
- (id)copyByUpdatingHostCellRef:(const struct TSCECellRef *)arg1;
- (id)copyByUpgradingToLinkedRefAtHostCellRef:(const struct TSCECellRef *)arg1;
- (id)copyByOffsettingRelativeReferencesWithOffset:(struct TSUColumnRowOffset)arg1;
- (id)copyByRewritingWithSpec:(id)arg1 inOwner:(id)arg2 inCellCoordinate:(struct TSUCellCoord)arg3;
- (id)copyByRemappingHostCellAgnosticOwnerUIDsWithMap:(const void *)arg1 rewriteContext:(struct TSCEFormulaRewriteContext *)arg2 error:(_Bool *)arg3;
- (id)copyByRemappingOwnerUIDsWithMap:(const void *)arg1 rewriteContext:(struct TSCEFormulaRewriteContext *)arg2 error:(_Bool *)arg3;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 rules:(id)arg2;
- (id)initWithConditionalStyleSet:(id)arg1;
- (_Bool)tst_dataObjectIsEqual:(id)arg1;
- (unsigned long long)tst_dataObjectHash;

@end

