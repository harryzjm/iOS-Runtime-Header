//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDTimer, NSMutableSet, _TtC8MapsSync13MapsSyncStore, _TtC8MapsSync23MapsSyncStoreController;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSPSharedTripBlocklist : NSObject
{
    NSMutableSet *_blockedIdentifiers;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_storeQueue;
    _TtC8MapsSync23MapsSyncStoreController *_storeController;
    _TtC8MapsSync13MapsSyncStore *_store;
    _Bool _waitingForStoreToLoad;
    GCDTimer *_storeLoadTimeoutTimer;
}

+ (void)migrateFromiCloudKVSIfNeeded;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)storeControllerWithDataChanged:(id)arg1;
- (void)storeControllerWithFailedToLoad:(id)arg1;
- (void)storeControllerWithDidLoad:(id)arg1;
- (void)_cancelTimeoutTimer;
- (void)_resumeIsolationQueueIfNeeded;
- (id)_fetchSyncedIdentifiers;
- (void)_reloadBlockedIdentifiersFromSync;
- (void)_purgeExpiredIdentifiersIn:(id)arg1;
- (void)purgeExpiredIdentifiers;
- (void)clearBlockedIdentifiers;
- (void)unblockIdentifiers:(id)arg1;
- (void)blockIdentifiers:(id)arg1;
- (void)blockIdentifier:(id)arg1;
- (_Bool)containsIdentifier:(id)arg1;
- (_Bool)containsAnyIdentifiersInArray:(id)arg1;
- (id)description;
- (id)init;

@end

