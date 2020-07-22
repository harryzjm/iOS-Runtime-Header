//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchListKitUI/UNUserNotificationCenterDelegate-Protocol.h>
#import <WatchListKitUI/WLKUINotificationsImpl-Protocol.h>

@class NSString, WLKUINotificationCenter;

@interface WLKUINotificationsImpl_iOS : NSObject <UNUserNotificationCenterDelegate, WLKUINotificationsImpl>
{
    WLKUINotificationCenter *center;
}

+ (id)_JSONDictForResponse:(id)arg1;
@property(nonatomic) __weak WLKUINotificationCenter *center; // @synthesize center;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)post:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
