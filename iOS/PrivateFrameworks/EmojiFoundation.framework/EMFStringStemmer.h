//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSLock;

@interface EMFStringStemmer : NSObject
{
    struct sb_stemmer *_stemmer;
    NSLock *_stemmerLock;
    NSLocale *_locale;
    unsigned long long _encoding;
}

+ (struct sb_stemmer *)_createSnowballStemmerForLocale:(id)arg1;
+ (id)stemmerLanguageNameForLocale:(id)arg1;
+ (id)supportedLanguageNames;
+ (unsigned char)supportsLocale:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(readonly, retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (id)stemTokens:(id)arg1;
- (id)stemToken:(id)arg1;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;

@end
