//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateInterval.h>

@interface NSDateInterval (HealthUIAdditions)
+ (id)hk_dateIntervalWithValueRange:(id)arg1;
+ (id)hk_julianDayDateIntervalFromOpenUpperBoundDateInterval:(id)arg1 sourceCalendar:(id)arg2 localCalendar:(id)arg3;
+ (id)hk_dateIntervalWithCodableDateInterval:(id)arg1 sourceTimeZone:(id)arg2;
- (id)hk_dateIntervalUnshiftedFromQueryAlignment:(long long)arg1 calendar:(id)arg2;
- (id)hk_dateIntervalShiftedToQueryAlignment:(long long)arg1 calendar:(id)arg2;
- (id)hk_codableDateInterval;
@end

