//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIDate : NSObject
{
}

+ (_Bool)isYearlessComponents:(id)arg1;
+ (id)dateByNormalizingToGMT:(id)arg1;
+ (id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2;
+ (id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2;
+ (id)yearlessGregorianComponentsFromGMTDate:(id)arg1;
+ (id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3;
+ (id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2;
+ (id)gregorianCalendarGMT;
+ (id)currentCalendarGMT;
+ (void)localeDidChange:(id)arg1;
+ (void)initialize;

@end
