//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface UPPLAlternativePrediction : NSObject
{
    NSArray *_chunkPredictions;
    NSNumber *_nerScore;
    unsigned long long _alternativeIndex;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long alternativeIndex; // @synthesize alternativeIndex=_alternativeIndex;
@property(readonly, nonatomic) NSNumber *nerScore; // @synthesize nerScore=_nerScore;
@property(readonly, nonatomic) NSArray *chunkPredictions; // @synthesize chunkPredictions=_chunkPredictions;
- (id)dictionaryRepresentation;
- (id)initWithChunkPredictions:(id)arg1 nerScore:(id)arg2 alternativeIndex:(unsigned long long)arg3;

@end
