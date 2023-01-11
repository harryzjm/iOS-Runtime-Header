//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReplayKit/NSXPCListenerDelegate-Protocol.h>
#import <ReplayKit/RPBroadcastDaemonProtocol-Protocol.h>
#import <ReplayKit/RPBroadcastExtensionProtocol-Protocol.h>

@class NSExtension, NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;

@interface RPBroadcastExtensionProxy : NSObject <NSXPCListenerDelegate, RPBroadcastExtensionProtocol, RPBroadcastDaemonProtocol>
{
    CDUnknownBlockType _serviceInfoHandler;
    CDUnknownBlockType _broadcastURLHandler;
    CDUnknownBlockType _errorHandler;
    NSXPCListener *_listener;
    NSExtension *_broadcastUploadExtension;
    NSXPCConnection *_connection;
    CDUnknownBlockType _connectionReadyHandler;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(copy, nonatomic) CDUnknownBlockType connectionReadyHandler; // @synthesize connectionReadyHandler=_connectionReadyHandler;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSExtension *broadcastUploadExtension; // @synthesize broadcastUploadExtension=_broadcastUploadExtension;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType broadcastURLHandler; // @synthesize broadcastURLHandler=_broadcastURLHandler;
@property(copy, nonatomic) CDUnknownBlockType serviceInfoHandler; // @synthesize serviceInfoHandler=_serviceInfoHandler;
- (void).cxx_destruct;
- (void)processPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishBroadcastWithError:(id)arg1;
- (void)ping;
- (void)updateBroadcastURL:(id)arg1;
- (void)updateServiceInfo:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setupNewConnection:(id)arg1;
- (void)invalidateConnection;
- (void)establishConnectionWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithBroadcastUploadListenerEndpoint:(id)arg1;
- (id)initWithBroadcastUploadExtension:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
