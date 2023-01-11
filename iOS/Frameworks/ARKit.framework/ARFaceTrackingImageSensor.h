//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ARKit/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>

@class ARFaceData, AVCaptureDepthDataOutput, AVCaptureMetadataOutput, NSArray, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface ARFaceTrackingImageSensor <AVCaptureMetadataOutputObjectsDelegate>
{
    AVCaptureMetadataOutput *_metaDataOutput;
    NSArray *_availableMetadataObjectTypes;
    AVCaptureDepthDataOutput *_depthDataOutput;
    ARFaceData *_latestFaceData;
    NSObject<OS_dispatch_semaphore> *_faceDataSemaphore;
    _Bool _signpostFirstFrameDone;
    _Bool _signpostFirstFaceDone;
    double _startTime;
    unsigned long long _droppedFramesPerSec;
    _Bool _previousImageDataValid;
    _Bool _recordingMode;
    NSString *_requiredFaceMetaDataObjectType;
}

@property(copy, nonatomic) NSString *requiredFaceMetaDataObjectType; // @synthesize requiredFaceMetaDataObjectType=_requiredFaceMetaDataObjectType;
@property(nonatomic) _Bool recordingMode; // @synthesize recordingMode=_recordingMode;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)capturedSynchedOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromVideoConnection:(id)arg3 metaDataOutput:(id)arg4 didOutputMetadataObjects:(id)arg5 didOutputDepthData:(id)arg6 atTime:(CDStruct_1b6d18a9)arg7;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)_configureMetaDataOutput;
- (void)stop;
- (void)start;
- (void)configureCaptureDevice;
- (id)configureCaptureSession;
- (id)outputsForSynchronizer;
- (unsigned long long)providedDataTypes;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

