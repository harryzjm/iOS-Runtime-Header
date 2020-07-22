//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface OKMediaEventClusterPredicate
{
    unsigned long long _type;
    NSString *_countryName;
    NSDictionary *_calendarEventsDictionary;
}

@property(retain) NSDictionary *calendarEventsDictionary; // @synthesize calendarEventsDictionary=_calendarEventsDictionary;
@property(retain) NSString *countryName; // @synthesize countryName=_countryName;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (float)efficiencyForItems:(id)arg1;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)barycenterOfLocations:(id)arg1;
- (double)floatingAverageDistanceDeltaForItem:(id)arg1 inArray:(id)arg2;
- (double)floatingAverageTimeDeltaForItem:(id)arg1 inArray:(id)arg2;
- (id)title;
- (id)clusterLocationStringForLocations:(id)arg1;
- (double)maximumDistanceBetweenLocations:(id)arg1;
- (id)clusterDateStringForPeriodFrom:(id)arg1 to:(id)arg2;
- (id)eventNameForDate:(id)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;

@end
