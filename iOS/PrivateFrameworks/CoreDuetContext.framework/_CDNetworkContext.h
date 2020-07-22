//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _CDNetworkContext : NSObject
{
}

+ (long long)cellUploadCost:(id)arg1;
+ (long long)cellDownloadCost:(id)arg1;
+ (_Bool)cellInterfaceUp:(id)arg1;
+ (_Bool)networkingAvailable:(id)arg1;
+ (_Bool)inexpensiveNetworkingAvailable:(id)arg1;
+ (long long)cellQuality:(id)arg1;
+ (long long)wifiQuality:(id)arg1;
+ (long long)wiredQuality:(id)arg1;
+ (long long)qualityForPath:(id)arg1 inContext:(id)arg2;
+ (id)predictionKey;
+ (id)loiKey;
+ (id)uploadPowerCostKey;
+ (id)downloadPowerCostKey;
+ (id)interfaceUpKey;
+ (id)connectionQualityKey;
+ (id)keyPathForCellConnectionStatus;
+ (id)keyPathForWiFiConnectionStatus;
+ (id)keyPathForWiredConnectionStatus;

@end
