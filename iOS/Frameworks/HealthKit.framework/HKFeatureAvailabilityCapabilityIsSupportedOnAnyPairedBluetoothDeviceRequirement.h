//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityCapabilityIsSupportedOnAnyPairedBluetoothDeviceRequirement
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;
- (_Bool)capabilityIsSupportedOnPairedBluetoothDevice:(id)arg1;
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *requirementDescription;
@property(readonly) Class superclass;

@end

