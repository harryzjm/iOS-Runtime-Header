//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OPTTSTTSRequestFeatureFlags : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TTSRequestFeatureFlags *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_668da1f4)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) _Bool fe_feature_only;
@property(readonly, nonatomic) _Bool fe_feature;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSRequestFeatureFlags *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TTSRequestFeatureFlags *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

