//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CVNLPTokenIDConverter;

__attribute__((visibility("hidden")))
@interface NLPLearnerCharacterLanguageModelingData
{
    CVNLPTokenIDConverter *_tokenConverter;
}

+ (unsigned long long)defaultMaxSequenceLength;
+ (void)initialize;
- (void).cxx_destruct;
- (_Bool)loadFromCoreDuet:(id)arg1 limitSamplesTo:(unsigned long long)arg2;
- (void)addResource:(id)arg1;
- (id)initWithLocale:(id)arg1;

@end

