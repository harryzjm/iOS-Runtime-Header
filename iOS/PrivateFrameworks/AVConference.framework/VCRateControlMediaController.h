//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVCStatisticsCollector, SenderLargeFrameInfo;

__attribute__((visibility("hidden")))
@interface VCRateControlMediaController : NSObject
{
    id _mediaControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    struct tagHANDLE *_hMediaQueue;
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
    unsigned char _videoPayloadType;
    unsigned short _videoTransactionID;
    unsigned int _videoRefreshFrameTimestamp;
    unsigned int _videoRefreshFramePacketCount;
    double _lastVideoKeyFrameTime;
    SenderLargeFrameInfo *_senderLargeFrameInfo;
    unsigned int _probingLargeFrameSize;
    unsigned int _probingLargeFrameSizeCap;
    unsigned int _probingSequencePacketSize;
    unsigned int _probingSequencePacketCount;
    _Bool _shouldDisableLargeFrameRequestsWhenInitialRampUp;
    _Bool _isRateLimitedMaxTimeExceeded;
    _Bool _isSenderProbingEnabled;
    int _basebandFlushCount;
    double _lastBasebandFlushAudioTime;
    double _lastBasebandFlushVideoTime;
    unsigned short _videoFlushTransactionID;
    unsigned int _audioStallBitrate;
    unsigned int _basebandAverageBitrate;
    unsigned int _basebandTotalQueueDepth;
    unsigned int _basebandFlushableQueueDepth;
    double _basebandExpectedQueuingDelay;
    double _basebandNBDCD;
    double _lastBasebandHighNBDCDTime;
    _Bool _isBasebandQueuingDelayHigh;
    void *_logBasebandDump;
    unsigned int _afrcRemoteEstimatedBandwidth;
}

@property(nonatomic) unsigned int afrcRemoteEstimatedBandwidth; // @synthesize afrcRemoteEstimatedBandwidth=_afrcRemoteEstimatedBandwidth;
@property(nonatomic) _Bool shouldDisableLargeFrameRequestsWhenInitialRampUp; // @synthesize shouldDisableLargeFrameRequestsWhenInitialRampUp=_shouldDisableLargeFrameRequestsWhenInitialRampUp;
@property(nonatomic) _Bool isRateLimitedMaxTimeExceeded; // @synthesize isRateLimitedMaxTimeExceeded=_isRateLimitedMaxTimeExceeded;
@property(readonly, nonatomic) _Bool isInThrottlingMode; // @synthesize isInThrottlingMode=_isInThrottlingMode;
@property(nonatomic) _Bool isAudioOnly; // @synthesize isAudioOnly=_isAudioOnly;
@property(nonatomic) _Bool isSenderProbingEnabled; // @synthesize isSenderProbingEnabled=_isSenderProbingEnabled;
@property(readonly, nonatomic) _Bool isVideoStoppedByVCRateControl; // @synthesize isVideoStoppedByVCRateControl=_isVideoStoppedByVCRateControl;
@property(readonly, nonatomic) int basebandFlushCount; // @synthesize basebandFlushCount=_basebandFlushCount;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(nonatomic) unsigned int minTargetBitrate; // @synthesize minTargetBitrate=_minTargetBitrate;
@property(nonatomic) unsigned int audioSendingBitrate; // @synthesize audioSendingBitrate=_audioSendingBitrate;
@property(nonatomic) unsigned int videoSendingBitrate; // @synthesize videoSendingBitrate=_videoSendingBitrate;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
- (void)updateLargeFrameSizeWithBandwidth:(unsigned int)arg1;
- (void)updateProbingLargeFrameSizeCap;
- (_Bool)isProbingLargeFrameRequiredAtTime:(double)arg1;
- (void)printLargeFrameStatsAtTime:(double)arg1 timeSinceLastProbingSequence:(double)arg2 frameSize:(unsigned int)arg3 wastedBytes:(unsigned int)arg4 isFrameRequested:(_Bool)arg5;
- (void)scheduleProbingSequenceAtTime:(double)arg1;
- (void)increaseBasebandFlushCountInternallyWithSuggestion:(struct VCRateControlMediaSuggestion *)arg1;
- (void)scheduleProbingSequenceWithFrameSize:(unsigned int)arg1 paddingBytes:(unsigned int)arg2 isProbingSequenceScheduled:(_Bool *)arg3;
@property(readonly, nonatomic) unsigned int probingSequencePacketSize; // @synthesize probingSequencePacketSize=_probingSequencePacketSize;
@property(readonly, nonatomic) unsigned int probingSequencePacketCount; // @synthesize probingSequencePacketCount=_probingSequencePacketCount;
@property(readonly, nonatomic) unsigned int probingLargeFrameSize; // @synthesize probingLargeFrameSize=_probingLargeFrameSize;
- (_Bool)didMediaGetFlushedWithPayloadType:(unsigned char)arg1 transactionID:(unsigned short)arg2 packetDropped:(unsigned short)arg3 sequenceNumberArray:(unsigned short *)arg4;
- (void)decreaseFlushCount:(int)arg1;
- (_Bool)increaseFlushCountForVideoRefresh:(int)arg1 transactionID:(unsigned short)arg2;
- (void)recordVideoRefreshFrameWithTimestamp:(unsigned int)arg1 payloadType:(unsigned char)arg2 packetCount:(unsigned int)arg3 isKeyFrame:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isVideoStopped;
- (void)resumeVideoByVCRateControl;
- (void)stopVideoByVCRateControl;
- (void)pauseVideoByUser:(_Bool)arg1;
- (void)updateBasebandSuggestionWithStatistics:(CDStruct_5cb394a5)arg1;
- (void)computePacketLossWithTimestamp:(unsigned short)arg1 totalRemoteReceivedPackets:(unsigned int)arg2 packetBurstLoss:(unsigned int)arg3 packetLossRate:(double *)arg4 mostBurstLoss:(unsigned int *)arg5;
- (void)getMediaQueueRateChangeCounter:(unsigned int *)arg1 rateChangeTime:(double *)arg2;
- (void)getMediaQueueInVideoBitrate:(double *)arg1 outVideoBitrate:(double *)arg2 inAudioBitrate:(double *)arg3 outAudioBitrate:(double *)arg4;
- (void)enableBasebandLogDump:(void *)arg1;
- (void)dealloc;
- (id)initWithMediaQueue:(struct tagHANDLE *)arg1 delegate:(id)arg2;

@end

