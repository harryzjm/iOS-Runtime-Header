//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADAutoAssetPersisted, NSMutableDictionary, SUCoreLog;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADAutoSetLocker : NSObject
{
    SUCoreLog *_logger;
    NSObject<OS_dispatch_queue> *_lockerQueue;
    MADAutoAssetPersisted *_persistedState;
    NSMutableDictionary *_locksBySelector;
    NSMutableDictionary *_eliminateSelectors;
}

+ (void)forceGlobalUnlock:(id)arg1;
+ (void)addClientLockReasons:(id)arg1 basedOnControl:(id)arg2;
+ (id)migrateMismatchedPersistedStateVersion:(id)arg1 forEntryID:(id)arg2 withMismatchedState:(id)arg3;
+ (void)resumeFromPersistedWithDownloadedSelectors:(id)arg1;
+ (id)lockedSelectorsForEliminate:(id)arg1;
+ (id)copyOfLocksBySelector;
+ (id)newCurrentLockUsageForSelector:(id)arg1;
+ (_Bool)endedAllPreviousLocksByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 endError:(id *)arg4;
+ (_Bool)endedPreviousLocksByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 removingLockCount:(long long)arg4 endError:(id *)arg5;
+ (_Bool)endedLockByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 endError:(id *)arg4;
+ (_Bool)continuedLockByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 withUsagePolicy:(id)arg4 continueError:(id *)arg5;
+ (_Bool)additionalLockedByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 withUsagePolicy:(id)arg4 lockError:(id *)arg5;
+ (_Bool)lockedByClient:(id)arg1 forAssetSetIdentifier:(id)arg2 forAtomicInstance:(id)arg3 forLockReason:(id)arg4 withUsagePolicy:(id)arg5 lockError:(id *)arg6;
+ (id)autoAssetLocker;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *eliminateSelectors; // @synthesize eliminateSelectors=_eliminateSelectors;
@property(retain, nonatomic) NSMutableDictionary *locksBySelector; // @synthesize locksBySelector=_locksBySelector;
@property(readonly, retain, nonatomic) MADAutoAssetPersisted *persistedState; // @synthesize persistedState=_persistedState;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *lockerQueue; // @synthesize lockerQueue=_lockerQueue;
@property(readonly, retain, nonatomic) SUCoreLog *logger; // @synthesize logger=_logger;
- (id)_newAssetLockSummaryWithoutSelectorOrAttributes:(id)arg1;
- (id)summary;
- (id)description;
- (_Bool)_anyCurrentLocksForEliminate:(id)arg1;
- (id)_refreshFilesystemMetadataLastInterest:(id)arg1;
- (void)_logPersistedTableOfContents:(id)arg1;
- (void)_logPersistedRemovedEntry:(id)arg1 removedAssetLock:(id)arg2 forSelector:(id)arg3 message:(id)arg4;
- (void)_logPersistedEntry:(id)arg1 operation:(id)arg2 persistingAssetLock:(id)arg3 forSelector:(id)arg4 message:(id)arg5;
- (_Bool)_endLockDecideUnlocked:(id)arg1;
- (void)_mergeContinuedLock:(id)arg1 intoExistingLock:(id)arg2;
- (void)_mergeAddedLock:(id)arg1 intoExistingLock:(id)arg2;
- (void)_persistRemoveAssetLock:(id)arg1 removedAssetLock:(id)arg2 message:(id)arg3;
- (_Bool)_persistAssetLock:(id)arg1 operation:(id)arg2 forAssetLock:(id)arg3 message:(id)arg4;
- (void)_removeAssetLock:(id)arg1 lastClient:(id)arg2 forSelector:(id)arg3 message:(id)arg4;
- (id)_assetIDOfLock:(id)arg1;
- (long long)_currentLockCountOfLock:(id)arg1;
- (_Bool)_endLocksByClient:(id)arg1 forAssetSelector:(id)arg2 forLockReason:(id)arg3 removingLockCount:(long long)arg4 endError:(id *)arg5;
- (id)init;

@end

