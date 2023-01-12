//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListener;
@protocol AUMessageChannel;

__attribute__((visibility("hidden")))
@interface AURemoteMessageChannel : NSObject
{
    id <AUMessageChannel> _messageChannel;
    NSXPCListener *_listener;
    NSXPCConnection *_xpcConnection;
    AURemoteMessageChannel *_selfRetained;
}

- (void).cxx_destruct;
- (void)releaseChannel;
- (void)retainSelfIfRequired;
- (void)onCallRemoteAU:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)endpoint;
- (id)initWithMessageChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

