//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class EKCalendarNotification, EKEventStore, EKObjectID, NSDate;

@interface EKCalendarNotificationReference : NSObject
{
    EKObjectID *_objectID;
    NSDate *_date;
    EKEventStore *_eventStore;
    EKCalendarNotification *_notification;
    int _type;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (long long)_notificationTypeForResourceChange:(id)arg1 notificationType:(int)arg2;
@property(readonly, nonatomic) EKCalendarNotification *notification;
- (id)initWithType:(int)arg1 objectID:(id)arg2 eventStore:(id)arg3;
- (id)initWithType:(int)arg1 objectID:(id)arg2 date:(id)arg3 eventStore:(id)arg4;

@end
