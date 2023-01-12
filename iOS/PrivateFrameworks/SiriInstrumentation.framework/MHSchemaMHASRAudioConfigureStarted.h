//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface MHSchemaMHASRAudioConfigureStarted
{
    int _audioCodec;
    unsigned long long _audioSkippedTimeInNs;
    unsigned long long _audioSkippedNumSamples;
    struct {
        unsigned int audioCodec:1;
        unsigned int audioSkippedTimeInNs:1;
        unsigned int audioSkippedNumSamples:1;
    } _has;
}

@property(nonatomic) unsigned long long audioSkippedNumSamples; // @synthesize audioSkippedNumSamples=_audioSkippedNumSamples;
@property(nonatomic) unsigned long long audioSkippedTimeInNs; // @synthesize audioSkippedTimeInNs=_audioSkippedTimeInNs;
@property(nonatomic) int audioCodec; // @synthesize audioCodec=_audioCodec;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasAudioSkippedNumSamples;
@property(nonatomic) _Bool hasAudioSkippedTimeInNs;
@property(nonatomic) _Bool hasAudioCodec;

@end
