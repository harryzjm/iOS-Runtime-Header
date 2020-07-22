//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSXPCListenerDelegate-Protocol.h>

@class GEONavigationServer, NSString, NSXPCListener;

@interface GEONavdServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_pushNavigationStateListener;
    NSXPCListener *_getNavigationStateListener;
    NSXPCListener *_monitorDestinationListener;
    GEONavigationServer *_navigationServer;
}

- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

