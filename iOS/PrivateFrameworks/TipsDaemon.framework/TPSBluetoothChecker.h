//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BluetoothManager, CBCentralManager, NSArray;
@protocol OS_dispatch_queue;

@interface TPSBluetoothChecker : NSObject
{
    BluetoothManager *_bluetoothManager;
    CBCentralManager *_centralManager;
    NSObject<OS_dispatch_queue> *_peersAccessQueue;
}

+ (_Bool)bluetoothPairedForProductID:(unsigned int)arg1 minimumVersion:(id)arg2 withPairedDevices:(id)arg3;
+ (_Bool)bluetoothPairedForProductID:(unsigned int)arg1 withPairedDevices:(id)arg2;
+ (_Bool)bluetoothPairedWithTag:(id)arg1 withPairedPeers:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *peersAccessQueue; // @synthesize peersAccessQueue=_peersAccessQueue;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) BluetoothManager *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
- (_Bool)bluetoothPairedForProductID:(unsigned int)arg1 minimumVersion:(id)arg2;
- (_Bool)bluetoothPairedForProductID:(unsigned int)arg1;
- (_Bool)bluetoothPairedWithTag:(id)arg1;
@property(readonly, nonatomic) NSArray *pairedDevices;
@property(readonly, nonatomic) NSArray *pairedPeers;
- (id)devicesAccessQueue;
- (void)initializeBTManager;
- (id)init;

@end
