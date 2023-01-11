//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@protocol PRNearbyDeviceMonitorServerProtocol
- (void)_pingRadioWithHandler:(void (^)(long long))arg1;
- (void)_stopAggressiveScanning;
- (void)_startAggressiveScanning;
- (void)_stopMonitoringForDevices:(NSArray *)arg1;
- (void)_startMonitoringForDevices:(NSArray *)arg1 withPayload:(NSData *)arg2 payloadMask:(NSData *)arg3 packetType:(long long)arg4;
- (void)_reconnect;
@end
