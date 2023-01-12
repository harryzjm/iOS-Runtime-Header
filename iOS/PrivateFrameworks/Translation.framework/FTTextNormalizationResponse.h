//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTextNormalizationResponse : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct TextNormalizationResponse *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_2174ecfb)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
- (void)tokens_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)tokens_count;
- (id)tokens_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextNormalizationResponse *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextNormalizationResponse *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

