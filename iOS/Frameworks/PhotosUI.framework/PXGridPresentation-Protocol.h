//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, NSString, PHAsset, PHAssetCollection, PHCollection, PHFetchResult, PXPhotoKitCollectionsDataSourceManagerConfiguration, UIViewController;
@protocol NSFastEnumeration, PXGridPresentationNavigationItemDelegate;

@protocol PXGridPresentation <NSObject>

@optional
- (UIViewController *)createImportHistoryGridViewControllerWithCollection:(PHCollection *)arg1;
- (UIViewController *)createPhotosPickerViewControllerWithSelectedAssets:(NSArray *)arg1 anchorAtAsset:(PHAsset *)arg2 inAssetCollection:(PHAssetCollection *)arg3 completionHandler:(void (^)(NSOrderedSet *))arg4;
- (UIViewController *)createPanoramaViewController;
- (UIViewController *)createPhotosAlbumViewControllerForAlbum:(PHAssetCollection *)arg1 withFetchResult:(PHFetchResult *)arg2;
- (UIViewController *)createSharedAlbumListViewControllerWithConfiguration:(PXPhotoKitCollectionsDataSourceManagerConfiguration *)arg1;
- (UIViewController *)createAlbumListViewControllerWithConfiguration:(PXPhotoKitCollectionsDataSourceManagerConfiguration *)arg1;
- (void)createGridViewControllerWithAssets:(id <NSFastEnumeration>)arg1 withTitle:(NSString *)arg2 hideTabBar:(_Bool)arg3 containerViewController:(UIViewController *)arg4 navigationItemDelegate:(id <PXGridPresentationNavigationItemDelegate>)arg5 andCompletion:(void (^)(UIViewController *))arg6;
@end

