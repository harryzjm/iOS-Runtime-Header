//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCStatisticsCollector, DTMFEventHandler, NSMutableArray, NSNumber, NSObject, NSString, VCAudioIO, VCAudioPayload, VCAudioPowerSpectrumSource, VCAudioTransmitter, VCTelephonyInterface, WRMClient;
@protocol OS_dispatch_semaphore, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCAudioStream
{
    int _clientPid;
    int numBufferBytesAvailable;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    double dAudioHostTime;
    _Bool lastVoiceActive;
    double _remoteMediaStallTimeout;
    unsigned int conferenceID;
    unsigned int lastInputAudioTimeStamp;
    unsigned int lastSentAudioSampleTime;
    struct _opaque_pthread_rwlock_t stateLock;
    NSMutableArray *audioPayloads;
    struct tagVCAudioFrameFormat _vpioFormat;
    _Bool _useExternalIO;
    int preferredAudioCodec;
    DTMFEventHandler *dtmfEventHandler;
    WRMClient *wrmClient;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    VCAudioTransmitter *_audioTransmitter;
    int _reportingModuleID;
    VCTelephonyInterface *_telephonyInterface;
    _Bool isValid;
    int deviceRole;
    VCAudioIO *_audioIO;
    _Bool _isMuted;
    unsigned int *_reportingSSRCList;
    unsigned int _reportingSSRCCount;
    _Bool _sendActiveVoiceOnly;
    _Bool _currentDTXEnable;
    NSNumber *_targetStreamID;
    _Bool _rtpEnabledBeforeInterrupt;
    _Bool _rtcpEnabledBeforeInterrupt;
    unsigned int _pullAudioSamplesCount;
    struct _VCAudioStreamSinkContext _sinkContext;
    struct _VCAudioStreamSourceContext _sourceContext;
    long long _inputAudioPowerSpectrumToken;
    long long _outputAudioPowerSpectrumToken;
    VCAudioPowerSpectrumSource *_inputAudioPowerSpectrumSource;
    VCAudioPowerSpectrumSource *_outputAudioPowerSpectrumSource;
    unsigned int _abnormalOWRDCount;
    double _lastAbnormalOWRDVerificationTime;
    double _lastNetworkHealthPrintTime;
    double _packetLossRateAccum;
    int _packetLossRateCount;
    double _packetLossRate5Secs;
    double _timeLastPLR5Secs;
    _Bool _anbrEnabled;
    _Bool _anbrActive;
    struct ifnet_interface_advisory _lastNWConnectionNotification;
    unsigned int _awdTimeTransmitter;
    unsigned int _lastNoVoiceActivityPacketCount;
    struct opaqueCMSimpleQueue *_syncSourceDelegateQueue;
    struct __CFArray *_syncSourceDelegates;
    _Bool _isTelephony;
    unsigned int _uplinkRateAdaptationMaxAllowedBitrate;
    _Bool _isVoiceProcessingAt24KSupported;
    _Bool _isRamStadSRCEnabled;
    unsigned int _preferredMediaBitrate;
    AVCStatisticsCollector *_statsCollector;
    _Bool _enableAudioPowerSpectrum;
    unsigned int _audioSessionId;
    struct os_unfair_lock_s _delegateLock;
    NSObject<OS_dispatch_semaphore> *_runLock;
}

+ (_Bool)shouldUseRandomRTPTimestampForMode:(int)arg1;
+ (id)capabilities;
+ (id)supportedAudioPayloads;
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;
+ (unsigned char)audioIODirectionWithMediaStreamDirection:(long long)arg1;
+ (int)operatingModeForAudioStreamMode:(long long)arg1;
+ (id)newPayloadConfigForCodecConfig:(id)arg1 streamConfig:(id)arg2 inputSampleRate:(unsigned int)arg3;
+ (unsigned int)audioIOTypeForMode:(long long)arg1;
+ (unsigned int)audioChannelCountForMode:(id)arg1;
+ (_Bool)shouldUseAACELDSBRForMode:(long long)arg1;
+ (_Bool)isVoLTE:(long long)arg1;
+ (_Bool)isTelephony:(long long)arg1;
@property(nonatomic) unsigned int lastNoVoiceActivityPacketCount; // @synthesize lastNoVoiceActivityPacketCount=_lastNoVoiceActivityPacketCount;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
@property(nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(retain) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(retain) VCAudioTransmitter *audioTransmitter; // @synthesize audioTransmitter=_audioTransmitter;
@property(nonatomic) int deviceRole; // @synthesize deviceRole;
@property(nonatomic) _Bool isValid; // @synthesize isValid;
@property(readonly) unsigned int conferenceID; // @synthesize conferenceID;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)collectTxChannelMetrics:(CDStruct_b671a7c4 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1;
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1 interval:(float)arg2;
- (void)serverDidDie;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)unregisterCodecRateModeChangeNotifications;
- (void)registerActiveAudioStreamChangeNotifications;
- (void)registerCodecRateModeChangeNotifications;
- (long long)getSyncSourceSampleRate;
- (void)waitIdleForSyncSourceDelegates;
- (void)removeSyncSourceDelegate:(id)arg1;
- (void)addSyncSourceDelegate:(id)arg1;
- (void)setCanProcessAudio:(_Bool)arg1;
- (_Bool)canProcessAudio;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (int)getConnectionTypeForStreamMode:(long long)arg1;
- (void)reportingAlgosAudioStreamEvent:(unsigned short)arg1;
- (void)reportingAudioStreamEvent:(unsigned short)arg1;
- (void)addStreamStartingMetricsToReport:(const struct __CFDictionary *)arg1;
- (void)updateCodecPayloadAndBitrateForStartEvent:(int *)arg1 bitrate:(unsigned int *)arg2;
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;
- (id)getReportingServiceID;
- (struct __CFString *)getReportingClientName;
- (int)getReportingClientType;
- (struct __CFDictionary *)getClientSpecificUserInfo:(id)arg1;
- (_Bool)isStandaloneStreamClientSpecificUserInfoSupported;
- (void)setupReportingAgent:(id)arg1;
- (void)setupPeriodicReporting;
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;
- (double)rtcpHeartbeatLeeway;
- (void)onSendRTCPPacket;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deregisterAggregationHandlers;
- (void)registerAggregationHandlers;
- (_Bool)shouldRegisterReportingPeriodicTask;
- (_Bool)shouldReportNetworkInterfaceType;
- (_Bool)shouldResetRTPTimestampOnStart;
- (void)updateRateAdaptationWithNetworkNotification:(struct ifnet_interface_advisory *)arg1;
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (int)getRTPTimeStampRateScaleFactor;
- (void)setPreferredMediaBitrateWithConfiguration:(id)arg1;
- (id)streamIDsFromTransport;
- (void)cleanupBeforeReconfigure:(id)arg1;
- (void)createReportSSRCListWithStreamConfigs:(id)arg1;
- (id)createTransportWithStreamConfig:(id)arg1;
- (_Bool)setupSourceTransport:(id)arg1;
- (_Bool)validateAudioStreamConfigurations:(id)arg1;
- (void)onCallIDChanged;
- (id)supportedPayloads;
- (_Bool)shouldUseNWConnectionBackingSocket;
@property(readonly, nonatomic) unsigned int actualAudioSendingBitrate;
- (void)setTargetBitrate:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;
- (void)setVCStatistics:(struct tagVCStatisticsMessage)arg1;
- (CDUnknownFunctionPointerType)pullSamplesCallback;
@property(readonly, nonatomic) void *realtimeSourceContext;
@property(nonatomic) float volume;
@property(nonatomic, getter=isRemoteMuted) _Bool remoteMuted;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_isMuted;
@property(nonatomic) _Bool sendActiveVoiceOnly;
- (void)setStreamDirection:(long long)arg1;
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
- (void)cleanupAudio;
- (void)prepareAudio;
- (void)setFrequencyMeteringEnabled:(_Bool)arg1 meterType:(int)arg2;
- (_Bool)isFrequencyMeteringEnabled:(int)arg1;
- (struct _METER_INFO *)meterWithType:(int)arg1;
- (void)stopSendDTMFEvent;
- (void)sendDTMFEvent:(id)arg1;
- (_Bool)bitrateIsAudioOnly;
- (_Bool)createAudioTransmitter:(long long)arg1 streamIDs:(id)arg2;
- (unsigned int)packetExpirationTimeForStreamConfig:(id)arg1 codecType:(long long)arg2;
- (_Bool)createAudioReceiver;
- (void)configureAudioJBAlgos:(struct tagVCAudioReceiverConfig *)arg1;
- (int)getPacketsPerBundleForStreamConfig:(id)arg1;
- (void)dealloc;
- (_Bool)setupAudioStreamWithClientPid:(int)arg1 enableAudioPowerSpectrum:(_Bool)arg2;
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2 transportSessionID:(unsigned int)arg3;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2;
- (id)initWithClientPid:(int)arg1;
- (void)setupAudioPowerSpectrum;
- (void)setDeviceRoleForAudioStreamMode:(long long)arg1 direction:(long long)arg2;
- (void)didEnterState:(int)arg1 oldState:(int)arg2;
- (void)willExitState:(int)arg1 newState:(int)arg2;
- (void)updateSyncSourceState:(int)arg1;
- (double)lastReceivedRTCPPacketTime;
- (double)lastReceivedRTPPacketTime;
- (_Bool)setReceiverPayloads;
- (void)setDTXPayload:(id)arg1;
- (id)addAudioPayload:(int)arg1;
- (id)configForPayloadType:(int)arg1;
- (unsigned int)preferredAudioBitrateForPayload:(int)arg1;
- (void)getCodecConfigForPayload:(int)arg1 block:(CDUnknownBlockType)arg2;
- (id)codecConfigForOpusWithStreamConfig:(id)arg1;
- (_Bool)setupPayloads;
- (id)getSupportedPayloads;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)generateRTCPXRVoIPMetricsReports:(struct tagVCRTCPXRVoIPMetricsReport *)arg1 reportCount:(char *)arg2;
- (_Bool)generateRTCPXRSummaryReports:(struct tagVCRTCPXRSummaryReport *)arg1 reportCount:(char *)arg2;
- (void)_computeInternalFormatForStreamConfigurations:(id)arg1;
- (unsigned int)internalSampleRateForCodecType:(long long)arg1;
- (unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg1 numSamples:(int)arg2 hostTime:(double)arg3;
- (void)rateAdaptation:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
- (void)telephonyInterface:(id)arg1 anbrRecommendation:(unsigned int)arg2 forDirection:(long long)arg3;
- (void)telephonyInterface:(id)arg1 anbrActivationUpdate:(_Bool)arg2;
- (void)handleANBR:(unsigned int)arg1 forDirection:(long long)arg2;
- (int)selectCodecBandwidthForCodecRateMode:(int)arg1;
- (void)handleDownlinkANBR:(struct _VCAudioCodecModeChangeEvent)arg1;
- (void)handleUplinkANBR:(struct _VCAudioCodecModeChangeEvent)arg1;
- (void)handleCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1;
- (void)notifyCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1 didUpdateBandwidth:(_Bool)arg2 didUpdateBitrate:(_Bool)arg3;
- (void)queryAnbrBitrate:(unsigned int)arg1 forDirection:(long long)arg2;
- (void)setRemoteCodecTypeAndSampleRate:(struct _VCAudioCodecModeChangeEvent)arg1;
- (void)notifyCodecModeChangeToCT:(struct _VCAudioCodecModeChangeEvent)arg1;
- (void)configureCellularFeatures;
- (_Bool)isVoLTERateAdaptationEnabled;
- (void)setJitterBufferMode:(int)arg1;
- (void)handleWiFiToCelluarHandover;
- (void)handleCellularToWiFiHandover;
- (void)setIsLocalCelluar:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

