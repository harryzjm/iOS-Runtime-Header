//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSString, TimingCollection, VCAudioCaptionsCoordinator, VCPositionalInfo, VCSessionBandwidthAllocationTable, VCSessionParticipantMediaStreamInfo;
@protocol OS_dispatch_source, OS_nw_activity;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantRemote
{
    _Bool _remoteVideoEnabled;
    _Bool _remoteScreenEnabled;
    _Bool _remoteVideoPaused;
    _Bool _remoteSystemAudioPaused;
    _Bool _receivedFirstFrame;
    unsigned char _videoQuality;
    unsigned int _visibilityIndex;
    unsigned int _prominenceIndex;
    VCSessionBandwidthAllocationTable *_mediaTable;
    VCSessionBandwidthAllocationTable *_repairMediaTable;
    _Bool _isVideoDegraded;
    _Bool _isRedundancyRequested;
    _Bool _isRemoteMediaStalled;
    struct tagVCAudioStreamGroupPriorityInfo _mediaPriorityInfo;
    TimingCollection *_perfTimers;
    _Bool _haveReportedPerfTimers;
    _Bool _isMediaSuspended;
    _Bool _oneToOneVideoEnabled;
    _Bool _isServerRTxEnabled;
    _Bool _screenControlEnabled;
    struct _VCSessionParticipantCapabilities _capabilities;
    _Bool _outOfProcessCodecsEnabled;
    int _thermalLevel;
    VCPositionalInfo *_positionalInfo;
    struct __CFDictionary *_mediaTypeToSpatialAudioMetadataEntryMap;
    NSObject<OS_nw_activity> *_nwActivity;
    NSObject<OS_nw_activity> *_participantPoorConnectionNwActivity;
    NSObject<OS_nw_activity> *_participantMediaStallNwActivity;
    double _lastVideoExpectationSwitch;
    _Bool _isVideoExpected;
    _Bool _isVideoJitterForPlayoutEnabled;
    _Bool _remoteAudioEnabled;
    _Bool _remoteAudioPaused;
    _Bool _remoteScreenEnabledStateChanged;
    NSMutableDictionary *_jbSynchronizerPerSyncGroupID;
    NSMutableDictionary *_remoteMediaStates;
    NSObject<OS_dispatch_source> *_remoteStreamGroupStateUpdateTimer;
    VCAudioCaptionsCoordinator *_captionsCoordinator;
}

+ (unsigned int)maxNetworkBitrateForStreamGroupID:(unsigned int)arg1 videoQuality:(unsigned char)arg2 isLocalOnWiFi:(_Bool)arg3 isRedundancyRequested:(_Bool)arg4 isSharingEnabled:(_Bool)arg5;
+ (unsigned int)maxFdatNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;
+ (unsigned int)maxBdatNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;
+ (unsigned int)maxFtxtNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3;
+ (unsigned int)maxCameraNetworkBitrateForVideoQuality:(unsigned char)arg1 isLocalOnWiFi:(_Bool)arg2 isRedundancyRequested:(_Bool)arg3 isSharingEnabled:(_Bool)arg4;
+ (unsigned int)maxCameraNetworkBitrateForVideoQuality:(unsigned char)arg1 useWiFiBitrate:(_Bool)arg2 isSharingEnabled:(_Bool)arg3;
+ (unsigned int)maxCameraNetworkBitrateWithRedundancyForVideoQuality:(unsigned char)arg1 useWiFiBitrate:(_Bool)arg2;
+ (unsigned int)maxAudioNetworkBitrateForLocalInterfaceOnWiFi:(_Bool)arg1 isLowLatencyAudio:(_Bool)arg2;
+ (_Bool)isDeviceLargeScreen;
@property(nonatomic) _Bool isServerRTxEnabled; // @synthesize isServerRTxEnabled=_isServerRTxEnabled;
@property(nonatomic, getter=isRemoteAudioPaused) _Bool remoteAudioPaused; // @synthesize remoteAudioPaused=_remoteAudioPaused;
@property(nonatomic, getter=isRemoteAudioEnabled) _Bool remoteAudioEnabled; // @synthesize remoteAudioEnabled=_remoteAudioEnabled;
@property(nonatomic, getter=isScreenControlEnabled) _Bool screenControlEnabled; // @synthesize screenControlEnabled=_screenControlEnabled;
@property(readonly, nonatomic) VCPositionalInfo *positionalInfo; // @synthesize positionalInfo=_positionalInfo;
@property(nonatomic) struct _VCSessionParticipantCapabilities capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic, getter=isRemoteScreenEnabled) _Bool remoteScreenEnabled; // @synthesize remoteScreenEnabled=_remoteScreenEnabled;
@property(nonatomic, getter=isRemoteVideoPaused) _Bool remoteVideoPaused; // @synthesize remoteVideoPaused=_remoteVideoPaused;
@property(nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property(nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property(nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled; // @synthesize remoteVideoEnabled=_remoteVideoEnabled;
- (void)reportCameraCompositionEnabled:(_Bool)arg1;
- (void)updateAndHandleVideoMediaStall:(_Bool)arg1 isOneToOneStream:(_Bool)arg2;
- (void)cancelAndReleaseFetchTimer;
- (void)createAndResumeFetchTimer;
- (_Bool)isSeamlessTransitionSupportedForStreamGroup:(id)arg1;
- (void)updateShouldEnableMLEnhanceOneToOne;
- (_Bool)setShouldEnableMLEnhance:(_Bool)arg1 streamWithVideoResolution:(long long)arg2 videoStreamGroup:(id)arg3;
- (void)updateShouldEnableMLEnhanceHighTierMultiway;
- (void)updateShouldEnableMLEnhanceLowTierMultiway;
- (_Bool)shouldEnableMLEnhanceHighTier;
- (_Bool)shouldEnableMLEnhanceOneToOne;
- (_Bool)shouldEnableMLEnhanceLowTier;
- (void)updateShouldEnableMLEnhance;
- (void)updateStreamConfigWithMLEnhance:(id)arg1;
- (void)setSharingEnabled:(_Bool)arg1;
- (void)setShouldEnableFaceZoom:(_Bool)arg1;
- (void)updateShouldEnableFaceZoom;
- (_Bool)setupStreamGroups;
- (void)setupJBTargetSynchronizers;
- (void)createJitterBufferTargetEstimatorSynchronizer:(struct tagVCJBTargetEstimatorSynchronizer **)arg1 syncGroupID:(unsigned int)arg2;
- (_Bool)shouldSetupStreamGroupWithID:(unsigned int)arg1;
- (_Bool)shouldEnablePacketRetransmissionForStreamGroupID:(unsigned int)arg1;
- (_Bool)didNegotiateStreamGroupWithID:(unsigned int)arg1;
- (id)newVideoStreamGroupWithStreamGroupConfig:(id)arg1;
- (_Bool)setupStreamGroupWithConfig:(id)arg1;
- (_Bool)oneToOneIsSupportedVideoStreamGroup:(unsigned int)arg1;
- (_Bool)oneToOneIsSupportedAudioStreamGroup:(unsigned int)arg1;
- (_Bool)addOneToOneStreamConfigToMediaStreamInfo:(id)arg1 negotiatorStreamGroupConfig:(id)arg2;
- (id)newMediaStreamWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;
- (id)newStreamGroupConfigWithNegotiationConfig:(id)arg1;
- (int)setupSpatialInfoForStreamGroupConfig:(id)arg1;
- (int)spatialChannelIndex:(unsigned int *)arg1 spatialAudioSourceID:(unsigned long long *)arg2 forMediaType:(unsigned int)arg3;
- (void)setupMediaStreamGroupConfig:(id)arg1 withNegotiationConfig:(id)arg2;
- (id)newMediaStreamInfoWithNegotiationConfig:(id)arg1 streamToken:(long long)arg2;
- (id)newMediaStreamConfigWithStreamConfig:(id)arg1 streamGroupConfig:(id)arg2 maxIDSStreamIDCount:(unsigned int)arg3;
- (_Bool)setupStreamConfigWithCodecs:(id)arg1 streamConfig:(id)arg2 codecConfigs:(id)arg3 featureStringsDict:(id)arg4;
- (id)newMediaStreamConfigWithStreamGroupConfig:(id)arg1 streamConfig:(id)arg2 rateControlConfig:(id)arg3 multiwayConfig:(id)arg4;
- (_Bool)setupVideoStreamConfiguration:(id)arg1 withStreamGroupStreamConfig:(id)arg2 codecConfigs:(id)arg3 multiwayConfig:(id)arg4 groupID:(unsigned int)arg5;
- (id)newMultiwayConfigWithStreamGroupStreamConfig:(id)arg1 maxIDSStreamIDCount:(unsigned int)arg2 groupID:(unsigned int)arg3;
- (void)updateVideoMultiwayConfig:(id)arg1 withStreamGroupStreamConfig:(id)arg2;
- (void)updateScreenStreamConfigurationWithStreamGroupResult:(id)arg1 multiwayConfig:(id)arg2 screenStreamConfig:(id)arg3;
@property(readonly, nonatomic) _Bool isVideoExpected;
- (void)setMediaSuspended:(_Bool)arg1 forStreamToken:(id)arg2;
@property(readonly) _Bool isVisible;
@property(readonly) NSArray *mediaEntries;
- (void)validateMediaEntries:(id)arg1;
- (void)appendStreamGroupsMediaEntries:(id)arg1;
- (unsigned char)cappedVideoQualityWithShouldLimitCameraQualityForPIP:(_Bool)arg1;
- (void)appendStreamGroup:(id)arg1 maxBitrate:(unsigned int)arg2 mediaEntries:(id)arg3;
- (void)setRemoteMediaStalled:(_Bool)arg1;
- (void)networkQualityDidDegrade:(_Bool)arg1 isLocalNetworkQualityDegraded:(_Bool)arg2;
- (void)setVideoDegraded:(_Bool)arg1;
- (void)pushEventToNwActivity:(long long)arg1 started:(_Bool)arg2;
- (void)collectAudioChannelMetrics:(CDStruct_b671a7c4 *)arg1;
- (void)collectVideoChannelMetrics:(CDStruct_b671a7c4 *)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)didReceiveFirstFrameForStreamGroup:(id)arg1;
- (unsigned int)optedInNetworkBitrateForStreamGroup:(unsigned int)arg1;
- (unsigned int)actualNetworkBitrateForStreamGroup:(unsigned int)arg1;
- (id)activeDownlinkStreamIDForStreamGroupID:(unsigned int)arg1;
- (id)optedInStreamIDForStreamGroupID:(unsigned int)arg1;
- (void)reactionDidStart:(id)arg1;
- (void)setStreamGroup:(unsigned int)arg1 syncSourceStreamGroupID:(unsigned int)arg2;
- (void)setMediaRecorder:(id)arg1;
- (void)updateThermalLevel:(int)arg1;
- (id)startScreenGroup;
- (id)stopAudioStreams;
- (id)startAudioIO;
- (unsigned int)actualNetworkBitrateWithAudioBitrates:(id)arg1;
- (void)setVideoStreamDelegate:(id)arg1 delegateFunctions:(const struct tagVCVideoStreamDelegateRealtimeInstanceVTable *)arg2;
- (void)setVideoReceiverFeedbackDelegate:(id)arg1;
- (void)dispatchedSetVideoReceiverFeedbackDelegate:(id)arg1;
- (_Bool)configureWithOneToOneParticipantConfig:(id)arg1 operatingMode:(int)arg2;
@property(readonly, nonatomic) unsigned int lastDisplayedFrameRTPTimestamp;
- (long long)participantMicrophoneToken;
- (id)audioGroup;
- (id)videoGroup;
- (id)screenGroup;
- (long long)participantScreenToken;
- (id)systemAudioStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *screenStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *cameraStreamInfo;
@property(readonly, nonatomic) VCSessionParticipantMediaStreamInfo *micStreamInfo;
- (_Bool)isScreenActive;
- (void)updateAudioSpectrumState;
- (_Bool)isAudioActive;
- (void)negotiateAudioRules:(id)arg1;
- (id)recommendedStreamIDsForSelectedMediaEntries:(id)arg1 forceSeamlessTransition:(_Bool)arg2;
- (void)appendOptedInStreamID:(id)arg1 toOptInStreamsIDs:(id)arg2 targetBandwidthEntry:(id)arg3 forceSeamlessTransition:(_Bool)arg4;
@property(readonly, nonatomic) NSNumber *optedInVideoStreamID;
@property(readonly, nonatomic) NSNumber *optedInAudioStreamID;
- (void)setActiveStreamIDs:(id)arg1;
- (void)setMuted:(_Bool)arg1;
- (id)getAudioDumpName;
- (id)entryForStreamID:(id)arg1;
- (_Bool)setupBandwidthAllocationTableForMediaStreamConfigs:(id)arg1 streamGroupID:(unsigned int)arg2 entryType:(unsigned char)arg3;
- (id)checkSubstreams:(id)arg1 forLowerQualityIndex:(unsigned int)arg2;
- (_Bool)setupAudioStreamConfiguration:(id)arg1 withStreamGroupConfig:(id)arg2 streamGroupStreamConfig:(id)arg3;
- (_Bool)isStreamGroupActive:(id)arg1;
- (_Bool)isActiveMediaType:(unsigned int)arg1;
- (void)cleanupNwActivity;
- (void)completeAndReleaseNwActivity:(id)arg1 withReason:(int)arg2;
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;
- (id)setupStreamRTP:(id)arg1;
- (_Bool)isParticipantDawnburstOrLater;
- (_Bool)isParticipantPeace:(id)arg1;
- (_Bool)supportsGFTSwitchToOneToOne;
- (_Bool)supportsNegotiatedCoordinateSystem;
- (id)getMajorVersionNumber;
- (_Bool)processParticipantInfo;
- (void)updateOneToOneAudioPositionalInfo:(const struct tagVCSpatialAudioMetadataPositionalInfo *)arg1;
- (_Bool)isInCanvas;
- (void)updatePositionalInfo:(id)arg1 shouldReapply:(_Bool)arg2;
- (void)updateDownlinkBandwithAllocatorClientConfigurations:(id)arg1;
- (id)applyVideoEnabledSetting:(_Bool)arg1;
- (void)dispatchedSetRemoteVideoPaused:(_Bool)arg1;
- (unsigned int)remoteMediaStateForMediaType:(unsigned int)arg1;
- (void)setRemoteMediaTypeStates:(id)arg1;
- (id)newSupportedRemoteMediaTypeStatesDict:(id)arg1;
- (void)setRemoteMediaState:(id)arg1 forMediaType:(id)arg2;
- (id)updateMediaState:(unsigned int)arg1 forStreamGroup:(id)arg2;
- (void)setTransitionToDisabled:(unsigned int)arg1;
- (void)setTransitionToPaused:(unsigned int)arg1;
- (void)setTransitionToEnabled:(unsigned int)arg1;
- (void)setRemoteSystemAudioPaused:(_Bool)arg1;
- (void)dispatchedSetRemoteSystemAudioPaused:(_Bool)arg1;
- (void)dispatchedSetScreenControlEnabled:(_Bool)arg1;
- (void)dispatchedSetRemoteScreenEnabled:(_Bool)arg1;
- (void)dispatchedSetRemoteVideoEnabled:(_Bool)arg1;
- (void)setVideoPaused:(_Bool)arg1;
- (void)dispatchedSetRemoteAudioEnabled:(_Bool)arg1;
- (void)dispatchedSetRemoteAudioPaused:(_Bool)arg1;
- (void)setAudioPaused:(_Bool)arg1;
@property(readonly, nonatomic) NSDictionary *participantSpatialAudioSourceIDs;
- (int)storeSpatialAudioMetadataEntry:(void *)arg1 forMediaType:(unsigned int)arg2;
- (void *)spatialMetadataEntryForMediaType:(unsigned int)arg1;
- (void)cleanupSpatialAudio;
- (int)setupSpatialAudioWithMetadata:(void *)arg1 spatialMetadataEntryMap:(struct __CFDictionary *)arg2;
- (void)initializeParticipantType;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly) NSString *uuid;

@end

