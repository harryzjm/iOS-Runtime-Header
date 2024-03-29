//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (RCAdditions)
+ (id)_fr_sharedYearAndMonthDateFormatter;
+ (id)rc_laterDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)rc_earlierDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)rc_dateWithMillisecondTimeIntervalSince1970:(unsigned long long)arg1;
+ (id)rc_dateFromStringWithHTTPHeaderFormat:(id)arg1;
+ (id)rc_dateFromStringWithISO8601Format:(id)arg1;
+ (id)rc_dateFromString:(id)arg1 possibleFormats:(id)arg2;
- (id)rc_stringWithYearAndMonthFormat;
- (id)rc_stringWithISO8601Format;
- (_Bool)rc_isSameDayAs:(id)arg1;
@property(readonly, nonatomic) _Bool rc_isWeekend;
- (_Bool)isToday;
- (long long)rc_GregorianCalendarDaysSinceDate:(id)arg1;
- (id)rc_dateOfEarliestGregorianCalendarDay;
- (unsigned long long)rc_millisecondTimeIntervalSinceDate:(id)arg1;
- (unsigned long long)rc_millisecondTimeIntervalSince1970;
- (id)rc_dateBySubtractingTimeInterval:(double)arg1;
- (_Bool)rc_isWithinTimeInterval:(double)arg1 ofDate:(id)arg2;
- (_Bool)rc_isLaterThan:(id)arg1 withPrecision:(long long)arg2;
- (_Bool)rc_isLaterThanOrEqualTo:(id)arg1;
- (_Bool)rc_isLaterThan:(id)arg1;
- (_Bool)rc_isEarlierThan:(id)arg1 withPrecision:(long long)arg2;
- (_Bool)rc_isEarlierThanOrEqualTo:(id)arg1;
- (_Bool)rc_isEarlierThan:(id)arg1;
@property(readonly) double rc_timeIntervalUntilNow;
@end

