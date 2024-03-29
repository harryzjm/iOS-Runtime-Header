//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSISEngine;

@interface NSISLinearExpression : NSObject
{
    NSISEngine *engine;
    CDStruct_9ac54d62 linExp;
}

+ (id)acquireFromPoolForUseCase:(long long)arg1 engine:(id)arg2;
+ (id)acquireFromPoolForUseCase:(long long)arg1;
+ (id)newExpressionWithCapacity:(unsigned long long)arg1 engine:(id)arg2;
+ (id)newExpressionWithCapacity:(unsigned long long)arg1;
+ (void)initialize;
- (id)copyContentsAndReturnToPool;
- (void)returnToPool;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)verifyInternalIntegrity;
- (void)scaleBy:(double)arg1;
- (id)variablesArray;
- (unsigned long long)variableCount;
- (_Bool)enumerateVariablesAndCoefficientsUntil:(CDUnknownBlockType)arg1;
- (void)enumerateVariables:(CDUnknownBlockType)arg1;
- (void)enumerateVariablesAndCoefficients:(CDUnknownBlockType)arg1;
- (id)description;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(CDUnknownBlockType)arg4 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg5;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;
- (_Bool)isConstant;
@property double constant;
- (double)incrementConstant:(double)arg1;
- (void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)addVariable:(id)arg1 coefficient:(double)arg2;
- (void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(CDUnknownBlockType)arg3 processVariableDroppedFromReceiver:(CDUnknownBlockType)arg4;
- (void)addExpression:(id)arg1 times:(double)arg2;
- (void)dealloc;
- (void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3;
- (void)setCoefficient:(double)arg1 forVariable:(id)arg2;
- (double)coefficientForVariable:(id)arg1;
- (void)removeVariable:(id)arg1;
@property(readonly) NSISEngine *engine;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEngine:(id)arg1;
- (id)init;

@end

