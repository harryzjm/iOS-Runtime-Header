//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDeviceAdaptiveTriggersPayload, NSArray, NSString;
@protocol GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface, GCAdaptiveTriggersXPCProxyServerEndpointDelegate, NSObject><NSCopying><NSSecureCoding, _GCControllerComponentDescription, _GCIPCEndpointConnection;

__attribute__((visibility("hidden")))
@interface GCAdaptiveTriggersXPCProxyServerEndpoint : NSObject
{
    id <GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
    id <_GCIPCEndpointConnection> _connection;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    unsigned long long _pendingUpdates;
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
    GCDeviceAdaptiveTriggersPayload *_leftTrigger;
    GCDeviceAdaptiveTriggersPayload *_rightTrigger;
    NSArray *_statuses;
    id <GCAdaptiveTriggersXPCProxyServerEndpointDelegate> _delegate;
    id _userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <GCAdaptiveTriggersXPCProxyServerEndpointDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *statuses; // @synthesize statuses=_statuses;
@property(retain, nonatomic) GCDeviceAdaptiveTriggersPayload *rightTrigger; // @synthesize rightTrigger=_rightTrigger;
@property(retain, nonatomic) GCDeviceAdaptiveTriggersPayload *leftTrigger; // @synthesize leftTrigger=_leftTrigger;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)invalidateConnection;
- (void)newAdaptiveTriggerPayload:(id)arg1 index:(int)arg2;
- (void)fetchStatusesWithReply:(CDUnknownBlockType)arg1;
- (_Bool)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id *)arg3;
- (void)invalidateClient;
@property(readonly, nonatomic) id <_GCControllerComponentDescription> receiverDescription;
- (id)initWithInitialStatuses:(id)arg1;
- (id)initWithIdentifier:(id)arg1 initialStatuses:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

