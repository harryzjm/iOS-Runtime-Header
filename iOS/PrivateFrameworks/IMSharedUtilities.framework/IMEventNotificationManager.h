//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <IMSharedUtilities/IMEventNotificationQueueDelegate-Protocol.h>

@class IMAutomaticEventNotificationQueue, IMEventListenerList, NSMutableArray, NSString;

@interface IMEventNotificationManager : NSObject <IMEventNotificationQueueDelegate>
{
    IMAutomaticEventNotificationQueue *_notificationQueue;
    double _eventTimeout;
    IMEventListenerList *_eventListeners;
    NSMutableArray *_registeredNotificationQueues;
    long long _busyCount;
}

@property long long busyCount; // @synthesize busyCount=_busyCount;
@property(readonly, nonatomic) NSMutableArray *registeredNotificationQueues; // @synthesize registeredNotificationQueues=_registeredNotificationQueues;
@property(readonly, nonatomic) IMEventListenerList *eventListeners; // @synthesize eventListeners=_eventListeners;
@property double eventTimeout; // @synthesize eventTimeout=_eventTimeout;
@property(readonly, nonatomic) IMAutomaticEventNotificationQueue *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
- (void).cxx_destruct;
- (void)appendNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
- (void)pushNotificationForEventHandler:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
- (void)appendNotificationForEventHandler:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)pushNotificationForEventHandler:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)pauseEventNotifications:(_Bool)arg1;
- (void)cancelAllEventNotifications;
- (void)cancelEventNotificationsForEventHandler:(id)arg1;
- (id)createEventListenerForNotificationName:(id)arg1 object:(id)arg2;
- (void)registerEventListener:(id)arg1;
- (void)eventListenerDidFinish:(id)arg1;
- (void)registerNotificationQueue:(id)arg1;
- (void)eventNotificationQueue:(id)arg1 didChangeBusyState:(_Bool)arg2;
@property(readonly, getter=isBusy) _Bool busy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
