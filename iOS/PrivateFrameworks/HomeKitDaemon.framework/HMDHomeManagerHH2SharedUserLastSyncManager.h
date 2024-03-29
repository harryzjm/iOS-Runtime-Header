//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMFTimer, NSDate, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeManagerHH2SharedUserLastSyncManager : HMFObject
{
    struct os_unfair_lock_s _lock;
    _Bool _valid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHomeManager *_homeManager;
    NSMutableArray *_userLastSyncs;
    NSMutableDictionary *_homeToUserMap;
    NSDate *_creationDate;
    HMFTimer *_delayTimer;
}

+ (id)shortDescription;
- (void).cxx_destruct;
@property(readonly, getter=isValid) _Bool valid;
@property(readonly, copy) NSString *description;
- (id)privateDescription;
- (id)shortDescription;
- (void)timerDidFire:(id)arg1;
- (void)_pushAllUserSyncData;
- (void)removeUserLastSyncData:(id)arg1;
- (void)_removeAllUserLastSyncData;
- (void)_scheduleNextPush;
- (void)scheduleNextPush;
- (double)_nextInterval;
- (_Bool)_shouldExpire;
- (_Bool)_shouldPushNow;
- (double)_pushInterval;
- (double)_expireInterval;
- (double)_interval;
- (void)configure;
- (id)initWithHomeManager:(id)arg1 archivePaths:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

