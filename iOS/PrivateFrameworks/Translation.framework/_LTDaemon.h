//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/NSXPCListenerDelegate-Protocol.h>
#import <Translation/_LTClientConnectionDelegate-Protocol.h>

@class NSMutableArray, NSString, NSXPCListener, _LTTranslationServer;
@protocol OS_dispatch_queue;

@interface _LTDaemon : NSObject <NSXPCListenerDelegate, _LTClientConnectionDelegate>
{
    NSXPCListener *_translationListener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSMutableArray *_connections;
    _LTTranslationServer *_server;
}

- (void).cxx_destruct;
- (void)clientConnectionClosed:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_setupMemoryWarningListener;
- (void)run;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
