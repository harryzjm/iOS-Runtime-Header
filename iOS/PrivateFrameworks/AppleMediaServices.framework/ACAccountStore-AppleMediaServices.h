//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSArray, NSString;

@interface ACAccountStore (AppleMediaServices)
+ (id)_secureTokenForIdentifier:(id)arg1;
+ (id)ams_accountTypeIdentifierForMediaType:(id)arg1;
+ (id)ams_sharedAccountStoreForMediaType:(id)arg1;
+ (id)ams_sharedAccountStoreForClient:(id)arg1;
+ (id)ams_sharedAccountStore;
+ (id)ams_sharedAccountStoreForProcessInfo:(id)arg1;
- (id)ams_iTunesSandboxAccounts;
- (id)ams_iTunesAccountWithHomeUserIdentifier:(id)arg1;
- (id)ams_iTunesAccountWithHomeUserID:(id)arg1;
- (id)ams_iTunesAccountWithHomeID:(id)arg1;
@property(readonly, nonatomic) NSArray *ams_iTunesAccountsWithHomeUserIdentifiers;
- (id)ams_iTunesAccountsWithHomeUserID;
- (id)ams_iTunesAccountForHomeWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)ams_iTunesAccountForHomeWithIdentifier:(id)arg1;
- (id)_saveAccount:(id)arg1 verifyCredentials:(_Bool)arg2;
- (id)_iTunesAccountsForAccountType:(id)arg1;
- (void)_updateStorefrontInLocalAccount:(id)arg1;
- (id)_fetchLocaliTunesAccountForAccountType:(id)arg1 shouldUpdateStorefront:(_Bool)arg2;
- (id)_createLocaliTunesAccountForAccountType:(id)arg1;
- (id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2;
- (_Bool)_addUserCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (_Bool)_addGlobalCookiesForResponse:(id)arg1 error:(id *)arg2;
- (id)_accountTypeForMediaType:(id)arg1;
- (_Bool)ams_removeCookiesMatchingProperties:(id)arg1 error:(id *)arg2;
- (_Bool)ams_addCookiesForResult:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (_Bool)ams_addCookiesForResponse:(id)arg1 request:(id)arg2 account:(id)arg3 error:(id *)arg4;
- (_Bool)ams_addCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (_Bool)ams_setSecureToken:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (id)ams_setiTunesAccount:(id)arg1 forHomeWithIdentifier:(id)arg2;
- (id)ams_secureTokenForAccount:(id)arg1;
- (id)ams_saveAccount:(id)arg1 verifyCredentials:(_Bool)arg2;
- (id)ams_saveAccount:(id)arg1;
- (id)ams_localiTunesAccountForAccountMediaType:(id)arg1 updateStorefront:(_Bool)arg2;
- (id)ams_localiTunesAccountForAccountMediaType:(id)arg1;
- (id)ams_mediaAccountForHomeWithIdentifier:(id)arg1;
- (id)ams_localiTunesAccountForAccountType:(id)arg1;
- (id)ams_iTunesAccountsForMediaTypes:(id)arg1;
- (id)ams_iTunesAccountsForMediaType:(id)arg1;
- (id)ams_iTunesAccountWithUsername:(id)arg1 forMediaType:(id)arg2;
- (id)ams_iTunesAccountWithUsername:(id)arg1;
- (id)ams_iTunesAccountWithDSID:(id)arg1 forMediaType:(id)arg2;
- (id)ams_iTunesAccountWithDSID:(id)arg1;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 forMediaType:(id)arg4;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 forMediaType:(id)arg2;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1;
- (id)ams_iTunesAccountForAccount:(id)arg1;
- (id)ams_IDSAccountForAccount:(id)arg1;
- (id)ams_IDMSAccountForAccount:(id)arg1;
- (id)ams_iCloudAccountForAccount:(id)arg1;
- (id)ams_cookiesForURL:(id)arg1 bag:(id)arg2;
- (id)ams_cookiesForURL:(id)arg1;
- (id)ams_fetchGrandSlamTokenForAccount:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;
- (id)ams_activeiTunesAccountForMediaType:(id)arg1;
- (id)ams_accountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 accountTypeIdentifier:(id)arg4;
@property(readonly, nonatomic) NSString *ams_mediaType;
- (id)ams_fetchLocaliTunesAccount;
- (id)ams_localiTunesAccount;
@property(readonly, nonatomic) NSArray *ams_iTunesAccounts;
@property(readonly, nonatomic) ACAccount *ams_activeiTunesAccount;
@property(readonly, nonatomic) ACAccount *ams_activeiCloudAccount;
@property(readonly, nonatomic, getter=ams_isActiveAccountCombined) _Bool ams_activeAccountCombined;
@property(readonly, nonatomic) NSArray *ams_alliTunesAccounts;
- (id)_ams_fetchAccountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2;
- (id)_ams_fetchAccountsWithAccountType:(id)arg1 options:(unsigned long long)arg2;
- (id)_ams_fetchAccountWithIdentifier:(id)arg1;
- (id)_ams_fetchAccountTypeWithAccountTypeIdenfitier:(id)arg1;
- (id)_ams_accountWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)_ams_accountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_ams_accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_ams_accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id *)arg2;
- (id)_ams_localiTunesAccountForAccountType:(id)arg1 shouldUpdateStorefront:(_Bool)arg2;
- (id)ams_saveAccount:(id)arg1 withOptions:(long long)arg2;
- (_Bool)ams_isAccountNew:(id)arg1;
- (id)ams_demoAccount;
- (id)_ams_localiTunesAccountAfterUpdatingStorefront:(_Bool)arg1;
@property(readonly, nonatomic) ACAccount *_ams_localiTunesAccount;
@end

