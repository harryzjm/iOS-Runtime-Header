//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, UICollectionView, UICollectionViewData;

__attribute__((visibility("hidden")))
@interface UICollectionViewUpdate : NSObject
{
    UICollectionView *_collectionView;
    NSArray *_updateItems;
    UICollectionViewData *_oldModel;
    UICollectionViewData *_newModel;
    struct CGRect _oldVisibleBounds;
    struct CGRect _newVisibleBounds;
    NSMutableIndexSet *_movedItems;
    NSMutableIndexSet *_movedSections;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    long long *_oldSectionMap;
    long long *_newSectionMap;
    long long *_oldGlobalItemMap;
    long long *_newGlobalItemMap;
    NSMutableArray *_deletedSupplementaryIndexesSectionArray;
    NSMutableArray *_insertedSupplementaryIndexesSectionArray;
    NSMutableDictionary *_deletedSupplementaryTopLevelIndexesDict;
    NSMutableDictionary *_insertedSupplementaryTopLevelIndexesDict;
    id *_animatedItems;
    id *_animatedHeaders;
    id *_animatedFooters;
    NSMutableArray *_viewAnimations;
    NSIndexPath *_oldFocusedIndexPath;
    NSIndexPath *_newFocusedIndexPath;
    long long _oldFocusedViewType;
    long long _newFocusedViewType;
}

- (void).cxx_destruct;
- (id)oldIndexPathForSupplementaryElementOfKind:(id)arg1 newIndexPath:(id)arg2;
- (id)newIndexPathForSupplementaryElementOfKind:(id)arg1 oldIndexPath:(id)arg2;
- (void)_computeSupplementaryUpdates;
- (void)_computeItemUpdates;
- (void)_computeSectionUpdates;
- (id)description;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1 updateItems:(id)arg2 oldModel:(id)arg3 newModel:(id)arg4 oldVisibleBounds:(struct CGRect)arg5 newVisibleBounds:(struct CGRect)arg6;

@end
