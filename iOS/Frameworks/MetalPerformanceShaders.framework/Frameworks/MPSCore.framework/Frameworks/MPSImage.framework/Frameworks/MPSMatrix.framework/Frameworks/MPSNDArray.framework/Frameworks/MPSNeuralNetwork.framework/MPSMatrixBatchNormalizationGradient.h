//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@interface MPSMatrixBatchNormalizationGradient : MPSMatrixBinaryKernel
{
    int _neuronType;
    float _neuronA;
    float _neuronB;
    float _neuronC;
    float _epsilon;
    unsigned long long _sourceNumberOfFeatureVectors;
    unsigned long long _sourceInputFeatureChannels;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(struct MPSDevice *)arg1;
@property(nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(nonatomic) float neuronC; // @synthesize neuronC=_neuronC;
@property(nonatomic) float neuronB; // @synthesize neuronB=_neuronB;
@property(nonatomic) float neuronA; // @synthesize neuronA=_neuronA;
@property(nonatomic) int neuronType; // @synthesize neuronType=_neuronType;
@property(nonatomic) unsigned long long sourceInputFeatureChannels; // @synthesize sourceInputFeatureChannels=_sourceInputFeatureChannels;
@property(nonatomic) unsigned long long sourceNumberOfFeatureVectors; // @synthesize sourceNumberOfFeatureVectors=_sourceNumberOfFeatureVectors;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4;
- (float)neuronParameterC;
- (float)neuronParameterB;
- (float)neuronParameterA;
- (void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 inputMatrix:(id)arg3 meanVector:(id)arg4 varianceVector:(id)arg5 gammaVector:(id)arg6 betaVector:(id)arg7 resultGradientForDataMatrix:(id)arg8 resultGradientForGammaVector:(id)arg9 resultGradientForBetaVector:(id)arg10;
- (id)initWithDevice:(id)arg1;

@end
