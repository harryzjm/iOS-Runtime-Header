//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorStreamGroupStreamConfiguration : NSObject <NSCopying>
{
    unsigned char _streamIndex;
    unsigned int _ssrc;
    unsigned short _streamID;
    NSMutableSet *_payloads;
    unsigned int _metadata;
    unsigned int _qualityIndex;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxMediaBitrate;
    unsigned int _maxPacketsPerSecond;
    unsigned short _repairedStreamID;
    unsigned int _repairedMaxNetworkBitrate;
    struct CGSize _resolution;
    unsigned int _framerate;
    unsigned int _keyFrameInterval;
    unsigned int _rtpTimestampRate;
    unsigned short _parentStreamID;
    NSMutableArray *_codecs;
    _Bool _isTemporalStream;
    _Bool _isSubStream;
    unsigned int _audioChannelCount;
    unsigned long long _serializedSize;
}

+ (id)configWithQualityIndex:(unsigned int)arg1 nwBitrate:(unsigned int)arg2 mediaBitrate:(unsigned int)arg3 maxPacketsPerSecond:(unsigned int)arg4 repairedNwBitrate:(unsigned int)arg5 keyFrameInterval:(unsigned int)arg6 framerate:(unsigned int)arg7 rtpSampleRate:(unsigned int)arg8 isTemporal:(_Bool)arg9 isSubStream:(_Bool)arg10 metadata:(unsigned int)arg11 payloads:(id)arg12 codecs:(id)arg13 width:(unsigned int)arg14 height:(unsigned int)arg15 audioChannelCount:(unsigned int)arg16 streamIndex:(unsigned char)arg17;
@property(nonatomic) unsigned char streamIndex; // @synthesize streamIndex=_streamIndex;
@property(nonatomic) unsigned long long serializedSize; // @synthesize serializedSize=_serializedSize;
@property(nonatomic) unsigned int audioChannelCount; // @synthesize audioChannelCount=_audioChannelCount;
@property(nonatomic) _Bool isSubStream; // @synthesize isSubStream=_isSubStream;
@property(nonatomic) _Bool isTemporalStream; // @synthesize isTemporalStream=_isTemporalStream;
@property(nonatomic) unsigned short parentStreamID; // @synthesize parentStreamID=_parentStreamID;
@property(readonly, nonatomic) NSArray *codecs; // @synthesize codecs=_codecs;
@property(nonatomic) unsigned int rtpTimestampRate; // @synthesize rtpTimestampRate=_rtpTimestampRate;
@property(nonatomic) unsigned int keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(nonatomic) unsigned int framerate; // @synthesize framerate=_framerate;
@property(nonatomic) struct CGSize resolution; // @synthesize resolution=_resolution;
@property(nonatomic) unsigned int repairedMaxNetworkBitrate; // @synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate;
@property(nonatomic) unsigned short repairedStreamID; // @synthesize repairedStreamID=_repairedStreamID;
@property(nonatomic) unsigned int maxPacketsPerSecond; // @synthesize maxPacketsPerSecond=_maxPacketsPerSecond;
@property(nonatomic) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(nonatomic) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(nonatomic) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(nonatomic) unsigned int metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSSet *payloads; // @synthesize payloads=_payloads;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualPayloads:(id)arg1;
- (_Bool)applyCipherSuiteOnMediaStreamConfig:(id)arg1 codecConfigs:(id)arg2;
- (_Bool)areCodecsEqualTo:(id)arg1;
- (void)resetCodecs;
- (void)removeCodec:(unsigned int)arg1;
- (void)addCodec:(unsigned int)arg1;
- (void)resetPayloads;
- (void)addPayload:(int)arg1;
- (void)dealloc;
- (id)init;

@end
