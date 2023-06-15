//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;
@protocol VCSessionDownlinkBandwidthAllocatorClient, VCSessionUplinkBandwidthAllocatorClient;

__attribute__((visibility("hidden")))
@interface VCSessionBandwidthAllocationTableEntry : NSObject
{
    id <VCSessionDownlinkBandwidthAllocatorClient> _client;
    NSNumber *_streamToken;
    unsigned int _minNetworkBitrate;
    unsigned int _maxNetworkBitrate;
    unsigned int _maxMediaBitrate;
    unsigned int _qualityIndex;
    _Bool _isLowestQuality;
    unsigned char _type;
    unsigned int _streamID;
    unsigned int _actualNetworkBitrate;
    _Bool _hasRepairStreamID;
    unsigned int _repairStreamID;
    unsigned int _repairMaxNetworkBitrate;
    _Bool _onDemand;
    unsigned int _streamGroupID;
    unsigned int _encoderGroupID;
    NSDictionary *_upgradeQualityTiers;
    _Bool _subscribedTo;
    _Bool _startOnDemand;
    id <VCSessionUplinkBandwidthAllocatorClient> _uplinkClient;
}

+ (long long)compareAudioEntry:(id)arg1 videoEntry:(id)arg2;
+ (long long)compareVideoEntry:(id)arg1 videoEntry:(id)arg2;
+ (long long)compareAudioEntry:(id)arg1 audioEntry:(id)arg2;
+ (unsigned char)entryTypeForMediaType:(unsigned int)arg1;
@property(readonly) id <VCSessionUplinkBandwidthAllocatorClient> uplinkClient; // @synthesize uplinkClient=_uplinkClient;
@property(readonly) NSNumber *streamToken; // @synthesize streamToken=_streamToken;
@property(readonly) unsigned int encoderGroupID; // @synthesize encoderGroupID=_encoderGroupID;
@property(readonly) unsigned int streamGroupID; // @synthesize streamGroupID=_streamGroupID;
@property(readonly, getter=isStartOnDemand) _Bool startOnDemand; // @synthesize startOnDemand=_startOnDemand;
@property(getter=isSubscribedTo) _Bool subscribedTo; // @synthesize subscribedTo=_subscribedTo;
@property(readonly) _Bool hasRepairStreamID; // @synthesize hasRepairStreamID=_hasRepairStreamID;
@property(readonly) unsigned int repairMaxNetworkBitrate; // @synthesize repairMaxNetworkBitrate=_repairMaxNetworkBitrate;
@property(readonly) unsigned int repairStreamID; // @synthesize repairStreamID=_repairStreamID;
@property unsigned int actualNetworkBitrate; // @synthesize actualNetworkBitrate=_actualNetworkBitrate;
@property(readonly) unsigned int streamID; // @synthesize streamID=_streamID;
@property(readonly) unsigned char type; // @synthesize type=_type;
@property _Bool isLowestQuality; // @synthesize isLowestQuality=_isLowestQuality;
@property(readonly) unsigned int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
@property(readonly) unsigned int maxMediaBitrate; // @synthesize maxMediaBitrate=_maxMediaBitrate;
@property(readonly) unsigned int maxNetworkBitrate; // @synthesize maxNetworkBitrate=_maxNetworkBitrate;
@property(readonly) unsigned int minNetworkBitrate; // @synthesize minNetworkBitrate=_minNetworkBitrate;
@property(readonly) id <VCSessionDownlinkBandwidthAllocatorClient> client; // @synthesize client=_client;
- (long long)compare:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 streamToken:(long long)arg3 streamID:(unsigned int)arg4 streamGroupID:(unsigned int)arg5;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 streamToken:(long long)arg3 minNetworkBitrate:(unsigned int)arg4 maxNetworkBitrate:(unsigned int)arg5 mediaBitrate:(unsigned int)arg6 qualityIndex:(unsigned int)arg7 streamID:(unsigned int)arg8 hasRepairStreamID:(_Bool)arg9 repairStreamID:(unsigned int)arg10 repairMaxNetworkBitrate:(unsigned int)arg11 subscribedTo:(_Bool)arg12 startOnDemand:(_Bool)arg13 streamGroupID:(unsigned int)arg14 encoderGroupID:(unsigned int)arg15;
- (id)initWithClient:(id)arg1 type:(unsigned char)arg2 streamToken:(long long)arg3 networkBitrate:(unsigned int)arg4 mediaBitrate:(unsigned int)arg5 qualityIndex:(unsigned int)arg6 streamID:(unsigned int)arg7 streamGroupID:(unsigned int)arg8;

@end

