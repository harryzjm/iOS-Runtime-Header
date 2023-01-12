//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMeasurement, NSString, NSTimer;
@protocol MNEVChargingStateMonitorDelegate;

__attribute__((visibility("hidden")))
@interface MNEVChargingStateMonitor : NSObject
{
    id <MNEVChargingStateMonitorDelegate> _delegate;
    _Bool _isCharging;
    _Bool _shouldShowChargingInfo;
    NSDate *_arrivalDate;
    NSTimer *_timer;
    NSMeasurement *_targetBatteryCharge;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MNEVChargingStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMeasurement *targetBatteryCharge; // @synthesize targetBatteryCharge=_targetBatteryCharge;
- (void)_updateForVehicle:(id)arg1 forceDelegateCallback:(_Bool)arg2;
- (void)virtualGarageManager:(id)arg1 didUpdateSelectedVehicle:(id)arg2;
- (void)_notifyShouldShowChargingInfo;
- (void)_startTimer;
- (void)updateForArrival;
- (void)updateForLocation:(id)arg1;
- (void)dealloc;
- (id)initWithTargetBatteryCharge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

