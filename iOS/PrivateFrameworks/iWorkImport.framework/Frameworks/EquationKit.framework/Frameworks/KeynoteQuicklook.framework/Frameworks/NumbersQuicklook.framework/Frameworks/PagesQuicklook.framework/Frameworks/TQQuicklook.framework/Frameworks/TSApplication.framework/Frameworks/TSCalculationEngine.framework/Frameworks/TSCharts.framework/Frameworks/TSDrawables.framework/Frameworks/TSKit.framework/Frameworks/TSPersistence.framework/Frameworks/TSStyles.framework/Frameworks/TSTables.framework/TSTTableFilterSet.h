//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPObject.h>

@class NSArray;

@interface TSTTableFilterSet : TSPObject
{
    int _type;
    _Bool _isEnabled;
    NSArray *_rules;
    _Bool _needsFormulaRewriteForImport;
    vector_2056c7c2 _filterOffsets;
    _Bool _downgradedForPrePivot;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsFormulaRewriteForImport; // @synthesize needsFormulaRewriteForImport=_needsFormulaRewriteForImport;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) _Bool downgradedForPrePivot; // @synthesize downgradedForPrePivot=_downgradedForPrePivot;
@property(retain, nonatomic) NSArray *rules; // @synthesize rules=_rules;
- (void)saveToArchive:(void *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const void *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)preventsRowInsertion;
- (id)viewColumnIndicesForRulesInTable:(id)arg1;
- (id)baseColumnIndicesForRulesInTable:(id)arg1;
- (id)absoluteRuleIndicesForColumn:(struct TSUModelColumnIndex)arg1 inTable:(id)arg2;
- (unsigned long long)numberOfRulesInFilter:(unsigned long long)arg1;
- (unsigned long long)ruleIndexInFilter:(unsigned long long)arg1 matchingCell:(id)arg2;
- (unsigned long long)firstFilterIndexForBaseColumn:(struct TSUModelColumnIndex)arg1 inTable:(id)arg2;
- (id)filterIndicesForBaseColumn:(struct TSUModelColumnIndex)arg1 inTable:(id)arg2;
- (void)enumerateRulesInFilterIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateFiltersForColumn:(struct TSUModelColumnIndex)arg1 withTable:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateFilterIndicesInTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateFiltersInTable:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)replaceRuleAtAbsoluteIndex:(unsigned long long)arg1 withRule:(id)arg2;
- (void)replaceRule:(id)arg1 atRuleIndex:(unsigned long long)arg2 inFilter:(unsigned long long)arg3;
- (void)addRules:(id)arg1 inFilter:(unsigned long long)arg2;
- (void)p_addRules:(id)arg1 atRuleIndices:(id)arg2 inFilter:(unsigned long long)arg3 isNew:(_Bool)arg4;
- (void)removeRulesForBaseColumnIndices:(id)arg1 withTableInfo:(id)arg2;
- (void)removeRulesWithIndices:(id)arg1 inFilter:(unsigned long long)arg2;
- (id)removeRulesWithAbsoluteIndices:(id)arg1;
@property(readonly, nonatomic) unsigned long long filterCount;
@property(readonly, nonatomic) unsigned long long newFilterIndex;
@property(nonatomic) int filterSetType;
@property(readonly, nonatomic) _Bool canAddRules;
@property(readonly, nonatomic) unsigned long long ruleCount;
- (id)filterAtIndex:(unsigned long long)arg1 inTable:(id)arg2;
- (id)ruleInFilter:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)ruleAtAbsoluteIndex:(unsigned long long)arg1;
- (_Bool)rowIsShown:(unsigned int)arg1 withHiddenStateExtent:(id)arg2 withCalcEngine:(id)arg3;
- (_Bool)p_thresholdComparisonMatchesFilter:(long long)arg1 withPredicateType:(unsigned char)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)containsFilterRulesInUIDForm;
- (id)downgradeFilterSetForBackwardCompatWithLocale:(id)arg1;
- (id)p_downgradedFilterRuleForListItem:(id)arg1 fromPredicate:(id)arg2;
- (id)copyByRewritingFilterRulesWithContext:(id)arg1 fromTableModel:(id)arg2 toTableModel:(id)arg3;
- (id)copyByRewritingFilterRulesToGeometricFormWithContext:(id)arg1 withTableInfo:(id)arg2;
- (id)copyByRewritingFilterRulesToUidFormWithContext:(id)arg1 withTableInfo:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (id)initWithNotBlankRowGroupsWithContext:(id)arg1 withPivotTable:(id)arg2;
- (id)initWithNotBlankColumnGroupsWithContext:(id)arg1 withPivotTable:(id)arg2;
- (id)initWithFilterRules:(id)arg1 type:(int)arg2 context:(id)arg3;

@end

