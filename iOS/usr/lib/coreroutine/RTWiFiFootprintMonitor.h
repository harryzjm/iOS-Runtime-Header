//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, RTPersistentTimer, RTWiFiManager;

@interface RTWiFiFootprintMonitor
{
    long long _footprintState;
    RTPersistentTimer *_scanTimer;
    NSMutableArray *_scanResults;
    RTWiFiManager *_wifiManager;
}

+ (id)footprintStateToString:(long long)arg1;
@property(retain, nonatomic) RTWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(retain, nonatomic) NSMutableArray *scanResults; // @synthesize scanResults=_scanResults;
@property(retain, nonatomic) RTPersistentTimer *scanTimer; // @synthesize scanTimer=_scanTimer;
@property(nonatomic) long long footprintState; // @synthesize footprintState=_footprintState;
- (void).cxx_destruct;
- (void)_pruneScanResults;
- (void)_processScanResults:(id)arg1;
- (void)_checkFootprint;
- (long long)_footprintStateForScanResults:(id)arg1;
- (void)fetchConstantFootprintStatusForScanResults:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_handlePowerStatusChanged:(unsigned long long)arg1;
- (void)onWiFiManagerNotificationPowerStatusChanged:(id)arg1;
- (void)onWiFiManagerNotificationScanResults:(id)arg1;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)_shutdown;
- (void)_stop;
- (void)_start;
- (id)initWithWiFiManager:(id)arg1;
- (id)init;

@end

