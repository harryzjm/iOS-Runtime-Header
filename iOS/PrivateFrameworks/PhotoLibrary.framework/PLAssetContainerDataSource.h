//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibrary/PHAssetCollectionDataSource-Protocol.h>

@class NSMutableDictionary, NSString, PHFetchResult;

@interface PLAssetContainerDataSource : NSObject <PHAssetCollectionDataSource>
{
    PHFetchResult *_assetCollectionsFetchResult;
    NSMutableDictionary *_assetsFetchResultByAssetCollection;
    unsigned long long _allAssetsCount;
    unsigned long long *_containerCounts;
    _Bool _cachedValuesNeedUpdate;
    unsigned long long _lastAssetCollectionIndex;
}

@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult; // @synthesize assetCollectionsFetchResult=_assetCollectionsFetchResult;
@property(readonly, copy) NSString *description;
- (void)viewControllerPhotoLibraryDidChange:(id)arg1;
- (id)pl_fetchAllAssets;
- (id)assetInAssetContainer:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)assetCountForContainerAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetCountForContainer:(id)arg1;
- (id)decrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(_Bool)arg2 andWrap:(_Bool)arg3;
- (id)incrementAssetIndexPath:(id)arg1 insideCurrentAssetContainer:(_Bool)arg2 andWrap:(_Bool)arg3;
- (unsigned long long)_indexOfPreviousNonEmptyAssetContainerBeforeContainerIndex:(unsigned long long)arg1 wrap:(_Bool)arg2;
- (unsigned long long)_indexOfNextNonEmptyAssetContainerAfterContainerIndex:(unsigned long long)arg1 wrap:(_Bool)arg2;
- (id)findNearestIndexPath:(id)arg1 preferNext:(_Bool)arg2;
- (_Bool)hasAssetAtIndexPath:(id)arg1;
- (id)lastAssetIndexPath;
- (id)firstAssetIndexPath;
- (unsigned long long)indexOfContainer:(id)arg1;
- (id)assetContainerAtIndex:(unsigned long long)arg1;
- (id)indexPathOfAsset:(id)arg1;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetsInAssetCollection:(id)arg1;
- (id)newAssetsFetchResults;
- (id)assetsInAssetCollectionAtIndex:(unsigned long long)arg1;
- (id)assetWithObjectID:(id)arg1;
- (unsigned long long)indexOffsetForAssetContainerAtAssetIndex:(unsigned long long)arg1;
- (unsigned long long)globalIndexOfAsset:(id)arg1;
- (id)assetAtGlobalIndex:(unsigned long long)arg1;
- (unsigned long long)decrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(_Bool)arg2 andWrap:(_Bool)arg3;
- (unsigned long long)incrementGlobalIndex:(unsigned long long)arg1 insideCurrentAssetContainer:(_Bool)arg2 andWrap:(_Bool)arg3;
- (id)indexPathForGlobalIndex:(unsigned long long)arg1;
- (unsigned long long)globalIndexForIndexPath:(id)arg1;
- (id)assetContainerForAssetGlobalIndex:(unsigned long long)arg1;
- (id)assetContainerForAsset:(id)arg1;
- (unsigned long long)allAssetsCount;
- (void)_updateCachedCount:(unsigned long long)arg1 forContainerAtContainerIndex:(unsigned long long)arg2;
- (void)_updateCachedValues;
- (void)dealloc;
- (id)initWithAssetCollectionsFetchResult:(id)arg1 collectionsAssetsFetchResults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

