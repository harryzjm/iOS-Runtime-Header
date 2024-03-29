//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSessionFPFS, BRCDeadlineSource, NSString, PQLNameInjection;
@protocol OS_dispatch_group, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface BRCFSSchedulerBase : NSObject
{
    BRCAccountSessionFPFS *_session;
    BRCDeadlineSource *_schedulerSource;
    NSObject<OS_dispatch_workloop> *_schedulerWorkloop;
    NSString *_name;
    _Bool _firstSchedulingAfterStartupDone;
    _Bool _hasActiveWork;
    _Bool _hasWork;
    _Bool _isCancelled;
    NSObject<OS_dispatch_group> *_hasWorkGroup;
    NSObject<OS_dispatch_group> *_hasActiveWorkGroup;
    PQLNameInjection *_tableName;
}

- (void).cxx_destruct;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) PQLNameInjection *tableName; // @synthesize tableName=_tableName;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool hasWork; // @synthesize hasWork=_hasWork;
@property(nonatomic) _Bool hasActiveWork; // @synthesize hasActiveWork=_hasActiveWork;
@property(retain) NSObject<OS_dispatch_group> *hasActiveWorkGroup; // @synthesize hasActiveWorkGroup=_hasActiveWorkGroup;
@property(retain) NSObject<OS_dispatch_group> *hasWorkGroup; // @synthesize hasWorkGroup=_hasWorkGroup;
- (void)close;
- (void)_close;
- (void)cancel;
- (void)suspend;
- (void)resume;
- (void)scheduleWithBatchSize:(int)arg1 whereSQLClause:(id)arg2 columns:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;
- (_Bool)canScheduleMoreJobs;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (void)schedule;
- (void)signal;
- (void)signalWithDeadline:(long long)arg1;
- (void)checkIfHasWork;
- (unsigned int)recoverAndReportMissingJobs;
- (void)deleteExpiredJobs;
- (void)resetBackoffForJobWithID:(id)arg1;
- (void)deleteJobsMatching:(id)arg1;
- (_Bool)setState:(int)arg1 forJobsMatching:(id)arg2;
- (_Bool)setState:(int)arg1 forJobID:(id)arg2;
- (void)computeStamps:(struct throttle_stamps *)arg1 forJobID:(id)arg2 throttle:(id)arg3 shouldBackoff:(_Bool)arg4;
- (long long)updateStamps:(struct throttle_stamps *)arg1 throttle:(id)arg2 now:(long long)arg3;
- (void)rescheduleSuspendedJobsMatching:(id)arg1 inState:(int)arg2;
- (struct brc_job_update)insertOrUpdateJobID:(id)arg1 throttle:(id)arg2 withState:(int)arg3 insertedSQLColumn:(id)arg4 insertedSQLValues:(id)arg5 updatedSQLValues:(id)arg6 error:(id *)arg7;
- (unsigned long long)postponeJobID:(id)arg1 withThrottle:(id)arg2;
- (id)aggregateDescriptionForJobsMatching:(id)arg1 context:(id)arg2;
- (void)describeInBuffer:(id)arg1 aggregateOfJobsMatching:(id)arg2 context:(id)arg3;
- (id)descriptionForJobsMatching:(id)arg1 context:(id)arg2;
- (id)descriptionForJobsMatching:(id)arg1 ordering:(id)arg2 additionalColumns:(id)arg3 additionalValuesHandler:(CDUnknownBlockType)arg4 context:(id)arg5;
- (int)jobStateFor:(id)arg1;
- (_Bool)haveActiveJobsMatching:(id)arg1;
- (id)initWithSession:(id)arg1 name:(id)arg2 tableName:(id)arg3;
@property(readonly) _Bool closed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

