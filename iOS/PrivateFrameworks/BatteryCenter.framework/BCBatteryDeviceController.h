//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BatteryCenter/BCBatteryDeviceObservable-Protocol.h>

@class NSArray, NSString;

@interface BCBatteryDeviceController : NSObject <BCBatteryDeviceObservable>
{
}

+ (id)_sharedPowerSourceController;
+ (id)sharedInstance;
- (void)removeBatteryDeviceObserver:(id)arg1;
- (void)addBatteryDeviceObserver:(id)arg1 queue:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *connectedDevices;
- (id)init;
- (void)connectedDevicesWithResult:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
