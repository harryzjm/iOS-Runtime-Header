//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class FTBatchTranslationResponse, FTFinalBlazarResponse, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationStreamingResponse : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct BatchTranslationStreamingResponse *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_149a05be)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property(readonly, nonatomic) FTBatchTranslationResponse *contentAsFTBatchTranslationResponse;
@property(readonly, nonatomic) long long content_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationStreamingResponse *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct BatchTranslationStreamingResponse *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end
