//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class UIPresentationController, UITraitCollection, UIViewController;
@protocol UIViewControllerTransitionCoordinator;

@protocol UIAdaptivePresentationControllerDelegate <NSObject>

@optional
- (void)presentationController:(UIPresentationController *)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
- (UIViewController *)presentationController:(UIPresentationController *)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(UIPresentationController *)arg1 traitCollection:(UITraitCollection *)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(UIPresentationController *)arg1;
@end

