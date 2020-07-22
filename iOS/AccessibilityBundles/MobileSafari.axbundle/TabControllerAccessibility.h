//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TabControllerAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_axTabBarItemViewForTabDocument:(id)arg1;
- (void)tabBar:(id)arg1 closeItem:(id)arg2;
- (void)tabBar:(id)arg1 activateItem:(id)arg2;
- (void)moveTabDocument:(id)arg1 overTabDocument:(id)arg2;
- (void)acceptDropWithTabDocument:(id)arg1;
- (id)insertDragInteractionPlaceholderTabDocumentForTabDocument:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_axSetDraggingTabDocument:(id)arg1;
- (id)_axDraggingTabDocument;
- (id)tiltedTabViewToolbarItems;
- (void)updateTiltedTabViewToolbarItems;
- (void)_accessibilityLoadAccessibilityInformation;

@end
