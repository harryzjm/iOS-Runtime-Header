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
    NSString *_productName;
    NSString *_address;
    struct BTDeviceImpl *_device;
    unsigned int _connectingServiceMask;
}

- (unsigned char)getSpatialAudioPlatformSupport;
- (int)getBehaviorForHIDDevice;
- (int)getLowSecurityStatus;
- (unsigned int)getConnectingServiceMask;
- (void)setConnectingServicemask:(unsigned int)arg1;
- (_Bool)setUserName:(id)arg1;
- (_Bool)isProController;
- (_Bool)supportsHS;
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
- (id)getAACPCapabilityBits;
- (_Bool)getAACPCapabilityBit:(int)arg1;
- (id)accessoryInfo;
- (_Bool)pairedDeviceNameUpdated;
- (int)accessorySettingFeatureBitMask;
- (_Bool)setClickHoldMode:(int)arg1 rightMode:(int)arg2;
- (unsigned int)clickHoldMode:(int *)arg1 rightAction:(int *)arg2;
- (_Bool)setDoubleClickMode:(int)arg1;
- (int)doubleClickMode;
- (_Bool)setSingleClickMode:(int)arg1;
- (int)singleClickMode;
- (_Bool)setListeningModeConfigs:(unsigned int)arg1;
- (unsigned int)listeningModeConfigs;
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
- (unsigned int)SendSetupCommand:(unsigned char)arg1;
- (_Bool)inEarStatusPrimary:(int *)arg1 secondary:(int *)arg2;
- (unsigned char)smartRouteMode;
- (_Bool)setSmartRouteMode:(unsigned char)arg1;
- (_Bool)setInEarDetectEnabled:(_Bool)arg1;
- (_Bool)inEarDetectEnabled;
- (int)batteryLevel;
- (_Bool)supportsBatteryLevel;
- (unsigned long long)connectedServicesCount;
- (unsigned long long)connectedServices;
- (_Bool)isTemporaryPaired;
- (_Bool)connected;
- (_Bool)magicPaired;
- (_Bool)cloudPaired;
- (_Bool)paired;
- (unsigned int)productId;
- (unsigned int)vendorId;
- (id)aclUID;
- (id)scoUID;
- (id)description;
- (unsigned int)minorClass;
- (unsigned int)majorClass;
- (int)type;
- (id)address;
- (id)productName;
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
