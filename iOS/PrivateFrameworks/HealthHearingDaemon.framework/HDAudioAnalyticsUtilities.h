//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HDAudioAnalyticsUtilities : NSObject
{
}

+ (id)latestAudioExposureEventForExposureType:(long long)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)audioExposureEventsForExposureType:(long long)arg1 profile:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id *)arg5;
+ (id)_quantityTypeForExposureType:(long long)arg1;
+ (id)audioAverageAndDurationForExposureType:(long long)arg1 profile:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id *)arg5;
+ (id)boundedIntegerForValue:(double)arg1 orderedBuckets:(id)arg2 sentinel:(id)arg3 transformer:(CDUnknownBlockType)arg4;
+ (id)boundedIntegerForDose:(double)arg1;
+ (id)boundedIntegerForSoundReductionLEQ:(double)arg1;
+ (id)boundedIntegerForLEQ:(double)arg1;
+ (id)boundedIntegerForTimeSinceLastNotification:(double)arg1;
+ (id)boundedIntegerForLockedDuration:(double)arg1;
+ (id)boundedIntegerForEventDuration:(double)arg1;
+ (id)boundedIntegerForSyncDelayDuration:(double)arg1;
+ (id)boundedIntegerForExposureDuration:(double)arg1;
+ (id)rollingDays:(long long)arg1 beforeDate:(id)arg2;
+ (id)fullDays:(long long)arg1 beforeDate:(id)arg2;
+ (long long)exposureAlertCount:(id)arg1;
+ (double)doseFromStatistics:(id)arg1 days:(long long)arg2;
+ (double)durationFromStatistics:(id)arg1;
+ (double)leqFromStatistics:(id)arg1;
+ (id)localGregorianCalendar;

@end

