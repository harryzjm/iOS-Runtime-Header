//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class CLRegion, NSArray, NSError;
@protocol HMDCLLocationManager;

@protocol HMDCLLocationManagerDelegate <NSObject>
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didStartMonitoringForRegion:(CLRegion *)arg2;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didExitRegion:(CLRegion *)arg2;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didEnterRegion:(CLRegion *)arg2;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didDetermineState:(long long)arg2 forRegion:(CLRegion *)arg3;
- (void)locationManagerDidChangeAuthorization:(id <HMDCLLocationManager>)arg1;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didFailWithError:(NSError *)arg2;
- (void)locationManager:(id <HMDCLLocationManager>)arg1 didUpdateLocations:(NSArray *)arg2;
@end

