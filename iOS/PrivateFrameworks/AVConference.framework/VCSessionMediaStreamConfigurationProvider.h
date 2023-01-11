//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCSessionMediaStreamConfigurationProvider : NSObject
{
    NSMutableArray *_allocatedStreamIDs;
    NSMutableArray *_audioStreamConfigurations;
    NSMutableArray *_videoStreamConfigurations;
    long long _highestEncodingResolution;
    _Bool _isEncodingSqaures;
}

+ (void)computeMaxNetworkBitrate:(unsigned int *)arg1 maxMediaBitrate:(unsigned int *)arg2 maxPacketsPerSecond:(float *)arg3 audioStreamIndex:(unsigned int)arg4;
@property(readonly, nonatomic) _Bool isEncodingSqaures; // @synthesize isEncodingSqaures=_isEncodingSqaures;
@property(readonly, nonatomic) long long highestEncodingResolution; // @synthesize highestEncodingResolution=_highestEncodingResolution;
@property(readonly, nonatomic) NSArray *audioStreamConfigurations; // @synthesize audioStreamConfigurations=_audioStreamConfigurations;
@property(readonly, nonatomic) NSArray *videoStreamConfigurations; // @synthesize videoStreamConfigurations=_videoStreamConfigurations;
- (id)audioRuleCollectionWithAudioConfig:(struct _VCMediaStreamConfigurationProviderAudio *)arg1 supportedAudioRules:(id)arg2;
- (_Bool)initializeAudioStreamWithIndex:(unsigned int)arg1 supportedAudioRules:(id)arg2;
- (_Bool)initializeAudioStreams;
- (_Bool)initializeVideoStreamWithDefaults;
- (_Bool)initializeVideoStreamWithConfig:(struct _VCMediaStreamConfigurationProviderVideo *)arg1 streamIndex:(unsigned int)arg2;
- (int)streamPayloadFromProviderConfig:(struct _VCMediaStreamConfigurationProviderVideo *)arg1;
- (_Bool)initializeVideoStreams;
- (unsigned short)generateStreamID;
- (_Bool)initializeStreams;
- (void)dealloc;
- (id)init;

@end

