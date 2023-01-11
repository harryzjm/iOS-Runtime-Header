//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLEmbedding, NLModelConfiguration, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NLModelImplX
{
    struct MontrealNeuralNetwork *_montrealModel;
    NLModelConfiguration *_configuration;
    NLEmbedding *_embedding;
    NSData *_customEmbeddingData;
    NSDictionary *_labelMap;
    unsigned long long _numberOfTrainingInstances;
    NSString *_trainingLanguage;
    NSString *_trainingEmbeddingType;
    NSData *_modelData;
}

- (void).cxx_destruct;
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (float *)outputForString:(id)arg1;
- (id)trainingInfo;
- (unsigned long long)numberOfTrainingInstances;
- (id)customEmbeddingData;
- (id)labelMap;
- (unsigned long long)systemVersion;
- (id)configuration;
- (id)modelData;
- (void)dealloc;
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;

@end
