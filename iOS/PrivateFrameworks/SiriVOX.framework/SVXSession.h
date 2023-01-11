//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/AFAssistantUIService-Protocol.h>
#import <SiriVOX/AFSpeechDelegate-Protocol.h>
#import <SiriVOX/SVXAudioSessionProviding-Protocol.h>
#import <SiriVOX/SVXSpeechSynthesisListening-Protocol.h>
#import <SiriVOX/SVXTaskTrackingCenterDelegate-Protocol.h>

@class AFAnalyticsTurnBasedInstrumentationContext, AFClockAlarmSnapshot, AFClockTimerSnapshot, AFConnection, AFExperiment, AFSpeechRequestOptions, AFXPCWrapper, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID, NSUserActivity, SASetApplicationContext, SVXActivationContext, SVXDeactivationContext, SVXDeviceProblemsState, SVXDeviceSetupContext, SVXServiceCommandHandler, SVXSpeechSynthesizer, SVXTaskTrackingCenter;
@protocol AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, SVXPerforming, SVXSessionDelegate;

__attribute__((visibility("hidden")))
@interface SVXSession : NSObject <AFAssistantUIService, AFSpeechDelegate, SVXSpeechSynthesisListening, SVXTaskTrackingCenterDelegate, SVXAudioSessionProviding>
{
    AFConnection *_connection;
    long long _currentState;
    long long _activityState;
    NSUUID *_activityUUID;
    CDUnknownBlockType _postResignActiveBlock;
    SVXActivationContext *_currentActivationContext;
    SVXDeactivationContext *_currentDeactivationContext;
    NSUUID *_currentRequestUUID;
    AFSpeechRequestOptions *_currentSpeechRequestOptions;
    CDUnknownBlockType _currentSpeechRequestDidStartBlock;
    NSMutableArray *_currentSpeechRequestPendingBlocks;
    _Bool _currentRequestWillPresentUUFR;
    _Bool _currentRequestDidPresentUUFR;
    AFAnalyticsTurnBasedInstrumentationContext *_previousRequestInstrumentationContext;
    AFAnalyticsTurnBasedInstrumentationContext *_currentRequestInstrumentationContext;
    SVXTaskTrackingCenter *_taskTrackingCenter;
    NSMutableSet *_sessionIdleAssertions;
    AFXPCWrapper *_inputAudioPowerWrapper;
    AFXPCWrapper *_outputAudioPowerWrapper;
    unsigned int _audioSessionID;
    NSMutableSet *_audioSessionAssertions;
    id <SVXPerforming> _performer;
    SVXServiceCommandHandler *_serviceCommandHandler;
    SVXSpeechSynthesizer *_speechSynthesizer;
    id <SVXSessionDelegate> _delegate;
    int _currentInstrumentationUIState;
    NSMutableArray *_pendingRequestBarriers;
    AFExperiment<AFExperimentForSiriVOXSounds> *_experimentForSiriVOXSounds;
    AFExperiment<AFExperimentForSiriVOXTapToSiriBehavior> *_experimentForSiriVOXTapToSiriBehavior;
    _Bool _isMostRecentRequestStartingMediaPlaybackLocally;
    _Bool _isMostRecentRequestSuppressedError;
    SASetApplicationContext *_setApplicationContext;
    long long _nowPlayingAppPlaybackState;
    SVXDeviceProblemsState *_deviceProblemsState;
    SVXDeviceSetupContext *_deviceSetupContext;
    AFClockAlarmSnapshot *_clockAlarmSnapshot;
    AFClockTimerSnapshot *_clockTimerSnapshot;
    float _mediaPlaybackVolume;
    id _myriadToken;
    long long _myriadState;
    NSMutableArray *_pendingMyriadDecisionHandlers;
    NSMutableDictionary *_playbackRequestInfo;
    NSUserActivity *_userActivity;
    NSUUID *_sessionUUID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void)_sessionIdleFiredWithAssertion:(id)arg1;
- (void)_stopSessionIdleTimer;
- (void)_startSessionIdleTimerWithTimeInterval:(double)arg1;
- (void)_invalidateConnection;
- (id)_connection:(_Bool)arg1;
- (void)_handleCommand:(id)arg1 taskTracker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentError:(id)arg1 taskTracker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleSpeechSynthesizerDidFailRequest:(id)arg1 taskTracker:(id)arg2 error:(id)arg3;
- (void)_handleSpeechSynthesizerDidInterruptRequest:(id)arg1 taskTracker:(id)arg2;
- (void)_handleSpeechSynthesizerDidCancelRequest:(id)arg1 taskTracker:(id)arg2;
- (void)_handleSpeechSynthesizerDidFinishRequest:(id)arg1 record:(id)arg2 taskTracker:(id)arg3;
- (void)_handleSpeechSynthesizerDidStartRequest:(id)arg1 record:(id)arg2 taskTracker:(id)arg3;
- (void)_handleSpeechSynthesizerWillStartRequest:(id)arg1 taskTracker:(id)arg2;
- (void)_handleSpeechSynthesizerDidBecomeIdle;
- (void)_handleSpeechSynthesizerWillBecomeBusy;
- (void)_endThinking;
- (void)_performThinkingStage:(unsigned long long)arg1 requestUUID:(id)arg2;
- (void)_beginThinking;
- (void)_didChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)_willChangeFromState:(long long)arg1 toState:(long long)arg2;
- (void)_handleAudioSessionDidBecomeActive:(_Bool)arg1;
- (void)_handleAudioSessionWillBecomeActive:(_Bool)arg1;
- (void)_handleDidFailStartPlaybackWithDestination:(long long)arg1;
- (void)_handleWillProcessStartPlaybackWithDestination:(long long)arg1 intent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleDidHandleQuickStopWithActions:(unsigned long long)arg1;
- (void)_handleDidStopAudioPlaybackRequest:(id)arg1 error:(id)arg2;
- (void)_handleDidStartAudioPlaybackRequest:(id)arg1;
- (void)_handleWillStartAudioPlaybackRequest:(id)arg1;
- (void)_handleAudioSessionDidEndInterruption:(_Bool)arg1;
- (void)_handleAudioSessionDidBeginInterruption;
- (void)_handleDidChangeAudioSessionID:(unsigned int)arg1;
- (void)_handleShouldSpeak:(_Bool)arg1;
- (void)_handleRequestFailedWithError:(id)arg1;
- (void)_handleReceivedCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleRequestFinished;
- (void)_handleDismissAssistant;
- (void)_handleRequestWillStart;
- (void)_handleSpeechRecognizedPartialResult:(id)arg1;
- (void)_handleSpeechRecognized:(id)arg1;
- (void)_handleSpeechRecognitionDidFailWithError:(id)arg1;
- (void)_handleSpeechRecordingDidFailWithError:(id)arg1;
- (void)_handleSpeechRecordingDidCancel;
- (void)_handleSpeechRecordingDidEnd;
- (void)_handleSpeechRecordingPerformTwoShotPromptWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSpeechRecordingDidDetectStartpoint;
- (void)_handleSpeechRecordingDidChangeAVRecordRoute:(id)arg1;
- (void)_handleSpeechRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (void)_handleSpeechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;
- (void)_requestDidEndWithOptions:(unsigned long long)arg1 error:(id)arg2;
- (void)_requestWillBeginWithTaskTracker:(id)arg1;
- (void)_invalidate;
- (void)_resignActiveForReason:(id)arg1;
- (void)_performBlockAfterResignActive:(CDUnknownBlockType)arg1;
- (void)_checkIsActiveWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_forceAudioSessionInactiveWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_forceAudioSessionActiveWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setOutputAudioPowerWrapper:(id)arg1;
- (void)_setInputAudioPowerWrapper:(id)arg1;
- (void)_discardPendingRequestBarriers;
- (void)_performNextPendingRequestBarrier;
- (void)_addRequestBarrier:(CDUnknownBlockType)arg1;
- (void)_setApplicationContext:(id)arg1;
- (void)_clearContext;
- (void)_continuePendingSpeechRequest:(_Bool)arg1;
- (void)_performBlockAfterContinueBlock:(CDUnknownBlockType)arg1;
- (void)_setCurrentState:(long long)arg1;
- (void)_dismiss;
- (void)_cancelRequestWithOptions:(unsigned long long)arg1 keepTaskTracker:(id)arg2;
- (void)_waitForMyriadDecisionUsingHandler:(CDUnknownBlockType)arg1;
- (void)_resetMyriadDecision;
- (void)_endWaitingForMyriadDecisionWithToken:(id)arg1 state:(long long)arg2;
- (void)_beginWaitingForMyriadDecisionWithToken:(id)arg1;
- (void)endWaitingForMyriadDecisionWithToken:(id)arg1 result:(_Bool)arg2;
- (id)beginWaitingForMyriadDecision;
- (void)_startActiveAudioSessionRequestWithOptions:(unsigned long long)arg1 taskTracker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startSpeechSynthesisRequest:(id)arg1 languageCode:(id)arg2 gender:(long long)arg3 audioSessionID:(unsigned int)arg4 introductionSoundID:(long long)arg5 conclusionSoundID:(long long)arg6 taskTracker:(id)arg7 postActivationHandler:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_startRequestWithInfo:(id)arg1 clearsContext:(_Bool)arg2 clockAlarmSnapshot:(id)arg3 clockTimerSnapshot:(id)arg4 deviceSetupContext:(id)arg5 taskTracker:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_updateSpeechEndpointerOperationMode:(long long)arg1;
- (void)_transitSpeechToAutomaticEndpointing;
- (void)_transitSpeechToManualEndpointing;
- (void)_stopSpeechWithCurrentSpeechRequestOptions;
- (void)_stopSpeech;
- (void)_startSpeechRequestWithOptions:(id)arg1 clearsContext:(_Bool)arg2 clockAlarmSnapshot:(id)arg3 clockTimerSnapshot:(id)arg4 deviceSetupContext:(id)arg5 deviceProblemsState:(id)arg6 nowPlayingAppPlaybackState:(long long)arg7 taskTracker:(id)arg8 completion:(CDUnknownBlockType)arg9;
- (void)_preheatWithStyle:(long long)arg1;
- (void)_deactivateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_activateWithContext:(id)arg1 options:(unsigned long long)arg2 clockAlarmSnapshot:(id)arg3 clockTimerSnapshot:(id)arg4 deviceSetupContext:(id)arg5 deviceProblemsState:(id)arg6 nowPlayingAppPlaybackState:(long long)arg7 mediaPlaybackVolume:(float)arg8 speechSynthesisRecord:(id)arg9 speechSynthesisState:(long long)arg10 speechRecordingAlertPolicy:(id)arg11 taskTracker:(id)arg12 completion:(CDUnknownBlockType)arg13;
- (void)taskTrackingCenterDidBecomeIdle:(id)arg1;
- (void)taskTrackingCenter:(id)arg1 didEndTrackingTaskWithContext:(id)arg2;
- (void)taskTrackingCenter:(id)arg1 didBeginTrackingTaskWithContext:(id)arg2;
- (void)taskTrackingCenterWillBecomeBusy:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFailRequest:(id)arg2 taskTracker:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didInterruptRequest:(id)arg2 taskTracker:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didCancelRequest:(id)arg2 taskTracker:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishRequest:(id)arg2 utteranceInfo:(id)arg3 record:(id)arg4 taskTracker:(id)arg5;
- (void)speechSynthesizer:(id)arg1 didStartRequest:(id)arg2 record:(id)arg3 taskTracker:(id)arg4;
- (void)speechSynthesizer:(id)arg1 willStartRequest:(id)arg2 taskTracker:(id)arg3;
- (void)speechSynthesizer:(id)arg1 willEnqueueRequest:(id)arg2 taskTracker:(id)arg3;
- (void)speechSynthesizerDidBecomeIdle:(id)arg1;
- (void)speechSynthesizerDidBecomeBusy:(id)arg1;
- (void)acquireAudioSessionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assistantConnection:(id)arg1 startUIRequestWithInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnection:(id)arg1 startUIRequestWithText:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnection:(id)arg1 audioSessionDidBecomeActive:(_Bool)arg2;
- (void)assistantConnection:(id)arg1 audioSessionWillBecomeActive:(_Bool)arg2;
- (void)assistantConnection:(id)arg1 startPlaybackDidFail:(long long)arg2;
- (void)assistantConnection:(id)arg1 willProcessStartPlayback:(long long)arg2 intent:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)assistantConnection:(id)arg1 didHandleQuickStopWithAction:(unsigned long long)arg2;
- (void)assistantConnection:(id)arg1 didStopAudioPlaybackRequest:(id)arg2 error:(id)arg3;
- (void)assistantConnection:(id)arg1 didStartAudioPlaybackRequest:(id)arg2;
- (void)assistantConnection:(id)arg1 willStartAudioPlaybackRequest:(id)arg2;
- (void)assistantConnection:(id)arg1 setUserActivtiyInfoAndMakeCurrent:(id)arg2 webpageURL:(id)arg3;
- (void)assistantConnectionAudioSessionDidEndInterruption:(id)arg1 shouldResume:(_Bool)arg2;
- (void)assistantConnectionAudioSessionDidBeginInterruption:(id)arg1;
- (void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned int)arg2;
- (void)assistantConnection:(id)arg1 shouldSpeak:(_Bool)arg2;
- (void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
- (void)assistantConnection:(id)arg1 receivedCommand:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnectionRequestFinished:(id)arg1;
- (void)assistantConnectionDismissAssistant:(id)arg1;
- (void)assistantConnectionRequestWillStart:(id)arg1;
- (void)assistantConnection:(id)arg1 recognitionUpdateWithPhrases:(id)arg2 utterances:(id)arg3 refId:(id)arg4;
- (void)assistantConnection:(id)arg1 recognizedAdditionalSpeechInterpretation:(id)arg2 refId:(id)arg3;
- (void)assistantConnection:(id)arg1 speechRecognizedPartialResult:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecognized:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)assistantConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)assistantConnection:(id)arg1 speechRecordingPerformTwoShotPromptWithType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)assistantConnectionSpeechRecordingDidDetectStartpoint:(id)arg1;
- (void)assistantConnection:(id)arg1 speechRecordingDidChangeAVRecordRoute:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2 audioSessionID:(unsigned int)arg3;
- (void)assistantConnection:(id)arg1 speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg2;
- (void)assistantConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)activateWithSpeechRequestOptions:(id)arg1 options:(unsigned long long)arg2 clockAlarmSnapshot:(id)arg3 clockTimerSnapshot:(id)arg4 deviceSetupContext:(id)arg5 deviceProblemsState:(id)arg6 nowPlayingAppPlaybackState:(long long)arg7 completion:(CDUnknownBlockType)arg8;
- (void)updateClockTimerSnapshot:(id)arg1;
- (void)updateClockAlarmSnapshot:(id)arg1;
- (void)updateDeviceSetupContext:(id)arg1;
- (void)updateDeviceProblemsState:(id)arg1;
- (void)updateMediaPlaybackVolume:(float)arg1;
- (void)updateNowPlayingAppPlaybackState:(long long)arg1;
- (void)invalidate;
- (void)handleCommand:(id)arg1 taskTracker:(id)arg2;
- (void)addRequestBarrier:(CDUnknownBlockType)arg1;
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;
- (void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getAudioPowerWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getActivityStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)getStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (void)cancelRequest;
- (void)transitSpeechToManualEndpointing;
- (void)transitSpeechToAutomaticEndpointing;
- (void)stopSpeech;
- (void)preheatWithStyle:(long long)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)deactivateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)activateWithContext:(id)arg1 options:(unsigned long long)arg2 clockAlarmSnapshot:(id)arg3 clockTimerSnapshot:(id)arg4 deviceSetupContext:(id)arg5 deviceProblemsState:(id)arg6 nowPlayingAppPlaybackState:(long long)arg7 mediaPlaybackVolume:(float)arg8 speechSynthesisRecord:(id)arg9 speechSynthesisState:(long long)arg10 speechRecordingAlertPolicy:(id)arg11 completion:(CDUnknownBlockType)arg12;
- (id)activateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prewarmWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPerformer:(id)arg1 serviceCommandHandler:(id)arg2 speechSynthesizer:(id)arg3 experimentContext:(id)arg4 delegate:(id)arg5;
- (void)dealloc;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
