//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HAENotifications/UNUserNotificationCenterDelegate-Protocol.h>

@class NSString, UNUserNotificationCenter;

@interface NotificationCenter : NSObject <UNUserNotificationCenterDelegate>
{
    UNUserNotificationCenter *_userNotificationCenter;
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    _Bool _hasHealthApp;
}

+ (_Bool)_healthAppHidden;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleNotificationAction:(id)arg1;
- (void)sendNotificationWithExposureLevel:(double)arg1 duration:(double)arg2 eventType:(unsigned int)arg3 volumeLoweringAction:(unsigned int)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
