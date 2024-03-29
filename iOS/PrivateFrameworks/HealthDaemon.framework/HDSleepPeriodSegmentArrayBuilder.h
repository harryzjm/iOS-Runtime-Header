//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, HKCalendarCache, NSString;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

__attribute__((visibility("hidden")))
@interface HDSleepPeriodSegmentArrayBuilder : NSObject
{
    HDProfile *_profile;
    long long _morningIndex;
    unsigned long long _options;
    HKCalendarCache *_calendarCache;
    id <HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
}

- (void).cxx_destruct;
- (id)sleepPeriodSegmentsFromSamples:(id)arg1;
- (id)initProfile:(id)arg1 morningIndex:(long long)arg2 options:(unsigned long long)arg3 calendarCache:(id)arg4 sourceOrderProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

