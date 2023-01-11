//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_event_publisher;

@interface HDXPCEventPublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_event_publisher> *_publisher;
    NSMutableArray *_pendingEvents;
    NSMutableArray *_pendingSubscribers;
    NSMutableDictionary *_subscribers;
    const char *_requiredEntitlement;
}

- (void).cxx_destruct;
- (void)broadcastEvent:(id)arg1;
- (void)_queue_sendEventWithXPCObject:(id)arg1;
- (void)_queue_sendPendingEvents;
- (void)_queue_removeSubscriberForToken:(unsigned long long)arg1;
- (void)_queue_addSubscriberForToken:(unsigned long long)arg1 descriptor:(id)arg2;
- (void)_handleEventAction:(unsigned int)arg1 token:(unsigned long long)arg2 descriptor:(id)arg3;
- (id)initWithStream:(const char *)arg1 entitlement:(const char *)arg2;

@end
