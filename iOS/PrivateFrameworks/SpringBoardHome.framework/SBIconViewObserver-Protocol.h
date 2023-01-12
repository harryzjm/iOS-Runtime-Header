//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBIconView, UIViewController;
@protocol SBIconViewCustomImageViewControlling;

@protocol SBIconViewObserver <NSObject>

@optional
- (void)iconViewDidEndDrag:(SBIconView *)arg1;
- (void)iconViewWillBeginDrag:(SBIconView *)arg1;
- (void)iconViewDidHandleTap:(SBIconView *)arg1;
- (void)iconView:(SBIconView *)arg1 didChangeCustomImageViewController:(UIViewController<SBIconViewCustomImageViewControlling> *)arg2;
- (void)iconViewSizeDidChange:(SBIconView *)arg1;
- (void)iconViewDidBecomeWindowless:(SBIconView *)arg1;
- (void)iconViewWasDiscarded:(SBIconView *)arg1;
- (void)iconViewWasRecycled:(SBIconView *)arg1;
@end

