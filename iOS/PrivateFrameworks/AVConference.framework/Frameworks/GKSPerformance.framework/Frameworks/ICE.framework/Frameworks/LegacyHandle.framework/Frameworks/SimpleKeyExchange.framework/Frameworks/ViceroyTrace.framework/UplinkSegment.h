//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSNumber, VCHistogram, VCReportingHistogram;

__attribute__((visibility("hidden")))
@interface UplinkSegment
{
    NSMutableDictionary *_streamQualityAggregator;
    NSNumber *_wrmLinkTypeSuggestion;
    NSNumber *_wrmLinkTypeChangeReasonCode;
    NSNumber *_wrmLinkTypeWifiRSSI;
    NSNumber *_wrmLinkTypeWifiSNR;
    NSNumber *_wrmLinkTypeWifiCCA;
    NSNumber *_wrmLinkTypeWifiPacketLoss;
    NSNumber *_wrmLinkTypeCellSignalStrength;
    NSNumber *_wrmLinkTypeCellSignalBar;
    NSNumber *_wrmLinkTypeCellServingCellType;
    _Bool _isUplinkScreenEnabled;
    _Bool _isFullScreenCapture;
    NSMutableDictionary *_streamGroupStats;
    _Bool _isSmartBrakeHistogramPopulated;
    VCReportingHistogram *_smartBrakeDuration;
    VCReportingHistogram *_smartBrakeTargetBitrateStart;
    VCReportingHistogram *_smartBrakeBandwidthStart;
    VCReportingHistogram *_smartBrakeBandwidthEnd;
    VCReportingHistogram *_smartBrakeTargetBitrateAfter5;
    VCReportingHistogram *_smartBrakeTargetBitrateAfter15;
    VCReportingHistogram *_smartBrakeTargetBitrateAfter30;
    VCReportingHistogram *_redMaxDelay;
    VCReportingHistogram *_redNumPayloadsUsed;
    unsigned int _rateControlSmartBrakeTrialVersion;
    unsigned int _audioFlushPacketCount;
    unsigned int _audioSentPacketCount;
    unsigned long long _lastReportedTotalWifiTxDataBytes;
    unsigned long long _totalWifiTxDataBytes;
    double _averageSendBitrate;
    VCHistogram *_SBR;
    VCHistogram *_videoEncodingBitrate;
    double _totalAudioPauseTime;
    unsigned long long _videoFlushPacketCount;
    unsigned long long _videoSentPacketCount;
    unsigned int _bootstrapSampleIndex;
    _Bool _isCenterStageEnabled;
    _Bool _isPortraitBlurEnabled;
    unsigned int _BBQueueTooLargeCount;
    unsigned int _BBRateTooLowCount;
    unsigned int _overshootSendBitrate;
    unsigned int _undershootSendBitrate;
    unsigned int _overUtilizedBandwidth;
    unsigned int _underUtilizedBandwidth;
    unsigned long long _totalUsedCellBudgetTxDataBytes;
    unsigned long long _totalCellTxDataBytes;
    unsigned long long _totalCellDupTxDataBytes;
    unsigned long long _lastReportedTotalUsedCellBudgetTxDataBytes;
    unsigned long long _lastReportedTotalCellTxDataBytes;
    unsigned long long _lastReportedTotalCellDupTxDataBytes;
    unsigned long long _packetSendSuccessCounter;
    unsigned long long _packetSendFailureCounter;
    double _maxAudioStallInterval;
    VCHistogram *_audioMediaBitrate;
    VCHistogram *_audioCodecPayload;
    VCHistogram *_audioFrameBundling;
    VCHistogram *_videoMediaBitrate;
    VCHistogram *_videoCodecPayload;
}

@property _Bool isPortraitBlurEnabled; // @synthesize isPortraitBlurEnabled=_isPortraitBlurEnabled;
@property _Bool isCenterStageEnabled; // @synthesize isCenterStageEnabled=_isCenterStageEnabled;
@property(nonatomic) _Bool isUplinkScreenEnabled; // @synthesize isUplinkScreenEnabled=_isUplinkScreenEnabled;
@property(readonly) VCHistogram *redMaxDelay; // @synthesize redMaxDelay=_redMaxDelay;
@property(readonly) VCHistogram *redNumPayloadsUsed; // @synthesize redNumPayloadsUsed=_redNumPayloadsUsed;
@property unsigned int bootstrapSampleIndex; // @synthesize bootstrapSampleIndex=_bootstrapSampleIndex;
@property unsigned int underUtilizedBandwidth; // @synthesize underUtilizedBandwidth=_underUtilizedBandwidth;
@property unsigned int overUtilizedBandwidth; // @synthesize overUtilizedBandwidth=_overUtilizedBandwidth;
@property unsigned int undershootSendBitrate; // @synthesize undershootSendBitrate=_undershootSendBitrate;
@property unsigned int overshootSendBitrate; // @synthesize overshootSendBitrate=_overshootSendBitrate;
@property(readonly) VCHistogram *videoCodecPayload; // @synthesize videoCodecPayload=_videoCodecPayload;
@property(readonly) VCHistogram *videoMediaBitrate; // @synthesize videoMediaBitrate=_videoMediaBitrate;
@property(readonly) VCHistogram *audioFrameBundling; // @synthesize audioFrameBundling=_audioFrameBundling;
@property(readonly) VCHistogram *audioCodecPayload; // @synthesize audioCodecPayload=_audioCodecPayload;
@property(readonly) VCHistogram *audioMediaBitrate; // @synthesize audioMediaBitrate=_audioMediaBitrate;
@property double maxAudioStallInterval; // @synthesize maxAudioStallInterval=_maxAudioStallInterval;
@property unsigned int BBRateTooLowCount; // @synthesize BBRateTooLowCount=_BBRateTooLowCount;
@property unsigned int BBQueueTooLargeCount; // @synthesize BBQueueTooLargeCount=_BBQueueTooLargeCount;
@property unsigned long long videoSentPacketCount; // @synthesize videoSentPacketCount=_videoSentPacketCount;
@property unsigned long long videoFlushPacketCount; // @synthesize videoFlushPacketCount=_videoFlushPacketCount;
@property double totalAudioPauseTime; // @synthesize totalAudioPauseTime=_totalAudioPauseTime;
@property(readonly) VCHistogram *videoEncodingBitrate; // @synthesize videoEncodingBitrate=_videoEncodingBitrate;
@property(readonly) VCHistogram *SBR; // @synthesize SBR=_SBR;
@property double averageSendBitrate; // @synthesize averageSendBitrate=_averageSendBitrate;
@property unsigned long long totalWifiTxDataBytes; // @synthesize totalWifiTxDataBytes=_totalWifiTxDataBytes;
@property unsigned long long lastReportedTotalWifiTxDataBytes; // @synthesize lastReportedTotalWifiTxDataBytes=_lastReportedTotalWifiTxDataBytes;
@property unsigned long long packetSendFailureCounter; // @synthesize packetSendFailureCounter=_packetSendFailureCounter;
@property unsigned long long packetSendSuccessCounter; // @synthesize packetSendSuccessCounter=_packetSendSuccessCounter;
@property _Bool isFullScreenCapture; // @synthesize isFullScreenCapture=_isFullScreenCapture;
@property NSNumber *wrmLinkTypeCellServingCellType; // @synthesize wrmLinkTypeCellServingCellType=_wrmLinkTypeCellServingCellType;
@property NSNumber *wrmLinkTypeCellSignalBar; // @synthesize wrmLinkTypeCellSignalBar=_wrmLinkTypeCellSignalBar;
@property NSNumber *wrmLinkTypeCellSignalStrength; // @synthesize wrmLinkTypeCellSignalStrength=_wrmLinkTypeCellSignalStrength;
@property NSNumber *wrmLinkTypeWifiPacketLoss; // @synthesize wrmLinkTypeWifiPacketLoss=_wrmLinkTypeWifiPacketLoss;
@property NSNumber *wrmLinkTypeWifiCCA; // @synthesize wrmLinkTypeWifiCCA=_wrmLinkTypeWifiCCA;
@property NSNumber *wrmLinkTypeWifiSNR; // @synthesize wrmLinkTypeWifiSNR=_wrmLinkTypeWifiSNR;
@property NSNumber *wrmLinkTypeWifiRSSI; // @synthesize wrmLinkTypeWifiRSSI=_wrmLinkTypeWifiRSSI;
@property NSNumber *wrmLinkTypeChangeReasonCode; // @synthesize wrmLinkTypeChangeReasonCode=_wrmLinkTypeChangeReasonCode;
@property NSNumber *wrmLinkTypeSuggestion; // @synthesize wrmLinkTypeSuggestion=_wrmLinkTypeSuggestion;
@property unsigned long long lastReportedTotalCellDupTxDataBytes; // @synthesize lastReportedTotalCellDupTxDataBytes=_lastReportedTotalCellDupTxDataBytes;
@property unsigned long long lastReportedTotalCellTxDataBytes; // @synthesize lastReportedTotalCellTxDataBytes=_lastReportedTotalCellTxDataBytes;
@property unsigned long long lastReportedTotalUsedCellBudgetTxDataBytes; // @synthesize lastReportedTotalUsedCellBudgetTxDataBytes=_lastReportedTotalUsedCellBudgetTxDataBytes;
@property unsigned long long totalCellDupTxDataBytes; // @synthesize totalCellDupTxDataBytes=_totalCellDupTxDataBytes;
@property unsigned long long totalCellTxDataBytes; // @synthesize totalCellTxDataBytes=_totalCellTxDataBytes;
@property unsigned long long totalUsedCellBudgetTxDataBytes; // @synthesize totalUsedCellBudgetTxDataBytes=_totalUsedCellBudgetTxDataBytes;
- (id)segmentReport;
- (void)updateUplinkSegmentStats:(id)arg1 withSegmentBytes:(struct tagVCAggregatorFaceTimeSegmentStatsBytes *)arg2;
- (void)processAudioPacketsFlushed:(unsigned int)arg1 audioPacketsSent:(unsigned int)arg2;
- (unsigned int)audioFlushPercent;
- (void)updateAdaptiveLearningSegment;
- (void)addCelltechTelemetryToDictionary:(id)arg1;
- (void)addSmartBrakeStats:(id)arg1;
- (void)addMediaQueueStats:(id)arg1;
- (void)addSegmentWRMReportStats:(id)arg1;
- (void)addCellByteCountStats:(id)arg1;
- (void)collectStreamTemporalStats:(id)arg1;
- (void)collectStreamQualityAggregator:(id)arg1;
- (id)calculateFramerate:(id)arg1 forKey:(id)arg2;
- (id)calculateBitrate:(id)arg1 sumKey:(id)arg2 counterKey:(id)arg3;
- (void)processSmartBrakeEvent:(id)arg1;
- (void)processLateSmartBrakeEvent:(id)arg1;
- (void)processVideoTransmitterStats:(id)arg1;
- (void)processFramerateEvent:(id)arg1 forMetrics:(id)arg2 withStreamGroup:(id)arg3 withQuality:(id)arg4 sumKey:(id)arg5;
- (void)processBitrateEvent:(id)arg1 forMetrics:(id)arg2 withStreamGroup:(id)arg3 withQuality:(id)arg4 sumKey:(id)arg5 counterKey:(id)arg6;
- (void)processMediaQueueTelemetry:(id)arg1;
- (void)dealloc;
- (id)initWithSegmentName:(id)arg1 previousSegmentName:(id)arg2 segmentStreamGroups:(unsigned int)arg3 previousSegmentStreamGroups:(unsigned int)arg4 nwActivity:(id)arg5 localSwitches:(unsigned int)arg6 conversationTimeBase:(id)arg7 delegate:(id)arg8;

@end

