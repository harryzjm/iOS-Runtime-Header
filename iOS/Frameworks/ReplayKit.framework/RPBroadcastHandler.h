//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ReplayKit/NSExtensionRequestHandling-Protocol.h>
#import <ReplayKit/NSXPCListenerDelegate-Protocol.h>

@class NSDictionary, NSExtensionContext, NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;

@interface RPBroadcastHandler : NSObject <NSXPCListenerDelegate, NSExtensionRequestHandling>
{
    NSDictionary *_serviceInfo;
    NSExtensionContext *_extensionContext;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSXPCConnection *_connection;
    NSXPCListener *_listener;
}

@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(retain, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property(retain, nonatomic) NSDictionary *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;
- (void)_completeRequestWithReturnItems:(id)arg1;
- (void)updateServiceInfo:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

