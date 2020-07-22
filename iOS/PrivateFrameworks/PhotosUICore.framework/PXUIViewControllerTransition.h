//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, PXRegionOfInterest, UIPercentDrivenInteractiveTransition, UIViewController;

@interface PXUIViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIViewController *_internalMasterViewController;
    UIViewController *_internalDetailViewController;
    CDUnknownBlockType _transitionAnimationStartHandler;
    CDUnknownBlockType _transitionAnimationCompletionHandler;
    _Bool _supportsEdgeSwipeBackGesture;
    _Bool _interactive;
    _Bool _transitioningToDetail;
    UIPercentDrivenInteractiveTransition *_interactionController;
    long long _state;
    id __pauseToken;
    PXRegionOfInterest *_masterRegionOfInterest;
}

+ (_Bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
@property(nonatomic, getter=isTransitioningToDetail) _Bool transitioningToDetail; // @synthesize transitioningToDetail=_transitioningToDetail;
@property(retain, nonatomic) PXRegionOfInterest *masterRegionOfInterest; // @synthesize masterRegionOfInterest=_masterRegionOfInterest;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
@property(readonly, nonatomic) _Bool supportsEdgeSwipeBackGesture; // @synthesize supportsEdgeSwipeBackGesture=_supportsEdgeSwipeBackGesture;
@property(retain, nonatomic, setter=_setPauseToken:) id _pauseToken; // @synthesize _pauseToken=__pauseToken;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
@property(readonly, nonatomic) UIPercentDrivenInteractiveTransition *interactionController; // @synthesize interactionController=_interactionController;
- (void)didEndTransition;
- (void)willEndTransition;
- (void)willStartTransition;
- (void)installTransitionAnimationCompletionHandler:(CDUnknownBlockType)arg1;
- (void)installTransitionAnimationStartHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) __weak UIViewController *detailViewController;
@property(readonly, nonatomic) __weak UIViewController *masterViewController;
- (id)initWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
