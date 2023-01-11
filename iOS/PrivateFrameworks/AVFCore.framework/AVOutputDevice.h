//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputDeviceInternal;

@interface AVOutputDevice : NSObject
{
    AVOutputDeviceInternal *_outputDevice;
}

+ (void)localDeviceDidChange;
+ (void)localDeviceWithCompletion:(CDUnknownBlockType)arg1;
+ (id)sharedLocalDevice;
+ (void)initialize;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1 routingContextFactory:(id)arg2;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint *)arg1;
- (double)frecencyScore;
- (void)updateFrecencyScore;
- (void)configureUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureUsingBlock:(CDUnknownBlockType)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)communicationChannelManager:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)communicationChannelManager:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
- (id)communicationChannelDelegate;
- (void)setCommunicationChannelDelegate:(id)arg1;
- (void)openCommunicationChannelWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)setCurrentBluetoothListeningMode:(id)arg1 error:(id *)arg2;
- (void)setCurrentBluetoothListeningMode:(id)arg1;
- (id)currentBluetoothListeningMode;
- (id)availableBluetoothListeningModes;
- (_Bool)isHeadTrackedSpatialAudioActive;
- (_Bool)supportsHeadTrackedSpatialAudio;
- (long long)HAPConformance;
- (_Bool)supportsBluetoothSharing;
- (_Bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (_Bool)canFetchMediaDataFromSender;
- (_Bool)canPlayEncryptedProgressiveDownloadAssets;
- (_Bool)canRelayCommunicationChannel;
- (_Bool)canCommunicateWithAllLogicalDeviceMembers;
- (_Bool)isLogicalDeviceLeader;
- (id)logicalDeviceID;
- (_Bool)groupContainsGroupLeader;
- (_Bool)participatesInGroupPlayback;
- (_Bool)isGroupLeader;
- (_Bool)canBeGroupLeader;
- (void)outputDeviceImplDidChangeProposedGroupID:(id)arg1;
- (id)proposedGroupID;
- (id)groupID;
- (_Bool)canBeGrouped;
- (void)setVolume:(float)arg1;
- (void)outputDeviceImplDidChangeVolumeControlType:(id)arg1;
- (long long)volumeControlType;
- (void)outputDeviceImplDidChangeCanChangeVolume:(id)arg1;
- (_Bool)canSetVolume;
- (void)outputDeviceImplDidChangeVolume:(id)arg1;
- (float)volume;
- (void)setSecondDisplayMode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setSecondDisplayEnabled:(_Bool)arg1;
- (_Bool)supportsBufferedAirPlay;
- (_Bool)canAccessiCloudMusicLibrary;
- (_Bool)canAccessAppleMusic;
- (_Bool)canAccessRemoteAssets;
- (_Bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (_Bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (_Bool)requiresAuthorization;
- (unsigned long long)deviceFeatures;
- (id)connectedPairedDevices;
- (_Bool)isInUseByPairedDevice;
- (id)airPlayProperties;
- (id)modelSpecificInformation;
- (float)batteryLevel;
- (_Bool)hasBatteryLevel;
- (id)clusterID;
- (_Bool)isClusterLeader;
- (id)clusteredDeviceDescriptions;
- (id)identifyingMACAddress;
- (id)firmwareVersion;
- (id)serialNumber;
- (id)modelID;
- (id)manufacturer;
- (long long)configuredClusterSize;
- (long long)clusterType;
- (long long)deviceSubType;
- (long long)deviceType;
- (id)ID;
- (id)deviceID;
- (id)deviceName;
- (id)name;
- (id)impl;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithOutputDeviceImpl:(id)arg1 commChannelManager:(id)arg2;
- (id)init;
- (id)figEndpointOutputDeviceImpl;

@end
