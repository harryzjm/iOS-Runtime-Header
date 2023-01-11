//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechVoiceResource : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechVoiceResource *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_25ba67b1)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
- (void)data:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) long long type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoiceResource *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoiceResource *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end
