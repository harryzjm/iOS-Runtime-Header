//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>

@class HDSPEnvironment, HKSPObserverSet, NSMutableDictionary, NSString;

@interface HDSPNotificationListener : NSObject <HDSPEnvironmentAware>
{
    struct os_unfair_lock_s _launchNotificationRegistrationLock;
    HDSPEnvironment *_environment;
    HKSPObserverSet *_observers;
    NSMutableDictionary *_launchNotificationRegistrations;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s launchNotificationRegistrationLock; // @synthesize launchNotificationRegistrationLock=_launchNotificationRegistrationLock;
@property(readonly, nonatomic) NSMutableDictionary *launchNotificationRegistrations; // @synthesize launchNotificationRegistrations=_launchNotificationRegistrations;
@property(readonly, nonatomic) HKSPObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
- (void)_handleNotificationWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_registerForStream:(id)arg1;
- (void)startListening;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)unregisterForLaunchNotificationWithName:(const char *)arg1 key:(id)arg2;
- (void)registerForLaunchNotificationWithName:(const char *)arg1 key:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
