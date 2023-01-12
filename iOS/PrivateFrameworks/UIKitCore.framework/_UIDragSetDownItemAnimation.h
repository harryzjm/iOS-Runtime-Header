//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIDragItem, UITargetedDragPreview, UIView, UIViewPropertyAnimator, UIWindow, _DUIVisibleDroppedItem, _UIPlatterContainerView, _UIPlatterView, _UIPortalView;
@protocol UIViewSpringAnimationBehaviorDescribing, _UIDragSetDownAnimationTarget, _UIDragSetDownItemAnimationDelegate;

__attribute__((visibility("hidden")))
@interface _UIDragSetDownItemAnimation : NSObject
{
    _Bool _reachedTarget;
    _Bool _done;
    _Bool _defaultAnimation;
    _Bool _sourceAnimation;
    _Bool _hasStartedSpringAnimation;
    _Bool _midwayToTarget;
    _Bool _almostToTarget;
    _Bool _reparentingCrossfadeComplete;
    _Bool _updatedPreviewWasAdded;
    int _animationCount;
    UIDragItem *_item;
    _DUIVisibleDroppedItem *_droppedItem;
    id <UIViewSpringAnimationBehaviorDescribing> _customSpringAnimationBehavior;
    id <_UIDragSetDownItemAnimationDelegate> _delegate;
    UIWindow *_window;
    id <_UIDragSetDownAnimationTarget> _visualTarget;
    UITargetedDragPreview *_targetedDropPreview;
    UITargetedDragPreview *_updatedTargetedDropPreview;
    double _initialDistanceFromTargetFrame;
    double _targetCenterZ;
    UIViewPropertyAnimator *_propertyAnimator;
    CDUnknownBlockType _completionHandler;
    UIView *_retargetingContainerView;
    _UIPortalView *_retargetingContainerPortalView;
    _UIPlatterView *_appPlatterView;
    _UIPlatterView *_updatedAppPlatterView;
    _UIPlatterView *_druidPlatterView;
    _UIPlatterContainerView *_platterContainerView;
    _UIPlatterView *_defaultPlatterView;
    CDUnknownBlockType _positionHandler;
    CDUnknownBlockType _morphHandler;
    CDUnknownBlockType _midpointHandler;
    CDUnknownBlockType _nonAnimatedMidpointHandler;
    CDUnknownBlockType _nearCompletionHandler;
    struct CGPoint _initialVelocity;
    struct CGPoint _initialTargetVelocity;
    struct CAPoint3D _center;
    struct CGRect _targetFrame;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType nearCompletionHandler; // @synthesize nearCompletionHandler=_nearCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType nonAnimatedMidpointHandler; // @synthesize nonAnimatedMidpointHandler=_nonAnimatedMidpointHandler;
@property(copy, nonatomic) CDUnknownBlockType midpointHandler; // @synthesize midpointHandler=_midpointHandler;
@property(copy, nonatomic) CDUnknownBlockType morphHandler; // @synthesize morphHandler=_morphHandler;
@property(copy, nonatomic) CDUnknownBlockType positionHandler; // @synthesize positionHandler=_positionHandler;
@property(retain, nonatomic) _UIPlatterView *defaultPlatterView; // @synthesize defaultPlatterView=_defaultPlatterView;
@property(retain, nonatomic) _UIPlatterContainerView *platterContainerView; // @synthesize platterContainerView=_platterContainerView;
@property(retain, nonatomic) _UIPlatterView *druidPlatterView; // @synthesize druidPlatterView=_druidPlatterView;
@property(retain, nonatomic) _UIPlatterView *updatedAppPlatterView; // @synthesize updatedAppPlatterView=_updatedAppPlatterView;
@property(retain, nonatomic) _UIPlatterView *appPlatterView; // @synthesize appPlatterView=_appPlatterView;
@property(retain, nonatomic) _UIPortalView *retargetingContainerPortalView; // @synthesize retargetingContainerPortalView=_retargetingContainerPortalView;
@property(retain, nonatomic) UIView *retargetingContainerView; // @synthesize retargetingContainerView=_retargetingContainerView;
@property(nonatomic) struct CGPoint initialTargetVelocity; // @synthesize initialTargetVelocity=_initialTargetVelocity;
@property(nonatomic) struct CGPoint initialVelocity; // @synthesize initialVelocity=_initialVelocity;
@property(nonatomic) int animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) _Bool updatedPreviewWasAdded; // @synthesize updatedPreviewWasAdded=_updatedPreviewWasAdded;
@property(nonatomic) _Bool reparentingCrossfadeComplete; // @synthesize reparentingCrossfadeComplete=_reparentingCrossfadeComplete;
@property(nonatomic) _Bool almostToTarget; // @synthesize almostToTarget=_almostToTarget;
@property(nonatomic) _Bool midwayToTarget; // @synthesize midwayToTarget=_midwayToTarget;
@property(nonatomic) _Bool hasStartedSpringAnimation; // @synthesize hasStartedSpringAnimation=_hasStartedSpringAnimation;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;
@property(nonatomic) _Bool sourceAnimation; // @synthesize sourceAnimation=_sourceAnimation;
@property(nonatomic) _Bool defaultAnimation; // @synthesize defaultAnimation=_defaultAnimation;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) double targetCenterZ; // @synthesize targetCenterZ=_targetCenterZ;
@property(nonatomic) double initialDistanceFromTargetFrame; // @synthesize initialDistanceFromTargetFrame=_initialDistanceFromTargetFrame;
@property(nonatomic) struct CAPoint3D center; // @synthesize center=_center;
@property(retain, nonatomic) UITargetedDragPreview *updatedTargetedDropPreview; // @synthesize updatedTargetedDropPreview=_updatedTargetedDropPreview;
@property(retain, nonatomic) UITargetedDragPreview *targetedDropPreview; // @synthesize targetedDropPreview=_targetedDropPreview;
@property(retain, nonatomic) id <_UIDragSetDownAnimationTarget> visualTarget; // @synthesize visualTarget=_visualTarget;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) __weak id <_UIDragSetDownItemAnimationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <UIViewSpringAnimationBehaviorDescribing> customSpringAnimationBehavior; // @synthesize customSpringAnimationBehavior=_customSpringAnimationBehavior;
@property(readonly, nonatomic) _Bool done; // @synthesize done=_done;
@property(readonly, nonatomic) _Bool reachedTarget; // @synthesize reachedTarget=_reachedTarget;
@property(readonly, nonatomic) _DUIVisibleDroppedItem *droppedItem; // @synthesize droppedItem=_droppedItem;
@property(readonly, nonatomic) UIDragItem *item; // @synthesize item=_item;
- (void)_setCenterAndVelocityFromDroppedItem:(id)arg1;
- (void)updateDroppedItem:(id)arg1;
- (void)updateTargetedDropPreview:(id)arg1;
- (void)updateAnimationTargeting;
@property(readonly, nonatomic) long long previewMode;
- (_Bool)needsReparenting;
- (CDUnknownBlockType)animationCompletionHandler;
- (void)performSpringAnimations:(CDUnknownBlockType)arg1;
- (void)performTrackingAnimations:(CDUnknownBlockType)arg1;
- (double)estimatedFractionCompleteOfAnimation;
- (void)updateCurrentTargetFrame;
- (void)reparentRetargetingContainerViewInTargetContainer;
- (void)configureCrossfadingAnimationToTargetedPreview;
- (void)configureSystemDefaultAnimation;
- (void)configureAnimation;
@property(readonly, nonatomic) UIWindow *targetContainerWindow;
- (void)animationCompleted;
- (void)animationReachedTarget;
- (void)beginAnimation;
- (void)prepareToBeginAnimation;
- (void)prepareAnimationInWindow;
- (id)initWithDragItem:(id)arg1 droppedItem:(id)arg2 window:(id)arg3 defaultAnimation:(_Bool)arg4 sourceAnimation:(_Bool)arg5 delegate:(id)arg6;

@end

