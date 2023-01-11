//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BluetoothDevice : NSObject
{
    NSString *_name;
    NSString *_address;
    struct BTDeviceImpl *_device;
    unsigned int _connectingServiceMask;
}

- (unsigned int)getConnectingServiceMask;
- (void)setConnectingServicemask:(unsigned int)arg1;
- (_Bool)setUserName:(id)arg1;
- (_Bool)isAppleAudioDevice;
- (void)setSyncGroup:(int)arg1 enabled:(_Bool)arg2;
- (id)syncGroups;
- (void)setSyncSettings:(CDStruct_df7f102b)arg1;
- (CDStruct_df7f102b)syncSettings;
- (void)endVoiceCommand;
- (void)startVoiceCommand;
- (void)unpair;
- (void)acceptSSP:(long long)arg1;
- (void)setPIN:(id)arg1;
- (void)disconnect;
- (void)connectWithServices:(unsigned int)arg1;
- (void)connect;
- (void)setServiceSetting:(unsigned int)arg1 key:(id)arg2 value:(id)arg3;
- (id)getServiceSetting:(unsigned int)arg1 key:(id)arg2;
- (_Bool)isServiceSupported:(unsigned int)arg1;
- (_Bool)isAccessory;
- (_Bool)magicPairedDeviceNameUpdated;
- (int)accessorySettingFeatureBitMask;
- (_Bool)setListeningMode:(unsigned int)arg1;
- (unsigned int)listeningMode;
- (_Bool)setDoubleTapActionEx:(unsigned int)arg1 rightAction:(unsigned int)arg2;
- (unsigned int)doubleTapActionEx:(unsigned int *)arg1 rightAction:(unsigned int *)arg2;
- (_Bool)featureCapability:(int)arg1;
- (unsigned int)doubleTapCapability;
- (_Bool)setDoubleTapAction:(unsigned int)arg1;
- (unsigned int)doubleTapAction;
- (_Bool)setMicMode:(unsigned int)arg1;
- (unsigned int)micMode;
- (_Bool)setInEarDetectEnabled:(_Bool)arg1;
- (_Bool)inEarDetectEnabled;
- (int)batteryLevel;
- (_Bool)supportsBatteryLevel;
- (unsigned long long)connectedServicesCount;
- (unsigned long long)connectedServices;
- (_Bool)connected;
- (_Bool)magicPaired;
- (_Bool)cloudPaired;
- (_Bool)paired;
- (unsigned int)productId;
- (unsigned int)vendorId;
- (id)scoUID;
- (id)description;
- (unsigned int)minorClass;
- (unsigned int)majorClass;
- (int)type;
- (id)address;
- (id)name;
- (_Bool)_isNameCached;
- (void)_clearName;
- (void)setDevice:(struct BTDeviceImpl *)arg1;
- (struct BTDeviceImpl *)device;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDevice:(struct BTDeviceImpl *)arg1 address:(id)arg2;

@end

