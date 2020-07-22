//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPSNeuralNetwork/NSObject-Protocol.h>
#import <MPSNeuralNetwork/NSSecureCoding-Protocol.h>

@class MPSImageDescriptor, MPSKernel, NSArray, NSString;

@protocol MPSNNPadding <NSObject, NSSecureCoding>
- (unsigned long long)paddingMethod;

@optional
- (MPSImageDescriptor *)destinationImageDescriptorForSourceImages:(NSArray *)arg1 sourceStates:(NSArray *)arg2 forKernel:(MPSKernel *)arg3 suggestedDescriptor:(MPSImageDescriptor *)arg4;
- (NSString *)label;
@end

