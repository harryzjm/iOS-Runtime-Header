//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCAudioIO, VCMediaRecorderConfiguration;

__attribute__((visibility("hidden")))
@interface VCMediaRecorderLocal
{
    VCMediaRecorderConfiguration *_configuration;
    VCAudioIO *_audioIO;
    unsigned int _audioSessionId;
}

- (void)reactionDidStart:(id)arg1;
- (void)cameraAvailabilityDidChange:(_Bool)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:(id)arg1;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;
- (int)supportedVideoCodec;
- (_Bool)configureVideoRecording;
- (void)deregisterForCameraCapture;
- (_Bool)registerForCameraCapture;
- (_Bool)startAudio;
- (void)cleanupSpatialAudio;
- (void)setupSpatialAudio;
- (struct tagVCAudioIOConfiguration)defaultAudioIOConfig;
- (void)dealloc;
- (void)invalidate;
- (id)initWithStreamToken:(long long)arg1 configuration:(id)arg2 reportingAgent:(struct opaqueRTCReporting *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

