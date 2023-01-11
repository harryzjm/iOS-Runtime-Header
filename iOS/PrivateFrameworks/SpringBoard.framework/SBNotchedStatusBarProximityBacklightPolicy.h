//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate-Protocol.h>
#import <SpringBoard/_SBProximityTouchHandlingDelegate-Protocol.h>

@class NSString, SBNotchedStatusBarProximityBacklightPolicyEnablementCondition, SBProximitySettings, _SBProximityTouchHandlingViewController, _SBProximityTouchHandlingWindow;

@interface SBNotchedStatusBarProximityBacklightPolicy <SBNotchedStatusBarProximityBacklightPolicyEnablementConditionDelegate, _SBProximityTouchHandlingDelegate>
{
    _Bool _objectInProximity;
    _SBProximityTouchHandlingWindow *_proxTouchHandlingWindow;
    _SBProximityTouchHandlingViewController *_proxTouchHandlingViewController;
    SBNotchedStatusBarProximityBacklightPolicyEnablementCondition *_enablementCondition;
    unsigned long long _timesEnabledWithObjectInProximity;
    unsigned long long _touchesReceivedWithObjectInProximity;
    SBProximitySettings *_lazy_proximitySettings;
}

- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setProximitySettings:) SBProximitySettings *_proximitySettings; // @synthesize _proximitySettings=_lazy_proximitySettings;
- (double)_debounceDurationForNumberOfTouchesReceivedWithObjectInProximity:(_Bool)arg1;
- (void)_setHandleTouchesIfNecessary:(_Bool)arg1;
- (void)condition:(id)arg1 enablementDidChange:(_Bool)arg2;
- (void)didHitAllowedRegion:(struct CGPoint)arg1;
- (void)proximitySensorManager:(id)arg1 objectWithinProximityDidChange:(_Bool)arg2;
- (id)_createNewEnablementCondition;
- (void)_scheduleBacklightFactorToZeroAfterDebounceDuration:(double)arg1;
- (void)dealloc;
- (id)initWithBacklightController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
