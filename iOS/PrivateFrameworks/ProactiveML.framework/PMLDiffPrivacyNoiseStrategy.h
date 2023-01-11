//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLNoiseStrategy-Protocol.h>

@class NSString;

@interface PMLDiffPrivacyNoiseStrategy : NSObject <PMLNoiseStrategy>
{
    unsigned long long _seed;
    _Bool _inplaceNorm;
    int _maxIterations;
    float _scaleFactor;
    float _minimumMagnitude;
    Class _samplerClass;
}

+ (id)gaussianNoiseWithScaleFactor:(float)arg1 minimumMagnitude:(float)arg2 seed:(int)arg3;
@property(retain) Class samplerClass; // @synthesize samplerClass=_samplerClass;
@property float minimumMagnitude; // @synthesize minimumMagnitude=_minimumMagnitude;
@property float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property int maxIterations; // @synthesize maxIterations=_maxIterations;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (void)addNoiseToSparseMatrix:(id)arg1;
- (void)addNoiseToSparseVector:(id)arg1;
- (void)addNoiseToDenseVector:(id)arg1;
- (void)addNoiseToObjectiveFeatures:(id)arg1;
- (void)addNoiseToFeatureMatrix:(id)arg1;
- (void)addNoiseToGradient:(id)arg1;
- (void)addNoiseToWeights:(id)arg1;
- (id)createSampler;
- (id)initWithMaxIterationCount:(int)arg1 scaleFactor:(float)arg2 minimumMagnitude:(float)arg3 samplerClass:(Class)arg4 inplaceNorm:(_Bool)arg5;
- (id)initWithMaxIterationCount:(int)arg1 scaleFactor:(float)arg2 minimumMagnitude:(float)arg3 seed:(int)arg4 samplerClass:(Class)arg5 inplaceNorm:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

