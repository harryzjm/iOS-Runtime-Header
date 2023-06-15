//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraProfile, HMDCameraRecordingBulkSendSessionInitiator, HMDCameraRecordingBulkSendSessionReader, HMDCameraRecordingLoadBalancer, HMDCameraRecordingSession, HMDCameraRecordingSessionNotificationTrigger, HMDCameraRecordingSessionRetryContext, HMDCameraRecordingSettingsControl, HMDCameraSignificantEventServer, HMDHAPAccessory, HMFMessageDispatcher, HMFTimer, NSMutableSet, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDCameraRecordingManagerDependencyFactory, HMDFeaturesDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingManager : HMFObject
{
    _Bool _didShutDown;
    _Bool _motionActive;
    NSUUID *_messageTargetUUID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDCameraRecordingLoadBalancer *_cameraLoadBalancer;
    id <HMDFeaturesDataSource> _featuresDataSource;
    HMDCameraSignificantEventServer *_significantEventServer;
    NSUUID *_cameraUUID;
    NSNotificationCenter *_notificationCenter;
    id <HMMLogEventSubmitting> _logEventSubmitter;
    NSMutableSet *_activeRecordingSessions;
    HMDCameraRecordingSessionNotificationTrigger *_notificationTrigger;
    HMDCameraRecordingSettingsControl *_recordingSettingsControl;
    id <HMDCameraRecordingManagerDependencyFactory> _dependencyFactory;
    HMDCameraRecordingBulkSendSessionInitiator *_bulkSendSessionInitiator;
    HMDHAPAccessory *_accessory;
    HMDCameraProfile *_camera;
    HMDCameraRecordingSession *_currentRecordingSession;
    HMDCameraRecordingBulkSendSessionReader *_currentBulkSendSessionReader;
    HMFTimer *_sessionRetryTimer;
    HMDCameraRecordingSessionRetryContext *_sessionRetryContext;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(getter=isMotionActive) _Bool motionActive; // @synthesize motionActive=_motionActive;
@property _Bool didShutDown; // @synthesize didShutDown=_didShutDown;
@property(retain) HMDCameraRecordingSessionRetryContext *sessionRetryContext; // @synthesize sessionRetryContext=_sessionRetryContext;
@property(retain) HMFTimer *sessionRetryTimer; // @synthesize sessionRetryTimer=_sessionRetryTimer;
@property(retain) HMDCameraRecordingBulkSendSessionReader *currentBulkSendSessionReader; // @synthesize currentBulkSendSessionReader=_currentBulkSendSessionReader;
@property(retain) HMDCameraRecordingSession *currentRecordingSession; // @synthesize currentRecordingSession=_currentRecordingSession;
@property __weak HMDCameraProfile *camera; // @synthesize camera=_camera;
@property __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) HMDCameraRecordingBulkSendSessionInitiator *bulkSendSessionInitiator; // @synthesize bulkSendSessionInitiator=_bulkSendSessionInitiator;
@property(readonly) id <HMDCameraRecordingManagerDependencyFactory> dependencyFactory; // @synthesize dependencyFactory=_dependencyFactory;
@property(readonly) HMDCameraRecordingSettingsControl *recordingSettingsControl; // @synthesize recordingSettingsControl=_recordingSettingsControl;
@property(readonly) HMDCameraRecordingSessionNotificationTrigger *notificationTrigger; // @synthesize notificationTrigger=_notificationTrigger;
@property(readonly) NSMutableSet *activeRecordingSessions; // @synthesize activeRecordingSessions=_activeRecordingSessions;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy) NSUUID *cameraUUID; // @synthesize cameraUUID=_cameraUUID;
@property(readonly) HMDCameraSignificantEventServer *significantEventServer; // @synthesize significantEventServer=_significantEventServer;
@property(readonly) id <HMDFeaturesDataSource> featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property(readonly) HMDCameraRecordingLoadBalancer *cameraLoadBalancer; // @synthesize cameraLoadBalancer=_cameraLoadBalancer;
@property(readonly) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (void)handleCameraSettingsDidChangeNotification:(id)arg1;
- (void)session:(id)arg1 didEndWithError:(id)arg2;
- (id)logIdentifier;
- (void)bulkSendSessionReader:(id)arg1 didFinishWithReason:(unsigned short)arg2;
- (void)bulkSendSessionReader:(id)arg1 didReadFragment:(id)arg2;
- (void)_resetCurrentRecordingSession:(id)arg1;
- (void)_startSessionRetryTimer;
- (void)_resetRetryContextWithReason:(id)arg1;
- (void)_closeCurrentSessionsWithReason:(unsigned short)arg1;
- (unsigned short)_closeEventReasonForRecordingSessionError:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)_handleBulkSendSessionCreated:(id)arg1;
- (void)_startRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2 reason:(id)arg3 selectedConfiguration:(id)arg4 completionCallback:(CDUnknownBlockType)arg5;
- (void)_prepareRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2 reason:(id)arg3 completionCallback:(CDUnknownBlockType)arg4;
- (void)_prepareRecordingSessionForTrigger:(unsigned long long)arg1 homePresenceByPairingIdentity:(id)arg2 reason:(id)arg3;
- (id)bulkSendSessionOpenReasonWithError:(id *)arg1;
- (void)handleStartRecordingSessionRequest:(id)arg1;
- (void)_configureRecordingSession:(id)arg1 withTrigger:(unsigned long long)arg2;
- (id)_createRecordingSessionWithHomePresenceByPairingIdentity:(id)arg1 selectedConfiguration:(id)arg2;
- (void)_submitLoadBalancingEventWithDecision:(id)arg1 numberOfRetries:(unsigned long long)arg2;
- (void)_forwardRecordingSessionForTrigger:(unsigned long long)arg1 withLoadBalancerDecision:(id)arg2 deviceFilter:(CDUnknownBlockType)arg3 sessionCoordinationLogEvent:(id)arg4 retryAttemptNumber:(long long)arg5;
- (id)homePresenceByPairingIdentity;
- (void)_coordinateRecordingSessionForTrigger:(unsigned long long)arg1 sessionCoordinationLogEvent:(id)arg2;
- (void)_coordinateRecordingSessionForTrigger:(unsigned long long)arg1;
- (void)_clipManagerDidStartUpCloudZone;
- (void)_shutDown;
- (void)_start;
- (void)recordingSettingsControlDidConfigure:(id)arg1;
- (void)clipManagerDidStop:(id)arg1;
- (void)clipManagerDidStartUpCloudZone:(id)arg1;
- (void)notificationTrigger:(id)arg1 didObserveTriggerType:(unsigned long long)arg2 changeToActive:(_Bool)arg3;
- (void)shutDown;
- (void)start;
- (void)dealloc;
- (id)initWithCamera:(id)arg1 recordingManagementService:(id)arg2 workQueue:(id)arg3 dependencyFactory:(id)arg4 notificationCenter:(id)arg5;
- (id)initWithCamera:(id)arg1 recordingManagementService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

