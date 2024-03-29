//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMContainerClassPath, MCMUserIdentityCache, NSMutableDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMContainerClassCache : NSObject
{
    _Bool _resyncRequired;
    _Bool _writeThroughEnabled;
    unsigned long long _containerClass;
    MCMContainerClassPath *_containerClassPath;
    NSUUID *_lastCompletedDiskScanUUID;
    CDUnknownBlockType _concurrentWriteThroughHandler;
    NSUUID *_targetDiskScanUUID;
    NSMutableDictionary *_lock_cache;
    NSObject<OS_dispatch_queue> *_fsScanQueue;
    Class _cacheEntryClass;
    MCMUserIdentityCache *_userIdentityCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(readonly, nonatomic) Class cacheEntryClass; // @synthesize cacheEntryClass=_cacheEntryClass;
@property(nonatomic) _Bool writeThroughEnabled; // @synthesize writeThroughEnabled=_writeThroughEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *fsScanQueue; // @synthesize fsScanQueue=_fsScanQueue;
@property(readonly, nonatomic) NSMutableDictionary *lock_cache; // @synthesize lock_cache=_lock_cache;
@property(retain, nonatomic) NSUUID *targetDiskScanUUID; // @synthesize targetDiskScanUUID=_targetDiskScanUUID;
@property(copy, nonatomic) CDUnknownBlockType concurrentWriteThroughHandler; // @synthesize concurrentWriteThroughHandler=_concurrentWriteThroughHandler;
@property(nonatomic) _Bool resyncRequired; // @synthesize resyncRequired=_resyncRequired;
@property(retain, nonatomic) NSUUID *lastCompletedDiskScanUUID; // @synthesize lastCompletedDiskScanUUID=_lastCompletedDiskScanUUID;
@property(readonly, nonatomic) MCMContainerClassPath *containerClassPath; // @synthesize containerClassPath=_containerClassPath;
@property(readonly, nonatomic) unsigned long long containerClass; // @synthesize containerClass=_containerClass;
- (void)_handleUnrecoverableCorruptContainerPath:(id)arg1;
- (id)_setEntry:(id)arg1 forIdentifier:(id)arg2 writeThrough:(_Bool)arg3;
- (id)_concurrent_generateCacheEntryWithURL:(id)arg1 identifier:(id)arg2 containerPath:(id)arg3 schemaVersion:(id)arg4 uuid:(id)arg5 metadata:(id)arg6;
- (id)_concurrent_slowGenerateCacheEntryWithFileHandle:(id)arg1 URL:(id)arg2 identifier:(id)arg3 uuid:(id)arg4 schemaVersion:(id)arg5 containerPath:(id)arg6;
- (void)_concurrent_processCorruptEntry:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_concurrent_processURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_processCorruptEntries:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_processURLs:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_queue_syncWithDisk;
- (_Bool)_checkExistanceOfCacheEntry:(id)arg1 libraryRepair:(id)arg2;
- (void)forceWriteThrough;
- (void)asyncStartSynchronization;
- (void)flush;
- (void)waitForSynchronizationToComplete;
- (_Bool)enumerateCacheEntriesWithEnumerator:(CDUnknownBlockType)arg1;
- (id)setCacheEntry:(id)arg1 forIdentifier:(id)arg2 writeThrough:(_Bool)arg3;
- (id)setCacheEntry:(id)arg1 forIdentifier:(id)arg2;
- (id)cacheEntryForIdentifier:(id)arg1;
- (id)initWithContainerClassPath:(id)arg1 cacheEntryClass:(Class)arg2 targetQueue:(id)arg3 userIdentityCache:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

