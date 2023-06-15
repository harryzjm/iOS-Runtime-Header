//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UITargetedPreview, UIViewFloatAnimatableProperty, UIViewPropertyAnimator, _UIContextMenuAnimator, _UIContextMenuLayoutArbiterOutput, _UIContextMenuReparentingContainerView, _UIContextMenuUIController, _UIGroupCompletion, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIContextMenuPresentationAnimation : NSObject
{
    _Bool _isDismissTransition;
    _Bool _isSingleItemMenu;
    UITargetedPreview *_sourcePreview;
    _UIContextMenuUIController *_uiController;
    _UIContextMenuAnimator *_alongsideAnimator;
    unsigned long long _dismissalStyle;
    _UIPortalView *_reparentingPortalView;
    _UIContextMenuReparentingContainerView *_reparentingContainerView;
    UIViewFloatAnimatableProperty *_animationProgress;
    CDUnknownBlockType _reparentingAnimationBlock;
    CDUnknownBlockType _accessoryAnimationBlock;
    _UIContextMenuLayoutArbiterOutput *_expandedLayout;
    _UIGroupCompletion *_groupCompletion;
    UITargetedPreview *_stashedDismissalPreview;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITargetedPreview *stashedDismissalPreview; // @synthesize stashedDismissalPreview=_stashedDismissalPreview;
@property(retain, nonatomic) _UIGroupCompletion *groupCompletion; // @synthesize groupCompletion=_groupCompletion;
@property(retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout; // @synthesize expandedLayout=_expandedLayout;
@property(copy, nonatomic) CDUnknownBlockType accessoryAnimationBlock; // @synthesize accessoryAnimationBlock=_accessoryAnimationBlock;
@property(copy, nonatomic) CDUnknownBlockType reparentingAnimationBlock; // @synthesize reparentingAnimationBlock=_reparentingAnimationBlock;
@property(retain, nonatomic) UIViewFloatAnimatableProperty *animationProgress; // @synthesize animationProgress=_animationProgress;
@property(retain, nonatomic) _UIContextMenuReparentingContainerView *reparentingContainerView; // @synthesize reparentingContainerView=_reparentingContainerView;
@property(retain, nonatomic) _UIPortalView *reparentingPortalView; // @synthesize reparentingPortalView=_reparentingPortalView;
@property(nonatomic) _Bool isSingleItemMenu; // @synthesize isSingleItemMenu=_isSingleItemMenu;
@property(nonatomic) _Bool isDismissTransition; // @synthesize isDismissTransition=_isDismissTransition;
@property(nonatomic) unsigned long long dismissalStyle; // @synthesize dismissalStyle=_dismissalStyle;
@property(retain, nonatomic) _UIContextMenuAnimator *alongsideAnimator; // @synthesize alongsideAnimator=_alongsideAnimator;
@property(nonatomic) __weak _UIContextMenuUIController *uiController; // @synthesize uiController=_uiController;
@property(copy, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
- (void)_setBackgroundVisible:(_Bool)arg1;
- (id)_secondarySourcePreviews;
- (id)_accessoryViews;
- (id)_menuView;
- (id)_platterView;
- (id)_backgroundView;
- (id)_platterTransitionView;
- (id)_containerView;
- (_Bool)_isDismissingToDrag;
- (_Bool)_shouldAnimateBackgroundEffects;
- (void)_updateAccessoryAttachment:(id)arg1;
- (void)_installAccessories;
- (void)_prepareReparentingAnimationWithDismissalTarget:(id)arg1;
- (void)_presentation_applyBackgroundEffectWithProgress:(double)arg1;
- (void)_prepareAnimatablePropertyBasedAnimations;
- (void)_prepareOverallAnimationCompletion;
- (void)transitionDidEnd:(_Bool)arg1;
- (id)_dismissalPreviewForSecondaryItemPreview:(id)arg1;
- (id)_targetedPreviewForDismissalAnimation;
- (void)_performReduceMotionDisappearanceTransition;
- (void)_performReduceMotionAppearanceTransition;
- (void)performTransition;
- (void)_actuallyPerformTransition;
- (void)_anchorTransitionViewToTargetedPreview:(id)arg1;
- (CDStruct_d52ce5d2)_dismissedMenuLayoutForPresentedLayout:(CDStruct_d52ce5d2)arg1 previewLayout:(CDStruct_d52ce5d2)arg2 anchor:(CDStruct_17a0fc55)arg3;
- (void)prepareTransitionToView:(id)arg1;
- (id)initWithUIController:(id)arg1 asDismissal:(_Bool)arg2;

// Remaining properties
@property(readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

