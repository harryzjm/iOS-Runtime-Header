//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WiFiPeerToPeer/NSObject-Protocol.h>

@class AWDLTrafficRegistrationConfiguration, NSArray, NSFileHandle, WiFiAwareDatapathConfiguration, WiFiAwarePublishConfiguration, WiFiAwareSubscribeConfiguration, WiFiMACAddress, WiFiP2PAWDLStateMonitorConfiguration;

@protocol WiFiP2PXPCProtocol <NSObject>
- (void)dump:(NSArray *)arg1 to:(NSFileHandle *)arg2 maximumDepth:(long long)arg3 completionHandler:(void (^)(long long))arg4;
- (void)startMonitoringAWDLStateWithConfiguration:(WiFiP2PAWDLStateMonitorConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)queryAirPlayConnectivityWithConfiguration:(AWDLTrafficRegistrationConfiguration *)arg1 completionHandler:(void (^)(NSNumber *))arg2;
- (void)queryAWDLState:(void (^)(WiFiP2PAWDLState *))arg1;
- (void)queryActiveServiceUniqueIdentifiersWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)queryAWDLLowLatencyStatisticsWithCompletionHandler:(void (^)(NSDictionary *))arg1;
- (void)queryAWDLStatisticsWithCompletionHandler:(void (^)(NSDictionary *))arg1;
- (void)queryPeersWithCompletionHandler:(void (^)(NSArray *))arg1;
- (void)queryAverageRSSIForAWDLPeer:(WiFiMACAddress *)arg1 completionHandler:(void (^)(int))arg2;
- (void)queryCurrentDeviceCapabilities:(void (^)(WiFiAwareDeviceCapabilities *))arg1;
- (void)createXPCResponderWithType:(unsigned long long)arg1 completionHandler:(void (^)(long long))arg2;
- (void)createDatapathWithConfiguration:(WiFiAwareDatapathConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)createPublishWithConfiguration:(WiFiAwarePublishConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
- (void)createSubscribeWithConfiguration:(WiFiAwareSubscribeConfiguration *)arg1 completionHandler:(void (^)(long long))arg2;
@end

