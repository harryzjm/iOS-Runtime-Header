//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCameraClipManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraProfileSettingsManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSettingProactiveReaderDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSignificantEventListenerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFNetMonitorDelegate-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCameraClipManager, HMDCameraClipUserNotificationCenter, HMDCameraProfileSettingsManager, HMDCameraRecordingManager, HMDCameraRecordingReachabilityEventManager, HMDCameraResidentMessageHandler, HMDCameraSignificantEventListener, HMDCameraSnapshotManager, HMDCameraStreamSnapshotHandler, HMDHAPAccessory, HMDPredicateUtilities, HMDService, HMFNetMonitor, HMFTimer, NSMutableArray, NSSet, NSString, NSUUID, _HMCameraUserSettings;

@interface HMDCameraProfile <HMDCameraSettingProactiveReaderDelegate, HMDCameraProfileSettingsManagerDelegate, HMDCameraSignificantEventListenerDelegate, HMFNetMonitorDelegate, HMFTimerDelegate, HMDCameraClipManagerDelegate>
{
    _Bool _microphonePresent;
    _Bool _speakerPresent;
    NSUUID *_cloudZoneUUID;
    HMDCameraClipManager *_clipManager;
    HMDService *_recordingManagementService;
    HMDCameraSignificantEventListener *_significantEventListener;
    HMDHAPAccessory *_hapAccessory;
    NSSet *_cameraStreamManagers;
    HMDCameraSnapshotManager *_snapshotManager;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    NSMutableArray *_settingProactiveReaders;
    HMFNetMonitor *_networkMonitor;
    HMDCameraResidentMessageHandler *_residentMessageHandler;
    HMDCameraProfileSettingsManager *_cameraSettingsManager;
    HMDCameraRecordingReachabilityEventManager *_reachabilityEventManager;
    HMFTimer *_recordingEventsCleanupTimer;
    HMDCameraClipUserNotificationCenter *_clipUserNotificationCenter;
    HMDPredicateUtilities *_predicateUtilities;
    HMDCameraRecordingManager *_cameraRecordingManager;
    CDUnknownBlockType _recordingEventsCleanupTimerFactory;
    CDUnknownBlockType _recordingManagerFactory;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (void)setBulletinBoard:(id)arg1;
+ (id)bulletinBoard;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType recordingManagerFactory; // @synthesize recordingManagerFactory=_recordingManagerFactory;
@property(copy) CDUnknownBlockType recordingEventsCleanupTimerFactory; // @synthesize recordingEventsCleanupTimerFactory=_recordingEventsCleanupTimerFactory;
@property(retain) HMDCameraRecordingManager *cameraRecordingManager; // @synthesize cameraRecordingManager=_cameraRecordingManager;
@property(retain) HMDPredicateUtilities *predicateUtilities; // @synthesize predicateUtilities=_predicateUtilities;
@property(retain) HMDCameraClipUserNotificationCenter *clipUserNotificationCenter; // @synthesize clipUserNotificationCenter=_clipUserNotificationCenter;
@property(retain) HMFTimer *recordingEventsCleanupTimer; // @synthesize recordingEventsCleanupTimer=_recordingEventsCleanupTimer;
@property(readonly) HMDCameraRecordingReachabilityEventManager *reachabilityEventManager; // @synthesize reachabilityEventManager=_reachabilityEventManager;
@property(readonly) HMDCameraProfileSettingsManager *cameraSettingsManager; // @synthesize cameraSettingsManager=_cameraSettingsManager;
@property(readonly) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property(readonly) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(readonly) NSMutableArray *settingProactiveReaders; // @synthesize settingProactiveReaders=_settingProactiveReaders;
@property(readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(readonly) HMDCameraSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(readonly) NSSet *cameraStreamManagers; // @synthesize cameraStreamManagers=_cameraStreamManagers;
@property(readonly) __weak HMDHAPAccessory *hapAccessory; // @synthesize hapAccessory=_hapAccessory;
@property(retain) HMDCameraSignificantEventListener *significantEventListener; // @synthesize significantEventListener=_significantEventListener;
@property(readonly) HMDService *recordingManagementService; // @synthesize recordingManagementService=_recordingManagementService;
@property(retain) HMDCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property(retain) NSUUID *cloudZoneUUID; // @synthesize cloudZoneUUID=_cloudZoneUUID;
@property(readonly, nonatomic, getter=isSpeakerPresent) _Bool speakerPresent; // @synthesize speakerPresent=_speakerPresent;
@property(readonly, nonatomic, getter=isMicrophonePresent) _Bool microphonePresent; // @synthesize microphonePresent=_microphonePresent;
- (void)timerDidFire:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)listener:(id)arg1 didReceiveSignificantEvent:(id)arg2 heroFrameData:(id)arg3;
- (void)cameraProfileSettingsManager:(id)arg1 canDisableRecordingWithCompletion:(CDUnknownBlockType)arg2;
- (void)cameraProfileSettingsManager:(id)arg1 canEnableRecordingWithCompletion:(CDUnknownBlockType)arg2;
- (void)clipManagerDidDisableCloudStorage:(id)arg1;
- (void)clipManagerDidStop:(id)arg1;
- (void)clipManagerDidStartUpCloudZone:(id)arg1;
- (void)clipManagerDidStart:(id)arg1;
- (void)clipManager:(id)arg1 didDeleteClipWithUUID:(id)arg2;
- (void)clipManager:(id)arg1 didUpdateSignificantEvent:(id)arg2 withHomePresence:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)messageReceiverChildren;
- (void)handleResidentsChanged:(id)arg1;
- (void)handleCameraProfileSettingsDidChangeNotification:(id)arg1;
@property(readonly) _HMCameraUserSettings *currentSettings;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1;
- (void)_handleStreamControlRequest:(id)arg1;
- (void)_handleNegotiateStreamRequest:(id)arg1;
- (_Bool)_shouldNotifyForSignificantEvent:(id)arg1 homePresence:(id)arg2;
- (void)registerForMessages;
- (void)_setControlSupport;
- (id)_createCameraManagers:(id)arg1;
- (id)dumpState;
- (void)dealloc;
- (void)unconfigure;
- (void)removeCloudData;
@property(readonly, copy) NSString *description;
- (void)_createSignificantEventListener;
- (void)_createCameraRecordingManager;
- (void)createCameraClipUserNotificationCenter;
- (void)tearDownWithReplacementCameraProfile:(id)arg1;
- (void)setUp;
@property(readonly, nonatomic, getter=isCameraRecordingFeatureSupported) _Bool supportsCameraRecordingFeature;
- (id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3 settingsManager:(id)arg4 workQueue:(id)arg5 reachabilityEventManager:(id)arg6;
- (id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3 settingsManager:(id)arg4 workQueue:(id)arg5;
- (id)assistantObject;
- (id)urlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
