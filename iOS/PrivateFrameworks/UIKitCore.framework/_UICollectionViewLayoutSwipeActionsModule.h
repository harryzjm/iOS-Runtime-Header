//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UICollectionViewLayout, UISwipeActionController;

__attribute__((visibility("hidden")))
@interface _UICollectionViewLayoutSwipeActionsModule : NSObject
{
    struct {
        unsigned int layoutUpdateOrRefreshPending:1;
        unsigned int hasDeferredLayoutUpdateOrRefresh:1;
        unsigned int preserveExistingLayoutAttributesForSwipedViews:1;
    } _flags;
    UICollectionViewLayout *_host;
    UISwipeActionController *_swipeActionController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UISwipeActionController *swipeActionController; // @synthesize swipeActionController=_swipeActionController;
@property(nonatomic) __weak UICollectionViewLayout *host; // @synthesize host=_host;
- (id)swipeViewManipulatorForSwipeActionController:(id)arg1;
- (id)propertyAnimatorForCollectionViewUpdates:(id)arg1 withCustomAnimator:(id)arg2;
- (void)_transformLayoutAttributes:(id)arg1 ofSeparatorAtBottom:(_Bool)arg2 forSwipeOccurrence:(id)arg3 isDisappearing:(_Bool)arg4;
- (void)transformDecorationLayoutAttributes:(id)arg1 isDisappearing:(_Bool)arg2;
- (void)transformCellLayoutAttributes:(id)arg1 isDisappearing:(_Bool)arg2;
- (void)finalizeCollectionViewUpdate:(id)arg1;
- (void)updateWithDataSourceTranslator:(id)arg1;
- (void)_invalidateSwipeActionsLayoutRefreshingActiveConfigurations:(_Bool)arg1;
- (_Bool)_canIgnoreInvalidationContext:(id)arg1;
- (void)processLayoutInvalidationWithContext:(id)arg1 updateConfigurations:(_Bool)arg2;
- (void)editingStateDidChange;
- (_Bool)hasActiveSwipe;
- (void)swipeActionController:(id)arg1 swipeOccurrence:(id)arg2 didChangeStateFrom:(long long)arg3 to:(long long)arg4;
- (void)swipeActionController:(id)arg1 didEndSwipeForItemAtIndexPath:(id)arg2;
- (void)swipeActionController:(id)arg1 didBeginSwipeForItemAtIndexPath:(id)arg2;
- (void)swipeActionController:(id)arg1 willBeginSwipeForItemAtIndexPath:(id)arg2;
- (void)swipeActionController:(id)arg1 cleanupActionsView:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)swipeActionController:(id)arg1 insertActionsView:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)swipeActionController:(id)arg1 mayBeginSwipeForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)swipeActionController:(id)arg1 extraInsetsForItemAtIndexPath:(id)arg2;
- (id)swipeActionController:(id)arg1 viewForItemAtIndexPath:(id)arg2;
- (id)swipeActionController:(id)arg1 indexPathForTouchLocation:(struct CGPoint)arg2;
- (long long)layoutDirectionForSwipeActionController:(id)arg1;
- (id)_cellWithCustomGroupingAtIndexPath:(id)arg1;
- (void)_updateSwipeActionsConfiguration:(id)arg1 forIndexPath:(id)arg2;
- (id)swipeActionController:(id)arg1 trailingSwipeConfigurationForItemAtIndexPath:(id)arg2;
- (id)swipeActionController:(id)arg1 leadingSwipeConfigurationForItemAtIndexPath:(id)arg2;
- (id)itemContainerViewForSwipeActionController:(id)arg1;
- (id)gestureRecognizerViewForSwipeActionController:(id)arg1;
- (id)indexPathsWithActiveSwipes;
- (void)revealTrailingSwipeActionsForIndexPath:(id)arg1;
- (void)swipeItemAtIndexPath:(id)arg1 direction:(unsigned long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_canSwipeItemAtIndexPath:(id)arg1;
- (void)_performForcedCollectionViewLayoutPreservingExistingLayoutAttributes;
- (void)teardown;
- (id)initWithHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

