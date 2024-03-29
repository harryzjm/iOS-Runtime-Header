//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCController, GCSystemGesturesState, NSString;
@protocol GCSystemGestureXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCSystemGestureXPCProxyClientEndpoint : NSObject
{
    GCController *_controller;
    id <GCSystemGestureXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    _Bool _isSystemGestureObserver;
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
    GCSystemGesturesState *_systemGesturesState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GCSystemGesturesState *systemGesturesState; // @synthesize systemGesturesState=_systemGesturesState;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)enableSystemGestureForInput:(id)arg1;
- (void)disableSystemGestureForInput:(id)arg1;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;
- (_Bool)isSystemGestureObserver;
- (void)invalidateConnection;
- (void)refreshSystemGesturesState;
- (void)newSystemGesturesState:(id)arg1;
- (void)_remoteEndpointHasSetSystemGesturesState:(id)arg1;
- (void)setController:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialSystemGesture:(id)arg2 isSystemGestureObserver:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

