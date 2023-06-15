//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCReportingHistogram;

__attribute__((visibility("hidden")))
@interface StreamGroupStats
{
    _Bool _isVideoDegraded;
    _Bool _currentDegradedVideoState;
    _Bool _isRTXTelemetryAvailable;
    unsigned int _videoDegradedTotalCounter;
    unsigned int _significantVideoStallCount;
    unsigned int _maxVideoStallCount;
    unsigned int _audioErasureCount;
    unsigned int _maxAudioErasureCount;
    unsigned int _averageJitterBufferDelayCount;
    unsigned int _avgJBTargetSizeChangesCount;
    unsigned int _tickCount;
    int _minAVSyncOffset;
    int _maxAVSyncOffset;
    unsigned int _avSyncOffsetSamplesCount;
    int _avSyncOffsetSum;
    unsigned int _videoStreamSwitchCount;
    unsigned int _audioStreamSwitchCount;
    unsigned int _perfTimerEventCount;
    unsigned int _accumulatedMediaQueueFlushCount;
    unsigned int _totalMediaQueueSizeReportsCount;
    unsigned int _minVideoFrameRate;
    unsigned int _videoFrameIncompleteNextTSCounter;
    double _videoDegradedTotalTime;
    double _videoDegradedStartTime;
    double _videoDegradedMaxLength;
    double _videoStalledTotalTime;
    double _videoStalledMaxLength;
    double _lastReceivedVideoStallTime;
    double _currentStallTime;
    double _totalAudioErasureTime;
    double _averageJitterBufferDelay;
    double _maxJBTargetSizeChanges;
    double _avgJBTargetSizeChanges;
    NSString *_firstMKIReceived;
    NSString *_totalMediaStallSaveDelta;
    NSString *_firstMediaReceived;
    NSString *_firstRemoteVideoFrameDecoded;
    NSString *_timeToSeeFirstRemoteVideoFrame;
    unsigned long long _nacksSent;
    unsigned long long _nacksFulfilled;
    unsigned long long _nacksFulfilledOnTime;
    double _accumulatedTotalMediaQueueSize;
    double _maxMediaQueueSize;
    VCReportingHistogram *_nacksRTXResponseTime;
    VCReportingHistogram *_nacksRTXLateTime;
    VCReportingHistogram *_nacksRTXMediaBitRate;
    VCReportingHistogram *_nacksRTXRetransmittedMediaBitRate;
    VCReportingHistogram *_nacksPLRWithRTX;
    VCReportingHistogram *_nacksPLRWithoutRTX;
    VCReportingHistogram *_JBTarget;
    VCReportingHistogram *_JBUnclippedTarget;
    unsigned long long _videoFrameReceivedCounter;
    unsigned long long _videoFrameExpectedCounter;
    unsigned long long _videoFrameCapturedCounter;
    double _averageSendBitrateSum;
    double _averageTargetBitrateSum;
    double _averageFECSendBitrateSum;
    double _averageMediaSendBitrateSum;
    double _averageJitterQueueSize;
    VCReportingHistogram *_videoStall;
    double _lastVideoDegradedTime;
    VCReportingHistogram *_poorConnection;
    double _degradedVideoStartTime;
    double _degradedVideoDuration;
    double _poorConnectionMaxLength;
    double _poorConnectionTotalLength;
    double _decodedVideoFrameEnqueueCounter;
    unsigned long long _uniqueNacksSent;
    unsigned long long _lateFramesScheduledWithRTXCount;
    unsigned long long _assembledFramesWithRTXPacketsCount;
    unsigned long long _failedToAssembleFramesWithRTXPacketsCount;
    VCReportingHistogram *_abnormalPLR;
    VCReportingHistogram *_abnormalBPL;
    VCReportingHistogram *_abnormalRTT;
    VCReportingHistogram *_mlEnhanceFramePercent;
}

@property(readonly) VCReportingHistogram *mlEnhanceFramePercent; // @synthesize mlEnhanceFramePercent=_mlEnhanceFramePercent;
@property(readonly) VCReportingHistogram *abnormalRTT; // @synthesize abnormalRTT=_abnormalRTT;
@property(readonly) VCReportingHistogram *abnormalBPL; // @synthesize abnormalBPL=_abnormalBPL;
@property(readonly) VCReportingHistogram *abnormalPLR; // @synthesize abnormalPLR=_abnormalPLR;
@property unsigned long long failedToAssembleFramesWithRTXPacketsCount; // @synthesize failedToAssembleFramesWithRTXPacketsCount=_failedToAssembleFramesWithRTXPacketsCount;
@property unsigned long long assembledFramesWithRTXPacketsCount; // @synthesize assembledFramesWithRTXPacketsCount=_assembledFramesWithRTXPacketsCount;
@property unsigned long long lateFramesScheduledWithRTXCount; // @synthesize lateFramesScheduledWithRTXCount=_lateFramesScheduledWithRTXCount;
@property unsigned long long uniqueNacksSent; // @synthesize uniqueNacksSent=_uniqueNacksSent;
@property _Bool isRTXTelemetryAvailable; // @synthesize isRTXTelemetryAvailable=_isRTXTelemetryAvailable;
@property double decodedVideoFrameEnqueueCounter; // @synthesize decodedVideoFrameEnqueueCounter=_decodedVideoFrameEnqueueCounter;
@property unsigned int videoFrameIncompleteNextTSCounter; // @synthesize videoFrameIncompleteNextTSCounter=_videoFrameIncompleteNextTSCounter;
@property unsigned int minVideoFrameRate; // @synthesize minVideoFrameRate=_minVideoFrameRate;
@property double poorConnectionTotalLength; // @synthesize poorConnectionTotalLength=_poorConnectionTotalLength;
@property double poorConnectionMaxLength; // @synthesize poorConnectionMaxLength=_poorConnectionMaxLength;
@property double degradedVideoDuration; // @synthesize degradedVideoDuration=_degradedVideoDuration;
@property double degradedVideoStartTime; // @synthesize degradedVideoStartTime=_degradedVideoStartTime;
@property _Bool currentDegradedVideoState; // @synthesize currentDegradedVideoState=_currentDegradedVideoState;
@property(readonly) VCReportingHistogram *poorConnection; // @synthesize poorConnection=_poorConnection;
@property double lastVideoDegradedTime; // @synthesize lastVideoDegradedTime=_lastVideoDegradedTime;
@property(readonly) VCReportingHistogram *videoStall; // @synthesize videoStall=_videoStall;
@property double averageJitterQueueSize; // @synthesize averageJitterQueueSize=_averageJitterQueueSize;
@property double averageMediaSendBitrateSum; // @synthesize averageMediaSendBitrateSum=_averageMediaSendBitrateSum;
@property double averageFECSendBitrateSum; // @synthesize averageFECSendBitrateSum=_averageFECSendBitrateSum;
@property double averageTargetBitrateSum; // @synthesize averageTargetBitrateSum=_averageTargetBitrateSum;
@property double averageSendBitrateSum; // @synthesize averageSendBitrateSum=_averageSendBitrateSum;
@property unsigned long long videoFrameCapturedCounter; // @synthesize videoFrameCapturedCounter=_videoFrameCapturedCounter;
@property unsigned long long videoFrameExpectedCounter; // @synthesize videoFrameExpectedCounter=_videoFrameExpectedCounter;
@property unsigned long long videoFrameReceivedCounter; // @synthesize videoFrameReceivedCounter=_videoFrameReceivedCounter;
@property(readonly) VCReportingHistogram *JBUnclippedTarget; // @synthesize JBUnclippedTarget=_JBUnclippedTarget;
@property(readonly) VCReportingHistogram *JBTarget; // @synthesize JBTarget=_JBTarget;
@property(readonly) VCReportingHistogram *nacksPLRWithoutRTX; // @synthesize nacksPLRWithoutRTX=_nacksPLRWithoutRTX;
@property(readonly) VCReportingHistogram *nacksPLRWithRTX; // @synthesize nacksPLRWithRTX=_nacksPLRWithRTX;
@property(readonly) VCReportingHistogram *nacksRTXRetransmittedMediaBitRate; // @synthesize nacksRTXRetransmittedMediaBitRate=_nacksRTXRetransmittedMediaBitRate;
@property(readonly) VCReportingHistogram *nacksRTXMediaBitRate; // @synthesize nacksRTXMediaBitRate=_nacksRTXMediaBitRate;
@property(readonly) VCReportingHistogram *nacksRTXLateTime; // @synthesize nacksRTXLateTime=_nacksRTXLateTime;
@property(readonly) VCReportingHistogram *nacksRTXResponseTime; // @synthesize nacksRTXResponseTime=_nacksRTXResponseTime;
@property double maxMediaQueueSize; // @synthesize maxMediaQueueSize=_maxMediaQueueSize;
@property unsigned int totalMediaQueueSizeReportsCount; // @synthesize totalMediaQueueSizeReportsCount=_totalMediaQueueSizeReportsCount;
@property double accumulatedTotalMediaQueueSize; // @synthesize accumulatedTotalMediaQueueSize=_accumulatedTotalMediaQueueSize;
@property unsigned int accumulatedMediaQueueFlushCount; // @synthesize accumulatedMediaQueueFlushCount=_accumulatedMediaQueueFlushCount;
@property unsigned long long nacksFulfilledOnTime; // @synthesize nacksFulfilledOnTime=_nacksFulfilledOnTime;
@property unsigned long long nacksFulfilled; // @synthesize nacksFulfilled=_nacksFulfilled;
@property unsigned long long nacksSent; // @synthesize nacksSent=_nacksSent;
@property unsigned int perfTimerEventCount; // @synthesize perfTimerEventCount=_perfTimerEventCount;
@property(retain) NSString *timeToSeeFirstRemoteVideoFrame; // @synthesize timeToSeeFirstRemoteVideoFrame=_timeToSeeFirstRemoteVideoFrame;
@property(retain) NSString *firstRemoteVideoFrameDecoded; // @synthesize firstRemoteVideoFrameDecoded=_firstRemoteVideoFrameDecoded;
@property(retain) NSString *firstMediaReceived; // @synthesize firstMediaReceived=_firstMediaReceived;
@property(retain) NSString *totalMediaStallSaveDelta; // @synthesize totalMediaStallSaveDelta=_totalMediaStallSaveDelta;
@property(retain) NSString *firstMKIReceived; // @synthesize firstMKIReceived=_firstMKIReceived;
@property unsigned int audioStreamSwitchCount; // @synthesize audioStreamSwitchCount=_audioStreamSwitchCount;
@property unsigned int videoStreamSwitchCount; // @synthesize videoStreamSwitchCount=_videoStreamSwitchCount;
@property int avSyncOffsetSum; // @synthesize avSyncOffsetSum=_avSyncOffsetSum;
@property unsigned int avSyncOffsetSamplesCount; // @synthesize avSyncOffsetSamplesCount=_avSyncOffsetSamplesCount;
@property int maxAVSyncOffset; // @synthesize maxAVSyncOffset=_maxAVSyncOffset;
@property int minAVSyncOffset; // @synthesize minAVSyncOffset=_minAVSyncOffset;
@property unsigned int tickCount; // @synthesize tickCount=_tickCount;
@property unsigned int avgJBTargetSizeChangesCount; // @synthesize avgJBTargetSizeChangesCount=_avgJBTargetSizeChangesCount;
@property double avgJBTargetSizeChanges; // @synthesize avgJBTargetSizeChanges=_avgJBTargetSizeChanges;
@property double maxJBTargetSizeChanges; // @synthesize maxJBTargetSizeChanges=_maxJBTargetSizeChanges;
@property unsigned int averageJitterBufferDelayCount; // @synthesize averageJitterBufferDelayCount=_averageJitterBufferDelayCount;
@property double averageJitterBufferDelay; // @synthesize averageJitterBufferDelay=_averageJitterBufferDelay;
@property unsigned int maxAudioErasureCount; // @synthesize maxAudioErasureCount=_maxAudioErasureCount;
@property unsigned int audioErasureCount; // @synthesize audioErasureCount=_audioErasureCount;
@property double totalAudioErasureTime; // @synthesize totalAudioErasureTime=_totalAudioErasureTime;
@property unsigned int maxVideoStallCount; // @synthesize maxVideoStallCount=_maxVideoStallCount;
@property unsigned int significantVideoStallCount; // @synthesize significantVideoStallCount=_significantVideoStallCount;
@property double currentStallTime; // @synthesize currentStallTime=_currentStallTime;
@property double lastReceivedVideoStallTime; // @synthesize lastReceivedVideoStallTime=_lastReceivedVideoStallTime;
@property double videoStalledMaxLength; // @synthesize videoStalledMaxLength=_videoStalledMaxLength;
@property double videoStalledTotalTime; // @synthesize videoStalledTotalTime=_videoStalledTotalTime;
@property double videoDegradedMaxLength; // @synthesize videoDegradedMaxLength=_videoDegradedMaxLength;
@property unsigned int videoDegradedTotalCounter; // @synthesize videoDegradedTotalCounter=_videoDegradedTotalCounter;
@property double videoDegradedStartTime; // @synthesize videoDegradedStartTime=_videoDegradedStartTime;
@property double videoDegradedTotalTime; // @synthesize videoDegradedTotalTime=_videoDegradedTotalTime;
@property _Bool isVideoDegraded; // @synthesize isVideoDegraded=_isVideoDegraded;
- (void)dealloc;
- (id)init;

@end

