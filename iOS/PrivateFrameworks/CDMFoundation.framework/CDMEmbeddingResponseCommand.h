//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CDMTokenChain, NLv4EmbeddingTensor;

@interface CDMEmbeddingResponseCommand
{
    NLv4EmbeddingTensor *_embeddingTensor;
    CDMTokenChain *_tokenChain;
    unsigned long long _numTokens;
    unsigned long long _numLayers;
    unsigned long long _embeddingDim;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long embeddingDim; // @synthesize embeddingDim=_embeddingDim;
@property(readonly, nonatomic) unsigned long long numLayers; // @synthesize numLayers=_numLayers;
@property(readonly, nonatomic) unsigned long long numTokens; // @synthesize numTokens=_numTokens;
@property(readonly, nonatomic) CDMTokenChain *tokenChain; // @synthesize tokenChain=_tokenChain;
@property(readonly, nonatomic) NLv4EmbeddingTensor *embeddingTensor; // @synthesize embeddingTensor=_embeddingTensor;
- (id)dictionaryRepresentation;
- (id)commandName;
- (id)initWithTokenChain:(id)arg1 embeddingTensor:(id)arg2 numTokens:(unsigned long long)arg3 numLayers:(unsigned long long)arg4 embeddingDim:(unsigned long long)arg5;

@end
