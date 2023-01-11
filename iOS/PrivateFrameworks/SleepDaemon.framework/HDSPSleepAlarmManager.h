//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPSleepScheduleModelObserver-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>

@class HDSPEnvironment, HKSPObserverSet, NSString;
@protocol HDSPSleepAlarmProvider, HDSPSource;

@interface HDSPSleepAlarmManager : NSObject <HDSPSource, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver>
{
    HDSPEnvironment *_environment;
    HKSPObserverSet *_sleepAlarmObservers;
    id <HDSPSleepAlarmProvider> _sleepAlarmProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HDSPSleepAlarmProvider> sleepAlarmProvider; // @synthesize sleepAlarmProvider=_sleepAlarmProvider;
@property(readonly, nonatomic) HKSPObserverSet *sleepAlarmObservers; // @synthesize sleepAlarmObservers=_sleepAlarmObservers;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (void)sleepScheduleModelManager:(id)arg1 source:(id)arg2 didUpdateSleepScheduleModel:(id)arg3;
- (void)resetSleepAlarmSnoozeState;
- (id)currentSleepAlarmWithIdentifier:(id)arg1;
- (id)currentSleepAlarms;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1 sleepAlarmProvider:(id)arg2;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool dontNotify;
@property(readonly, nonatomic) _Bool dontSync;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <HDSPSource> targetSource;

@end
