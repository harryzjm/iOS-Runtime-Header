//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, OPTTSStartTextToSpeechStreamingRequest;
@protocol FLTBFBufferAccessor><NSCopying;

__attribute__((visibility("hidden")))
@interface OPTTSMutableTextToSpeechRouterStreamingStreamingRequest
{
}

+ (long long)content_typeForObject:(id)arg1;
+ (long long)content_typeForMutableObject:(id)arg1;
+ (Class)content_mutableClassForType:(long long)arg1;
@property(copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content; // @dynamic content;
@property(copy, nonatomic) OPTTSStartTextToSpeechStreamingRequest *contentAsOPTTSStartTextToSpeechStreamingRequest;
@property(nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

