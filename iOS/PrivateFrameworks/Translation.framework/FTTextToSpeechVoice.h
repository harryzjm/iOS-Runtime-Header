//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechVoice : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechVoice *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_b4fd9e28)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) NSString *quality;
@property(readonly, nonatomic) NSString *version;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *gender;
@property(readonly, nonatomic) NSString *language;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoice *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechVoice *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end
