//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDDevice, HMDDeviceHandle;

__attribute__((visibility("hidden")))
@interface HMDRemoteDeviceMessageDestination
{
    HMDDevice *_device;
    HMDDeviceHandle *_preferredHandle;
}

+ (id)shortDescription;
- (void).cxx_destruct;
@property(copy, nonatomic) HMDDeviceHandle *preferredHandle; // @synthesize preferredHandle=_preferredHandle;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (id)remoteDestinationString;
- (id)privateDescription;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1 device:(id)arg2;
- (id)initWithTarget:(id)arg1;

@end

