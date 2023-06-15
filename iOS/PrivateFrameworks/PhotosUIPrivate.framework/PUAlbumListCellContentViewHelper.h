//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUAlbumListCellContentViewHelperConfiguration, PUFontManager, PXAssetBadgeManager, PXCollectionTileLayoutTemplate, PXExtendedTraitCollection, PXFeatureSpec, PXFeatureSpecManager, PXImageRequestOptions, PXPhotoKitCollectionsDataSourceManager, PXUIMediaProvider, UIImage;

__attribute__((visibility("hidden")))
@interface PUAlbumListCellContentViewHelper : NSObject
{
    PXExtendedTraitCollection *_traitCollection;
    PUAlbumListCellContentViewHelperConfiguration *_configuration;
    PXPhotoKitCollectionsDataSourceManager *_dataSourceManager;
    PXUIMediaProvider *_mediaProvider;
    PUFontManager *_fontManager;
    UIImage *_emptyPeopleAlbumPlaceholderImage;
    UIImage *_emptyAlbumPlaceholderImage;
    UIImage *_emptySharedAlbumPlaceholderImage;
    PXImageRequestOptions *_imageRequestOptions;
    PXFeatureSpecManager *_featureSpecManager;
    PXFeatureSpec *_featureSpec;
    PXAssetBadgeManager *_badgeManager;
    PXCollectionTileLayoutTemplate *_collectionTileLayoutTemplate;
    struct CGSize _albumCellSize;
    struct UIEdgeInsets _previewInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate; // @synthesize collectionTileLayoutTemplate=_collectionTileLayoutTemplate;
@property(retain, nonatomic) PXAssetBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
@property(retain, nonatomic) PXFeatureSpec *featureSpec; // @synthesize featureSpec=_featureSpec;
@property(retain, nonatomic) PXFeatureSpecManager *featureSpecManager; // @synthesize featureSpecManager=_featureSpecManager;
@property(retain, nonatomic) PXImageRequestOptions *imageRequestOptions; // @synthesize imageRequestOptions=_imageRequestOptions;
@property(retain, nonatomic) UIImage *emptySharedAlbumPlaceholderImage; // @synthesize emptySharedAlbumPlaceholderImage=_emptySharedAlbumPlaceholderImage;
@property(retain, nonatomic) UIImage *emptyAlbumPlaceholderImage; // @synthesize emptyAlbumPlaceholderImage=_emptyAlbumPlaceholderImage;
@property(retain, nonatomic) UIImage *emptyPeopleAlbumPlaceholderImage; // @synthesize emptyPeopleAlbumPlaceholderImage=_emptyPeopleAlbumPlaceholderImage;
@property(retain, nonatomic) PUFontManager *fontManager; // @synthesize fontManager=_fontManager;
@property(readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PUAlbumListCellContentViewHelperConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) struct UIEdgeInsets previewInsets; // @synthesize previewInsets=_previewInsets;
@property(nonatomic) struct CGSize albumCellSize; // @synthesize albumCellSize=_albumCellSize;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)_getDisplayableAssetsForFolder:(id)arg1 maximumCount:(long long)arg2 useCache:(_Bool)arg3 correspondingCollections:(out id *)arg4;
- (void)_getDisplayableAssets:(id *)arg1 indexes:(id *)arg2 forCollection:(id)arg3 maximumCount:(long long)arg4 useCache:(_Bool)arg5;
- (id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(long long)arg2;
- (id)subtitleForCollection:(id)arg1;
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3 withCustomEmptyPlaceHolderImage:(id)arg4;
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3;
- (void)_updateAlbumListCellContentViewForPeopleAlbum:(id)arg1 sharedLibraryStatusProvider:(id)arg2;
- (void)_updateAlbumListCellContentViewForPlacesAlbum:(id)arg1;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_updateStackView:(id)arg1 forFaces:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (id)_visibleAssetsForCollection:(id)arg1 maximumNumberOfVisibleAssets:(long long)arg2 correspondingCollections:(out id *)arg3;
- (id)_visibleAssetsForCollection:(id)arg1 correspondingCollections:(out id *)arg2;
- (unsigned long long)_editCapabilitiesForAlbum:(id)arg1;
- (void)_recalculateAlbumCellSize;
- (void)_invalidateAlbumCellSize;
- (void)reconfigureImageInAlbumListCellContentView:(id)arg1 withImage:(id)arg2 isPlaceholder:(_Bool)arg3;
- (long long)estimatedIndexOfAssetForStackItemAtIndex:(long long)arg1 inCollection:(id)arg2 albumListCellContentView:(id)arg3;
- (void)configureAlbumListCellContentView:(id)arg1 forCollection:(id)arg2 title:(id)arg3 animated:(_Bool)arg4 enabled:(_Bool)arg5 editing:(_Bool)arg6;
- (id)initWithConfiguration:(id)arg1 dataSourceManager:(id)arg2 mediaProvider:(id)arg3 extendedTraitCollection:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

