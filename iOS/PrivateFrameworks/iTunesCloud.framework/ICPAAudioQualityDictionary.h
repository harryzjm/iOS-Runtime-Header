//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ICPAAudioQualityDictionary : PBCodable
{
    long long _bitDepth;
    long long _bitRate;
    long long _sampleRate;
    NSString *_channelLayoutDescription;
    unsigned int _codec;
    _Bool _isSpatialized;
    struct {
        unsigned int bitDepth:1;
        unsigned int bitRate:1;
        unsigned int sampleRate:1;
        unsigned int codec:1;
        unsigned int isSpatialized:1;
    } _has;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

