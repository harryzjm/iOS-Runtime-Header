//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTAudioDescription, FTTextToSpeechMeta, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechCacheMetaInfo : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechCacheMetaInfo *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_e5f1588f)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSString *original_session_id;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) int audio_length;
@property(readonly, nonatomic) FTAudioDescription *playback_description;
@property(readonly, nonatomic) FTAudioDescription *decoder_description;
@property(readonly, nonatomic) _Bool enable_word_timing_info;
@property(readonly, nonatomic) long long audio_type;
@property(readonly, nonatomic) FTTextToSpeechMeta *meta_info;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheMetaInfo *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechCacheMetaInfo *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

