//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSNNNeuronDescriptor;
@protocol MPSCNNBatchNormalizationDataSource, MTLBuffer;

@interface MPSCNNBatchNormalization
{
    struct MPSAutoBuffer *_gamma;
    struct MPSAutoBuffer *_beta;
    struct MPSAutoBuffer *_meanDS;
    struct MPSAutoBuffer *_varDS;
    id <MPSCNNBatchNormalizationDataSource> _dataSource;
    _Bool _stateNeedsToLoad;
    MPSNNNeuronDescriptor *_fusedNeuronDescriptor;
    id <MTLBuffer> _preluBuffer;
    float _epsilon;
    unsigned long long _numberOfFeatureChannels;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(readonly, retain, nonatomic) id <MPSCNNBatchNormalizationDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, nonatomic) unsigned long long numberOfFeatureChannels; // @synthesize numberOfFeatureChannels=_numberOfFeatureChannels;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)reloadMeanAndVarianceWithCommandBuffer:(id)arg1 meanAndVarianceState:(id)arg2;
- (void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)reloadMeanAndVarianceFromDataSource;
- (void)reloadGammaAndBetaFromDataSource;
- (void)reloadDataSource:(id)arg1;
- (void)reloadDataSourceDeprecated:(id)arg1 doReloadWeights:(_Bool)arg2 doReloadStats:(_Bool)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (void)dealloc;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 batchNormalizationState:(id)arg3;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 batchNormalizationState:(id)arg3 destinationImages:(struct NSArray *)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3 destinationImage:(id)arg4;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 destinationStates:(struct NSArray **)arg3 destinationStateIsTemporary:(_Bool)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 destinationStates:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id *)arg3 destinationStateIsTemporary:(_Bool)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id)arg3 destinationImage:(id)arg4;
- (id)initWithDevice:(id)arg1 dataSource:(id)arg2;
- (id)initWithDevice:(id)arg1 dataSource:(id)arg2 fusedNeuronDescriptor:(id)arg3;

@end

