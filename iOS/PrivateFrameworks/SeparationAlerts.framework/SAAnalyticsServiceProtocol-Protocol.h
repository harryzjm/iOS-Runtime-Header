//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeparationAlerts/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol SAAnalyticsServiceProtocol <NSObject>
- (void)addDidSeparateWhileInVisit:(_Bool)arg1 didRejoinPriorExit:(_Bool)arg2;
- (void)addPreArrivalAlertTime:(double)arg1 didRejoinPriorExit:(_Bool)arg2;
- (void)setInTravelState:(_Bool)arg1;
- (void)setActiveState:(_Bool)arg1;
- (void)setInUnsafeLocationState:(_Bool)arg1;
- (void)setInSafeLocationState:(_Bool)arg1;
- (void)addVisit:(_Bool)arg1 withRadius:(unsigned long long)arg2;
- (void)addNumDevicesWithYou:(unsigned long long)arg1;
- (void)addScanDurationForFindingRelevantItemsOnly:(double)arg1;
- (void)addScanDuration:(double)arg1;
- (void)addWakeTimerRequest;
- (void)addWifiLocationRequest:(_Bool)arg1;
- (void)addGpsLocationRequest:(_Bool)arg1;
- (void)addAggressiveScanRequest:(_Bool)arg1;
- (void)addSafeLocationFetchResultCount:(unsigned long long)arg1;
- (void)addDeviceFetchResultCount:(unsigned long long)arg1 type1count:(unsigned long long)arg2 type2count:(unsigned long long)arg3 type3count:(unsigned long long)arg4 type4count:(unsigned long long)arg5 type5count:(unsigned long long)arg6 type6count:(unsigned long long)arg7 type7count:(unsigned long long)arg8 safeCount:(unsigned long long)arg9 usingSameSafe:(_Bool)arg10;
- (void)addAlertWithContext:(NSDictionary *)arg1;
- (void)resetAggregation;
- (void)publishAndResetAggregation;
- (void)submitEvent:(NSString *)arg1 content:(NSDictionary *)arg2;
@end

