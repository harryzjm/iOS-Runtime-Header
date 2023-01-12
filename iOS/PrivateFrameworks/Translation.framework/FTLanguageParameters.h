//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTLanguageParameters : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LanguageParameters *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_3379e06c)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSString *fork_id;
@property(readonly, nonatomic) NSString *request_locale;
@property(readonly, nonatomic) NSString *language;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageParameters *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguageParameters *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

