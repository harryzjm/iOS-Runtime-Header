//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TVRTouchpadViewAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilitySetIsDirectTouching:(_Bool)arg1;
- (_Bool)_accessibilityIsDirectTouching;
- (void)_accessibilityFocusChanged:(id)arg1;
- (id)_accessibilityPathInTouchpadViewForShape:(long long)arg1;
- (struct CGRect)_accessibilityFrameInTouchpadViewForShape:(long long)arg1;
- (double)_accessibilityPositionForShape:(long long)arg1 xAxis:(_Bool)arg2;
- (id)_accessibilitySwitchControlElements;
- (void)_accessibilityPerformTouchpadAction:(long long)arg1;
- (long long)accessibilityNavigationStyle;
- (id)accessibilityElements;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)accessibilityActivate;
- (_Bool)_accessibilitySupportsActivateAction;
- (_Bool)isAccessibilityElement;

@end
