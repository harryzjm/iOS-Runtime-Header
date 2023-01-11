//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLGazetteer;

__attribute__((visibility("hidden")))
@interface NLModelImplG
{
    NLGazetteer *_gazetteer;
}

- (void).cxx_destruct;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (id)modelData;
- (id)gazetteer;
- (unsigned long long)systemVersion;
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;
- (id)initWithGazetteer:(id)arg1;

@end
