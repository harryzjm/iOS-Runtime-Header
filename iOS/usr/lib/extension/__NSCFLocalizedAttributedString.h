//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSCFLocalizedAttributedString <NSSecureCoding>
{
    NSAttributedString *_original;
    NSDictionary *_formatConfiguration;
}

+ (id)whitelistedStringWithAttributedString:(id)arg1;
+ (const struct __CFString *)createStringRequiringInflectionWithFormat:(struct __CFString *)arg1 formatOptions:(struct __CFDictionary *)arg2 arguments:(char *)arg3;
+ (const struct __CFString *)copyStringWithMarkup:(struct __CFString *)arg1 formatConfiguration:(struct __CFDictionary *)arg2;
- (const char *)_fastCStringContents:(_Bool)arg1;
- (const unsigned short *)_fastCharacterContents;
- (_Bool)isEqualToString:(id)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (id)substringWithRange:(struct _NSRange)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (id)substringFromIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)fastestEncoding;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)__baseAttributedString;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)_initWithAttributedString:(id)arg1;
- (id)initWithAttributedStringMarkup:(id)arg1 formatConfiguration:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;

@end
