//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBSceneLayoutWorkspaceTransactionObserver-Protocol.h>
#import <SpringBoard/SBWorkspaceApplicationSceneTransitionContextDelegate-Protocol.h>
#import <SpringBoard/UIDragInteractionDelegate_Private-Protocol.h>
#import <SpringBoard/UIDropInteractionDelegate_Private-Protocol.h>

@class CADisplayLink, NSMutableSet, NSString, NSUUID, SBAppPlatterDragPreview, SBApplicationDropSession, SBApplicationSceneUpdateTransaction, SBDeviceApplicationSceneHandle, SBFluidSwitcherGesture, SBFluidSwitcherViewController, SBLayoutElement, SBMainDisplayLayoutState, SBMainDisplaySceneManager, SBMainWorkspaceTransitionRequest, SBMedusaSettings, SBSwitcherDropRegionContext, SBToAppsWorkspaceTransaction, SBTouchHistory, UIView;
@protocol BSInvalidatable, SBAppPlatterDragSourceViewProviding, SBDragAndDropWorkspaceTransactionDelegate;

@interface SBDragAndDropWorkspaceTransaction <SBWorkspaceApplicationSceneTransitionContextDelegate, SBSceneLayoutWorkspaceTransactionObserver, UIDragInteractionDelegate_Private, UIDropInteractionDelegate_Private>
{
    SBFluidSwitcherViewController *_switcherContentController;
    SBMainDisplaySceneManager *_sceneManager;
    id <SBDragAndDropWorkspaceTransactionDelegate> _delegate;
    SBMainDisplayLayoutState *_initialLayoutState;
    SBMainDisplayLayoutState *_currentLayoutState;
    SBMainDisplayLayoutState *_finalLayoutState;
    SBApplicationDropSession *_dropSession;
    unsigned long long _sessionState;
    SBDeviceApplicationSceneHandle *_draggingApplicationSceneHandle;
    _Bool _beganTrackingDropSession;
    SBMainWorkspaceTransitionRequest *_dropTransitionRequest;
    SBToAppsWorkspaceTransaction *_currentWorkspaceTransaction;
    long long _currentDropAction;
    SBSwitcherDropRegionContext *_currentSwitcherDropRegionContext;
    SBMainDisplayLayoutState *_currentDropActionProposedLayoutState;
    _Bool _performedDrop;
    _Bool _dropAnimationCompleted;
    _Bool _layoutStateTransitionCompleted;
    _Bool _dragExitedDropZone;
    struct CGSize _cachedSizeForFloatingApplication;
    SBLayoutElement *_layoutElementForWindowDrag;
    _Bool _windowDragEnteredPlatterZone;
    _Bool _windowLiftAnimationCompleted;
    SBApplicationSceneUpdateTransaction *_sceneUpdateTransactionForWindowDrag;
    CADisplayLink *_displayLinkForWindowDrag;
    long long _windowDragPauseCounter;
    NSMutableSet *_pendingSceneUpdatesTransactions;
    SBAppPlatterDragPreview *_activePlatterPreview;
    id <SBAppPlatterDragSourceViewProviding> _activeSourceViewProvider;
    unsigned long long _numberOfAttemptsRequestingVisibleItems;
    UIView *_contentDragPreview;
    long long _animatingPlatterPreview;
    id <BSInvalidatable> _deferOrientationUpdatesForDragAndDropAssertion;
    SBTouchHistory *_touchHistory;
    SBMedusaSettings *_medusaSettings;
    NSUUID *_gestureID;
    SBFluidSwitcherGesture *_dragAndDropGesture;
    id <BSInvalidatable> _stateCaptureInvalidatable;
}

+ (double)prototypeSettingsWindowTearOffDraggingFloatingActivationWidth;
+ (double)prototypeSettingsWindowTearOffDraggingSideActivationWidth;
+ (double)prototypeSettingsContentDraggingFloatingActivationWidth;
+ (double)prototypeSettingsContentDraggingSideActivationWidth;
+ (double)prototypeSettingsContentDraggingCommandeerWidth;
+ (double)prototypeSettingsContentDraggingCommandeerInsetForUniversalControl;
+ (struct CGSize)prototypeSettingsFullscreenActivationRegionSize;
+ (double)prototypeSettingsSideActivationGutterSize;
+ (unsigned long long)screenEdgeForDragOverSideGutterRegionsAtLocation:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2 totalContentDragGutterWidth:(double)arg3 screenInsets:(struct UIEdgeInsets)arg4;
+ (_Bool)isDragOverFullscreenRegionAtLocation:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;
+ (struct CGRect)sourceSceneInterfaceOrientedBoundsForDropSession:(id)arg1 sceneManager:(id)arg2;
+ (_Bool)_shouldTrackLocationOfDropSession:(id)arg1 inSwitcherContentController:(id)arg2 sceneManager:(id)arg3 isCurrentlyTracking:(_Bool)arg4;
+ (struct UIEdgeInsets)_screenInsetsForUIDragDropSession:(id)arg1;
+ (_Bool)shouldTrackLocationOfDropSession:(id)arg1 inSwitcherContentController:(id)arg2 sceneManager:(id)arg3;
- (void).cxx_destruct;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
- (struct CGRect)applicationTransitionContext:(id)arg1 frameForApplicationSceneEntity:(id)arg2;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)resizeUIAnimationFactory;
- (void)_updateCurrentDropActionProposedLayoutState;
- (id)_createPlatterPreviewForApplication:(id)arg1 withSourceView:(id)arg2 dropSession:(id)arg3;
- (long long)_layoutRoleForDropAction:(long long)arg1;
- (void)_updateAnchorPointForPlatterPreview:(id)arg1 dragPreview:(id)arg2 withSourceViewBounds:(struct CGRect)arg3 location:(struct CGPoint)arg4;
- (void)_configurePlatterPreview:(id)arg1 forSceneHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cleanUpAndCompleteTransactionIfNecessary;
- (struct CGSize)_sizeForFloatingApplication;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect *)arg1 sideLayoutElementViewFrame:(struct CGRect *)arg2 forDropAction:(long long)arg3 proposedDropLayoutState:(id)arg4 state:(unsigned long long)arg5 spaceConfiguration:(long long)arg6;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect *)arg1 sideLayoutElementViewFrame:(struct CGRect *)arg2 forDropAction:(long long)arg3 proposedDropLayoutState:(id)arg4 state:(unsigned long long)arg5;
- (id)_transitionRequestForDropAction:(long long)arg1;
- (_Bool)_showResizeUI;
- (_Bool)_shouldPushInSceneLayoutViewControllerForDropAction:(long long)arg1;
- (void)_updateCurrentDropActionForSession:(id)arg1;
- (struct CGRect)_platterFrameInSwitcherView;
- (void)_didInterruptWithReason:(id)arg1;
- (void)_willInterruptForTransitionRequest:(id)arg1;
- (void)_willInterruptWithReason:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_endDragAndDropFluidGesture;
- (void)_didComplete;
- (void)_begin;
- (id)_currentGestureEventForGesture:(id)arg1;
- (void)_addChildWorkspaceTransaction:(id)arg1;
- (_Bool)_shouldFailLayoutStateTransitionForWindowDrag;
- (void)_runFinalLayoutStateTransaction;
- (void)_updateActiveSourceViewProviderWithDragState:(unsigned long long)arg1;
- (void)_updatePlatterPreviewWithUpdatedSourceView;
- (void)_updatePlatterPreviewForSetDown:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_getPlatterDiffuseShadowParameters:(struct SBDragPreviewShadowParameters *)arg1 rimShadowParameters:(struct SBDragPreviewShadowParameters *)arg2 diffuseFilters:(id *)arg3 rimFilters:(id *)arg4 forDropAction:(long long)arg5 setDown:(_Bool)arg6 mode:(unsigned long long)arg7 userInterfaceStyle:(long long)arg8;
- (id)_cornerRadiusForSwitcherDragContext:(id)arg1 setDown:(_Bool)arg2 sourceViewScale:(double)arg3;
- (id)_cornerRadiusConfigurationForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2 setDown:(_Bool)arg3 mode:(unsigned long long)arg4;
- (double)_platterSourceViewScaleForSetDropAction:(long long)arg1 setDown:(_Bool)arg2;
- (struct CGSize)_platterSizeForSwitcherDropContext:(id)arg1 setDown:(_Bool)arg2;
- (struct CGSize)_platterSizeForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2 setDown:(_Bool)arg3;
- (double)_platterScaleForSwitcherDropContext:(id)arg1;
- (double)_platterScale;
- (void)_updatePlatterViewBlurForDropCompletion;
- (void)_updateForWindowDragForSession:(id)arg1;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)_uncommandeerContentDrag;
- (void)_noteSwitcherDropAnimationCompletedWithContext:(id)arg1;
- (void)_handleSessionDidEnd:(id)arg1;
- (void)_handleWillAnimateDropWithAnimator:(id)arg1;
- (id)_dragPreviewForDroppingItem:(id)arg1 withDefault:(id)arg2;
- (void)_handleSessionDidPerformDrop:(id)arg1;
- (void)_commitRecencyModelUpdateForDropContext:(id)arg1;
- (_Bool)_handleSessionDidUpdate:(id)arg1;
- (void)_interruptForDragExitedDropZoneIfNecessary;
- (id)_dropInteraction:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)_dragInteraction:(id)arg1 customSpringAnimationBehaviorForCancellingItem:(id)arg2;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
@property(readonly, nonatomic, getter=isDragging) _Bool dragging;
- (void)blurReadinessDidChange;
- (_Bool)matchesUIDragDropSession:(id)arg1;
- (_Bool)matchesApplicationDropSession:(id)arg1;
- (void)_setupPlatterPreviewForContentDrag;
- (void)dealloc;
- (id)initWithTransitionRequest:(id)arg1 switcherContentController:(id)arg2 sceneManager:(id)arg3 dropSession:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
