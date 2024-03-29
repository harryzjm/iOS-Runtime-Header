//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechRequestContext : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechRequestContext *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_07052b8d)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSString *dialog_identifier;
- (void)context_info_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)context_info_count;
- (id)context_info_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *context_info;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestContext *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRequestContext *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

