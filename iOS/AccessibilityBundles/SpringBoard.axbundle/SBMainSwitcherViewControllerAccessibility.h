//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBMainSwitcherViewControllerAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_axFloatingSwitcherIsVisible;
- (_Bool)_axIsMainSwitcherVisible;
- (id)_axMainSwitcherViewController;
- (void)_axSetUpSwitcherViewControllers;
- (void)_axSetUpWrapperViews;
- (void)_loadContentViewControllerIfNecessary;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_axNotifyNeedsFocusUpdateWhenEnabled:(unsigned long long)arg1;
- (void)switcherContentController:(id)arg1 deletedAppLayout:(id)arg2 forReason:(long long)arg3;

@end
