//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, PHChange, PXPhotosDataSource, PXPhotosDataSourceChange;

@protocol PXPhotosDataSourceChangeObserver <NSObject>

@optional
- (void)photosDataSource:(PXPhotosDataSource *)arg1 didReceivePhotoLibraryChange:(PHChange *)arg2;
- (void)photosDataSource:(PXPhotosDataSource *)arg1 didChange:(PXPhotosDataSourceChange *)arg2;
- (void)photosDataSourceWillChange:(PXPhotosDataSource *)arg1;
- (NSArray *)photosDataSourceInterestingAssetReferences:(PXPhotosDataSource *)arg1;
@end

