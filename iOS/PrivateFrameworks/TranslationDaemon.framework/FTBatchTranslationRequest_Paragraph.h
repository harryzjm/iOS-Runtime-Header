//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTBatchTranslationRequest_Paragraph : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct Paragraph *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_1be97c44)addObjectToBuffer:(void *)arg1;
- (void)span_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)span_count;
- (id)span_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *span;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) NSString *paragraph_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Paragraph *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct Paragraph *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

