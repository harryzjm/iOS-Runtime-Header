//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCWaveformDataSourceObserver-Protocol.h>

@class AVAudioEngine, AVURLAsset, NSDate, NSError, NSMutableOrderedSet, NSString, RCAVState, RCAudioSessionRoutingAssertion, RCCaptureInputDevice, RCCaptureInputWaveformDataSource, RCSSavedRecordingService, SBSLockScreenContentAssertion;
@protocol OS_dispatch_group, RCSAudioFile;

@interface RCCaptureSession : NSObject <RCWaveformDataSourceObserver>
{
    long long _writerState;
    AVAudioEngine *_captureEngine;
    RCSSavedRecordingService *_sharedService;
    id <RCSAudioFile> _captureFile;
    AVURLAsset *_capturedAsset;
    NSError *_captureError;
    double _storeDemoTimeLimit;
    unsigned long long _beginCapturedHostTime;
    unsigned long long _beginCapturedSampleCount;
    double _capturedDisplayTime;
    double _capturedClockDelta;
    unsigned long long _backgroundTaskIdentifier;
    NSObject<OS_dispatch_group> *_endCaptureTaskGroup;
    RCAudioSessionRoutingAssertion *_captureRouteAssertion;
    long long _sessionCaptureState;
    NSString *_sessionRouteName;
    NSDate *_captureStartDate;
    _Bool _handledFinishedCapturingAfterCompletionSound;
    _Bool _handlingDidFinishCapturing;
    _Bool _deleteCapturedOutWhenFinished;
    _Bool _destinationShouldBeDeleted;
    _Bool _captureBeginSoundEffectDisabled;
    _Bool _captureEndSoundEffectDisabled;
    NSMutableOrderedSet *_weakObservers;
    RCCaptureInputDevice *_inputDevice;
    RCCaptureInputWaveformDataSource *_captureWaveformDataSource;
    SBSLockScreenContentAssertion *_lockScreenAssertion;
}

+ (void)playCaptureDidFinishSoundEffectWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)playCaptureWillStartSoundEffectWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) SBSLockScreenContentAssertion *lockScreenAssertion; // @synthesize lockScreenAssertion=_lockScreenAssertion;
@property(readonly, nonatomic) RCCaptureInputWaveformDataSource *captureWaveformDataSource; // @synthesize captureWaveformDataSource=_captureWaveformDataSource;
@property(readonly, nonatomic) RCCaptureInputDevice *inputDevice; // @synthesize inputDevice=_inputDevice;
- (void).cxx_destruct;
- (void)_takeSBSecureAppAssertion:(_Bool)arg1;
- (_Bool)_openAVCaptureSessionAndWaitUntilRunning;
- (void)handleInterruption:(id)arg1;
- (id)_audioSettingsForCaptureFormat:(id)arg1;
- (_Bool)_attachInputToCaptureSession:(id)arg1 withAudioDevice:(id)arg2;
- (void)_closeCaptureSession;
- (void)_deleteCaptureDestinationAndPostDidEndNotification:(id)arg1;
- (void)_onMainQueueHandleCaptureDidFinishCapturingAfterCompletionSound;
- (_Bool)_handleFinishWritingByRestartingCaptureForError:(id)arg1 testOnly:(_Bool)arg2;
- (void)_handleCaptureSessionDidStartWritingToURL:(id)arg1;
- (void)_handleCaptureSessionDidError:(id)arg1;
- (void)_beginAVCapturingToDestinationInitiallyPaused:(_Bool)arg1;
- (void)_installTapIntoCurrentNode;
- (void)_setPostPrepareRequestedState:(long long)arg1;
- (void)_postToObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateCaptureSessionObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (void)_captureInputDeviceRouteDidChangeNotification:(id)arg1;
- (void)_captureInputDeviceAvailabilityDidChangeNotification:(id)arg1;
- (void)captureOutputWriter:(id)arg1 didFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (void)_didFinishWritingToOutputFileAtURL:(id)arg1 error:(id)arg2;
- (void)captureOutputWriter:(id)arg1 willFinishWritingToOutputFileAtURL:(id)arg2 error:(id)arg3;
- (void)captureOutputWriter:(id)arg1 didResumeWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didPauseWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didStartWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutputWriter:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)captureOutputWriter:(id)arg1 captureSessionDidTerminateWithError:(id)arg2;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)updateObserversFromDisplayLink:(id)arg1;
- (_Bool)updateFromDisplayLink;
- (double)capturedDeltaFromDisplayTime:(double)arg1;
- (double)capturedTimeFromDisplayTime:(double)arg1;
- (void)disableCaptureEndSoundEffect;
- (void)disableCaptureBeginSoundEffect;
@property(readonly, nonatomic) RCAVState *AVState;
@property(readonly, nonatomic) _Bool isCaptureSessionFinished;
- (_Bool)isCapturePaused;
- (_Bool)isCaptureActive;
- (_Bool)isPreparing;
@property(readonly, nonatomic) double captureDestinationComposedDuration;
- (void)deleteCapturedOutWhenFinished;
- (void)finishCapturingWithError:(id)arg1;
- (void)finishCapturing;
- (void)resumeCapturing;
- (_Bool)canResumeCapturingAtCompositionDestinationTime:(double)arg1;
- (double)capturedEndTime;
- (void)pauseCapturing;
- (void)prepareToCaptureWithPreparedHandler:(CDUnknownBlockType)arg1;
- (void)removeCaptureSessionObserver:(id)arg1;
- (void)addCaptureSessionObserver:(id)arg1;
- (double)finalizedFragmentDuration;
- (_Bool)unsaveableRecordingError;
@property(nonatomic) double storeDemoTimeLimit;
- (void)_endWritingWithError:(id)arg1;
- (void)_resumeWriting;
- (void)_pauseWriting;
@property(readonly, nonatomic) long long _writerState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithInputDevice:(id)arg1 captureWaveformDataSource:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

