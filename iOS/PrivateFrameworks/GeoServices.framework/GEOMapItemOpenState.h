//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOMapItemOpenState : NSObject
{
}

+ (unsigned long long)_checkForStateWithStartTime:(double)arg1 endtime:(double)arg2 compareTimeInSeconds:(double)arg3 openingSoonThreshold:(double)arg4 closingSoonThreshold:(double)arg5 secondsOverMidnightForTomorrow:(double)arg6 isTodaysNormalizedHours:(_Bool)arg7 tomorrowsHoursBeginAtMidnight:(_Bool)arg8;
+ (unsigned long long)_geoMapItemOpeningHoursOptionsForNormalizedHours:(id)arg1 compareDate:(id)arg2 timeZone:(id)arg3;
+ (unsigned long long)_geoMapItemOpeningHoursOptionsForBusinessHours:(id)arg1 compareDate:(id)arg2 timeZone:(id)arg3;

@end
