//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, SenderLargeFrameInfo, VCRateControlServerBag;

__attribute__((visibility("hidden")))
@interface VCRateControlMediaController : NSObject
{
    id _mediaControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    struct tagHANDLE *_hMediaQueue;
    struct tagVCMediaQueue *_vcMediaQueue;
    unsigned int _videoSendingBitrate;
    unsigned int _audioSendingBitrate;
    unsigned int _minTargetBitrate;
    unsigned int _targetBitrate;
    _Bool _isVideoStoppedByVCRateControl;
    _Bool _isVideoStoppedByBaseband;
    _Bool _isVideoPausedByUser;
    _Bool _isAudioOnly;
    _Bool _isBasebandFlushing;
    _Bool _isAudioStall;
    _Bool _isInThrottlingMode;
    _Bool _allowVideoStop;
    _Bool _isRemoteAudioPaused;
    int _audioFractionTier;
    double _lastAudioFractionChangeTime;
    double _lastAudioEnoughRateTime;
    unsigned char _videoPayloadType;
    unsigned int _videoRefreshFrameTimestamp;
    unsigned int _videoRefreshFramePacketCount;
    double _lastVideoRefreshFrameTime;
    double _lastVideoKeyFrameTime;
    SenderLargeFrameInfo *_senderLargeFrameInfo;
    unsigned int _probingLargeFrameSize;
    unsigned int _probingLargeFrameSizeCap;
    unsigned int _probingSequencePacketSize;
    unsigned int _probingSequencePacketCount;
    _Bool _shouldDisableLargeFrameRequestsWhenInitialRampUp;
    _Bool _isRateLimitedMaxTimeExceeded;
    _Bool _isSenderProbingEnabled;
    _Bool _enableAggressiveProbingSequence;
    VCRateControlServerBag *_serverBag;
    double _minProbingSpacingAggressive;
    int _basebandFlushCount;
    int _basebandFlushedVideoCount;
    int _basebandFlushedAudioCount;
    double _lastBasebandFlushCountChangeTime;
    double _lastBasebandFlushAudioTime;
    double _lastBasebandFlushVideoTime;
    unsigned short _videoFlushTransactionID;
    unsigned int _audioStallBitrate;
    double _lastAudioStallFlushTime;
    _Bool _isRTPFlushBasebandFromVCRateControl;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandAverageBitrateShort;
    unsigned int _basebandTotalQueueDepth;
    unsigned int _basebandFlushableQueueDepth;
    double _basebandExpectedQueuingDelay;
    double _basebandNBDCD;
    double _lastBasebandHighNBDCDTime;
    _Bool _isBasebandQueuingDelayHigh;
    void *_logBasebandDump;
    void *_logBWEDump;
    unsigned int _afrcRemoteEstimatedBandwidth;
    _Bool _fromSmartBrake;
}

@property(nonatomic) double lastBasebandFlushCountChangeTime; // @synthesize lastBasebandFlushCountChangeTime=_lastBasebandFlushCountChangeTime;
@property(nonatomic) struct tagVCMediaQueue *vcMediaQueue; // @synthesize vcMediaQueue=_vcMediaQueue;
@property(nonatomic) struct tagHANDLE *mediaQueue; // @synthesize mediaQueue=_hMediaQueue;
@property(retain, nonatomic) VCRateControlServerBag *serverBag; // @synthesize serverBag=_serverBag;
@property(nonatomic) _Bool enableAggressiveProbingSequence; // @synthesize enableAggressiveProbingSequence=_enableAggressiveProbingSequence;
@property(readonly, nonatomic) double lastVideoRefreshFrameTime; // @synthesize lastVideoRefreshFrameTime=_lastVideoRefreshFrameTime;
@property(readonly, nonatomic) int audioFractionTier; // @synthesize audioFractionTier=_audioFractionTier;
@property(nonatomic) _Bool isRTPFlushBasebandFromVCRateControl; // @synthesize isRTPFlushBasebandFromVCRateControl=_isRTPFlushBasebandFromVCRateControl;
@property(nonatomic) unsigned int afrcRemoteEstimatedBandwidth; // @synthesize afrcRemoteEstimatedBandwidth=_afrcRemoteEstimatedBandwidth;
@property(nonatomic) _Bool allowVideoStop; // @synthesize allowVideoStop=_allowVideoStop;
@property(nonatomic) _Bool isRemoteAudioPaused; // @synthesize isRemoteAudioPaused=_isRemoteAudioPaused;
@property(readonly, nonatomic) _Bool isInThrottlingMode; // @synthesize isInThrottlingMode=_isInThrottlingMode;
@property(nonatomic) _Bool isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(nonatomic) _Bool isSenderProbingEnabled; // @synthesize isSenderProbingEnabled=_isSenderProbingEnabled;
@property(readonly, nonatomic) _Bool isVideoStoppedByVCRateControl; // @synthesize isVideoStoppedByVCRateControl=_isVideoStoppedByVCRateControl;
@property(readonly, nonatomic) int basebandFlushedAudioCount; // @synthesize basebandFlushedAudioCount=_basebandFlushedAudioCount;
@property(readonly, nonatomic) int basebandFlushedVideoCount; // @synthesize basebandFlushedVideoCount=_basebandFlushedVideoCount;
@property(nonatomic) int basebandFlushCount; // @synthesize basebandFlushCount=_basebandFlushCount;
@property(readonly, nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(nonatomic) unsigned int videoSendingBitrate; // @synthesize videoSendingBitrate=_videoSendingBitrate;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
- (void)updateLargeFrameSizeWithBandwidth:(unsigned int)arg1;
- (void)updateProbingLargeFrameSizeCap;
- (_Bool)isProbingLargeFrameRequiredAtTime:(double)arg1;
- (void)printLargeFrameStatsAtTime:(double)arg1 timestamp:(unsigned int)arg2 timeSinceLastProbingSequence:(double)arg3 frameSize:(unsigned int)arg4 wastedBytes:(unsigned int)arg5 fecRatio:(double)arg6 isFrameRequested:(_Bool)arg7;
- (void)scheduleProbingSequenceAtTime:(double)arg1;
- (_Bool)increaseFlushCountForVideoRefresh:(int)arg1 transactionID:(unsigned short)arg2;
- (void)recordVideoRefreshFrameWithTimestamp:(unsigned int)arg1 payloadType:(unsigned char)arg2 packetCount:(unsigned int)arg3 isKeyFrame:(_Bool)arg4;
- (void)scheduleProbingSequenceWithFrameSize:(unsigned int)arg1 paddingBytes:(unsigned int)arg2 timestamp:(unsigned int)arg3 fecRatio:(double)arg4 isProbingSequenceScheduled:(_Bool *)arg5;
@property(readonly, nonatomic) unsigned int probingSequencePacketSize; // @synthesize probingSequencePacketSize=_probingSequencePacketSize;
@property(readonly, nonatomic) unsigned int probingSequencePacketCount; // @synthesize probingSequencePacketCount=_probingSequencePacketCount;
@property(readonly, nonatomic) unsigned int probingLargeFrameSize; // @synthesize probingLargeFrameSize=_probingLargeFrameSize;
- (_Bool)rampUpAudioFraction;
- (void)setTargetBitrate:(unsigned int)arg1;
- (_Bool)didMediaGetFlushedWithPayloadType:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short *)arg4;
- (void)decreaseFlushCount:(int)arg1;
- (void)pauseVideoByUser:(_Bool)arg1;
- (void)enableBasebandLogDump:(void *)arg1;
- (void)dealloc;
- (id)initWithMediaQueue:(struct tagHANDLE *)arg1 delegate:(id)arg2;

@end

