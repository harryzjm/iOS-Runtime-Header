//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTMTAlternativeDescription_MTGenderDescription : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct MTGenderDescription *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_4b810de3)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) long long default_gender;
@property(readonly, nonatomic) long long gender;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MTGenderDescription *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct MTGenderDescription *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

