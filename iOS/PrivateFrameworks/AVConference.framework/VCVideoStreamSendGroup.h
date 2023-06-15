//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VCSessionUplinkVideoStreamController, VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCVideoStreamSendGroup
{
    int _captureSource;
    _Atomic unsigned char _videoPriority;
    unsigned char _lastVideoPriority;
    _Bool _videoPriorityEnabled;
    long long _maxSupportedMultiwayVideoResolution;
    struct CGSize _maxScreenCaptureSize;
    int _captureFrameRate;
    int _maxSupportedCaptureFrameRate;
    NSMutableSet *_videoPayloadTypes;
    VCSessionUplinkVideoStreamController *_uplinkVideoStreamController;
    struct tagVCMemoryPool *_videoRedundancyPool;
    struct opaqueCMSimpleQueue *_videoRedundancyChangeEventQueue;
    double _fecRatio;
    VCVideoRule *_captureVideoRule;
    NSMutableDictionary *_pendingActiveUplinkStreams;
    NSMutableArray *_temporalStreamsIDs;
    id _clientCaptureController;
    unsigned int _activeTemporalTierBitmap;
    id _videoSinkDelegate;
    _Bool _isStreamInputCaptureSource;
    _Bool _hasPeerSubscribedStreams;
    _Bool _allowSuspendProvisionedStreams;
    unsigned int _totalNumFramesReceived;
    unsigned int _totalNumFramesProcessed;
    unsigned int _mediaQueueSize;
    _Bool _initTime;
}

@property(nonatomic) unsigned int mediaQueueSize; // @synthesize mediaQueueSize=_mediaQueueSize;
@property(nonatomic) int captureFrameRate; // @synthesize captureFrameRate=_captureFrameRate;
- (void)collectAndLogChannelMetrics:(CDStruct_b671a7c4 *)arg1;
- (unsigned long long)maxStreamFrameRate;
- (void)computeMaxScreenCaptureSize;
- (void)updateSendSampleRTPTimestamp:(unsigned int)arg1 sampleRate:(double)arg2 systemTime:(double)arg3;
- (void)vcMediaStreamDidDecryptionTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(_Bool)arg2 powerLevelDidChange:(_Bool)arg3;
- (void)reactionDidStart:(id)arg1;
- (void)cameraAvailabilityDidChange:(_Bool)arg1;
- (void)thermalLevelDidChange:(int)arg1;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:(id)arg1;
- (CDUnknownBlockType)copyOnVideoFrameBlock;
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)controller:(id)arg1 didChangeActiveVideoStreams:(id)arg2;
- (void)deregisterClientForScreenShare;
- (void)registerClientForScreenShare;
- (void)registerConfigForScreenShare;
- (id)captureConfigForScreenShare;
- (id)stopCapture;
- (id)startCapture;
- (_Bool)enableRedundancy:(_Bool)arg1;
- (_Bool)shouldCompoundListIgnoreStream:(id)arg1 streamConfig:(id)arg2 activeStreamIds:(id)arg3;
- (_Bool)shouldSubscribeToStreamID:(id)arg1 peerSubscribedStreams:(id)arg2;
- (id)streamDescriptionForMediaStreamConfig:(id)arg1;
- (void)setActiveConnection:(id)arg1 uplinkBitrateCap:(unsigned int)arg2 activeMediaStreamIDs:(id)arg3 mediaBitrates:(id)arg4 rateChangeCounter:(unsigned int)arg5;
- (void)updateUplinkBitrateCapWifi:(unsigned int)arg1 activeStreamIDs:(id)arg2;
- (void)updateUplinkBitrateCapCell:(unsigned int)arg1 activeStreamIDs:(id)arg2;
- (_Bool)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;
- (id)activeStreamKeys;
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;
- (void)updateSuspendedState;
- (void)deregisterForScreenCapture;
- (id)registerForScreenCapture;
- (unsigned int)getPixelFormat;
- (void)deregisterForVideoCapture;
- (void)registerForVideoCapture:(int)arg1;
- (void)dispatchedSetCaptureVideoRule:(id)arg1;
- (struct CGSize)getCaptureEncodingSize;
- (void)flushVideoRedundancyEventQueue;
- (void)setupVideoPriority;
- (void)updateEnabledState;
- (id)willStart;
- (_Bool)generateKeyFrameWithStreamID:(id)arg1 firType:(int)arg2;
- (id)uplinkVideoStreamControllerForMode:(unsigned int)arg1;
- (int)maxCaptureCameraFrameRateForMode:(unsigned int)arg1;
- (int)maxCaptureFrameRateForMode:(unsigned int)arg1;
- (long long)maxCaptureResolution;
- (void)cleanupRedundancySettings;
- (void)setupPayloadTypes;
- (id)setupRedundancyControllerForMode:(unsigned int)arg1;
- (_Bool)setupRedundancySettings;
- (_Bool)shouldUseInternalRedundancyController;
- (_Bool)setupStreamGroupWithConfig:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

