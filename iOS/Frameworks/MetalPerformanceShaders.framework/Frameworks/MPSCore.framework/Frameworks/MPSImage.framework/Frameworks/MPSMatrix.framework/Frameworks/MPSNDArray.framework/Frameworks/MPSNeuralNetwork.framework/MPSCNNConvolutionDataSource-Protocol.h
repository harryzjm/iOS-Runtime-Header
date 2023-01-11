//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPSNeuralNetwork/NSCopying-Protocol.h>
#import <MPSNeuralNetwork/NSObject-Protocol.h>

@class MISSING_TYPE, MPSCNNConvolutionDescriptor, MPSCNNConvolutionGradientState, MPSCNNConvolutionWeightsAndBiasesState, NSString;
@protocol MTLCommandBuffer, MTLDevice;

@protocol MPSCNNConvolutionDataSource <NSCopying, NSObject>
- (NSString *)label;
- (void)purge;
- (_Bool)load;
- (float *)biasTerms;
- (void *)weights;
- (MPSCNNConvolutionDescriptor *)descriptor;
- (unsigned int)dataType;

@optional
- (unsigned int)weightsLayout;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id <MTLDevice>)arg2;
- (_Bool)updateWithGradientState:(MPSCNNConvolutionGradientState *)arg1 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg2;
- (MPSCNNConvolutionWeightsAndBiasesState *)updateWithCommandBuffer:(id <MTLCommandBuffer>)arg1 gradientState:(MPSCNNConvolutionGradientState *)arg2 sourceState:(MPSCNNConvolutionWeightsAndBiasesState *)arg3;
- (unsigned int)weightsQuantizationType;
- (float *)lookupTableForUInt8Kernel;
- (MISSING_TYPE **)rangesForUInt8Kernel;
@end
