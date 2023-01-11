//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SiriCoreWiFiManagerClient : NSObject
{
    long long _rssi;
    long long _snr;
}

- (void)registerOneShotEnabledHandler:(CDUnknownBlockType)arg1;
- (void)acquireWiFiAssertion:(long long)arg1;
- (void)releaseWiFiAssertion;
- (_Bool)isWifiEnabled;
- (_Bool)hasAssociatedNetworkWithRSSI:(long long *)arg1 andSNR:(long long *)arg2 andPhyMode:(id *)arg3 andChannelInfo:(id *)arg4 isCaptive:(_Bool *)arg5;
- (void)dealloc;
- (id)init;

@end
