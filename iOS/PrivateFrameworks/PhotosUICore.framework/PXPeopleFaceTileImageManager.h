//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCacheDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMapTable, NSString, PXLRUMemoryCache;
@protocol NSObject, OS_dispatch_queue;

@interface PXPeopleFaceTileImageManager : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSObject<OS_dispatch_queue> *_requestLookupIsolationQueue;
    NSObject<OS_dispatch_queue> *_cropCacheQueue;
    NSMapTable *_faceTileRequestByRequestID;
    NSMapTable *_highPriorityCachedIdentifiers;
    NSObject<OS_dispatch_queue> *_highPriorityCachedIdentifiersQueue;
    _Bool _concurrencyEnabled;
    PXLRUMemoryCache *_memoryCache;
    id <NSObject> _memoryWarningObserver;
    id <NSObject> _backgroundEntraceObserver;
}

+ (id)sharedManager;
+ (id)imageTransformQueue;
@property(retain, nonatomic) id <NSObject> backgroundEntraceObserver; // @synthesize backgroundEntraceObserver=_backgroundEntraceObserver;
@property(retain, nonatomic) id <NSObject> memoryWarningObserver; // @synthesize memoryWarningObserver=_memoryWarningObserver;
@property(readonly, nonatomic) PXLRUMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(nonatomic, getter=isConcurrencyEnabled) _Bool concurrencyEnabled; // @synthesize concurrencyEnabled=_concurrencyEnabled;
- (void).cxx_destruct;
- (_Bool)_doesChange:(id)arg1 containVisibleChangesToPHAssetWithOID:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_stopListeningForChanges;
- (void)_startListeningForChanges;
- (void)clearMemoryCache;
- (void)removeHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2;
- (void)addHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2;
- (void)invalidateCacheForPerson:(id)arg1;
- (_Bool)isActiveRequestWithRequestID:(int)arg1;
- (void)cancelRequest:(int)arg1;
- (id)_fetchKeyFaceFromPerson:(id)arg1 error:(id *)arg2;
- (id)_fetchAssetFromFace:(id)arg1;
- (void)_addRequestResult:(id)arg1 forIdentifier:(id)arg2;
- (id)_cachedResultForIdentifier:(id)arg1 params:(struct PXFaceTileImageParams)arg2 allowVeryLowQuality:(_Bool)arg3 isLowResResult:(_Bool *)arg4;
- (id)_cachedResultForIdentifier:(id)arg1 params:(struct PXFaceTileImageParams)arg2 isLowResResult:(_Bool *)arg3;
- (_Bool)_deliverCachedResultIfPossibleForRequest:(id)arg1 allowDegradedDelivery:(_Bool)arg2 allowVeryLowQuality:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)_deliverCachedResultIfPossibleForRequest:(id)arg1 allowDegradedDelivery:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)_normalizedAspectCropRectForFaceRect:(struct CGRect)arg1 aspectRatio:(double)arg2 inImageRect:(struct CGRect)arg3;
- (void)_cropImage:(id)arg1 cacheResult:(_Bool)arg2 isDegraded:(_Bool)arg3 forRequest:(id)arg4 cropInfo:(CDStruct_7898798c)arg5 didCallFastBlock:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (struct CGRect)_boundedCropRectForRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2 withTargetAspectRatio:(double)arg3;
- (void)_requestFaceTileImageFromFace:(id)arg1 fromPHObject:(id)arg2 imageRequest:(id)arg3 faceImageRequest:(id)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6 fastDisplayBlock:(CDUnknownBlockType)arg7;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7 fastDisplayBlock:(CDUnknownBlockType)arg8;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6 fastDisplayBlock:(CDUnknownBlockType)arg7;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (int)_requestFaceTileImageFromRequest:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7 fastDisplayBlock:(CDUnknownBlockType)arg8;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (int)requestFastFaceTileImageFromRequest:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5 fastDisplayBlock:(CDUnknownBlockType)arg6;
- (void)_handleMemoryClearRequest;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

