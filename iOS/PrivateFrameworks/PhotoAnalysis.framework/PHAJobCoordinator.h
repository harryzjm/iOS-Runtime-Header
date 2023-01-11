//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAActivityGovernorDelegate-Protocol.h>
#import <PhotoAnalysis/PHADirtyChangeCoalescerDelegate-Protocol.h>
#import <PhotoAnalysis/PHAGraphManagerClientMessagesReceiver-Protocol.h>
#import <PhotoAnalysis/PHAJobCoalescerDelegate-Protocol.h>
#import <PhotoAnalysis/PHAJobConstraintsObserverDelegate-Protocol.h>
#import <PhotoAnalysis/PHAWorkerJobDelegate-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisJobServiceProtocol-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSString, PHAActivityGovernor, PHADirtyChangeCoalescer, PHAJobCoalescer, PHAJobConstraints, PHAJobConstraintsObserver, PHAJobGenerator, PHAManager, PHAWorkerHealthMonitor, PHAWorkerJob, PHAWorkerWarmer;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction, PHAJobCoordinatorDelegate;

@interface PHAJobCoordinator : NSObject <PHAJobCoalescerDelegate, PHAJobConstraintsObserverDelegate, PHAWorkerJobDelegate, PHADirtyChangeCoalescerDelegate, PHAActivityGovernorDelegate, PHAGraphManagerClientMessagesReceiver, PLPhotoAnalysisJobServiceProtocol>
{
    _Atomic int _pendingAsyncTasksCount;
    _Bool _graphUpdateNeeded;
    _Bool _newConstraintsPending;
    _Bool _shouldIgnoreConstraintChanges;
    PHAWorkerWarmer *_warmer;
    PHAJobCoalescer *_jobCoalescer;
    PHADirtyChangeCoalescer *_dirtyCoalescer;
    PHAJobConstraintsObserver *_constraintsObserver;
    double _maxIntervalSinceLastJobReport;
    id <PHAJobCoordinatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_maintenanceTimer;
    NSDictionary *_workersByType;
    PHAWorkerHealthMonitor *_healthMonitor;
    PHAActivityGovernor *_activityGovernor;
    PHAJobGenerator *_jobGenerator;
    PHAManager *_manager;
    PHAJobConstraints *_currentConstraints;
    PHAWorkerJob *_currentForegroundJob;
    NSMutableArray *_waitingForegroundJobs;
    PHAWorkerJob *_currentBackgroundJob;
    NSObject<OS_os_transaction> *_runningJobTransaction;
    NSMutableSet *_workerTypesServicedForUserFG;
    NSObject<OS_os_transaction> *_foregroundTransaction;
}

@property(retain, nonatomic) NSObject<OS_os_transaction> *foregroundTransaction; // @synthesize foregroundTransaction=_foregroundTransaction;
@property(retain, nonatomic) NSMutableSet *workerTypesServicedForUserFG; // @synthesize workerTypesServicedForUserFG=_workerTypesServicedForUserFG;
@property(retain, nonatomic) NSObject<OS_os_transaction> *runningJobTransaction; // @synthesize runningJobTransaction=_runningJobTransaction;
@property(retain, nonatomic) PHAWorkerJob *currentBackgroundJob; // @synthesize currentBackgroundJob=_currentBackgroundJob;
@property(readonly, nonatomic) NSMutableArray *waitingForegroundJobs; // @synthesize waitingForegroundJobs=_waitingForegroundJobs;
@property(retain, nonatomic) PHAWorkerJob *currentForegroundJob; // @synthesize currentForegroundJob=_currentForegroundJob;
@property(copy) PHAJobConstraints *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(nonatomic) __weak PHAManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) PHAJobGenerator *jobGenerator; // @synthesize jobGenerator=_jobGenerator;
@property(readonly, nonatomic) PHAActivityGovernor *activityGovernor; // @synthesize activityGovernor=_activityGovernor;
@property(readonly, nonatomic) PHAWorkerHealthMonitor *healthMonitor; // @synthesize healthMonitor=_healthMonitor;
@property(nonatomic) _Bool shouldIgnoreConstraintChanges; // @synthesize shouldIgnoreConstraintChanges=_shouldIgnoreConstraintChanges;
@property(nonatomic) _Bool newConstraintsPending; // @synthesize newConstraintsPending=_newConstraintsPending;
@property(readonly, nonatomic) NSDictionary *workersByType; // @synthesize workersByType=_workersByType;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *maintenanceTimer; // @synthesize maintenanceTimer=_maintenanceTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <PHAJobCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double maxIntervalSinceLastJobReport; // @synthesize maxIntervalSinceLastJobReport=_maxIntervalSinceLastJobReport;
@property(readonly, nonatomic) PHAJobConstraintsObserver *constraintsObserver; // @synthesize constraintsObserver=_constraintsObserver;
@property(readonly, nonatomic) PHADirtyChangeCoalescer *dirtyCoalescer; // @synthesize dirtyCoalescer=_dirtyCoalescer;
@property(readonly, nonatomic) PHAJobCoalescer *jobCoalescer; // @synthesize jobCoalescer=_jobCoalescer;
@property(readonly) _Bool graphUpdateNeeded; // @synthesize graphUpdateNeeded=_graphUpdateNeeded;
@property(readonly, nonatomic) PHAWorkerWarmer *warmer; // @synthesize warmer=_warmer;
- (void).cxx_destruct;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 context:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 context:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)operationDidFinish:(id)arg1;
- (void)handleOperation:(id)arg1;
- (id)photoLibrary;
@property(readonly, nonatomic, getter=isQuiescent) _Bool quiescent;
- (_Bool)_inq_isQuiescent;
- (void)enforceTimeouts;
- (void)enqueueForegroundJob:(id)arg1;
@property(nonatomic) _Bool activityGovernorOverride; // @dynamic activityGovernorOverride;
- (void)didFinishJob:(id)arg1;
- (void)jobCoalescer:(id)arg1 didProduceJob:(id)arg2;
- (void)coalescer:(id)arg1 didCoalesce:(id)arg2;
- (void)governorDidRevokeForegroundAccess:(id)arg1;
- (void)processJobs;
- (void)governorDidGrantForegroundAccess:(id)arg1;
- (void)governorDidRevokeBackgroundAccess:(id)arg1;
- (void)governorDidGrantBackgroundAccess:(id)arg1;
- (void)jobConstraintsObserver:(id)arg1 constraintsDidChange:(id)arg2 mask:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_inq_reconsiderWantsFGActivityBasedOnConstraints:(id)arg1;
- (void)graphManagerDidUnloadGraph:(id)arg1;
- (void)graphManagerWillLoadGraph:(id)arg1;
- (void)_inq_stopJobsAfterConstraintOrActivityChange;
- (void)_inq_stopJobDueToConstraintOrActivityChange:(id)arg1;
- (void)_inq_handleNoMoreJobsExpected;
- (void)_inq_handleJobFinished:(id)arg1;
- (void)_inq_launchJob:(id)arg1;
- (void)_scheduleNextJob;
- (id)_nextAdditionalJobForWorkerTypeObj:(id)arg1 scenario:(unsigned long long)arg2;
- (void)_inq_enqueueForegroundJob:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)_cleanupStuckAnalysisState;
- (void)_installMaintenanceTimer;
- (id)_workerForJob:(id)arg1;
- (id)_defaultWorkersByType;
- (void)_inq_enforceTimeoutForJob:(id)arg1;
- (void)_inq_timeoutJob:(id)arg1;
- (id)_inq_nextForegroundJobCanRunAutomatic:(_Bool)arg1 canRunUserFG:(_Bool)arg2 canRunImmediate:(_Bool)arg3;
- (id)_inq_runningJobs;
- (void)_dispatchTransactionAsyncWithName:(const char *)arg1 block:(CDUnknownBlockType)arg2;
- (id)statusAsDictionary;
- (void)dealloc;
- (void)shutdown;
- (id)initWithManager:(id)arg1;
- (id)initWithManager:(id)arg1 initialConstraints:(id)arg2 additionalWorkersByType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

