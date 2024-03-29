//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNPredicateUtils : NSObject
{
}

+ (_Bool)ensurePredicateMeetsDetectSoundRequestRequirements:(id)arg1 error:(id *)arg2;
+ (_Bool)ensurePredicate:(id)arg1 isComparisonWithOperatorFromOptions:(id)arg2 withRightConstantNumberAndLeftKeyPathFromOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)ensurePredicateOperatorType:(unsigned long long)arg1 isOneOfOptions:(id)arg2 error:(id *)arg3;
+ (_Bool)ensurePredicate:(id)arg1 isComparisonWithOperatorTypePredicate:(CDUnknownBlockType)arg2 leftPredicate:(CDUnknownBlockType)arg3 rightPredicate:(CDUnknownBlockType)arg4 error:(id *)arg5;
+ (_Bool)ensureExpression:(id)arg1 isKeyPathMatchingOneOfOptions:(id)arg2 error:(id *)arg3;
+ (_Bool)ensureExpression:(id)arg1 isKeyPathSatisfyingPredicate:(CDUnknownBlockType)arg2 error:(id *)arg3;
+ (_Bool)ensureExpressionIsConstantNumberValue:(id)arg1 error:(id *)arg2;
+ (_Bool)ensureExpression:(id)arg1 isConstantValueSatisfyingPredicate:(CDUnknownBlockType)arg2 error:(id *)arg3;
+ (_Bool)ensureExpression:(id)arg1 hasType:(unsigned long long)arg2 error:(id *)arg3;
- (id)init;

@end

