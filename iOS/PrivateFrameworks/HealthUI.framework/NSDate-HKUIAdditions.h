//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (HKUIAdditions)
+ (id)hk_minimumDateForBirthDateWithCalendar:(id)arg1;
- (id)hkui_dateNormalizedFromDateInterval:(id)arg1 toDateInterval:(id)arg2;
- (id)hk_dateFromSourceTimeZone:(id)arg1;
- (double)doubleValue;
- (id)hk_dateWithTruncatedSecond;
- (id)hk_dateBeforeDateForCalendar:(id)arg1 rangeUnit:(unsigned long long)arg2;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;
- (_Bool)hk_animatable;
@end

