//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCBatteryXPCProxyRemoteClientEndpointInterface-Protocol.h>
#import <GameController/GCDeviceBatteryComponent-Protocol.h>
#import <GameController/_GCIPCEndpointClient-Protocol.h>

@class GCController, GCDeviceBattery, NSString;
@protocol GCBatteryXPCProxyRemoteServerEndpointInterface, NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCBatteryXPCProxyClientEndpoint : NSObject <_GCIPCEndpointClient, GCDeviceBatteryComponent, GCBatteryXPCProxyRemoteClientEndpointInterface>
{
    GCController *_controller;
    id <GCBatteryXPCProxyRemoteServerEndpointInterface> _serverEndpoint;
    id _connectionInterruptionRegistration;
    id _connectionInvalidationRegistration;
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
    GCDeviceBattery *_battery;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GCDeviceBattery *battery; // @synthesize battery=_battery;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)fetchObjectIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)invalidateConnection;
- (void)refreshBattery;
- (void)newBattery:(id)arg1;
- (void)_remoteEndpointHasSetBattery:(id)arg1;
- (void)setController:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1 connection:(id)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 initialBattery:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
