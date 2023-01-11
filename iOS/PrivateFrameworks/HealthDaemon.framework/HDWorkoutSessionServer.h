//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDWorkoutDataSource-Protocol.h>
#import <HealthDaemon/HDWorkoutSessionStateController-Protocol.h>
#import <HealthDaemon/HKDataFlowLinkProcessor-Protocol.h>
#import <HealthDaemon/HKStateMachineDelegate-Protocol.h>

@class HDProfile, HDWorkoutManager, HDWorkoutSessionEntity, HDWorkoutSessionTaskServer, HDXPCClient, HKDataFlowLink, HKObserverSet, HKSource, HKStateMachine, HKWorkoutConfiguration, NSDate, NSString, NSUUID, _HKExpiringCompletionTimer;
@protocol HDWorkoutDataAccumulator, HDWorkoutSessionController, OS_dispatch_queue;

@interface HDWorkoutSessionServer : NSObject <HKDataFlowLinkProcessor, HKStateMachineDelegate, HDWorkoutSessionStateController, HDWorkoutDataSource>
{
    HDProfile *_profile;
    HDWorkoutManager *_workoutManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    HKDataFlowLink *_workoutDataFlowLink;
    HKObserverSet *_observers;
    id <HDWorkoutSessionController> _sessionController;
    _HKExpiringCompletionTimer *_invalidationTimer;
    HDWorkoutSessionEntity *_persistentEntity;
    double _stopEventGenerationWaitInterval;
    HKStateMachine *_stateMachine;
    HKStateMachine *_targetStateMachine;
    _Bool _hasFailed;
    NSUUID *_identifier;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSString *_applicationIdentifier;
    HDWorkoutSessionTaskServer *_taskServer;
    HDXPCClient *_client;
    NSString *_clientProcessBundleIdentifier;
    HKSource *_clientSource;
    NSDate *_startDate;
    NSDate *_stopDate;
}

+ (Class)_sessionControllerClassFromWorkoutConfiguration:(id)arg1;
+ (void)unitTest_setDefaultStopEventGenerationWaitInterval:(double)arg1;
+ (id)clientTargetStateMachineForConfiguration:(id)arg1 sessionUUID:(id)arg2;
+ (id)workoutSessionServerStateMachineForConfiguration:(id)arg1 sessionUUID:(id)arg2;
+ (_Bool)finishAllWorkoutsExcludingSessions:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)_finishSessionControllerForSessionEntity:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (_Bool)finishAllWorkoutSessionsForClient:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)postRestartRecoveredSessionServerWithProfile:(id)arg1 workoutManager:(id)arg2 error:(id *)arg3;
+ (id)recoveredSessionServerWithProfile:(id)arg1 sessionUUID:(id)arg2 workoutManager:(id)arg3 error:(id *)arg4;
@property(readonly, copy, nonatomic) NSDate *stopDate; // @synthesize stopDate=_stopDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, copy, nonatomic) HKSource *clientSource; // @synthesize clientSource=_clientSource;
@property(readonly, copy, nonatomic) NSString *clientProcessBundleIdentifier; // @synthesize clientProcessBundleIdentifier=_clientProcessBundleIdentifier;
@property(retain, nonatomic) HDXPCClient *client; // @synthesize client=_client;
@property(nonatomic) __weak HDWorkoutSessionTaskServer *taskServer; // @synthesize taskServer=_taskServer;
@property(readonly, copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // @synthesize workoutConfiguration=_workoutConfiguration;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)_queue_setupSessionController;
- (id)_queue_currentWorkoutSessionConfiguration;
- (void)_queue_invalidationTimerDidFire;
- (void)_queue_stopInvalidationTimer;
- (void)_queue_startInvalidationTimer;
- (void)_queue_cacheClientIdentifiers;
- (void)_queue_processStopEvent:(id)arg1;
- (void)_queue_generateError:(id)arg1;
- (id)_defaultConfigurationWithWorkoutConfiguration:(id)arg1;
- (void)_queue_generateEventWithType:(long long)arg1 date:(id)arg2;
- (void)_queue_generateEvent:(id)arg1;
- (void)_deleteSessionAndFinishAssociatedBuilderAtDate:(id)arg1;
- (void)_queue_evaluateRequestedTargetStateAtDate:(id)arg1;
- (void)unitTest_generateStopEvent;
- (void)unitTest_setStopEventGenerationWaitInterval:(double)arg1;
- (void)unitTest_setSessionController:(id)arg1;
- (_Bool)_persistenceQueue_storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id *)arg3;
- (id)_retrieveSessionControllerStateForRecoveryIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) id <HDWorkoutDataAccumulator> workoutDataAccumulator;
- (void)generateError:(id)arg1;
- (void)generateEvent:(id)arg1;
- (void)finishAggregationWithDate:(id)arg1;
- (void)finish;
- (void)endHeartRateRecovery;
- (void)autoResumeWithDate:(id)arg1;
- (void)autoPauseWithDate:(id)arg1;
- (_Bool)resumeWithError:(id *)arg1;
- (_Bool)pauseWithError:(id *)arg1;
- (_Bool)endWithError:(id *)arg1;
- (_Bool)stopActivityWithDate:(id)arg1 error:(id *)arg2;
- (_Bool)startActivityWithDate:(id)arg1 error:(id *)arg2;
- (_Bool)prepareWithError:(id *)arg1;
- (void)didResignCurrentWithError:(id)arg1;
- (void)didBecomeCurrent;
- (void)_queue_setTargetState:(long long)arg1 date:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)setTargetState:(long long)arg1 date:(id)arg2 error:(id *)arg3;
- (_Bool)_enqueueEvent:(long long)arg1 stateMachine:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (void)stateMachine:(id)arg1 willEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (void)stateMachine:(id)arg1 persistTransition:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (_Bool)_resendWorkoutEventsToDataDestination:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSUUID *workoutDataProcessorUUID;
@property(readonly) HKDataFlowLink *workoutDataFlowLink;
- (id)taskServerConfigurationForRecoveryWithError:(id *)arg1;
- (void)_recoverPersistedState;
- (void)_loadOrCreatePersistentEntity;
- (void)setWorkoutDataAccumulator:(id)arg1;
- (void)setAssociatedWorkoutBuilderEntity:(id)arg1;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) long long state;
@property(readonly, copy) NSString *description;
- (id)_detailedDescriptionString;
- (id)_detailedDescriptionComponents;
- (id)initWithProfile:(id)arg1 configuration:(id)arg2 sessionUUID:(id)arg3 workoutManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

