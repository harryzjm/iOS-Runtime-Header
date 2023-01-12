//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UICollectionViewCompositionLayout.h>

@class NSArray, NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSplitCollectionViewLayout : _UICollectionViewCompositionLayout
{
    NSString *_backdropGroupName;
    NSArray *_indexPathsForGradientItems;
    NSMutableArray *_orderedSublayouts;
    _Bool _rendersWithParallax;
    _Bool _rendersWithPerspective;
    NSMapTable *_sublayoutToSectionsToIndexRanges;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool rendersWithParallax; // @synthesize rendersWithParallax=_rendersWithParallax;
@property(nonatomic) _Bool rendersWithPerspective; // @synthesize rendersWithPerspective=_rendersWithPerspective;
@property(copy, nonatomic) NSArray *indexPathsForGradientItems; // @synthesize indexPathsForGradientItems=_indexPathsForGradientItems;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
- (id)_newStorePageCollectionViewLayout;
- (void)_createSectionsToIndexRangesMapTableIfNeededForSublayout:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)sublayouts;
- (void)removeSublayout:(id)arg1;
- (struct CGRect)_frameForLayout:(id)arg1 offset:(struct CGPoint)arg2 relativeToEdges:(unsigned long long)arg3 fromSiblingLayout:(id)arg4;
- (void)addSublayout:(id)arg1 forSections:(id)arg2 offset:(struct CGPoint)arg3 relativeToEdges:(unsigned long long)arg4 fromSiblingLayout:(id)arg5;
- (void)addSublayout:(id)arg1 forItems:(id)arg2 inSection:(long long)arg3 offset:(struct CGPoint)arg4 relativeToEdges:(unsigned long long)arg5 fromSiblingLayout:(id)arg6;
- (void)addSublayout:(id)arg1 forElementKinds:(id)arg2;
- (id)pinnedLayoutAttributesForItemsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForUnpinnedItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *indexPathsForPinningItems;
- (void)addSublayoutsUsingSplitsDescription:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

