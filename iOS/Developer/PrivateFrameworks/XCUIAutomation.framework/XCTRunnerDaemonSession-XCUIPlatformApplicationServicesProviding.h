//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTestCore/XCTRunnerDaemonSession.h>

#import <XCUIAutomation/XCTMessagingRole_UIApplicationStateUpdating-Protocol.h>
#import <XCUIAutomation/XCUIApplicationAutomationSessionProviding-Protocol.h>
#import <XCUIAutomation/XCUIDeviceAutomationModeInterface-Protocol.h>
#import <XCUIAutomation/XCUIDeviceDelayedAttachmentTransferSupportInterface-Protocol.h>
#import <XCUIAutomation/XCUIDeviceEventAndStateInterface-Protocol.h>
#import <XCUIAutomation/XCUILocalDeviceScreenshotIPCInterface-Protocol.h>
#import <XCUIAutomation/XCUIPlatformApplicationServicesProviding-Protocol.h>
#import <XCUIAutomation/XCUIRemoteAccessibilityInterface-Protocol.h>
#import <XCUIAutomation/XCUIRemoteSiriInterface-Protocol.h>
#import <XCUIAutomation/XCUIResetAuthorizationStatusOfProtectedResourcesInterface-Protocol.h>

@class NSString, XCTCapabilities;
@protocol XCUIApplicationPlatformServicesProviderDelegate;

@interface XCTRunnerDaemonSession (XCUIPlatformApplicationServicesProviding) <XCUIPlatformApplicationServicesProviding, XCUIDeviceDelayedAttachmentTransferSupportInterface, XCUIDeviceAutomationModeInterface, XCUIResetAuthorizationStatusOfProtectedResourcesInterface, XCUIRemoteSiriInterface, XCUIDeviceEventAndStateInterface, XCUILocalDeviceScreenshotIPCInterface, XCUIApplicationAutomationSessionProviding, XCTMessagingRole_UIApplicationStateUpdating, XCUIRemoteAccessibilityInterface>
+ (id)unsupportedBundleIdentifiersForAutomationSessions;
+ (void)registerCapabilitiesForDaemonConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)capabilities;
- (void)requestApplicationSpecifierForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchAttributesForElement:(id)arg1 attributes:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 usingApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openDefaultApplicationForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)terminateApplicationWithBundleID:(id)arg1 pid:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)launchApplicationWithPath:(id)arg1 bundleID:(id)arg2 arguments:(id)arg3 environment:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(readonly) _Bool providesClientStateUpdates;
- (void)beginMonitoringApplicationWithSpecifier:(id)arg1;
@property __weak id <XCUIApplicationPlatformServicesProviderDelegate> platformApplicationServicesProviderDelegate;
@property(readonly) _Bool supportsDelayedAttachmentTransfer;
- (_Bool)enableAutomationModeWithError:(id *)arg1;
@property(readonly) _Bool supportsAutomationMode;
- (_Bool)resetAuthorizationStatusForBundleIdentifier:(id)arg1 resourceIdentifier:(id)arg2 error:(id *)arg3;
@property(readonly) _Bool supportsInjectingVoiceRecognitionAudioInputPaths;
- (void)injectVoiceRecognitionAudioInputPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)injectAssistantRecognitionStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly) _Bool supportsStartingSiriUIRequestWithAudioFileURL;
- (void)startSiriUIRequestWithAudioFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSiriUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSiriEnabledStatus:(CDUnknownBlockType)arg1;
- (void)setSimulatedLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSimulatedLocationWithReply:(CDUnknownBlockType)arg1;
- (void)clearSimulatedLocationWithReply:(CDUnknownBlockType)arg1;
@property(readonly) _Bool supportsLocationSimulation;
- (void)hasHardwareButton:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getInterfaceOrientationWithReply:(CDUnknownBlockType)arg1;
- (void)updateAppearanceMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAppearanceModeWithReply:(CDUnknownBlockType)arg1;
@property(readonly) _Bool supportsAppearanceMode;
- (void)updateDeviceOrientation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performDeviceEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDeviceOrientationWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestScreenshotAttachmentWithRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)requestScreenshotWithRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool supportsHEICImageEncoding;
@property(readonly, nonatomic) _Bool useLegacyScreenshotPath;
- (void)stopScreenRecordingWithUUID:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)startScreenRecordingWithRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (_Bool)supportsScreenRecording;
- (_Bool)preferScreenshotsOverScreenRecordings;
- (void)requestUnsupportedBundleIdentifiersForAutomationSessions:(CDUnknownBlockType)arg1;
- (void)requestAutomationSessionForTestTargetWithPID:(int)arg1 preferredBackendPath:(id)arg2 reply:(CDUnknownBlockType)arg3;
@property(readonly) long long applicationAutomationSessionSupport;
- (void)_XCT_interfaceOrientationDidChange:(long long)arg1;
- (void)_XCT_deviceOrientationDidChange:(long long)arg1;
- (void)_XCT_applicationWithBundleID:(id)arg1 didUpdatePID:(int)arg2 andState:(unsigned long long)arg3;
- (void)_XCT_applicationDidUpdateState:(id)arg1;
- (unsigned long long)currentKeyboardModifierFlags;
- (void)playBackHIDEventRecordingFromData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stopHIDEventRecordingWithReply:(CDUnknownBlockType)arg1;
- (void)startHIDEventRecordingWithReply:(CDUnknownBlockType)arg1;
- (_Bool)supportsHIDEventRecording;
- (void)receivedAccessibilityNotification:(int)arg1 fromElement:(id)arg2 payload:(id)arg3;
- (void)daemonDidUpdatePID:(int)arg1 forApplicationWithBundleID:(id)arg2 andState:(unsigned long long)arg3;
- (void)enableFauxCollectionViewCells:(CDUnknownBlockType)arg1;
- (void)setLocalizableStringsDataGatheringEnabled:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;
- (void)unloadAccessibility:(CDUnknownBlockType)arg1;
- (void)loadAccessibilityWithTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setAXTimeout:(double)arg1 reply:(CDUnknownBlockType)arg2;
- (id)synthesizeEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestElementAtPoint:(struct CGPoint)arg1 reply:(CDUnknownBlockType)arg2;
- (void)fetchParameterizedAttribute:(id)arg1 forElement:(id)arg2 parameter:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)fetchAttributes:(id)arg1 forElement:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)runAccessibilityAuditForElement:(id)arg1 withConfiguration:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)fetchSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)requestSnapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 reply:(CDUnknownBlockType)arg4;
@property(readonly) _Bool axNotificationsIncludeElement;
@property(readonly) _Bool useLegacySnapshotPath;
- (void)performAccessibilityAction:(id)arg1 onElement:(id)arg2 value:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)unregisterForAccessibilityNotification:(int)arg1 registrationToken:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)registerForAccessibilityNotification:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestBackgroundAssertionForPID:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)usePointTransformationsForFrameConversions;
- (_Bool)useLegacyEventCoordinateTransformationPath;
- (_Bool)requestPressureEventsSupportedOrError:(id *)arg1;
- (_Bool)requestPointerEventsSupportedOrError:(id *)arg1;
- (double)implicitEventConfirmationIntervalForCurrentContext;
- (void)setImplicitEventConfirmationIntervalForCurrentContext:(double)arg1;
- (void)setImplicitEventConfirmationIntervalForCurrentContextWithoutSideEffects:(double)arg1;
- (void)setAxNotificationHandler:(id)arg1;
- (id)axNotificationHandler;
- (void)finishInitializationForUIAutomation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) XCTCapabilities *remoteInterfaceCapabilities;
@property(readonly) Class superclass;
@end

