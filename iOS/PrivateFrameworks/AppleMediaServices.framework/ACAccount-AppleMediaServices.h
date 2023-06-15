//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

@class AMSAccountIdentity, NSArray, NSDictionary, NSNumber, NSString;

@interface ACAccount (AppleMediaServices)
+ (_Bool)_isAccountFlagWritable:(id)arg1;
+ (_Bool)_isAccountFlagValue:(id)arg1 validForAccountFlag:(id)arg2;
+ (id)_globalCookieAllowlistWithBag:(id)arg1 forURL:(id)arg2;
+ (id)_getSetCookiesForResponse:(id)arg1;
+ (id)_getSetGlobalCookiesForResponse:(id)arg1;
+ (id)_defaultValueForAccountFlag:(id)arg1;
- (_Bool)ams_valueForAccountFlag:(id)arg1;
- (void)ams_setValue:(_Bool)arg1 forAccountFlag:(id)arg2;
- (void)ams_setPrivateListeningEnabled:(_Bool)arg1 forHomeUserIdentifier:(id)arg2;
- (_Bool)ams_isPrivateListeningEnabledForHomeUserIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=ams_isPrivateListeningEnabled) _Bool ams_privateListeningEnabled;
- (void)ams_setHomeUserID:(id)arg1;
- (void)ams_setHomeIdentifier:(id)arg1;
- (void)ams_setHomeID:(id)arg1;
- (void)ams_removeHomeUserIdentifier:(id)arg1;
- (_Bool)ams_postAccountFlagsWithBagContract:(id)arg1;
- (id)ams_secureToken;
- (id)ams_homeUserIdentifiers;
- (id)ams_homeUserID;
- (id)ams_homeIdentifier;
- (id)ams_homeID;
- (_Bool)ams_bundleOwner;
- (void)ams_addHomeUserIdentifier:(id)arg1;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2 dataProtectionClass:(unsigned long long)arg3 expectedClass:(Class)arg4;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2 expectedClass:(Class)arg3;
- (id)_hashedStorefront;
- (id)_hashedIdentifiers;
- (id)_hashedMultiUserIdentifiers;
- (id)_hashedActiveState;
- (id)_archivedCookiesAtPath:(id)arg1;
- (id)_archivedCookieDataAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)_updateCookiesWithCookiesToAdd:(id)arg1 cookiesToRemove:(id)arg2 error:(id *)arg3;
- (id)_cookiesMatchingProperties:(id)arg1;
@property(readonly, nonatomic, getter=ams_isLocalOrSandboxAccount) _Bool ams_isLocalOrSandboxAccount;
- (void)_ams_setAccountFlagsShimmed:(id)arg1;
- (id)_ams_getAccountFlagsShimmedWithError:(id *)arg1;
- (_Bool)_ams_migrateCookieProperties:(id)arg1 intoCookies:(id)arg2 error:(id *)arg3;
- (_Bool)_ams_setCookieProperties:(id)arg1;
- (id)_ams_cookieProperties;
- (id)_accountPropertyForKey:(id)arg1 dataProtectionClass:(unsigned long long)arg2 expectedClasses:(id)arg3 error:(id *)arg4;
- (id)_accountPropertyForKey:(id)arg1 expectedClassContainedInArray:(Class)arg2;
- (id)_accountPropertyForKey:(id)arg1 expectedClass:(Class)arg2;
- (_Bool)_accountPropertyBooleanForKey:(id)arg1;
@property(readonly, nonatomic) NSString *hashedDescription;
- (_Bool)ams_removeCookiesMatchingProperties:(id)arg1 error:(id *)arg2;
- (_Bool)ams_removeCookiesMatchingProperties:(id)arg1;
- (_Bool)ams_removeCookies:(id)arg1 error:(id *)arg2;
- (_Bool)ams_removeCookies:(id)arg1;
- (_Bool)ams_removeAllCookiesWithError:(id *)arg1;
- (_Bool)ams_removeAllCookies;
- (id)ams_cookiesForURL:(id)arg1 bag:(id)arg2 cleanupGlobalCookies:(_Bool)arg3;
- (id)ams_cookiesForURL:(id)arg1 bag:(id)arg2;
- (id)ams_cookiesForURL:(id)arg1;
- (_Bool)ams_addGlobalCookiesForResult:(id)arg1;
- (_Bool)ams_addGlobalCookiesForResponse:(id)arg1;
- (_Bool)ams_addCookiesForResult:(id)arg1;
- (_Bool)ams_addCookiesForResponse:(id)arg1 error:(id *)arg2;
- (_Bool)ams_addCookiesForResponse:(id)arg1;
- (_Bool)ams_addCookies:(id)arg1 error:(id *)arg2;
- (_Bool)ams_addCookies:(id)arg1;
- (id)ams_storefrontForMediaType:(id)arg1;
- (void)ams_setStorefront:(id)arg1 forMediaType:(id)arg2;
- (void)ams_setInUse:(_Bool)arg1;
- (void)ams_setActive:(_Bool)arg1 forMediaType:(id)arg2;
- (void)ams_setAccountFlagValue:(id)arg1 forAccountFlag:(id)arg2;
- (long long)ams_mergePrivacyAcknowledgement:(id)arg1;
- (_Bool)ams_isInRestrictedRegionWithBag:(id)arg1 shouldWaitForSync:(_Bool)arg2;
- (id)ams_isInRestrictedRegionWithBag:(id)arg1 waitForSync:(_Bool)arg2;
- (_Bool)ams_isDuplicate:(id)arg1;
- (_Bool)ams_isActiveForMediaType:(id)arg1;
- (_Bool)ams_encryptAccountFlags;
- (id)ams_delta:(id)arg1;
- (id)ams_accountFlagValueForAccountFlag:(id)arg1;
@property(readonly, nonatomic) NSString *ams_storefront;
- (void)ams_setValidPayment:(_Bool)arg1;
- (void)ams_setStorefront:(id)arg1;
- (void)ams_setServerResponse:(id)arg1;
- (void)ams_setRegisterSuccessCriteria:(id)arg1;
- (void)ams_setRawPassword:(id)arg1;
- (void)ams_setPushRegistrationThrottleMap:(id)arg1;
- (void)ams_setPassword:(id)arg1;
@property(nonatomic, setter=ams_setMergedPrivacyAcknowledgement:) _Bool ams_mergedPrivacyAcknowledgement;
- (void)ams_setManagedAppleID:(_Bool)arg1;
- (void)ams_setLastName:(id)arg1;
- (void)ams_setInGoodStanding:(_Bool)arg1;
- (void)ams_setiCloudFamily:(_Bool)arg1;
- (void)ams_setFirstName:(id)arg1;
- (void)ams_setDSID:(id)arg1;
- (void)ams_setDisablePrivacyAcknowledgementSync:(_Bool)arg1;
- (void)ams_setDisableAccountFlagsSync:(_Bool)arg1;
- (void)ams_setCreditsString:(id)arg1;
- (void)ams_setAltDSID:(id)arg1;
- (void)ams_setAgreedToTerms:(_Bool)arg1;
- (void)ams_setAccountFlags:(id)arg1;
@property(readonly, nonatomic) unsigned long long ams_securityLevel;
- (_Bool)ams_requiresAuthKitUpdate;
- (id)ams_registerSuccessCriteria;
- (id)ams_rawPassword;
@property(readonly, nonatomic) NSDictionary *ams_pushRegistrationThrottleMap;
@property(readonly, nonatomic) NSDictionary *ams_privacyAcknowledgement;
- (id)ams_password;
@property(nonatomic, setter=ams_setPaidPasswordPromptSetting:) unsigned long long ams_paidPasswordPromptSetting;
@property(readonly, nonatomic) NSString *ams_lastName;
- (id)ams_lastAuthenticationServerResponse;
- (_Bool)ams_isValidPayment;
@property(readonly, nonatomic, getter=ams_isSandboxAccount) _Bool ams_sandboxAccount;
@property(readonly, nonatomic, getter=ams_isManagedAppleID) _Bool ams_managedAppleID;
@property(readonly, nonatomic, getter=ams_isLocalAccount) _Bool ams_localAccount;
@property(readonly, nonatomic, getter=ams_isiTunesAccount) _Bool ams_iTunesAccount;
- (_Bool)ams_isInGoodStanding;
@property(readonly, nonatomic, getter=ams_isIDMSAccount) _Bool ams_IDMSAccount;
- (_Bool)ams_isiCloudFamily;
@property(readonly, nonatomic, getter=ams_isiCloudAccount) _Bool ams_iCloudAccount;
@property(readonly, nonatomic, getter=ams_isHSA2) _Bool ams_HSA2;
@property(readonly, nonatomic) NSString *ams_fullName;
@property(nonatomic, setter=ams_setFreePasswordPromptSetting:) unsigned long long ams_freePasswordPromptSetting;
@property(readonly, nonatomic) NSString *ams_firstName;
@property(readonly, nonatomic) NSNumber *ams_DSID;
- (_Bool)ams_disablePrivacyAcknowledgementSync;
- (_Bool)ams_disableAccountFlagsSync;
- (_Bool)ams_didAgreeToTerms;
@property(readonly, nonatomic) NSString *ams_creditsString;
@property(readonly, nonatomic) NSArray *ams_cookies;
@property(readonly, nonatomic) NSArray *ams_automaticDownloadKinds;
@property(readonly, nonatomic) NSString *ams_altDSID;
@property(readonly, nonatomic) AMSAccountIdentity *ams_accountID;
- (id)ams_accountFlags;
- (_Bool)ams_setAccountFlagOverrideValue:(id)arg1 forAccountFlag:(id)arg2;
- (id)ams_accountFlagOverrideValueForAccountFlag:(id)arg1;
- (_Bool)ams_migrateCookiePropertiesWithError:(id *)arg1;
- (_Bool)ams_copyStorefrontFromAccount:(id)arg1;
- (id)ams_cookieDatabasePath;
@property(retain, nonatomic, setter=ams_setLastRestrictedRegionSyncTimestamp:) NSNumber *ams_lastRestrictedRegionSyncTimestamp;
@property(retain, nonatomic, getter=ams_isBundleOwner, setter=ams_setIsBundleOwner:) NSNumber *ams_isBundleOwner;
@property(nonatomic, getter=ams_isDemoAccount, setter=ams_setDemoAccount:) _Bool ams_demoAccount;
@property(nonatomic, setter=ams_setBiometricsState:) long long ams_biometricsState;
@property(nonatomic, setter=ams_setLastAuthenticationCredentialSource:) unsigned long long ams_lastAuthenticationCredentialSource;
@property(readonly, nonatomic) NSString *ams_dataMigrationStoragePath;
@property(readonly, nonatomic) NSDictionary *ams_allStorefronts;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

