//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXIPCClient, AXIPCServer, NSMapTable, NSMutableArray, RBSProcessMonitor, _AXAssertionServer;
@protocol AXSpringBoardServerInstanceDelegate, OS_dispatch_queue;

@interface _AXSpringBoardServerInstance : NSObject
{
    AXIPCServer *_server;
    AXIPCClient *_client;
    id <AXSpringBoardServerInstanceDelegate> _delegate;
    NSMutableArray *_actionHandlers;
    NSMutableArray *_reachabilityHandlers;
    NSMapTable *_assertionClients;
    AXIPCClient *_currentSpeakerClient;
    struct __IOHIDManager *_hidManager;
    RBSProcessMonitor *_processMonitor;
    NSObject<OS_dispatch_queue> *_avSystemRetrievalQueue;
    _Bool _disableNotificationCenterAssertionHeld;
    _Bool _disableControlCenterAssertionHeld;
    _AXAssertionServer *_assertionServer;
}

+ (unsigned int)_axCaptionPanelContextId;
+ (id)springBoardServerInstance;
+ (id)springBoardServerInstanceIfExists;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableControlCenterAssertionHeld; // @synthesize disableControlCenterAssertionHeld=_disableControlCenterAssertionHeld;
@property(nonatomic) _Bool disableNotificationCenterAssertionHeld; // @synthesize disableNotificationCenterAssertionHeld=_disableNotificationCenterAssertionHeld;
@property(retain, nonatomic) _AXAssertionServer *assertionServer; // @synthesize assertionServer=_assertionServer;
@property(nonatomic) __weak id <AXSpringBoardServerInstanceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_getSplashImageForApp:(id)arg1;
- (id)_connectedDevicesRequireAssistiveTouch:(id)arg1;
- (id)_activateSOSMode:(id)arg1;
- (id)_canSetDockIconActivationMode:(id)arg1;
- (id)_setDockIconActivationMode:(id)arg1;
- (id)_medusaApps:(id)arg1;
- (id)_performMedusaGesture:(id)arg1;
- (id)_allowedMedusaGestures:(id)arg1;
- (id)_handleIsSettingsAppFrontmost:(id)arg1;
- (id)_handleIsPurpleBuddyAppFrontmost:(id)arg1;
- (id)_handleIsSystemAppFrontmost:(id)arg1;
- (id)_handleGetFocusedApps:(id)arg1;
- (id)_handleGetRunningAppPIDs:(id)arg1;
- (id)_handleGetPurpleBuddyPID:(id)arg1;
- (id)_handleGetFocusedAppPID:(id)arg1;
- (id)_handleIsSystemAppShowingAnAlert:(id)arg1;
- (id)_handleRelinquishAssertion:(id)arg1;
- (id)_handleAcquireAssertion:(id)arg1;
- (id)_isSpeakThisTemporarilyDisabled:(id)arg1;
- (id)_setSpeechPlaybackControls:(id)arg1;
- (id)_handleInstalledApps:(id)arg1;
- (id)_handleSpringBoardInfoQuery:(id)arg1;
- (id)_areSystemGesturesDisabledByAccessibility:(id)arg1;
- (id)_areSystemGesturesDisabledNatively:(id)arg1;
- (id)_isSyncingRestoringResettingOrUpdating:(id)arg1;
- (id)_isPasscodeLockVisible:(id)arg1;
- (id)_isShowingNonSystemApp:(id)arg1;
- (id)_isDockVisible:(id)arg1;
- (id)_isAppSwitcherVisible:(id)arg1;
- (id)_isShowingHomescreen:(id)arg1;
- (id)_isSiriVisible:(id)arg1;
- (id)_copyStringToPasteboard:(id)arg1;
- (id)_isControlCenterVisible:(id)arg1;
- (id)_showNotificationCenter:(id)arg1;
- (id)_armApplePay:(id)arg1;
- (id)_toggleDock:(id)arg1;
- (id)_showControlCenter:(id)arg1;
- (id)_startHearingAidServer:(id)arg1;
- (id)_resetDimTimer:(id)arg1;
- (id)_resumeMedia:(id)arg1;
- (id)_pauseMedia:(id)arg1;
- (id)_isMediaPlaying:(id)arg1;
- (id)_isPointInAXInspector:(id)arg1;
- (id)_handleIsInspectorMinimized:(id)arg1;
- (id)_handleIsMagnifierVisible:(id)arg1;
- (id)_handleLaunchMagnifierApp:(id)arg1;
- (id)_handleReactivateInCallService:(id)arg1;
- (id)_handleLoadGAXBundleForUnmanagedASAM:(id)arg1;
- (id)_isPIPWindowVisible:(id)arg1;
- (id)_isSpotlightVisible:(id)arg1;
- (id)_isGuidedAccessActive:(id)arg1;
- (id)_toggleDarkMode:(id)arg1;
- (id)_isDarkModeActive:(id)arg1;
- (id)_handleRevealSpotlight:(id)arg1;
- (id)_handleToggleSpotlight:(id)arg1;
- (id)_handleCancelReachabilityTimer:(id)arg1;
- (id)_setCaptionPanelContextId:(id)arg1;
- (id)_toggleHearingControl:(id)arg1;
- (id)_cancelGestureActivation:(id)arg1;
- (id)_openCommandAndControlVocabulary:(id)arg1;
- (id)_openCommandAndControlCommands:(id)arg1;
- (id)_openCommandAndControlSettings:(id)arg1;
- (id)_openCustomGestureCreationForSCAT:(id)arg1;
- (id)_openCustomGestureCreationForAST:(id)arg1;
- (id)_reachabilityHandling:(id)arg1;
- (id)_reachabilityEnabled:(id)arg1;
- (id)_reachabilityActive:(id)arg1;
- (id)_handleToggleIncomingCall:(id)arg1;
- (id)_reachabilityOffset:(id)arg1;
- (id)_isRingerMuted:(id)arg1;
- (id)_isSideSwitchUsedForOrientation:(id)arg1;
- (id)_setOrientationLocked:(id)arg1;
- (id)_isOrientationLocked:(id)arg1;
- (id)_volumeLevel:(id)arg1;
- (id)_isSystemSleeping:(id)arg1;
- (id)_isVoiceControlRunning:(id)arg1;
- (id)_actionHandling:(id)arg1;
- (id)_getActiveInterfaceOrientation:(id)arg1;
- (id)_openVoiceControl:(id)arg1;
- (id)_isNotificationCenterVisible:(id)arg1;
- (id)_toggleNotificationCenter:(id)arg1;
- (id)_dismissSiri:(id)arg1;
- (id)_rebootDevice:(id)arg1;
- (id)_unlockDevice:(id)arg1;
- (id)_wakeUpDeviceIfNecessary:(id)arg1;
- (id)_simulateEdgePressHaptics:(id)arg1;
- (id)_dismissAppSwitcher:(id)arg1;
- (id)_openAppSwitcher:(id)arg1;
- (id)_takeScreenshot:(id)arg1;
- (id)_topEventPidOverride:(id)arg1;
- (id)_hasActiveOrPendingCallOrFaceTime:(id)arg1;
- (id)_hasActiveOrPendingCall:(id)arg1;
- (id)_hasActiveEndpointCall:(id)arg1;
- (id)_hasActiveCall:(id)arg1;
- (id)_isMakingEmergencyCall:(id)arg1;
- (id)_screenLocked:(id)arg1;
- (id)_isShowingRemoteView:(id)arg1;
- (id)_hideRemoteView:(id)arg1;
- (id)_showRemoteView:(id)arg1;
- (id)_hideAlert:(id)arg1;
- (id)_showAlert:(id)arg1;
- (id)_getPid:(id)arg1;
- (id)_getApplicationOrientation:(id)arg1;
- (void)_setDashboardSystemGesturesDisabled:(_Bool)arg1;
- (void)_setupAssertionServerIfNeeded;
- (_Bool)onlySystemGesturesDisabledHolderIsGuidedAccess;
- (void)_setSystemGesturesEnabled:(_Bool)arg1;
- (void)_performValidation;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2 clientPort:(unsigned int)arg3;
- (void)_relinquishAllAssertionsForClientWithPort:(unsigned int)arg1;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2 clientPort:(unsigned int)arg3;
- (id)_assertionClientForPort:(unsigned int)arg1;
- (void)registerHandlerForMessageKey:(int)arg1 target:(id)arg2 selector:(SEL)arg3 entitlements:(id)arg4;
- (void)_performBlockAsynchronously:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;
- (void)_initializeHearing;
- (void)_initializeHandlers;
- (void)_updateProcess:(id)arg1;
- (void)_registerServerAndNotifyClients;
- (void)_springBoardFinishedLaunching:(id)arg1;
- (id)_initServer;
- (void)dealloc;
- (id)init;
- (void)_setAVCallRoute:(id)arg1;
- (void)_setCallRoute:(int)arg1 ifCurrentlyRoutedTo:(id)arg2 withRoutes:(id)arg3;
- (void)_setCallRoute:(int)arg1 ifCurrentlyRoutedTo:(id)arg2;
- (void)_accessibilityRetrieveAVSystemControlData:(CDUnknownBlockType)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_proximityDidChange:(id)arg1;
- (void)userChangedRouteNotification:(id)arg1;
- (_Bool)hasActiveOrPendingCallOrFaceTime;
- (_Bool)hasActiveOrPendingCall;
- (_Bool)hasActiveEndpointCall;
- (_Bool)hasActiveCall;
- (_Bool)shouldCancelSiriTouchActivationBlock;
- (void)_removeReachabilityHandler:(unsigned int)arg1;
- (_Bool)_hasReachabilityHandlerForClientPort:(unsigned int)arg1;
- (void)_removeActionHandler:(unsigned int)arg1;
- (_Bool)_hasActionHandlerForClientPort:(unsigned int)arg1;
- (void)reachabilityToggledWithPayload:(id)arg1 synchronizationPort:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldSendReachabilityToggled;
- (_Bool)shouldBlockGestureActivation:(unsigned long long)arg1;
- (void)springBoardActionOccurred:(long long)arg1 withPayload:(id)arg2;
- (void)springBoardActionOccurred:(long long)arg1;

@end
