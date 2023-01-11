//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMCameraProfile.h>

#import <Home/HFUserNotificationServiceSettingsProviding-Protocol.h>

@class HFUserNotificationServiceSettings, NSString, NSUUID;

@interface HMCameraProfile (HFUserNotificationServiceSettings) <HFUserNotificationServiceSettingsProviding>
- (id)hf_updateUserNotificationSettings:(id)arg1;
@property(readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
- (id)_hf_associatedDoorbellService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

