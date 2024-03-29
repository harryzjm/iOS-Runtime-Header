//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTRecoverPronsResponse : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecoverPronsResponse *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_78eafd8b)addObjectToBuffer:(void *)arg1;
- (void)voc_tokens_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)voc_tokens_count;
- (id)voc_tokens_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *voc_tokens;
- (void)recovery_return_codes_enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)recovery_return_codes_count;
- (id)recovery_return_codes_objectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *recovery_return_codes;
@property(readonly, nonatomic) NSString *error_str;
@property(readonly, nonatomic) int error_code;
@property(readonly, nonatomic) NSString *session_id;
@property(readonly, nonatomic) NSString *speech_id;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecoverPronsResponse *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct RecoverPronsResponse *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

