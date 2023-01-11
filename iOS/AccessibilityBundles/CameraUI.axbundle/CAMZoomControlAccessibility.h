//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CAMZoomControlAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (double)_axRoundedZoomFactor:(double)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_setAXZoomFactor:(double)arg1;
- (double)_axZoomFactor;
- (_Bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)_axSetZoomFactorForDisplayValue:(double)arg1;
- (double)_axMinimumZoomFactor;
- (double)_axMaximumZoomFactor;
- (double)_axDisplayZoomValue;

@end

