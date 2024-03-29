//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, OPTTSAudioDescription, OPTTSTextToSpeechMeta;

__attribute__((visibility("hidden")))
@interface OPTTSBeginTextToSpeechStreamingResponse : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BeginTextToSpeechStreamingResponse *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_afb4d078)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) float streaming_playback_buffer_size_in_seconds;
@property(readonly, nonatomic) OPTTSTextToSpeechMeta *meta_info;
@property(readonly, nonatomic) OPTTSAudioDescription *playback_description;
@property(readonly, nonatomic) OPTTSAudioDescription *decoder_description;
@property(readonly, nonatomic) long long audio_type;
@property(readonly, nonatomic) NSString *stream_id;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BeginTextToSpeechStreamingResponse *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BeginTextToSpeechStreamingResponse *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

