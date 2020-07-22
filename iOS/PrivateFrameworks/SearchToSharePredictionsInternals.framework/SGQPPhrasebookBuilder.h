//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SGQPPhrasebookBuilder : NSObject
{
    NSMutableArray *_entries;
    int _maxTokensPerEntry;
    struct __CFStringTokenizer *_tokenizer;
}

- (void).cxx_destruct;
- (void)serializeToFileAtPath:(id)arg1;
- (void)sortEntries;
- (void)addEntry:(id)arg1 predictionType:(unsigned int)arg2 payload:(double)arg3;
- (void)addNormalizedEntry:(id)arg1 predictionType:(unsigned int)arg2 payload:(double)arg3 ntokens:(int)arg4;
- (void)dealloc;
- (id)init;

@end

