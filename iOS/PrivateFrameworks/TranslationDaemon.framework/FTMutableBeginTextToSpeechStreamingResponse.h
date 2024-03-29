//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FTAudioDescription, FTTextToSpeechMeta, NSString;

__attribute__((visibility("hidden")))
@interface FTMutableBeginTextToSpeechStreamingResponse
{
}

@property(nonatomic) float streaming_playback_buffer_size_in_seconds;
@property(copy, nonatomic) FTTextToSpeechMeta *meta_info;
@property(copy, nonatomic) FTAudioDescription *playback_description;
@property(copy, nonatomic) FTAudioDescription *decoder_description;
@property(nonatomic) long long audio_type;
@property(copy, nonatomic) NSString *stream_id;
@property(copy, nonatomic) NSString *error_str;
@property(nonatomic) int error_code;
@property(copy, nonatomic) NSString *session_id;
@property(copy, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

