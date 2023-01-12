//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModel
{
    long long _granularity;
}

- (void)enumeratePredictionsForContext:(id)arg1 maxWordsPerPrediction:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePredictionsForContext:(id)arg1 maxEntriesPerPrediction:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (double)conditionalProbabilityForWord:(id)arg1 context:(id)arg2;
- (double)conditionalProbabilityForEntry:(id)arg1 context:(id)arg2;
- (id)sessionWithOptions:(id)arg1;
- (_Bool)generatesPredictions;
- (long long)granularity;
- (id)initWithLocalization:(id)arg1 options:(id)arg2;

@end
