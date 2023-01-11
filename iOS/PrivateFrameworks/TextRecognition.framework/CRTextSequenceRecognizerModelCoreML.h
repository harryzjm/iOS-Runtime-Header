//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRRecognizerConfiguration, MLModel;

__attribute__((visibility("hidden")))
@interface CRTextSequenceRecognizerModelCoreML
{
    CRRecognizerConfiguration *_configuration;
    MLModel *_model;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)configuration;
- (_Bool)shouldSaturateInputBatchesForConfiguration:(id)arg1;
- (id)inputBatchFromTextFeatures:(id)arg1 image:(id)arg2 featureWidth:(double)arg3 configuration:(id)arg4;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromImg_input:(id)arg1 error:(id *)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;
- (id)predictFromInputs:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)initWithMLConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)init;

@end
