//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlatterKit/_UIPreviewInteractionViewControllerTransition-Protocol.h>

@class NSString, PLViewControllerAnimator, _PLViewControllerOneToOneTransitionContext;
@protocol UIViewControllerTransitioningDelegate;

@interface PLPreviewInteractionViewControllerTransition : NSObject <_UIPreviewInteractionViewControllerTransition>
{
    id <UIViewControllerTransitioningDelegate> _transitionDelegate;
    _PLViewControllerOneToOneTransitionContext *_transitionContext;
    PLViewControllerAnimator *_animator;
    CDUnknownBlockType _completion;
    _Bool _propagatesPresentingViewTransform;
}

@property(nonatomic) _Bool propagatesPresentingViewTransform; // @synthesize propagatesPresentingViewTransform=_propagatesPresentingViewTransform;
- (void).cxx_destruct;
- (void)transitionDidEnd:(_Bool)arg1;
- (void)performWithCustomAnimator:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)_configureTransitionContextWithFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (id)_animator;
- (id)_newAnimator;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)initWithTransitionDelegate:(id)arg1 presentingViewController:(id)arg2 presentedViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
