//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIDragMovementCadenceSettings : NSObject
{
    double _velocityMagnitudeThreshold;
    double _dwellTimeThreshold;
}

+ (id)defaultSettingsForMovementPhase:(long long)arg1 cadence:(long long)arg2;
@property(nonatomic) double dwellTimeThreshold; // @synthesize dwellTimeThreshold=_dwellTimeThreshold;
@property(nonatomic) double velocityMagnitudeThreshold; // @synthesize velocityMagnitudeThreshold=_velocityMagnitudeThreshold;
- (void)_applyImmediateSettings;
- (void)_applyInteractiveReorderSubsequentPhaseDefaultsForCadence:(long long)arg1;
- (void)_applyInteractiveReorderInitialPhaseDefaultsForCadence:(long long)arg1;
- (void)_applyDragPlaceholderSubsequentPhaseDefaultsForCadence:(long long)arg1;
- (void)_applyDragPlaceholderInitialPhaseDefaultsForCadence:(long long)arg1;
- (id)initWithVelocityMagnitudeThreshold:(double)arg1 dwellTimeThreshold:(double)arg2;
- (id)initWithMovementPhase:(long long)arg1 cadence:(long long)arg2;

@end

