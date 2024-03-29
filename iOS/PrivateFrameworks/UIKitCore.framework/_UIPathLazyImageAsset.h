//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIImageAsset.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIPathLazyImageAsset : UIImageAsset
{
    struct {
        unsigned int haveCGCacheImages:1;
        unsigned int imagesHaveBeenLoaded:1;
    } _plaFlags;
    _Bool _haveCGCacheImages;
    NSArray *_imagePaths;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool haveCGCacheImages; // @synthesize haveCGCacheImages=_haveCGCacheImages;
@property(readonly, copy, nonatomic) NSArray *imagePaths; // @synthesize imagePaths=_imagePaths;
- (_Bool)_containsImagesInPath:(id)arg1;
- (void)_clearResolvedImageResources;
- (id)imageWithConfiguration:(id)arg1;
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2 imagePaths:(id)arg3 haveCGCacheImages:(_Bool)arg4;
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

