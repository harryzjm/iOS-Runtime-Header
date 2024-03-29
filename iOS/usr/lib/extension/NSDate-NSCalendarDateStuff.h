//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (NSCalendarDateStuff)
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;
+ (id)dateWithNaturalLanguageString:(id)arg1;
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_web_isToday;
- (long long)_web_compareDay:(id)arg1;
- (id)_web_RFC1123DateString;
- (id)replacementObjectForPortCoder:(id)arg1;
@end

