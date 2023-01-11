//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTServerEndpointFeatures : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct ServerEndpointFeatures *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_0434d32c)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) NSString *speech_id;
@property(readonly, nonatomic) NSString *task_name;
@property(readonly, nonatomic) double silence_posterior;
@property(readonly, nonatomic) NSArray *pause_counts;
@property(readonly, nonatomic) double eos_likelihood;
@property(readonly, nonatomic) int trailing_silence_duration;
@property(readonly, nonatomic) int num_of_words;
@property(readonly, nonatomic) int processed_audio_duration_ms;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServerEndpointFeatures *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct ServerEndpointFeatures *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end
