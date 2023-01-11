//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MPSCNNInstanceNormalizationDataSource;

@interface MPSCNNInstanceNormalization
{
    struct MPSAutoBuffer *_gamma;
    struct MPSAutoBuffer *_beta;
    id <MPSCNNInstanceNormalizationDataSource> _dataSource;
    unsigned long long _numberOfFeatureChannels;
    float _epsilon;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) float epsilon; // @synthesize epsilon=_epsilon;
@property(readonly, retain, nonatomic) id <MPSCNNInstanceNormalizationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2;
- (id)debugDescription;
- (void)reloadGammaAndBetaFromDataSource;
- (void)reloadDataSource:(id)arg1;
- (void)reloadDataSourceDeprecated:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (unsigned long long)maxBatchSize;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 dataSource:(id)arg2;

@end
