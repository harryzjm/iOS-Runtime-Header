//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class VCAudioPayloadConfig;

__attribute__((visibility("hidden")))
@interface VCAudioTier : NSObject
{
    unsigned int networkBitrate;
    unsigned int audioCodecBitrate;
    unsigned int packetsPerBundle;
    unsigned int redNumPayloads;
    unsigned int redMaxDelay20ms;
    VCAudioPayloadConfig *payloadConfig;
    int _operatingMode;
    _Bool _bundlingAppliedByCodec;
}

+ (_Bool)bundlingAppliedByCodecForPayload:(int)arg1 operatingMode:(int)arg2;
+ (id)newAudioTierForPayloadConfig:(id)arg1 operatingMode:(int)arg2 audioCodecBitrate:(unsigned int)arg3 packetsPerBundle:(unsigned int)arg4 redNumPayloads:(unsigned int)arg5 headerSize:(unsigned int)arg6;
@property(readonly) VCAudioPayloadConfig *payloadConfig; // @synthesize payloadConfig;
@property(readonly) unsigned int redMaxDelay20ms; // @synthesize redMaxDelay20ms;
@property(readonly) unsigned int redNumPayloads; // @synthesize redNumPayloads;
@property(readonly) unsigned int packetsPerBundle; // @synthesize packetsPerBundle;
@property(readonly) unsigned int audioCodecBitrate; // @synthesize audioCodecBitrate;
@property(readonly) unsigned int networkBitrate; // @synthesize networkBitrate;
- (_Bool)isEqualTo:(id)arg1;
- (id)description;
- (id)initWithNetworkBitrate:(unsigned int)arg1 operatingMode:(int)arg2 audioCodecBitrate:(unsigned int)arg3 packetsPerBundle:(unsigned int)arg4 redNumPayloads:(unsigned int)arg5 payloadConfig:(id)arg6;

@end

