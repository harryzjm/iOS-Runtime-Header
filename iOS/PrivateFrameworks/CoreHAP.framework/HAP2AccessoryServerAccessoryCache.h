//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAP2LoggingObject.h"

@class HAPBLEPeripheralInfo, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerAccessoryCache : HAP2LoggingObject
{
    HAPBLEPeripheralInfo *_peripheralInfo;
    NSDictionary *_accessoryCache;
    NSNumber *_sleepInterval;
    NSNumber *_metadataVersion;
}

+ (_Bool)supportsSecureCoding;
+ (id)accessoryCacheForAccessories:(id)arg1;
+ (id)peripheralInfoFromMetadata:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(retain, nonatomic) NSNumber *sleepInterval; // @synthesize sleepInterval=_sleepInterval;
@property(retain, nonatomic) NSDictionary *accessoryCache; // @synthesize accessoryCache=_accessoryCache;
@property(retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo; // @synthesize peripheralInfo=_peripheralInfo;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)invalidateAccessoryCache;
- (void)updateWithMetadata:(id)arg1 discoveredAccessories:(id)arg2;
- (id)initWithMetadata:(id)arg1 discoveredAccessories:(id)arg2 sleepInterval:(id)arg3;
- (id)initWithBLEPeripheralInfo:(id)arg1 cachedAccessories:(id)arg2 sleepInterval:(id)arg3 metadataVersion:(id)arg4;

@end

