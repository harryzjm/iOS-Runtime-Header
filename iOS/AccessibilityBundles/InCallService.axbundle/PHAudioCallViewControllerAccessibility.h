//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHAudioCallViewControllerAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)setMiddleViewState:(unsigned short)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_accessibilityBottomBarStoppedAnimating:(id)arg1;
- (void)setCurrentState:(unsigned short)arg1 animated:(_Bool)arg2;
- (void)_axSetPhoneToMiddleState:(unsigned short)arg1 totalTimeTried:(double)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)dealloc;
- (void)_accessibilitySubscribeForBottomBarNotificationsIfNecessary;
- (void)_accessibilitySetHasSubscribedToBottomBarNotifications:(_Bool)arg1;
- (_Bool)_accessibilityHasSubscribedForBottomBarNotifications;
- (void)_accessibilitySetWantsToShowKeypad:(_Bool)arg1;
- (_Bool)_accessibilityWantsToShowKeypad;
- (void)_accessibilitySetMiddleViewStateDepth:(long long)arg1;
- (long long)_accessibilityMiddleViewStateDepth;

@end
