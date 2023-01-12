//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchUI/SearchUIBatchedCachePrewarmer-Protocol.h>

@class NSCache, NSString;
@protocol OS_dispatch_queue;

@interface SearchUIAppClipAvailabilityManager : NSObject <SearchUIBatchedCachePrewarmer>
{
    NSCache *_cache;
    NSCache *_possiblyAvailableCache;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain) NSCache *possiblyAvailableCache; // @synthesize possiblyAvailableCache=_possiblyAvailableCache;
@property(retain) NSCache *cache; // @synthesize cache=_cache;
- (id)cachedAvailabilityForCommand:(id)arg1;
- (void)checkIfClipsAreValid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prewarmCacheForBatchedItems:(id)arg1;
- (id)batchingItemsForRowModel:(id)arg1;
- (void)requestAvailabilityForCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
