//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSMutableDictionary, NSString, UITraitCollection, _UICollectionCompositionalLayoutDynamicAnimator, _UICollectionCompositionalLayoutSolverOptions, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutContainer, _UICollectionLayoutDynamicsConfiguration, _UICollectionLayoutSectionGeometryTranslator, _UICollectionPreferredSizes, _UIDataSourceSnapshotter, _UIRTree;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolver : NSObject
{
    _Bool _estimatesSizes;
    _Bool _hasOrthogonalScrollingSections;
    _Bool _hasSectionsWithCustomContainers;
    _Bool _shouldPerformPhysicalRTLTransforms;
    _Bool _roundsToScreenScale;
    _Bool _layoutRTL;
    CDUnknownBlockType _cellLayoutAttributesTransformer;
    CDUnknownBlockType _sectionDecorationLayoutAttributesTransformer;
    CDUnknownBlockType _sectionSupplementaryLayoutAttributesTransformer;
    _UICollectionLayoutContainer *_container;
    UITraitCollection *_traitCollection;
    unsigned long long _layoutAxis;
    _UIDataSourceSnapshotter *_dataSourceSnapshot;
    double _interSectionSpacing;
    NSIndexSet *_orthogonalScrollingSectionIndexes;
    NSIndexSet *_customContainerSectionIndexes;
    CDUnknownBlockType _dynamicsConfigurationHandler;
    _UICollectionCompositionalLayoutSolverOptions *_options;
    Class _layoutAttributeClass;
    Class _invalidationContextClass;
    CDUnknownBlockType _invalidationHandler;
    double _memoizedScreenScale;
    CDUnknownBlockType _sectionProvider;
    NSIndexSet *_solutionBookmarkIndexesWithPinnedSupplementaryItems;
    _UICollectionCompositionalLayoutDynamicAnimator *_dynamicAnimator;
    _UICollectionLayoutDynamicsConfiguration *_dynamicsConfiguration;
    NSArray *_solutionBookmarks;
    _UIRTree *_sectionIndexer;
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    NSMutableDictionary *_cachedItemAttributes;
    NSMutableDictionary *_cachedSupplementaryAttributes;
    NSMutableDictionary *_cachedDecorationAttributes;
    unsigned long long _preUpdateCachedItemCount;
    NSArray *_globalSupplementaryItems;
    _UICollectionLayoutAuxillaryItemSolver *_globalSupplementarySolver;
    _UICollectionPreferredSizes *_globalSupplementaryPreferredSizes;
    long long _numberOfSectionsWithTransformVisibleItemsHandler;
    unsigned long long _containerSizeDependentAxes;
    struct CGSize _actualContentSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGRect)_dynamicReferenceBounds;
- (_Bool)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (id)auxillaryHostTraitCollection;
- (id)auxillaryHostPreferredSizes;
- (id)auxillaryHostSupplementaryEnroller;
- (long long)auxillaryHostAuxillaryKind;
- (unsigned long long)auxillaryHostLayoutAxis;
- (_Bool)auxillaryHostShouldLayoutRTL;
- (id)auxillaryHostAuxillaryItems;
- (id)auxillaryHostContainer;
- (struct CGRect)auxillaryHostPinningRect;
- (struct CGSize)auxillaryHostContentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

