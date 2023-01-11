//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCache, NSMutableDictionary, PXPhotosDataSource, PXPhotosDataSourceChange;

@interface PXPhotoKitAssetsDataSource
{
    NSMutableDictionary *_layoutItemByAssetCache;
    NSCache *_fetchedKeyAssetByAssetCollectionLocalIdentifierCache;
    NSCache *_assetReferenceNearestToAssetCache;
    PXPhotosDataSource *_photosDataSource;
    PXPhotosDataSourceChange *_change;
}

+ (id)dataSourceWithAssets:(id)arg1;
+ (id)dataSourceWithAsset:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PXPhotosDataSourceChange *change; // @synthesize change=_change;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (id)selectionSnapshotForAsset:(id)arg1 assetCollection:(id)arg2;
- (id)inputForItem:(id)arg1;
- (void)prefetchSections:(id)arg1;
- (void)prefetchIndexPaths:(id)arg1 level:(unsigned long long)arg2;
- (void)prefetchIndexPaths:(id)arg1;
- (_Bool)areAllSectionsConsideredAccurate;
- (_Bool)couldObjectReferenceAppear:(id)arg1;
- (_Bool)containsMultipleItems;
- (_Bool)containsAnyItems;
- (_Bool)isSorted;
- (id)filterPredicate;
- (_Bool)isFiltered;
- (_Bool)startsAtEnd;
- (long long)startingSection;
- (id)startingAssetReference;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1 assetCollectionReferenceWithSameKeyAssetAsParent:(id *)arg2;
- (id)assetCollectionReferencesWithParentAssetCollectionReference:(id)arg1;
- (id)lastAssetCollection;
- (id)firstAssetCollection;
- (id)containerCollection;
- (id)assetIdentifierAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)indexPathSetForObjectIDs:(id)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectID:(id)arg1;
- (id)assetCollectionReferenceNearestToObjectReference:(id)arg1;
- (id)_assetReferenceReferenceNearestToAssetReferenceUsingExhaustiveSearch:(id)arg1;
- (id)_assetCollectionReferenceNearestToObjectReferenceAssumingSortedByIncreasingCreationDate:(id)arg1;
- (id)objectReferenceNearestToObjectReference:(id)arg1 inSection:(long long)arg2;
- (id)objectReferenceNearestToObjectReference:(id)arg1;
- (id)_fastKeyCuratedAssetForAssetCollection:(id)arg1;
- (long long)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg1;
- (long long)numberOfSectionsWithEnrichmentState:(unsigned short)arg1;
- (_Bool)hasCurationForAssetCollection:(id)arg1;
- (long long)numberOfCuratedItemsInAssetCollection:(id)arg1;
- (long long)numberOfUncuratedItemsInAssetCollection:(id)arg1;
- (long long)numberOfCuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfUncuratedItemsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)keyAssetIndexPathForSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)keyAssetsForAssetCollection:(id)arg1;
- (id)keyAssetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)_indexPathForObjectReference:(id)arg1 restrictedToSection:(long long)arg2;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectReferenceAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (_Bool)isFilteringDisabledForAssetCollection:(id)arg1;
- (_Bool)isFilteringAssetCollection:(id)arg1;
- (unsigned long long)estimatedOtherCount;
- (unsigned long long)estimatedVideosCount;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedAssetCountForSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)description;
- (unsigned long long)identifier;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2;
- (id)photosGraphSuggestedContributions;
- (_Bool)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath)arg1;

@end
