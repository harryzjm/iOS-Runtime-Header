//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLModelConfiguration, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLModelImplLC
{
    const void *_maxEntModel;
    NLModelConfiguration *_configuration;
    NSDictionary *_labelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfTrainingInstances;
    NSData *_modelData;
}

- (void).cxx_destruct;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (unsigned long long)numberOfTrainingInstances;
- (id)documentFrequencyMap;
- (id)vocabularyMap;
- (id)labelMap;
- (id)configuration;
- (id)modelData;
- (void)dealloc;
- (id)initWithModelTrainer:(id)arg1;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 numberOfTrainingInstances:(unsigned long long)arg6;

@end
