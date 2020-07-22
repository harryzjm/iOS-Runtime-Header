//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MPSNeuralNetwork/NSObject-Protocol.h>

@class MISSING_TYPE, MPSCNNConvolutionDescriptor, NSString;

@protocol MPSCNNConvolutionDataSource <NSObject>
- (NSString *)label;
- (void)purge;
- (_Bool)load;
- (float *)biasTerms;
- (void *)weights;
- (MPSCNNConvolutionDescriptor *)descriptor;
- (unsigned int)dataType;

@optional
- (float *)lookupTableForUInt8Kernel;
- (MISSING_TYPE **)rangesForUInt8Kernel;
@end
