//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface IPLocalNullXPCServer : NSObject
{
    NSXPCListener *_listener;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

- (void).cxx_destruct;
- (void)registerAsProgressObserver:(CDUnknownBlockType)arg1;
- (void)getProgressForIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllInstallableStates:(CDUnknownBlockType)arg1;
- (void)getActiveInstallations:(CDUnknownBlockType)arg1;
- (void)actionBarrier:(CDUnknownBlockType)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)newClientConnection;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

