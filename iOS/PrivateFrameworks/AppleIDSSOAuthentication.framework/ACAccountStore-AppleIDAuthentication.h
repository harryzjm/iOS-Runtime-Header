//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (AppleIDAuthentication)
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)aida_iCloudAccountMatchingAppleIDAuthAccount:(id)arg1;
- (id)aida_accountForPrimaryiCloudAccount;
- (id)aida_accountForiCloudAccount:(id)arg1;
- (id)aida_AppleIDAuthenticationAccounts;
- (id)aida_AppleIDAuthenticationAccountType;
- (id)_primaryiCloudAccount;
@end

