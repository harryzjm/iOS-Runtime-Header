//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPSCNNArithmetic
{
    float _primaryScale;
    float _secondaryScale;
    float _bias;
    float _minimumValue;
    float _maximumValue;
    unsigned long long _primaryStrideInFeatureChannels;
    unsigned long long _secondaryStrideInFeatureChannels;
    int _arithmeticType;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) unsigned long long secondaryStrideInFeatureChannels; // @synthesize secondaryStrideInFeatureChannels=_secondaryStrideInFeatureChannels;
@property(nonatomic) unsigned long long primaryStrideInFeatureChannels; // @synthesize primaryStrideInFeatureChannels=_primaryStrideInFeatureChannels;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float bias; // @synthesize bias=_bias;
@property(nonatomic) float secondaryScale; // @synthesize secondaryScale=_secondaryScale;
@property(nonatomic) float primaryScale; // @synthesize primaryScale=_primaryScale;
- (void)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3 destinationStates:(struct NSArray *)arg4 destinationImages:(struct NSArray *)arg5;
- (void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationState:(id)arg4 destinationImage:(id)arg5;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5 kernelOffset:(CDStruct_d6af7fc0 *)arg6;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5;
- (id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)privateResultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 commandBuffer:(id)arg5 isTemporary:(_Bool)arg6;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 arithmeticType:(int)arg2;
- (id)initWithDevice:(id)arg1;
- (void)setSecondaryStrideInPixelsY:(unsigned long long)arg1;
- (void)setSecondaryStrideInPixelsX:(unsigned long long)arg1;
- (void)setPrimaryStrideInPixelsY:(unsigned long long)arg1;
- (void)setPrimaryStrideInPixelsX:(unsigned long long)arg1;
- (unsigned long long)maxBatchSize;

@end

