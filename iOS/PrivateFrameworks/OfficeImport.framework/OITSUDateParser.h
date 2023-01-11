//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDateParser : NSObject
{
    NSMutableArray *mFormatCategories;
    OITSULocale *mLocale;
    _Bool mIsJapaneseLocale;
    struct __CFDateFormatter *mSpecialCaseFormatter;
}

- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 successfulFormatString:(const struct __CFString **)arg2;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 preferredFormatString:(struct __CFString *)arg2 successfulFormatString:(const struct __CFString **)arg3 tryAggressiveFormats:(_Bool)arg4;
- (struct __CFDate *)newDateFromStringTryingFormats:(struct __CFString *)arg1 locale:(struct __CFLocale *)arg2 formats:(id)arg3 outSuccessfulFormatString:(const struct __CFString **)arg4;
- (struct __CFDateFormatter *)specialCaseDateFormatterForLocale:(struct __CFLocale *)arg1;
- (void)dealloc;
- (id)formatStringsDictionary;
- (id)initWithLocale:(id)arg1;
- (void)parseFormat:(id)arg1 initialPattern:(id *)arg2 separator:(unsigned short *)arg3;
- (void)addFormat:(id)arg1 locale:(struct __CFLocale *)arg2 formatCategoryMap:(id)arg3;

@end

