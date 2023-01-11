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
@interface FTEndPointCandidate : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct EndPointCandidate *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_d4bcbfdd)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) int processed_audio_duration_ms;
@property(readonly, nonatomic) int end_point_likelihood;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct EndPointCandidate *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct EndPointCandidate *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end
