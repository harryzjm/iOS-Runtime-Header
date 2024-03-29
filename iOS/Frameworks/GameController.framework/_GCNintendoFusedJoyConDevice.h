//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCDeviceBattery, GCHapticCapabilityGraph, NSMapTable, NSSet, NSString, _GCDeviceConfiguration, _GCNintendoJoyConDevice;
@protocol GCSSettingsStoreService, NSObject><NSCopying><NSSecureCoding, _GCDeviceManager, _GCDriverClientHapticInterface, _GCGamepadEventSourceDescription;

__attribute__((visibility("hidden")))
@interface _GCNintendoFusedJoyConDevice : NSObject
{
    NSMapTable *_clients;
    long long _indicatedPlayerIndex;
    NSMapTable *_clientPlayerIndicatorEndpoints;
    GCDeviceBattery *_battery;
    NSMapTable *_clientBatteryEndpoints;
    id <GCSSettingsStoreService> _settingsStore;
    NSMapTable *_clientSettingsEndpoints;
    GCHapticCapabilityGraph *_hapticCapabilityGraph;
    id <_GCDeviceManager> _manager;
    id <NSObject><NSCopying><NSSecureCoding> _identifier;
    _GCDeviceConfiguration *_configuration;
    _GCNintendoJoyConDevice *_leftDevice;
    _GCNintendoJoyConDevice *_rightDevice;
    id <_GCDriverClientHapticInterface> _hapticDriver;
}

+ (id)identifierForFusedJoyConDeviceWithLeftDevice:(id)arg1 rightDevice:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <_GCDriverClientHapticInterface> hapticDriver; // @synthesize hapticDriver=_hapticDriver;
@property(readonly, nonatomic) _GCNintendoJoyConDevice *rightDevice; // @synthesize rightDevice=_rightDevice;
@property(readonly, nonatomic) _GCNintendoJoyConDevice *leftDevice; // @synthesize leftDevice=_leftDevice;
@property(retain, nonatomic) _GCDeviceConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
@property(readonly) __weak id <_GCDeviceManager> manager; // @synthesize manager=_manager;
- (void)deactivate;
- (void)activateLogical;
@property(readonly) NSSet *underlyingDevices;
- (id)propertyForKey:(id)arg1;
@property(readonly) NSSet *components;
- (void)playerIndicatorXPCProxyServerEndpoint:(id)arg1 didReceivePlayerIndexChange:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;
- (id)initWithLeft:(id)arg1 right:(id)arg2 manager:(id)arg3;
- (id)makeControllerForClient:(id)arg1;
- (void)_removeClient:(id)arg1;
- (void)_addClient:(id)arg1;
@property(readonly, nonatomic) GCDeviceBattery *battery;
- (void)_propagateBattery;
- (void)_refreshBattery;
@property(copy, nonatomic) CDUnknownBlockType deviceBatteryServiceConnectedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceBatteryComponentBatteryUpdatedHandler;
@property long long indicatedPlayerIndex;
@property(readonly) id <_GCGamepadEventSourceDescription> gamepadEventSource;
- (id)persistentIdentifierForSettings;
- (void)settingsDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

