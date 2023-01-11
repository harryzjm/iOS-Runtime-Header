//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDDemoDataOtherAndAdditionalSampleGenerator
{
    double _nextToothbrushingSampleTime;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double nextToothbrushingSampleTime; // @synthesize nextToothbrushingSampleTime=_nextToothbrushingSampleTime;
- (id)_dateComponentsByAddingHours:(long long)arg1 toDate:(id)arg2;
- (id)_generateToothbrushingSampleForDate:(id)arg1;
- (id)_eveningDateFromDate:(id)arg1 calendar:(id)arg2;
- (id)_morningDateFromDate:(id)arg1 calendar:(id)arg2;
- (void)_generateToothbrushingSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
