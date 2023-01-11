//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ETCanvasViewAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityFocusChanged:(id)arg1;
- (void)_accessibilityInvalidateDirectTouchTimerAndReschedule:(_Bool)arg1;
- (void)_checkForIdle;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_endMessage:(id)arg1 withSend:(_Bool)arg2;
- (void)_setIsComposingMessageOfType:(unsigned short)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (_Bool)_accessibilityServesAsFirstElement;
- (_Bool)accessibilityElementsHidden;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityActivate;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_accessibilitySetDisableDirectTouchTimer:(id)arg1;
- (id)_accessibilityDisableDirectTouchTimer;
- (void)_accessibilitySetIsDirectTouching:(_Bool)arg1;
- (_Bool)_accessibilityIsDirectTouching;

@end
