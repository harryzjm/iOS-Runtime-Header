//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ExternalAccessory/NSObject-Protocol.h>

@class BTDevicePicker, BluetoothDevice;

@protocol BTDevicePickerDelegate <NSObject>

@optional
- (void)devicePicker:(BTDevicePicker *)arg1 didDismissWithResult:(long long)arg2 device:(BluetoothDevice *)arg3;
@end

