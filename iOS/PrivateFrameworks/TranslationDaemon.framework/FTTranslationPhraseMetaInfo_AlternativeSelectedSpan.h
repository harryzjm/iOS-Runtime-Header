//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Range, NSArray, NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTranslationPhraseMetaInfo_AlternativeSelectedSpan : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct AlternativeSelectedSpan *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_1ee2c618)addObjectToBuffer:(void *)arg1;
- (void)alternatives_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)alternatives_count;
- (id)alternatives_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *alternatives;
- (void)projection_ranges_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)projection_ranges_count;
- (id)projection_ranges_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *projection_ranges;
@property(readonly, nonatomic) FTTranslationPhraseMetaInfo_AlternativeSelectedSpan_Range *source_range;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AlternativeSelectedSpan *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct AlternativeSelectedSpan *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

