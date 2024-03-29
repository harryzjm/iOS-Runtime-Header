//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZone, HMBLocalZone, HMDAppleAccountSettings, HMDBulletinBoard, HMDCameraRecordingReachabilityEventModel, HMDHAPAccessory, HMFMessageDispatcher, HMFTimer, NSDate, NSHashTable, NSNotificationCenter, NSObject, NSString, NSUUID, _HMCameraUserSettings;
@protocol HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingReachabilityEventManager : HMFObject
{
    _Bool _currentDeviceConfirmedPrimaryResident;
    _Bool _currentDeviceConnectedToNetwork;
    _Bool _lastKnownCameraReachability;
    _Bool _currentCameraReachability;
    _Bool _currentBridgedCameraReachability;
    HMDHAPAccessory *_hapAccessory;
    NSUUID *_uniqueIdentifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDBulletinBoard *_bulletinBoard;
    HMDAppleAccountSettings *_accountSettings;
    NSNotificationCenter *_notificationCenter;
    HMFMessageDispatcher *_messageDispatcher;
    NSHashTable *_clientConnections;
    id <HMMLogEventSubmitting> _logEventSubmitter;
    unsigned long long _reachabilityChangeDebounceCount;
    _HMCameraUserSettings *_currentSettings;
    HMDCameraRecordingReachabilityEventModel *_mostRecentReachabilityEventModel;
    HMBLocalZone *_localZone;
    HMBCloudZone *_cloudZone;
    HMFTimer *_initialReachabilityTimer;
    HMFTimer *_reachabilityChangeDebounceTimer;
    NSDate *_reachabilityChangeDebounceStartDate;
    NSDate *_suppressNotificationsBeforeDate;
    CDUnknownBlockType _initialReachabilityTimerFactory;
    CDUnknownBlockType _reachabilityChangeDebounceTimerFactory;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType reachabilityChangeDebounceTimerFactory; // @synthesize reachabilityChangeDebounceTimerFactory=_reachabilityChangeDebounceTimerFactory;
@property(copy) CDUnknownBlockType initialReachabilityTimerFactory; // @synthesize initialReachabilityTimerFactory=_initialReachabilityTimerFactory;
@property(copy) NSDate *suppressNotificationsBeforeDate; // @synthesize suppressNotificationsBeforeDate=_suppressNotificationsBeforeDate;
@property(copy) NSDate *reachabilityChangeDebounceStartDate; // @synthesize reachabilityChangeDebounceStartDate=_reachabilityChangeDebounceStartDate;
@property(retain) HMFTimer *reachabilityChangeDebounceTimer; // @synthesize reachabilityChangeDebounceTimer=_reachabilityChangeDebounceTimer;
@property(retain) HMFTimer *initialReachabilityTimer; // @synthesize initialReachabilityTimer=_initialReachabilityTimer;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(copy) HMDCameraRecordingReachabilityEventModel *mostRecentReachabilityEventModel; // @synthesize mostRecentReachabilityEventModel=_mostRecentReachabilityEventModel;
@property(copy) _HMCameraUserSettings *currentSettings; // @synthesize currentSettings=_currentSettings;
@property unsigned long long reachabilityChangeDebounceCount; // @synthesize reachabilityChangeDebounceCount=_reachabilityChangeDebounceCount;
@property _Bool currentBridgedCameraReachability; // @synthesize currentBridgedCameraReachability=_currentBridgedCameraReachability;
@property _Bool currentCameraReachability; // @synthesize currentCameraReachability=_currentCameraReachability;
@property _Bool lastKnownCameraReachability; // @synthesize lastKnownCameraReachability=_lastKnownCameraReachability;
@property(retain) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain) NSHashTable *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDAppleAccountSettings *accountSettings; // @synthesize accountSettings=_accountSettings;
@property(readonly) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly) __weak HMDHAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
- (id)logIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)clipManagerDidStop:(id)arg1;
- (void)clipManagerDidStart:(id)arg1;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (void)handleDeleteAllEventsMessage:(id)arg1;
- (void)handlePerformCloudPullMessage:(id)arg1;
- (void)handleUnsubscribeMessage:(id)arg1;
- (void)handleSubscribeMessage:(id)arg1;
- (void)handleFetchCountOfEventsMessage:(id)arg1;
- (void)handleFetchEventsMessage:(id)arg1;
- (void)handleRemoteCameraReachabilityChange:(id)arg1;
- (void)handleAppleAccountSettingsHomeStateUpdated:(id)arg1;
- (void)handleHMDBridgedAccessoryUnreachableNotification:(id)arg1;
- (void)handleHMDBridgedAccessoryReachableNotification:(id)arg1;
- (void)handleAccessoryUnconfigured:(id)arg1;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleCameraProfileSettingsDidChange:(id)arg1;
- (void)handleResidentDeviceConfirmedStateChangedNotification:(id)arg1;
- (id)mostRecentReachabilityEventModelInModels:(id)arg1;
- (void)startReachabilityChangeDebounceTimerWithReachability:(_Bool)arg1;
@property(readonly) double reachabilityChangeUnreachableDebounceTimeout;
@property(readonly) double reachabilityChangeReachableDebounceTimeout;
- (void)updateInitialReachabilityTimer;
@property(readonly) double initialReachabilityTimeout;
- (id)performCloudPullWithLabel:(id)arg1;
- (void)submitLogEventWithCurrentModel:(id)arg1;
- (id)reachabilityEventModelForCurrentCameraReachability:(_Bool)arg1 dateOfOccurrence:(id)arg2;
- (void)notifyTransportOfUpdatedEvents:(id)arg1 removedEventUUIDs:(id)arg2;
- (void)notifySubscribersOfRemoteCameraReachabilityEvent;
- (void)addCameraReachabilityEventForCurrentCameraReachability:(_Bool)arg1 dateOfOccurrence:(id)arg2;
- (id)fetchReachabilityEventsWithDateInterval:(id)arg1;
- (_Bool)shouldAddInitialReachabilityEventForCurrentCameraReachability:(_Bool)arg1;
- (void)handleInitialCameraReachability;
- (void)handleUpdatedCameraReachability:(_Bool)arg1;
@property(nonatomic, getter=isCurrentDeviceConnectedToNetwork) _Bool currentDeviceConnectedToNetwork; // @synthesize currentDeviceConnectedToNetwork=_currentDeviceConnectedToNetwork;
@property(nonatomic, getter=isCurrentDeviceConfirmedPrimaryResident) _Bool currentDeviceConfirmedPrimaryResident; // @synthesize currentDeviceConfirmedPrimaryResident=_currentDeviceConfirmedPrimaryResident;
- (_Bool)isAccessoryReachable;
- (void)cleanUpEvents;
- (void)configureWithMessageDispatcher:(id)arg1 currentSettings:(id)arg2 isCurrentDeviceConfirmedPrimaryResident:(_Bool)arg3 isCurrentDeviceConnectedToNetwork:(_Bool)arg4;
- (id)initWithHAPAccessory:(id)arg1 workQueue:(id)arg2;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 identifier:(id)arg3 bulletinBoard:(id)arg4 logEventSubmitter:(id)arg5 accountSettings:(id)arg6 notificationCenter:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

