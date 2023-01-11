//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFMyriadEmergencyCallPunchout, AFMyriadRecord, AFMyriadStereoPairManager, AFPowerAssertionManager, NSData, NSDate, NSDateFormatter, NSMutableDictionary, NSString, NSUUID, _DKKnowledgeStore;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface AFMyriadCoordinator : NSObject
{
    unsigned long long _myriadState;
    unsigned long long _nextState;
    unsigned long long _previousState;
    NSData *_previousAdvertisedData;
    NSMutableDictionary *_replies;
    NSMutableDictionary *_replyCounts;
    NSMutableDictionary *_previousTrumps;
    NSMutableDictionary *_incomingTrumps;
    NSMutableDictionary *_multipleContinuations;
    id _delegate;
    NSString *_deviceClassName;
    unsigned char _deviceClass;
    int _deviceAdjust;
    double _deviceDelay;
    double _deviceTrumpDelay;
    unsigned char _deviceGroup;
    NSObject<OS_dispatch_queue> *_myriadWorkQueue;
    NSObject<OS_dispatch_queue> *_myriadWaitWiProxQueue;
    NSObject<OS_dispatch_queue> *_myriadTimerManagementQueue;
    NSObject<OS_dispatch_queue> *_myriadReadinessQueue;
    NSString *_timerLabel;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_semaphore> *_wiproxReadinessSemaphore;
    AFPowerAssertionManager *_powerAssertionManager;
    AFMyriadStereoPairManager *_pairManager;
    struct __CFNotificationCenter *_center;
    AFMyriadRecord *_triggerRecord;
    unsigned long long _voiceTriggerTime;
    float _delayTarget;
    float _advertInterval;
    int _nTimesContinued;
    int _nTimesExtended;
    BOOL _incomingAdjustment;
    int _slowdownMsecs;
    int _testInducedSlowdownMsecs;
    AFMyriadRecord *_maxSlowdownRecord;
    _Bool _BTLEReady;
    _Bool _inTask;
    _Bool _ducking;
    _Bool _supportsExtended;
    _Bool _listenTimerIsRunning;
    _Bool _coordinationEnabled;
    _Bool _clientIsDirectActivating;
    _Bool _clientRecentlyLostElection;
    _Bool _clientLostDueToTrumping;
    _Bool _clientIsListeningAfterRecentWin;
    _Bool _clientIsWatchActivation;
    _Bool _clientIsWatchTrumpPromote;
    _Bool _clientIsRespondingToSlowdown;
    _Bool _clientDoneRespondingToSlowdown;
    int _constantGoodness;
    NSObject<OS_dispatch_source> *_timerSource;
    NSDateFormatter *_dateFormat;
    _DKKnowledgeStore *_coreDuetStore;
    NSUUID *_designatedSelfID;
    double _lastSiriActivationTime;
    NSDate *_triggerTime;
    int _nDeltaTs;
    AFMyriadEmergencyCallPunchout *_callPunchout;
    unsigned long long _lastDecisionTime;
    _Bool _lastDecision;
    unsigned short _lastPHash;
    double _lastEmergencyAttempt;
    _Bool _wasEmergency;
}

+ (void)clearCurrentCoordinator;
+ (void)didChangeDefaults;
+ (id)currentCoordinator;
- (void).cxx_destruct;
- (void)_signalEmergencyCallHandled;
- (unsigned short)recentEventBump;
- (void)logCoreDuetResults:(id)arg1;
- (id)activityEventStream;
- (void)_waitWiProxAndExecute:(CDUnknownBlockType)arg1;
- (void)_waitWiProx:(long long)arg1 andExecute:(CDUnknownBlockType)arg2;
- (void)_ageWedgeFilter;
- (_Bool)_testAndUpdateWedgeFilter:(id)arg1;
- (_Bool)_inTaskTriggerWasTooSoon;
- (id)_sortedReplies;
- (_Bool)_isAPhone:(unsigned char)arg1;
- (_Bool)_shouldHandleEmergency;
- (_Bool)_shouldContinueFor:(id)arg1;
- (id)slowdownRecord:(unsigned short)arg1;
- (id)responseObject:(unsigned short)arg1;
- (id)emergencyHandledRecord;
- (id)emergencyRecord;
- (id)continuationRecord;
- (id)lateSuppressionRecord;
- (id)directTriggerRecord;
- (id)voiceTriggerRecord;
- (void)_advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 thenExecute:(CDUnknownBlockType)arg4;
- (void)advertiseWith:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (void)advertiseWith:(id)arg1;
- (void)startAdvertising:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3;
- (void)_advertiseIndefinite:(id)arg1;
- (void)_advertise:(id)arg1 afterDelay:(float)arg2 maxInterval:(float)arg3 andMoveTo:(unsigned long long)arg4;
- (void)_advertise:(id)arg1 andMoveTo:(unsigned long long)arg2;
- (void)_advertiseSuppressTriggerInOutput;
- (_Bool)_okayToSuppressOnOutput;
- (void)_advertiseSlowdown;
- (void)_advertiseTrigger;
- (void)setupAdvIntervalsInDelay:(float *)arg1 interval:(float *)arg2 withSlowdown:(int)arg3;
- (void)_duringNextWindowEnterState:(unsigned long long)arg1;
- (void)_duringNextWindowExecute:(CDUnknownBlockType)arg1;
- (void)_adjustActionWindowsFromSlowdown:(int)arg1;
- (void)_resetActionWindows;
- (void)_setupActionWindows;
- (void)_unduck;
- (void)_stopAdvertisingAndListening;
- (void)stopListening;
- (void)stopAdvertising;
- (void)startListening;
- (void)preheatWiProx;
- (void)resetReplies;
- (id)_stateAsString:(unsigned long long)arg1;
- (id)_stateAsString;
- (void)enterState:(unsigned long long)arg1;
- (void)_enterState:(unsigned long long)arg1;
- (void)_startTimer:(id)arg1 for:(float)arg2 thenEnterState:(unsigned long long)arg3;
- (void)_startTimer:(id)arg1 until:(id)arg2 thenExecute:(CDUnknownBlockType)arg3;
- (void)_startTimer:(id)arg1 for:(float)arg2 thenExecute:(CDUnknownBlockType)arg3;
- (void)_startListenTimer;
- (void)_CreateDispatchTimerForEvent:(id)arg1 toExecute:(CDUnknownBlockType)arg2;
- (void)_CreateDispatchTimerFor:(double)arg1 toExecute:(CDUnknownBlockType)arg2;
- (void)_initializeTimer;
- (void)setupEnabled:(_Bool)arg1;
- (void)setInTask:(_Bool)arg1;
- (_Bool)inTask;
- (void)endTask;
- (void)_loseElection;
- (void)endAdvertisingWithDeviceProhibitions:(id)arg1;
- (void)_endAdvertisingWithDeviceProhibitions:(id)arg1;
- (id)_endAdvertisingAnalyticsContext:(_Bool)arg1;
- (void)endAdvertising;
- (void)endAdvertisingAfterDelay:(float)arg1;
- (void)startAdvertisingSlowdown:(unsigned short)arg1;
- (void)startResponseAdvertising:(unsigned short)arg1;
- (void)startAdvertisingFromInTaskVoiceTrigger;
- (void)startAdvertisingEmergency;
- (void)startAdvertisingEmergencyHandled;
- (void)startAdvertisingFromOutgoingTrigger;
- (void)startAdvertisingFromDirectTrigger;
- (void)startWatchAdvertisingFromDirectTrigger;
- (void)startWatchAdvertisingFromVoiceTrigger;
- (double)_targetDelayAfterTrigger:(unsigned long long)arg1;
- (void)_startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1;
- (void)startAdvertisingFromVoiceTriggerAdjusted:(BOOL)arg1;
- (void)_startAdvertisingFromVoiceTrigger;
- (void)startAdvertisingFromVoiceTrigger;
- (void)_initDeviceClassAndAdjustments;
- (void)_readDefaults;
- (void)readDefaults;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

