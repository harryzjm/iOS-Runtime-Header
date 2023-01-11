//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALNUNNotificationContentMapper, CALNUNNotificationIconMapper;

@interface CALNUNNotificationRequestMapper : NSObject
{
    CALNUNNotificationContentMapper *_notificationContentMapper;
    CALNUNNotificationIconMapper *_notificationIconMapper;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CALNUNNotificationIconMapper *notificationIconMapper; // @synthesize notificationIconMapper=_notificationIconMapper;
@property(readonly, nonatomic) CALNUNNotificationContentMapper *notificationContentMapper; // @synthesize notificationContentMapper=_notificationContentMapper;
- (id)calnNotificationRequestFromUNNotificationRequest:(id)arg1;
- (id)unNotificationRequestFromCALNNotificationRequest:(id)arg1;
- (id)initWithNotificationContentMapper:(id)arg1 notificationIconMapper:(id)arg2;

@end
