//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorV2
{
}

+ (_Bool)updateScreenU1ConfigWithStreamGroupConfig:(id)arg1 forNegotiationBlob:(id)arg2 localSupportedVideoPayloads:(id)arg3;
+ (_Bool)updateCameraU1Config:(id)arg1 forNegotiationBlob:(id)arg2 localSupportedVideoPayloads:(id)arg3;
+ (_Bool)updateStreamGroupU1Config:(id)arg1 forGroupId:(unsigned int)arg2 withNegotiationBlob:(id)arg3 localSupportedVideoPayloads:(id)arg4;
+ (id)streamGroupIDsWithMediaBlob:(id)arg1;
+ (unsigned int)capabilitiesWithMomentSettings:(id)arg1;
+ (id)remoteFeatureStringWithRemoteMediaBlob:(id)arg1;
+ (void)dumpRemoteNegotiationData:(id)arg1 forceFileDump:(_Bool)arg2;
+ (_Bool)initializeLocalConfiguration:(id)arg1 negotiationData:(id)arg2 deviceRole:(int)arg3 preferredAudioPayload:(int)arg4;
+ (id)newUnserializedMediaBlob:(id)arg1;
+ (id)newDecompressedBlob:(id)arg1;
+ (id)newCompressedBlob:(id)arg1;
- (void)setupNegotiatedFaceTimeSettingsWithRemoteMediaBlob:(id)arg1;
- (_Bool)negotiateU1SettingsForStreamGroup:(id)arg1;
- (_Bool)setupStreamGroupsWithRemoteMediaBlob:(id)arg1;
- (_Bool)negotiateStreamGroupConfig:(id)arg1 remoteInviteBlob:(id)arg2;
- (_Bool)setupNegotiatedCodecSupportWithRemoteMediaBlob:(id)arg1;
- (_Bool)setupNegotiatedMomentsResultsWithRemoteMediaBlob:(id)arg1;
- (_Bool)setupNegotiatedVideoSettingsWithRemoteMediaBlob:(id)arg1;
- (_Bool)selectBestDecodeVideoRuleForTransport:(unsigned char)arg1 payload:(int)arg2 localVideoRuleCollection:(id)arg3 remoteVideoRuleCollection:(id)arg4;
- (id)newNegotiatedSystemAudioResultsWithRemoteMediaBlob:(id)arg1;
- (void)setupNegotiatedAudioResultsWithRemoteMediaBlob:(id)arg1;
- (_Bool)setupNegotiatedResultsWithRemoteMediaBlob:(id)arg1;
- (_Bool)appendStreamGroupsToMediaBlob:(id)arg1;
- (_Bool)appendMomentsSettingsToMediaBlob:(id)arg1;
- (_Bool)appendCameraOneToOneSettingsToMediaBlob:(id)arg1;
- (_Bool)appendMicrophoneOneToOneSettingsToMediaBlob:(id)arg1;
- (_Bool)appendCodecFeaturesToMediaBlob:(id)arg1;
- (_Bool)appendBandwidthSettingsToMediaBlob:(id)arg1;
- (_Bool)appendGeneralInfoToMediaBlob:(id)arg1;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg1 connectionType:(int)arg2;
- (_Bool)processRemoteNegotiationData:(id)arg1;
- (id)negotiationData;

@end

