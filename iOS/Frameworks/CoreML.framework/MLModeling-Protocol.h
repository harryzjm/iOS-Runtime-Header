//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/NSObject-Protocol.h>

@class MLLayerPath, MLModel, MLModelConfiguration, MLModelDescription, MLModelExecutionSchedule, MLModelMetadata, MLParameterKey, MLPredictionOptions, NSString;
@protocol MLBatchProvider, MLFeatureProvider, MLPredictionRequest;

@protocol MLModeling <NSObject>
@property(readonly) MLModelMetadata *metadata;
@property(readonly, nonatomic) unsigned long long signpostID;
@property(readonly, nonatomic) _Bool recordsPredictionEvent;
@property(readonly, nonatomic) unsigned long long predictionTypeForKTrace;
@property(readonly, nonatomic) _Bool supportsConcurrentSubmissions;
@property(readonly, nonatomic) MLModelConfiguration *configuration;
@property(readonly, nonatomic) MLModelDescription *modelDescription;
- (void)enableInstrumentsTracing;
- (id)parameterValueForKey:(MLParameterKey *)arg1 error:(id *)arg2;
- (MLLayerPath *)modelPath;
- (void)setModelPath:(MLLayerPath *)arg1 modelName:(NSString *)arg2;
- (MLModelExecutionSchedule *)executionSchedule;
- (void)submitPredictionRequest:(id <MLPredictionRequest>)arg1 completionHandler:(void (^)(id <MLFeatureProvider>, NSError *))arg2;
- (id <MLPredictionRequest>)newRequestForModel:(MLModel *)arg1 inputFeatures:(id <MLFeatureProvider>)arg2 options:(MLPredictionOptions *)arg3 error:(id *)arg4;
- (id <MLBatchProvider>)predictionsFromBatch:(id <MLBatchProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
- (id <MLBatchProvider>)predictionsFromBatch:(id <MLBatchProvider>)arg1 error:(id *)arg2;
- (id <MLFeatureProvider>)predictionFromFeatures:(id <MLFeatureProvider>)arg1 options:(MLPredictionOptions *)arg2 error:(id *)arg3;
- (id <MLFeatureProvider>)predictionFromFeatures:(id <MLFeatureProvider>)arg1 error:(id *)arg2;
@end

