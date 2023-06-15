//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PXScrollViewController;

@protocol PXScrollViewControllerObserver <NSObject>

@optional
- (void)scrollViewControllerDidEndFocusFastScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidBeginFocusFastScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidEndScrollingAnimation:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillBeginScrollingAnimation:(PXScrollViewController *)arg1 towardsContentEdges:(unsigned long long)arg2;
- (_Bool)scrollViewControllerShouldScrollToTop:(PXScrollViewController *)arg1;
- (void)scrollViewControllerContentInsetDidChange:(PXScrollViewController *)arg1;
- (void)scrollViewControllerContentBoundsDidChange:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidEndScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillEndScrolling:(PXScrollViewController *)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3 currentContentOffset:(struct CGPoint)arg4;
- (void)scrollViewControllerDidScroll:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillBeginScrolling:(PXScrollViewController *)arg1;
- (void)scrollViewControllerDidLayoutSubviews:(PXScrollViewController *)arg1;
- (void)scrollViewControllerWillLayoutSubviews:(PXScrollViewController *)arg1;
@end

