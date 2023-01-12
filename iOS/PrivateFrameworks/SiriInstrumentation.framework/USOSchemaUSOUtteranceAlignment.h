//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface USOSchemaUSOUtteranceAlignment
{
    unsigned int _asrHypothesisIndex;
    NSArray *_spans;
    unsigned int _nodeIndex;
    struct {
        unsigned int asrHypothesisIndex:1;
        unsigned int nodeIndex:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int nodeIndex; // @synthesize nodeIndex=_nodeIndex;
@property(copy, nonatomic) NSArray *spans; // @synthesize spans=_spans;
@property(nonatomic) unsigned int asrHypothesisIndex; // @synthesize asrHypothesisIndex=_asrHypothesisIndex;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasNodeIndex;
- (id)spansAtIndex:(unsigned long long)arg1;
- (unsigned long long)spansCount;
- (void)addSpans:(id)arg1;
- (void)clearSpans;
@property(nonatomic) _Bool hasAsrHypothesisIndex;

@end
