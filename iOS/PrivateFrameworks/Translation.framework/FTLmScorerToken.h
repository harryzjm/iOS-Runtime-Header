//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTLmScorerToken : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LmScorerToken *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_72cd248a)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) int ngram_used;
@property(readonly, nonatomic) double log10_score;
@property(readonly, nonatomic) NSString *token_str;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerToken *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LmScorerToken *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

