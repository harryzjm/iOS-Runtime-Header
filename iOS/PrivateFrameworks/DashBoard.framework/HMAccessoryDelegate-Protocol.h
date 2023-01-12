//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class HMAccessory, HMAccessoryProfile, HMCharacteristic, HMService, NSString;

@protocol HMAccessoryDelegate <NSObject>

@optional
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareVersion:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 service:(HMService *)arg2 didUpdateValueForCharacteristic:(HMCharacteristic *)arg3;
- (void)accessoryDidUpdateReachability:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didRemoveProfile:(HMAccessoryProfile *)arg2;
- (void)accessory:(HMAccessory *)arg1 didAddProfile:(HMAccessoryProfile *)arg2;
- (void)accessoryDidUpdateServices:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateAssociatedServiceTypeForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateNameForService:(HMService *)arg2;
- (void)accessoryDidUpdateName:(HMAccessory *)arg1;
@end

