//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, WBSKeychainCredentialNotificationMonitor;

@interface WBSSavedPasswordStore : NSObject
{
    NSMutableDictionary *_domainToUsers;
    NSArray *_savedPasswords;
    WBSKeychainCredentialNotificationMonitor *_keychainMonitor;
    id _keychainNotificationRegistrationToken;
}

+ (void)removePassword:(id)arg1;
+ (id)savedPasswordForURL:(id)arg1 user:(id)arg2 password:(id)arg3;
+ (id)sharedStore;
- (void).cxx_destruct;
- (void)reset;
- (void)_postSavedPasswordStoreDidChangeNotification;
- (id)saveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (_Bool)canSaveUser:(id)arg1 password:(id)arg2 forProtectionSpace:(id)arg3 highLevelDomain:(id)arg4;
- (_Bool)changeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (_Bool)canChangeSavedPassword:(id)arg1 toUser:(id)arg2 password:(id)arg3;
- (void)removeSite:(id)arg1 fromPassword:(id)arg2;
- (void)removePassword:(id)arg1;
- (void)_removePassword:(id)arg1;
@property(readonly, nonatomic) NSArray *savedPasswords;
- (id)_allInternetPasswordEntriesFromKeychain;
- (void)dealloc;
- (id)init;

@end

