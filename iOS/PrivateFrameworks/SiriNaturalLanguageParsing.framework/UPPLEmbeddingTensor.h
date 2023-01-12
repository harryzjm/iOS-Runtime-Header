//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface UPPLEmbeddingTensor : NSObject
{
    NSArray *_values;
    unsigned long long _numTokens;
    unsigned long long _numLayers;
    unsigned long long _embeddingDim;
    NSString *_embedderId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *embedderId; // @synthesize embedderId=_embedderId;
@property(readonly, nonatomic) unsigned long long embeddingDim; // @synthesize embeddingDim=_embeddingDim;
@property(readonly, nonatomic) unsigned long long numLayers; // @synthesize numLayers=_numLayers;
@property(readonly, nonatomic) unsigned long long numTokens; // @synthesize numTokens=_numTokens;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)dictionaryRepresentation;
- (id)initWithValues:(id)arg1 withNumTokens:(unsigned long long)arg2 withNumLayers:(unsigned long long)arg3 withEmbeddingDim:(unsigned long long)arg4 withEmbedderId:(id)arg5;

@end
