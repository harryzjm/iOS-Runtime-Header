//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTLmScorerResponse : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LmScorerResponse *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_65d7de67)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) double ppl;
- (void)tokens_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)tokens_count;
- (id)tokens_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) NSString *return_str;
@property(readonly, nonatomic) int return_code;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerResponse *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerResponse *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

