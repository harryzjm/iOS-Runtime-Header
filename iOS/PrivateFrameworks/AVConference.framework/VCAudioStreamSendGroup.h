//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCAudioStreamGroup-Protocol.h>
#import <AVConference/VCRedundancyControllerDelegate-Protocol.h>

@class AVCBasebandCongestionDetector, VCAudioStreamGroupCommon, VCRedundancyControllerAudio, VCSystemAudioCaptureSession;

__attribute__((visibility("hidden")))
@interface VCAudioStreamSendGroup <VCRedundancyControllerDelegate, VCAudioStreamGroup>
{
    _Bool _isVADFilteringEnabled;
    _Bool _isCurrentDTXEnabled;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    unsigned int _cellularUniqueTag;
    VCAudioStreamGroupCommon *_common;
    _Bool _lastEnqueuedStreamUpdateEventWasEmpty;
    struct opaqueCMSimpleQueue *_audioStreamUpdateEventQueue;
    struct opaqueCMSimpleQueue *_audioRedundancyChangeEventQueue;
    struct tagVCMemoryPool *_audioStreamUpdatePool;
    struct tagVCMemoryPool *_audioRedundancyEventPool;
    struct tagVCMediaQueue *_mediaQueue;
    unsigned char _lastAudioPriority;
    _Bool _forcedAudioPriorityEnabled;
    unsigned char _forcedAudioPriorityValue;
    double _forcedAudioPriorityLastUpdateTime;
    struct opaqueVCVoiceDetector *_voiceDetector;
    VCRedundancyControllerAudio *_redundancyController;
    VCSystemAudioCaptureSession *_systemAudioCaptureSession;
}

@property(nonatomic) unsigned int cellularUniqueTag; // @synthesize cellularUniqueTag=_cellularUniqueTag;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(nonatomic, setter=setCurrentDTXEnabled:) _Bool isCurrentDTXEnabled; // @synthesize isCurrentDTXEnabled=_isCurrentDTXEnabled;
@property(nonatomic, setter=setVADFilteringEnabled:) _Bool isVADFilteringEnabled; // @synthesize isVADFilteringEnabled=_isVADFilteringEnabled;
- (id)checkStreamsForAudioOptIn:(id)arg1;
- (id)setupRedundancyController;
- (void)setMuteOnStreams;
- (void)stopVoiceActivityDetection;
- (void)startVoiceActivityDetection;
- (void)flushAudioRedundancyEventQueue;
- (void)flushAudioEventQueue;
- (void)cleanupIOEventQueues;
- (_Bool)createIOEventQueues;
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (id)stopCapture;
- (id)startCapture;
- (_Bool)removeSyncDestination:(id)arg1;
- (_Bool)addSyncDestination:(id)arg1;
- (void)setPeerSubscribedStreams:(id)arg1;
- (id)activeStreamKeys;
- (void)updateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3;
- (void)setReportingAgent:(struct opaqueRTCReporting *)arg1;
- (void)collectAndLogChannelMetrics:(CDStruct_a4f8a7cd *)arg1;
- (_Bool)configureStreams;
@property(nonatomic, setter=setMuted:) _Bool isMuted;
- (void)didStop;
- (id)willStart;
- (void)updateActiveVoiceOnly:(_Bool)arg1;
@property(setter=setPowerSpectrumEnabled:) _Bool isPowerSpectrumEnabled;
@property(readonly, nonatomic) int deviceRole;
- (_Bool)setDeviceRole:(int)arg1 operatingMode:(int)arg2;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

@end
