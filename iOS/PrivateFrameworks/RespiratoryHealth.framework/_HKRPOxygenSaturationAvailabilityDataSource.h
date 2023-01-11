//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RespiratoryHealth/HKRPOxygenSaturationAvailabilityDataSource-Protocol.h>

@class NRDevice, NSString;

__attribute__((visibility("hidden")))
@interface _HKRPOxygenSaturationAvailabilityDataSource : NSObject <HKRPOxygenSaturationAvailabilityDataSource>
{
    NRDevice *_device;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool deviceIsSupported;
@property(readonly, nonatomic) _Bool skipHardwareCheck;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
