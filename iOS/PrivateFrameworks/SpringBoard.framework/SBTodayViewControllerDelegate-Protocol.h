//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBTodayViewController;

@protocol SBTodayViewControllerDelegate <NSObject>
- (_Bool)isTodayViewRotating:(SBTodayViewController *)arg1;
- (void)todayViewDidAppear:(SBTodayViewController *)arg1;
- (void)todayViewControllerWillPresentSpotlight:(SBTodayViewController *)arg1;
- (void)todayViewWantsToEndEditing:(SBTodayViewController *)arg1;
@end

