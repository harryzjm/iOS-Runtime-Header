//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSDate;

__attribute__((visibility("hidden")))
@interface HDAudioAnalyticsExposureCalculator : NSObject
{
    NSDate *_targetDate;
    HDProfile *_profile;
    long long _audioExposureType;
}

- (void).cxx_destruct;
@property(nonatomic) long long audioExposureType; // @synthesize audioExposureType=_audioExposureType;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSDate *targetDate; // @synthesize targetDate=_targetDate;
- (id)sevenDayDoseForMostRecentNotificationWithError:(id *)arg1;
- (id)notificationCountForRollingDays:(long long)arg1 error:(id *)arg2;
- (id)audioExposureResultWithError:(id *)arg1;
- (id)initWithTargetDate:(id)arg1 exposureType:(long long)arg2 profile:(id)arg3;

@end

