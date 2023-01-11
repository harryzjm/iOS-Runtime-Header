//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformerInput-Protocol.h>

@class NSString, PHFetchResult, PXAssetReference, PXAssetsDataSource;
@protocol UIDragSession, UIDropSession;

@interface PXPhotoKitAssetCollectionBlockPersonActionPerformer <PXPhotoKitAssetCollectionActionPerformerInput>
{
}

+ (id)systemImageNameForAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 assetCollectionReference:(id)arg2 withInputs:(id)arg3;
+ (id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3;
+ (_Bool)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2;
- (void)performUserInteractionTask;

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
