//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAutoAssetSelector, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, SUCoreFSM, SUCoreLog;

__attribute__((visibility("hidden")))
@interface MADAutoAssetConnector : NSObject
{
    SUCoreLog *_logger;
    NSDictionary *_stateTable;
    SUCoreFSM *_autoConnectorFSM;
    NSString *_latestSafeSummary;
    NSMutableArray *_monitorSelectors;
    NSMutableArray *_selectorsRequiringRetry;
    NSMutableArray *_triggeredSelectorsNoRetry;
    NSMutableArray *_triggeredSelectorsRequiringRetry;
    NSTimer *_initialWaitTimer;
    long long _backoffRetryLevel;
    NSTimer *_backoffRetryTimer;
    NSTimer *_waitBeforeRetryTimer;
    NSMutableDictionary *_catalogServerNetworkPathObservers;
    NSMutableDictionary *_catalogServerNetworkPathStatus;
    MAAutoAssetSelector *_activeJobSelector;
    NSMutableArray *_currentAttemptRemainingSelectors;
}

+ (void)simulateNetworkPathDown:(id)arg1;
+ (void)simulateNetworkPathUp:(id)arg1;
+ (id)backoffRetryLevelDefaultTimes;
+ (void)observedNetworkPathToServerDown:(id)arg1;
+ (void)observedNetworkPathToServerUp:(id)arg1;
+ (void)scheduledSelectorFinished:(id)arg1 withPotentialNetworkFailure:(_Bool)arg2;
+ (void)alteredMonitoringSelectors:(id)arg1 withTriggeredNoRetry:(id)arg2 withTriggeredRequiringRetry:(id)arg3;
+ (void)resumeMonitoringSelectors:(id)arg1 withSelectorsRequiringRetry:(id)arg2;
+ (id)autoAssetConnector;
+ (id)_getAutoAssetConnectorStateTable;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *currentAttemptRemainingSelectors; // @synthesize currentAttemptRemainingSelectors=_currentAttemptRemainingSelectors;
@property(retain, nonatomic) MAAutoAssetSelector *activeJobSelector; // @synthesize activeJobSelector=_activeJobSelector;
@property(retain, nonatomic) NSMutableDictionary *catalogServerNetworkPathStatus; // @synthesize catalogServerNetworkPathStatus=_catalogServerNetworkPathStatus;
@property(retain, nonatomic) NSMutableDictionary *catalogServerNetworkPathObservers; // @synthesize catalogServerNetworkPathObservers=_catalogServerNetworkPathObservers;
@property(retain, nonatomic) NSTimer *waitBeforeRetryTimer; // @synthesize waitBeforeRetryTimer=_waitBeforeRetryTimer;
@property(retain, nonatomic) NSTimer *backoffRetryTimer; // @synthesize backoffRetryTimer=_backoffRetryTimer;
@property(nonatomic) long long backoffRetryLevel; // @synthesize backoffRetryLevel=_backoffRetryLevel;
@property(retain, nonatomic) NSTimer *initialWaitTimer; // @synthesize initialWaitTimer=_initialWaitTimer;
@property(retain, nonatomic) NSMutableArray *triggeredSelectorsRequiringRetry; // @synthesize triggeredSelectorsRequiringRetry=_triggeredSelectorsRequiringRetry;
@property(retain, nonatomic) NSMutableArray *triggeredSelectorsNoRetry; // @synthesize triggeredSelectorsNoRetry=_triggeredSelectorsNoRetry;
@property(retain, nonatomic) NSMutableArray *selectorsRequiringRetry; // @synthesize selectorsRequiringRetry=_selectorsRequiringRetry;
@property(retain, nonatomic) NSMutableArray *monitorSelectors; // @synthesize monitorSelectors=_monitorSelectors;
@property(retain, nonatomic) NSString *latestSafeSummary; // @synthesize latestSafeSummary=_latestSafeSummary;
@property(retain, nonatomic) SUCoreFSM *autoConnectorFSM; // @synthesize autoConnectorFSM=_autoConnectorFSM;
@property(readonly, retain, nonatomic) NSDictionary *stateTable; // @synthesize stateTable=_stateTable;
@property(readonly, retain, nonatomic) SUCoreLog *logger; // @synthesize logger=_logger;
- (id)_updateLatestSummary;
- (id)summary;
- (id)description;
- (void)_logNextActiveJobForAttemptRemainingSelectors:(id)arg1;
- (void)_logClearedActiveJobAndAttemptRemainingSelectors:(id)arg1;
- (void)_logClearedAttemptRemainingSelectors:(id)arg1;
- (void)_logClearedActiveJobSelector:(id)arg1;
- (void)_logCurrentAttemptRemainingSelectors:(id)arg1;
- (void)_logTriggeredSelectorsCleared:(id)arg1;
- (void)_logTriggeredSelectorRequiringRetry:(id)arg1 removedSelector:(id)arg2;
- (void)_logTriggeredSelectorRequiringRetry:(id)arg1 addedSelector:(id)arg2;
- (void)_logTriggeredSelectorsRequiringRetry:(id)arg1;
- (void)_logTriggeredSelectorNoRetry:(id)arg1 removedSelector:(id)arg2;
- (void)_logTriggeredSelectorNoRetry:(id)arg1 addedSelector:(id)arg2;
- (void)_logTriggeredSelectorsNoRetry:(id)arg1;
- (void)_logSelectorRequiringRetry:(id)arg1 removedSelector:(id)arg2;
- (void)_logSelectorRequiringRetry:(id)arg1 addedSelector:(id)arg2;
- (void)_logSelectorsRequiringRetry:(id)arg1;
- (void)_logSelectorsBeingMonitored:(id)arg1;
- (void)_firedTimer:(id)arg1 ofTimerCategory:(id)arg2;
- (void)_stoppedTimer:(id)arg1 ofTimerCategory:(id)arg2;
- (id)_startTimer:(id)arg1 ofTimerCategory:(id)arg2 forOneShotSecs:(long long)arg3 withFiredMessage:(id)arg4 postingEvent:(id)arg5;
- (void)_issueFollowupApplicableServersUpDown:(id)arg1;
- (id)_followupInUseServerStatus:(id)arg1;
- (_Bool)_isAnyServerUpForJobsToBeAttempted:(id)arg1;
- (_Bool)_isPathToServerForSelectorUp:(id)arg1;
- (void)_trackServerDown:(id)arg1 fromLocation:(id)arg2;
- (void)_trackServerUp:(id)arg1 fromLocation:(id)arg2;
- (void)_removeObserverForSelector:(id)arg1;
- (void)_addObserverForSelector:(id)arg1;
- (_Bool)_isBackoffRetryRequired:(id)arg1;
- (void)_setBackoffRetryLevel:(long long)arg1 forReason:(id)arg2;
- (_Bool)_triggerNextSelector;
- (void)_chooseOrderForNextAttemptAndStartFirstJob:(id)arg1;
- (void)_refreshTrackingOfFinishedSelector:(id)arg1 withPotentialNetworkFailure:(_Bool)arg2;
- (void)_issueFollowupWhetherHaveJobs:(id)arg1;
- (_Bool)_isSelector:(id)arg1 trackedByArray:(id)arg2;
- (_Bool)_isSelectorBeingMonitored:(id)arg1;
- (void)_adoptAlteredSelectors:(id)arg1;
- (long long)actionUnknownAction:(id)arg1 error:(id *)arg2;
- (long long)action_JobFinishedDecideStillActiveJob:(id)arg1 error:(id *)arg2;
- (long long)action_JobFinishedDecideHaveJobs:(id)arg1 error:(id *)arg2;
- (long long)action_NextScheduledJobNowActive:(id)arg1 error:(id *)arg2;
- (long long)action_OrderAttemptFirstJobActive:(id)arg1 error:(id *)arg2;
- (long long)action_DecideServerApplicableToJobs:(id)arg1 error:(id *)arg2;
- (long long)action_AlteredJobsDecidePreemptBackoff:(id)arg1 error:(id *)arg2;
- (long long)action_AlteredJobsDecideStillActiveJob:(id)arg1 error:(id *)arg2;
- (long long)action_AlteredJobsReplaceDecideHaveJobs:(id)arg1 error:(id *)arg2;
- (long long)action_TrackServerDownDecideInUseActiveJob:(id)arg1 error:(id *)arg2;
- (long long)action_TrackServerUpDecideInUseActiveJob:(id)arg1 error:(id *)arg2;
- (long long)action_TrackServerDownDecideApplicableToJobs:(id)arg1 error:(id *)arg2;
- (long long)action_TrackServerUpDecideApplicableToJobs:(id)arg1 error:(id *)arg2;
- (long long)action_TrackServerDown:(id)arg1 error:(id *)arg2;
- (long long)action_TrackServerUp:(id)arg1 error:(id *)arg2;
- (long long)action_FiredRetryWaitOrderAttemptFirstJobActive:(id)arg1 error:(id *)arg2;
- (long long)action_FiredBackoffDecideServerApplicableToJobs:(id)arg1 error:(id *)arg2;
- (long long)action_FiredRetryWait:(id)arg1 error:(id *)arg2;
- (long long)action_FiredBackoffIgnored:(id)arg1 error:(id *)arg2;
- (long long)action_FiredRetryWaitIgnored:(id)arg1 error:(id *)arg2;
- (long long)action_FiredInitialDecideServerApplicableToJobs:(id)arg1 error:(id *)arg2;
- (long long)action_FiredInitial:(id)arg1 error:(id *)arg2;
- (long long)action_StopBackoffOrderAttemptFirstJobActive:(id)arg1 error:(id *)arg2;
- (long long)action_StopBackoffTimer:(id)arg1 error:(id *)arg2;
- (long long)action_StartBackoffAndRetryWaitTimers:(id)arg1 error:(id *)arg2;
- (long long)action_StartInitialWaitTimer:(id)arg1 error:(id *)arg2;
- (long long)action_ResumeDecideRequiringRetry:(id)arg1 error:(id *)arg2;
- (id)init;
- (long long)performAction:(id)arg1 onEvent:(id)arg2 inState:(id)arg3 withInfo:(id)arg4 nextState:(id)arg5 error:(id *)arg6;

@end

