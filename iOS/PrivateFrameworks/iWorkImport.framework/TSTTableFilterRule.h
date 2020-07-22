//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSTFormulaPredicate;

__attribute__((visibility("hidden")))
@interface TSTTableFilterRule : NSObject <NSCopying>
{
    TSTFormulaPredicate *mPredicate;
    _Bool mDoesNotNeedFormulaRewriteForImport;
}

+ (id)ruleWhereValuesInTable:(id)arg1 inColumn:(unsigned char)arg2 matchCell:(id)arg3;
+ (id)ruleWithFormulaPredicate:(id)arg1;
- (id)initFromArchive:(const struct FilterRuleArchive *)arg1;
- (void)encodeToArchive:(struct FilterRuleArchive *)arg1 archiver:(id)arg2;
- (_Bool)matchesCell:(id)arg1;
- (unsigned char)columnIndexForFilterRuleInTableInfo:(id)arg1;
- (_Bool)matchesRow:(unsigned short)arg1 withFormulaTableUID:(const UUIDData_5fbc143e *)arg2 withCalculationEngine:(id)arg3;
- (_Bool)needsFormulaRewriteForImport;
- (void)setDoesNotNeedFormulaRewriteForImport;
- (_Bool)needsThreshold;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (struct TSCEFormula *)formula;
- (id)predicate;
- (id)description;
- (void)dealloc;
- (id)copyByRewritingToGeometricFormWithTableInfo:(id)arg1 containsBadRef:(_Bool *)arg2;
- (id)copyByRewritingToUidFormWithTableInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initRuleWhereValuesInTable:(id)arg1 inColumn:(unsigned char)arg2 matchCell:(id)arg3;
- (id)initWithFormulaPredicate:(id)arg1;

@end
