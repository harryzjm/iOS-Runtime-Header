//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface OITSUDateFormatCategoryEntry : NSObject
{
    unsigned short mSeparator;
    struct __CFArray *mFormatters;
    NSMutableSet *mFormatStrings;
}

- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 forceAllowAMPM:(_Bool)arg2 successfulFormatString:(const struct __CFString **)arg3 perfect:(_Bool *)arg4;
- (void)addFormat:(id)arg1 locale:(struct __CFLocale *)arg2;
- (id)formatStrings;
- (unsigned short)separator;
- (void)dealloc;
- (id)initWithSeparator:(unsigned short)arg1;

@end

