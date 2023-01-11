//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMCaptureRequestIntervalometerDelegate-Protocol.h>
#import <CameraUI/CAMCaptureService-Protocol.h>

@class AVCaptureVideoPreviewLayer, CAMBurstController, CAMCaptureEngine, CAMCaptureRequestIntervalometer, CAMKeyValueCoalescer, CAMLocationController, CAMMotionController, CAMPanoramaCaptureRequest, CAMPanoramaPreviewView, CAMPowerController, CAMProtectionController, CAMRemoteShutterController, CAMThumbnailGenerator, CAMVideoCaptureRequest, NSCountedSet, NSMutableSet, NSString;
@protocol CAMAvailabilityDelegate, CAMBurstDelegate, CAMCaptureInterruptionDelegate, CAMCaptureRecoveryDelegate, CAMCaptureResultDelegate, CAMCaptureRunningDelegate, CAMConfigurationDelegate, CAMExposureDelegate, CAMFacesDelegate, CAMFocusDelegate, CAMMachineReadableCodeDelegate, CAMPanoramaChangeDelegate, CAMShallowDepthOfFieldStatusDelegate, CAMStillImageCapturingVideoDelegate, CAMSuggestionDelegate, CAMZoomDelegate, OS_dispatch_queue;

@interface CUCaptureController : NSObject <CAMCaptureService, CAMCaptureRequestIntervalometerDelegate>
{
    CAMPanoramaPreviewView *_panoramaPreviewView;
    _Atomic int _uniqueRequestIDForConfigurationChange;
    _Bool _previewDisabled;
    _Bool _capturingTimelapse;
    _Bool _flashActive;
    _Bool _torchActive;
    _Bool _HDRSuggested;
    _Bool _captureAvailable;
    _Bool _configurationAvailable;
    _Bool _flashAvailable;
    _Bool _torchAvailable;
    _Bool __capturingPairedVideoPaused;
    _Bool __needsInitialPairedVideoUpdate;
    _Bool _failedConfigurationPreventingCapture;
    _Bool __isVideoCaptureAvailable;
    _Bool __shouldResetFocusAndExposureAfterIrisVideoCapture;
    id <CAMStillImageCapturingVideoDelegate> _stillImageCapturingVideoDelegate;
    id <CAMPanoramaChangeDelegate> _panoramaChangeDelegate;
    id <CAMBurstDelegate> _burstDelegate;
    id <CAMConfigurationDelegate> _configurationDelegate;
    id <CAMSuggestionDelegate> _suggestionDelegate;
    id <CAMAvailabilityDelegate> _availabilityDelegate;
    id <CAMFocusDelegate> _focusDelegate;
    id <CAMExposureDelegate> _exposureDelegate;
    id <CAMShallowDepthOfFieldStatusDelegate> _shallowDepthOfFieldStatusDelegate;
    id <CAMFacesDelegate> _facesDelgate;
    id <CAMMachineReadableCodeDelegate> _machineReadableCodeDelegate;
    id <CAMCaptureResultDelegate> _resultDelegate;
    id <CAMZoomDelegate> _zoomDelegate;
    id <CAMCaptureRecoveryDelegate> _recoveryDelegate;
    id <CAMCaptureRunningDelegate> _runningDelegate;
    id <CAMCaptureInterruptionDelegate> _interruptionDelegate;
    CAMCaptureEngine *__captureEngine;
    NSObject<OS_dispatch_queue> *__responseQueue;
    CAMThumbnailGenerator *__responseThumbnailGenerator;
    CAMVideoCaptureRequest *__capturingVideoRequest;
    CAMVideoCaptureRequest *__pendingVideoCaptureRequest;
    CAMPanoramaCaptureRequest *__capturingPanoramaRequest;
    CAMCaptureRequestIntervalometer *_currentBurstIntervalometer;
    CAMKeyValueCoalescer *__focusCoalescer;
    CAMKeyValueCoalescer *__exposureCoalescer;
    NSCountedSet *__numberOfInflightRequestsByType;
    long long __maximumNumberOfStillImageRequests;
    NSMutableSet *__identifiersForShowingLivePhotoIndicatorForStillImageRequests;
    NSMutableSet *__identifiersForRecordingVideoForStillImageRequests;
    CAMLocationController *__locationController;
    CAMMotionController *__motionController;
    CAMBurstController *__burstController;
    CAMProtectionController *__protectionController;
    CAMPowerController *__powerController;
    CAMRemoteShutterController *__remoteShutterController;
}

+ (float)focusLensPositionCurrentSentinel;
@property(readonly, nonatomic) CAMRemoteShutterController *_remoteShutterController; // @synthesize _remoteShutterController=__remoteShutterController;
@property(readonly, nonatomic) CAMPowerController *_powerController; // @synthesize _powerController=__powerController;
@property(readonly, nonatomic) CAMProtectionController *_protectionController; // @synthesize _protectionController=__protectionController;
@property(readonly, nonatomic) CAMBurstController *_burstController; // @synthesize _burstController=__burstController;
@property(readonly, nonatomic) CAMMotionController *_motionController; // @synthesize _motionController=__motionController;
@property(readonly, nonatomic) CAMLocationController *_locationController; // @synthesize _locationController=__locationController;
@property(nonatomic, setter=_setShouldResetFocusAndExposureAfterIrisVideoCapture:) _Bool _shouldResetFocusAndExposureAfterIrisVideoCapture; // @synthesize _shouldResetFocusAndExposureAfterIrisVideoCapture=__shouldResetFocusAndExposureAfterIrisVideoCapture;
@property(readonly, nonatomic) NSMutableSet *_identifiersForRecordingVideoForStillImageRequests; // @synthesize _identifiersForRecordingVideoForStillImageRequests=__identifiersForRecordingVideoForStillImageRequests;
@property(readonly, nonatomic) NSMutableSet *_identifiersForShowingLivePhotoIndicatorForStillImageRequests; // @synthesize _identifiersForShowingLivePhotoIndicatorForStillImageRequests=__identifiersForShowingLivePhotoIndicatorForStillImageRequests;
@property(nonatomic, getter=_isVideoCaptureAvailable, setter=_setVideoCaptureAvailable:) _Bool _isVideoCaptureAvailable; // @synthesize _isVideoCaptureAvailable=__isVideoCaptureAvailable;
@property(nonatomic, getter=_isFailedConfigurationPreventingCapture, setter=_setFailedConfigurationPreventingCapture:) _Bool failedConfigurationPreventingCapture; // @synthesize failedConfigurationPreventingCapture=_failedConfigurationPreventingCapture;
@property(nonatomic, setter=_setMaximumNumberOfStillImageRequests:) long long _maximumNumberOfStillImageRequests; // @synthesize _maximumNumberOfStillImageRequests=__maximumNumberOfStillImageRequests;
@property(readonly, nonatomic) NSCountedSet *_numberOfInflightRequestsByType; // @synthesize _numberOfInflightRequestsByType=__numberOfInflightRequestsByType;
@property(readonly, nonatomic) CAMKeyValueCoalescer *_exposureCoalescer; // @synthesize _exposureCoalescer=__exposureCoalescer;
@property(readonly, nonatomic) CAMKeyValueCoalescer *_focusCoalescer; // @synthesize _focusCoalescer=__focusCoalescer;
@property(retain, nonatomic, setter=_setCurrentBurstIntervalometer:) CAMCaptureRequestIntervalometer *currentBurstIntervalometer; // @synthesize currentBurstIntervalometer=_currentBurstIntervalometer;
@property(retain, nonatomic, setter=_setCapturingPanoramaRequest:) CAMPanoramaCaptureRequest *_capturingPanoramaRequest; // @synthesize _capturingPanoramaRequest=__capturingPanoramaRequest;
@property(retain, nonatomic, setter=_setPendingVideoCaptureRequest:) CAMVideoCaptureRequest *_pendingVideoCaptureRequest; // @synthesize _pendingVideoCaptureRequest=__pendingVideoCaptureRequest;
@property(retain, nonatomic, setter=_setCapturingVideoRequest:) CAMVideoCaptureRequest *_capturingVideoRequest; // @synthesize _capturingVideoRequest=__capturingVideoRequest;
@property(nonatomic, setter=_setNeedsInitialPairedVideoUpdate:) _Bool _needsInitialPairedVideoUpdate; // @synthesize _needsInitialPairedVideoUpdate=__needsInitialPairedVideoUpdate;
@property(nonatomic, getter=_isCapturingPairedVideoPaused, setter=_setCapturingPairedVideoPaused:) _Bool _capturingPairedVideoPaused; // @synthesize _capturingPairedVideoPaused=__capturingPairedVideoPaused;
@property(readonly, nonatomic) CAMThumbnailGenerator *_responseThumbnailGenerator; // @synthesize _responseThumbnailGenerator=__responseThumbnailGenerator;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_responseQueue; // @synthesize _responseQueue=__responseQueue;
@property(readonly, nonatomic) CAMCaptureEngine *_captureEngine; // @synthesize _captureEngine=__captureEngine;
@property(nonatomic) __weak id <CAMCaptureInterruptionDelegate> interruptionDelegate; // @synthesize interruptionDelegate=_interruptionDelegate;
@property(nonatomic) __weak id <CAMCaptureRunningDelegate> runningDelegate; // @synthesize runningDelegate=_runningDelegate;
@property(nonatomic) __weak id <CAMCaptureRecoveryDelegate> recoveryDelegate; // @synthesize recoveryDelegate=_recoveryDelegate;
@property(nonatomic) __weak id <CAMZoomDelegate> zoomDelegate; // @synthesize zoomDelegate=_zoomDelegate;
@property(nonatomic) __weak id <CAMCaptureResultDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
@property(nonatomic) __weak id <CAMMachineReadableCodeDelegate> machineReadableCodeDelegate; // @synthesize machineReadableCodeDelegate=_machineReadableCodeDelegate;
@property(nonatomic) __weak id <CAMFacesDelegate> facesDelgate; // @synthesize facesDelgate=_facesDelgate;
@property(nonatomic) __weak id <CAMShallowDepthOfFieldStatusDelegate> shallowDepthOfFieldStatusDelegate; // @synthesize shallowDepthOfFieldStatusDelegate=_shallowDepthOfFieldStatusDelegate;
@property(nonatomic) __weak id <CAMExposureDelegate> exposureDelegate; // @synthesize exposureDelegate=_exposureDelegate;
@property(nonatomic) __weak id <CAMFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;
@property(nonatomic, getter=isTorchAvailable, setter=_setTorchAvailable:) _Bool torchAvailable; // @synthesize torchAvailable=_torchAvailable;
@property(nonatomic, getter=isFlashAvailable, setter=_setFlashAvailable:) _Bool flashAvailable; // @synthesize flashAvailable=_flashAvailable;
@property(nonatomic, getter=isConfigurationAvailable, setter=_setConfigurationAvailable:) _Bool configurationAvailable; // @synthesize configurationAvailable=_configurationAvailable;
@property(nonatomic, getter=isCaptureAvailable, setter=_setCaptureAvailable:) _Bool captureAvailable; // @synthesize captureAvailable=_captureAvailable;
@property(nonatomic) __weak id <CAMAvailabilityDelegate> availabilityDelegate; // @synthesize availabilityDelegate=_availabilityDelegate;
@property(nonatomic, getter=isHDRSuggested, setter=_setHDRSuggested:) _Bool HDRSuggested; // @synthesize HDRSuggested=_HDRSuggested;
@property(nonatomic, getter=isTorchActive, setter=_setTorchActive:) _Bool torchActive; // @synthesize torchActive=_torchActive;
@property(nonatomic, getter=isFlashActive, setter=_setFlashActive:) _Bool flashActive; // @synthesize flashActive=_flashActive;
@property(nonatomic) __weak id <CAMSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate=_suggestionDelegate;
@property(nonatomic) __weak id <CAMConfigurationDelegate> configurationDelegate; // @synthesize configurationDelegate=_configurationDelegate;
@property(nonatomic, getter=isCapturingTimelapse) _Bool capturingTimelapse; // @synthesize capturingTimelapse=_capturingTimelapse;
@property(nonatomic) __weak id <CAMBurstDelegate> burstDelegate; // @synthesize burstDelegate=_burstDelegate;
@property(nonatomic) __weak id <CAMPanoramaChangeDelegate> panoramaChangeDelegate; // @synthesize panoramaChangeDelegate=_panoramaChangeDelegate;
@property(nonatomic) __weak id <CAMStillImageCapturingVideoDelegate> stillImageCapturingVideoDelegate; // @synthesize stillImageCapturingVideoDelegate=_stillImageCapturingVideoDelegate;
@property(readonly, nonatomic, getter=isPreviewDisabled) _Bool previewDisabled; // @synthesize previewDisabled=_previewDisabled;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_handleSystemPressureStateChanged;
- (void)_systemPressureStateMonitoringChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_teardownSystemPressureStateMonitoring;
- (void)_setupSystemPressureStateMonitoring;
- (_Bool)_shouldMonitorSystemPressureState;
- (id)_systemPressureStateMonitoringKeyPaths;
- (void)_handleShallowDepthOfFieldStatusChangedNotification:(id)arg1;
- (void)changeToPortraitAperture:(double)arg1;
- (void)_zoomResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_teardownZoomMonitoring;
- (void)_setupZoomMonitoring;
- (id)_zoomMonitoringKeyPaths;
- (void)stopRampToVideoZoomFactor;
- (void)startRampToVideoZoomFactor:(double)arg1 withDuration:(double)arg2;
- (void)startRampToVideoZoomFactor:(double)arg1 withRate:(float)arg2;
- (void)changeToVideoZoomFactor:(double)arg1;
- (void)unregisterVideoThumbnailContentsDelegate:(id)arg1;
- (void)registerVideoThumbnailContentsDelegate:(id)arg1;
- (void)unregisterEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)registerEffectsPreviewSampleBufferDelegate:(id)arg1;
- (void)unregisterCaptureService:(id)arg1;
- (void)registerCaptureService:(id)arg1;
- (void)handleSessionInterruptionEnded;
- (void)handleSessionInterruptionForReason:(long long)arg1;
- (void)handleSessionDidStopRunning;
- (void)handleSessionDidStartRunning;
- (void)attemptToEndInterruptions;
@property(readonly, nonatomic, getter=isInterrupted) _Bool interrupted;
- (void)stopCaptureSession;
- (void)stopCaptureSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)startCaptureSession;
- (void)startCaptureSessionWithRetryCount:(unsigned long long)arg1 retryInterval:(double)arg2 logReason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)willPerformRecoveryFromRuntimeError:(id)arg1;
- (void)queryTimelapseDimensionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)queryVideoDimensionsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_subjectAreaDidChange:(id)arg1;
- (void)metadataWasRecognized:(id)arg1;
- (void)_notifyDelegateOfConfigurationAvailabilityChanged:(_Bool)arg1;
- (void)_notifyDelegateOfCaptureAvailabilityChanged:(_Bool)arg1;
- (void)_updateAvailabilityAfterCapturedRequest:(id)arg1;
- (void)_updateAvailabilityAfterStopCapturingForRequest:(id)arg1;
- (void)_updateAvailabilityWhenPreparingToStopCapturingForRequest:(id)arg1;
- (void)_updateAvailabilityAfterEnqueuedRequest:(id)arg1;
- (void)_updateAvailabilityForRequestType:(long long)arg1;
- (unsigned long long)_maximumNumberOfStillImageRequestsDuringBurst;
- (void)_updateMaximumNumberOfStillImageRequestsAfterBurst;
- (void)_updateMaximumNumberOfStillImageRequestsAfterCapturedRequestIfNecessary:(id)arg1;
- (void)_updateMaximumNumberOfStillImageRequestsAfterEnqueuingRequestWithFlashMode:(long long)arg1 HDRMode:(long long)arg2 burstIdentifier:(id)arg3 wantsPortraitEffect:(_Bool)arg4;
- (void)_availabilityResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_teardownAvailabilityMonitoring;
- (void)_setupAvailabilityMonitoring;
- (id)_availabilityKeyPaths;
- (void)_suggestionResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_teardownSuggestionMonitoring;
- (void)_setupSuggestionMonitoring;
- (id)_suggestionKeyPaths;
- (void)stopMonitoringForHDRSuggestions;
- (void)startMonitoringForHDRSuggestions;
- (void)_exposureResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (_Bool)_kvoDidEndForChange:(id)arg1;
- (_Bool)_kvoDidStartForChange:(id)arg1;
- (void)_focusResultChangedForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;
- (void)_teardownFocusAndExposureMonitoring;
- (void)_setupExposureMonitoring;
- (id)_exposureKVOKeyPaths;
- (void)_setupFocusMonitoring;
- (void)_setupFocusAndExposureMonitoring;
- (id)_focusKVOKeyPaths;
- (void)changeExposureTargetBias:(float)arg1;
- (void)cancelDelayedFocusAndExposureReset;
- (void)_cancelDelayedFocusAndExposureReset;
- (void)_resetFocusAndExposureAfterCapture;
- (void)_scheduleFocusAndExposureResetAfterCaptureIfNecessary;
@property(readonly, nonatomic) _Bool _shouldResetFocusAndExposureAfterCapture;
- (void)focusAtCenterForVideoRecording;
- (void)lockFocusAtLensPosition:(float)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)forceDisableSubjectAreaChangeMonitoring;
- (void)changeToLockedExposure;
- (void)focusAndExposeAtPoint:(struct CGPoint)arg1 lockFocus:(_Bool)arg2 resetExposureTargetBias:(_Bool)arg3;
- (id)_commandForResetFocus:(_Bool)arg1 resetExposure:(_Bool)arg2 resetExposureTargetBias:(_Bool)arg3;
- (void)_resetFocusAndExposureIfAppropriateForReason:(long long)arg1;
- (_Bool)_useSmoothFocus;
@property(readonly, nonatomic) _Bool shouldAllowUserToChangeFocusAndExposure;
- (void)changeToVideoHDRSuspended:(_Bool)arg1;
- (void)changeToPreviewFilters:(id)arg1;
- (void)changeToPreviewConfiguration:(unsigned long long)arg1;
- (void)changeToPreviewEnabledWithConfiguration:(unsigned long long)arg1;
- (void)changeToPreviewDisabled;
- (void)_handleCaptureEngineExecutionNotification:(id)arg1;
- (void)changeToTorchLevel:(float)arg1;
- (void)changeToTorchMode:(long long)arg1;
- (void)changeToFlashMode:(long long)arg1;
- (int)_uniqueRequestIDForChangeToModeAndDevice;
- (int)changeToGraphConfiguration:(id)arg1 resetZoom:(_Bool)arg2 minimumExecutionTime:(double)arg3;
- (_Bool)_wantsMachineReadableCodesForGraphConfiguration:(id)arg1;
- (id)_realtimeMetadataCommandsForMode:(long long)arg1 capturing:(_Bool)arg2 wantsMachineReadableCodes:(_Bool)arg3;
- (void)updateRealtimeMetadataConfigurationForGraphConfiguration:(id)arg1 isCapturing:(_Bool)arg2;
- (id)_commandForChangeToGraphConfiguration:(id)arg1 resetZoom:(_Bool)arg2 minimumExecutionTime:(double)arg3 outRequestID:(int *)arg4;
- (id)_commandForConfiguration:(id)arg1 outRequestID:(int *)arg2;
- (void)notifyTimelapseControllerFinishedUpdatingWithLocation;
- (void)intervalometerDidReachMaximumCount:(id)arg1;
- (_Bool)intervalometer:(id)arg1 didGenerateCaptureRequest:(id)arg2;
- (_Bool)_captureStillImageWithRequest:(id)arg1;
- (void)_processCapturedBurstRequest:(id)arg1 withResult:(id)arg2;
- (void)stopCapturingBurst;
- (id)_updateFocusAndExposureForStartBurstCapture;
- (_Bool)startCapturingBurstWithRequest:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long currentBurstCount;
@property(readonly, nonatomic, getter=isCapturingBurst) _Bool capturingBurst;
- (void)panoramaConfigurationDidChangeWithImageQueue:(struct _CAImageQueue *)arg1 direction:(long long)arg2;
- (void)panoramaRequest:(id)arg1 didReceiveNotification:(long long)arg2;
- (void)panoramaRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)panoramaRequestDidStopCapturing:(id)arg1;
- (void)panoramaRequestDidStartCapturing:(id)arg1;
- (void)changeToPanoramaEncodingBehavior:(long long)arg1;
- (void)changeToPanoramaDirection:(long long)arg1;
- (_Bool)stopCapturingPanorama;
- (id)_updateFocusAndExposureForStartPanorama;
- (_Bool)startCapturingPanoramaWithRequest:(id)arg1 error:(id *)arg2;
- (id)_sanitizePanoramaRequest:(id)arg1;
@property(readonly, nonatomic, getter=isCapturingPanorama) _Bool capturingPanorama;
- (void)videoRequest:(id)arg1 didCompleteCaptureWithResult:(id)arg2;
- (void)videoRequestDidStopCapturing:(id)arg1;
- (void)videoRequestDidStartCapturing:(id)arg1;
- (void)_didPlayBeginVideoRecordingSound;
- (void)changeToVideoRecordingCaptureOrientation:(long long)arg1;
- (_Bool)stopCapturingVideo;
- (_Bool)startCapturingVideoWithRequest:(id)arg1 error:(id *)arg2;
- (void)_processPendingVideoCaptureRequest:(id)arg1;
- (id)_sanitizeVideoRequest:(id)arg1;
@property(readonly, nonatomic, getter=isCapturingVideo) _Bool capturingVideo;
@property(readonly, nonatomic, getter=isCapturingStillImagePairedVideo) _Bool capturingStillImagePairedVideo;
@property(readonly, nonatomic) _Bool shouldShowLivePhotoIndicator;
- (void)_stopShowingLivePhotoIndicatorForStillImageRequest:(id)arg1;
- (void)_startShowingLivePhotoIndicatorForStillImageRequest:(id)arg1;
- (void)_endTrackingVideoRecordingForStillImageRequest:(id)arg1;
- (void)_beginTrackingVideoRecordingForStillImageRequest:(id)arg1;
- (id)_identifierForPendingVideoForStillImageRequest:(id)arg1;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (void)stillImageRequestDidStopCapturingVideo:(id)arg1;
- (void)stillImageRequest:(id)arg1 didCompleteStillImageCaptureWithResult:(id)arg2;
- (void)stillImageRequestDidStopCapturing:(id)arg1;
- (void)stillImageRequestDidStartCapturing:(id)arg1 resolvedSettings:(id)arg2;
- (void)stillImageRequestWillStartCapturingVideo:(id)arg1;
- (void)prepareToCaptureStillImageAtSystemTime:(long long)arg1;
- (void)resumeCapturingStillImagePairedVideo;
- (void)pauseCapturingStillImagePairedVideo;
- (_Bool)captureStillImageWithRequest:(id)arg1 error:(id *)arg2;
- (id)_sanitizeStillImageRequest:(id)arg1;
@property(readonly, nonatomic, getter=isCapturingStillImage) _Bool capturingStillImage;
- (id)_thumbnailImageFromStillImageCaptureResult:(id)arg1 imageOrientation:(long long)arg2;
@property(readonly, nonatomic) CAMPanoramaPreviewView *panoramaPreviewView;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer;
- (int)applyCaptureConfiguration:(id)arg1;
- (void)invalidateController;
- (void)dealloc;
- (id)init;
- (id)initWithCaptureConfiguration:(id)arg1 engineOptions:(long long)arg2 locationController:(id)arg3 motionController:(id)arg4 burstController:(id)arg5 protectionController:(id)arg6 powerController:(id)arg7 remoteShutterController:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

