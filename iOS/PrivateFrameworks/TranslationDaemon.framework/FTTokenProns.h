//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTokenProns : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TokenProns *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_5b0c17b4)addObjectToBuffer:(void *)arg1;
- (void)normalized_prons_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)normalized_prons_count;
- (id)normalized_prons_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *normalized_prons;
- (void)prons_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)prons_count;
- (id)prons_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *prons;
- (void)sanitized_sequences_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)sanitized_sequences_count;
- (id)sanitized_sequences_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *sanitized_sequences;
@property(readonly, nonatomic) NSString *orthography;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TokenProns *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TokenProns *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

