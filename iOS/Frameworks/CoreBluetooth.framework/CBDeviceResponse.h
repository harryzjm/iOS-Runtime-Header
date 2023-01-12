//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CUXPCCodable-Protocol.h>

@class NSString;

@interface CBDeviceResponse : NSObject <CUXPCCodable>
{
    BOOL _core0TargetPower;
    BOOL _core1TargetPower;
    BOOL _currentPCAP;
    BOOL _rssi;
    BOOL _txPower;
    BOOL _txPowerMax;
    unsigned short _connectionHandle;
    NSString *_identifier;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL txPowerMax; // @synthesize txPowerMax=_txPowerMax;
@property(nonatomic) BOOL txPower; // @synthesize txPower=_txPower;
@property(nonatomic) BOOL rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL currentPCAP; // @synthesize currentPCAP=_currentPCAP;
@property(nonatomic) BOOL core1TargetPower; // @synthesize core1TargetPower=_core1TargetPower;
@property(nonatomic) BOOL core0TargetPower; // @synthesize core0TargetPower=_core0TargetPower;
@property(nonatomic) unsigned short connectionHandle; // @synthesize connectionHandle=_connectionHandle;
- (id)descriptionWithLevel:(int)arg1;
- (id)description;
- (void)encodeWithXPCObject:(id)arg1;
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;

@end
