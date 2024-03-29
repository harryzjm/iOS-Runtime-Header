//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNDateUtils : NSObject
{
}

+ (id)dateForYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 timeZone:(id)arg4 error:(id *)arg5;
+ (id)dateForYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 nanosecond:(long long)arg7 timeZone:(id)arg8 error:(id *)arg9;
+ (id)dateFromExtendedISO8601String:(id)arg1 error:(id *)arg2;
+ (id)dateFromBasicISO8601String:(id)arg1 error:(id *)arg2;
+ (id)extendedISO8601StringFromDate:(id)arg1;
+ (id)basicISO8601StringFromDate:(id)arg1;
+ (id)extendedISO8601DateFormatter;
+ (id)basicISO8601DateFormatter;
+ (id)dateLastWeek;
+ (id)dateYesterday;
+ (id)dateRelativeToNowAddingSeconds:(double)arg1 minutes:(double)arg2 hours:(double)arg3 days:(double)arg4 weeks:(double)arg5;
+ (id)dateFromStartDate:(id)arg1 addingSeconds:(double)arg2 minutes:(double)arg3 hours:(double)arg4 days:(double)arg5 weeks:(double)arg6;
+ (double)timeIntervalForSeconds:(double)arg1 minutes:(double)arg2 hours:(double)arg3 days:(double)arg4 weeks:(double)arg5;
+ (double)timeIntervalWeek;
+ (double)timeIntervalDay;
+ (double)timeIntervalHour;
+ (double)timeIntervalMinute;
- (id)init;

@end

