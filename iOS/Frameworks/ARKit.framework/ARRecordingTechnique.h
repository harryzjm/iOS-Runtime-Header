//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, AVAssetWriterInputPixelBufferAdaptor, NSMutableArray, NSMutableDictionary, NSObject, NSURL;
@protocol ARRecordingTechniqueDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface ARRecordingTechnique
{
    NSObject<OS_dispatch_queue> *_processingQueue;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_videoMetadataInput;
    AVAssetWriterInput *_accelInput;
    AVAssetWriterInput *_gyroInput;
    AVAssetWriterInput *_deviceOrientationInput;
    AVAssetWriterInputPixelBufferAdaptor *_videoInputAdaptor;
    AVAssetWriterInput *_depthInput;
    AVAssetWriterInputPixelBufferAdaptor *_depthInputAdaptor;
    struct __CVPixelBufferPool *_depthBufferPoolFloat16;
    AVAssetWriterInputMetadataAdaptor *_accelInputAdaptor;
    AVAssetWriterInputMetadataAdaptor *_gyroInputAdaptor;
    AVAssetWriterInputMetadataAdaptor *_videoMetadataInputAdaptor;
    AVAssetWriterInputMetadataAdaptor *_deviceOrientationInputAdaptor;
    NSObject<OS_dispatch_semaphore> *_inputIsReadySemaphore;
    _Bool _isWaitingUntilInputIsReady;
    unsigned long long _sensorDataTypes;
    NSMutableArray *_motionDataCache;
    double _sessionSourceTime;
    NSMutableDictionary *_lastRecordedTimestamps;
    _Bool _sessionStarted;
    _Bool _stopRecordingRequested;
    _Bool _expectDepthData;
    _Bool _shouldSaveVideoInPhotosLibrary;
    NSURL *_outputFileURL;
    id <ARRecordingTechniqueDelegate> _recordingTechniqueDelegate;
}

@property(nonatomic) __weak id <ARRecordingTechniqueDelegate> recordingTechniqueDelegate; // @synthesize recordingTechniqueDelegate=_recordingTechniqueDelegate;
@property(nonatomic) _Bool shouldSaveVideoInPhotosLibrary; // @synthesize shouldSaveVideoInPhotosLibrary=_shouldSaveVideoInPhotosLibrary;
@property(nonatomic) _Bool expectDepthData; // @synthesize expectDepthData=_expectDepthData;
@property(readonly, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
- (void).cxx_destruct;
- (id)createFileMetadata;
- (CDStruct_1b6d18a9)cmTimestampFromNSTimeInterval:(double)arg1;
- (void)writeData:(id)arg1 toInputAdaptor:(id)arg2 withIdentifier:(id)arg3;
- (void)writeDeviceOrientationMetadata:(id)arg1;
- (void)writeGyroscopeMetadata:(id)arg1;
- (void)writeAccelerometerMetadata:(id)arg1;
- (void)writeImageMetadata:(id)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)writePixelBuffer:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)writeDepthMap:(id)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2;
- (void)writeImageData:(id)arg1;
- (void)writeOutCachedMotionDataIfPresent;
- (void)initAssetWriterIfRequiredWithImageData:(id)arg1;
- (struct CGAffineTransform)computeVideoTransformForDeviceOrientationWithCameraPosition:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupAssetWriterWithImageData:(id)arg1;
- (void)removeTemporaryVideoFile;
- (void)copyVideoToPhotoLibrary;
- (void)finishRecording;
- (id)processData:(id)arg1;
- (id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;

@end
