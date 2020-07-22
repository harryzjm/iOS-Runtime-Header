//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

#import <PassKitUI/PKPassDeleteAnimationControllerDelegate-Protocol.h>
#import <PassKitUI/PKPassDeleteHandler-Protocol.h>
#import <PassKitUI/PKPassFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPassGroupViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer, PKBacklightController, PKGroup, PKPGSVSectionHeaderContext, PKPass, PKPassDeleteAnimationController, PKPassFooterView, PKPassGroupView, PKPassthroughView, PKPaymentService, PKReusablePassViewQueue, PKSecureElement, UIColor, UIImageView, UIView;
@protocol PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate><UIScrollViewDelegate;

@interface PKPassGroupStackView : UIScrollView <PKPassGroupViewDelegate, PKPassDeleteAnimationControllerDelegate, PKPaymentServiceDelegate, PKPassFooterViewDelegate, PKPassDeleteHandler>
{
    PKPassGroupView *_modallyPresentedGroupView;
    PKGroup *_modallyPresentedGroup;
    NSMutableArray *_passPileViews;
    unsigned long long _modalGroupIndex;
    long long _scrollingTestState;
    int _currentTestReps;
    long long _presentationState;
    NSMutableDictionary *_groupViewsByGroupID;
    PKPGSVSectionHeaderContext *_paymentHeaderContext;
    PKPGSVSectionHeaderContext *_passHeaderContext;
    UIView *_footerView;
    double _footerViewMinimumHeight;
    UIImageView *_footerPocketBackgroundShadow;
    UIImageView *_footerPocketForegroundShadow;
    struct {
        unsigned long long numberOfGroups;
        unsigned long long separatorIndex;
        double separationPadding;
        long long pilingMode;
        double groupCellHeight;
        unsigned int disableTableModalPresentation:1;
        unsigned int hasPaymentPasses:1;
        unsigned int hasPasses:1;
        unsigned int hasPaymentHeader:1;
        unsigned int hasPassHeader:1;
        unsigned int hasPaymentHeaderView:1;
        unsigned int hasPassHeaderView:1;
        unsigned int hasFooter:1;
        unsigned int isDeleting:1;
        unsigned int isCompactModalPresentation:1;
        unsigned int isContinuingModalPresentation:1;
        unsigned int forceSubheaderUpdate:1;
        unsigned int forceFooterUpdate:1;
        unsigned int mutatingForcePileOffscreen:1;
    } _layoutState;
    struct CGSize _lastBoundsSize;
    struct UIEdgeInsets _lastBoundsInsets;
    double _lastTopContentSeparatorHeight;
    PKPassDeleteAnimationController *_deleteAnimationController;
    CDUnknownBlockType _transitionCanceller;
    long long _nextState;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    _Bool _hasSuspendedTransition;
    long long _suspendedNextState;
    NSMutableArray *_suspendedTransitionCompletionHandlers;
    _Bool _inPassthroughHitTest;
    PKReusablePassViewQueue *_reusableCardViewQueue;
    PKPassGroupView *_reorderedGroupView;
    unsigned long long _initialIndexOfReorderedGroup;
    unsigned long long _previousIndexOfReorderedGroup;
    struct CGPoint _reorderedGroupViewPositionInFrame;
    struct CGPoint _panningVelocity;
    NSTimer *_autoscrollTimer;
    struct {
        unsigned int isReordering:1;
        unsigned int isReorderPeekCompensated:1;
        unsigned int hasScrolledUp:1;
        unsigned int hasScrolledDown:1;
    } _reorderingFlags;
    NSMutableArray *_reorderActions;
    unsigned long long _reorderActionTag;
    NSMutableDictionary *_groupViewsInFlightByGroupID;
    unsigned int _userInteractionCounter;
    NSMutableDictionary *_animatorsByGroupID;
    PKPaymentService *_paymentService;
    PKPassFooterView *_passFooterView;
    _Bool _showingFooter;
    PKPassthroughView *_headerContainerView;
    PKPassthroughView *_subheaderContainerView;
    PKPassthroughView *_passContainerView;
    NSMutableArray *_passthroughViews;
    PKSecureElement *_secureElement;
    _Bool _delegateWantsTopContentSeparation;
    _Bool _delegateWantsBottomContentSeparation;
    PKBacklightController *_backlightController;
    _Bool _footerSuppressed;
    _Bool _staggerPileAnimations;
    _Bool _hasOutstandingPeerPaymentAccountActions;
    id <PKPassGroupStackViewDatasource> _datasource;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    double _topContentSeparatorHeight;
}

+ (id)backgroundColor;
@property(nonatomic) _Bool hasOutstandingPeerPaymentAccountActions; // @synthesize hasOutstandingPeerPaymentAccountActions=_hasOutstandingPeerPaymentAccountActions;
@property(nonatomic) _Bool staggerPileAnimations; // @synthesize staggerPileAnimations=_staggerPileAnimations;
@property(nonatomic) double topContentSeparatorHeight; // @synthesize topContentSeparatorHeight=_topContentSeparatorHeight;
@property(copy, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(copy, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(nonatomic) _Bool footerSuppressed; // @synthesize footerSuppressed=_footerSuppressed;
@property(nonatomic) unsigned long long modalGroupIndex; // @synthesize modalGroupIndex=_modalGroupIndex;
@property(nonatomic) long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) id <PKPassGroupStackViewDatasource> datasource; // @synthesize datasource=_datasource;
- (void).cxx_destruct;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1;
- (_Bool)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2;
- (void)deleteAnimationController:(id)arg1 didComplete:(_Bool)arg2;
- (void)deleteAnimationControllerWillBeginDeleteAnimation:(id)arg1;
- (void)passFooterViewDidChangeUserIntentRequirement:(id)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(id)arg1;
- (_Bool)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)groupView:(id)arg1 didScrollToPassView:(id)arg2;
- (void)groupView:(id)arg1 resizeButtonPressedForPass:(id)arg2 withBarcode:(_Bool)arg3;
- (struct CGRect)groupView:(id)arg1 targetPageControlFrameForProposedFrame:(struct CGRect)arg2;
- (long long)groupViewContentModeForFrontmostPassWhenPiled:(id)arg1 withDefaultContentMode:(long long)arg2;
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1;
- (id)groupViewReusablePassViewQueue:(id)arg1;
- (unsigned long long)groupViewPassesSuppressedContent:(id)arg1;
- (void)groupViewFrontPassDidResize:(id)arg1 animated:(_Bool)arg2;
- (_Bool)groupViewShouldAllowPassResize:(id)arg1;
- (void)groupView:(id)arg1 panned:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (_Bool)groupViewShouldAllowPanning:(id)arg1;
- (void)groupViewPanDidEnd:(id)arg1;
- (void)groupViewPanDidBegin:(id)arg1;
- (void)groupView:(id)arg1 didUpdatePassView:(id)arg2;
- (void)groupViewTapped:(id)arg1;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)paymentDeviceDidBecomeUnavailable;
- (void)paymentDeviceDidBecomeAvailable;
- (void)paymentDeviceDidLeaveRestrictedMode;
- (void)paymentDeviceDidEnterRestrictedMode;
- (void)_cancelSuspendedTransition;
- (void)_resumeSuspendedTransition;
- (void)_suspendTransition;
- (void)_cancelTransition;
- (void)_transitionSuccessful:(_Bool)arg1;
- (void)_executeCompletionHandlers:(id)arg1 cancelled:(_Bool)arg2;
- (id)_headerContextForPassType:(unsigned long long)arg1;
- (void)_undoUserReorderWithReorderedGroupView:(id)arg1;
- (void)_setDefaultPaymentPassFromGroupView:(id)arg1 reorderedGroupView:(id)arg2;
- (void)_disableScrollingAndNormalizeContentOffset;
- (void)_setScrollEnabled:(_Bool)arg1;
- (_Bool)_isIngestingPass;
- (void)_setModalGroupView:(id)arg1;
- (void)_notifyDelegateOfStateChange:(_Bool)arg1;
- (id)_groupViewAtIndexWhileEnsuringVisible:(unsigned long long)arg1 withContentMode:(long long)arg2;
- (id)_groupViewWithGroup:(id)arg1;
- (id)_groupViewAtIndex:(unsigned long long)arg1;
- (void)_reverseEnumerateLoadedGroupViews:(CDUnknownBlockType)arg1;
- (void)_enumerateLoadedGroupViews:(CDUnknownBlockType)arg1;
- (id)_sortedDescendingGroupViewIndexes;
- (id)_sortedAscendingGroupViewIndexes;
- (id)_groupBeforeSeparatorGroup;
- (id)_separatorGroup;
- (id)_firstHeaderContext;
- (_Bool)_isModalPresentationAllowedForSingleGroup;
- (_Bool)_isModalPresentationAllowed;
- (_Bool)_isTableModalPresentation;
- (_Bool)_shouldTablePresentationScroll;
- (id)_frontmostPastViewForGroupIndex:(unsigned long long)arg1;
- (double)_setupSpringFactoryForPileAnimations:(id)arg1 withMaximumAcceleration:(double)arg2 reverse:(_Bool)arg3;
- (double)_setupSpringFactory:(id)arg1 forPileAnimationFromPresentationState:(long long)arg2 toPresentationState:(long long)arg3 reverse:(_Bool)arg4;
- (double)_setupSpringFactory:(id)arg1 forPileAnimationToPresentationState:(long long)arg2 reverse:(_Bool)arg3;
- (void)_removeMotionEffectsFromModalPile;
- (void)_addMotionEffectsToModalPile;
- (void)_animateGroupViewForUndo:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)_reorderPositionChangedForReorderedGroupViewWithVelocity:(struct CGPoint)arg1;
- (unsigned long long)_indexOfReorderedGroupView;
- (void)_adjustSeparationGroupAndPassViewsForReordering;
- (void)_stopAutoscrollTimer;
- (void)_autoscrollForReordering:(id)arg1;
- (void)_autoscrollIfNecessary;
- (void)_animateGroupViewAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 withAnchorView:(id)arg3 insertAbove:(_Bool)arg4;
- (void)_layoutFooterAnimated:(_Bool)arg1 withAnimationDelay:(double)arg2;
- (void)_layoutContentFromOffset:(struct CGPoint)arg1 toOffset:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (void)_updatePositionForGroupView:(id)arg1 toPosition:(struct CGPoint)arg2 withSpringFactory:(id)arg3;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_updateTransformForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4;
- (void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3;
- (void)_updateGroupStateForGroupViewInModalPresentation:(id)arg1 animated:(_Bool)arg2;
- (void)_updateGroupStateForGroupViewInStackPresentation:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)_frameForFooterViewForPassView:(id)arg1;
- (_Bool)_isGroupAtIndexInModalPile:(unsigned long long)arg1;
- (unsigned long long)_lastIndex;
- (struct CATransform3D)_transformForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (struct CGPoint)_positionForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (double)_scaleForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3;
- (double)_opacityForGroupAtIndex:(unsigned long long)arg1 forState:(long long)arg2;
- (double)_xPositionForGroupView:(id)arg1 forState:(long long)arg2;
- (struct CGRect)_xFrameForGroupViewInState:(long long)arg1;
- (unsigned long long)_indexOfGroupView:(id)arg1;
- (double)_yForGroupInOffscreenPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInPileAtIndex:(unsigned long long)arg1;
- (double)_yForGroupInModalPileWithModalGroupY:(double)arg1;
- (double)_yForGroupInModalPileAtIndex:(unsigned long long)arg1;
- (double)_pileBaseHeight;
- (double)_pileAscenderHeightForGroupViewInPile:(id)arg1;
- (double)_pileAscenderHeight;
- (double)_pileSeparationHeight;
- (unsigned long long)_maximumNumberOfVisiblePilePasses;
- (double)_maxYOfPassFrontFaceAtIndex:(unsigned long long)arg1;
- (double)_yForSingleGroupView:(id)arg1;
- (double)_yForModallyPresentedGroupIgnoringCompactState:(_Bool)arg1;
- (double)_yForModallyPresentedGroup;
- (double)_yForGroupInTableAtIndex:(unsigned long long)arg1;
- (double)_transformedYForNativeYInTable:(double)arg1 withBounds:(struct CGRect)arg2 index:(unsigned long long)arg3;
- (struct CGPoint)_nativePositionForPositionInTable:(struct CGPoint)arg1;
- (unsigned long long)_indexForNativePositionInTable:(struct CGPoint)arg1 roundToClosestIndex:(_Bool)arg2;
- (unsigned long long)_indexForNativePositionInTable:(struct CGPoint)arg1;
- (double)_nativeYForGroupInTableAtIndex:(unsigned long long)arg1;
- (struct CGSize)_contentSize;
- (double)_lastBarcodePassGroupCellHeight;
- (double)_groupCellHeight;
- (unsigned long long)_tablePresentationNumberOfCellsBeforeHeaderHidden;
- (unsigned long long)_tablePresentationNumberOfCellsBeforeStacking;
- (double)_yPositionForGroupAtIndex:(unsigned long long)arg1 forState:(long long)arg2;
- (void)_updateContentSize;
- (void)_updateContentSizeAndLayout:(_Bool)arg1 forceUpdate:(_Bool)arg2;
- (void)_updateContentSizeAndLayout:(_Bool)arg1;
- (_Bool)_recomputeLayoutState;
- (void)_updateHeaderFooterState:(_Bool)arg1;
- (_Bool)_updateHeaderContext:(id *)arg1 toContext:(id)arg2 animated:(_Bool)arg3;
- (void)_endGroupPanWithGestureRecognizer:(id)arg1;
- (void)_beginGroupPanWithGestureRecognizer:(id)arg1;
- (void)_handleModalGroupGesture:(id)arg1;
- (void)_cleanUpAnimatorForGroupView:(id)arg1;
- (void)_addPanGestureRecognizerToGroupView:(id)arg1;
- (id)_animatorForGestureRecognizer:(id)arg1;
- (void)_adjustPassFooterViewOpacityForYOffset:(double)arg1;
- (void)_showPassFooterView:(_Bool)arg1 forPassView:(id)arg2 context:(id)arg3 delay:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_showPassFooterView:(_Bool)arg1 forPassView:(id)arg2 animated:(_Bool)arg3 delay:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_updatePassFooterViewWithContext:(id)arg1;
- (void)_updatePassFooterViewAnimated:(_Bool)arg1;
- (void)_updatePassFooterViewIfNecessaryWithContext:(id)arg1 becomeVisibleDelay:(double)arg2;
- (void)_updatePassFooterViewIfNecessaryAnimated:(_Bool)arg1 withBecomeVisibleDelay:(double)arg2;
- (long long)_footerStateForPassView:(id)arg1 withContext:(id)arg2;
- (double)_passFooterAlphaWhenVisible;
- (_Bool)_canShowPassFooter;
- (_Bool)_passEligibleForFooter:(id)arg1;
- (void)_presentPassIngestionWithAnimation:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_presentGroupStackViewWithAnimation:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_presentModalGroupViewPostAnimationActions;
- (void)_refreshBacklightForFrontmostPassGroup;
- (void)_refreshBrightness;
- (void)_resetBrightness;
- (void)_presentModalGroupView:(id)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_presentOffscreenAnimated:(_Bool)arg1 split:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_generateModalGroupPileWithVisibleIndexes:(struct _NSRange)arg1 reservePlaceForModalGroup:(_Bool)arg2;
- (unsigned long long)_edgeStylesObscuredByTopCornersOfPassStyle:(long long)arg1;
- (unsigned long long)_edgeStylesObscuredByTopMiddleOfPassStyle:(long long)arg1;
- (struct _NSRange)_rangeOfEagerLoadedIndexes;
- (id)_stackedIndices;
- (struct _NSRange)_rangeOfVisibleIndexesIgnoringBottomInset:(_Bool)arg1;
- (struct _NSRange)_rangeOfVisibleIndexes;
- (unsigned long long)_startVisibleIndex;
- (void)_removeGroupViewAsSubviewWithGroupID:(id)arg1;
- (void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_arrangeGroups;
- (void)_loadModalGroupView;
- (void)_tileGroupsForState:(long long)arg1 eager:(_Bool)arg2;
- (id)_loadGroupViewAtIndex:(unsigned long long)arg1 forState:(long long)arg2 presentationState:(long long)arg3 cached:(_Bool *)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) id <PKPassGroupStackViewDelegate><UIScrollViewDelegate> delegate; // @dynamic delegate;
@property(readonly, nonatomic) _Bool isPresentingPassViewFront;
@property(readonly, nonatomic) _Bool isReordering;
@property(readonly, nonatomic) _Bool isModallyPresentedPassAuthorized;
@property(readonly, nonatomic) double pileHeight;
@property(nonatomic) long long pilingMode;
- (void)setFooterSuppressed:(_Bool)arg1 withContext:(id)arg2;
- (id)subheaderForPassType:(unsigned long long)arg1;
- (id)headerForPassType:(unsigned long long)arg1;
- (void)setTableModalPresentationEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateHeaderAndSubheaderViewsIfNecessary;
- (void)tilePassesEagerly:(_Bool)arg1;
- (void)presentDiff:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)deleteGroup:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reloadData;
@property(readonly, nonatomic) PKPass *modalGroupFrontmostPass;
- (void)stageGroupInPresentationState:(long long)arg1 atIndex:(unsigned long long)arg2;
- (void)layoutContentForCurrentPresentationState:(_Bool)arg1;
- (void)setPresentationState:(long long)arg1 context:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setPresentationState:(long long)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setPresentationState:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateBottomContentSeparatorVisibilityAnimated:(_Bool)arg1;
- (void)_updateTopContentSeparatorVisibilityAnimated:(_Bool)arg1;
- (CDStruct_86e25f83)_layoutStateForHeaderContextInTable:(id)arg1 withBounds:(struct CGRect)arg2;
- (void)layoutHeaderFootersAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (id)backlightController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)gotoBaseTestState;
- (void)beginSelectCardTest;
- (void)testGroupSelection;
- (void)testGoModal;
- (void)beginScrollCardListTest;
- (void)scrollUpTest;
- (void)noteDidEndScrollingForTesting;
- (void)scrollDownTest;
- (void)scrollNext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

