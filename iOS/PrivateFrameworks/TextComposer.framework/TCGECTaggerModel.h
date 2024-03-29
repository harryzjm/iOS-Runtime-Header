//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TCGECTaggerModel : NSObject
{
    NSString *_modelPath;
    void *_embeddings;
    struct MontrealNeuralNetwork *_gecClassifier;
    struct MontrealNeuralNetwork *_vscClassifier;
    NSArray *_gecClassifierLabels;
    NSDictionary *_labelsToIssueType;
    NSDictionary *_indicationThresholds;
    NSDictionary *_autocorrectionThresholds;
    NSDictionary *_detailedIssueTypes;
    unsigned long long _keepLabelIndex;
}

- (void).cxx_destruct;
- (void)enumerateIssuesForSentence:(id)arg1 checkTermination:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)loadDetailedIssueTypesFromURL:(id)arg1;
- (_Bool)loadAutocorrectionThresholdsFromURL:(id)arg1;
- (_Bool)loadIndicationThresholdsFromURL:(id)arg1;
- (_Bool)loadErrorClassesFromURL:(id)arg1;
- (id)correctionForPredictedClass:(unsigned long long)arg1 withProbability:(float)arg2;
- (id)classifierPrediction:(struct MontrealNeuralNetwork *)arg1 labelCount:(unsigned long long)arg2 input:(id)arg3 tokenCount:(unsigned long long)arg4;
- (_Bool)isTerminatedSentence:(id)arg1 embeddings:(id)arg2;
- (id)classifierPredictions:(id)arg1 tokenCount:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long embeddingDimension;
- (id)embeddingsForTokenizedSentence:(id)arg1;
@property(readonly, nonatomic) unsigned long long numCategories;
- (void)dealloc;
- (id)initWithModelPath:(id)arg1 OTABundlePath:(id)arg2 options:(id)arg3;
- (_Bool)useANEWithOptions:(id)arg1;

@end

