//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MultiwayCall
{
    NSString *_remoteParticipantID;
    NSMutableDictionary *_streamGroups;
    _Bool _isAudioEnabled;
    _Bool _isVideoEnabled;
    _Bool _isScreenEnabled;
    _Bool _isExpanseEnabled;
    _Bool _live;
    _Bool _isFullSize;
    _Bool _hasWebParticipant;
    int _duration;
    int _adjustedDuration;
    int _interval;
    int _frequency;
    unsigned long long _downlinkOptedInRateSum;
    unsigned long long _downlinkOptedInRateUpdateCounter;
    unsigned long long _actualBitrateSum;
    unsigned int _actualBitrateUpdateCounter;
    unsigned int _videoStreamSwitchCount;
    unsigned int _audioStreamSwitchCount;
    unsigned long long _downlinkOptedInBitrateSwitchCount;
    unsigned int _timeToHearFirstRemoteAudioFrame;
    unsigned int _averageReceiveFramerate;
    unsigned int _averageJitterbufferLength;
    double _connectionTime;
    _Bool _isVideoDegraded;
    unsigned int _videoDegradedTotalCounter;
    double _videoDegradedTotalTime;
    double _videoDegradedStartTime;
    NSMutableDictionary *_streamGroupStats;
    unsigned int _decryptionTimeoutCount;
    double _handshakeStartTime;
    double _handshakeDuration;
    _Bool _isRTXTelemetryAvailable;
    unsigned long long _nacksSent;
    unsigned long long _nacksFulfilled;
    unsigned long long _nacksFulfilledOnTime;
    unsigned long long _lateFramesScheduledWithRTXCount;
    unsigned long long _assembledFramesWithRTXPacketsCount;
    unsigned long long _failedToAssembleFramesWithRTXPacketsCount;
    _Bool _reportRateControlExperimentRemote;
    unsigned char _rateControlExperimentVersionRemote;
    unsigned char _rateControlExperimentGroupIndexRemote;
    unsigned int rateControlSmartBrakeTrialVersionRemote;
    double _screenControlStartTime;
    double _screenControlTotalDurationMsec;
    double _cameraCompositionStartTimeMsec;
    double _cameraCompositionTotalDurationMsec;
    unsigned int _bootstrapSampleIndex;
    _Bool _reportNetworkCapabilities;
    _Bool _isUplinkRetransmissionEnabled;
    unsigned int _rateControlSmartBrakeTrialVersionRemote;
    unsigned int _downlinkTargetBitrateSwitchCount;
    int _mkmRecoveryAttemptCount;
    int _startDate;
}

@property unsigned char rateControlExperimentGroupIndexRemote; // @synthesize rateControlExperimentGroupIndexRemote=_rateControlExperimentGroupIndexRemote;
@property unsigned char rateControlExperimentVersionRemote; // @synthesize rateControlExperimentVersionRemote=_rateControlExperimentVersionRemote;
@property _Bool reportRateControlExperimentRemote; // @synthesize reportRateControlExperimentRemote=_reportRateControlExperimentRemote;
@property int startDate; // @synthesize startDate=_startDate;
@property int mkmRecoveryAttemptCount; // @synthesize mkmRecoveryAttemptCount=_mkmRecoveryAttemptCount;
@property unsigned int downlinkTargetBitrateSwitchCount; // @synthesize downlinkTargetBitrateSwitchCount=_downlinkTargetBitrateSwitchCount;
@property(readonly) NSMutableDictionary *streamGroups; // @synthesize streamGroups=_streamGroups;
@property _Bool isUplinkRetransmissionEnabled; // @synthesize isUplinkRetransmissionEnabled=_isUplinkRetransmissionEnabled;
@property _Bool reportNetworkCapabilities; // @synthesize reportNetworkCapabilities=_reportNetworkCapabilities;
@property unsigned int bootstrapSampleIndex; // @synthesize bootstrapSampleIndex=_bootstrapSampleIndex;
@property unsigned int rateControlSmartBrakeTrialVersionRemote; // @synthesize rateControlSmartBrakeTrialVersionRemote=_rateControlSmartBrakeTrialVersionRemote;
@property double cameraCompositionTotalDurationMsec; // @synthesize cameraCompositionTotalDurationMsec=_cameraCompositionTotalDurationMsec;
@property double screenControlTotalDurationMsec; // @synthesize screenControlTotalDurationMsec=_screenControlTotalDurationMsec;
@property unsigned long long failedToAssembleFramesWithRTXPacketsCount; // @synthesize failedToAssembleFramesWithRTXPacketsCount=_failedToAssembleFramesWithRTXPacketsCount;
@property unsigned long long assembledFramesWithRTXPacketsCount; // @synthesize assembledFramesWithRTXPacketsCount=_assembledFramesWithRTXPacketsCount;
@property unsigned long long lateFramesScheduledWithRTXCount; // @synthesize lateFramesScheduledWithRTXCount=_lateFramesScheduledWithRTXCount;
@property unsigned long long nacksFulfilledOnTime; // @synthesize nacksFulfilledOnTime=_nacksFulfilledOnTime;
@property unsigned long long nacksFulfilled; // @synthesize nacksFulfilled=_nacksFulfilled;
@property unsigned long long nacksSent; // @synthesize nacksSent=_nacksSent;
@property _Bool isRTXTelemetryAvailable; // @synthesize isRTXTelemetryAvailable=_isRTXTelemetryAvailable;
@property unsigned int decryptionTimeoutCount; // @synthesize decryptionTimeoutCount=_decryptionTimeoutCount;
@property(readonly) NSMutableDictionary *streamGroupStats; // @synthesize streamGroupStats=_streamGroupStats;
@property double connectionTime; // @synthesize connectionTime=_connectionTime;
@property unsigned int averageJitterbufferLength; // @synthesize averageJitterbufferLength=_averageJitterbufferLength;
@property unsigned int timeToHearFirstRemoteAudioFrame; // @synthesize timeToHearFirstRemoteAudioFrame=_timeToHearFirstRemoteAudioFrame;
@property unsigned long long downlinkOptedInBitrateSwitchCount; // @synthesize downlinkOptedInBitrateSwitchCount=_downlinkOptedInBitrateSwitchCount;
@property(readonly) int adjustedDuration; // @synthesize adjustedDuration=_adjustedDuration;
@property int duration; // @synthesize duration=_duration;
@property _Bool hasWebParticipant; // @synthesize hasWebParticipant=_hasWebParticipant;
@property _Bool isFullSize; // @synthesize isFullSize=_isFullSize;
@property _Bool isAudioEnabled; // @synthesize isAudioEnabled=_isAudioEnabled;
@property _Bool isExpanseEnabled; // @synthesize isExpanseEnabled=_isExpanseEnabled;
@property _Bool isScreenEnabled; // @synthesize isScreenEnabled=_isScreenEnabled;
@property _Bool isVideoEnabled; // @synthesize isVideoEnabled=_isVideoEnabled;
@property(getter=isLive) _Bool live; // @synthesize live=_live;
@property(readonly) NSString *remoteParticipantID; // @synthesize remoteParticipantID=_remoteParticipantID;
- (void)addControlChannelTelemetry:(id)arg1 timestamp:(double)arg2;
- (void)addStreamGroupTelemetry:(id)arg1;
- (void)addRTXStreamGroupTelemetry:(id)arg1 streamGroupID:(id)arg2;
- (void)addAudioStreamGroupTelemetry:(id)arg1 streamGroupID:(id)arg2;
- (void)addVideoStreamGroupTelemetry:(id)arg1 streamGroupID:(id)arg2;
- (void)incrementCallDuration;
- (void)processStreamData:(id)arg1 streamGroupID:(id)arg2;
- (void)processVideoDegraded:(_Bool)arg1 streamGroup:(id)arg2 timestamp:(double)arg3;
- (void)processVideoDegraded:(_Bool)arg1 timestamp:(double)arg2;
- (void)updatePerfTimingWithFirstVideoFrameProcessingDelta:(double)arg1 firstMediaReceivedDelta:(double)arg2 firstMKIDelta:(double)arg3 totalMediaStallSaveDelta:(double)arg4 streamGroupID:(id)arg5;
- (double)audioErasureTotalTime:(id)arg1;
- (unsigned short)minVideoFrameRate:(id)arg1;
- (unsigned short)maxJBTargetSizeChanges:(id)arg1;
- (double)avgJBTargetSizeChanges:(id)arg1;
- (double)avgJBDelay:(id)arg1;
- (unsigned short)maxVideoStallCount:(id)arg1;
- (unsigned short)maxAudioErasureCount:(id)arg1;
- (unsigned short)audioErasureCount:(id)arg1;
- (double)significantVideoStallTotalTime:(id)arg1;
- (void)incrementAudioStreamSwitchCounterForStreamGroup:(id)arg1;
- (void)incrementVideoStreamSwitchCounterForStreamGroup:(id)arg1;
- (id)videoDegradedTotalCounter:(id)arg1;
- (unsigned short)significantVideoStallCount:(id)arg1;
- (unsigned int)actualBitrateUpdateCounter;
- (unsigned long long)actualBitrateSum;
- (unsigned int)downlinkOptedInRateUpdateCounter;
- (unsigned long long)downlinkOptedInRateSum;
- (void)processActualBitrateRateChange:(unsigned int)arg1;
- (void)processDownlinkOptedInRateChange:(unsigned int)arg1;
- (unsigned int)RTPeriod;
- (_Bool)isVideoDegraded;
- (void)markCameraCompositionStartWithTimestamp:(double)arg1;
- (void)markScreenControlCompletionWithTimestamp:(double)arg1;
- (void)markScreenControlStartWithTimestamp:(double)arg1;
- (void)markCameraCompositionCompletionWithTimestamp:(double)arg1;
- (double)markHandshakeCompletion:(double)arg1;
- (void)markHandshakeStart:(double)arg1;
- (void)finalizeCall:(double)arg1;
- (void)dealloc;
- (id)initCallWithRemoteParticipantID:(id)arg1;

@end

