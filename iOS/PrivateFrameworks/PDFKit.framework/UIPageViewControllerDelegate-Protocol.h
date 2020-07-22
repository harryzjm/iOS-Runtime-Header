//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PDFKit/NSObject-Protocol.h>

@class NSArray, UIPageViewController;

@protocol UIPageViewControllerDelegate <NSObject>

@optional
- (long long)pageViewControllerPreferredInterfaceOrientationForPresentation:(UIPageViewController *)arg1;
- (unsigned long long)pageViewControllerSupportedInterfaceOrientations:(UIPageViewController *)arg1;
- (long long)pageViewController:(UIPageViewController *)arg1 spineLocationForInterfaceOrientation:(long long)arg2;
- (void)pageViewController:(UIPageViewController *)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(NSArray *)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(UIPageViewController *)arg1 willTransitionToViewControllers:(NSArray *)arg2;
@end

