//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPArtworkDataSource-Protocol.h>

@class NSCache, NSCountedSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface MPTiledArtworkDataSource : NSObject <MPArtworkDataSource>
{
    NSCountedSet *_loadingTiledArtworkRequests;
    NSObject<OS_dispatch_queue> *_loadingTiledArtworkRequestsAccessQueue;
    NSCache *_tiledArtworkRepresentationFallbackCache;
    NSOperationQueue *_tilingArtworkCatalogOperationQueue;
}

+ (struct CGSize)_tileSizeForFittingSize:(struct CGSize)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3 spacing:(double)arg4;
+ (id)_loadingRequestForArtworkCatalog:(id)arg1;
+ (id)_errorWithDescription:(id)arg1;
+ (id)_representationCacheKeyForArtworkCatalog:(id)arg1 forAnyRevision:(_Bool)arg2;
+ (id)sharedDataSource;
- (void).cxx_destruct;
- (void)_removeLoadingRequestForArtworkCatalog:(id)arg1;
- (void)_performSyncBlock:(CDUnknownBlockType)arg1;
- (void)_performAsyncBlock:(CDUnknownBlockType)arg1;
- (_Bool)_hasLoadingRequestForArtworkCatalog:(id)arg1;
- (void)_addLoadingRequestForArtworkCatalog:(id)arg1;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

