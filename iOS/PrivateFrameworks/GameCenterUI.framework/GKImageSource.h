//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKImageBrush, GKThreadsafeCache, NSString, UIImage;

@interface GKImageSource : NSObject
{
    _Bool _shouldRenderDefaultImageWithBrush;
    GKThreadsafeCache *_cache;
    NSString *_name;
    GKImageBrush *_imageBrush;
    UIImage *_defaultImage;
    UIImage *_renderedDefaultImage;
}

+ (id)cacheDirectoryForImageID:(id)arg1;
+ (void)clearCache;
+ (id)sharedCache;
+ (id)syncQueue;
@property(nonatomic) _Bool shouldRenderDefaultImageWithBrush; // @synthesize shouldRenderDefaultImageWithBrush=_shouldRenderDefaultImageWithBrush;
@property(retain, nonatomic) UIImage *renderedDefaultImage; // @synthesize renderedDefaultImage=_renderedDefaultImage;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(retain, nonatomic) GKImageBrush *imageBrush; // @synthesize imageBrush=_imageBrush;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) GKThreadsafeCache *cache; // @synthesize cache=_cache;
- (void)clearCachedImageForIdentifier:(id)arg1;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forIdentifier:(id)arg3;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forKey:(id)arg3;
- (void)cacheImageFromContext:(id)arg1 forIdentifier:(id)arg2;
- (void)_storeImage:(id)arg1 cacheKey:(id)arg2 path:(id)arg3 context:(id)arg4;
- (id)processAndCacheImage:(id)arg1 forIdentifier:(id)arg2;
- (id)processAndCacheImage:(id)arg1 forKey:(id)arg2;
- (id)renderedTestImage;
- (_Bool)shouldUseTestImage;
- (id)cachedImageForIdentifier:(id)arg1;
- (id)cachedImageForKey:(id)arg1;
- (id)fastCachedOrDefaultImageForIdentifier:(id)arg1;
- (id)fastCachedOrDefaultImageForForKey:(id)arg1;
- (id)fastCachedImageForIdentifier:(id)arg1;
- (id)fastCachedImageForKey:(id)arg1;
- (void)validateFileSystemCache;
- (unsigned long long)cacheCostForImage:(id)arg1;
- (id)renderedImageWithImage:(id)arg1;
- (id)renderedImageWithImage:(id)arg1 returnContext:(id *)arg2;
- (id)renderedImageWithImage:(id)arg1 defaultSize:(struct CGSize)arg2 returnContext:(id *)arg3;
- (id)keyForImageIdentifier:(id)arg1;
- (id)subsourceWithBrush:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 imageBrush:(id)arg2;

@end

