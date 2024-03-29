//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPVideoEmbeddings : NSObject
{
    unsigned long long _embeddingSize;
    NSMutableArray *_videoEmbeddings;
    float *_averageEmbedding;
    float *_currentEmbedding;
    long long _embeddingMode;
}

- (void).cxx_destruct;
@property(readonly) long long embeddingMode; // @synthesize embeddingMode=_embeddingMode;
- (id)getEmbeddingsForRange:(CDStruct_e83c9415)arg1;
- (void)dealloc;
- (int)addEmbeddings:(id)arg1 startTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3;
- (id)initWithEmbeddingMode:(long long)arg1;

@end

