//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FindMyDevice/NSObject-Protocol.h>

@class FMDBluetoothDiscoveryXPCAdapterDevice, NSError;

@protocol FindMyDeviceBTDiscoveryDelegateXPCInterface <NSObject>
- (oneway void)didLoseDevice:(FMDBluetoothDiscoveryXPCAdapterDevice *)arg1;
- (oneway void)didDiscoverDevice:(FMDBluetoothDiscoveryXPCAdapterDevice *)arg1;
- (oneway void)didEndDiscoveryWithError:(NSError *)arg1;
@end

