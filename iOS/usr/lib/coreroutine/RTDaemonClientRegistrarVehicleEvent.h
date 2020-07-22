//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSSecureCoding-Protocol.h>
#import <coreroutine/RTDaemonClientRegistrarProtocol-Protocol.h>

@class NSObject, NSString, RTInvocationDispatcher, RTVehicleLocationProvider;
@protocol OS_dispatch_queue, RTDaemonClientRegistrarVehicleEventProtocol;

@interface RTDaemonClientRegistrarVehicleEvent <NSSecureCoding, RTDaemonClientRegistrarProtocol>
{
    _Bool _registered;
    id <RTDaemonClientRegistrarVehicleEventProtocol> _delegate;
    RTInvocationDispatcher *_dispatcher;
    RTVehicleLocationProvider *_vehicleLocationProvider;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider; // @synthesize vehicleLocationProvider=_vehicleLocationProvider;
@property(retain, nonatomic) RTInvocationDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(nonatomic) __weak id <RTDaemonClientRegistrarVehicleEventProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addPendingVehicleEventBlock:(CDUnknownBlockType)arg1 failBlock:(CDUnknownBlockType)arg2 description:(id)arg3;
- (_Bool)invocationsPending;
- (long long)countOfPendingInvocations;
- (void)onVehicleEventNotification:(id)arg1;
- (void)stopMonitoringVehicleEvents;
- (void)startMonitoringVehicleEvents;
- (id)initWithVehicleLocationProvider:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
