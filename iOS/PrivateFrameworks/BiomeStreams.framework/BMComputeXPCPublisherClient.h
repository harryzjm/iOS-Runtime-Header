//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMComputePublisher-Protocol.h>
#import <BiomeStreams/BMComputePublishing-Protocol.h>

@class NSMutableDictionary, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface BMComputeXPCPublisherClient : NSObject <BMComputePublisher, BMComputePublishing>
{
    struct os_unfair_lock_s _lock;
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_subscriptions;
    NSMutableDictionary *_pendingEvents;
}

+ (void)_initializeSharedClientWithQueue:(id)arg1;
+ (id)shared;
+ (void)_setQueue:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *pendingEvents; // @synthesize pendingEvents=_pendingEvents;
@property(readonly, nonatomic) NSMutableDictionary *subscriptions; // @synthesize subscriptions=_subscriptions;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_setXPCEvent:(id)arg1 identifier:(id)arg2;
- (void)_handleEventWithPayload:(id)arg1;
- (void)receiveInputForIdentifier:(id)arg1;
- (void)unsubscribeWithIdentifier:(id)arg1;
- (void)subscribe:(id)arg1;
@property(readonly, nonatomic) NSXPCConnection *connection;
- (id)initWithQueue:(id)arg1 listenerEndpoint:(id)arg2;
- (id)init;

@end
