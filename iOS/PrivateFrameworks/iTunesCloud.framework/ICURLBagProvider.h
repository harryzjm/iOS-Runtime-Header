//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject
{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
}

+ (id)sharedBagProvider;
- (void).cxx_destruct;
- (id)_cacheFilePath;
- (void)_saveCache;
- (void)_loadCache;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_fetchBagForRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_getCacheKeyForRequestContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateCache;
- (void)getBagForRequestContext:(id)arg1 forceRefetch:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getBagForRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
