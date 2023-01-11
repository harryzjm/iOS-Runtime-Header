//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AMPCoreUI/AMPUserNotificationContentDelegate-Protocol.h>
#import <AMPCoreUI/UNNotificationContentExtension-Protocol.h>

@class AMPUserNotificationContentViewController, NSString, UIColor;
@protocol AMSURLBagContract;

@interface AMPUserNotificationViewController : UIViewController <AMPUserNotificationContentDelegate, UNNotificationContentExtension>
{
    id <AMSURLBagContract> _bagContract;
    AMPUserNotificationContentViewController *_contentViewController;
}

+ (id)userNotificationFromNotification:(id)arg1;
@property(retain, nonatomic) AMPUserNotificationContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) id <AMSURLBagContract> bagContract; // @synthesize bagContract=_bagContract;
- (void).cxx_destruct;
- (void)didReceiveNotificationResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didReceiveNotification:(id)arg1;
- (void)renderUserNotification:(id)arg1;
- (void)viewController:(id)arg1 didUpdatePreferredContentSize:(struct CGSize)arg2;
- (void)openNotification;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGRect mediaPlayPauseButtonFrame;
@property(readonly, copy, nonatomic) UIColor *mediaPlayPauseButtonTintColor;
@property(readonly, nonatomic) unsigned long long mediaPlayPauseButtonType;
@property(readonly) Class superclass;

@end
