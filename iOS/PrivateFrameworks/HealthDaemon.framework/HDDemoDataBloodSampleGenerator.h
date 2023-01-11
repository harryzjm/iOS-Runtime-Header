//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDDemoDataBloodSampleGenerator
{
    double _nextBloodAlcoholContentSampleTime;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double nextBloodAlcoholContentSampleTime; // @synthesize nextBloodAlcoholContentSampleTime=_nextBloodAlcoholContentSampleTime;
- (double)_computeNumDrinksTodayForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)bloodAlcoholContentForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

