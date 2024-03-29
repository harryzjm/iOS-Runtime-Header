//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, SBActivityAlert, SBActivityItem;

@protocol SBActivityObserver <NSObject>
- (_Bool)shouldHandleActivityItem:(SBActivityItem *)arg1;

@optional
- (void)activityEnvironmentChanged:(long long)arg1;
- (void)activityProminenceChanged:(_Bool)arg1 identifier:(NSString *)arg2;
- (void)dismissAlert:(SBActivityAlert *)arg1;
- (void)presentAlert:(SBActivityAlert *)arg1;
- (void)activityDidExceedReducedPushBudget:(SBActivityItem *)arg1;
- (void)activityWasUnblocked:(SBActivityItem *)arg1;
- (void)activityWasBlocked:(SBActivityItem *)arg1;
- (void)activityDidDismiss:(SBActivityItem *)arg1;
- (void)activityDidUpdate:(SBActivityItem *)arg1;
- (void)activityDidEnd:(SBActivityItem *)arg1;
- (void)activityDidStart:(SBActivityItem *)arg1;
@end

