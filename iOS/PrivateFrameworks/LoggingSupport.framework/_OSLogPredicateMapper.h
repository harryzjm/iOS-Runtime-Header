//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSPredicate;

__attribute__((visibility("hidden")))
@interface _OSLogPredicateMapper : NSObject
{
    int _pass;
    NSMutableArray *_validationErrors;
    unsigned long long _flags;
    NSPredicate *_predicate;
    NSMutableArray *_stack;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *validationErrors; // @synthesize validationErrors=_validationErrors;
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
@property(readonly, nonatomic) NSPredicate *mappedPredicate; // @synthesize mappedPredicate=_predicate;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;
- (void)validateExpression:(id)arg1;
- (void)processCompoundPredicate:(id)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (void)mapLeftExpression:(id *)arg1 andRightExpression:(id *)arg2;
- (id)mapSignpostTypeExpression:(id)arg1;
- (id)mapSignpostScopeExpression:(id)arg1;
- (id)mapMessageTypeExpression:(id)arg1;
- (id)mapEventTypeExpression:(id)arg1;
- (id)mapKeywordToConstantExpression:(id)arg1 keywordMap:(id)arg2;
@property(readonly, nonatomic) NSMutableSet *validKeyPaths;
- (void)visitPredicate:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)initWithPredicate:(id)arg1 andValidate:(_Bool)arg2;

@end

