//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIDragInteractionDelegate_Private-Protocol.h>
#import <UIKit/_UICollectionViewShadowUpdatesRebaseApplicable-Protocol.h>

@class NSArray, NSIndexPath, NSString, UICollectionView, UIDragInteraction, _UICollectionViewDragSourceControllerDragState, _UICollectionViewDragSourceControllerSessionState;
@protocol UIDragSession, _UICollectionViewDragSourceControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceController : NSObject <UIDragInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable>
{
    UICollectionView *_collectionView;
    UIDragInteraction *_dragInteraction;
    id <_UICollectionViewDragSourceControllerDelegate> _delegate;
    _UICollectionViewDragSourceControllerSessionState *_sessionState;
    _UICollectionViewDragSourceControllerDragState *_dragState;
}

+ (id)controllerForCollectionView:(id)arg1 delegate:(id)arg2;
@property(retain, nonatomic) _UICollectionViewDragSourceControllerDragState *dragState; // @synthesize dragState=_dragState;
@property(retain, nonatomic) _UICollectionViewDragSourceControllerSessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) __weak id <_UICollectionViewDragSourceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)arg1;
- (id)_filterCandidateIndexPaths:(id)arg1 forUserSelectedIndexPath:(id)arg2 session:(id)arg3;
- (void)_sessionWillBegin:(id)arg1 forDragInteraction:(id)arg2;
- (id)_previewParametersForItemAtIndexPath:(id)arg1;
- (id)_queryForItemsFromClientForSession:(id)arg1 dataSourceIndexPath:(id)arg2 location:(struct CGPoint)arg3 isInitialQuery:(_Bool)arg4;
- (_Bool)_isCompatibilityMode;
- (void)_addDragItemsToExistingSession:(id)arg1 forDataSourceIndexPath:(id)arg2;
- (_Bool)_delegateImplementsSelector:(SEL)arg1;
- (_Bool)_delegateImplementsDragSourceDidAddItem;
- (_Bool)_delegateImplementsDragItemsForItemAtIndexPathWithDefaultPreview;
- (_Bool)_delegateImplementsDragItemsForItemAtIndexPath;
- (_Bool)_delegateImplementsDragSourceItemsAtIndexPath;
- (void)_configureInteraction;
- (id)_dragAndDropController;
- (id)_dragSourceDelegateProxy;
- (id)_dragSourceDelegateActual;
- (id)_dragDelegateProxy;
- (id)_dragDelegateActual;
- (long long)_dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)setDragInteractionEnabled:(_Bool)arg1;
- (id)indexPathForDragItem:(id)arg1;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) NSIndexPath *dragFromIndexPath;
@property(readonly, nonatomic) NSArray *dragFromIndexPaths;
@property(readonly, nonatomic) long long currentSessionItemCount;
@property(readonly, nonatomic) id <UIDragSession> dragSession;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

