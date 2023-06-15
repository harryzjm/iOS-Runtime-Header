//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UISheetAnimationController.h>

@class NSString, PUOneUpPhotosSharingTransitionContext, UIViewController;
@protocol PUOneUpAssetTransitionViewController, PUOneUpSharingAnimationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUOneUpSharingAnimationController : _UISheetAnimationController
{
    _Bool _interruptibleAnimatorForTransitionWasCalled;
    PUOneUpPhotosSharingTransitionContext *_oneUpTransitionContext;
    UIViewController<PUOneUpAssetTransitionViewController> *_presentingViewController;
    id <PUOneUpSharingAnimationControllerDelegate> _delegate;
}

+ (id)new;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PUOneUpSharingAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIViewController<PUOneUpAssetTransitionViewController> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(readonly, nonatomic) PUOneUpPhotosSharingTransitionContext *oneUpTransitionContext; // @synthesize oneUpTransitionContext=_oneUpTransitionContext;
- (void)_configurePhotoView:(id)arg1 withContentHelper:(id)arg2;
- (void)_installTransitioningBadgeViewsForAssetTransitionInfo:(id)arg1 inTransitioningView:(id)arg2;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithTransitionContext:(id)arg1 presentingViewController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

