//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUQuickControlPresentationCoordinatorDelegate-Protocol.h>
#import <HomeUI/HUQuickControlPresentationHost-Protocol.h>
#import <HomeUI/UIGestureRecognizerDelegate-Protocol.h>

@class HFItemManager, HUQuickControlPresentationCoordinator, NSMutableDictionary, NSString, UICollectionViewLayout, UILongPressGestureRecognizer, UIViewController;
@protocol HUControllableCollectionViewLayout, HUQuickControlPresentationHost;

@interface HUControllableItemCollectionViewController <HUQuickControlPresentationHost, UIGestureRecognizerDelegate, HUQuickControlPresentationCoordinatorDelegate>
{
    _Bool _viewAppeared;
    _Bool _suppressCollectionViewUpdatesForReorderCommit;
    unsigned long long _contentColorStyle;
    HUQuickControlPresentationCoordinator *_quickControlPresentationCoordinator;
    UIViewController<HUQuickControlPresentationHost> *_ancestorQuickControlHostAtPresentationTime;
    UILongPressGestureRecognizer *_reorderGestureRecognizer;
    NSMutableDictionary *_actionSetExecutionFuturesKeyedByIdentifier;
}

@property(retain, nonatomic) NSMutableDictionary *actionSetExecutionFuturesKeyedByIdentifier; // @synthesize actionSetExecutionFuturesKeyedByIdentifier=_actionSetExecutionFuturesKeyedByIdentifier;
@property(nonatomic) _Bool suppressCollectionViewUpdatesForReorderCommit; // @synthesize suppressCollectionViewUpdatesForReorderCommit=_suppressCollectionViewUpdatesForReorderCommit;
@property(retain, nonatomic) UILongPressGestureRecognizer *reorderGestureRecognizer; // @synthesize reorderGestureRecognizer=_reorderGestureRecognizer;
@property(nonatomic) _Bool viewAppeared; // @synthesize viewAppeared=_viewAppeared;
@property(nonatomic) __weak UIViewController<HUQuickControlPresentationHost> *ancestorQuickControlHostAtPresentationTime; // @synthesize ancestorQuickControlHostAtPresentationTime=_ancestorQuickControlHostAtPresentationTime;
@property(retain, nonatomic) HUQuickControlPresentationCoordinator *quickControlPresentationCoordinator; // @synthesize quickControlPresentationCoordinator=_quickControlPresentationCoordinator;
@property(readonly, nonatomic) unsigned long long contentColorStyle; // @synthesize contentColorStyle=_contentColorStyle;
- (void).cxx_destruct;
- (void)_logUserMetricsAfterTapOfItem:(id)arg1;
- (_Bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (void)childViewController:(id)arg1 didEndQuickControlsPresentation:(id)arg2;
- (void)childViewController:(id)arg1 willBeginQuickControlsPresentation:(id)arg2;
- (id)_ancestorQuickControlPresentationHost;
- (void)presentationCoordinator:(id)arg1 didEndPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2;
- (void)presentationCoordinator:(id)arg1 clearOverrideAttributesForItem:(id)arg2;
- (void)presentationCoordinator:(id)arg1 applyOverrideAttributes:(id)arg2 toItem:(id)arg3;
- (id)presentationCoordinator:(id)arg1 contextForPresentationAtPoint:(struct CGPoint)arg2;
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (id)traitCollectionForPresentationCoordinator:(id)arg1;
- (id)quickControlPresentationContextForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)_itemForServiceControlPresentationAtPoint:(struct CGPoint)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)_itemSetDidChange;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)_updateEditingStateForCell:(id)arg1;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (id)_performTapActionForItem:(id)arg1;
- (_Bool)_hasTapActionForItem:(id)arg1;
- (id)_visibleCellForItem:(id)arg1;
- (void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2;
- (id)reorderableHomeKitItemListForSection:(long long)arg1;
- (_Bool)canReorderItemAtIndexPath:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_reorderGestureDidEnd:(id)arg1 finished:(_Bool)arg2;
- (void)_reorderGestureDidChange:(id)arg1;
- (void)_reorderGestureDidBegin:(id)arg1;
- (void)_handleReorderGesture:(id)arg1;
- (void)setExecutionFuture:(id)arg1 forActionSet:(id)arg2;
- (void)setContentColorStyle:(unsigned long long)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UICollectionViewLayout<HUControllableCollectionViewLayout> *collectionViewLayout; // @dynamic collectionViewLayout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HFItemManager *itemManager;
@property(readonly) Class superclass;

@end

