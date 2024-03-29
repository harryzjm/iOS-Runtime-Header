//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPSNeuralNetwork/MPSExternalPluginBase-Protocol.h>

@class NSArray;
@protocol MTLBuffer, MTLCommandBuffer, MTLComputeCommandEncoder;

@protocol MPSExternalCNNUnary <MPSExternalPluginBase>

@optional
- (unsigned long long)encodeBatchToCommandBuffer:(id <MTLCommandBuffer>)arg1 computeCommandEncoder:(id <MTLComputeCommandEncoder>)arg2 options:(unsigned long long)arg3 pluginOptions:(unsigned long long)arg4 sourceTextures:(NSArray *)arg5 sourceInfo:(const CDStruct_37840a1a *)arg6 destinationTextures:(NSArray *)arg7 destinationInfo:(const CDStruct_1cd378eb *)arg8 predicationBuffer:(id <MTLBuffer>)arg9 predicationOffset:(unsigned long long)arg10;
@end

