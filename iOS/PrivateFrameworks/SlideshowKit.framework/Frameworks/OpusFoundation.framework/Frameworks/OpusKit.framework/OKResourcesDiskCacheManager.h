//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface OKResourcesDiskCacheManager : NSObject
{
    NSURL *_baseURL;
    NSObject<OS_dispatch_queue> *_globalQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

+ (id)_sharedResourcesDirectoryURL;
+ (id)temporaryManagerWithIdentifier:(id)arg1;
+ (id)sharedManager;
- (_Bool)removeThumbnailsForMediaItem:(id)arg1 error:(id *)arg2;
- (_Bool)removeThumbnailForMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setThumbnail:(id)arg1 forMediaItem:(id)arg2 resolution:(unsigned long long)arg3 error:(id *)arg4;
- (id)thumbnailForMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)hasThumbnailForMediaItem:(id)arg1 resolution:(unsigned long long)arg2 thumbnail:(id *)arg3 error:(id *)arg4;
- (_Bool)_writeCachedMediaItem:(id)arg1 error:(id *)arg2 byThumbnailsAccessor:(CDUnknownBlockType)arg3;
- (_Bool)_writeCachedMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id *)arg3 byThumbnailAccessor:(CDUnknownBlockType)arg4;
- (_Bool)_readCachedMediaItem:(id)arg1 resolution:(unsigned long long)arg2 error:(id *)arg3 byThumbnailAccessor:(CDUnknownBlockType)arg4;
- (_Bool)removeMetadataForMediaItem:(id)arg1 error:(id *)arg2;
- (_Bool)setMetadata:(id)arg1 forMediaItem:(id)arg2 error:(id *)arg3;
- (id)metadataForMediaItem:(id)arg1 error:(id *)arg2;
- (_Bool)hasMetadataForMediaItem:(id)arg1 metadata:(id *)arg2 error:(id *)arg3;
- (_Bool)_writeCachedMediaItem:(id)arg1 error:(id *)arg2 byMetadataAccessor:(CDUnknownBlockType)arg3;
- (_Bool)_readCachedMediaItem:(id)arg1 error:(id *)arg2 byMetadataAccessor:(CDUnknownBlockType)arg3;
- (_Bool)removeMediaItemsAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)removeMediaItem:(id)arg1 error:(id *)arg2;
- (id)cachedMediaItemURLs:(id *)arg1;
- (_Bool)removeAllCaches:(id *)arg1;
- (_Bool)_writeCachedMediaItem:(id)arg1 error:(id *)arg2 byResourcesAccessor:(CDUnknownBlockType)arg3;
- (_Bool)_writeResources:(id *)arg1 byResourcesAccessor:(CDUnknownBlockType)arg2;
- (id)_cacheResourceThumbnailURLForMediaItem:(id)arg1 resolution:(unsigned long long)arg2;
- (id)_cacheResourceThumbnailsURLForMediaItem:(id)arg1;
- (id)_cacheResourceMetadataURLForMediaItem:(id)arg1;
- (id)_cachedResourceDirectoryURLForMediaItem:(id)arg1;
- (id)resourcesDirectoryURL;
- (void)_performAsynchronousResourceAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousResourceAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithBaseURL:(id)arg1;
- (id)init;

@end

