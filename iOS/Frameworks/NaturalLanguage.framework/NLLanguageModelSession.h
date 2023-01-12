//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLLanguageModel;

@interface NLLanguageModelSession : NSObject
{
    NLLanguageModel *_languageModel;
}

+ (void)setLogLevel:(long long)arg1;
+ (void)performMaintenance;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NLLanguageModel *languageModel; // @synthesize languageModel=_languageModel;
- (void)recordWithDifferentialPrivacy:(id)arg1;
- (void)pruneToSize:(unsigned long long)arg1;
- (void)applyExponentialDecay;
- (void)flushDynamicData;
- (void)reset;
- (void)enumeratePredictionsForContext:(id)arg1 maximumPredictions:(unsigned long long)arg2 maximumTokensPerPrediction:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)registerNegativeEvidenceForToken:(id)arg1;
- (void)unadaptToToken:(id)arg1 context:(id)arg2;
- (void)adaptToToken:(id)arg1 context:(id)arg2;
- (void)adaptToText:(id)arg1;
- (void)addPriorText:(id)arg1 type:(long long)arg2 time:(id)arg3;
- (id)stateWithOptions:(id)arg1;
- (long long)blocklistStatusForString:(id)arg1 matchType:(long long)arg2;
- (id)conditionalProbabilitiesForStrings:(id)arg1 context:(id)arg2;
- (id)conditionalProbabilityForString:(id)arg1 context:(id)arg2;
- (id)conditionalProbabilitiesForTokens:(id)arg1 context:(id)arg2;
- (id)conditionalProbabilityForToken:(id)arg1 context:(id)arg2;
- (id)initWithLanguageModel:(id)arg1 options:(id)arg2;

@end
