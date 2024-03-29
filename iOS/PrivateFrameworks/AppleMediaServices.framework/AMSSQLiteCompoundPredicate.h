//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteCompoundPredicate
{
    NSString *_combinationOperation;
    NSArray *_predicates;
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2 comparisonType:(long long)arg3;
+ (id)predicateMatchingAnyPredicates:(id)arg1;
+ (id)predicateMatchingAllPredicates:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

