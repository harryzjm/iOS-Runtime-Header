//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDProfile, NSString;
@protocol HDPeriodicActivityDelegate, OS_dispatch_queue, OS_os_log;

@interface HDPeriodicActivity : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_lastSuccessfulRunDateUserDefaultsKey;
    _Bool _isWaitingToRun;
    NSString *_errorCountUserDefaultsKey;
    NSString *_minimumIntervalDefaultsKey;
    NSString *_name;
    NSObject<OS_os_log> *_loggingCategory;
    double _interval;
    id <HDPeriodicActivityDelegate> _delegate;
}

+ (id)_userDefaultsKeyForName:(id)arg1 key:(id)arg2;
+ (void)registerDisabledPeriodicActivityWithName:(id)arg1 loggingCategory:(id)arg2;
@property(readonly, nonatomic) __weak id <HDPeriodicActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingCategory; // @synthesize loggingCategory=_loggingCategory;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)_dateForDefaultsKey:(id)arg1;
- (id)_queue_criteriaForInterval:(double)arg1;
- (void)_queue_setLastSuccessfulRunDate:(id)arg1;
- (void)_queue_incrementErrorCount;
- (double)_queue_currentInterval;
- (void)_queue_unitTest_activityFiredButRunDeclined;
- (void)_queue_activityFinishedWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 error:(id)arg3;
- (void)_queue_performActivityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_performActivityIfPossibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_performActivityIfWaitingWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_updateCriteriaForActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)_handleXPCActivityCallback:(id)arg1;
- (void)_registerActivity;
- (_Bool)_requiresProtectedData;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
- (_Bool)isWaitingToRun;
- (void)synthesizeActivityFire;
- (void)reset;
- (void)didPerformActivityWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 error:(id)arg3;
- (id)lastSuccessfulRunDate;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 name:(id)arg2 interval:(double)arg3 delegate:(id)arg4 loggingCategory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

