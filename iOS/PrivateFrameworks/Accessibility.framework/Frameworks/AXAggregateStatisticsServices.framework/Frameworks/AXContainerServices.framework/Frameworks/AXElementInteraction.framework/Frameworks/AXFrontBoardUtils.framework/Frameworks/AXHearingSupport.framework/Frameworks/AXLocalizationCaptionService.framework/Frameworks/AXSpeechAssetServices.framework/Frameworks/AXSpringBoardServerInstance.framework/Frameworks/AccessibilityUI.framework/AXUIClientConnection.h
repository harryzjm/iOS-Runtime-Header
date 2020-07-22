//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueue, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface AXUIClientConnection : NSObject
{
    _Bool _connected;
    NSObject<OS_xpc_object> *_xpcConnection;
    AXAccessQueue *_connectionAccessQueue;
    NSMutableDictionary *_registeredClients;
    AXAccessQueue *_registeredClientsAccessQueue;
    NSHashTable *_stateObservers;
    NSObject<OS_dispatch_queue> *_stateObserverQueue;
}

+ (id)sharedClientConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateObserverQueue; // @synthesize stateObserverQueue=_stateObserverQueue;
@property(retain, nonatomic) NSHashTable *stateObservers; // @synthesize stateObservers=_stateObservers;
@property(retain, nonatomic) AXAccessQueue *registeredClientsAccessQueue; // @synthesize registeredClientsAccessQueue=_registeredClientsAccessQueue;
@property(retain, nonatomic) NSMutableDictionary *registeredClients; // @synthesize registeredClients=_registeredClients;
@property(retain, nonatomic) AXAccessQueue *connectionAccessQueue; // @synthesize connectionAccessQueue=_connectionAccessQueue;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (void)unregisterConnectionStateObserver:(id)arg1;
- (void)registerConnectionStateObserver:(id)arg1;
- (void)_broadcastConnectedStateChange;
- (id)_clientWithIdentifier:(id)arg1;
- (void)unregisterClient:(id)arg1 withIdentifier:(id)arg2;
- (void)registerClient:(id)arg1 withIdentifier:(id)arg2;
- (void)performBlockWithXPCConnection:(CDUnknownBlockType)arg1;
- (id)init;

@end

