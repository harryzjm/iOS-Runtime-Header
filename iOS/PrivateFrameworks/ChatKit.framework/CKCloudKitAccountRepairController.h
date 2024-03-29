//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPUIDeviceToDeviceEncryptionHelper, NSString;

__attribute__((visibility("hidden")))
@interface CKCloudKitAccountRepairController : NSObject
{
    CDPUIDeviceToDeviceEncryptionHelper *_encryptionHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CDPUIDeviceToDeviceEncryptionHelper *encryptionHelper; // @synthesize encryptionHelper=_encryptionHelper;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(CDUnknownBlockType)arg2;
- (void)beginRepairWithPresentingViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)authenticationContext;
- (Class)authenticationContextClass;
- (id)primaryAppleAccount;
- (id)AKSecurityUpgradeContextMessages;
- (id)accountStore;
- (id)CDPUIDeviceToDeviceEncryptionHelperWithPresentingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

