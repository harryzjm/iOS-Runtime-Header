//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeparationAlerts/NSObject-Protocol.h>

@class CLLocation, CLRegion, NSArray, NSDictionary, NSUUID, SAService;

@protocol SAServiceClientProtocol <NSObject>

@optional
- (void)separationAlertsServiceFetchLastVisit:(SAService *)arg1;
- (void)separationAlertsServiceStopLongAggressiveScan:(SAService *)arg1;
- (void)separationAlertsServiceStopBackgroundScanning:(SAService *)arg1;
- (void)separationAlertsServiceStartBackgroundScanning:(SAService *)arg1;
- (void)separationAlertsService:(SAService *)arg1 cancelSATimeEventForAlarm:(NSUUID *)arg2;
- (void)separationAlertsService:(SAService *)arg1 scheduleSATimeEvent:(double)arg2 forAlarm:(NSUUID *)arg3;
- (void)separationAlertsService:(SAService *)arg1 requestStateForRegion:(CLRegion *)arg2;
- (void)separationAlertsService:(SAService *)arg1 removeGeofence:(CLRegion *)arg2;
- (void)separationAlertsService:(SAService *)arg1 addGeofence:(CLRegion *)arg2;
- (void)separationAlertsService:(SAService *)arg1 requestLocationForType:(unsigned long long)arg2;
- (void)separationAlertsService:(SAService *)arg1 requestBluetoothScanForTypes:(unsigned long long)arg2;
- (void)separationAlertsService:(SAService *)arg1 notifySeparationsForDevices:(NSArray *)arg2 withLocation:(CLLocation *)arg3 withContext:(NSDictionary *)arg4;
- (void)separationAlertsService:(SAService *)arg1 enableMonitoringForSeparations:(_Bool)arg2;
@end

