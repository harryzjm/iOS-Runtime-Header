//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class NSString;

@interface AMSDevice : NSObject <AMSBagConsumer>
{
}

+ (_Bool)deviceIsSeedBuild;
+ (_Bool)deviceIsInternalBuild;
+ (id)_systemVersionDictionary;
+ (id)_dataForNVRAMKey:(id)arg1;
+ (_Bool)deviceIsMac;
+ (_Bool)deviceIsiPod;
+ (_Bool)deviceIsiPhone;
+ (_Bool)deviceIsiPad;
+ (_Bool)deviceIsAppleWatch;
+ (_Bool)deviceIsAppleTV;
+ (_Bool)deviceIsAudioAccessory;
+ (id)uniqueDeviceId;
+ (id)thinnedAppVariantId;
+ (id)serialNumber;
+ (id)screenScale;
+ (id)ROMAddress;
+ (id)productVersion;
+ (id)productType;
+ (id)phoneNumber;
+ (id)operatingSystem;
+ (id)MLBSerialNumber;
+ (id)macAddressData;
+ (id)macAddress;
+ (id)localIPAddress;
+ (_Bool)isSecureElementAvailable;
+ (_Bool)isRunningInStoreDemoMode;
+ (id)hardwarePlatform;
+ (id)deviceName;
+ (id)deviceGUID;
+ (id)compatibleProductType;
+ (id)buildVersion;
+ (void)setBiometricState:(long long)arg1;
+ (long long)biometricState;
+ (void)stopListeningForDeviceLanguageChange;
+ (void)startListeningForDeviceLanguageChangeWithBagContract:(id)arg1;
+ (id)language;
+ (_Bool)_shouldPostOffersUpdatedNotification:(id)arg1 oldOffers:(id)arg2;
+ (_Bool)_setRawDeviceOffers:(id)arg1 offersStore:(id)arg2;
+ (void)_setDeviceEligibilityKeepingExistingDeviceOffers:(id)arg1 offersStore:(id)arg2;
+ (void)_performAuth;
+ (id)_notificationIdFromFollowUpId:(id)arg1 account:(id)arg2;
+ (id)_followUpItemWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4;
+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (_Bool)tearDownDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 logKey:(id)arg3;
+ (_Bool)tearDownAllDeviceOfferFollowUpsForAccount:(id)arg1 logKey:(id)arg2;
+ (_Bool)shouldPresentSetupOffersForAccount:(id)arg1 issues:(long long *)arg2;
+ (_Bool)shouldPresentSetupOffersForAccount:(id)arg1;
+ (void)setDeviceOffersCheckEncodingForRequestParameters:(id)arg1;
+ (void)saveDeviceOffers:(id)arg1;
+ (void)saveDeviceOfferEligibility:(id)arg1;
+ (_Bool)saveDeviceOffersForAccount:(id)arg1 response:(id)arg2 logKey:(id)arg3;
+ (void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3 logKey:(id)arg4;
+ (void)registerCompanionWithSerialNumber:(id)arg1 bag:(id)arg2;
+ (_Bool)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bag:(id)arg4 logKey:(id)arg5;
+ (_Bool)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bag:(id)arg3 logKey:(id)arg4;
+ (id)deviceOffersForType:(unsigned long long)arg1;
+ (_Bool)deviceOffersContainType:(unsigned long long)arg1;
+ (_Bool)isGift;
+ (_Bool)isEligibleForOffers;
+ (_Bool)expressedIntent;
+ (id)deviceOffers;
+ (void)removeDeviceOfferWithIdentifier:(id)arg1 account:(id)arg2 bagContract:(id)arg3 logKey:(id)arg4;
+ (void)registerCompanionWithSerialNumber:(id)arg1;
+ (_Bool)postDeviceOfferFollowUpWithIdentifier:(id)arg1 account:(id)arg2 priority:(long long)arg3 bagContract:(id)arg4 logKey:(id)arg5;
+ (_Bool)postAllDeviceOfferFollowUpsForAccount:(id)arg1 priority:(long long)arg2 bagContract:(id)arg3 logKey:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
