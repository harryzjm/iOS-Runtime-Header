//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/RTPurgable-Protocol.h>
#import <coreroutine/RTStoreManager-Protocol.h>

@class NSString, RTBatteryManager, RTBluetoothManager, RTCameraManager, RTDarwinNotificationHelper, RTHintStore, RTLearnedLocationManager, RTLocationManager, RTMetricManager, RTNavigationManager, RTPersistenceManager, RTReachabilityManager, RTWalletManager;

@interface RTHintManager <RTPurgable, RTStoreManager>
{
    RTBatteryManager *_batteryManager;
    RTBluetoothManager *_bluetoothManager;
    RTCameraManager *_cameraManager;
    RTDarwinNotificationHelper *_notificationHelper;
    RTHintStore *_hintStore;
    RTLearnedLocationManager *_learnedLocationManager;
    RTLocationManager *_locationManager;
    RTMetricManager *_metricManager;
    RTNavigationManager *_navigationManager;
    RTPersistenceManager *_persistenceManager;
    RTReachabilityManager *_reachabilityManager;
    RTWalletManager *_walletManager;
}

+ (id)vendedClasses;
- (void).cxx_destruct;
@property(retain, nonatomic) RTWalletManager *walletManager; // @synthesize walletManager=_walletManager;
@property(retain, nonatomic) RTReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(retain, nonatomic) RTPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property(retain, nonatomic) RTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(retain, nonatomic) RTMetricManager *metricManager; // @synthesize metricManager=_metricManager;
@property(retain, nonatomic) RTLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) RTLearnedLocationManager *learnedLocationManager; // @synthesize learnedLocationManager=_learnedLocationManager;
@property(retain, nonatomic) RTHintStore *hintStore; // @synthesize hintStore=_hintStore;
@property(retain, nonatomic) RTDarwinNotificationHelper *notificationHelper; // @synthesize notificationHelper=_notificationHelper;
@property(retain, nonatomic) RTCameraManager *cameraManager; // @synthesize cameraManager=_cameraManager;
@property(retain, nonatomic) RTBluetoothManager *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
@property(retain, nonatomic) RTBatteryManager *batteryManager; // @synthesize batteryManager=_batteryManager;
- (void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_onLearnedLocationNotification:(id)arg1;
- (void)onLearnedLocationNotification:(id)arg1;
- (void)_onWalletNotification:(id)arg1;
- (void)onWalletNotification:(id)arg1;
- (void)_onCameraNotification:(id)arg1;
- (void)onCameraNotification:(id)arg1;
- (void)_onReachabilityChange:(id)arg1;
- (void)onReachabilityChange:(id)arg1;
- (void)_onNavigationNotification:(id)arg1;
- (void)onNavigationNotification:(id)arg1;
- (void)_onBatteryNotification:(id)arg1;
- (void)onBatteryNotification:(id)arg1;
- (void)_onBluetoothNotification:(id)arg1;
- (void)onBluetoothNotification:(id)arg1;
- (void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_submitHintFromSource:(long long)arg1 location:(id)arg2;
- (void)submitHintFromSource:(long long)arg1 location:(id)arg2;
- (void)_storeHints:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)storeHints:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_submitHintFromSource:(long long)arg1 fallbackLocation:(id)arg2;
- (void)submitHintFromSource:(long long)arg1 fallbackLocation:(id)arg2;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)shutdown;
- (id)initWithBatteryManager:(id)arg1 bluetoothManager:(id)arg2 cameraManager:(id)arg3 hintStore:(id)arg4 learnedLocationManager:(id)arg5 locationManager:(id)arg6 metricManager:(id)arg7 navigationManager:(id)arg8 reachabilityManager:(id)arg9 walletManager:(id)arg10;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
