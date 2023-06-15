//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSharingDeviceDiscovery : HMFObject
{
    SFDeviceDiscovery *_deviceDiscovery;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SFDeviceDiscovery *deviceDiscovery; // @synthesize deviceDiscovery=_deviceDiscovery;
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)start;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property(nonatomic) unsigned long long discoveryFlags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

