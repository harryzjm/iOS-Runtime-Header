//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCAdaptiveTriggers-Protocol.h>
#import <GameController/GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface-Protocol.h>
#import <GameController/_GCIPCEndpointClient-Protocol.h>

@class GCController, GCDeviceAdaptiveTriggersPayload, GCDeviceAdaptiveTriggersStatusPayload, NSString;
@protocol GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCAdaptiveTriggersXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCAdaptiveTriggers, GCAdaptiveTriggersXPCProxyRemoteClientEndpointInterface>
{
    GCController *_controller;
    id <GCAdaptiveTriggersXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
    GCDeviceAdaptiveTriggersPayload *_leftTrigger;
    GCDeviceAdaptiveTriggersPayload *_rightTrigger;
    GCDeviceAdaptiveTriggersStatusPayload *_leftStatus;
    GCDeviceAdaptiveTriggersStatusPayload *_rightStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GCDeviceAdaptiveTriggersStatusPayload *rightStatus; // @synthesize rightStatus=_rightStatus;
@property(retain, nonatomic) GCDeviceAdaptiveTriggersStatusPayload *leftStatus; // @synthesize leftStatus=_leftStatus;
@property(retain, nonatomic) GCDeviceAdaptiveTriggersPayload *rightTrigger; // @synthesize rightTrigger=_rightTrigger;
@property(retain, nonatomic) GCDeviceAdaptiveTriggersPayload *leftTrigger; // @synthesize leftTrigger=_leftTrigger;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)invalidateConnection;
- (void)refreshStatuses;
- (void)newStatuses:(id)arg1;
- (void)_remoteEndpointHasSetStatuses:(id)arg1;
- (void)setController:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialStatuses:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
