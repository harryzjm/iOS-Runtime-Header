//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIFluidSliderDiscreteButtonDriver.h"

@class NSString, UIView, _UIPhysicalButtonInteraction;
@protocol _UIFluidSliderDrivable;

__attribute__((visibility("hidden")))
@interface _UIFluidSliderDiscreteVolumeButtonDriver : _UIFluidSliderDiscreteButtonDriver
{
    _UIPhysicalButtonInteraction *_physicalButtonInteraction;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _UIPhysicalButtonInteraction *physicalButtonInteraction; // @synthesize physicalButtonInteraction=_physicalButtonInteraction;
- (void)_physicalButtonInteraction:(id)arg1 handleAction:(id)arg2 withActiveActions:(id)arg3;
@property(readonly, nonatomic) NSString *name;
- (void)cancel;
@property(nonatomic) _Bool enabled;
@property(nonatomic) __weak UIView *view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <_UIFluidSliderDrivable> drivable;
@property(readonly) unsigned long long hash;
@property(nonatomic) double stretchAmount;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long trackAxis;
@property(nonatomic) double trackLength;

@end

