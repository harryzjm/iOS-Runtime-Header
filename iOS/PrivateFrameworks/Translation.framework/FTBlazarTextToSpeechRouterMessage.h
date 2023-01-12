//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTextToSpeechRequest, FTTextToSpeechResponse, NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface FTBlazarTextToSpeechRouterMessage : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BlazarTextToSpeechRouterMessage *_root;
}

+ (long long)session_message_typeForImmutableObject:(id)arg1;
+ (Class)session_message_immutableClassForType:(long long)arg1;
- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_e049ffc0)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property(readonly, nonatomic) FTTextToSpeechResponse *session_messageAsFTTextToSpeechResponse;
@property(readonly, nonatomic) FTTextToSpeechRequest *session_messageAsFTTextToSpeechRequest;
@property(readonly, nonatomic) long long session_message_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarTextToSpeechRouterMessage *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BlazarTextToSpeechRouterMessage *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

