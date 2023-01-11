//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDAudioStreamBitRate, HMDAudioStreamNumAudioChannels, HMDAudioStreamPacketTime, HMDAudioStreamSampleRate;

@interface HMDAudioStreamCodecParameters : NSObject <NSCopying>
{
    HMDAudioStreamNumAudioChannels *_numAudioChannels;
    HMDAudioStreamBitRate *_bitRate;
    HMDAudioStreamSampleRate *_sampleRate;
    HMDAudioStreamPacketTime *_packetTime;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) HMDAudioStreamPacketTime *packetTime; // @synthesize packetTime=_packetTime;
@property(retain, nonatomic) HMDAudioStreamSampleRate *sampleRate; // @synthesize sampleRate=_sampleRate;
@property(retain, nonatomic) HMDAudioStreamBitRate *bitRate; // @synthesize bitRate=_bitRate;
@property(retain, nonatomic) HMDAudioStreamNumAudioChannels *numAudioChannels; // @synthesize numAudioChannels=_numAudioChannels;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithNumAudioChannels:(id)arg1 bitRate:(id)arg2 sampleRate:(id)arg3 packetTime:(id)arg4;
- (id)init;

@end

