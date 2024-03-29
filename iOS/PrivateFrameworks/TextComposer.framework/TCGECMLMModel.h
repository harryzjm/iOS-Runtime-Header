//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface TCGECMLMModel : NSObject
{
    struct CoreLanguageModelWithState *_maskedLM;
    unsigned long long _lmVocabSize;
    NSDictionary *_acceptableCorrections;
}

- (void).cxx_destruct;
- (void)enumerateIssuesForSentence:(id)arg1 checkTermination:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)loadCorrectionsFromURL:(id)arg1;
- (void)dealloc;
- (id)initWithModelPath:(id)arg1 OTABundlePath:(id)arg2 options:(id)arg3;

@end

