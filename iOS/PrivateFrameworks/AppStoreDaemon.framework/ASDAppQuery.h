//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/ASDNotificationCenterNotificationObserver-Protocol.h>
#import <AppStoreDaemon/ASDNotificationCenterProgressObserver-Protocol.h>

@class ASDNotificationCenter, ASDServiceBroker, NSMutableDictionary, NSPredicate, NSString;
@protocol ASDAppQueryResultsObserver, OS_dispatch_queue;

@interface ASDAppQuery : NSObject <ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _hasRunOnce;
    ASDNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id <ASDAppQueryResultsObserver> _observer;
    NSMutableDictionary *_resultCache;
    ASDServiceBroker *_serviceBroker;
    NSPredicate *_predicate;
}

+ (id)_newProgressForApp:(id)arg1 fromRemoteProgress:(id)arg2 usingServiceBroker:(id)arg3;
+ (void)_executeQueryWithPredicate:(id)arg1 usingServiceBroker:(id)arg2 withResultHandler:(CDUnknownBlockType)arg3;
+ (void)anyWithPredicate:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
+ (id)queryWithPredicate:(id)arg1;
+ (id)queryForStoreItemIDs:(id)arg1;
+ (id)queryForStoreApps;
+ (id)queryForBundleIDs:(id)arg1;
@property(readonly) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (void)_sendResultsChangedWithResults:(id)arg1;
- (void)_handleNotificationUnregisteredWithUserInfo:(id)arg1;
- (void)_handleNotificationRegisteredWithUserInfo:(id)arg1;
- (void)_handleNotificationRefreshWithUserInfo:(id)arg1;
- (void)_handleAppsUpdatedWithResults:(id)arg1;
- (void)_handleAppsReplacedWithResults:(id)arg1;
- (void)_handleAppsRemovedWithBundleIDs:(id)arg1;
- (void)_updateCachedResultsWithResults:(id)arg1;
- (id)_replaceCachedResultsWithResults:(id)arg1;
- (id)_removeCachedResultsForBundleIDs:(id)arg1;
- (void)_handleBrokerConnectionNotification:(id)arg1;
- (void)_unitTest_setHasRunOnce:(_Bool)arg1;
- (void)notificationCenter:(id)arg1 receivedProgress:(id)arg2;
- (void)notificationCenter:(id)arg1 receivedNotifications:(id)arg2;
- (void)executeQueryWithResultHandler:(CDUnknownBlockType)arg1;
@property __weak id <ASDAppQueryResultsObserver> observer;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1 serviceBroker:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithPredicate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
