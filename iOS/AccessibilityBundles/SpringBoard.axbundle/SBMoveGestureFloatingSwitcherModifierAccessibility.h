//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBMoveGestureFloatingSwitcherModifierAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (long long)_axFloatingConfigurationForGestureEvent:(id)arg1 withZeroVelocity:(_Bool)arg2;
- (long long)_axInitialFloatingConfiguration;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (void)_axSetFinishedFloatingConfiguration:(long long)arg1;
- (long long)_axGetFinishedFloatingConfiguration;
- (void)_axSetCurrentFloatingConfiguration:(long long)arg1;
- (long long)_axGetCurrentFloatingConfiguration;

@end
