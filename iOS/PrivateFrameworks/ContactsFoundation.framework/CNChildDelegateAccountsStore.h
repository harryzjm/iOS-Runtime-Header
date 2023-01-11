//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNDelegateAccountSink-Protocol.h>
#import <ContactsFoundation/CNDelegateAccountSource-Protocol.h>

@class ACAccount, ACAccountStore, NSString;

@interface CNChildDelegateAccountsStore : NSObject <CNDelegateAccountSource, CNDelegateAccountSink>
{
    ACAccount *_parentAccount;
    ACAccountStore *_accountStore;
}

+ (void)configureChildAccount:(id)arg1 withSettingsFromDelegateInfo:(id)arg2 parent:(id)arg3;
+ (id)os_log;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) ACAccount *parentAccount; // @synthesize parentAccount=_parentAccount;
- (void).cxx_destruct;
- (id)removeAccount:(id)arg1;
- (id)updateAccount:(id)arg1;
- (id)addChildWithDelegateInfo:(id)arg1;
- (_Bool)updateAccounts:(id)arg1 error:(id *)arg2;
- (id)primaryAccount;
- (id)delegateAccounts;
@property(readonly, copy) NSString *description;
- (id)initWithParentAccount:(id)arg1 accountStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
