//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AXMDataRegressionModel : NSObject
{
    double _error;
    double _score;
    double *_bestFitParameters;
    double *_x;
    double *_y;
    int _n;
    _Bool _isDisqualified;
    int _iterations;
}

+ (id)getModelForX:(double *)arg1 y:(double *)arg2 n:(int)arg3;
@property(readonly, nonatomic) int iterations; // @synthesize iterations=_iterations;
@property(nonatomic) _Bool isDisqualified; // @synthesize isDisqualified=_isDisqualified;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) double error; // @synthesize error=_error;
@property(readonly, nonatomic) int n; // @synthesize n=_n;
@property(readonly, nonatomic) double *bestFitParameters; // @synthesize bestFitParameters=_bestFitParameters;
@property(readonly, nonatomic) double *y; // @synthesize y=_y;
@property(readonly, nonatomic) double *x; // @synthesize x=_x;
- (double)roundNumber:(double)arg1 withSignificantFigures:(unsigned long long)arg2;
- (void)getSMA:(double *)arg1 lookback:(int)arg2;
- (void)sortDataPoints;
@property(readonly, nonatomic) _Bool dataSatisfiesInitialConditions;
- (id)modelFunctionStringForParameters:(double *)arg1 significantFigures:(int)arg2;
@property(readonly, nonatomic) NSArray *partialDerivatives;
- (void)disqualifyModelIfNecessary;
- (void)getInitialParams:(double *)arg1;
@property(readonly, nonatomic) int modelParameterCount;
@property(readonly, nonatomic) CDUnknownBlockType modelFunction;
- (void)computeScore;
- (void)getDiagonal:(double *)arg1 size:(int)arg2 result:(double *)arg3;
- (int)getMatrixInverse:(double *)arg1 size:(int)arg2 pivot:(int *)arg3 tmp:(double *)arg4 result:(double *)arg5;
- (void)getJacobianForParameters:(double *)arg1 gradient:(double *)arg2 result:(double *)arg3;
- (void)getGradientForX:(double)arg1 parameterValues:(double *)arg2 result:(double *)arg3;
- (void)getResidualsVector:(double *)arg1 result:(double *)arg2;
- (void)getIdentityMatrixWithSize:(int)arg1 scalar:(double)arg2 result:(double *)arg3;
- (double)magnitude:(double *)arg1 size:(int)arg2;
- (void)printMatrix:(double *)arg1 rows:(int)arg2 cols:(int)arg3;
- (double)fitDataWithModelParams:(double *)arg1 finalParams:(double *)arg2;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) NSString *modelDescription;
- (void)dealloc;
- (id)initWithXValues:(double *)arg1 yValues:(double *)arg2 count:(int)arg3;

@end
