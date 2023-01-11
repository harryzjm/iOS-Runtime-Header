//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLModelConfiguration, NSArray, NSDictionary;

@interface NLDataProvider : NSObject
{
    NLModelConfiguration *_configuration;
    struct __CFStringTokenizer *_tokenizer;
    NSArray *_instances;
    NSDictionary *_labelMap;
    NSDictionary *_inverseLabelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfLabels;
    unsigned long long _numberOfVocabularyEntries;
    unsigned long long _numberOfTokens;
    _Bool _generatedMaps;
}

- (void).cxx_destruct;
- (unsigned long long)numberOfTokens;
- (unsigned long long)numberOfVocabularyEntries;
- (unsigned long long)numberOfLabels;
- (id)documentFrequencyMap;
- (id)vocabularyMap;
- (id)inverseLabelMap;
- (id)labelMap;
- (struct __CFStringTokenizer *)tokenizer;
- (void)generateMapsWithModelTrainer:(id)arg1;
- (void)_generateMaps;
- (void)_generateMapsWithModelTrainer:(id)arg1;
- (id)instanceAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long numberOfInstances;
@property(readonly, copy) NLModelConfiguration *configuration;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 dataURL:(id)arg2;

@end

