//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/SCROIOBluetoothElementProtocol-Protocol.h>
#import <ScreenReaderOutput/SCROIOHIDElementProtocol-Protocol.h>

@class NSString;

@interface SCROIOHIDElement <SCROIOBluetoothElementProtocol, SCROIOHIDElementProtocol>
{
    struct __IOHIDDevice *_hidDevice;
}

- (id)bluetoothAddress;
- (int)transport;
- (struct __IOHIDDevice *)hidDevice;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithIOObject:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
