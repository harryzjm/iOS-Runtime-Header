//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SPAssetCacheClientCache;

__attribute__((visibility("hidden")))
@interface SPCompanionAssetCache : NSObject
{
    SPAssetCacheClientCache *_permanentCache;
    SPAssetCacheClientCache *_transientCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) SPAssetCacheClientCache *transientCache; // @synthesize transientCache=_transientCache;
@property(retain, nonatomic) SPAssetCacheClientCache *permanentCache; // @synthesize permanentCache=_permanentCache;
- (id)keyFromImageData:(id)arg1;
- (id)dataForImageWithName:(id)arg1;
- (id)cachedImages;
- (void)removeAllImagesFromPermanentCache;
- (void)removeImageFromPermanentCacheWithName:(id)arg1;
- (_Bool)addImageToPermanentCache:(id)arg1 withName:(id)arg2;
- (_Bool)imageInPermanentCache:(id)arg1;
- (void)syncCache:(id)arg1;
- (void)clearedCache:(id)arg1;
- (void)deletedAsset:(id)arg1;
- (void)addedAsset:(id)arg1;
- (void)handleCacheMessage:(id)arg1;
- (void)addImageReferenceToTransientCache:(id)arg1 withName:(id)arg2;
- (_Bool)imageInTransientCache:(id)arg1;
- (id)init;

@end

