//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSURL;
@protocol OS_dispatch_queue;

@interface PRLikenessCache : NSObject
{
    NSCache *_inMemoryCache;
    NSObject<OS_dispatch_queue> *_cacheLookupQueue;
    _Bool _useMemory;
    _Bool _useFilesystem;
    _Bool _renderIfNeeded;
    NSURL *_cacheDirectory;
}

+ (id)_propertyValueForURL:(id)arg1 forKey:(id)arg2;
+ (_Bool)_purgeOldCacheFilesInDirectory:(id)arg1;
+ (_Bool)_removeImageAtURL:(id)arg1;
+ (_Bool)_writeImage:(id)arg1 toURL:(id)arg2;
+ (id)_imageAtURL:(id)arg1;
+ (_Bool)_ensureExistenceOfDirectory:(id)arg1;
+ (id)_staticRepresentationCacheURL;
+ (id)_applicationCacheDirectory;
+ (id)sharedInstance;
@property(nonatomic) _Bool renderIfNeeded; // @synthesize renderIfNeeded=_renderIfNeeded;
@property(nonatomic) _Bool useFilesystem; // @synthesize useFilesystem=_useFilesystem;
@property(nonatomic) _Bool useMemory; // @synthesize useMemory=_useMemory;
@property(retain, nonatomic) NSURL *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
- (void).cxx_destruct;
- (void)_fetchWithReadBlock:(CDUnknownBlockType)arg1 writeBlock:(CDUnknownBlockType)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_renderImageForLikeness:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchFromFilesystem:(id)arg1 context:(id)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchFromMemory:(id)arg1 context:(id)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)imageForLikeness:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_cacheURLForLikeness:(id)arg1 context:(id)arg2;
- (id)_cacheKeyForLikeness:(id)arg1 context:(id)arg2;
- (id)init;

@end

