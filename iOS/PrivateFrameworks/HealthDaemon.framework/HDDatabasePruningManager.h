//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class HDProfile, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDDatabasePruningManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver>
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timerSource;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)_calendar;
- (void)_setLastAttemptDate:(id)arg1 completed:(_Bool)arg2;
- (id)_lastAttemptDateWithCompleted:(_Bool *)arg1;
- (void)_queue_pruneExpiredDeletedObjectsWithNowDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_operationForPruningSeriesMoreThanDaysOld:(unsigned long long)arg1 calendar:(id)arg2 nowDate:(id)arg3;
- (id)_operationForPruningSamplesExcludingTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_operationForPruningThirdPartySampleTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_operationForPruningSampleTypes:(id)arg1 daysOld:(unsigned long long)arg2 calendar:(id)arg3 nowDate:(id)arg4;
- (id)_operationsForPruningActivitySharingDataWithCalendar:(id)arg1 nowDate:(id)arg2;
- (id)_operationsForPruningWithCalendar:(id)arg1 nowDate:(id)arg2;
- (void)_queue_pruneExpiredSamplesWithOptions:(unsigned long long)arg1 fromNowDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pruneDatabaseWithOptions:(unsigned long long)arg1 nowDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pruneDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performPruneDatabaseActivity:(id)arg1;
- (void)_registerActivity;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
