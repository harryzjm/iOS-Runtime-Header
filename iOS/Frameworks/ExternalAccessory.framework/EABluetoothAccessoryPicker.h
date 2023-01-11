//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExternalAccessory/BTDevicePickerDelegate-Protocol.h>

@class BTDevicePicker, NSString;
@protocol EABluetoothAccessoryPickerDelegate;

@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate>
{
    BTDevicePicker *_picker;
    id <EABluetoothAccessoryPickerDelegate> _delegate;
}

+ (void)wakeSelectedBluetoothAccessories:(id)arg1;
@property(nonatomic) id <EABluetoothAccessoryPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)devicePicker:(id)arg1 didDismissWithResult:(long long)arg2 device:(id)arg3;
- (void)dismissPicker;
- (void)show;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

