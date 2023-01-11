//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinBoard/BBDataProviderConnectionClientEndpoint-Protocol.h>
#import <BulletinBoard/NSXPCListenerDelegate-Protocol.h>

@class BBDataProviderConnection, NSString, NSXPCConnection, NSXPCListener;
@protocol OS_dispatch_queue;

@interface BBDataProviderConnectionResolver : NSObject <NSXPCListenerDelegate, BBDataProviderConnectionClientEndpoint>
{
    NSXPCListener *_wakeupListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connectionToServer;
    int _listeningToken;
    BBDataProviderConnection *_dataProviderConnection;
}

+ (id)xpcInterface;
+ (id)resolverForConnection:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak BBDataProviderConnection *dataProviderConnection; // @synthesize dataProviderConnection=_dataProviderConnection;
- (void)ping:(CDUnknownBlockType)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_queue_registerWithServer:(CDUnknownBlockType)arg1;
- (void)_registerForPublicationNotification;
- (void)invalidate;
- (void)_invalidate;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
