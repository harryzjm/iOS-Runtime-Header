//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PLImageCacheList, PLImageLoadingThread;

@interface PLImageCache : NSObject
{
    PLImageLoadingThread *_loader;
    PLImageCacheList *_cacheList;
}

- (id)newImageLoadingQueue;
- (void)_addImageToCache:(id)arg1;
- (void)invalidateCachedImageForSource:(id)arg1 asset:(id)arg2;
- (id)cachedImageFromSource:(id)arg1 forAsset:(id)arg2 loadIfNeeded:(_Bool)arg3 synchronously:(_Bool)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6;
- (id)_cachedImageFromSource:(id)arg1 asset:(id)arg2;
- (id)_imageLoader;
- (void)dealloc;
- (id)init;
- (void)resumeLoading;
- (void)pauseLoading;
- (void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3;
- (void)removeImageLoadingQueue:(id)arg1;
- (id)newCachedImageWithImageContents:(void *)arg1 orientation:(long long)arg2 metadata:(id)arg3 fromSource:(id)arg4 asset:(id)arg5;
- (id)cachedImageFromSource:(id)arg1 asset:(id)arg2 loadIfNeeded:(_Bool)arg3 synchronously:(_Bool)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

