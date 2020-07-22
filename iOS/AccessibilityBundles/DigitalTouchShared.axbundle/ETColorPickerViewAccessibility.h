//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ETColorPickerViewAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilitySetCenterCircleHint;
- (void)layoutPaletteCircles;
- (void)showColorWheel;
- (void)_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collapsedFrame:(struct CGRect)arg2;
- (struct CGRect)accessibilityFrame;
- (_Bool)accessibilityPerformEscape;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)_accessibilityLoadAccessibilityInformation;

@end

