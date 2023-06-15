//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCRateController, GKRingBuffer, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, TimingCollection, VCAudioPayload, VCAudioTransmitter, VCBitrateArbiter, VCCallInfo, VCCallLinkCongestionDetector, VCCapabilities, VCCaptionsReceiver, VCConnectionManager, VCControlChannel, VCControlChannelMultiWay, VCDisplayLink, VCImageAttributeRules, VCMediaNegotiator, VCRateControlMediaController, VCRedundancyControllerVideo, VCSecureDataChannel, VCSessionMessaging, VCSwitchManager, VCTransportSession, VCVideoRule, VCWCMClient, VideoAttributes, WRMClient;
@protocol OS_dispatch_queue, OS_dispatch_source, VCCallSessionDelegate, VCConnectionProtocol, VideoConferenceChannelQualityDelegate;

__attribute__((visibility("hidden")))
@interface VCCallSession : NSObject
{
    NSObject<VCCallSessionDelegate> *delegate;
    VCCallInfo *localCallInfo;
    VCCallInfo *remoteCallInfo;
    long long packetMultiplexMode;
    struct tagHANDLE *rtpHandle;
    struct tagHANDLE *rtpVideo;
    void *videoMediaControlInfoGenerator;
    void *audioMediaControlInfoGenerator;
    VCConnectionManager *connectionManager;
    long long connectionChangeState;
    id <VCConnectionProtocol> toBeChangedPrimaryConnection;
    VCMediaNegotiator *_mediaNegotiator;
    VCSwitchManager *_switchManager;
    NSObject<OS_dispatch_queue> *connectionChangeQueue;
    long long state;
    long long _sipState;
    NSMutableArray *negotiatedAudioPayloads;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    int _currentRedPayloadType;
    VCVideoRule *_currentEncodeRule;
    _Bool _isRedEnabled;
    long long videoPayload;
    long long screenPayload;
    long long sampleRate;
    struct tagHANDLE *hSIP;
    _Bool isAudioRunning;
    _Bool isWaitingForICEResult;
    _Bool didSend200OK;
    struct _opaque_pthread_mutex_t mutex;
    _Bool receivedSIPInvite;
    VCImageAttributeRules *imageAttributeRules;
    int iRemoteRTPPort;
    int iRemoteRTCPPort;
    VCCapabilities *caps;
    int _deviceRole;
    struct tagHANDLE *hMediaQueue;
    struct tagHANDLE *hAFRC;
    AVCRateController *_rateController;
    VCRateControlMediaController *_mediaController;
    GKRingBuffer *ringBuf;
    unsigned int lastReceived;
    int preferredAudioCodec;
    _Bool useSBR;
    _Bool useControlByte;
    _Bool useUEP;
    NSDictionary *_allPayloadsLocalFeaturesString;
    NSMutableDictionary *featureListStringDict;
    _Bool audioIsPaused;
    struct _opaque_pthread_mutex_t pauseLock;
    NSObject<OS_dispatch_queue> *videoQueue;
    NSObject<OS_dispatch_queue> *videoAsyncQueue;
    NSObject<OS_dispatch_queue> *audioQueue;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    NSArray *mutedPeers;
    int bandwidthUpstream;
    int bandwidthDownstream;
    _Bool allowAudioRecording;
    int aacBlockSize;
    _Bool _isUseCaseWatchContinuity;
    int carrierBitrateCap;
    struct tagVCAudioFrameFormat _vpioFormat;
    _Bool allowAudioSwitching;
    _Bool shouldUpdateLastReceivedPacketTimestamp;
    double lastReceivedPacketTimestamp;
    _Bool isRemoteMediaStalled;
    unsigned int _mediaStallCount;
    double _mediaStallTotalTime;
    double _maxMediaStallTime;
    double _lastMediaStallStartTime;
    double _lastDecodedFrameTime;
    _Bool _isRemoteMediaStalledShort;
    int packetsSinceStall;
    int packetsSinceShortMediaStall;
    int natType;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    TimingCollection *perfTimers;
    double packetLossRate;
    double timeLastCheckedNetworkConditions;
    double packetLossRateAccum;
    double packetLossRateCount;
    double packetLossRate5Secs;
    double timeLastPLR5Secs;
    double timeLastKnowGoodNetworkPLR;
    double timeLastKnowGoodNetworkRTT;
    double networkConditionsTimeoutInSeconds;
    NSString *peerCN;
    NSString *sessionID;
    double roundTripTime;
    int abnormalOWRDCount;
    float packetLateAndMissingRatio;
    int sampleLogCount;
    double timeSinceLastReportedNoPackets;
    double noRemotePacketsTimeout;
    double _remoteMediaStallTimeout;
    _Bool previousNoRemoteInProgress;
    _Bool didAttemptSIPInvite;
    NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
    struct _opaque_pthread_mutex_t qualityDelegateLock;
    NSObject<OS_dispatch_queue> *qualityQueue;
    _Bool shouldTimeoutPackets;
    struct _opaque_pthread_mutex_t srtpLock;
    _Bool didPrepareSRTP;
    _Bool useRateControl;
    _Bool useAFRC;
    _Bool useVCRC;
    _Bool isRTCPFBEnabled;
    VCCallLinkCongestionDetector *congestionDetector;
    _Bool shouldSendAudio;
    _Bool isGKVoiceChat;
    int _signalStrengthBars;
    int _signalStrengthDisplayBars;
    int _signalStrengthMaxDisplayBars;
    _Bool bBWEstOperatingModeInitialized;
    _Bool bBWEstNewBWEstModeEnabled;
    _Bool bBWEstFakeLargeFrameModeEnabled;
    _Bool bBWEstActiveProbingSenderLog;
    struct CGSize remoteScreenPortraitAspectRatio;
    struct CGSize remoteScreenLandscapeAspectRatio;
    struct CGSize remoteExpectedPortraitAspectRatio;
    struct CGSize remoteExpectedLandscapeAspectRatio;
    _Bool isStarted;
    NSData *srtpKeyBytes;
    _Bool isInitiator;
    _Bool sentClientSuccessfulDidStart;
    double videoThrottlingTimeout;
    unsigned int awdCallNonce;
    VCSessionMessaging *messaging;
    VCControlChannel *controlChannel;
    VCControlChannelMultiWay *secureControlChannel;
    _Bool isCurrentNetworkBad;
    unsigned int callSessionBitrate;
    NSObject<OS_dispatch_queue> *cellTechQueue;
    NSObject<OS_dispatch_source> *cellTechChangeSource;
    VCBitrateArbiter *callSessionBitrateArbiter;
    NSObject<OS_dispatch_source> *connectionTimeoutSource;
    NSObject<OS_dispatch_source> *firstRemoteFrameTimemoutSource;
    unsigned short maxPacketLength;
    long long initialSentBytes;
    long long initialReceivedBytes;
    struct tagVCAudioReceiver *audioReceiver;
    VCAudioTransmitter *audioTransmitter;
    VCCaptionsReceiver *_captionsReceiver;
    struct tagHANDLE *hVideoReceiver;
    struct tagHANDLE *hVideoTransmitter;
    VCDisplayLink *_displayLink;
    VCRedundancyControllerVideo *_videoRedundancyController;
    _Bool remoteSupportsVisibleRect;
    _Bool remoteSupportsExpectedAspectRatio;
    _Bool canLocalResizePIP;
    _Bool canRemoteResizePIP;
    _Bool receivedFirstRemoteFrame;
    int fecMode;
    NSObject<OS_dispatch_source> *sessionHealthMonitor;
    VideoAttributes *remoteVideoAttributes;
    double lastVideoQualityNotificationUpdate;
    double lastVideoCallAlarmTime;
    unsigned int remoteFrameWidth;
    unsigned int remoteFrameHeight;
    VCWCMClient *vcWCMClient;
    WRMClient *vcWRMClient;
    _Bool iRATSuggestionEnabled;
    struct OpaqueVTPixelTransferSession *hdTransferSession;
    struct __CVPixelBufferPool *hdBufferPool;
    struct CGSize expectedDecodeSize;
    struct opaqueRTCReporting *reportingAgent;
    int reportingModuleID;
    _Bool didReportNoRemotePackets;
    _Bool didReportLongConnectionTime;
    _Bool didReportAudioStall;
    _Bool enableRateControlDump;
    unsigned int _targetBitrate;
    unsigned int _rateChangeCounter;
    unsigned int awdTime;
    int operatingMode;
    struct SKEStateOpaque *skeState;
    struct __CFData *secretKey;
    VCSecureDataChannel *secureDataChannel;
    NSString *basebandCodecType;
    NSNumber *basebandCodecSampleRate;
    unsigned int dwRTT_ice;
    NSObject<OS_dispatch_queue> *timestampQueue;
    _Bool shouldSendBlackFrame;
    unsigned int _peerProtocolVersion;
    struct tagWRMMetricsInfo *wrmInfo;
    _Bool _shouldReportWRMMetrics;
    _Bool _inviteDataRequested;
    unsigned int _transportType;
    VCTransportSession *_transportSession;
    _Bool _cleanupDone;
    _Bool _isLocalCellular_LowestConnectionQuality;
    _Bool _isRemoteCellular_LowestConnectionQuality;
    _Bool _isConnectedOnIPv6_LowestConnectionQuality;
    void *_callLogFile;
    NSString *peerReportingID;
    _Bool _isWRMNotificationPending;
    CDStruct_cd8cfafa _savedWRMNotification;
    double _initTime;
}

+ (id)keyPathsForValuesAffectingNetworkQuality;
+ (void)stopSecureControlChannel:(id)arg1;
+ (id)getDecodePayloadTypes:(int)arg1 secondaryPayloadTypes:(id)arg2;
+ (int)setRxPayloadList:(struct tagHANDLE *)arg1 withPayloadTypes:(id)arg2 isRedEnabled:(_Bool)arg3;
+ (int)setRxPayloadList:(struct tagHANDLE *)arg1 withPayloadTypes:(id)arg2;
@property(retain) NSData *srtpKeyBytes; // @synthesize srtpKeyBytes;
@property double lastDecodedFrameTime; // @synthesize lastDecodedFrameTime=_lastDecodedFrameTime;
@property(copy, nonatomic) NSString *peerReportingID; // @synthesize peerReportingID;
@property(readonly) VCCallInfo *localCallInfo; // @synthesize localCallInfo;
@property _Bool didSend200OK; // @synthesize didSend200OK;
@property long long sipState; // @synthesize sipState=_sipState;
@property int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(copy, nonatomic) NSString *basebandCodecType; // @synthesize basebandCodecType;
@property(retain, nonatomic) NSNumber *basebandCodecSampleRate; // @synthesize basebandCodecSampleRate;
@property(readonly) _Bool isRemoteMediaStalled; // @synthesize isRemoteMediaStalled;
@property(nonatomic) int operatingMode; // @synthesize operatingMode;
@property unsigned int remoteFrameHeight; // @synthesize remoteFrameHeight;
@property unsigned int remoteFrameWidth; // @synthesize remoteFrameWidth;
@property(readonly) struct tagVCAudioReceiver *audioReceiver; // @synthesize audioReceiver;
@property(retain, nonatomic) VideoAttributes *remoteVideoAttributes; // @synthesize remoteVideoAttributes;
@property(retain, nonatomic) VCImageAttributeRules *imageAttributeRules; // @synthesize imageAttributeRules;
@property(nonatomic) _Bool isStarted; // @synthesize isStarted;
@property(nonatomic) _Bool shouldSendAudio; // @synthesize shouldSendAudio;
@property(nonatomic) _Bool isRTCPFBEnabled; // @synthesize isRTCPFBEnabled;
@property(nonatomic) _Bool useRateControl; // @synthesize useRateControl;
@property _Bool shouldTimeoutPackets; // @synthesize shouldTimeoutPackets;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID;
@property(nonatomic) float packetLateAndMissingRatio; // @synthesize packetLateAndMissingRatio;
@property(nonatomic) int signalStrengthMaxDisplayBars; // @synthesize signalStrengthMaxDisplayBars=_signalStrengthMaxDisplayBars;
@property(nonatomic) int signalStrengthDisplayBars; // @synthesize signalStrengthDisplayBars=_signalStrengthDisplayBars;
@property(nonatomic) int signalStrengthBars; // @synthesize signalStrengthBars=_signalStrengthBars;
@property(nonatomic) double roundTripTime; // @synthesize roundTripTime;
@property(nonatomic) double networkConditionsTimeoutInSeconds; // @synthesize networkConditionsTimeoutInSeconds;
@property(nonatomic) double packetLossRate5Secs; // @synthesize packetLossRate5Secs;
@property(nonatomic) double packetLossRate; // @synthesize packetLossRate;
@property(copy, nonatomic) NSString *peerCN; // @synthesize peerCN;
@property(nonatomic) int natType; // @synthesize natType;
@property(readonly) _Bool audioIsPaused; // @synthesize audioIsPaused;
@property(retain, nonatomic) NSArray *mutedPeers; // @synthesize mutedPeers;
@property int bandwidthDownstream; // @synthesize bandwidthDownstream;
@property int bandwidthUpstream; // @synthesize bandwidthUpstream;
@property _Bool useUEP; // @synthesize useUEP;
@property _Bool useControlByte; // @synthesize useControlByte;
@property int preferredAudioCodec; // @synthesize preferredAudioCodec;
@property unsigned int lastReceived; // @synthesize lastReceived;
@property(retain, nonatomic) GKRingBuffer *ringBuf; // @synthesize ringBuf;
@property struct tagHANDLE *hAFRC; // @synthesize hAFRC;
@property struct tagHANDLE *hMediaQueue; // @synthesize hMediaQueue;
@property _Bool receivedSIPInvite; // @synthesize receivedSIPInvite;
@property _Bool isWaitingForICEResult; // @synthesize isWaitingForICEResult;
@property(readonly) _Bool isAudioRunning; // @synthesize isAudioRunning;
@property(retain) NSObject<VCCallSessionDelegate> *delegate; // @synthesize delegate;
@property long long sampleRate; // @synthesize sampleRate;
@property long long videoPayload; // @synthesize videoPayload;
@property long long state; // @synthesize state;
@property unsigned short maxPacketLength; // @synthesize maxPacketLength;
@property(retain) VCConnectionManager *connectionManager; // @synthesize connectionManager;
@property long long connectionChangeState; // @synthesize connectionChangeState;
@property struct tagHANDLE *rtpHandle; // @synthesize rtpHandle;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)setupSecureDataChannel;
- (void)handleKeyExchangeCompleted;
- (void)updateCachedConnectionState;
- (void)handleFirstConnectionSetup:(id)arg1;
- (void)handleNewConnectionSetup:(id)arg1 isInitialConnection:(_Bool)arg2;
- (void)notifyDelegateActiveConnectionDidChange;
- (void)handlePrimaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)triggerInterfaceChange;
@property(readonly) _Bool isVideoRunning;
- (void)reportingMomentsWithRequest:(id)arg1;
- (void)reportSymptom:(unsigned int)arg1;
- (void)messageVCMomentsRequest:(id)arg1;
- (void)setPeerProtocolVersion:(unsigned int)arg1;
- (void)setSessionConferenceVisualRectangle:(struct CGRect)arg1 callID:(unsigned int)arg2;
- (void)setSessionConferenceState:(unsigned int)arg1 callID:(unsigned int)arg2;
- (unsigned int)currentAudioCap;
@property(readonly, nonatomic) NSDictionary *dtxMetrics;
@property(readonly, nonatomic) int audioTierPayload;
@property(readonly, nonatomic) int audioTierRedNumPayloads;
@property(readonly, nonatomic) int audioTierPacketsPerBundle;
@property(readonly, nonatomic) int audioTierAudioCodecBitrate;
@property(readonly, nonatomic) int audioTierNetworkBitrate;
@property(readonly, nonatomic) struct opaqueRTCReporting *reportingAgent;
@property(retain) VCCapabilities *capabilities;
- (unsigned int)primaryConnectionType;
@property(readonly) _Bool isSKEOptimizationEnabled;
- (_Bool)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1 rtpTimestamp:(unsigned int *)arg2 lastReceivedAudioTime:(double *)arg3 padding:(char *)arg4 paddingLength:(char *)arg5 silence:(int *)arg6;
- (id)callMetadata;
- (int)negotiatedReceivingFramerate;
- (id)localParticipantID;
- (id)remoteParticipantID;
- (void)sendData:(id)arg1 messageType:(unsigned int)arg2 encrypted:(_Bool)arg3;
- (void)sendARPLData:(id)arg1 toCallID:(unsigned int)arg2;
- (void)rcvdFirstRemoteFrame;
- (void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(_Bool)arg2;
- (void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(_Bool)arg2;
- (void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(_Bool)arg2;
- (_Bool)stillWantsToRelay;
- (_Bool)setPauseVideo:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setPauseVideo:(_Bool)arg1 force:(_Bool)arg2 error:(id *)arg3;
- (void)setResumeVideo;
- (void)setSuspendVideo;
- (_Bool)setPauseAudio:(_Bool)arg1 error:(id *)arg2;
- (_Bool)setPauseAudio:(_Bool)arg1 force:(_Bool)arg2 error:(id *)arg3;
- (void)setResumeAudio;
- (void)setSuspendAudio;
- (_Bool)isCallOngoing;
- (void)processRemoteIPChange:(id)arg1 callID:(unsigned int)arg2;
@property _Bool isGKVoiceChat;
@property(readonly) unsigned int lastSentAudioSampleTime;
@property unsigned char inputMeter;
@property(readonly) int bundledPackets;
@property(readonly) int numBufferBytesAvailable;
@property int packetsPerBundle;
- (void)setRemoteCallInfoFromInviteDictionary:(id)arg1;
- (void)addLocalCallInfoToInviteDictionary:(id)arg1;
- (id)inviteDataForParticipantID:(id)arg1 callID:(unsigned int *)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id *)arg5;
- (_Bool)isLowBitrateCodecPreferred:(id)arg1;
- (void)reportOperatingMode;
- (id)newMediaBlobWithRemoteMediaBlob:(id)arg1 localCallID:(unsigned int)arg2 isLowBitrateCodecPreferred:(_Bool)arg3;
- (id)newMediaNegotiatorAudioConfigurationWithAllowAudioSwitching:(_Bool)arg1 useSBR:(_Bool)arg2 aacBlockSize:(unsigned int)arg3;
- (_Bool)cancel:(id)arg1;
- (_Bool)disconnect:(id)arg1 didRemoteCancel:(_Bool)arg2;
- (void)requestWRMNotification;
- (void)sendWRMStatusUpdate:(const CDStruct_8aeecdac *)arg1;
- (void)setPreWarmState:(_Bool)arg1;
- (void)setWRMCoexMetrics:(id)arg1;
- (void)setWRMNotification:(CDStruct_cd8cfafa *)arg1;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)reportImmediateWRMMetric:(int)arg1 value:(unsigned long long)arg2;
- (void)reportWRMMetrics:(const CDStruct_dea828ac *)arg1;
- (void)cleanupWRMClient;
- (void)setupWRMClient;
- (void)setupABTesting;
- (void)applyNegotiatedFaceTimeSettings;
- (void)handleReceivedPiggybackBlobLegacy:(id)arg1;
- (void)handleReceivedPiggybackBlobIDS:(id)arg1;
- (_Bool)startConnectionWithParticipantID:(id)arg1 callID:(unsigned int)arg2 usingInviteData:(id)arg3 isCaller:(_Bool)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 destination:(id)arg7 error:(id *)arg8;
@property(readonly, nonatomic) _Bool isCaller;
- (void)updateVCRateControlWRMMetrics:(struct tagWRMMetricsInfo *)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (_Bool)isLocalOrRemoteOnCellular;
- (void)cancelFirstRemoteFrameTimer;
- (void)setUpFirstRemoteFrameTimer;
- (void)setupConnectionTimeoutTimerWithErrorCode:(int)arg1 detailedCode:(int)arg2 description:(id)arg3 reason:(id)arg4;
- (void)cancelConnectionTimeoutTimer;
- (void)timeoutUnfinishedConnection;
- (id)activeControlChannel;
- (unsigned char)defaultMediaControlInfoFECFeedbackVersion;
- (_Bool)isFECGeneratorEnabled;
- (unsigned char)mediaControlInfoFECFeedbackVersion;
- (_Bool)isSecureMessagingRequired;
- (_Bool)isSIPEnabled;
- (void)dealloc;
- (void)updateLastReceivedPacket:(_Bool)arg1 packetType:(int)arg2;
- (void)updateLastReceivedAudioTime;
- (void)checkAbnormalOWRDAndResetLagReference;
- (void)updateLastReceivedPacketWithTimestamp:(double)arg1 packetType:(int)arg2;
- (void)updateRemoteMediaStallStateReporting:(double)arg1;
- (void)updateRemoteMediaStallState:(double)arg1;
@property(readonly) double networkQuality;
- (int)getAudioTxBitrate;
@property NSObject<VideoConferenceChannelQualityDelegate> *qualityDelegate;
- (void)primaryConnectionDidChangeTo:(id)arg1 oldConnection:(id)arg2;
- (void)handlePendingPrimaryConnectionChange;
- (void)schedulePrimaryConnectionChange:(id)arg1 oldConnection:(id)arg2;
- (void)resetVideoRulesForInterface:(int)arg1 videoReportingDictionary:(id)arg2;
- (void)setCurrentEncodeRule:(id)arg1;
- (id)getVideoRuleForVideoMode:(unsigned long long)arg1 interface:(int)arg2 sessionBitrate:(int *)arg3;
- (_Bool)chooseVideoPayloadForInterface:(int)arg1;
- (int)applyFeatureListStringForPayload:(int)arg1;
- (id)getFeatureListStringForPayload:(int)arg1;
- (void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned int)arg2;
- (void)thermalLevelDidChange:(int)arg1;
- (void)handleCellularMTUChanged:(unsigned short)arg1;
- (void)handleCellTechChange:(int)arg1;
- (void)reportHandoverResultsWithDictionary:(id)arg1 localBitrateCap:(int)arg2 remoteBitrateCap:(int)arg3;
- (void)updateMaxPktLength;
- (_Bool)evaluateEnableRRx:(int *)arg1;
- (_Bool)isBetterForSIPInviteWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 thanSession:(id)arg2;
- (void)updateVideoQualityStatusWithTime:(double)arg1 isRemote:(_Bool)arg2;
@property(readonly) _Bool videoIsPaused;
- (void)startAWDStats;
- (void)configureRateController;
- (unsigned int)callID;
@property(nonatomic) _Bool useCompressedConnectionData;
@property(nonatomic) _Bool requiresWifi;
@property(readonly) _Bool isCurrentPayloadTypeValid;
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;
- (id)initWithDeviceRole:(int)arg1 transportType:(unsigned int)arg2 isGKVoiceChat:(_Bool)arg3 reportingHierarchyToken:(id)arg4;
- (id)init;
@property(readonly, copy) NSString *description;
- (void)vcSecureDataChannel:(id)arg1 messageType:(unsigned int)arg2 receivedData:(id)arg3;
- (void)wcmGetCallConfig:(unsigned int *)arg1 targetBitrate:(unsigned int *)arg2;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;
- (void)didReceiveCaptions:(id)arg1;
- (int)sipCallback:(int)arg1 callID:(unsigned int)arg2 msgIn:(const char *)arg3 msgOut:(char *)arg4 optional:(void *)arg5 confIndex:(int *)arg6;
- (_Bool)disconnectInternal:(_Bool)arg1 disconnectError:(id)arg2 didRemoteCancel:(_Bool)arg3;
- (int)mapPacketMultiplexModeToSIPMode:(long long)arg1;
- (int)mapPacketMultiplexModeToRTPMode:(long long)arg1;
- (void)handleDuplicationEnabled:(_Bool)arg1 activeConnection:(id)arg2;
- (void)setDuplicationFlag:(_Bool)arg1 withPreferredLocalLinkTypeForDuplication:(int)arg2 notifyPeer:(_Bool)arg3;
- (void)sendSymptomToRemote:(id)arg1 groupID:(id)arg2;
- (void)shouldSendBlackFrame:(_Bool)arg1;
- (void)sendBasebandCodecMessage;
- (void)disableSessionHealthMonitor;
- (double)audioTransmittingBitrateKbps;
- (double)audioReceivingBitrateKbps;
- (void)enableSessionHealthMonitor;
- (void)logConnectionSuccess;
- (unsigned int)maxBitrateForConnectionType;
- (void)adjustBitrateForConnectionType;
- (void)setupBitrateNegotiation;
- (const char *)matchedFeaturesStringForPayload:(int)arg1;
- (_Bool)setMatchedFeaturesString:(char *)arg1 localFeaturesString:(id)arg2 remoteFeaturesString:(id)arg3;
- (id)allPayloadsLocalFeaturesString;
- (id)pickFeaturesStringForPayload:(int)arg1 featureListDict:(id)arg2 remote:(_Bool)arg3;
- (void)logIdentity:(struct __SecIdentity *)arg1;
- (void)setLocalIdentityForKeyExchange;
- (int)Conference_SetBWEstMode:(_Bool)arg1 bFakeLargeFrameMode:(_Bool)arg2;
- (void)notifyDelegateSessionStarted;
- (void)doSipEndAction:(int)arg1 callID:(unsigned int)arg2 error:(id)arg3;
- (void)disconnectWithNoRemotePackets:(long long)arg1 timeoutUsed:(double)arg2;
- (void)disconnectWithNoRemotePackets:(long long)arg1;
- (void)doSipEndProc:(id)arg1;
- (unsigned int)videoRTPID;
- (unsigned int)audioRTPID;
- (_Bool)shouldNotifyDelegateDidStartBeforeAudioSetup;
- (void)sipConnectThreadProc:(id)arg1;
- (void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg1 withReason:(const char *)arg2;
- (_Bool)chooseDTXPayloads:(id)arg1;
- (_Bool)chooseSecondaryPayloads:(id)arg1;
- (_Bool)choosePayload:(id)arg1;
- (unsigned int)codecBitmapForPayloads:(id)arg1;
- (_Bool)setupAudioCodecWithPayload:(int)arg1;
- (id)negotiatedAudioPayloadTypes;
- (id)addAudioPayload:(int)arg1;
- (id)newConfigForPayloadType:(int)arg1;
- (void)setupAACELDPayload:(int)arg1;
- (_Bool)stopRateControl:(id *)arg1;
- (_Bool)startRateControl:(id *)arg1;
- (_Bool)startVCRC:(id *)arg1;
- (_Bool)startAFRC:(id *)arg1;
- (id)vcrcServerBag;
- (unsigned int)vcrcServerBagProfileNumber;
- (_Bool)stopMediaQueue:(id *)arg1;
- (_Bool)startMediaQueue:(id *)arg1;
- (_Bool)getVideoSettings:(int)arg1 forInterface:(int)arg2 payload:(int)arg3 width:(int *)arg4 height:(int *)arg5 framerate:(int *)arg6 bitRate:(int *)arg7;
- (_Bool)stopVideo:(_Bool)arg1 error:(id *)arg2;
- (_Bool)stopVideoReceive:(id *)arg1 isPausing:(_Bool)arg2;
- (_Bool)stopVideoSend:(_Bool)arg1 error:(id *)arg2;
- (_Bool)startVideo:(_Bool)arg1 error:(id *)arg2;
- (_Bool)startVideoReceive:(id *)arg1;
- (_Bool)startVideoSend:(_Bool)arg1 error:(id *)arg2;
- (int)interfaceForCurrentCall;
- (_Bool)setupAudioCookies;
- (void)sendCallingModeMessage;
- (void)updateDeviceRole:(int)arg1;
- (void)enableAudio:(_Bool)arg1;
- (void)startAudioIOWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopAudioIO:(CDUnknownBlockType)arg1;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)sipConnectWithError:(id *)arg1;
- (_Bool)setupCallerRTPChannelWithError:(id *)arg1;
- (_Bool)setMediaQueueStreamSettings;
- (_Bool)setRTPPayloads:(id)arg1 withError:(id *)arg2;
- (id)getCompatibleLocalFeatureListForPayloads:(int *)arg1 count:(int)arg2;
- (int)getAllCompatibleVideoPayloads:(int **)arg1 forMediaType:(int)arg2;
- (_Bool)doesVideoPayloadMatchRemoteImageAttributeRules:(id)arg1;
- (_Bool)isValidVideoPayloadOverride:(id)arg1;
- (_Bool)chooseVideoPayload:(id)arg1 operatingMode:(int)arg2 isLocalOnCellular:(_Bool)arg3 isRemoteOnCellular:(_Bool)arg4;
- (_Bool)canNegotiateVideoPayload:(int)arg1 supportedPayloads:(id)arg2 isLocalOnCellular:(_Bool)arg3 isRemoteOnCellular:(_Bool)arg4;
- (_Bool)negotiateMaxBandwidth:(int *)arg1;
- (_Bool)negotiatePayloads:(id *)arg1 withError:(id *)arg2;
- (void)negotiateFeaturesString:(id)arg1 forPayload:(int)arg2;
- (_Bool)createMediaQueueHandle:(id *)arg1;
- (_Bool)prepareSRTPWithError:(id *)arg1;
- (void)releaseRTPHandles;
- (_Bool)createRTPHandles:(id *)arg1;
- (_Bool)createAudioTransmitter:(id *)arg1;
- (int)processMediaControlInfo:(void *)arg1 isAudio:(_Bool)arg2;
- (int)fillMediaControlInfo:(void *)arg1;
- (_Bool)treatAsCellular;
- (_Bool)sendSIPInviteWithError:(id *)arg1;
- (_Bool)establishSIPDialogWithSDP:(id)arg1 error:(id *)arg2;
- (id)createInviteSDPWithError:(id *)arg1;
- (_Bool)canSendSIPInviteWithError:(id *)arg1;
- (void)getAllPayloadsForScreen:(int **)arg1 count:(int *)arg2;
- (void)getAllPayloadsForVideo:(int **)arg1 count:(int *)arg2;
- (void)getAllPayloadsForAudio:(int **)arg1 count:(int *)arg2 secondaryPayloads:(int **)arg3 secondaryCount:(int *)arg4;
- (int)handleIncomingWithCallID:(unsigned int)arg1 msgIn:(const char *)arg2 msgOut:(char *)arg3 optional:(void *)arg4 confIndex:(int *)arg5 error:(id *)arg6;
- (_Bool)startMediaWithPreNegotiatedSettings:(id *)arg1;
- (void)applyNegotiatedMediaRecorderSettings;
- (void)applyNegotiatedCaptionsSettings;
- (_Bool)applyNegotiatedVideoSettings:(id *)arg1;
- (_Bool)applyNegotiatedAudioSettings:(id *)arg1;
- (void)applyNegotiatedSettings;
- (void)negotiateMediaMaxBandwidth;
- (_Bool)createSDP:(int *)arg1 audioPayloadCount:(int)arg2 secondaryPayloadTypes:(int *)arg3 secondaryPayloadCount:(int)arg4 videoPayloadTypes:(int *)arg5 videoPayloadCount:(int)arg6 localFeatureList:(id)arg7 answerBandwidth:(int)arg8 maxBandwidth:(int)arg9 imageSizesSend:(struct imageTag **)arg10 imageSendCount:(int *)arg11 imageSizesRecv:(struct imageTag **)arg12 imageRecvCount:(int *)arg13 sdp:(char *)arg14 numSDPBytes:(int *)arg15 error:(id *)arg16;
- (void)addScreenConfigToSDP:(id)arg1;
- (void)setupCalleeSIPStartTimeout:(float)arg1;
- (void)resetState;
- (void)unlock;
- (void)lock;
- (void)processSIPMessage:(char *)arg1 msgOut:(char *)arg2 optional:(void *)arg3 confIndex:(int *)arg4;
- (void)remotePauseDidChangeToState:(_Bool)arg1 forVideo:(_Bool)arg2;
- (void)sendTimings;
- (void)logPerfTimings;
- (void)stopPausedHeartbeat;
- (void)startPausedHeartbeat;
- (void)cleanupMedia;
- (void)reportDashboardEndResult:(_Bool)arg1;
- (long long)calculateSIPEndAction:(_Bool)arg1 currentState:(long long)arg2 error:(id)arg3;
- (void)notifyDelegateAndEndCall:(long long)arg1 didRemoteCancel:(_Bool)arg2 error:(id)arg3;
- (struct __SecIdentity *)retrieveIdentity;
- (void)setupPeerInfo:(id)arg1 usingInviteData:(id)arg2 isCaller:(_Bool)arg3 capabilities:(id)arg4;
- (void)setupDTLSDefaults;
- (void)logDetailedNetworkInformation;
- (void)updateNetworkCheckHint:(double)arg1;
- (void)initWithRelevantStorebagEntries;
- (int)setupEncryptionWithKey:(const struct __CFData **)arg1 confIndex:(int *)arg2;
- (id)newSKEBlobWithRemoteSKEBlob:(id)arg1;
- (_Bool)configureLegacyTransportWithInviteInfo:(id)arg1 error:(id *)arg2;
- (int)setSKEBlobOnTransportSession;
- (_Bool)setupIDSConnectionForCallID:(unsigned int)arg1 destination:(id)arg2 socket:(int)arg3 error:(id *)arg4;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)arg1;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)arg1;
- (int)flushBasebandQueueWithPayloads:(id)arg1 flushCount:(unsigned int *)arg2;
- (void)controlChannel:(id)arg1 receivedData:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;
- (void)setupWRMCoexMetricsMessage;
- (void)setupWRMAlertStateUpdateMessage;
- (void)setupSymptomEnabledMessage;
- (void)processSymptomFromMessage:(id)arg1 participantID:(id)arg2 isLocalInitiated:(_Bool)arg3 isLocalSideOnly:(_Bool)arg4;
- (void)setupPreferredInterfaceMessage;
- (void)setupMomentsMessages;
- (void)setupCellTechChangeMessages;
- (void)setupPiPStateChangeMessage;
- (void)setupHandoverCandidateChangeMessage;
- (void)setupDisconnectMessage;
- (void)setupBasebandCodecInfoMessages;
- (void)setupCallingModeMessages;
- (void)setupAudioOnOffStateMessages;
- (void)setupAudioPausedHBMessages;
- (void)setupVideoPauseMessages;
- (void)setupAudioPauseMessages;
- (void)setupMessaging;
- (void)transportSession:(id)arg1 sendRelayResponse:(id)arg2;
- (void)transportSession:(id)arg1 initiateRelayRequest:(id)arg2;
- (void)transportSession:(id)arg1 cancelRelayRequest:(id)arg2;
- (void)transportSession:(id)arg1 connectionSetupDataDidChange:(id)arg2;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (void)rateController:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;
- (void)mediaController:(void *)arg1 mediaSuggestionDidChange:(struct VCRateControlMediaSuggestion)arg2;
- (void)packMeters:(char *)arg1 withLength:(char *)arg2;
- (void)updateStatistics:(struct tagVCStatisticsMessage)arg1;
- (void)callAlarmsWithRTPTimeStamp:(CDStruct_1b6d18a9 *)arg1;
- (void)processResolutionChangeToVideoRule:(id)arg1 captureRule:(id)arg2 featureListString:(id)arg3;
- (id)newRemoteScreenAttributesForOrientation:(int)arg1;
- (void)updateVideoQualityNotification:(double)arg1;
- (double)sessionReceivingBitrate;
- (double)sessionReceivingFramerate;
- (double)sessionTransmittingBitrate;
- (double)sessionTransmittingFramerate;
- (_Bool)initializeVideoReceiver:(id *)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2 fecHeaderV1Enabled:(_Bool)arg3 videoJBEnabled:(_Bool)arg4;
- (_Bool)initializeVideoTransmitter:(id *)arg1 videoRules:(struct VCCSVideoTransmitterVideoRules_t *)arg2 unpausing:(_Bool)arg3 reportingAgent:(struct opaqueRTCReporting *)arg4 fecHeaderV1Enabled:(_Bool)arg5 isFECGeneratorEnabled:(_Bool)arg6;
- (void)cleanUpDisplayLink;
- (void)cleanUpVideoTransmitter;
- (void)cleanUpVideoReceiver;
- (void)cleanUpVideoRTP;
- (struct CGSize)computeVisibleAspectRatioWithRemoteScreenAspectRatio:(struct CGSize)arg1 remoteExpectedAspectRatio:(struct CGSize)arg2 encodeWidth:(int)arg3 encodeHeight:(int)arg4;
- (unsigned int)parameterSetForPayload:(int)arg1;
- (void)nofityDelegateReceivedRemoteFrame:(struct __CVBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3 newRemoteVideoAttributes:(id)arg4 remoteScreenAttributes:(id)arg5;
- (void)onPlayVideo:(struct __CVBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 cameraStatusBits:(unsigned char)arg3;
- (_Bool)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 audioTS:(unsigned int)arg2 audioHT:(double)arg3 videoHT:(CDStruct_1b6d18a9)arg4 cameraBits:(unsigned char)arg5;
- (void)processBlackFrame:(struct opaqueCMSampleBuffer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

