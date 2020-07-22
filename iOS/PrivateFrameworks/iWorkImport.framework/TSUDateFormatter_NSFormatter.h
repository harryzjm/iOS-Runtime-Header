//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@class NSString, TSULocale;

__attribute__((visibility("hidden")))
@interface TSUDateFormatter_NSFormatter : NSFormatter
{
    NSString *_preferredFormat;
    _Bool isDateOnly;
    _Bool isTimeOnly;
    TSULocale *_locale;
}

@property(retain, nonatomic) TSULocale *locale; // @synthesize locale=_locale;
@property(nonatomic) _Bool isTimeOnly; // @synthesize isTimeOnly;
@property(nonatomic) _Bool isDateOnly; // @synthesize isDateOnly;
@property(retain, nonatomic) NSString *preferredFormat; // @synthesize preferredFormat=_preferredFormat;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)init;

@end

