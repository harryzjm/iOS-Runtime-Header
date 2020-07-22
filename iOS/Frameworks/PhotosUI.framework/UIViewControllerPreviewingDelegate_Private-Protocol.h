//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class UIGestureRecognizer, UIInteractionProgress, UIView, UIViewController;
@protocol UIViewControllerPreviewing_Private, UIViewControllerTransitioningDelegate;

@protocol UIViewControllerPreviewingDelegate_Private <NSObject>

@optional
- (_Bool)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg1;
- (id <UIViewControllerTransitioningDelegate>)previewPresentationTransitioningDelegateForPosition:(struct CGPoint)arg1 inSourceView:(UIView *)arg2;
- (void)performCommitTransitionForPreviewViewController:(UIViewController *)arg1 completion:(void (^)(void))arg2;
- (void)animateRevealWithInteractionProgress:(UIInteractionProgress *)arg1 forPreviewingAtLocation:(struct CGPoint)arg2 inSourceView:(UIView *)arg3 containerView:(UIView *)arg4;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(_Bool)arg2;
- (void)willPresentPreviewViewController:(UIViewController *)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(UIView *)arg3;
- (UIViewController *)committedViewControllerForPreviewViewController:(UIViewController *)arg1;
- (void)_previewingContext:(id <UIViewControllerPreviewing_Private>)arg1 willDismissViewController:(UIViewController *)arg2;
- (void)_previewingContext:(id <UIViewControllerPreviewing_Private>)arg1 willPresentViewController:(UIViewController *)arg2;
@end

