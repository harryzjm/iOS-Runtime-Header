//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, AXIPCClient, AXIPCServer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AXServer : NSObject
{
    _Bool _shouldRegisterClientCallbackSourceOnMainRunloop;
    AXIPCServer *_server;
    AXIPCClient *_client;
    NSString *_serverIdentifier;
    NSMutableArray *_assertionWorkBacklog;
    AXDispatchTimer *_assertionRetryTimer;
    NSObject<OS_dispatch_queue> *_assertionWorkQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assertionWorkQueue; // @synthesize assertionWorkQueue=_assertionWorkQueue;
@property(retain, nonatomic) AXDispatchTimer *assertionRetryTimer; // @synthesize assertionRetryTimer=_assertionRetryTimer;
@property(retain, nonatomic) NSMutableArray *assertionWorkBacklog; // @synthesize assertionWorkBacklog=_assertionWorkBacklog;
@property(nonatomic) _Bool shouldRegisterClientCallbackSourceOnMainRunloop; // @synthesize shouldRegisterClientCallbackSourceOnMainRunloop=_shouldRegisterClientCallbackSourceOnMainRunloop;
@property(copy, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
@property(retain, nonatomic) AXIPCClient *client; // @synthesize client=_client;
@property(retain, nonatomic) AXIPCServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (id)_serviceName;
- (void)_connectServerIfNecessary;
- (_Bool)_connectIfNecessary;
- (void)_willClearServer;
- (void)_didConnectToServer;
- (void)_wasDisconnectedFromClient;
- (void)_didConnectToClient;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)_initializeAssertionBookkeeping;
- (void)_processAssertionBacklog;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 objectResultHandler:(CDUnknownBlockType)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 boolResultHandler:(CDUnknownBlockType)arg3;
- (id)sendMessage:(id)arg1;
- (id)sendSimpleMessageWithObjectResult:(id)arg1;
- (_Bool)sendSimpleMessageWithResult:(id)arg1;
- (_Bool)sendSimpleMessage:(id)arg1 enqueueError:(id *)arg2;
- (void)sendSimpleMessage:(id)arg1;
- (void)dealloc;
- (id)init;

@end

