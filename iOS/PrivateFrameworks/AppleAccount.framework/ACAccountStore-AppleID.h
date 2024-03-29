//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (AppleID)
- (id)accountWithAppleID:(id)arg1;
- (id)accountsWithAccountType:(id)arg1 appleID:(id)arg2;
- (id)aa_authKitAccountForAltDSID:(id)arg1;
- (id)aa_grandSlamAccountForAltDSID:(id)arg1;
- (id)aa_grandSlamAccountForiCloudAccount:(id)arg1;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)aa_registerAppleAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)aa_loginAndUpdateiCloudAccount:(id)arg1 delegateParams:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)aa_loginAndUpdateiCloudAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_performUpdateRequestWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)aa_recommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1;
- (id)aa_accountsEnabledForDataclass:(id)arg1;
- (id)aa_appleAccountWithAltDSID:(id)arg1;
- (id)aa_appleAccountWithPersonID:(id)arg1;
- (id)aa_appleAccountWithUsername:(id)arg1;
- (void)aa_primaryAppleAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)aa_appleAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (id)aa_primaryAppleAccountWithPreloadedDataclasses;
- (id)aa_primaryAppleAccount;
- (id)aa_accountsForAccountClass:(id)arg1;
- (id)aa_appleAccountsWithError:(id *)arg1;
- (id)aa_appleAccounts;
- (id)aa_dataSeparatedAccounts;
- (_Bool)aa_isUsingiCloud;
- (id)aa_appleAccountType;
@end

