//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SiriCoreWiFiManagerClient : NSObject
{
    int _rssi;
    int _snr;
}

- (void)registerOneShotEnabledHandler:(CDUnknownBlockType)arg1;
- (void)disableWiFiTimeout;
- (void)enableWiFiTimeout;
- (_Bool)isWifiEnabled;
- (_Bool)hasAssociatedNetworkWithRSSI:(int *)arg1 andSNR:(int *)arg2 andPhyMode:(id *)arg3 andChannelInfo:(id *)arg4;
- (void)dealloc;
- (id)init;

@end
