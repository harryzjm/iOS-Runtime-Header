//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTextToSpeechSpeechFeatureInputText, FTTextToSpeechSpeechFeatureInputWave, FTTextToSpeechSpeechFeatureModelIdentifier, NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechSpeechFeatureRequest : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechSpeechFeatureRequest *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_72003114)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) _Bool support_homograph;
- (void)lexicon_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)lexicon_count;
- (id)lexicon_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *lexicon;
@property(readonly, nonatomic) FTTextToSpeechSpeechFeatureInputWave *wave_data;
@property(readonly, nonatomic) FTTextToSpeechSpeechFeatureInputText *text;
@property(readonly, nonatomic) FTTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureRequest *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechSpeechFeatureRequest *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

