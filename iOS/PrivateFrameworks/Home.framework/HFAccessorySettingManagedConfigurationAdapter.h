//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessorySettingAdapterDisplayArbitrating-Protocol.h>
#import <Home/MCProfileConnectionObserver-Protocol.h>

@class HMAccessorySetting, MCProfileConnection, NSHashTable, NSString;

@interface HFAccessorySettingManagedConfigurationAdapter <MCProfileConnectionObserver, HFAccessorySettingAdapterDisplayArbitrating>
{
    MCProfileConnection *_profileConnectionForSynchronization;
    unsigned long long _mode;
    NSHashTable *_profileObservers;
}

@property(retain, nonatomic) NSHashTable *profileObservers; // @synthesize profileObservers=_profileObservers;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) MCProfileConnection *profileConnectionForSynchronization; // @synthesize profileConnectionForSynchronization=_profileConnectionForSynchronization;
- (void).cxx_destruct;
- (_Bool)shouldShowSettingsEntity:(id)arg1;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_dispatchWasUpdated;
- (void)_rebootForReason:(id)arg1;
- (id)_synchronizeHomeKitToManagedConfiguration;
- (id)_synchronizeManagedConfigurationToHomeKit;
- (id)_removeProfileFromProfileManager:(id)arg1;
- (id)_profilesSettingDataWithError:(id *)arg1;
- (id)_installedProfileData;
- (id)_installedProfiles;
- (id)_profileWithIdentifier:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long numberOfProfiles;
@property(readonly, nonatomic) HMAccessorySetting *profilesSetting;
- (void)removeProfileObserver:(id)arg1;
- (void)addProfileObserver:(id)arg1;
- (id)profilesWithError:(id *)arg1;
- (id)removeProfileDataFromHomeKit:(id)arg1;
- (id)_synchronizeProfileDataToHomeKit:(id)arg1;
- (id)removeProfileFromHomeKit:(id)arg1;
- (id)addProfileDataToHomeKit:(id)arg1;
- (void)accessorySettingWasUpdated:(id)arg1 value:(id)arg2;
- (void)dealloc;
- (id)initWithAccessoryProfile:(id)arg1;
- (id)initWithAccessoryProfile:(id)arg1 mode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
