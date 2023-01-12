//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable, NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface PXStoryColorNormalizationCubeLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _lock;
    NSMutableIndexSet *_lock_activeRequests;
    NSCache *_lock_cubeByAssetNormalization;
    NSMapTable *_lock_aliveCubesByAssetNormalization;
    long long _cubeEdgeSize;
    struct CGColorSpace *_colorspace;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_queue_performRequestWithID:(long long)arg1 forAssetNormalization:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_cacheColorCube:(id)arg1 forAssetNormalization:(id)arg2;
- (_Bool)_isRequestActive:(long long)arg1;
- (long long)requestColorCubeForAssetNormalization:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelRequest:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithColorSpace:(struct CGColorSpace *)arg1;

@end
