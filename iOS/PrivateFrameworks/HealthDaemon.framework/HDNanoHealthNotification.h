//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDNotificationManager;

@interface HDNanoHealthNotification : NSObject
{
    HDNotificationManager *_notificationManager;
}

+ (id)category;
- (void).cxx_destruct;
- (id)_notificationContentWithTitle:(id)arg1 body:(id)arg2;
- (void)triggerNotification;
- (id)body;
- (id)title;
- (unsigned long long)destinations;
- (id)initWithNotificationManager:(id)arg1;

@end
