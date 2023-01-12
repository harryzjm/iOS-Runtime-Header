//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTNormalizedToken : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct NormalizedToken *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_e63aca8d)addObjectToBuffer:(void *)arg1;
- (void)nbest_variants_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)nbest_variants_count;
- (id)nbest_variants_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *nbest_variants;
@property(readonly, nonatomic) NSString *original_token;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NormalizedToken *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct NormalizedToken *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

