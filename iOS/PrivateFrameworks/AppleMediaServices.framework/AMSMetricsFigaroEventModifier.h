//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSMetricsFigaroEventModifier : NSObject
{
    NSDictionary *_fieldFilters;
    NSString *_sampleSessionKey;
    NSDictionary *_metricsDictionary;
    NSDictionary *_overrideDictionary;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *overrideDictionary; // @synthesize overrideDictionary=_overrideDictionary;
@property(readonly, nonatomic) NSDictionary *metricsDictionary; // @synthesize metricsDictionary=_metricsDictionary;
@property(readonly, nonatomic) NSString *sampleSessionKey; // @synthesize sampleSessionKey=_sampleSessionKey;
@property(readonly, nonatomic) NSDictionary *fieldFilters; // @synthesize fieldFilters=_fieldFilters;
- (id)_fieldFiltersFromOverrides:(id)arg1;
- (id)_createSampleSessionKey;
- (id)_encodedExperimentDataForTopic:(id)arg1;
- (_Bool)_shouldSampleEvent:(id)arg1;
- (id)_overridePropertyForKey:(id)arg1;
- (_Bool)shouldSkipEvent:(id)arg1;
- (_Bool)shouldDropEvent:(id)arg1;
- (id)reportingURLForEvent:(id)arg1;
- (id)preparedEventPromiseWithEvent:(id)arg1;
@property(readonly, nonatomic) double flushInterval;
- (_Bool)fieldFiltersMatchEvent:(id)arg1;
- (id)initWithMetricsDictionary:(id)arg1 overrideDictionary:(id)arg2;

@end

