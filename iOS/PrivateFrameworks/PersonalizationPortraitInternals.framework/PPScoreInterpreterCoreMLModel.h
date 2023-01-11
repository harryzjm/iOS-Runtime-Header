//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, NSArray, NSString;

@interface PPScoreInterpreterCoreMLModel : NSObject
{
    NSString *_coreMLModelPath;
    MLModel *_coreMLModel;
    NSString *_coreMLModelOutputName;
    NSArray *_coreMLInputFeatures;
    _Bool _hasOutputIndexedSubscript;
    NSArray *_argumentsToEvaluate;
}

+ (double)scoreForOutputValue:(id)arg1 outputIndexedSubscript:(long long)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasOutputIndexedSubscript; // @synthesize hasOutputIndexedSubscript=_hasOutputIndexedSubscript;
@property(readonly, nonatomic) NSArray *argumentsToEvaluate; // @synthesize argumentsToEvaluate=_argumentsToEvaluate;
- (double)predictionForEvaluatedFeatures:(id)arg1 withOutputIndexedSubscript:(long long)arg2;
- (id)featureAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfFeatures;
- (void)loadInstanceVariablesFromFeatures:(id)arg1 outputSpecification:(id)arg2;
- (void)loadCoreMLModelIfNotAlreadyLoaded;
- (id)init;
- (id)initWithModelPath:(id)arg1 features:(id)arg2 outputSpecification:(id)arg3;

@end
