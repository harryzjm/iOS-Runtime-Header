//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

#import <SpringBoard/SBFluidGestureDismissable-Protocol.h>

@class NSString, SBFHomeGrabberSettings, SBFTouchPassThroughView, SBFluidDismissalState, SBHomeGrabberView, SBKeyboardHomeAffordanceAssertion, SiriPresentationSpringBoardMainScreenViewController, UIScreen, UIView;

@interface SBAssistantRootViewController : SBFTouchPassThroughViewController <SBFluidGestureDismissable>
{
    SiriPresentationSpringBoardMainScreenViewController *_assistantViewController;
    SBFTouchPassThroughView *_contentView;
    SBFTouchPassThroughView *_clippingView;
    SBFluidDismissalState *_fluidDismissalState;
    UIScreen *_screen;
    SBHomeGrabberView *_homeAffordanceView;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    SBFHomeGrabberSettings *_grabberSettings;
    _Bool _keyboardPresented;
    _Bool _keyboardStashed;
    _Bool _ownsHomeGesture;
    _Bool _showsHomeAffordance;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsHomeAffordance; // @synthesize showsHomeAffordance=_showsHomeAffordance;
@property(nonatomic) _Bool ownsHomeGesture; // @synthesize ownsHomeGesture=_ownsHomeGesture;
@property(retain, nonatomic) SiriPresentationSpringBoardMainScreenViewController *assistantController; // @synthesize assistantController=_assistantViewController;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)setHomeGrabberPointerClickDelegate:(id)arg1;
- (void)hasContentAtPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateKeyboardForHomeGesture;
- (void)_updateHomeAffordance;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (_Bool)_canShowWhileLocked;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wantsFullScreenLayout;
- (void)viewWillLayoutSubviews;
- (void)loadView;
@property(readonly, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
- (id)initWithScreen:(id)arg1;
@property(retain, nonatomic) SBFluidDismissalState *fluidDismissalState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
