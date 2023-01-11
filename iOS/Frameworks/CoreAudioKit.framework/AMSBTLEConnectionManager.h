//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreAudioKit/CBCentralManagerDelegate-Protocol.h>
#import <CoreAudioKit/CBPeripheralDelegate-Protocol.h>

@class CBCentralManager, NSMutableArray, NSString, NSTimer;
@protocol BTLEConnectionTable;

__attribute__((visibility("hidden")))
@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    CBCentralManager *centralManager;
    NSMutableArray *peripheralList;
    NSMutableArray *connectedBTPeripherals;
    NSMutableArray *connectedAMSPeripherals;
    NSTimer *refreshTimer;
    NSTimer *connectionTimer;
    id <BTLEConnectionTable> controller;
    long long centralState;
    _Bool isAdvertising;
}

@property(readonly) NSMutableArray *peripheralList; // @synthesize peripheralList;
- (_Bool)peripheralIsConnectedCentral:(id)arg1;
- (unsigned int)midiDeviceForUUID:(id)arg1;
- (void)removeAMSPeripheralForCBPeripheral:(id)arg1;
- (id)amsPeripheralForCBPeripheral:(id)arg1;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)startTimer;
- (void)killTimer;
- (void)stopScan;
- (void)startScan;
- (long long)bluetoothState;
- (_Bool)isLECapableHardware;
- (void)connectionTimerFired:(id)arg1;
- (void)timerFired:(id)arg1;
- (void)checkAlreadyConnectedPeripherals;
- (void)createPeripheralList;
- (void)setUIController:(id)arg1;
- (void)updateAdvertisingState:(id)arg1;
- (void)dealloc;
- (id)initWithUIController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

