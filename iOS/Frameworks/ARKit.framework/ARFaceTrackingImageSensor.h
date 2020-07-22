//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ARKit/AVCaptureDataOutputSynchronizerDelegate-Protocol.h>
#import <ARKit/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>
#import <ARKit/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>

@class AVCaptureDataOutputSynchronizer, AVCaptureDepthDataOutput, AVCaptureMetadataOutput, NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARFaceTrackingImageSensor <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDataOutputSynchronizerDelegate>
{
    AVCaptureMetadataOutput *_metaDataOutput;
    NSArray *_availableMetadataObjectTypes;
    AVCaptureDepthDataOutput *_depthDataOutput;
    _Bool _mirrorVideoOutput;
    AVCaptureDataOutputSynchronizer *_outputSynchronizer;
    NSObject<OS_dispatch_queue> *_outputSynchronizerQueue;
    NSMutableArray *_outputSynchronizerOutputs;
    NSMutableArray *_faceDetections;
    NSMutableDictionary *_avFaceMeshPayload;
    NSObject<OS_dispatch_semaphore> *_faceSemaphore;
    _Bool _signpostFirstFrameDone;
    _Bool _signpostFirstFaceDone;
    double _startTime;
    unsigned long long _droppedFramesPerSec;
    _Bool _recordingMode;
    NSString *_requiredFaceMetaDataObjectType;
}

+ (id)new;
@property(retain, nonatomic) NSString *requiredFaceMetaDataObjectType; // @synthesize requiredFaceMetaDataObjectType=_requiredFaceMetaDataObjectType;
@property(nonatomic) _Bool recordingMode; // @synthesize recordingMode=_recordingMode;
- (void).cxx_destruct;
- (void)prepareSynchronizedOutputs:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)faceDataFromMetadataObjects:(id)arg1 mirroredVideoInput:(_Bool)arg2 pFaceBoundingBoxes:(id *)arg3 pFacePayload:(id *)arg4;
- (void)capturedSynchedOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromVideoConnection:(id)arg3 metaDataOutput:(id)arg4 didOutputMetadataObjects:(id)arg5 didOutputDepthData:(id)arg6 atTime:(CDStruct_1b6d18a9)arg7;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)configureMetaDataOutput;
- (void)stop;
- (void)start;
- (id)configureCaptureDevice;
- (id)configureCaptureSession;
- (unsigned long long)providedDataTypes;
@property(readonly, nonatomic) _Bool isMirrored;
- (void)dealloc;
- (id)initWithDeviceType:(id)arg1 mirrorVideoOutput:(_Bool)arg2 captureSession:(id)arg3;
- (id)initWithDeviceType:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
