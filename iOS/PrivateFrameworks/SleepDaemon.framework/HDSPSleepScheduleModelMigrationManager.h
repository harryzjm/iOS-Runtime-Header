//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SleepDaemon/HDSPEnvironmentAware-Protocol.h>
#import <SleepDaemon/HDSPNotificationObserver-Protocol.h>
#import <SleepDaemon/HDSPSource-Protocol.h>

@class HDSPEnvironment, NSString;
@protocol HDSPSource;

@interface HDSPSleepScheduleModelMigrationManager : NSObject <HDSPNotificationObserver, HDSPSource, HDSPEnvironmentAware>
{
    HDSPEnvironment *_environment;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak HDSPEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (void)migrateToMobileTimerIfNecessary;
- (id)_migrateSleepDurationFromHealthKit;
- (id)migrateFromHealthKitIfNecessary;
- (id)notificationListener:(id)arg1 didReceiveNotificationWithName:(id)arg2;
- (id)_migrateSleepScreen;
- (id)_migrateSleepScheduleFromMobileTimer;
- (id)performDataMigration;
- (_Bool)needDataMigration;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
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
