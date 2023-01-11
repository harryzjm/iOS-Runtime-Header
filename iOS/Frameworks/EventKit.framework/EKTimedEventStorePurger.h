//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKEventStore;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EKTimedEventStorePurger : NSObject
{
    _Bool _ignoreLowLevelDatabaseChangedNotifications;
    _Bool _internalPurgingAllowed;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _internalTimeout;
    CDUnknownBlockType _internalCreationBlock;
    CDUnknownBlockType _internalChangedBlock;
    EKEventStore *_internalStore;
}

@property(retain, nonatomic) EKEventStore *internalStore; // @synthesize internalStore=_internalStore;
@property(nonatomic) _Bool internalPurgingAllowed; // @synthesize internalPurgingAllowed=_internalPurgingAllowed;
@property(nonatomic) _Bool ignoreLowLevelDatabaseChangedNotifications; // @synthesize ignoreLowLevelDatabaseChangedNotifications=_ignoreLowLevelDatabaseChangedNotifications;
@property(copy, nonatomic) CDUnknownBlockType internalChangedBlock; // @synthesize internalChangedBlock=_internalChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType internalCreationBlock; // @synthesize internalCreationBlock=_internalCreationBlock;
@property(nonatomic) double internalTimeout; // @synthesize internalTimeout=_internalTimeout;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)_fireChangedBlock;
- (void)_eventStoreChangedNotification:(id)arg1;
- (void)_removeTransientEventStoreChangeObserver;
- (void)_databaseChangedExternally;
- (void)_removePersistentNotificationObservers;
- (void)_addPersistentNotificationObservers;
- (void)_uninstallTimer;
- (void)_resetIdleTimer;
- (id)acquireCachedEventStoreOrCreate:(_Bool)arg1;
@property(nonatomic) _Bool purgingAllowed;
@property(copy, nonatomic) CDUnknownBlockType changedBlock;
@property(copy, nonatomic) CDUnknownBlockType creationBlock;
@property(nonatomic) double timeout;
- (void)dealloc;
- (id)init;

@end

