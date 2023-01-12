//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLLayerPath, MLModelDescription, MLModelExecutionSchedule, MLModelMetadata, MLPredictionOptions, NSString;
@protocol MLBatchProvider, MLFeatureProvider;

@protocol MLModeling
@property(readonly) MLModelMetadata *metadata;
@property(retain, nonatomic) MLModelDescription *modelDescription;
- (MLLayerPath *)modelPath;
- (void)setModelPath:(MLLayerPath *)arg1 modelName:(NSString *)arg2;
- (MLModelExecutionSchedule *)executionSchedule;
- (id <MLBatchProvider>)predictionsFromBatch:(id <MLBatchProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
- (id <MLBatchProvider>)predictionsFromBatch:(id <MLBatchProvider>)arg1 error:(id *)arg2;
- (id <MLFeatureProvider>)predictionFromFeatures:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
- (id <MLFeatureProvider>)predictionFromFeatures:(id <MLFeatureProvider>)arg1 error:(id *)arg2;
@end

