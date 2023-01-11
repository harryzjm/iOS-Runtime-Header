//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBStarkNotificationBannerItemDelegate-Protocol.h>

@class NSString;
@protocol SBStarkNotificationBannerSourceDelegate;

@interface SBStarkNotificationBannerSource <SBStarkNotificationBannerItemDelegate>
{
    id <SBStarkNotificationBannerSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <SBStarkNotificationBannerSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2;
- (void)bannerViewWillAppear:(id)arg1;
- (void)executeAction:(id)arg1 forNotificationRequest:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (void)postNotificationRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
