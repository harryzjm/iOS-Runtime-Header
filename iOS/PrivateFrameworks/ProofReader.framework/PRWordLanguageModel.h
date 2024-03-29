//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLLMLanguageModelSession, NLLanguageModel, NLTokenIDConverter, NSString, PRLexicon;

__attribute__((visibility("hidden")))
@interface PRWordLanguageModel : NSObject
{
    NSString *_localization;
    NSString *_appIdentifier;
    NLLanguageModel *_model;
    NLLMLanguageModelSession *_session;
    NLTokenIDConverter *_converter;
    PRLexicon *_lexicon;
}

+ (void)setLogLevel:(long long)arg1;
+ (void)performMaintenance;
+ (id)languageModelWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3;
- (void)pruneToSize:(unsigned long long)arg1;
- (void)applyExponentialDecay;
- (void)flushDynamicData;
- (void)reset;
- (void)recordWithDifferentialPrivacy:(id)arg1;
- (void)incrementUsageCountForTokenID:(unsigned int)arg1 context:(const unsigned int *)arg2 length:(unsigned long long)arg3;
- (_Bool)shouldAdaptToTokenSequence:(const unsigned int *)arg1 length:(unsigned long long)arg2;
- (_Bool)getFirstDynamicTokenID:(unsigned int *)arg1 lastDynamicTokenID:(unsigned int *)arg2;
- (_Bool)addTokenForString:(id)arg1 tokenID:(unsigned int *)arg2;
- (void)enumerateEntriesForString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePredictionsForContext:(const unsigned int *)arg1 length:(unsigned long long)arg2 maxPredictions:(unsigned long long)arg3 maxTokensPerPrediction:(unsigned long long)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)enumerateCompletionEntriesForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)tokenSequenceIsBlocklisted:(const unsigned int *)arg1 length:(unsigned long long)arg2;
- (id)_descriptionForTokenSequence:(const unsigned int *)arg1 length:(unsigned long long)arg2;
- (float)usageCountForTokenID:(unsigned int)arg1;
- (_Bool)getUnigramProbabilityForString:(id)arg1 probability:(double *)arg2;
- (_Bool)getConditionalProbabilityForTokenID:(unsigned int)arg1 context:(const unsigned int *)arg2 length:(unsigned long long)arg3 probability:(double *)arg4;
- (id)stringForTokenID:(unsigned int)arg1;
- (unsigned int)tokenIDForString:(id)arg1;
- (id)appIdentifier;
- (id)localization;
- (id)description;
- (void)dealloc;
- (id)initWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3;

@end

