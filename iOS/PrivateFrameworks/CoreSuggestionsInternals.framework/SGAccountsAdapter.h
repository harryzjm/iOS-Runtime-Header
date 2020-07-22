//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSRecursiveLock, NSSet;

@interface SGAccountsAdapter : NSObject
{
    NSSet *_usernamesCache;
    ACAccountStore *_accountStore;
    NSRecursiveLock *_primaryICloudAccountLock;
    ACAccount *_cachedPrimaryICloudAccount;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)primaryICloudCalendarAccount;
- (_Bool)hasCalendarAccount:(id)arg1;
- (void)removeNotificationObserver;
- (void)dealloc;
- (void)registerNotificationObserver;
- (void)refreshCacheFromAccountsService;
- (void)accountsStoreDidChange:(id)arg1;
- (id)init;

@end

