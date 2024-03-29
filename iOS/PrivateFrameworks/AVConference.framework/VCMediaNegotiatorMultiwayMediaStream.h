//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorMultiwayMediaStream : NSObject
{
    unsigned int _ssrc;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxMediaBitrate;
    unsigned int _maxPacketsPerSecond;
    unsigned short _streamID;
    _Bool _isSubstream;
    unsigned int _qualityIndex;
    _Bool _hasRepairedStreamID;
    unsigned short _repairedStreamID;
    unsigned int _repairedMaxNetworkBitrate;
}

@property(nonatomic) unsigned int repairedMaxNetworkBitrate; // @synthesize repairedMaxNetworkBitrate=_repairedMaxNetworkBitrate;
@property(nonatomic) unsigned short repairedStreamID; // @synthesize repairedStreamID=_repairedStreamID;
@property(nonatomic) _Bool hasRepairedStreamID; // @synthesize hasRepairedStreamID=_hasRepairedStreamID;
@property(nonatomic) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(nonatomic) _Bool isSubstream; // @synthesize isSubstream=_isSubstream;
@property(nonatomic) unsigned short streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned int maxPacketsPerSecond; // @synthesize maxPacketsPerSecond=_maxPacketsPerSecond;
@property(nonatomic) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(nonatomic) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(nonatomic) unsigned int ssrc; // @synthesize ssrc=_ssrc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

