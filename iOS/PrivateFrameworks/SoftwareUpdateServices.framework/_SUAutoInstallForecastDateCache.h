//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate, SUAutoInstallForecast;

__attribute__((visibility("hidden")))
@interface _SUAutoInstallForecastDateCache : NSObject
{
    long long _scheduleType;
    SUAutoInstallForecast *_weak_forecast;
    NSCalendar *_calendar;
    NSDate *_roundedStartDate;
    NSDate *_roundedEndDate;
    _Bool _parsed;
}

- (void).cxx_destruct;
- (id)_componentsFromDate:(id)arg1;
- (void)_computeTonightRangeRelativeToDate:(id)arg1 extraDayOffset:(long long)arg2 outStart:(id *)arg3 outEnd:(id *)arg4;
- (_Bool)_isStart:(id)arg1 end:(id)arg2 withinDateRange:(id)arg3 end:(id)arg4;
- (void)_parseForecast;
- (id)description;
@property(readonly, nonatomic) NSCalendar *calendar;
@property(readonly, nonatomic) NSDate *roundedEndTime;
@property(readonly, nonatomic) NSDate *roundedStartTime;
@property(readonly, nonatomic) long long scheduleType;
- (void)dealloc;
- (id)initWithForecast:(id)arg1;

@end
