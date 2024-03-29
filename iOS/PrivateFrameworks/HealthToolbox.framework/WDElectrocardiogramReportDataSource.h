//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKElectrocardiogram, HKHealthStore, NSDateComponents, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramReportDataSource : NSObject
{
    HKElectrocardiogram *_sample;
    UIColor *_tintColor;
    HKHealthStore *_healthStore;
    long long _activeAlgorithmVersion;
    NSString *_firstName;
    NSString *_lastName;
    NSDateComponents *_dateOfBirthComponents;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDateComponents *dateOfBirthComponents; // @synthesize dateOfBirthComponents=_dateOfBirthComponents;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) long long activeAlgorithmVersion; // @synthesize activeAlgorithmVersion=_activeAlgorithmVersion;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) HKElectrocardiogram *sample; // @synthesize sample=_sample;
- (void)_fetchDemographicInformation;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2 activeAlgorithmVersion:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

