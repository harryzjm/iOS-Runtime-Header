//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UICalloutBarAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)updateAvailableButtons;
- (void)buttonPressed:(id)arg1;
- (_Bool)_updateVisibleItemsAnimated:(_Bool)arg1;
- (void)hide;
- (void)fade;
- (void)show;
- (void)appear;
- (void)_axCalloutBarDidAppearWithAnimation:(_Bool)arg1;
- (void)_axMoveToLastAccessibleSubviewAfterAnimation:(_Bool)arg1;
- (void)_axMoveToElement:(id)arg1;
- (_Bool)shouldGroupAccessibilityChildren;

@end

