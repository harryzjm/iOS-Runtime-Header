//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBStarkNotificationViewController;
@protocol SBUIBannerView;

@protocol SBStarkNotificationViewControllerDelegate <NSObject>
- (void)notificationViewController:(SBStarkNotificationViewController *)arg1 stateDidChangeFrom:(int)arg2;
- (void)notificationViewController:(SBStarkNotificationViewController *)arg1 willDisplayBannerView:(id <SBUIBannerView>)arg2;
@end
