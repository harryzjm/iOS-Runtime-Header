//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSArray, NSString;

@interface ACAccountStore (AppleMediaServices)
+ (id)_secureTokenForIdentifier:(id)arg1;
+ (id)_getSetUserCookiesForResponse:(id)arg1;
+ (id)_getSetGlobalCookiesForResponse:(id)arg1;
+ (id)ams_accountTypeIdentifierForMediaType:(id)arg1;
+ (id)ams_sharedAccountStoreForProcessInfo:(id)arg1;
+ (id)ams_sharedAccountStoreForMediaType:(id)arg1;
+ (id)ams_sharedAccountStore;
- (id)ams_iTunesSandboxAccounts;
- (void)_createLocalAccount;
- (id)_allCommerceiTunesAccounts;
- (id)_alliTunesAccounts;
- (_Bool)_addUserCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (_Bool)_addGlobalCookiesForResponse:(id)arg1 error:(id *)arg2;
- (_Bool)ams_removeCookiesMatchingProperties:(id)arg1 error:(id *)arg2;
- (_Bool)ams_addCookiesForResponse:(id)arg1 request:(id)arg2 account:(id)arg3 error:(id *)arg4;
- (_Bool)ams_addCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (_Bool)ams_setSecureToken:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (id)ams_secureTokenForAccount:(id)arg1;
- (id)ams_saveAccount:(id)arg1 verifyCredentials:(_Bool)arg2;
- (id)ams_iTunesAccountWithUsername:(id)arg1;
- (id)ams_iTunesAccountWithDSID:(id)arg1;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1;
@property(readonly, nonatomic) NSString *ams_mediaType;
@property(readonly, nonatomic) ACAccount *ams_localiTunesAccount;
@property(readonly, nonatomic) NSArray *ams_iTunesAccounts;
@property(readonly, nonatomic) ACAccount *ams_activeiTunesAccount;
@property(readonly, nonatomic) ACAccount *ams_activeiCloudAccount;
@end

