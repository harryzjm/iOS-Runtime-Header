//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPercentDrivenInteractiveTransition.h"

@class NSDictionary, NSMutableDictionary, NSString, UIInteractionProgress, _UIStatesFeedbackGenerator;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewTransitionController : UIPercentDrivenInteractiveTransition
{
    UIInteractionProgress *_interactionProgress;
    unsigned long long _targetPresentationPhase;
    NSDictionary *_viewsParticipatingInCommitTransition;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
    NSMutableDictionary *_animationsByPresentationPhase;
    id <UIViewControllerContextTransitioning> _transitionContext;
}

+ (id)performCommitTransitionWithDelegate:(id)arg1 forViewController:(id)arg2 previewViewController:(id)arg3 previewInteractionController:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(nonatomic) __weak id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) NSMutableDictionary *animationsByPresentationPhase; // @synthesize animationsByPresentationPhase=_animationsByPresentationPhase;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) NSDictionary *viewsParticipatingInCommitTransition; // @synthesize viewsParticipatingInCommitTransition=_viewsParticipatingInCommitTransition;
@property(nonatomic) unsigned long long targetPresentationPhase; // @synthesize targetPresentationPhase=_targetPresentationPhase;
@property(retain, nonatomic) UIInteractionProgress *interactionProgress; // @synthesize interactionProgress=_interactionProgress;
- (void)_completeAnimationWithPresentationPhase:(unsigned long long)arg1 finished:(_Bool)arg2;
- (void)_layoutForPresentationPhase:(unsigned long long)arg1;
- (void)_animateCommitTransition:(id)arg1;
- (void)_animateDismissTransition:(id)arg1;
- (void)_animatePreviewTransition:(id)arg1;
- (void)_animateRevealTransition:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)setAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 forPresentationPhase:(unsigned long long)arg3;
- (id)init;
- (id)initWithInteractionProgress:(id)arg1 targetPresentationPhase:(unsigned long long)arg2;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

