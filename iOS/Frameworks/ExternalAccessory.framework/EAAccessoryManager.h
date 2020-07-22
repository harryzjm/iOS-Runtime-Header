//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <ExternalAccessory/EABluetoothAccessoryPickerDelegate-Protocol.h>

@class EABluetoothAccessoryPicker, NSArray, NSMutableArray, NSRecursiveLock, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface EAAccessoryManager : NSObject <EABluetoothAccessoryPickerDelegate>
{
    NSMutableArray *_connectedAccessories;
    NSMutableArray *_sequesteredAccessories;
    NSString *_selectedBluetoothAddress;
    CDUnknownBlockType _pickerCompletion;
    _Bool _sequesterNewAccessories;
    NSTimer *_pickerTimer;
    NSRecursiveLock *_pickerLock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    EABluetoothAccessoryPicker *_picker;
}

+ (id)accessoryDictionaryForLogging:(id)arg1;
+ (_Bool)isLoggingEnabled;
+ (void)accessibilityStopListening;
+ (void)accessibilityStartListening;
+ (void)registerCapabilities:(unsigned int)arg1;
+ (id)sharedAccessoryManager;
- (void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2 forUUID:(id)arg3;
- (id)currentVehicleInformation:(id)arg1;
- (void)requestIAPAccessoryWiFiCredentials:(id)arg1;
- (id)authCertSerialNumberForLegacyConnectionID:(unsigned int)arg1;
- (id)authCertForLegacyConnectionID:(unsigned int)arg1;
- (_Bool)processIDIsUsingAccessory:(struct __CFString *)arg1;
- (void)stopLocationForConnectedAccessories;
- (void)sendNMEAFilterList:(id)arg1 forUUID:(id)arg2;
- (void)startLocationForConnectedAccessories;
- (void)openSessionFromAppToAccessory:(id)arg1;
- (void)openSessionFromAccessoryToApp:(id)arg1;
- (void)sendOutgoingEAData:(id)arg1 forSessionUUID:(id)arg2;
- (void)saveEASession:(id)arg1 forEASessionUUID:(id)arg2;
- (void)resumeEASessionData:(id)arg1;
- (void)closeInputStreamForEASessionUUID:(id)arg1;
- (void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)accessoryClosedEASession:(id)arg1;
- (void)closeEASessionForEASessionUUID:(id)arg1;
- (void)createEASessionForProtocol:(id)arg1 accessoryUUID:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)devicePicker:(id)arg1 didSelectAddress:(id)arg2 errorCode:(long long)arg3;
- (void)stopIPAccessoryDiscovery;
- (void)startIPAccessoryDiscovery;
- (void)disconnectIPAccessory:(id)arg1;
- (void)initiateConnectionToIPAccessory:(id)arg1;
- (_Bool)destinationInformation:(id)arg1 forAccessoryUUID:(id)arg2;
- (void)pointOfInterestSelection:(id)arg1;
- (void)sendGPRMCDataStatus:(_Bool)arg1 ValueV:(_Bool)arg2 ValueX:(_Bool)arg3 forUUID:(id)arg4;
- (void)setAreLocationAccessoriesEnabled:(_Bool)arg1;
- (_Bool)areLocationAccessoriesEnabled;
- (void)accessibilitySystemPropertyRequest:(id)arg1;
- (void)accessibilitySystemPropertyChange:(id)arg1;
- (void)accessibilityItemPropertyRequest:(id)arg1;
- (void)accessibilityContextChange:(id)arg1;
- (void)accessibilityAction:(id)arg1;
- (void)setShouldAllowCppRuntime:(_Bool)arg1;
- (_Bool)shouldAllowCppRuntime;
- (void)setShouldAllowInternalProtocols:(_Bool)arg1;
- (_Bool)shouldAllowInternalProtocols;
- (id)_connectedAccessories;
- (_Bool)appDeclaresProtocol:(id)arg1;
- (void)wakeAccessoryWithToken:(id)arg1;
- (void)endSession:(unsigned int)arg1 forConnectionID:(unsigned int)arg2;
- (void)openCompleteForSession:(unsigned int)arg1 connectionID:(unsigned int)arg2;
- (void)_timeSyncInfoUpdated:(id)arg1;
- (void)_handleAccessoryNotificationTimeout:(id)arg1;
- (void)_integrateSequesteredAccessories;
- (void)_cameraInfoUpdated:(id)arg1;
- (void)_vehicleDataUpdated:(id)arg1;
- (void)_gpsTimeRequested:(id)arg1;
- (void)_nmeaFilteringSupportChanged:(id)arg1;
- (void)_ephemerisURLAvailable:(id)arg1;
- (void)_locationPointDataAvailable:(id)arg1;
- (void)_locationNmeaDataAvailable:(id)arg1;
- (id)availableAccessories;
- (void)_externalAccessoryDisconnected:(id)arg1;
- (void)_OOBBTPairingCompletionStatusReceived:(id)arg1;
- (void)_pointOfInterestStatusReceived:(id)arg1;
- (void)_externalAccessoryUpdated:(id)arg1;
- (void)_externalAccessoryConnected:(id)arg1;
- (void)_externalAccessoryConnectedNotificationHandler:(id)arg1;
- (void)_removeAlliAPAccessoriesFromArray:(id)arg1 notifyClients:(_Bool)arg2;
- (void)_externalAccessoryReconnected:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_cleanUpForTaskSuspendWithTaskIdentifier:(unsigned long long)arg1;
- (void)_checkForConnectedAccessories:(_Bool)arg1 backgroundTaskIdentifier:(unsigned long long)arg2;
- (id)_findExtraAccessoriesContainedOnlyInEA:(id)arg1;
- (id)_findExtraAccessoriesContainedOnlyIniAP:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_iapServerDied:(id)arg1;
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)arg1;
- (void)unregisterForLocalNotifications;
- (void)registerForLocalNotifications;
@property(readonly, nonatomic) NSArray *connectedAccessories;
- (void)showBluetoothAccessoryPickerWithNameFilter:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)_initFromSingletonCreationMethod;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

