//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthMedicationsDaemonPlugin/NSObject-Protocol.h>
#import <HealthMedicationsDaemonPlugin/NSSecureCoding-Protocol.h>

@class HDDemoDataBaseSampleGeneratorObjectCollection, HDDemoDataGeneratorState, HDDemoDataPerson, HDProfile, NSDate;

@protocol HDDemoDataObjectGenerator <NSObject, NSSecureCoding>
- (void)generateObjectsForDemoPerson:(HDDemoDataPerson *)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(NSDate *)arg4 objectCollection:(HDDemoDataBaseSampleGeneratorObjectCollection *)arg5;
- (void)generateFirstRunObjectsForDemoPerson:(HDDemoDataPerson *)arg1 firstDate:(NSDate *)arg2 objectCollection:(HDDemoDataBaseSampleGeneratorObjectCollection *)arg3;
- (void)setDemoDataGenerationContextWithProfile:(HDProfile *)arg1 generatorState:(HDDemoDataGeneratorState *)arg2;
@end

