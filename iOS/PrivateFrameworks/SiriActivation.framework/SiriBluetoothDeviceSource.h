//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SiriBluetoothContext;

@interface SiriBluetoothDeviceSource
{
    long long _buttonIdentifier;
    double _longPressInterval;
    SiriBluetoothContext *_context;
}

+ (id)bluetoothDeviceForIdentifier:(long long)arg1 bluetoothDevice:(id)arg2;
@property(retain, nonatomic) SiriBluetoothContext *context; // @synthesize context=_context;
@property(nonatomic) double longPressInterval; // @synthesize longPressInterval=_longPressInterval;
@property(nonatomic) long long buttonIdentifier; // @synthesize buttonIdentifier=_buttonIdentifier;
- (void).cxx_destruct;
- (void)deactivate;
- (void)activate;

@end
