//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue;

@interface CKDAccountNotifier : NSObject
{
    int _accountChangedToken;
    NSMapTable *_notificationHandlers;
    NSOperationQueue *_accountChangeHandlerQueue;
}

+ (id)sharedNotifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *accountChangeHandlerQueue; // @synthesize accountChangeHandlerQueue=_accountChangeHandlerQueue;
@property(retain, nonatomic) NSMapTable *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property(nonatomic) int accountChangedToken; // @synthesize accountChangedToken=_accountChangedToken;
- (void)unregisterObserverForAccountChangeNotification:(id)arg1;
- (void)registerObserver:(id)arg1 forAccountChangeNotification:(CDUnknownBlockType)arg2;
- (void)postAccountChangedNotificationToClients;
- (void)postAccountChangedNotificationWithAccountID:(id)arg1 changeType:(long long)arg2;
- (void)dealloc;
- (id)init;

@end
