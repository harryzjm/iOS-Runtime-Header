//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVFullScreenViewController, UIResponder, UIView, UIViewController;
@protocol UIViewControllerTransitioningDelegate;

@protocol AVFullScreenViewControllerDelegate <NSObject>
- (UIResponder *)keyCommandResponderForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerNeedsAppBasedStatusBarAppearanceUpdate:(AVFullScreenViewController *)arg1;
- (_Bool)prefersStatusBarHiddenForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerDidEndFullScreenPresentation:(AVFullScreenViewController *)arg1 wasInteractive:(_Bool)arg2;
- (UIView *)viewForFullScreenViewController:(AVFullScreenViewController *)arg1;
- (void)fullScreenViewControllerWillBeginFullScreenPresentation:(AVFullScreenViewController *)arg1;
- (long long)modalPresentationStyleForFullScreenViewController:(AVFullScreenViewController *)arg1 presentingViewController:(UIViewController *)arg2;
- (id <UIViewControllerTransitioningDelegate>)transitioningDelegateForFullScreenViewController:(AVFullScreenViewController *)arg1;
@end
