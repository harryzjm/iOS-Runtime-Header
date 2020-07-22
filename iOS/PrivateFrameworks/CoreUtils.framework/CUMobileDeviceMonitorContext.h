//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CUMobileDevice, CUMobileDeviceDiscovery;

__attribute__((visibility("hidden")))
@interface CUMobileDeviceMonitorContext : NSObject
{
    CUMobileDevice *_device;
    CUMobileDeviceDiscovery *_discovery;
}

@property(retain, nonatomic) CUMobileDeviceDiscovery *discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) CUMobileDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;

@end

