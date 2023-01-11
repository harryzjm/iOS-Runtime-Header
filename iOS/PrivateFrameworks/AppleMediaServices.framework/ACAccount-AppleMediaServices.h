//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccount.h>

#import <AppleMediaServices/AMSHashable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface ACAccount (AppleMediaServices) <AMSHashable>
+ (_Bool)_isAccountFlagWritable:(id)arg1;
+ (_Bool)_defaultValueForAccountFlag:(id)arg1;
- (id)ams_secureToken;
- (void)_setAccountProperty:(id)arg1 forKey:(id)arg2 expectedClass:(Class)arg3;
- (void)_setCookies:(id)arg1;
- (id)_createCookieStorage;
- (id)_cookiesMatchingProperties:(id)arg1;
- (id)_accountPropertyForKey:(id)arg1 expectedClass:(Class)arg2;
@property(readonly, nonatomic) NSString *hashedDescription;
- (void)ams_removeCookiesMatchingProperties:(id)arg1;
- (void)ams_removeCookies:(id)arg1;
- (void)ams_removeAllCookies;
- (id)ams_cookiesForURL:(id)arg1;
- (void)ams_addCookies:(id)arg1;
- (_Bool)ams_valueForAccountFlag:(id)arg1;
- (void)ams_setValue:(_Bool)arg1 forAccountFlag:(id)arg2;
- (_Bool)ams_postAccountFlagsWithBagContract:(id)arg1;
- (_Bool)ams_isDuplicate:(id)arg1;
@property(readonly, nonatomic) NSString *ams_storefront;
- (void)ams_setValidPayment:(_Bool)arg1;
- (void)ams_setStorefront:(id)arg1;
- (void)ams_setRawPassword:(id)arg1;
- (void)ams_setPassword:(id)arg1;
- (void)ams_setLastName:(id)arg1;
- (void)ams_setInGoodStanding:(_Bool)arg1;
- (void)ams_setiCloudFamily:(_Bool)arg1;
- (void)ams_setFirstName:(id)arg1;
- (void)ams_setDSID:(id)arg1;
- (void)ams_setCreditsString:(id)arg1;
- (void)ams_setAltDSID:(id)arg1;
- (void)ams_setAgreedToTerms:(_Bool)arg1;
- (void)ams_setAccountFlags:(id)arg1;
- (_Bool)ams_requiresAuthKitUpdate;
- (id)ams_rawPassword;
- (id)ams_password;
@property(readonly, nonatomic) NSString *ams_lastName;
- (_Bool)ams_isValidPayment;
@property(readonly, nonatomic, getter=ams_isSandboxAccount) _Bool ams_sandboxAccount;
@property(readonly, nonatomic, getter=ams_isManagedAppleID) _Bool ams_managedAppleID;
@property(readonly, nonatomic, getter=ams_isLocalAccount) _Bool ams_localAccount;
@property(readonly, nonatomic, getter=ams_isiTunesAccount) _Bool ams_iTunesAccount;
- (_Bool)ams_isInGoodStanding;
@property(readonly, nonatomic, getter=ams_isIDMSAccount) _Bool ams_IDMSAccount;
- (_Bool)ams_isiCloudFamily;
@property(readonly, nonatomic, getter=ams_isiCloudAccount) _Bool ams_iCloudAccount;
@property(readonly, nonatomic, getter=ams_isDemoAccount) _Bool ams_demoAccount;
@property(readonly, nonatomic) NSString *ams_fullName;
@property(readonly, nonatomic) NSString *ams_firstName;
@property(readonly, nonatomic) NSNumber *ams_DSID;
- (_Bool)ams_didAgreeToTerms;
@property(readonly, nonatomic) NSString *ams_creditsString;
@property(readonly, nonatomic) NSArray *ams_cookies;
@property(readonly, nonatomic) NSString *ams_altDSID;
- (id)ams_accountFlags;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

