//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface HMDRemoteMessageNotifications : HMFObject
{
    NSMapTable *_sessionNotificationPayloads;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (_Bool)messageExpectsNotificationResponse:(id)arg1;
+ (id)messagesWithNotificationResponses;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(retain, nonatomic) NSMapTable *sessionNotificationPayloads; // @synthesize sessionNotificationPayloads=_sessionNotificationPayloads;
- (void).cxx_destruct;
- (id)description;
- (void)clearNotificationsForDevice:(id)arg1;
- (id)notificationPayloadWithIdentifier:(id)arg1 device:(id)arg2;
- (void)removeNotificationPayloadWithIdentifier:(id)arg1 device:(id)arg2;
- (void)addNotificationPayload:(id)arg1 identifier:(id)arg2 device:(id)arg3;
- (id)_notificationPayloadsForDevice:(id)arg1;
- (id)init;

@end

