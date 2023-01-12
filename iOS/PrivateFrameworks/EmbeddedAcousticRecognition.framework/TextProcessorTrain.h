//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, _EARLMTKaldiVocab;

__attribute__((visibility("hidden")))
@interface TextProcessorTrain : NSObject
{
    NSMutableArray *_text;
    _EARLMTKaldiVocab *_vocab;
    long long *_numValidTokens;
}

- (void).cxx_destruct;
- (long long)numberTokens;
- (unsigned long long)numberSamples;
- (id)textSequence;
- (void)shuffleSamples;
- (void)addTokenizedText:(id)arg1 length:(unsigned long long)arg2;
- (void)addText:(id)arg1 length:(unsigned long long)arg2;
- (void)addText:(id)arg1;
- (id)initWithVocab:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

