//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityUIServices/NSObject-Protocol.h>

@class BSAction, _TtC18ActivityUIServices26ActivityHostViewController;

@protocol _TtP18ActivityUIServices34ActivityHostViewControllerDelegate_ <NSObject>
- (void)activityHostViewControllerWithViewController:(_TtC18ActivityUIServices26ActivityHostViewController *)arg1 didSetIdleTimerDisabled:(_Bool)arg2;
- (void)activityHostViewControllerSignificantUserInteractionEndedWithViewController:(_TtC18ActivityUIServices26ActivityHostViewController *)arg1;
- (void)activityHostViewControllerSignificantUserInteractionBeganWithViewController:(_TtC18ActivityUIServices26ActivityHostViewController *)arg1;
- (void)activityHostViewControllerHostShouldCancelTouchesWithViewController:(_TtC18ActivityUIServices26ActivityHostViewController *)arg1;
- (void)activityHostViewControllerTextColorDidChangeWithViewController:(_TtC18ActivityUIServices26ActivityHostViewController *)arg1;
- (void)activityHostViewControllerBackgroundTintColorDidChangeWithViewController:(_TtC18ActivityUIServices26ActivityHostViewController *)arg1;
- (void)activityHostViewControllerWithViewController:(_TtC18ActivityUIServices26ActivityHostViewController *)arg1 requestsLaunchWithAction:(BSAction *)arg2;
@end

