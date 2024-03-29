//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTranslationPhraseMetaInfo : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TranslationPhraseMetaInfo *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_cd9fffa4)addObjectToBuffer:(void *)arg1;
- (void)selection_spans_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)selection_spans_count;
- (id)selection_spans_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *selection_spans;
@property(readonly, nonatomic) NSString *romanization;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhraseMetaInfo *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TranslationPhraseMetaInfo *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

