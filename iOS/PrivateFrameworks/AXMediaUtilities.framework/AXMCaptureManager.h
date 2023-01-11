//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, NSHashTable, NSString, _AXMCaptureManagerDetectionEngine;
@protocol OS_dispatch_queue;

@interface AXMCaptureManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    AVCaptureDeviceInput *_captureDeviceInput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    NSObject<OS_dispatch_queue> *_videoFrameReceiveQueue;
    long long _activeScenario;
    NSHashTable *_videoFrameObservers;
    _AXMCaptureManagerDetectionEngine *_detectionEngine;
    NSHashTable *_featureDetectionObservers;
    struct os_unfair_lock_s _observerLock;
    long long _deviceOrientation;
}

+ (id)captureSessionReport:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(readonly, nonatomic) long long activeScenario; // @synthesize activeScenario=_activeScenario;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)removeFeatureDetectionObserver:(id)arg1;
- (void)addFeatureDetectionObserver:(id)arg1;
- (void)removeVideoFrameObserver:(id)arg1;
- (void)addVideoFrameObserver:(id)arg1;
- (_Bool)configureForScenario:(long long)arg1 error:(id *)arg2;
- (void)stopSession;
- (void)startSessionIfNeeded;
- (_Bool)_configureSessionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
@property(readonly, nonatomic) AVCaptureSession *session;
- (id)initWithCaptureSession:(id)arg1;
- (id)init;
- (void)printAllVideoDevices;
- (id)idealCaptureSettingsForScenario:(long long)arg1;
- (id)_preferredFormatForFormats:(id)arg1;
- (id)_filteredDevicesAndFormatsForScenario:(long long)arg1;
- (int)_maximumAcceptableResolutionForScenario:(long long)arg1;
- (int)_minimumAcceptableResolutionForScenario:(long long)arg1;
- (unsigned int)_pixelFormatForScenario:(long long)arg1;
- (int)_maximumAcceptableFramerateForScenario:(long long)arg1;
- (int)_minimumAcceptableFramerateForScenario:(long long)arg1;
- (void)endLiveDetection;
- (void)beginLiveDetectionWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
