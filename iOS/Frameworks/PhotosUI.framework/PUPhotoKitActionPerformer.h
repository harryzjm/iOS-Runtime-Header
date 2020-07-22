//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PUPhotoKitDataSourceManager;

__attribute__((visibility("hidden")))
@interface PUPhotoKitActionPerformer
{
    PUPhotoKitDataSourceManager *_photoKitDataSourceManager;
}

+ (_Bool)shouldEnableOnAsset:(id)arg1 inAssetCollection:(id)arg2;
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;
@property(retain, nonatomic) PUPhotoKitDataSourceManager *photoKitDataSourceManager; // @synthesize photoKitDataSourceManager=_photoKitDataSourceManager;
- (void).cxx_destruct;
- (id)_photosDataSourceFromDataSourceManager:(id)arg1;
- (id)_indexPathsInPhotosDataSource:(id)arg1;
- (void)forceIncludeAssetsInDataSource;
- (void)stopExcludingAssetsFromDataSource;
- (void)instantlyExcludeAssetsFromDataSource;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *assets; // @dynamic assets;

@end
