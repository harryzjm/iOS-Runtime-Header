//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, OPTTSStartTextToSpeechStreamingRequest;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface OPTTSTextToSpeechRouterStreamingStreamingRequest : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextToSpeechRouterStreamingStreamingRequest *_root;
}

+ (long long)content_typeForImmutableObject:(id)arg1;
+ (Class)content_immutableClassForType:(long long)arg1;
- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_5ef787ef)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;
@property(readonly, nonatomic) OPTTSStartTextToSpeechStreamingRequest *contentAsOPTTSStartTextToSpeechStreamingRequest;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingRequest *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechRouterStreamingStreamingRequest *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

