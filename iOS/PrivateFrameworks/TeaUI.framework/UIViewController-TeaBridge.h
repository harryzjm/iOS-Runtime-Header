//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class TSTransitionContainerViewController;

@interface UIViewController (TeaBridge)
+ (void)ts_performWithoutDeferringTransitions:(CDUnknownBlockType)arg1;
- (_Bool)ts_isVideoPlayerPresentedFullScreen;
- (_Bool)ts_setAppearanceTransitionsAreDisabled:(_Bool)arg1;
@property(readonly, nonatomic) UIViewController *ts_parentVC;
@property(nonatomic, readonly) TSTransitionContainerViewController *ts_transitionContainerViewController;
- (id)tabBarSplitViewFocusable;
- (id)tabBarSplitViewFousable;
@end

