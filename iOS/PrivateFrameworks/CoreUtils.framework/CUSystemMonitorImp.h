//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/CXCallObserverDelegate-Protocol.h>
#import <CoreUtils/CoreTelephonyClientDelegate-Protocol.h>
#import <CoreUtils/FMFSessionDelegate-Protocol.h>

@class CUBluetoothClient, CUNetInterfaceMonitor, CUSystemMonitor, CUWiFiManager, CXCallObserver, CoreTelephonyClient, NSArray, NSData, NSMutableArray, NSMutableSet, NSString, RTRoutineManager, TUCallCenter;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CUSystemMonitorImp : NSObject <FMFSessionDelegate, CXCallObserverDelegate, CoreTelephonyClientDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_monitors;
    CDStruct_83abfce7 _bluetoothAddress48;
    NSData *_bluetoothAddressData;
    CUBluetoothClient *_bluetoothClient;
    TUCallCenter *_callCenter;
    CXCallObserver *_callObserver;
    int _activeCallCount;
    unsigned int _callFlags;
    _Bool _callStatusObserving;
    int _connectedCallCount;
    int _familyBuddyToken;
    _Bool _familyFailed;
    NSArray *_familyMembers;
    _Bool _familyObserving;
    CUSystemMonitor *_familyPrimaryIPMonitor;
    int _familyUpdatedToken;
    _Bool _manateeAvailable;
    _Bool _manateeObserving;
    int _fmfDevicesChangedToken;
    int _meDeviceChangedToken;
    int _meDeviceRetryToken;
    NSString *_meDeviceFMFDeviceID;
    NSString *_meDeviceIDSDeviceID;
    NSString *_meDeviceName;
    _Bool _meDeviceIsMe;
    _Bool _meDeviceValid;
    CUNetInterfaceMonitor *_netInterfaceMonitor;
    unsigned int _netFlags;
    CDUnion_fab80606 _primaryIPv4Addr;
    CDUnion_fab80606 _primaryIPv6Addr;
    NSString *_primaryNetworkSignature;
    int _powerSourceToken;
    _Bool _powerUnlimited;
    NSString *_primaryAppleID;
    _Bool _primaryAppleIDActive;
    _Bool _primaryAppleIDIsHSA2;
    int _primaryAppleIDNotifyToken;
    _Bool _primaryAppleIDObserving;
    CoreTelephonyClient *_regionCTClient;
    struct __CTServerConnection *_regionCTServerCnx;
    NSString *_regionISOCountryCode;
    NSString *_regionMobileCountryCode;
    RTRoutineManager *_regionRoutineManager;
    NSString *_regionRoutineCountry;
    int _regionRoutineNotifyToken;
    NSString *_regionRoutineState;
    CDStruct_83abfce7 _rotatingIdentifier48;
    NSData *_rotatingIdentifierData;
    NSObject<OS_dispatch_source> *_rotatingIdentifierTimer;
    _Bool _screenLocked;
    int _screenLockedToken;
    _Bool _screenOn;
    int _screenBlankedToken;
    _Bool _screenSaverActive;
    _Bool _scChangesPending;
    struct __SCDynamicStore *_scDynamicStore;
    NSMutableArray *_scInitialKeys;
    NSString *_scKeySystemName;
    NSString *_scPatternNetInterfaceIPv4;
    NSString *_scPatternNetInterfaceIPv6;
    NSArray *_scNotificationKeys;
    NSArray *_scNotificationPatterns;
    NSString *_systemName;
    CUWiFiManager *_wifiManager;
    unsigned int _wifiFlags;
    int _wifiState;
}

- (void).cxx_destruct;
- (void)_wifiMonitorStateChanged:(_Bool)arg1;
- (void)_wifiMonitorStop;
- (void)_wifiMonitorStart;
- (void)_firstUnlockMonitorStop;
- (void)_firstUnlockMonitorStart;
- (void)_systemConfigSystemNameChanged:(_Bool)arg1;
- (void)_systemConfigNetInterfaceChanged:(id)arg1 initial:(_Bool)arg2;
- (void)_systemConfigChanged:(id)arg1 initial:(_Bool)arg2;
- (void)_systemConfigUpdateNotifications;
- (void)_systemConfigUpdateKeyPtr:(id *)arg1 name:(id)arg2 enabled:(_Bool)arg3 creator:(CDUnknownBlockType)arg4;
- (void)_screenSaverMonitorStop;
- (void)_screenSaverMonitorStart;
- (void)_screenChanged:(_Bool)arg1;
- (void)_screenOnMonitorStop;
- (void)_screenOnMonitorStart;
- (void)_screenLockedChanged;
- (void)_screenLockedMonitorStop;
- (void)_screenLockedMonitorStart;
- (void)_rotatingIdentifierTimerFired;
- (void)_rotatingIdentifierMonitorStop;
- (void)_rotatingIdentifierMonitorStart;
- (void)_locationsOfInterestDidChange:(_Bool)arg1;
- (void)cellMonitorUpdate:(id)arg1 info:(id)arg2;
- (void)_regionMonitorUpdateMCC:(id)arg1;
- (void)_regionMonitorUpdateLocationsOfInterest:(id)arg1;
- (void)_regionMonitorGet;
- (void)_regionMonitorStop;
- (void)_regionMonitorStart;
- (void)_primaryAppleIDChanged2:(_Bool)arg1;
- (void)_primaryAppleIDChanged:(id)arg1;
- (id)_primaryAppleIDAccount;
- (void)_primaryAppleIDMonitorStop;
- (void)_primaryAppleIDMonitorStart;
- (void)_powerUnlimitedMonitorStop;
- (void)_powerUnlimitedMonitorStart;
- (void)_netInterfaceMonitorStop;
- (void)_netInterfaceMonitorStart;
- (void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(_Bool)arg3;
- (void)_meDeviceCheckStart:(_Bool)arg1;
- (void)_meDeviceMonitorStop;
- (void)_meDeviceMonitorStart;
- (void)_manateeChanged:(id)arg1;
- (void)_manateeMonitorStop;
- (void)_manateeMonitorStart;
- (void)_familyUpdated:(id)arg1;
- (void)_familyNetworkChanged;
- (void)_familyGetMembers:(_Bool)arg1;
- (void)_familyMonitorStop;
- (void)_familyMonitorStart;
- (int)_connectedCallCountUnached;
- (unsigned int)_callFlagsUncached;
- (int)_activeCallCountUnached;
- (void)_callInfoChanged;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (void)_callCenterStatusChanged:(id)arg1;
- (void)_callMonitorStop;
- (void)_callMonitorStart;
- (void)_bluetoothAddressMonitorStop;
- (void)_bluetoothAddressMonitorStart;
- (void)_update;
- (void)updateWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invokeBlock:(CDUnknownBlockType)arg1 passingTest:(CDUnknownBlockType)arg2;
- (_Bool)_hasMonitorPassingTest:(CDUnknownBlockType)arg1;
- (void)removeMonitor:(id)arg1;
- (void)addMonitor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
