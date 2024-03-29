//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2CodecFeatures : PBCodable
{
    unsigned int _audioFeatures;
    NSData *_videoFeatures;
    struct {
        unsigned int audioFeatures:1;
    } _has;
}

@property(retain, nonatomic) NSData *videoFeatures; // @synthesize videoFeatures=_videoFeatures;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasVideoFeatures;
@property(nonatomic) _Bool hasAudioFeatures;
@property(nonatomic) unsigned int audioFeatures; // @synthesize audioFeatures=_audioFeatures;
- (void)dealloc;
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;
@property(readonly, nonatomic) _Bool allowAudioRecording;
- (id)initWithAllowAudioRecording:(_Bool)arg1 videoFeatures:(id)arg2;

@end

