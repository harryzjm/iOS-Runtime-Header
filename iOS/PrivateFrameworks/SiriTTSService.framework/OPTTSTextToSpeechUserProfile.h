//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechUserProfile : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechUserProfile *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_4fc92dd1)addObjectToBuffer:(void *)arg1;
- (void)resources_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)resources_count;
- (id)resources_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *resources;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserProfile *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserProfile *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

