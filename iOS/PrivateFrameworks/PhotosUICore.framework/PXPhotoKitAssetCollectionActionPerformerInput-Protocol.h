//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PHFetchResult, PXAssetReference, PXAssetsDataSource;
@protocol PXMemoryAssetsActionFactory, UIDragSession, UIDropSession, UITraitEnvironment;

@protocol PXPhotoKitAssetCollectionActionPerformerInput <NSObject>

@optional
@property(readonly, nonatomic) id <UITraitEnvironment> traitEnvironment;
@property(readonly, nonatomic) id <UIDragSession> dragSession;
@property(readonly, nonatomic) id <UIDropSession> dropSession;
@property(readonly, nonatomic) id <PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property(readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property(readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property(readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property(readonly, nonatomic) PHFetchResult *people;
@end

