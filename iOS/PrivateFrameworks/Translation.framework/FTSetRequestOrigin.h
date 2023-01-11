//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/FLTBFBufferAccessor-Protocol.h>
#import <Translation/NSCopying-Protocol.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTSetRequestOrigin : NSObject <FLTBFBufferAccessor, NSCopying>
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SetRequestOrigin *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_d926c39e)addObjectToBuffer:(struct FlatBufferBuilder *)arg1;
@property(readonly, nonatomic) _Bool enable_geo_location_features;
@property(readonly, nonatomic) double longitude;
@property(readonly, nonatomic) double latitude;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetRequestOrigin *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct SetRequestOrigin *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end
