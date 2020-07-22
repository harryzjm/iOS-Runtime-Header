//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileCoreServices/_LSDDeviceIdentifierProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface _LSDDeviceIdentifierClient <_LSDDeviceIdentifierProtocol>
{
}

- (void)clearAllIdentifiersOfType:(long long)arg1;
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)generateIdentifiersWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getIdentifierOfType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasEntitlementToClearAllIdentifiersOfType:(long long)arg1;
- (_Bool)hasUninstallEntitlement;
- (void)getClientProcessVendorNameAndBundleIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

