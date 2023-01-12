//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobMultiwayVideoStream : PBCodable
{
    unsigned int _frameRate;
    unsigned int _keyFrameInterval;
    unsigned int _maxMediaBitrate;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxPacketsPerSecond;
    unsigned int _metadata;
    unsigned int _payload;
    unsigned int _qualityIndex;
    unsigned int _repairedMaxNetworkBitrate;
    unsigned int _repairedStreamID;
    unsigned int _ssrc;
    unsigned int _streamID;
    unsigned int _supportedVideoFormats;
    struct {
        unsigned int maxMediaBitrate:1;
        unsigned int maxNetworkBitrate:1;
        unsigned int maxPacketsPerSecond:1;
        unsigned int metadata:1;
        unsigned int repairedMaxNetworkBitrate:1;
        unsigned int repairedStreamID:1;
    } _has;
}

+ (int)payloadForVideoPayload:(int)arg1;
+ (int)videoPayloadForPayload:(int)arg1;
+ (_Bool)convertVideoFormat:(int)arg1 width:(int *)arg2 height:(int *)arg3;
+ (int)videoFormatForWidth:(int)arg1 height:(int)arg2;
@property(nonatomic) unsigned int repairedMaxNetworkBitrate; // @synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate;
@property(nonatomic) unsigned int repairedStreamID; // @synthesize repairedStreamID=_repairedStreamID;
@property(nonatomic) unsigned int maxPacketsPerSecond; // @synthesize maxPacketsPerSecond=_maxPacketsPerSecond;
@property(nonatomic) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(nonatomic) unsigned int keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(nonatomic) unsigned int frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) unsigned int supportedVideoFormats; // @synthesize supportedVideoFormats=_supportedVideoFormats;
@property(nonatomic) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(nonatomic) unsigned int metadata; // @synthesize metadata=_metadata;
@property(nonatomic) unsigned int streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned int payload; // @synthesize payload=_payload;
@property(nonatomic) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasRepairedMaxNetworkBitrate;
@property(nonatomic) _Bool hasRepairedStreamID;
@property(nonatomic) _Bool hasMaxPacketsPerSecond;
@property(nonatomic) _Bool hasMaxMediaBitrate;
@property(nonatomic) _Bool hasMetadata;
@property(nonatomic) _Bool hasMaxNetworkBitrate;
- (void)printWithLogFile:(void *)arg1;
@property(readonly, nonatomic) _Bool isSubStream;
- (id)newMultiwayVideoStream;
- (id)initWithStreamConfig:(id)arg1;

@end

