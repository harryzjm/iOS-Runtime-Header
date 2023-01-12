//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechSpeechFeatureInputWord : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechSpeechFeatureInputWord *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_2cae1929)addObjectToBuffer:(void *)arg1;
- (void)phonemes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)phonemes_count;
- (id)phonemes_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *phonemes;
@property(readonly, nonatomic) NSString *word;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputWord *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureInputWord *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

