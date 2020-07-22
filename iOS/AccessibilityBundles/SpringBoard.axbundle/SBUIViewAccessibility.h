//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBUIViewAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)actionsForFloatingAppNubView;
- (id)actionsForPinnedAppNubView;
- (id)actionsForSideAppDivider;
- (id)accessibilityCustomActions;
- (void)_axAddCustomActionWithName:(id)arg1 gesture:(unsigned long long)arg2 toArray:(id)arg3;
- (_Bool)_axPerformGestureForAction:(id)arg1;
- (_Bool)_accessibilitySupportsActivateAction;
- (_Bool)_accessibilityPointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_accessibilityOverridesInvalidFrames;
- (_Bool)accessibilityPerformEscape;
- (_Bool)_accessibilityUIViewCanPerformEscapeAction;
- (_Bool)accessibilityActivate;
- (id)accessibilityHint;

@end

