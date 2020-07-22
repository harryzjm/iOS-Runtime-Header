//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSMutableDictionary, NSOperationQueue, SKUIMediaSocialAuthor;

@interface MSCLAccountStore : NSObject
{
    NSMutableDictionary *_accounts;
    ACAccountStore *_accountStore;
    SKUIMediaSocialAuthor *_author;
    NSOperationQueue *_operationQueue;
}

@property(readonly, nonatomic) SKUIMediaSocialAuthor *author; // @synthesize author=_author;
- (void).cxx_destruct;
- (void)_updateAccountInfoWithServiceIdentifier:(id)arg1;
- (id)_ssvServiceIdentifierForMSCLServiceIdentifier:(id)arg1;
- (void)_handleAccountStoreDidChange:(id)arg1;
- (id)_facebookClientIdFromBag:(id)arg1;
- (id)_userDefaultsEnabledServiceKeyForServiceIdentifier:(id)arg1;
- (void)verifyUserName:(id)arg1 password:(id)arg2 serviceIdentifier:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)unlinkAccount:(id)arg1;
- (void)updateFacebookPreferredPageIdentifier:(id)arg1 forAccount:(id)arg2;
- (void)setAccountEnabled:(_Bool)arg1 forServiceIdentifier:(id)arg2;
- (_Bool)saveAccount:(id)arg1;
- (void)requestAccessToAccountForServiceIdentifier:(id)arg1 permissions:(id)arg2 authenticationPresentingViewController:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)renewCredentialsForAccount:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)removeAccount:(id)arg1;
- (void)registerExternalDestination:(id)arg1 forAccount:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)isAccountEnabledForServiceIdentifier:(id)arg1;
- (id)accountForServiceIdentifier:(id)arg1;
@property(nonatomic) long long preferredFacebookAutopostingDestination;
- (void)dealloc;
- (id)initWithAuthor:(id)arg1;

@end

