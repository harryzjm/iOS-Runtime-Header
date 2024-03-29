//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUAssetActionPerformer.h"

@class NSArray, PXPhotosDataSource;

__attribute__((visibility("hidden")))
@interface PUPhotoKitActionPerformer : PUAssetActionPerformer
{
    PXPhotosDataSource *_photosDataSource;
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (void)forceIncludeAssetsInDataSource;
- (void)stopExcludingAssetsFromDataSource;
- (void)instantlyExcludeAssetsFromDataSource;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *assets; // @dynamic assets;

@end

