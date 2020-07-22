//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>
#import <PhotosUI/PUPhotoEditViewControllerSessionDelegate-Protocol.h>
#import <PhotosUI/PUPhotoMarkupViewControllerObserver-Protocol.h>
#import <PhotosUI/PUVideoEditViewControllerSessionDelegate-Protocol.h>

@class PUAssetExplorerReviewScreenActionManager;
@protocol PUDisplayAsset, PUDisplayAssetCollection;

@protocol PUAssetExplorerReviewScreenActionManagerDelegate <NSObject, PUPhotoEditViewControllerSessionDelegate, PUVideoEditViewControllerSessionDelegate, PUPhotoMarkupViewControllerObserver>
- (void)assetExplorerReviewScreenActionManager:(PUAssetExplorerReviewScreenActionManager *)arg1 didToggleLivePhoto:(id <PUDisplayAsset>)arg2;
- (void)assetExplorerReviewScreenActionManagerDidPressRetake:(PUAssetExplorerReviewScreenActionManager *)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressDone:(PUAssetExplorerReviewScreenActionManager *)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressCancel:(PUAssetExplorerReviewScreenActionManager *)arg1;
- (void)assetExplorerReviewScreenActionManager:(PUAssetExplorerReviewScreenActionManager *)arg1 didPressSelectForAsset:(id <PUDisplayAsset>)arg2;
- (_Bool)assetExplorerReviewScreenActionManager:(PUAssetExplorerReviewScreenActionManager *)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id <PUDisplayAsset>)arg3 inAssetCollection:(id <PUDisplayAssetCollection>)arg4;
- (_Bool)assetExplorerReviewScreenActionManager:(PUAssetExplorerReviewScreenActionManager *)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id <PUDisplayAsset>)arg3 inAssetCollection:(id <PUDisplayAssetCollection>)arg4;
@end

