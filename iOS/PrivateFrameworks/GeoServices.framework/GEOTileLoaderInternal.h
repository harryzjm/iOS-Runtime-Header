//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOExperimentConfigurationObserver-Protocol.h>
#import <GeoServices/GEOPListStateCapturing-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEOTileServerProxyDelegate-Protocol.h>

@class GEOTileLoaderConfiguration, GEOTileLoaderUsage, GEOTilePool, GEOTileServerProxy, NSMutableArray, NSMutableSet, NSObject, NSString;
@protocol GEOTileLoaderInternalDelegate, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderInternal <GEOPListStateCapturing, GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>
{
    struct list<LoadItem, std::__1::allocator<LoadItem>> _loadItems;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOTilePool *_cache;
    GEOTilePool *_expiringCache;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer>> _timer;
    NSObject<OS_dispatch_queue> *_loadQ;
    NSMutableSet *_openers;
    NSObject<OS_dispatch_queue> *_openersIsolation;
    CDStruct_34734122 _sortPoint;
    GEOTileServerProxy *_proxy;
    _Atomic int _memoryHits;
    _Atomic int _diskHits;
    _Atomic int _networkHits;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)>>> _shrinkCacheRequesters;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)>>> _freeableSizeRequesters;
    NSMutableArray *_tileDecoders;
    NSObject<OS_dispatch_queue> *_tileDecodersIsolation;
    _Bool _networkActive;
    id <GEOTileLoaderInternalDelegate> _internalDelegate;
    NSObject<OS_dispatch_queue> *_internalDelegateQ;
    GEOTileLoaderConfiguration *_config;
    int _rollingBatchId;
    struct deque<ErrorInfo, std::__1::allocator<ErrorInfo>> _recentErrors;
    GEOTileLoaderUsage *_usage;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    unsigned long long _stateCaptureHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cachedTileForKey:(const struct _GEOTileKey *)arg1;
- (id)_findInCache:(const struct _GEOTileKey *)arg1;
- (id)internalDelegateQ;
- (void)setInternalDelegateQ:(id)arg1;
- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg1;
- (id)proxy;
- (void)proxyDidDownloadRegionalResources:(id)arg1;
- (void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
- (void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
- (void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const struct _GEOTileKey *)arg3 info:(id)arg4;
- (void)_removeUsageDataForKey:(const struct _GEOTileKey *)arg1;
- (void)_loadedTileForLocalKey:(struct _GEOTileKey)arg1 preliminary:(_Bool)arg2 quickly:(_Bool)arg3 tileDecoder:(id)arg4 data:(id)arg5 disburseTile:(CDUnknownBlockType)arg6;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 info:(id)arg3;
- (id)_tileDecoderForTileKey:(const struct _GEOTileKey *)arg1 quickly:(_Bool *)arg2;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)expireTilesWithPredicate:(CDUnknownBlockType)arg1;
- (void)registerTileLoader:(Class)arg1;
- (void)registerTileDecoder:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_tileEditionChanged:(id)arg1;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)clearAllCaches;
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(_Bool)arg3;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2;
- (void)setSortPoint:(const CDStruct_c3b9c2ee *)arg1;
- (void)_timerFired;
- (void)_requestOnlineTiles;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const CDStruct_58878026 *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 signpostID:(unsigned long long)arg8 callbackQ:(id)arg9 beginNetwork:(CDUnknownBlockType)arg10 callback:(CDUnknownBlockType)arg11;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const CDStruct_58878026 *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned int)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const CDStruct_58878026 *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const CDStruct_58878026 *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 callbackQ:(id)arg7 beginNetwork:(CDUnknownBlockType)arg8 callback:(CDUnknownBlockType)arg9;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(CDUnknownBlockType)arg9 callback:(CDUnknownBlockType)arg10;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned int)arg6 callbackQ:(id)arg7 beginNetwork:(CDUnknownBlockType)arg8 callback:(CDUnknownBlockType)arg9;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 callbackQ:(id)arg6 beginNetwork:(CDUnknownBlockType)arg7 callback:(CDUnknownBlockType)arg8;
- (_Bool)reprioritizeKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)loadKey:(const struct _GEOTileKey *)arg1 additionalInfo:(const CDStruct_58878026 *)arg2 priority:(unsigned int)arg3 forClient:(id)arg4 proxyClient:(id)arg5 options:(unsigned long long)arg6 reason:(unsigned char)arg7 qos:(unsigned int)arg8 signpostID:(unsigned long long)arg9 callbackQ:(id)arg10 beginNetwork:(CDUnknownBlockType)arg11 callback:(CDUnknownBlockType)arg12;
- (_Bool)_cancelIfNeeded:(__list_iterator_aef25af4 *)arg1;
- (void)_cancel:(__list_iterator_aef25af4 *)arg1 err:(id)arg2;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
- (id)descriptionDictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)_receivedMemoryWarningNotification;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1 serverProxy:(id)arg2;
- (int)networkHits;
- (int)diskHits;
- (int)memoryHits;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

