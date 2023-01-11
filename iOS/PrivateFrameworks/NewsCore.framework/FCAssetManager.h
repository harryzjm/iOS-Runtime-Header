//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAssetHandleDelegate-Protocol.h>
#import <NewsCore/FCCacheCoordinatorDelegate-Protocol.h>
#import <NewsCore/FCCacheFlushing-Protocol.h>

@class FCAssetStore, FCCacheCoordinator, FCKeyValueStore, FCNetworkBehaviorMonitor, NSMapTable, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing>
{
    _Bool _flushUnusedAssets;
    _Bool _shouldUseSecureConnectionForCKAssetDownloads;
    NSURL *_directoryURLForCachedAssets;
    NSString *_name;
    NSString *_parentDirectory;
    FCKeyValueStore *_keyValueStore;
    FCAssetStore *_assetStore;
    FCCacheCoordinator *_cacheCoordinator;
    NSMapTable *_assetHandles;
    NSObject<OS_dispatch_queue> *_assetHandlesQueue;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    NSObject<OS_dispatch_queue> *_initQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue; // @synthesize initQueue=_initQueue;
@property(retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetHandlesQueue; // @synthesize assetHandlesQueue=_assetHandlesQueue;
@property(retain, nonatomic) NSMapTable *assetHandles; // @synthesize assetHandles=_assetHandles;
@property(retain, nonatomic) FCCacheCoordinator *cacheCoordinator; // @synthesize cacheCoordinator=_cacheCoordinator;
@property(retain, nonatomic) FCAssetStore *assetStore; // @synthesize assetStore=_assetStore;
@property(retain, nonatomic) FCKeyValueStore *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(copy, nonatomic) NSString *parentDirectory; // @synthesize parentDirectory=_parentDirectory;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *directoryURLForCachedAssets; // @synthesize directoryURLForCachedAssets=_directoryURLForCachedAssets;
@property(nonatomic) _Bool shouldUseSecureConnectionForCKAssetDownloads; // @synthesize shouldUseSecureConnectionForCKAssetDownloads=_shouldUseSecureConnectionForCKAssetDownloads;
@property(nonatomic) _Bool flushUnusedAssets; // @synthesize flushUnusedAssets=_flushUnusedAssets;
- (void).cxx_destruct;
- (_Bool)_dataIsGzipped:(id)arg1;
- (id)_transformerForAssetAtPath:(id)arg1 fromNetworkEvent:(id)arg2;
- (id)_assetKeyForRemoteURL:(id)arg1;
- (void)_initStores;
- (void)_prepareForUseIfNeeded;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (id)operationToFetchFileForAssetHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)assetHandleForURL:(id)arg1 prefetchedFileURL:(id)arg2 lifetimeHint:(long long)arg3;
- (id)assetHandleForCKAssetURLString:(id)arg1 prefetchedData:(id)arg2 unzipIfNeeded:(_Bool)arg3 lifetimeHint:(long long)arg4;
- (id)assetHandleForCKAssetURL:(id)arg1 lifetimeHint:(long long)arg2;
- (id)assetHandleForCKAssetURLString:(id)arg1 lifetimeHint:(long long)arg2;
- (id)_assetHandleForCKAssetURLComponents:(id)arg1 lifetimeHint:(long long)arg2;
- (id)assetHandleForURL:(id)arg1 lifetimeHint:(long long)arg2;
- (id)initWithName:(id)arg1 directory:(id)arg2 networkBehaviorMonitor:(id)arg3;
- (id)init;
- (id)assetHandleForRecordID:(id)arg1 field:(long long)arg2 lifetimeHint:(long long)arg3 contentDatabase:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

