//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MPSNeuralNetwork/NSCopying-Protocol.h>
#import <MPSNeuralNetwork/NSSecureCoding-Protocol.h>

@class MPSCNNNeuron, NSData;

@interface MPSCNNConvolutionDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    unsigned long long _featureChannelsLayout;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
    unsigned long long _groups;
    NSData *_batchNormalizationData;
    MPSCNNNeuron *_deprecated_neuron;
    unsigned long long _subPixelScaleFactor;
    unsigned long long _dilationRateX;
    unsigned long long _dilationRateY;
    int _neuronType;
    float _neuronA;
    float _neuronB;
    _Bool _depthWiseConvolution;
    NSData *_perChannelNeuronA;
    MPSCNNNeuron *_neuron_deprecated;
}

+ (_Bool)supportsSecureCoding;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 postFilters:(id)arg5;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 neuronFilter:(id)arg5;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4;
@property(nonatomic) unsigned long long dilationRateY; // @synthesize dilationRateY=_dilationRateY;
@property(nonatomic) unsigned long long dilationRateX; // @synthesize dilationRateX=_dilationRateX;
@property(nonatomic) unsigned long long strideInPixelsY; // @synthesize strideInPixelsY=_strideInPixelsY;
@property(nonatomic) unsigned long long strideInPixelsX; // @synthesize strideInPixelsX=_strideInPixelsX;
@property(nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
@property(nonatomic) unsigned long long groups; // @synthesize groups=_groups;
@property(retain, nonatomic) MPSCNNNeuron *neuron; // @synthesize neuron=_neuron_deprecated;
@property(nonatomic) unsigned long long featureChannelsLayout; // @synthesize featureChannelsLayout=_featureChannelsLayout;
@property(nonatomic) unsigned long long outputFeatureChannels; // @synthesize outputFeatureChannels=_outputFeatureChannels;
@property(nonatomic) unsigned long long inputFeatureChannels; // @synthesize inputFeatureChannels=_inputFeatureChannels;
- (id)newDescriptorWithNeuronInfo:(struct NeuronInfo)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (struct NeuronInfo)neuronInfo;
- (void)setNeuronToPReLUWithParametersA:(id)arg1;
- (void)setBatchNormalizationParametersForInferenceWithMean:(const float *)arg1 variance:(const float *)arg2 gamma:(const float *)arg3 beta:(const float *)arg4 epsilon:(float)arg5;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4;
- (id)init;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 neuronFilter:(id)arg5;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3;
- (float)neuronParameterB;
- (float)neuronParameterA;
- (int)neuronType;
- (void)setNeuronParameterB:(float)arg1;
- (void)setNeuronParameterA:(float)arg1;
- (void)setNeuronType:(int)arg1;

@end

