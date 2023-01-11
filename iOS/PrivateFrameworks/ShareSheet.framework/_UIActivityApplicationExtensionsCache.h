//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, _UIMatchingExtensionsResult;
@protocol OS_dispatch_queue;

@interface _UIActivityApplicationExtensionsCache : NSObject
{
    _Bool _primed;
    unsigned long long _cacheMisses;
    unsigned long long _cacheHits;
    struct os_unfair_lock_s _cacheLock;
    _Bool _cacheEnabled;
    _Bool _precached;
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSObject<OS_dispatch_queue> *_primedExtensionsQueue;
    _UIMatchingExtensionsResult *_primedExtensionsResult;
    NSMutableDictionary *_cachedResults;
    NSMutableDictionary *_extensionMatchTokens;
    NSMutableArray *_continuousDiscoveryRequests;
}

+ (id)sharedExtensionsCache;
- (void).cxx_destruct;
@property(retain) NSMutableArray *continuousDiscoveryRequests; // @synthesize continuousDiscoveryRequests=_continuousDiscoveryRequests;
@property(retain) NSMutableDictionary *extensionMatchTokens; // @synthesize extensionMatchTokens=_extensionMatchTokens;
@property(retain) NSMutableDictionary *cachedResults; // @synthesize cachedResults=_cachedResults;
@property(retain) _UIMatchingExtensionsResult *primedExtensionsResult; // @synthesize primedExtensionsResult=_primedExtensionsResult;
@property(retain) NSObject<OS_dispatch_queue> *primedExtensionsQueue; // @synthesize primedExtensionsQueue=_primedExtensionsQueue;
- (id)reportExtensionsCacheResult;
- (id)getExtensionsResultWithMatchingAttributes:(id)arg1;
- (void)primeExtensionsResultWithMatchingAttributes:(id)arg1;
- (void)registerPendingContinuousExtensionsDiscovery;
- (void)_delayContinuousExtensionsDiscoveryRequest:(id)arg1 cacheKey:(id)arg2;
- (void)_runContinuousExtensionDiscovery:(id)arg1 cacheKey:(id)arg2;
- (void)_cacheMatchingExtensions:(id)arg1 cacheKey:(id)arg2 error:(id)arg3;
- (void)_cacheMatchingExtensionsResult:(id)arg1 cacheKey:(id)arg2;
- (id)_getCachedMatchingExtensionsResultWithCacheKey:(id)arg1;
- (void)_clearCacheResults;
- (id)init;

@end
