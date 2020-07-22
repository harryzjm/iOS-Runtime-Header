//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXAssetVariationsSettings, PXAssetsSceneSettings, PXDiagnosticsSettings, PXDragAndDropSettings, PXImageModulationSettings, PXKitSettings, PXMemoriesFeedSettings, PXMemoriesRelatedSettings, PXModelSettings, PXPeopleDetailSettings, PXPeopleUISettings, PXPhotosDataSourceSettings, PXPhotosDetailsHeaderTileSettings, PXPhotosDetailsSettings, PXRelatedSettings, PXSharingSettings, PXSnapBackSettings, PXTilingSettings, PXViewControllerTransitionSettings;

@interface PXRootSettings
{
    PXDiagnosticsSettings *_diagnostics;
    PXImageModulationSettings *_imageModulationSettings;
    PXPhotosDetailsSettings *_photosDetails;
    PXPhotosDetailsHeaderTileSettings *_photosDetailsHeaderTile;
    PXRelatedSettings *_related;
    PXMemoriesFeedSettings *_memoryFeed;
    PXMemoriesRelatedSettings *_memoriesRelated;
    PXAssetsSceneSettings *_assetsScene;
    PXPhotosDataSourceSettings *_photosDataSource;
    PXTilingSettings *_tiling;
    PXModelSettings *_model;
    PXKitSettings *_kit;
    PXViewControllerTransitionSettings *_viewControllerTransition;
    PXSnapBackSettings *_snapBack;
    PXPeopleDetailSettings *_peopleDetail;
    PXPeopleUISettings *_peopleUISettings;
    PXDragAndDropSettings *_dragAndDrop;
    PXSharingSettings *_sharingSettings;
    PXAssetVariationsSettings *_variationsSettings;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(retain, nonatomic) PXAssetVariationsSettings *variationsSettings; // @synthesize variationsSettings=_variationsSettings;
@property(retain, nonatomic) PXSharingSettings *sharingSettings; // @synthesize sharingSettings=_sharingSettings;
@property(retain, nonatomic) PXDragAndDropSettings *dragAndDrop; // @synthesize dragAndDrop=_dragAndDrop;
@property(retain, nonatomic) PXPeopleUISettings *peopleUISettings; // @synthesize peopleUISettings=_peopleUISettings;
@property(retain, nonatomic) PXPeopleDetailSettings *peopleDetail; // @synthesize peopleDetail=_peopleDetail;
@property(retain, nonatomic) PXSnapBackSettings *snapBack; // @synthesize snapBack=_snapBack;
@property(retain, nonatomic) PXViewControllerTransitionSettings *viewControllerTransition; // @synthesize viewControllerTransition=_viewControllerTransition;
@property(retain, nonatomic) PXKitSettings *kit; // @synthesize kit=_kit;
@property(retain, nonatomic) PXModelSettings *model; // @synthesize model=_model;
@property(retain, nonatomic) PXTilingSettings *tiling; // @synthesize tiling=_tiling;
@property(retain, nonatomic) PXPhotosDataSourceSettings *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
@property(retain, nonatomic) PXAssetsSceneSettings *assetsScene; // @synthesize assetsScene=_assetsScene;
@property(retain, nonatomic) PXMemoriesRelatedSettings *memoriesRelated; // @synthesize memoriesRelated=_memoriesRelated;
@property(retain, nonatomic) PXMemoriesFeedSettings *memoryFeed; // @synthesize memoryFeed=_memoryFeed;
@property(retain, nonatomic) PXRelatedSettings *related; // @synthesize related=_related;
@property(retain, nonatomic) PXPhotosDetailsHeaderTileSettings *photosDetailsHeaderTile; // @synthesize photosDetailsHeaderTile=_photosDetailsHeaderTile;
@property(retain, nonatomic) PXPhotosDetailsSettings *photosDetails; // @synthesize photosDetails=_photosDetails;
@property(retain, nonatomic) PXImageModulationSettings *imageModulationSettings; // @synthesize imageModulationSettings=_imageModulationSettings;
@property(retain, nonatomic) PXDiagnosticsSettings *diagnostics; // @synthesize diagnostics=_diagnostics;
- (void).cxx_destruct;
- (id)parentSettings;

@end

