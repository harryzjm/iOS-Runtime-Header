//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AssistantUI/AFUIDelayedActionCommandCacheDelegate-Protocol.h>
#import <AssistantUI/AFUISiriRemoteViewControllerDataSource-Protocol.h>
#import <AssistantUI/AFUISiriRemoteViewControllerDelegate-Protocol.h>
#import <AssistantUI/AFUISiriSessionLocalDataSource-Protocol.h>
#import <AssistantUI/AFUISiriSessionLocalDelegate-Protocol.h>
#import <AssistantUI/AFUISiriViewDataSource-Protocol.h>
#import <AssistantUI/AFUISiriViewDelegate-Protocol.h>
#import <AssistantUI/SiriUIAudioRoutePickerControllerDelegate-Protocol.h>
#import <AssistantUI/SiriUIKeyboardViewDelegate-Protocol.h>

@class AFUIDelayedActionCommandCache, AFUIRequestOptions, AFUISiriRemoteViewController, AFUISiriSession, NSNumber, NSObject, NSString, SiriUIAudioRoutePickerController, SiriUIConfiguration, SiriUIKeyboardView, UIStatusBar, UIView;
@protocol AFUISiriRemoteViewHosting, AFUISiriViewControllerDataSource, AFUISiriViewControllerDelegate, OS_dispatch_queue;

@interface AFUISiriViewController : UIViewController <AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate, AFUISiriViewDelegate, SiriUIAudioRoutePickerControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate, AFUIDelayedActionCommandCacheDelegate, AFUISiriViewDataSource, SiriUIKeyboardViewDelegate>
{
    _Bool _active;
    _Bool _attemptingRemoteViewControllerPresentation;
    _Bool _remoteViewControllerDispatchQueueSuspended;
    long long _vtEnabledCount;
    long long _currentRequestSource;
    CDUnknownBlockType _triggerUpdater;
    AFUIDelayedActionCommandCache *_delayedActionCommandCache;
    _Bool _siriSessionWantsToEnd;
    SiriUIConfiguration *_configuration;
    NSString *_uiAppearanceUUIDString;
    NSObject<OS_dispatch_queue> *_uiAppearanceCoreDuetQueue;
    _Bool _presentedConversationFromBreadcrumb;
    SiriUIKeyboardView *_inputAccessoryView;
    CDStruct_a82615c4 _keyboardInfo;
    _Bool _unlockScreenVisible;
    _Bool _remoteViewControllerIsPresenting;
    _Bool _visible;
    _Bool _eyesFree;
    _Bool _isStark;
    _Bool _carDNDActive;
    _Bool _showsStatusBar;
    _Bool _statusBarEnabled;
    _Bool _mapsGatekeeperEnabled;
    _Bool _hasCalledBeginAppearanceTransition;
    _Bool _hasCalledEndAppearanceTransition;
    _Bool _inHoldToTalkMode;
    _Bool _viewDisappearing;
    _Bool _userUtteranceTapToEditInProgress;
    id <AFUISiriViewControllerDataSource> _dataSource;
    id <AFUISiriViewControllerDelegate> _delegate;
    AFUISiriSession *_session;
    AFUISiriRemoteViewController *_remoteViewController;
    NSObject<OS_dispatch_queue> *_remoteViewControllerDispatchQueue;
    SiriUIAudioRoutePickerController *_routePickerController;
    UIStatusBar *_statusBar;
    AFUIRequestOptions *_currentRequestOptions;
    NSNumber *_recordingStartedTimeValue;
    double _viewDidAppearTime;
}

@property(nonatomic, getter=_isUserUtteranceTapToEditInProgress, setter=_setUserUtteranceTapToEditInProgress:) _Bool userUtteranceTapToEditInProgress; // @synthesize userUtteranceTapToEditInProgress=_userUtteranceTapToEditInProgress;
@property(nonatomic, getter=isViewDisappearing) _Bool viewDisappearing; // @synthesize viewDisappearing=_viewDisappearing;
@property(nonatomic, getter=_viewDidAppearTime, setter=_setViewDidAppearTime:) double viewDidAppearTime; // @synthesize viewDidAppearTime=_viewDidAppearTime;
@property(retain, nonatomic, getter=_recordingStartedTimeValue, setter=_setRecordingStartedTimeValue:) NSNumber *recordingStartedTimeValue; // @synthesize recordingStartedTimeValue=_recordingStartedTimeValue;
@property(copy, nonatomic, getter=_currentRequestOptions, setter=_setCurrentRequestOptions:) AFUIRequestOptions *currentRequestOptions; // @synthesize currentRequestOptions=_currentRequestOptions;
@property(nonatomic, getter=_isInHoldToTalkMode, setter=_setInHoldToTalkMode:) _Bool inHoldToTalkMode; // @synthesize inHoldToTalkMode=_inHoldToTalkMode;
@property(retain, nonatomic, getter=_statusBar, setter=_setStatusBar:) UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(retain, nonatomic) SiriUIAudioRoutePickerController *routePickerController; // @synthesize routePickerController=_routePickerController;
@property(nonatomic, getter=_hasCalledEndAppearanceTransition, setter=_setHasCalledEndAppearanceTransition:) _Bool hasCalledEndAppearanceTransition; // @synthesize hasCalledEndAppearanceTransition=_hasCalledEndAppearanceTransition;
@property(nonatomic, getter=_hasCalledBeginAppearanceTransition, setter=_setHasCalledBeginAppearanceTransition:) _Bool hasCalledBeginAppearanceTransition; // @synthesize hasCalledBeginAppearanceTransition=_hasCalledBeginAppearanceTransition;
@property(readonly, nonatomic, getter=_remoteViewControllerDispatchQueue) NSObject<OS_dispatch_queue> *remoteViewControllerDispatchQueue; // @synthesize remoteViewControllerDispatchQueue=_remoteViewControllerDispatchQueue;
@property(readonly, nonatomic, getter=_remoteViewController) AFUISiriRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(readonly, nonatomic, getter=_session) AFUISiriSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool mapsGatekeeperEnabled; // @synthesize mapsGatekeeperEnabled=_mapsGatekeeperEnabled;
@property(nonatomic) _Bool statusBarEnabled; // @synthesize statusBarEnabled=_statusBarEnabled;
@property(nonatomic) _Bool showsStatusBar; // @synthesize showsStatusBar=_showsStatusBar;
@property(nonatomic) _Bool carDNDActive; // @synthesize carDNDActive=_carDNDActive;
@property(nonatomic) _Bool isStark; // @synthesize isStark=_isStark;
@property(nonatomic, getter=isEyesFree) _Bool eyesFree; // @synthesize eyesFree=_eyesFree;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <AFUISiriViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <AFUISiriViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (_Bool)shouldTurnOnScreenOnAppearance;
- (void)siriSessionDidUpdateSessionInfo:(id)arg1;
- (void)siriSessionDidEnd:(id)arg1;
- (void)siriSessionWillEnd:(id)arg1;
- (_Bool)siriSessionCanEnd:(id)arg1;
- (void)siriSessionDidResetContext:(id)arg1;
- (void)siriSession:(id)arg1 didChangeDialogPhase:(id)arg2;
- (void)siriSessionRecordingPreparationHasFinished:(id)arg1;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)siriSessionDidReceiveDelayedActionCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(CDUnknownBlockType)arg2;
- (void)siriSession:(id)arg1 didChangeToState:(long long)arg2;
- (unsigned long long)lockStateForSiriSession:(id)arg1;
- (id)contextAppInfosForSiriSession:(id)arg1;
- (id)bulletinsForSiriSession:(id)arg1;
- (void)commandCache:(id)arg1 didInvalidateDelayedActionCommand:(id)arg2;
- (void)commandCache:(id)arg1 didPerformDelayedActionCommand:(id)arg2;
- (void)performGenericAceCommands:(id)arg1 forCommandCache:(id)arg2;
- (void)routePickerControllerWillDismiss:(id)arg1;
- (void)routePickerControllerWillShow:(id)arg1;
- (void)routePickerControllerPickedNewRoute:(id)arg1 isBluetooth:(_Bool)arg2;
- (void)routePickerController:(id)arg1 hasRoutesToPick:(_Bool)arg2;
- (void)_updateAudioRoutePicker;
- (_Bool)siriViewShouldSupportTextInput:(id)arg1;
- (void)siriViewDidReceiveAudioRouteAction:(id)arg1;
- (id)_routePickerController;
- (void)_didDetectAudioRoutePickerTap;
- (void)_setAudioRoutePickerBluetoothOn:(_Bool)arg1;
- (void)_setShowAudioRoutePicker:(_Bool)arg1;
- (id)activeAccountForSiriView:(id)arg1;
- (id)assistantVersionForSiriView:(id)arg1;
- (void)siriView:(id)arg1 didReceiveSiriActivationMessageWithSource:(long long)arg2;
- (_Bool)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
- (void)siriViewDidReceiveHelpAction:(id)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(id)arg1;
- (void)siriViewDidReceiveReportBugAction:(id)arg1;
- (void)_handleHelpAction;
- (void)_handleReportBugLongPressAction;
- (void)_handleReportBugAction;
- (void)siriViewDidRecieveStatusViewHoldDidEndAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewHoldDidBeginAction:(id)arg1;
- (void)siriViewDidRecieveStatusViewTappedAction:(id)arg1;
- (float)audioRecordingPowerLevelForSiriView:(id)arg1;
- (void)_resumeRemoteViewControllerDispatchQueue;
- (void)_suspendRemoteViewControllerDispatchQueue;
- (void)telephonyRequestCompleted;
- (void)endSession;
- (void)cancelTTS;
- (_Bool)hasQueuedTTS;
- (_Bool)isListening;
- (_Bool)isPreventingActivationGesture;
- (void)startRequestWithActivationTrigger:(id)arg1;
- (void)_activationTriggerDidRelease:(id)arg1;
- (double)_manualEndpointingThreshold;
- (void)_exitHoldToTalkMode;
- (void)_transitionToAutomaticEndpointMode;
- (void)_enterHoldToTalkMode;
- (_Bool)_holdToTalkThresholdHasElapsed;
- (_Bool)_isInitialSpeechRequest;
- (_Bool)_canIgnoreHoldToTalkThreshold;
- (_Bool)_isTextInputEnabled;
- (void)_holdToTalkTriggerDidReleaseFromSource:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)viewServiceApplicationInfo;
- (void)shortTapAction;
- (void)handleViewFullyRevealed;
- (void)updateViewForPercentageRevealed:(double)arg1;
- (void)userInteractionDidOccur;
- (void)setLockState:(unsigned long long)arg1;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 lockState:(unsigned long long)arg3;
- (void)preloadPresentationBundleWithIdentifier:(id)arg1;
- (id)currentRequestOptions;
- (void)updateRequestOptions:(id)arg1;
- (void)stopRequestWithOptions:(id)arg1;
- (void)startRequestWithOptions:(id)arg1;
- (void)setCurrentCarPlaySupportedOEMAppIdList:(id)arg1;
- (void)setAlertContext;
- (void)updateContexts:(long long)arg1;
- (void)resetContextTypes:(long long)arg1;
- (void)siriDidDeactivate;
- (long long)currentSource;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)preheat;
- (void)defrost;
- (void)viewWillDisappearFinishedForSiriRemoteViewController:(id)arg1;
- (void)viewWillAppearFinishedForSiriRemoteViewController:(id)arg1;
- (void)handlePasscodeUnlockAndCancelRequest:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handlePasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleSiriDidActivateFromSource:(long long)arg1;
- (void)_handleMicButtonLongPressEndedFromSource:(long long)arg1;
- (void)_handleMicButtonLongPressBeganFromSource:(long long)arg1;
- (void)_handleMicButtonTapFromSource:(long long)arg1;
- (void)keyboardViewDidReceiveAudioRouteAction:(id)arg1;
- (void)keyboardViewDidReceiveBugButtonLongPress:(id)arg1;
- (void)keyboardViewDidReceiveHelpButtonAction:(id)arg1;
- (void)keyboardViewDidReceiveReportBugAction:(id)arg1;
- (void)keyboardView:(id)arg1 didReceiveText:(id)arg2;
- (void)_setShowKeyboardIfTextInputEnabled:(_Bool)arg1 minimized:(_Bool)arg2;
- (void)_setShowKeyboardIfTextInputEnabled:(_Bool)arg1;
- (void)_setStatusViewHidden:(_Bool)arg1;
- (void)siriRemoteViewControllerDidEndTapToEdit:(id)arg1;
- (void)siriRemoteViewControllerWillBeginTapToEdit:(id)arg1;
- (void)siriRemoteViewControllerDidResetTextInput:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(_Bool)arg2 minimized:(_Bool)arg3;
- (void)siriRemoteViewController:(id)arg1 didRequestKeyboard:(_Bool)arg2;
- (void)siriRemoteViewControllerDidDetectAudioRoutePickerTap:(id)arg1;
- (void)siriRemoteViewControllerDidPresentConversationFromBreadcrumb:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressEnded:(id)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonLongPressBegan:(id)arg1;
- (void)siriRemoteViewControllerDidDetectMicButtonTap:(id)arg1;
- (_Bool)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(_Bool)arg4;
- (_Bool)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(_Bool)arg3;
- (void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
- (void)siriRemoteViewControllerPulseHelpButton:(id)arg1;
- (void)siriRemoteViewControllerDidPresentUserInterface:(id)arg1;
- (void)siriRemoteViewControllerDidExitUITrackingMode:(id)arg1;
- (void)siriRemoteViewControllerDidEnterUITrackingMode:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 didFinishTest:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 willStartTest:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 handlePasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;
- (void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (void)siriRemoteViewController:(id)arg1 didDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 didPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(long long)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setCarDisplayGatekeeperVisible:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetVisible:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(_Bool)arg2;
- (void)notifyOnNextUserInteractionForSiriRemoteViewController:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(CDUnknownBlockType)arg5;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2;
- (void)startGuidedAccessForRemoteViewController:(id)arg1;
- (void)dismissSiriRemoteViewController:(id)arg1 delayForTTS:(_Bool)arg2;
- (void)siriRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (long long)siriRemoteViewControllerRequestsActivationSource:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 didEncounterUnexpectedServiceError:(id)arg2;
- (unsigned long long)lockStateForSiriRemoteViewController:(id)arg1;
- (id)siriRemoteViewController:(id)arg1 bulletinWithIdentifier:(id)arg2;
- (void)_enqueueRemoteViewControllerMessageBlockWithWeaklyReferencedRemoteViewController:(CDUnknownBlockType)arg1;
- (void)_enqueueRemoteViewControllerMessageBlock:(CDUnknownBlockType)arg1;
- (void)_sendEndAppearanceTransitionIfReady;
- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)_presentDeferredFlamesViewIfNecessary;
- (void)_informRemoteViewControllerOfParentIfNecessary;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentRemoteViewController;
- (void)presentRemoteViewControllerIfNecessary;
- (void)_setVoiceTriggerEnabled:(_Bool)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (_Bool)isInitialBringUp;
- (void)viewSafeAreaInsetsDidChange;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)_keyboardDidShowNotification:(id)arg1;
- (CDStruct_a82615c4)_keyboardInfoFromNotification:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_recordUIDismissal;
- (void)_recordUIAppearance;
- (void)_willEnterFullScreenScreenshotMode:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
@property(readonly, nonatomic) _Bool hasScreenSnapshot;
- (struct CGRect)_statusBarFrame;
- (void)_removeStatusBar;
- (void)_hideStatusBarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showStatusBarAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_statusBarFrameDidChange:(id)arg1;
- (id)_siriView;
- (void)loadView;
@property(retain, nonatomic) UIView *inputAccessoryView;
- (_Bool)canBecomeFirstResponder;
- (void)proximityStatusChanged:(_Bool)arg1;
- (void)exitUITrackingMode;
- (void)enterUITrackingMode;
@property(readonly, nonatomic) _Bool isProcessingAcousticIdRequest;
- (void)setShowsStatusBar:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)underlyingConnection;
- (void)dealloc;
- (id)init;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<AFUISiriRemoteViewHosting> *view; // @dynamic view;

@end

