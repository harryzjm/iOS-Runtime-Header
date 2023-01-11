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
@interface FTRequestStatsResponse : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RequestStatsResponse *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_92033781)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) NSString *request_locale;
@property(readonly, nonatomic) NSString *speech_id;
@property(readonly, nonatomic) NSString *language;
@property(readonly, nonatomic) NSArray *double_stats;
@property(readonly, nonatomic) NSArray *int32_stats;
@property(readonly, nonatomic) NSArray *bool_stats;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RequestStatsResponse *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RequestStatsResponse *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end
