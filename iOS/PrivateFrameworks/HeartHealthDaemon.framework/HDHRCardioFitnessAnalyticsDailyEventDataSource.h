//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile;

__attribute__((visibility("hidden")))
@interface HDHRCardioFitnessAnalyticsDailyEventDataSource : NSObject
{
    HDProfile *_profile;
}

+ (id)localGregorianCalendar;
- (void).cxx_destruct;
- (long long)numberOfDaysBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (long long)_determineDaysSinceLastSampleWithSampleType:(id)arg1 currentDate:(id)arg2 error:(id *)arg3;
- (id)latestClassificationWithIsOnboarded:(_Bool)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;
- (_Bool)determineIsNotificationsEnabled;
- (long long)determineWeeksSinceOnboardingWithCurrentDate:(id)arg1 error:(id *)arg2;
- (id)determineIsWristDetectionEnabledWithIsImproveHealthAndActivityAllowed:(_Bool)arg1;
- (id)determineIsHeartRateEnabledWithIsImproveHealthAndActivityAllowed:(_Bool)arg1;
- (id)determineIsBlockersEnabledWithIsImproveHealthAndActivityAllowed:(_Bool)arg1 error:(id *)arg2;
- (id)determineNumberOfLowNotificationsInPastYearWithCurrentDate:(id)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;
- (id)determineDaysSinceLastVO2MaxSampleWithCurrentDate:(id)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;
- (id)determineDaysSinceLastLowNotificationWithCurrentDate:(id)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;
- (id)initWithProfile:(id)arg1;

@end

