//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface IMDAccountController : NSObject
{
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_activeAccounts;
    _Bool _isLoading;
    _Bool _isFirstLoad;
}

+ (id)sharedAccountController;
+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)_checkPowerAssertion;
- (id)anySessionForServiceName:(id)arg1;
- (id)sessionForAccount:(id)arg1;
@property(readonly, nonatomic) NSArray *activeSessions;
- (id)accountForIDSAccountUniqueID:(id)arg1;
- (id)connectingAccountsForService:(id)arg1;
@property(readonly, nonatomic) NSArray *connectingAccounts;
- (id)connectedAccountsForService:(id)arg1;
@property(readonly, nonatomic) NSArray *connectedAccounts;
- (id)activeAccountsForService:(id)arg1;
@property(readonly, nonatomic) NSArray *activeAccounts;
- (id)accountsForService:(id)arg1;
- (id)accountForAccountID:(id)arg1;
- (id)accountsForLoginID:(id)arg1 onService:(id)arg2;
@property(readonly, nonatomic) NSArray *accounts;
- (void)setupAccount:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)addAccount:(id)arg1;
- (_Bool)isAccountActive:(id)arg1;
- (_Bool)_isAccountActive:(id)arg1 forService:(id)arg2;
- (void)deactivateAccount:(id)arg1 force:(_Bool)arg2;
- (void)deactivateAccounts:(id)arg1;
- (void)deactivateAccount:(id)arg1;
- (void)deactivateAccounts:(id)arg1 force:(_Bool)arg2;
- (void)activateAccounts:(id)arg1;
- (void)activateAccount:(id)arg1;
- (void)save;
- (void)deferredSave;
- (void)load;
- (void)_daemonWillShutdown:(id)arg1;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) NSDictionary *loadOldStatusStore;
- (id)_superFormatFromAIML:(id)arg1;

@end

