//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCLowDiskDelegate-Protocol.h>

@class BRCAccountSession, NSString, br_pacer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCDiskSpaceReclaimer : NSObject <BRCLowDiskDelegate>
{
    BRCAccountSession *_session;
    _Bool _isClosed;
    br_pacer *_purgePacer;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (double)onDiskAccessTimeDeltaForUrgency:(int)arg1;
+ (double)accessTimeDeltaForUrgency:(int)arg1;
+ (int)urgencyForCacheDeleteUrgency:(int)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)performOptimizeStorageWithTimeDelta:(double)arg1 onDiskAccessTimeDelta:(double)arg2 error:(id *)arg3;
- (void)requestPurgeSpace;
- (void)_requestPurgeSpace;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(_Bool)arg2;
- (_Bool)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;
- (_Bool)renameAndUnlinkInBackgroundItemAtRelpath:(id)arg1;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (void)_enumerateItemsForEvictSyncWithBlock:(CDUnknownBlockType)arg1 withUrgency:(int)arg2;
- (void)_enumerateItemsForEvictSyncWithBlock:(CDUnknownBlockType)arg1 withTimeDelta:(double)arg2 onDiskAccessTimeDelta:(double)arg3;
- (id)accessTimestampForDocument:(id)arg1;
- (_Bool)documentWasAccessedRecently:(id)arg1;
- (void)didUpdateMtimeOnDocument:(id)arg1;
- (void)didAccessDocument:(id)arg1;
- (_Bool)overwriteDocumentAccessTime:(id)arg1 atime:(unsigned long long)arg2;
- (_Bool)documentUpdateEvictability:(id)arg1;
- (_Bool)documentWasDeleted:(id)arg1;
- (_Bool)documentWasCreated:(id)arg1;
- (long long)periodicReclaimSpace;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (void)_asyncAutovacuumIfNeeds:(id)arg1;
- (long long)_vacuumDB:(id)arg1 amount:(long long)arg2 withUrgency:(int)arg3;
- (long long)_doIncrementalVacuum:(id)arg1 amount:(long long)arg2;
- (long long)_doFullVacuum:(id)arg1;
- (long long)_fullVacuumIfPossible:(id)arg1;
- (long long)_dbAutovacuumableSpaceInBytes:(id)arg1;
- (long long)_dbSizeInBytes:(id)arg1;
- (long long)computePurgableSpaceWithUrgency:(int)arg1;
- (id)computePurgeableSpaceForAllUrgencies;
- (void)close;
- (id)initWithAccountSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
