//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HeartHealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HeartHealthDaemon/HKHRDatabaseAnalysisScheduler-Protocol.h>

@class HDProfile, HDXPCGatedActivity, NSString, NSUserDefaults;
@protocol HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider, HKHRDatabaseAnalysisSchedulerDelegate, HKHRDatabaseAnalysisSchedulerGatedActivityFactory, OS_os_log;

@interface HKHRDatabaseAnalysisSchedulerImpl : NSObject <HDHealthDaemonReadyObserver, HKHRDatabaseAnalysisScheduler>
{
    HDProfile *_profile;
    NSString *_identifier;
    NSObject<OS_os_log> *_loggingCategory;
    double _maximumDelay;
    double _retryDelay;
    id <HKHRDatabaseAnalysisSchedulerGatedActivityFactory> _gatedActivityFactory;
    id <HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider> _assertionProvider;
    HDXPCGatedActivity *_gatedActivity;
    NSUserDefaults *_persistentStateDefaults;
    struct os_unfair_lock_s _lock;
    unsigned long long _state;
    id <HKHRDatabaseAnalysisSchedulerDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <HKHRDatabaseAnalysisSchedulerDelegate> delegate; // @synthesize delegate;
- (void)_runMaintenanceOperationForActivity:(id)arg1 assertion:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_runActivity:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_resetRetryCounter;
- (_Bool)_enterStateIfPossible:(unsigned long long)arg1;
- (double)_retryDelayGivenRetryCount:(long long)arg1;
- (void)_maybeRetryLater;
- (id)retryCountKey;
- (void)_requestGatedActivityRunWithDelay:(double)arg1;
- (void)daemonReady:(id)arg1;
- (void)forceAnalysis;
- (void)scheduleAnalysis;
- (id)initWithProfile:(id)arg1 identifier:(id)arg2 loggingCategory:(id)arg3 maximumDelay:(double)arg4 retryDelay:(double)arg5 gatedActivityFactory:(id)arg6 assertionProvider:(id)arg7 persistentStateDefaults:(id)arg8;
- (id)initWithProfile:(id)arg1 identifier:(id)arg2 loggingCategory:(id)arg3 maximumDelay:(double)arg4 retryDelay:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
