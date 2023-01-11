//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMHome.h>

@interface HMHome (Additions)
+ (id)_hf_appDataKeyForColorPaletteOfType:(unsigned long long)arg1;
- (id)hf_updateAccessControlDescriptor:(id)arg1;
- (id)hf_accessControlDescriptor;
- (id)hf_updateColorPalette:(id)arg1 type:(unsigned long long)arg2;
- (id)hf_updateColorPalette:(id)arg1;
- (id)hf_colorPaletteOfType:(unsigned long long)arg1;
- (id)hf_colorPalette;
- (void)hf_startReprovisioningAccessory:(id)arg1;
- (_Bool)hf_hasMediaAccessories;
- (_Bool)hf_supportsSharedEventAutomation;
- (_Bool)hf_isMediaAccessoryProfileValid:(id)arg1;
- (_Bool)hf_isPresenceAuthorizedForUser:(id)arg1;
- (id)hf_allUsersIncludingCurrentUser;
- (_Bool)hf_supportsRemoteAccessRestrictions;
- (_Bool)hf_supportsPerUserRemoteAccess;
- (id)hf_markTermsAndConditionsAsAcceptedForHomePodWithLicenseAgreementVersion:(id)arg1;
- (_Bool)hf_hasAcceptedTermsAndConditionsForHomePodVersion:(id)arg1;
- (id)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:(_Bool)arg1;
- (_Bool)hf_homeHasOnboarded;
- (id)hf_setNotesApplicationData:(id)arg1;
- (id)hf_notesApplicationData;
- (id)hf_reorderableCamerasList;
- (id)hf_reorderableActionSetsList;
- (id)hf_reorderableServicesList;
- (id)hf_reorderableRoomsList;
- (id)hf_personalRequestAccessories;
- (id)hf_mediaAccessories;
- (id)hf_updateAutomaticSoftwareUpdateEnabled:(_Bool)arg1;
- (id)hf_allMediaProfiles;
- (id)hf_allCameraProfiles;
- (id)hf_cameraProfileWithIdentifier:(id)arg1;
- (id)hf_allVisibleServices;
- (id)hf_allServices;
- (id)hf_serviceWithIdentifier:(id)arg1;
- (id)availableSoftwareUpdates;
- (id)accessoriesSupportingSoftwareUpdate;
- (id)hf_mediaSystemForAccessory:(id)arg1;
- (id)hf_serviceGroupsForService:(id)arg1;
- (id)hf_actionSetWithUUID:(id)arg1;
- (id)hf_primaryResidentDevice;
- (id)hf_allTargetControlAccessories;
- (id)hf_allProgrammableSwitchAccessories;
- (id)hf_allBridgeAccessories;
- (id)hf_accessoriesMatchingCategoryType:(id)arg1;
- (id)hf_mediaProfileContainerForSymptomsHandler:(id)arg1;
- (id)hf_mediaSystemForSymptomsHandler:(id)arg1;
- (id)hf_accessoryForSymptomsHandler:(id)arg1;
- (id)hf_accessoryWithDeviceIdentifier:(id)arg1;
- (id)hf_accessoryWithIdentifier:(id)arg1;
- (id)hf_allNonEmptyActionSets;
- (id)hf_zoneWithIdentifier:(id)arg1;
- (void)hf_setSelectedRoom:(id)arg1;
- (id)hf_selectedRoom;
- (id)hf_roomWithIdentifier:(id)arg1;
- (_Bool)hf_currentUserIsOwner;
- (_Bool)hf_currentUserIsAdministrator;
- (_Bool)hf_isUserAtHome;
- (_Bool)hf_isCurrentLocationHome;
- (unsigned long long)hf_remoteAccessState;
- (id)hf_characteristicValueManager;
- (id)hf_allRooms;
@end

