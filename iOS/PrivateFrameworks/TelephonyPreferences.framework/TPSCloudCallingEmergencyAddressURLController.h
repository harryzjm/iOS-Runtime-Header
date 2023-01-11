//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyPreferences/TUCallCapabilitiesDelegatePrivate-Protocol.h>

@class NSString;

@interface TPSCloudCallingEmergencyAddressURLController <TUCallCapabilitiesDelegatePrivate>
{
}

- (void)didChangeWiFiCallingProvisionalURLForSenderIdentityWithUUID:(id)arg1;
- (id)capabilityProvisioningPostData;
- (_Bool)isCapabilityProvisioningURLInvalid;
- (id)capabilityProvisioningURL;
- (int)capabilityProvisioningStatus;
- (_Bool)isCapabilityEnabled;
- (void)webSheetCompletion;
- (void)enableCapability;
- (id)initWithSubscriptionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
