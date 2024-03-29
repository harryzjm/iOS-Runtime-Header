//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NSMutableArray, NSNumber, NSObject, NSString, TimingCollection, VCAdaptiveLearning, VCAlgosStreamingScoreAggregator, VCAlgosStreamingScorer, VCHistogram, VCReportingHistogram;
@protocol OS_dispatch_queue, OS_nw_activity, OS_os_transaction, VCAggregatorDelegate;

__attribute__((visibility("hidden")))
@interface VCAggregator
{
    int _interval;
    int _frequency;
    NSString *_localInterfaceType;
    NSString *_remoteInterfaceType;
    NSString *_connectionType;
    _Bool _isDuplicationEnabled;
    NSString *_remoteOSBuild;
    unsigned int _remoteSwitches;
    unsigned int _negotiatedSwitches;
    _Bool _remoteFaceTimeSwitchesAvailable;
    unsigned int _currentWidth;
    unsigned int _switchIntoDupCount;
    TimingCollection *_cameraTimers;
    unsigned char _mediaRecorderCaptureTotal;
    unsigned char _mediaRecorderCaptureFailure;
    VCHistogram *_mediaRecorderMediaTypeHistogram;
    VCHistogram *_mediaRecorderResultsHistogram;
    VCHistogram *_mediaRecorderFileSizeHistogram;
    VCHistogram *_mediaRecorderMessageLengthHistogram;
    unsigned int _direction;
    NSNumber *_streamToken;
    NSString *_sessionID;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id <VCAggregatorDelegate> _delegate;
    CDUnknownBlockType _periodicAggregationOccuredHandler;
    CDUnknownBlockType _eventDrivenAggregationOccurredHandler;
    VCAlgosStreamingScoreAggregator *_algosScoreAggregator;
    VCAlgosStreamingScorer *_algosScorerDefault;
    struct tagVCReportingClientExperimentSettings _reportingClientExperimentSettings;
    NSObject<OS_nw_activity> *_sessionNwActivity;
    NSObject<OS_nw_activity> *_nwActivity;
    _Bool _useNwActivitySubmitMetrics;
    NSDate *_conversationTimeBase;
    int _startDate;
    long long _onceAggregatedReportsToken;
    _Bool _isNWActivityReportingEnabled;
    NSMutableArray *_idsReportingBlobs;
    _Bool _reportRateControlExperiment;
    unsigned char _rateControlExperimentVersion;
    unsigned char _rateControlExperimentGroupIndex;
    unsigned int _nackGeneratorConfigVersion;
    _Bool _serverPacketRetransmissionsForVideoEnabled;
    _Bool _serverPacketRetransmissionsExtraDelayBudgetEnabled;
    unsigned int _rateControlSmartBrakeTrialVersion;
    int _transportType;
    _Bool _shouldReportLowLatencyInterfaceStatistics;
    NSString *_activeConnectionRegistry;
    struct __CFDictionary *_symptomsOccurrences;
    _Bool _rtcpPSFBForLossFeedbackEnabled;
    _Bool _rtcpPSFBForLtrAckEnabled;
    _Bool _fecEnabled;
    _Bool _isQUICPod;
    _Bool _isInitiator;
    unsigned int _lastReportedSuddenBandwidthDropCount;
    VCAdaptiveLearning *_adaptiveLearning;
    unsigned char _linkPreferSuggestion;
    unsigned char _linkConfidenceScore;
    unsigned char _linkPreferDecision;
    unsigned char _linkIPPreference;
    unsigned int _callErrorCode;
    unsigned int _callDetailedErrorCode;
    unsigned int _noRemoteAtCallEnd;
    unsigned int _remoteNoRemoteAtCallEnd;
    _Bool _isOneToOneMode;
    unsigned int _initialRampUpTime;
    int _initialBitrateDelta;
    int _initialBitrate;
    unsigned int _callMode;
    unsigned long long _lastReportedTotalWifiTxDataBytes;
    unsigned long long _lastReportedTotalWifiRxDataBytes;
    unsigned int _wifiToCellHandoverCount;
    unsigned int _cellToWifiHandoverCount;
    double _callMaxMediaStallTime;
    double _callTotalMediaStallTime;
    unsigned int _callTotalMediaStallCount;
    VCHistogram *_audioCodecPayload;
    VCHistogram *_audioFrameBundling;
    VCHistogram *_audioMediaBitrate;
    unsigned short _currentAudioCodecPayload;
    unsigned int _currentAudioMediaBitrate;
    double _lastAudioTierStatsUpdate;
    double _maxVideoStallInterval;
    double _averageTotalVideoRecvBitrate;
    VCHistogram *_WANVJBQSize;
    VCHistogram *_TVidMedBR;
    VCHistogram *_TVidCodecPayload;
    unsigned int _maxJitterQueueSize;
    double _timeWeightedJitterQueueSize;
    unsigned int _averageJitterQueueSizeChanges;
    VCHistogram *_JBQSizeDeltaVidLarger;
    VCHistogram *_JBQSizeDeltaAudLarger;
    unsigned int _isVPCEnabled;
    double _minVPCProcessingTime;
    double _maxVPCProcessingTime;
    double _averageVPCProcessingTimeSum;
    unsigned int _averageVPCProcessingTimeCounter;
    unsigned int _linkProbingVersion;
    unsigned int _remoteLinkProbingVersion;
    unsigned int _dynamicDupeLinkCount;
    double _rttMeanTotalDelta;
    unsigned char _plrTierTotalDelta;
    double _averageJitterErasuresRate;
    double _averageAudioErasuresRate;
    double _averageSpeechErasureRate;
    unsigned int _vcrcProfileNumber;
    unsigned long long _VPLRAccumulator;
    unsigned int _REDState;
    unsigned char _wifiAssistState;
    VCHistogram *_lossPattern;
    double _averageAbnormalBPL;
    unsigned int _abnormalBPLCount;
    double _averageAbnormalRTT;
    unsigned int _abnormalRTTCount;
    unsigned int _overshootSendBitrate;
    unsigned int _undershootSendBitrate;
    unsigned int _overUtilizedBandwidth;
    unsigned int _underUtilizedBandwidth;
    unsigned int _localAlertStateSwitchCount;
    unsigned int _remoteAlertStateSwitchCount;
    unsigned int _maxVideoFrameErasureCount;
    unsigned int _accumVideoFrameErasureCount;
    unsigned long long _audioRemoteReceivedPacketCount;
    unsigned long long _audioSentPacketCount;
    unsigned long long _lastReportedAudioPacketSent;
    unsigned long long _lastReportedRemoteAudioPacketsReceived;
    double _maxAudioStallInterval;
    double _totalAudioStallTime;
    double _lastReportedAudioStallTime;
    unsigned int _maxConsAudioErasureCount;
    NSDictionary *_qrExperiments;
    _Bool _isCaptionsEnabled;
    _Bool _receivedCaptionsMetrics;
    unsigned int _totalCollectedCaptionsRatioMetrics;
    unsigned int _longCaptionRatioCollection;
    unsigned int _maxCaptionsRatio;
    unsigned int _captionTaskCount;
    double _lastUtteranceDuration;
    VCReportingHistogram *_captionsRatioHistogram;
    VCReportingHistogram *_captionsRatioLongHistogram;
    VCReportingHistogram *_captionsUtteranceHistogram;
    double _cannedAudioInjectorCreatedTime;
    double _cannedAudioInjectorSetUpTime;
    VCReportingHistogram *_cannedAudioInjectorFileSizeHistogram;
    VCReportingHistogram *_cannedAudioInjectorMessageLengthHistogram;
    int _thermalTimeToModerate;
    int _thermalTimeToHeavy;
    double _lastUsedTimestamp;
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)connectionCategoryForType:(id)arg1;
+ (id)interfaceCategoryForType:(id)arg1;
@property(readonly) VCHistogram *JBQSizeDeltaAudLarger; // @synthesize JBQSizeDeltaAudLarger=_JBQSizeDeltaAudLarger;
@property(readonly) VCHistogram *JBQSizeDeltaVidLarger; // @synthesize JBQSizeDeltaVidLarger=_JBQSizeDeltaVidLarger;
@property(readonly) _Bool isOneToOneMode; // @synthesize isOneToOneMode=_isOneToOneMode;
@property(readonly) VCHistogram *audioMediaBitrate; // @synthesize audioMediaBitrate=_audioMediaBitrate;
@property(readonly) VCHistogram *audioCodecPayload; // @synthesize audioCodecPayload=_audioCodecPayload;
@property(readonly) VCHistogram *TVidCodecPayload; // @synthesize TVidCodecPayload=_TVidCodecPayload;
@property(readonly) VCHistogram *TVidMedBR; // @synthesize TVidMedBR=_TVidMedBR;
@property(readonly) VCHistogram *WANVJBQSize; // @synthesize WANVJBQSize=_WANVJBQSize;
@property(copy) NSDictionary *qrExperiments; // @synthesize qrExperiments=_qrExperiments;
@property unsigned int remoteLinkProbingVersion; // @synthesize remoteLinkProbingVersion=_remoteLinkProbingVersion;
@property unsigned int linkProbingVersion; // @synthesize linkProbingVersion=_linkProbingVersion;
@property(copy) NSString *remoteOSBuild; // @synthesize remoteOSBuild=_remoteOSBuild;
@property(readonly) unsigned int callMode; // @synthesize callMode=_callMode;
@property(nonatomic) struct tagVCReportingClientExperimentSettings reportingClientExperimentSettings; // @synthesize reportingClientExperimentSettings=_reportingClientExperimentSettings;
@property(readonly) struct __CFDictionary *symptomsOccurrences; // @synthesize symptomsOccurrences=_symptomsOccurrences;
@property(copy) NSString *activeConnectionRegistry; // @synthesize activeConnectionRegistry=_activeConnectionRegistry;
@property(readonly) VCAlgosStreamingScoreAggregator *algosScoreAggregator; // @synthesize algosScoreAggregator=_algosScoreAggregator;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) unsigned int direction; // @synthesize direction=_direction;
@property(readonly) NSNumber *streamToken; // @synthesize streamToken=_streamToken;
- (void)filterDictionaryUsingQRServerPrefix:(id)arg1 addTo:(id)arg2;
- (void)updateReportWithQRServerSessionStats:(id)arg1;
- (_Bool)hasQRServerSessionPrefix:(id)arg1;
- (_Bool)hasQRServerPrefix:(id)arg1;
- (id)segmentNameOneToOne;
- (_Bool)isApplePersonalHotspot;
- (void)segmentFECReport:(id)arg1 parameters:(struct tagVCFECSegmentReportParameters *)arg2;
- (void)updateVideoFECStats:(id)arg1 fecStats:(id)arg2 callLossPattern:(id)arg3 segmentLossPattern:(id)arg4 segmentLossHistogram:(id)arg5 segmentLossFecHistogram:(id)arg6;
- (id)duplicationIndicator;
- (double)microFromPayload:(id)arg1;
- (_Bool)didUpdateStringFrom:(id *)arg1 toString:(id)arg2;
- (unsigned int)nackGeneratorConfigVersion;
- (_Bool)serverPacketRetransmissionsExtraDelayBudgetEnabled;
- (_Bool)serverPacketRetransmissionsForVideoEnabled;
- (int)initialSettledBitrate;
- (int)shortTermAverageBWEForSegment:(id)arg1;
- (int)longTermAverageBWEForSegment:(id)arg1;
- (int)shortTermAverageSARBRForSegment:(id)arg1;
- (int)longTermAverageSARBRForSegment:(id)arg1;
- (int)shortTermAverageSATXBRForSegment:(id)arg1;
- (int)longTermAverageSATXBRForSegment:(id)arg1;
- (int)previousISBRForSegment:(id)arg1;
- (int)shortTermAverageISBRForSegment:(id)arg1;
- (int)longTermAverageISBRForSegment:(id)arg1;
- (int)shortTermAverageTBRForSegment:(id)arg1;
- (int)longTermAverageTBRForSegment:(id)arg1;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6;
- (int)adaptiveLearningState;
- (void)migrateValueForKey:(struct __CFString *)arg1 from:(id)arg2 to:(id)arg3 withKey:(struct __CFString *)arg4;
- (void)addLowLatencyInterfaceStatisticsToPayload:(id)arg1;
- (void)initializeLowLatencyInterfaceStatistics;
- (void)setNWActivityReportingEnabled:(_Bool)arg1;
- (void)addAggregatedCannedAudioMetricsToReport:(id)arg1;
- (void)addAggregatedMediaRecorderMetricsToReport:(id)arg1;
- (void)addCameraMetricsToReportDictionary:(id)arg1 totalDuration:(int)arg2;
- (id)aggregatedSessionReport;
- (id)aggregatedCallReports;
- (void)addAggregatedCaptionsMetricsToReport:(id)arg1;
- (void)addAggregatedCaptionsValueTypesToReport:(id)arg1;
- (void)addAggregatedCaptionsHistogramsToReport:(id)arg1 shouldAlwaysAdd:(_Bool)arg2;
- (void)addAggregatedCaptionsEnabledToReport:(id)arg1;
- (void)updateMediaRecorderEventStats:(id)arg1;
- (void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3;
- (void)processCannedAudioInjectionReadyWithCurrentTime:(double)arg1;
- (void)processCannedAudioInjectionInitWithPayload:(id)arg1 currentTime:(double)arg2;
- (void)processCaptionsMetrics:(id)arg1;
- (void)updateActiveConnectionRegistry:(id)arg1 type:(unsigned short)arg2;
- (void)updateAdaptiveLearningStats:(unsigned int)arg1 payload:(id)arg2;
- (void)updateVPCStats:(id)arg1;
- (void)updateRateControlExperiment:(id)arg1 type:(unsigned short)arg2;
- (void)processIDSReportingBlob:(id)arg1;
- (void)addIDSTelemetry:(id)arg1;
- (void)saveCallSegmentHistory;
- (void)addThermalMetricsToReportDictionary:(id)arg1;
- (id)reportingClientExperimentSettingsDictionary;
- (void)updateThermalMetricsFromPayload:(id)arg1;
- (void)addVPCTelemetry:(id)arg1;
- (_Bool)isLocalInterfaceTypeForSegment:(id)arg1 equalTo:(id)arg2;
- (void)updateHandoverCount:(id)arg1 withPreviousSegmentKey:(id)arg2;
- (id)aggregatedSegmentQRReport;
- (id)aggregatedSegmentReport:(int)arg1;
- (void)setupAdaptiveLearningWithParameters:(id)arg1;
- (void)flushCurrentSegment;
- (id)symptomsOccurrencesStats;
- (void)updateSymptomCount:(unsigned int)arg1;
- (unsigned int)RTPeriod;
@property(readonly) id <VCAggregatorDelegate> delegate;
- (void)setEventDrivenAggregationOccurredHandler:(CDUnknownBlockType)arg1;
- (void)setPeriodicAggregationOccuredHandler:(CDUnknownBlockType)arg1;
- (void)initializeAudioTxTelemetry;
- (void)initializeVideoJitterBufferTelemetry;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 nwParentActivity:(id)arg2 conversationTimeBase:(id)arg3;
- (id)initWithDelegate:(id)arg1 nwParentActivity:(id)arg2;
@property(readonly) long long *onceAggregatedReportsToken;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

