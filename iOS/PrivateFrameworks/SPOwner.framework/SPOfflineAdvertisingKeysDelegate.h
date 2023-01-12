//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBPeripheralManager, FMXPCServiceDescription, FMXPCSession, NSString, SPBeaconManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SPOfflineAdvertisingKeysDelegate : NSObject
{
    _Bool _inLowPowerMode;
    NSObject<OS_dispatch_queue> *_queue;
    SPBeaconManager *_beaconManager;
    CBPeripheralManager *_peripheralManager;
    FMXPCServiceDescription *_serviceDescription;
    FMXPCSession *_session;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool inLowPowerMode; // @synthesize inLowPowerMode=_inLowPowerMode;
@property(retain, nonatomic) FMXPCSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FMXPCServiceDescription *serviceDescription; // @synthesize serviceDescription=_serviceDescription;
@property(retain, nonatomic) CBPeripheralManager *peripheralManager; // @synthesize peripheralManager=_peripheralManager;
@property(retain, nonatomic) SPBeaconManager *beaconManager; // @synthesize beaconManager=_beaconManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)peripheralManager:(id)arg1 offlineAdvPayloadRequestedWithReason:(long long)arg2;
- (void)processKeyResponse:(id)arg1;
- (long long)transformReason:(long long)arg1;
- (void)enterLowPowerMode;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (id)userAgentSyncProxy;
- (id)syncProxy;
- (id)userAgentProxy;
- (id)proxy;
- (id)remoteInterface;
- (id)initWithBeaconManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

