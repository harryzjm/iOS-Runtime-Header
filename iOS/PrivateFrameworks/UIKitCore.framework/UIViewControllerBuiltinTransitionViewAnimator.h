//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject
{
    id <UIViewControllerContextTransitioning> _transitionContext;
    _Bool _removeFromView;
    int _transition;
    id _delegate;
    UIView *_toView;
    UIView *_fromView;
}

- (void).cxx_destruct;
@property(nonatomic) int transition; // @synthesize transition=_transition;
@property(nonatomic) _Bool removeFromView; // @synthesize removeFromView=_removeFromView;
@property(nonatomic) __weak UIView *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) __weak UIView *toView; // @synthesize toView=_toView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (_Bool)transitionViewShouldUseViewControllerCallbacks;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(_Bool)arg4;
- (struct CGPoint)transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (struct CGPoint)transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (struct CGPoint)transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint)arg4;
- (struct CGPoint)_adjustOrigin:(struct CGPoint)arg1 givenOtherOrigin:(struct CGPoint)arg2 forTransition:(int)arg3;
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;
- (void)transitionViewDidStart:(id)arg1;
- (double)durationForTransition:(int)arg1;
- (void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTransition:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

