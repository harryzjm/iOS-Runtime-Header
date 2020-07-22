//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FIUIDateFormattingUtilities : NSObject
{
}

+ (id)stringWithDayNameAndShortMonthFromDate:(id)arg1;
+ (id)stringWithEitherTodayOrLongStyleDateFromDate:(id)arg1;
+ (id)_localizedTodayFormatterWithTemplate:(id)arg1;
+ (id)timeRangeStringFromDateInterval:(id)arg1;
+ (id)timeStringWithSpaceRemoved:(id)arg1 date:(id)arg2;
+ (_Bool)_dateStringFits:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
+ (id)timeFormatter;
+ (id)stringWithShortStyleDate:(id)arg1;
+ (id)stringWithLongestStyleDate:(id)arg1 font:(id)arg2 maxWidth:(double)arg3;
+ (id)_dateFormatter;

@end

