//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;
@protocol AVOutputDeviceImplSupport;

__attribute__((visibility("hidden")))
@interface AVLocalOutputDeviceImpl : NSObject
{
    id <AVOutputDeviceImplSupport> _implSupportEventListener;
}

- (void).cxx_destruct;
@property __weak id <AVOutputDeviceImplSupport> implEventListener; // @synthesize implEventListener=_implSupportEventListener;
- (_Bool)supportsFitnessDataDestination;
- (void)configureUsingBlock:(CDUnknownBlockType)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)setCurrentBluetoothListeningMode:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *currentBluetoothListeningMode;
- (_Bool)setConversationDetectionEnabled:(_Bool)arg1 error:(id *)arg2;
@property(readonly, nonatomic, getter=isConversationDetectionEnabled) _Bool conversationDetectionEnabled;
@property(readonly, nonatomic) _Bool supportsConversationDetection;
@property(readonly, nonatomic) NSArray *availableBluetoothListeningModes;
@property(readonly, nonatomic, getter=isHeadTrackedSpatialAudioActive) _Bool headTrackedSpatialAudioActive;
- (_Bool)setHeadTrackedSpatialAudioMode:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *headTrackedSpatialAudioMode;
- (_Bool)setAllowsHeadTrackedSpatialAudio:(_Bool)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool allowsHeadTrackedSpatialAudio;
@property(readonly, nonatomic) _Bool supportsHeadTrackedSpatialAudio;
@property(readonly, nonatomic) long long HAPConformance;
@property(readonly, nonatomic) _Bool supportsBluetoothSharing;
@property(readonly, nonatomic) _Bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property(readonly, nonatomic) _Bool canFetchMediaDataFromSender;
@property(readonly, nonatomic) _Bool canPlayEncryptedProgressiveDownloadAssets;
@property(readonly, nonatomic) _Bool canRelayCommunicationChannel;
@property(readonly, nonatomic) _Bool canCommunicateWithAllLogicalDeviceMembers;
@property(readonly, nonatomic) _Bool isLogicalDeviceLeader;
@property(readonly, nonatomic) NSString *logicalDeviceID;
@property(readonly, nonatomic) _Bool groupContainsGroupLeader;
@property(readonly, nonatomic) _Bool participatesInGroupPlayback;
@property(readonly, nonatomic) _Bool isGroupLeader;
@property(readonly, nonatomic) _Bool canBeGroupLeader;
@property(readonly, copy, nonatomic) NSString *proposedGroupID;
@property(readonly, copy, nonatomic) NSString *groupID;
@property(readonly, nonatomic) _Bool canBeGrouped;
@property(getter=isMuted) _Bool muted;
@property(readonly) _Bool canMute;
- (float)volumeForActivatedDeviceClusterMembersWithRoomID:(id)arg1;
- (void)setActivatedDeviceClusterMembersVolume:(float)arg1 withRoomID:(id)arg2;
- (void)decreaseVolumeByCount:(long long)arg1;
- (void)increaseVolumeByCount:(long long)arg1;
- (void)setVolume:(float)arg1;
@property(readonly) long long volumeControlType;
@property(readonly) _Bool canSetVolume;
@property(readonly) float volume;
- (void)setSecondDisplayMode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setSecondDisplayEnabled:(_Bool)arg1;
@property(readonly, nonatomic) _Bool supportsBufferedAirPlay;
@property(readonly, nonatomic) _Bool canAccessiCloudMusicLibrary;
@property(readonly, nonatomic) _Bool canAccessAppleMusic;
@property(readonly, nonatomic) _Bool canAccessRemoteAssets;
@property(readonly, nonatomic) _Bool onlyAllowsConnectionsFromPeersInHomeGroup;
@property(readonly, nonatomic) _Bool automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property(readonly, nonatomic) _Bool requiresAuthorization;
@property(readonly, nonatomic) unsigned long long deviceFeatures;
@property(readonly, copy, nonatomic) NSArray *connectedPairedDevices;
@property(readonly, nonatomic, getter=isEligibleToBePredictedOutputDevice) _Bool eligibleToBePredictedOutputDevice;
@property(readonly, nonatomic, getter=isAppleAccessory) _Bool appleAccessory;
@property(readonly, nonatomic) _Bool producesLowFidelityAudio;
@property(readonly, nonatomic, getter=isInUseByPairedDevice) _Bool inUseByPairedDevice;
@property(readonly, nonatomic) NSDictionary *airPlayProperties;
@property(readonly, nonatomic) NSNumber *isInEar;
@property(readonly, nonatomic) NSNumber *supportsDataOverACLProtocol;
@property(readonly, nonatomic) NSNumber *rightBatteryLevel;
@property(readonly, nonatomic) NSNumber *leftBatteryLevel;
@property(readonly, nonatomic) NSNumber *caseBatteryLevel;
@property(readonly, nonatomic) NSNumber *batteryLevel;
@property(readonly, nonatomic) NSString *clusterID;
@property(readonly, nonatomic) _Bool isClusterLeader;
@property(readonly, nonatomic) NSArray *clusteredDeviceDescriptions;
@property(readonly, copy, nonatomic) NSData *identifyingMACAddress;
@property(readonly, nonatomic) NSString *firmwareVersion;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, copy, nonatomic) NSString *modelID;
@property(readonly, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) long long configuredClusterSize;
@property(readonly, nonatomic) long long clusterType;
@property(readonly, nonatomic) long long deviceSubType;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, copy, nonatomic) NSString *ID;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

