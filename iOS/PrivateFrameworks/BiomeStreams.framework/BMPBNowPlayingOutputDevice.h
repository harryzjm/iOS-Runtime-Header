//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBNowPlayingOutputDevice : PBCodable <NSCopying>
{
    NSString *_outputDeviceId;
    int _outputDeviceSubType;
    int _outputDeviceType;
    struct {
        unsigned int outputDeviceSubType:1;
        unsigned int outputDeviceType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *outputDeviceId; // @synthesize outputDeviceId=_outputDeviceId;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOutputDeviceId;
- (int)StringAsOutputDeviceSubType:(id)arg1;
- (id)outputDeviceSubTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasOutputDeviceSubType;
@property(nonatomic) int outputDeviceSubType; // @synthesize outputDeviceSubType=_outputDeviceSubType;
- (int)StringAsOutputDeviceType:(id)arg1;
- (id)outputDeviceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasOutputDeviceType;
@property(nonatomic) int outputDeviceType; // @synthesize outputDeviceType=_outputDeviceType;

@end
