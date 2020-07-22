//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationSection : NSObject
{
    NSMutableDictionary *_coalescedNotifications;
}

@property(retain, nonatomic) NSMutableDictionary *coalescedNotifications; // @synthesize coalescedNotifications=_coalescedNotifications;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long notificationsCount;
- (id)coalescedNotificationForThreadIdentifier:(id)arg1;
- (id)removeNotificationRequest:(id)arg1;
- (id)replaceNotificationRequest:(id)arg1;
- (id)addNotificationRequest:(id)arg1;
- (id)init;

@end
