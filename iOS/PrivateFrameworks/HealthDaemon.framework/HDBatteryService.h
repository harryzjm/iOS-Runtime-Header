//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CBCharacteristic;

@interface HDBatteryService
{
    CBCharacteristic *_batteryCharacteristic;
}

+ (id)implementedProperties;
+ (id)serviceUUID;
+ (long long)serviceType;
- (void).cxx_destruct;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (id)handleBatteryLevel:(id)arg1;
- (void)readProperty:(id)arg1;

@end
