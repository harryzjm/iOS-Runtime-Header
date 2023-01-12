//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechSpeechFeatureInputWave : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechSpeechFeatureInputWave *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_efc89d55)addObjectToBuffer:(void *)arg1;
- (void)pcm_data:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSData *pcm_data;
@property(readonly, nonatomic) int sample_rate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputWave *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputWave *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

