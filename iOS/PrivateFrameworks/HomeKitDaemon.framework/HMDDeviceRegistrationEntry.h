//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSArray;

@interface HMDDeviceRegistrationEntry : HMFObject
{
    HMDDevice *_device;
    NSArray *_accessoryUUIDList;
}

@property(readonly, nonatomic) NSArray *accessoryUUIDList; // @synthesize accessoryUUIDList=_accessoryUUIDList;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDevice:(id)arg1 accessoryList:(id)arg2;

@end

