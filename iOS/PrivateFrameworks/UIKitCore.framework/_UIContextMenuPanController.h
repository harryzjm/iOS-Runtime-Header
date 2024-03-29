//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIBezierPath, UIPanGestureRecognizer, UIView, UIViewSpringAnimationBehavior, _UIVelocityIntegrator;
@protocol _UIContextMenuPanControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIContextMenuPanController : NSObject
{
    unsigned long long _currentDetentIndex;
    double _initialYTranslation;
    double _defaultZPosition;
    UIBezierPath *_menuScrubPath;
    double _currentDistanceToMenuScrubPath;
    struct CGPoint _initialLocationInsidePreview;
    _Bool _menuViewIsVisible;
    _Bool _touchEverEnteredMenu;
    _Bool _clientAllowsDismissal;
    _Bool _enabled;
    UIViewSpringAnimationBehavior *_animationBehavior;
    id <_UIContextMenuPanControllerDelegate> _delegate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSArray *_detents;
    unsigned long long _rubberbandingEdges;
    NSArray *_accessoryViews;
    UIView *_menuView;
    UIView *_containerView;
    UIView *_platterView;
    _UIVelocityIntegrator *_velocityIntegrator;
    struct CGPoint _originalPlatterCenter;
    struct CGPoint _originalMenuCenter;
    CDStruct_17a0fc55 _menuAnchor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // @synthesize velocityIntegrator=_velocityIntegrator;
@property(nonatomic) __weak UIView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
@property(nonatomic) unsigned long long rubberbandingEdges; // @synthesize rubberbandingEdges=_rubberbandingEdges;
@property(nonatomic) CDStruct_17a0fc55 menuAnchor; // @synthesize menuAnchor=_menuAnchor;
@property(nonatomic) struct CGPoint originalMenuCenter; // @synthesize originalMenuCenter=_originalMenuCenter;
@property(nonatomic) struct CGPoint originalPlatterCenter; // @synthesize originalPlatterCenter=_originalPlatterCenter;
@property(retain, nonatomic) NSArray *detents; // @synthesize detents=_detents;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) __weak id <_UIContextMenuPanControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updatePlatterGestureDebugUIWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2 invalidate:(_Bool)arg3;
- (struct CAPoint3D)_clampedRubberBandedTranslationForGestureTranslation:(struct CAPoint3D)arg1;
- (void)_updateViewPositionsWithoutAnimationForRealityEngineWithTranslation:(struct CAPoint3D)arg1 location:(struct CAPoint3D)arg2 ended:(_Bool)arg3 withVelocity:(_Bool)arg4;
- (struct CAPoint3D)_rubberBandedTranslationForGestureTranslation:(struct CAPoint3D)arg1;
- (id)_currentPlatformMetrics;
- (long long)_userInterfaceIdiom;
- (void)scrollObservationInteraction:(id)arg1 didUpdateWithTranslation:(struct CGPoint)arg2 location:(struct CGPoint)arg3 ended:(_Bool)arg4;
- (void)scrollObservationInteraction:(id)arg1 willBeginAtLocation:(struct CGPoint)arg2;
- (_Bool)_initialPointInPlatterIsValid;
- (void)_animationsForAnyAttachedAccessoryViews;
- (void)_animationsForActionsStyleWithLocation:(struct CAPoint3D)arg1 ended:(_Bool)arg2;
- (void)_animationsForPreviewPlusActionsStyleWithTranslation:(struct CAPoint3D)arg1 location:(struct CAPoint3D)arg2;
@property(readonly, nonatomic) UIViewSpringAnimationBehavior *animationBehavior; // @synthesize animationBehavior=_animationBehavior;
- (void)_updateViewPositionsWithTranslation:(struct CAPoint3D)arg1 location:(struct CAPoint3D)arg2 ended:(_Bool)arg3 withVelocity:(_Bool)arg4;
- (double)_tearOffSpeedMultiplier;
- (_Bool)_canBeginDraggingWithTranslation:(struct CAPoint3D)arg1 location:(struct CAPoint3D)arg2;
- (void)_updateMenuScrubPathWithLocationIfNecessary:(struct CGPoint)arg1;
- (void)_updateForGestureWithState:(long long)arg1 translation:(struct CAPoint3D)arg2 location:(struct CAPoint3D)arg3 allowsDragging:(_Bool)arg4;
- (void)_handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (double)_dragTearOffThreshold;
- (_Bool)_canSwipeDownToDismiss;
- (int)_nearestDetentWithTranslation:(struct CGPoint)arg1;
- (double)_rangeOfMotion;
- (struct CGVector)_currentPlatterVelocity;
- (void)_updateForSignificantLayoutChange;
- (void)moveToDetentPosition:(long long)arg1 updateScrubPath:(_Bool)arg2;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 menuView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

