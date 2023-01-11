//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

#import <NewsCore/FCKeyValueStoreCoding-Protocol.h>

@class NSString;

@interface NSDate (FCKVSCoding) <FCKeyValueStoreCoding>
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (int)keyValuePairType;
+ (id)_fr_sharedYearAndMonthDateFormatter;
+ (id)fc_dateRoundedToNearestDayForDate:(id)arg1;
+ (id)fc_dateRoundedToNearestMinuteForDate:(id)arg1;
+ (id)fc_laterDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)fc_earlierDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)fc_dateWithMillisecondTimeIntervalSince1970:(unsigned long long)arg1;
+ (id)fc_dateFromStringWithHTTPHeaderFormat:(id)arg1;
+ (id)fc_dateFromStringWithISO8601Format:(id)arg1;
+ (id)fc_dateFromString:(id)arg1 possibleFormats:(id)arg2;
+ (double)fc_timeIntervalOneWeek;
+ (double)fc_timeIntervalOneDay;
+ (double)fc_timeIntervalOneHour;
+ (id)pbDate;
+ (id)dateWithPBDate:(id)arg1;
- (void)writeToKeyValuePair:(id)arg1;
- (id)fc_adjustToRecentDate;
- (id)fc_stringWithYearAndMonthFormat;
- (id)fc_stringWithISO8601Format;
- (id)fc_dateByRoundingDownToNearestQuarterHour;
- (_Bool)fc_isSameDayAs:(id)arg1;
@property(readonly, nonatomic) _Bool fc_isWeekend;
- (_Bool)isToday;
- (long long)fc_GregorianCalendarDaysSinceDate:(id)arg1;
- (id)fc_dateOfEarliestGregorianCalendarDay;
- (unsigned long long)fc_millisecondTimeIntervalSinceDate:(id)arg1;
- (unsigned long long)fc_millisecondTimeIntervalSince1970;
- (id)fc_dateBySubtractingTimeInterval:(double)arg1;
- (_Bool)fc_isWithinTimeInterval:(double)arg1 ofDate:(id)arg2;
- (_Bool)fc_isLaterThan:(id)arg1 withPrecision:(long long)arg2;
- (_Bool)fc_isLaterThanOrEqualTo:(id)arg1;
- (_Bool)fc_isLaterThan:(id)arg1;
- (_Bool)fc_isEarlierThan:(id)arg1 withPrecision:(long long)arg2;
- (_Bool)fc_isEarlierThanOrEqualTo:(id)arg1;
- (_Bool)fc_isEarlierThan:(id)arg1;
@property(readonly) double fc_timeIntervalUntilNow;
- (id)pbDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
