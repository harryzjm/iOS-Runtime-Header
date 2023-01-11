//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SystemStatus/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;
@protocol STDynamicActivityAttributionServerHandle;

@interface STDynamicActivityAttributionListener : NSObject <NSXPCListenerDelegate>
{
    id <STDynamicActivityAttributionServerHandle> _serverHandle;
    NSXPCListener *_xpcListener;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(readonly, nonatomic) __weak id <STDynamicActivityAttributionServerHandle> serverHandle; // @synthesize serverHandle=_serverHandle;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)initWithServerHandle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
