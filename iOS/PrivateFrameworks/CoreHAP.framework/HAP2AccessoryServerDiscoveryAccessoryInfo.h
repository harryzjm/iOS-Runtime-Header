//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPDeviceID, NSDictionary;

@interface HAP2AccessoryServerDiscoveryAccessoryInfo
{
    HAPDeviceID *_deviceID;
    NSDictionary *_rawDiscoveryInfo;
}

+ (id)new;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *rawDiscoveryInfo; // @synthesize rawDiscoveryInfo=_rawDiscoveryInfo;
@property(readonly, nonatomic) HAPDeviceID *deviceID; // @synthesize deviceID=_deviceID;
- (id)initWithDeviceID:(id)arg1 rawDiscoveryInfo:(id)arg2;
- (id)init;

@end
