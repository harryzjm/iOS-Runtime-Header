//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface AACloudKitDevicesListResponse
{
    NSArray *_incompatibleDevices;
    NSArray *_needUpgradeDevices;
    NSArray *_incompatibleDeviceNames;
    NSArray *_needUpgradeDeviceNames;
}

@property(readonly, nonatomic) NSArray *needUpgradeDeviceNames; // @synthesize needUpgradeDeviceNames=_needUpgradeDeviceNames;
@property(readonly, nonatomic) NSArray *incompatibleDeviceNames; // @synthesize incompatibleDeviceNames=_incompatibleDeviceNames;
@property(readonly, nonatomic) NSArray *needUpgradeDevices; // @synthesize needUpgradeDevices=_needUpgradeDevices;
@property(readonly, nonatomic) NSArray *incompatibleDevices; // @synthesize incompatibleDevices=_incompatibleDevices;
- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
