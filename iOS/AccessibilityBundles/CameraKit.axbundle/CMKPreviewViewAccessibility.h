//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CMKPreviewViewAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_axIsFocusLocked;
- (void)_accessibilityZoomIn:(_Bool)arg1;
- (_Bool)_accessibilityAllowsSiblingsWhenOvergrown;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_showFocusAtPoint:(struct CGPoint)arg1 startAnimating:(_Bool)arg2;
- (_Bool)isAccessibilityElement;
- (_Bool)_axShowingEffects;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityElements;
- (struct CGPoint)accessibilityActivationPoint;

@end
