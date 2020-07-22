//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCAudioIODelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioIOSource-Protocol.h>
#import <AVConference/VCMediaStreamSyncSource-Protocol.h>
#import <AVConference/WRMClientDelegate-Protocol.h>

@class AVCStatisticsCollector, DTMFEventHandler, NSMutableArray, NSObject, NSString, VCAudioIO, VCAudioPayload, VCAudioTransmitter, WRMClient;
@protocol OS_dispatch_source, VCMediaStreamSyncSourceDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioStream <WRMClientDelegate, VCMediaStreamSyncSource, VCAudioIOSource, VCAudioIOSink, VCAudioIODelegate>
{
    int _clientPid;
    int numBufferBytesAvailable;
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;
    double dAudioHostTime;
    _Bool lastVoiceActive;
    unsigned int conferenceID;
    unsigned int lastInputAudioTimeStamp;
    unsigned int lastSentAudioSampleTime;
    unsigned int packetTimeoutCheckCounter;
    unsigned int awdTime;
    long long sampleRate;
    long long samplesPerFrame;
    struct _opaque_pthread_rwlock_t stateLock;
    NSMutableArray *audioPayloads;
    struct AudioStreamBasicDescription vpioFormat;
    int preferredAudioCodec;
    DTMFEventHandler *dtmfEventHandler;
    WRMClient *wrmClient;
    VCAudioPayload *currentAudioPayload;
    VCAudioPayload *currentDTXPayload;
    struct tagVCAudioReceiver *_audioReceiver;
    VCAudioTransmitter *_audioTransmitter;
    AVCStatisticsCollector *_statisticsCollector;
    struct opaqueRTCReporting *reportingAgent;
    struct _METER_INFO soundMeter[2];
    _Bool isValid;
    int deviceRole;
    int operatingMode;
    void *_audioMediaControlInfoGenerator;
    id syncSourceDelegate;
    struct tagWRMMetricsInfo wrmInfo;
    VCAudioIO *_audioIO;
    _Bool _isMuted;
    _Bool _isRemoteMuted;
}

+ (id)capabilities;
+ (id)supportedAudioPayloads;
+ (unsigned char)audioIODirectionWithMediaStreamDirection:(long long)arg1;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic, getter=isRemoteMuted) _Bool remoteMuted; // @synthesize remoteMuted=_isRemoteMuted;
@property(retain) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(retain) VCAudioTransmitter *audioTransmitter; // @synthesize audioTransmitter=_audioTransmitter;
@property(nonatomic) int operatingMode; // @synthesize operatingMode;
@property(nonatomic) int deviceRole; // @synthesize deviceRole;
@property(nonatomic) _Bool isValid; // @synthesize isValid;
@property(readonly) unsigned int conferenceID; // @synthesize conferenceID;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)handleCodecRateModeChange:(int)arg1 payload:(int)arg2;
- (void)unregisterCodecRateModeChangeNotifications;
- (void)registerCodecRateModeChangeNotifications;
- (long long)getSyncSourceSampleRate;
@property(nonatomic) NSObject<VCMediaStreamSyncSourceDelegate> *syncSourceDelegate; // @synthesize syncSourceDelegate;
- (void)setWRMNotification:(CDStruct_d2860d30 *)arg1;
- (void)setWRMMetricConfig:(CDStruct_69d7cc99 *)arg1;
- (void)reportWRMMetrics:(const CDStruct_0db8e210 *)arg1;
- (void)stopWRM;
- (void)startWRM;
- (void)uninitializeWRM;
- (void)initializeWRM;
- (void)setCanProcessAudio:(_Bool)arg1;
- (_Bool)canProcessAudio;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)reportingAudioStreamEvent:(unsigned short)arg1;
- (void)onRtcpEnabledChanged;
- (void)onRtcpSendIntervalChanged;
- (void)onResume;
- (void)onPause;
- (void)onStop;
- (void)onStart;
- (id)getReportingServiceID;
- (id)getReportingClientName;
- (int)getReportingClientType;
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onCallIDChanged;
- (id)supportedPayloads;
- (void)setStreamDirection:(long long)arg1;
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_isMuted;
- (void)cleanupAudio;
- (void)prepareAudio;
- (void)updateSoundMeter:(int)arg1 sampleBuffer:(struct opaqueVCAudioBufferList *)arg2;
- (void)setFrequencyMeteringEnabled:(_Bool)arg1 meterType:(int)arg2;
- (_Bool)isFrequencyMeteringEnabled:(int)arg1;
- (void)setupRTPPayloads;
- (void)stopSendDTMFEvent;
- (void)sendDTMFEvent:(id)arg1;
- (_Bool)setAudioStreamConfig:(id)arg1 error:(id *)arg2;
- (_Bool)createAudioTransmitter:(long long)arg1;
- (_Bool)createAudioReceiver;
- (int)bundlingSchemeForOperatingMode:(int)arg1 payloadType:(int)arg2;
- (int)getPacketsPerBundle;
- (void)dealloc;
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2;
- (id)initWithClientPid:(int)arg1;
- (int)operatingModeForAudioStreamMode:(long long)arg1;
- (void)restartPausedHeartbeat;
- (void)stopPausedHeartbeat;
- (void)startPausedHeartbeat;
- (void)stateEnter;
- (void)stateExit;
- (void)setState:(int)arg1;
- (void)checkPacketTimeouts;
- (void)reportRTCPPackets:(struct _RTCPPacketList *)arg1;
- (_Bool)setMediaQueueStreamSettings;
- (_Bool)setReceiverPayloads:(id)arg1;
- (void)setDTXPayload:(id)arg1;
- (id)addAudioPayload:(int)arg1;
- (id)configForPayloadType:(int)arg1;
- (_Bool)setupAudioCodecWithPayload:(int)arg1;
- (unsigned int)preferredAudioBitrateForPayload:(int)arg1;
- (_Bool)choosePayload:(int *)arg1 count:(int)arg2;
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned int)codecTypeFromAudioPayload:(int)arg1;
- (void)pullDecodedMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)generateWRMReport;
- (int)captureMeshMode:(struct opaqueVCAudioBufferList *)arg1;
- (void)setInputTimestamp:(unsigned int)arg1 packetTimestamp:(int)arg2 hostTime:(double)arg3;
- (void)_computeInternalFormatForAudioConfig:(id)arg1;
- (unsigned int)internalSampleRateForCodecType:(long long)arg1;
- (unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg1 numSamples:(int)arg2 hostTime:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
