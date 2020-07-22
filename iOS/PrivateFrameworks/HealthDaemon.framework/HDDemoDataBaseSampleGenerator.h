//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class HDDemoDataGenerator;

@interface HDDemoDataBaseSampleGenerator : NSObject <NSSecureCoding>
{
    _Bool _createdFromNSKeyedUnarchiver;
    HDDemoDataGenerator *_demoDataGenerator;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak HDDemoDataGenerator *demoDataGenerator; // @synthesize demoDataGenerator=_demoDataGenerator;
- (void).cxx_destruct;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)createdFromNSKeyedUnarchiver;
- (id)init;

@end

