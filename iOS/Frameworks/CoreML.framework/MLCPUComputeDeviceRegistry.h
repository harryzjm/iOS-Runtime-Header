//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLCPUComputeDevice, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MLCPUComputeDeviceRegistry : NSObject
{
    MLCPUComputeDevice *_cpuDevice;
}

+ (id)sharedRegistry;
- (void).cxx_destruct;
@property(readonly, nonatomic) MLCPUComputeDevice *cpuDevice; // @synthesize cpuDevice=_cpuDevice;
@property(readonly, copy, nonatomic) NSArray *registeredAndAccessibleComputeDevices;
@property(readonly, copy, nonatomic) NSArray *registeredComputeDevices;
- (id)initWithCpuDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

