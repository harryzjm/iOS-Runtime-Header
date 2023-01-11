//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol OS_dispatch_source, OS_xpc_object;

@interface GEODaemon : NSObject
{
    NSMutableSet *_servers;
    NSMutableSet *_peers;
    NSObject<OS_dispatch_source> *_sigInfoSrc;
    NSObject<OS_xpc_object> *_listener;
}

@property(readonly, nonatomic) NSSet *peers; // @synthesize peers=_peers;
- (void).cxx_destruct;
- (id)description;
- (void)_localeChanged:(id)arg1;
- (void)dealloc;
- (void)addServerClass:(Class)arg1;
- (void)addServerInstance:(id)arg1;
- (void)peerDidDisconnect:(id)arg1;
- (void)peerDidConnect:(id)arg1;
- (void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2;
- (void)_handleNewConnection:(id)arg1;
- (id)_createPeerForConnection:(id)arg1;
- (id)_createListenerWithQueue:(id)arg1 onPort:(const char *)arg2;
- (id)initWithPort:(const char *)arg1;
- (id)init;

@end

