//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXAssetsSharingHelperDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformerInput-Protocol.h>
#import <PhotosUICore/PXPhotoStreamComposeServiceDelegate-Protocol.h>
#import <PhotosUICore/PXVideoTrimQueueControllerDelegate-Protocol.h>

@class NSString, PHFetchResult, PXAssetReference, PXAssetsDataSource, PXPhotoStreamComposeServiceViewController, PXVideoTrimQueueController;
@protocol UIDragSession, UIDropSession;

@interface PXPhotoKitAssetCollectionActionPerformer <PXPhotoStreamComposeServiceDelegate, PXVideoTrimQueueControllerDelegate, PXAssetsSharingHelperDelegate, PXPhotoKitAssetCollectionActionPerformerInput>
{
    PXVideoTrimQueueController *_trimController;
    PXPhotoStreamComposeServiceViewController *_composeServiceController;
}

+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (id)createAlertActionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)createBarButtonItemForAssetCollectionReference:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;
+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (_Bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (_Bool)canPerformActionType:(id)arg1 onAssetCollectionReference:(id)arg2 withInputs:(id)arg3;
- (void).cxx_destruct;
- (_Bool)assetsSharingHelper:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)assetsSharingHelper:(id)arg1 presentViewController:(id)arg2;
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 dismissViewControllerWithCompletion:(CDUnknownBlockType)arg2;
- (void)controller:(id)arg1 presentViewController:(id)arg2;
- (void)photoStreamComposeServiceDidCancel:(id)arg1;
- (void)photoStreamComposeService:(id)arg1 didPostComment:(id)arg2;
- (void)_handleAddToCloudSharedAlbum:(id)arg1 pickedAssets:(id)arg2;
- (void)_promptBlacklistingConfirmatonForUserAction:(id)arg1 viewSpec:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_confirmationAlertTitleForBlacklistingAction:(id)arg1 viewSpec:(id)arg2;
- (void)_promptDeleteMemoryConfirmatonWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;

// Remaining properties
@property(readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property(readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <UIDragSession> dragSession;
@property(readonly, nonatomic) id <UIDropSession> dropSession;
@property(readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PHFetchResult *people;
@property(readonly) Class superclass;

@end
