//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioUnitSpatialContext : NSObject
{
    unsigned int _audioSessionId;
    unsigned int _maxChannelCountMic;
    unsigned int _maxChannelCountSpeaker;
    struct OpaqueCMBlockBuffer *_spatialMetadata;
}

@property(nonatomic) unsigned int maxChannelCountSpeaker; // @synthesize maxChannelCountSpeaker=_maxChannelCountSpeaker;
@property(nonatomic) unsigned int maxChannelCountMic; // @synthesize maxChannelCountMic=_maxChannelCountMic;
@property(nonatomic) unsigned int audioSessionId; // @synthesize audioSessionId=_audioSessionId;
- (void)dealloc;
@property(nonatomic) struct OpaqueCMBlockBuffer *spatialMetadata;
- (id)initWithAudioSessionId:(unsigned int)arg1 maxChannelCountMic:(unsigned int)arg2 maxChannelCountSpeaker:(unsigned int)arg3 spatialMetadata:(struct OpaqueCMBlockBuffer *)arg4;

@end
