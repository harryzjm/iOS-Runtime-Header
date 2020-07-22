//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSPredicate;

__attribute__((visibility("hidden")))
@interface RTRoutineManagerRegistrantApplicationPrediction
{
    _Bool _registered;
    NSPredicate *_applicationMonitoringPredicate;
    CDUnknownBlockType _predictedApplicationHandler;
}

@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(copy, nonatomic) CDUnknownBlockType predictedApplicationHandler; // @synthesize predictedApplicationHandler=_predictedApplicationHandler;
@property(retain, nonatomic) NSPredicate *applicationMonitoringPredicate; // @synthesize applicationMonitoringPredicate=_applicationMonitoringPredicate;
- (void).cxx_destruct;
- (void)onPredictedApplications:(id)arg1 error:(id)arg2;
- (id)stopMonitoringForPredictedApplications;
- (id)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

