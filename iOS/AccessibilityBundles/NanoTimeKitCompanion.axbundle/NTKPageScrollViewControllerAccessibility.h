//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NTKPageScrollViewControllerAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_axDataSource;
- (void)_axAnnotateScrollView;
- (id)_axScrollView;
- (id)initWithScrollOrientation:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_accessibilityCustomActionsForPageView:(id)arg1;
- (id)_accessibilityHintForPageView:(id)arg1;
- (id)_accessibilityLabelForPageView:(id)arg1;
- (id)_accessibilityValueForPageView:(id)arg1;
- (unsigned long long)_axPageIndexForPageView:(id)arg1;
- (_Bool)_accessibilityShouldSwipeBetweenPages;
- (id)_accessibilityTouchContainerLabel;
- (void)_accessibilityLoadAccessibilityInformation;

@end

