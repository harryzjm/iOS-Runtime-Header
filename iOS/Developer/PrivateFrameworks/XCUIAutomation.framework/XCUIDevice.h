//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, XCTContext, XCUILocation, XCUIRemote, XCUIScreen, XCUISiriService, XCUISystem;
@protocol XCTSignpostListener, XCUIAccessibilityInterface, XCUIApplicationAutomationSessionProviding, XCUIApplicationMonitor, XCUIApplicationProcessManaging, XCUIDeviceAutomationModeInterface, XCUIDeviceDelayedAttachmentTransferSupportInterface, XCUIDeviceDiagnostics, XCUIDeviceEventAndStateInterface, XCUIEventSynthesizing, XCUIInterruptionMonitoring, XCUIResetAuthorizationStatusOfProtectedResourcesInterface, XCUIScreenDataSource, XCUIXcodeApplicationManaging;

@interface XCUIDevice : NSObject
{
    _Bool _isLocal;
    _Bool _isSimulatorDevice;
    _Bool _wasSystemAppActivated;
    long long _platform;
    id <XCUIAccessibilityInterface> _accessibilityInterface;
    id <XCUIApplicationMonitor> _applicationMonitor;
    id <XCUIEventSynthesizing> _eventSynthesizer;
    id <XCUIApplicationProcessManaging> _platformApplicationManager;
    id <XCUIXcodeApplicationManaging> _xcodeApplicationManager;
    id <XCUIDeviceEventAndStateInterface> _deviceEventAndStateInterface;
    id <XCUIApplicationAutomationSessionProviding> _applicationAutomationSessionProvider;
    XCUISiriService *_siriService;
    XCUISystem *_system;
    id <XCUIScreenDataSource> _screenDataSource;
    NSString *_uniqueIdentifier;
    XCUIRemote *_remote;
    id <XCUIInterruptionMonitoring> _interruptionMonitor;
    id <XCUIResetAuthorizationStatusOfProtectedResourcesInterface> _resetAuthorizationStatusInterface;
    id <XCUIDeviceDiagnostics> _diagnosticsProvider;
    id <XCUIDeviceAutomationModeInterface> _automationModeInterface;
    id <XCUIDeviceDelayedAttachmentTransferSupportInterface> _delayedAttachmentTransferSupportInterface;
    XCTContext *_reportingContext;
    NSString *_name;
    NSString *_alias;
    XCUIScreen *_screenCurrentlyUsedForScreenRecording;
    id <XCTSignpostListener> _signpostListener;
}

+ (id)sharedDevice;
+ (void)setLocalDevice:(id)arg1;
+ (id)localDevice;
- (void).cxx_destruct;
@property(readonly) id <XCTSignpostListener> signpostListener; // @synthesize signpostListener=_signpostListener;
@property _Bool wasSystemAppActivated; // @synthesize wasSystemAppActivated=_wasSystemAppActivated;
@property(retain, nonatomic) XCUIScreen *screenCurrentlyUsedForScreenRecording; // @synthesize screenCurrentlyUsedForScreenRecording=_screenCurrentlyUsedForScreenRecording;
- (void)setAlias:(id)arg1;
- (id)alias;
- (id)name;
- (id)reportingContext;
- (id)delayedAttachmentTransferSupportInterface;
- (id)automationModeInterface;
- (id)diagnosticsProvider;
- (id)resetAuthorizationStatusInterface;
- (id)interruptionMonitor;
- (id)remote;
- (_Bool)isSimulatorDevice;
- (id)uniqueIdentifier;
- (id)screenDataSource;
- (id)applicationAutomationSessionProvider;
- (id)deviceEventAndStateInterface;
- (id)xcodeApplicationManager;
- (id)platformApplicationManager;
- (id)eventSynthesizer;
- (id)applicationMonitor;
- (id)accessibilityInterface;
- (long long)platform;
- (_Bool)isLocal;
- (void)remoteAutomationSessionDidDisconnect:(id)arg1;
- (void)performWithKeyModifiers:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)_setModifiers:(unsigned long long)arg1 merge:(_Bool)arg2 beginPersistentState:(_Bool)arg3 description:(id)arg4;
- (_Bool)playBackHIDEventRecordingFromURL:(id)arg1 error:(id *)arg2;
- (_Bool)stopHIDEventRecordingAndSaveToURL:(id)arg1 error:(id *)arg2;
- (_Bool)startHIDEventRecordingWithError:(id *)arg1;
- (void)attachLocalizableStringsData;
- (void)ensureSystemAppIsLoaded;
- (void)rotateDigitalCrownByDelta:(double)arg1 withVelocity:(double)arg2;
- (void)rotateDigitalCrownByDelta:(double)arg1;
- (void)rotateDigitalCrown:(double)arg1 velocity:(double)arg2;
- (void)pressLockButton;
- (void)holdHomeButtonForDuration:(double)arg1;
- (void)pressButton:(long long)arg1;
- (void)_silentPressButton:(long long)arg1;
- (void)_clearSimulatedLocation;
@property(retain, nonatomic) XCUILocation *location;
@property(nonatomic) long long appearance;
- (void)setAppearanceMode:(long long)arg1;
- (long long)appearanceMode;
- (void)didUpdateInterfaceOrientation:(long long)arg1;
- (void)didUpdateDeviceOrientation:(long long)arg1;
- (void)_setOrientation:(long long)arg1;
@property(nonatomic) long long orientation;
- (id)init;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)spindumpAttachmentForProcessID:(int)arg1 error:(id *)arg2;
- (_Bool)isScreenRecordingSupported;
- (_Bool)isScreenRecordingActive;
- (void)stopDiagnosticScreenRecording;
- (id)startDiagnosticScreenRecording;
- (id)makeDiagnosticScreenshotAttachmentsForDevice;
- (id)makeDiagnosticScreenshotAttachmentForDevice;
- (id)mainScreen;
- (id)screens;
- (id)screenWithDisplayID:(long long)arg1 orError:(id *)arg2;
- (id)mainScreenOrError:(id *)arg1;
- (id)screensOrError:(id *)arg1;
@property(readonly, nonatomic) XCUISystem *system; // @synthesize system=_system;
@property(readonly) XCUISiriService *siriService; // @synthesize siriService=_siriService;
- (_Bool)hasHardwareButton:(long long)arg1;
- (_Bool)supportsPressureInteraction;
@property(readonly) _Bool supportsPointerInteraction;
- (_Bool)performDeviceEvent:(id)arg1 error:(id *)arg2;
- (_Bool)configuredForUITesting;
- (id)diagnosticAttachmentsForError:(id)arg1;
- (_Bool)enableAutomationMode:(id *)arg1;
- (id)initWithDiagnosticProvider:(id)arg1;
- (id)initLocalDeviceWithPlatform:(long long)arg1;

@end

