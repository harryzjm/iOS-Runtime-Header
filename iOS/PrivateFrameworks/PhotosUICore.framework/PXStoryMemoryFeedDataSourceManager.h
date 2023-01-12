//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXStoryMutableMemoryFeedDataSourceManager-Protocol.h>

@class NSString, PHPhotoLibrary, PXFetchResultBasedMemoriesDataSourceManager, PXUpdater;

@interface PXStoryMemoryFeedDataSourceManager <PXStoryMutableMemoryFeedDataSourceManager, PXChangeObserver, PXSectionedDataSourceManagerObserver>
{
    _Bool _isActive;
    _Bool _hasAnyFavorites;
    _Bool _wantsFavoritesOnly;
    PXUpdater *_updater;
    PHPhotoLibrary *_photoLibrary;
    PXFetchResultBasedMemoriesDataSourceManager *_allMemoriesDataSourceManager;
    PXFetchResultBasedMemoriesDataSourceManager *_favoriteMemoriesDataSourceManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *favoriteMemoriesDataSourceManager; // @synthesize favoriteMemoriesDataSourceManager=_favoriteMemoriesDataSourceManager;
@property(readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *allMemoriesDataSourceManager; // @synthesize allMemoriesDataSourceManager=_allMemoriesDataSourceManager;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) _Bool wantsFavoritesOnly; // @synthesize wantsFavoritesOnly=_wantsFavoritesOnly;
@property(readonly, nonatomic) _Bool hasAnyFavorites; // @synthesize hasAnyFavorites=_hasAnyFavorites;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateHasAnyFavorites;
- (void)_invalidateHasAnyFavorites;
- (void)_updateDataSource;
- (void)_invalidateDataSource;
- (void)_setNeedsUpdate;
- (void)setWantsFavoritesOnly:(_Bool)arg1;
- (void)setIsActive:(_Bool)arg1;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(id)arg2;
- (id)createInitialDataSource;
- (void)setHasAnyFavorites:(_Bool)arg1;
- (void)didPerformChanges;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
