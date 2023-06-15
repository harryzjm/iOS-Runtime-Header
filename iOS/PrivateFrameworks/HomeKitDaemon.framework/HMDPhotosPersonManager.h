//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDUser, HMIExternalPersonManager, HMPhotosPersonManagerSettings, NSString;

__attribute__((visibility("hidden")))
@interface HMDPhotosPersonManager
{
    HMPhotosPersonManagerSettings *_dataUnavailableExternalSettings;
    HMDUser *_user;
}

+ (id)logCategory;
+ (id)zoneNameForZoneUUID:(id)arg1;
- (void).cxx_destruct;
@property __weak HMDUser *user; // @synthesize user=_user;
@property(readonly, copy) HMPhotosPersonManagerSettings *dataUnavailableExternalSettings; // @synthesize dataUnavailableExternalSettings=_dataUnavailableExternalSettings;
- (_Bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (void)handleUpdatedSettings:(id)arg1;
@property(readonly, copy) HMPhotosPersonManagerSettings *settings;
@property(readonly) HMIExternalPersonManager *hmiPersonManager;
- (_Bool)sharesFaceClassifications;
- (id)initWithUUID:(id)arg1 zoneManager:(id)arg2 coreDataManager:(id)arg3 dataInterfaces:(id)arg4 workQueue:(id)arg5 user:(id)arg6;
- (id)initWithUser:(id)arg1 zoneUUID:(id)arg2 workQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

