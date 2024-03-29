//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FTTranslationSupportedLanguagesResponse_LanguagePair : NSObject
{
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LanguagePair *_root;
}

- (void).cxx_destruct;
- (id)flatbuffData;
- (Offset_614cd169)addObjectToBuffer:(void *)arg1;
@property(readonly, nonatomic) NSString *target_locale;
@property(readonly, nonatomic) NSString *source_locale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguagePair *)arg2 verify:(_Bool)arg3;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct LanguagePair *)arg2;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;

@end

