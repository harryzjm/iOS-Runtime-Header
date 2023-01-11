//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUAssetExplorerReviewScreenViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUAssetPickerContainerControllerActionHandler-Protocol.h>
#import <PhotosUI/PUAssetPickerViewControllerActionHandler-Protocol.h>
#import <PhotosUI/PUPhotoPickerResizeTaskDescriptorViewModelDelegate-Protocol.h>
#import <PhotosUI/PUPhotoPickerServicesConsumer-Protocol.h>
#import <PhotosUI/PUPhotosGridDownloadUpdateHandler-Protocol.h>
#import <PhotosUI/PUUIImageViewControllerFileResizingDelegate-Protocol.h>
#import <PhotosUI/PXSelectionCoordinatorDelegate-Protocol.h>
#import <PhotosUI/UINavigationControllerDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSProgress, NSString, PHAsset, PUAssetPickerActivityProgressController, PUAssetPickerContainerController, PUAssetPickerFilterOptions, PUPhotoPickerResizeTaskDescriptorViewModel, PUPhotosGridDownloadHelper, PUPickerConfiguration, PXLoadingStatusManager, PXSelectionCoordinator, UINavigationController;
@protocol OS_dispatch_group, PUAssetPickerCoordinatorActionHandler, PUPhotoPicker;

@interface PUAssetPickerCoordinator : NSObject <PUAssetPickerContainerControllerActionHandler, PUAssetPickerViewControllerActionHandler, PUAssetExplorerReviewScreenViewControllerDelegate, PUPhotosGridDownloadUpdateHandler, PXSelectionCoordinatorDelegate, UINavigationControllerDelegate, PUPhotoPickerResizeTaskDescriptorViewModelDelegate, PUUIImageViewControllerFileResizingDelegate, PUPhotoPickerServicesConsumer>
{
    id <PUPhotoPicker> _photoPicker;
    PUPickerConfiguration *_configuration;
    UINavigationController *_navigationController;
    PUAssetPickerContainerController *_rootViewController;
    PUAssetPickerFilterOptions *_filterOptions;
    id <PUAssetPickerCoordinatorActionHandler> _coordinatorActionHandler;
    NSMutableOrderedSet *_selectedAssets;
    PXSelectionCoordinator *_selectionCoordinator;
    PUPhotosGridDownloadHelper *_downloadHelper;
    NSMutableDictionary *_downloadProgress;
    NSObject<OS_dispatch_group> *_multipleAssetAvailabilityGroup;
    PXLoadingStatusManager *_loadingStatusManager;
    NSMutableDictionary *_assetIdentifierByLoadOperationID;
    PUAssetPickerActivityProgressController *_progressController;
    NSDictionary *_downloadAssetsProgressMap;
    NSProgress *_downloadProgressViewProgress;
    PUPhotoPickerResizeTaskDescriptorViewModel *_resizeTaskDescriptorViewModel;
    PHAsset *_selectedAssetToResize;
}

+ (id)_extraArgumentsForResizeTaskDescriptor:(id)arg1;
+ (_Bool)_shouldTreatAssetAsLivePhoto:(id)arg1 photoPicker:(id)arg2 filterOptions:(id)arg3;
+ (_Bool)_assetCanPlay:(id)arg1;
+ (_Bool)_editingEnabled:(id)arg1;
+ (_Bool)_viewImageBeforeSelectingEnabled:(id)arg1;
+ (_Bool)_skipSelectionConfirmation:(id)arg1;
+ (_Bool)pu_legacy_shouldDownloadVideoComplement:(id)arg1 filterOptions:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) PHAsset *selectedAssetToResize; // @synthesize selectedAssetToResize=_selectedAssetToResize;
@property(retain, nonatomic) PUPhotoPickerResizeTaskDescriptorViewModel *resizeTaskDescriptorViewModel; // @synthesize resizeTaskDescriptorViewModel=_resizeTaskDescriptorViewModel;
@property(retain, nonatomic) NSProgress *downloadProgressViewProgress; // @synthesize downloadProgressViewProgress=_downloadProgressViewProgress;
@property(copy, nonatomic) NSDictionary *downloadAssetsProgressMap; // @synthesize downloadAssetsProgressMap=_downloadAssetsProgressMap;
@property(retain, nonatomic) PUAssetPickerActivityProgressController *progressController; // @synthesize progressController=_progressController;
@property(readonly, nonatomic) NSMutableDictionary *assetIdentifierByLoadOperationID; // @synthesize assetIdentifierByLoadOperationID=_assetIdentifierByLoadOperationID;
@property(readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager; // @synthesize loadingStatusManager=_loadingStatusManager;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *multipleAssetAvailabilityGroup; // @synthesize multipleAssetAvailabilityGroup=_multipleAssetAvailabilityGroup;
@property(retain, nonatomic) NSMutableDictionary *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(readonly, nonatomic) PUPhotosGridDownloadHelper *downloadHelper; // @synthesize downloadHelper=_downloadHelper;
@property(readonly, nonatomic) PXSelectionCoordinator *selectionCoordinator; // @synthesize selectionCoordinator=_selectionCoordinator;
@property(retain, nonatomic) NSMutableOrderedSet *selectedAssets; // @synthesize selectedAssets=_selectedAssets;
@property(readonly, nonatomic) __weak id <PUAssetPickerCoordinatorActionHandler> coordinatorActionHandler; // @synthesize coordinatorActionHandler=_coordinatorActionHandler;
@property(retain, nonatomic) PUAssetPickerFilterOptions *filterOptions; // @synthesize filterOptions=_filterOptions;
@property(readonly, nonatomic) PUAssetPickerContainerController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) PUPickerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <PUPhotoPicker> photoPicker; // @synthesize photoPicker=_photoPicker;
- (id)assetsForResizing;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (void)imageViewControllerDidConfirmSelection:(id)arg1;
- (void)imageViewControllerDidSelectFileResizing:(id)arg1;
- (void)_dismissDownloadProgressViewWithSuccess:(_Bool)arg1;
- (void)_updateProgressViewProgress:(id)arg1;
- (void)_handleProgressControllerCancellation;
- (id)_setupProgressController;
- (void)downloadProgressDidFinishForAsset:(id)arg1 success:(_Bool)arg2;
- (id)_alertControllerWithResizingOptionsForAssets:(id)arg1;
- (_Bool)toggleSelectionForAsset:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)presentAlertController:(id)arg1;
- (void)endShowingProgressWithIdentifier:(id)arg1;
- (void)updateProgressWithIdentifier:(id)arg1 withValue:(double)arg2;
- (id)beginShowingProgressForAsset:(id)arg1 inCollection:(id)arg2;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPressFileSizeButtonWithSelectedUUIDs:(id)arg2;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;
- (_Bool)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (_Bool)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)selectionCoordinator:(id)arg1 willUpdateSelectedObjectsForSnapshot:(id)arg2 withRemovedIndexes:(id)arg3 insertedIndexes:(id)arg4;
- (void)viewController:(id)arg1 didSelectAssetCollection:(id)arg2;
- (_Bool)viewController:(id)arg1 didSelectAsset:(id)arg2;
- (void)containerController:(id)arg1 didTapSelectedItemsButton:(id)arg2;
- (void)containerController:(id)arg1 didTapAddButton:(id)arg2;
- (void)containerController:(id)arg1 didTapCancelButton:(id)arg2;
- (void)containerControllerDidAppear:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1 filterOptions:(id)arg2 navigationControllerClass:(Class)arg3 selectedAssets:(id)arg4 coordinatorActionHandler:(id)arg5;
- (id)initWithConfiguration:(id)arg1 coordinatorActionHandler:(id)arg2;
- (id)initWithPhotoPicker:(id)arg1 mediaTypes:(id)arg2;
- (void)pu_legacy_showProgressView;
- (void)pu_legacy_selectMultipleAssets:(id)arg1;
- (void)pu_legacy_selectAssetWithFileResizing:(id)arg1;
- (void)pu_legacy_selectSingleAsset:(id)arg1;
- (void)pu_legacy_cancelPicker;
- (void)pu_legacy_didDisplayPicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
