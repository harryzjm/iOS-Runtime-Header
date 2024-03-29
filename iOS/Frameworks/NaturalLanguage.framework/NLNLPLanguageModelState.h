//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLLanguageModelState.h"

__attribute__((visibility("hidden")))
@interface NLNLPLanguageModelState : NLLanguageModelState
{
    struct CoreLanguageModelWithState *_modelState;
}

- (void)enumeratePredictions:(unsigned long long)arg1 maximumTokensPerPrediction:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)conditionalProbabilitiesForStrings:(id)arg1;
- (id)conditionalProbabilityForString:(id)arg1;
- (id)conditionalProbabilityForToken:(id)arg1;
- (void)resetContext;
- (void)addContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithSession:(id)arg1 options:(id)arg2 context:(id)arg3 modelState:(void *)arg4;

@end

