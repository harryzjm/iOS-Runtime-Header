//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BluetoothDevice;

@interface SBVoiceControlPresentationSource : NSObject
{
    BluetoothDevice *_bluetoothDevice;
    long long _sourceType;
}

+ (id)sourceFromHomeButton;
+ (id)sourceFromHeadsetButton;
+ (id)sourceFromBluetoothDevice:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) BluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
- (id)_initWithSourceType:(long long)arg1;

@end
