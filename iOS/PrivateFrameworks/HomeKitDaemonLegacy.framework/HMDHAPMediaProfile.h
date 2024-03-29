//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDHAPMediaProfile
{
    long long _airPlayEnable;
    NSString *_clientIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void)setEnable:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_notifyProfileSettingsUpdated:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_updateCurrentMediaState:(id)arg1 volumePercentage:(id)arg2 muted:(id)arg3 enable:(id)arg4 message:(id)arg5;
- (_Bool)_updateAudioControl:(id)arg1;
- (void)handlePrimaryResidentChanged:(id)arg1;
- (void)handleResidentAdded:(id)arg1;
- (void)_disableCharacteristicNotifications;
- (void)_setCharacteristicNotifications:(_Bool)arg1;
- (id)_allCharacteristicsToMonitor;
- (void)handleCharacteristicsUpdated:(id)arg1;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleHomeCharacteristicValuesChanged:(id)arg1;
- (void)_updateCharacteristicChanges;
- (void)_handleCharacteristicChanges:(id)arg1;
- (void)updateMediaSessionState:(id)arg1 usingCharacteristics:(id)arg2;
- (void)updateMediaSessionState:(id)arg1 usingServices:(id)arg2;
- (id)_mediaSessionStateFromProfile;
- (id)mediaSessionFromProfile;
- (_Bool)_updateRefreshPlayback:(id)arg1;
- (_Bool)_updatePlayback:(id)arg1;
@property long long airPlayEnable; // @synthesize airPlayEnable=_airPlayEnable;
- (id)_smartSpeakerAirPlayEnableReadRequest;
- (id)_smartSpeakerAirPlayEnableCharacteristic;
- (id)_smartSpeakerMutedWriteRequestWithMuted:(id)arg1;
- (id)_smartSpeakerMutedReadRequest;
- (id)_smartSpeakerMutedCharacteristic;
- (id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)arg1;
- (id)volumeWriteRequestWithVolumePercentage:(id)arg1;
- (id)_smartSpeakerVolumeReadRequest;
- (id)_smartSpeakerVolumeCharacteristic;
- (id)_smartSpeakerCurrentMediaStateReadRequest;
- (id)_smartSpeakerCurrentMediaStateCharacteristic;
- (id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)arg1;
- (id)playStateWriteRequestWithPlaybackState:(long long)arg1;
- (id)_smartSpeakerTargetMediaStateCharacteristic;
- (id)_smartSpeakerService;
- (unsigned long long)capability;
- (void)registerForNotifications;
- (id)initWithMediaServices:(id)arg1;

@end

