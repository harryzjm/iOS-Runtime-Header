//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLDataProvider, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLConstrainedDataProvider
{
    NLDataProvider *_dataProvider;
    struct _NLConstraintParameters _parameters;
    NSArray *_locators;
    NSDictionary *_labelMap;
    NSDictionary *_inverseLabelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfLabels;
    unsigned long long _numberOfVocabularyEntries;
}

- (void).cxx_destruct;
- (unsigned long long)numberOfVocabularyEntries;
- (unsigned long long)numberOfLabels;
- (id)documentFrequencyMap;
- (id)vocabularyMap;
- (id)inverseLabelMap;
- (id)labelMap;
- (struct __CFStringTokenizer *)tokenizer;
- (void)_generateMaps;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfInstances;
- (id)configuration;
- (id)initWithDataProvider:(id)arg1 parameters:(struct _NLConstraintParameters)arg2 modelTrainer:(id)arg3;

@end

