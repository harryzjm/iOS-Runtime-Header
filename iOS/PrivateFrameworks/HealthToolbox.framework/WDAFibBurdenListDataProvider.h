//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKCalendarCache;

__attribute__((visibility("hidden")))
@interface WDAFibBurdenListDataProvider
{
    HKCalendarCache *_calendarCache;
}

- (void).cxx_destruct;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (id)_generateFeatureVersionFromUpdateVersion:(id)arg1;
- (id)featureVersionForSample:(id)arg1;
- (id)updateVersionForSample:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (id)_timeZoneForSample:(id)arg1;
- (id)secondaryTextForObject:(id)arg1;
- (id)textForObject:(id)arg1;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;

@end

