//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPresentationController.h>

@class RemoteUIController, UIView;

@interface RUIPartialSheetPresentationController : UIPresentationController
{
    UIView *_dimmingView;
    double _keyboardHeight;
    RemoteUIController *_remoteUIController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak RemoteUIController *remoteUIController; // @synthesize remoteUIController=_remoteUIController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (double)_maxHeight;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)didTapDimmingView;
- (void)containerViewDidLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end
