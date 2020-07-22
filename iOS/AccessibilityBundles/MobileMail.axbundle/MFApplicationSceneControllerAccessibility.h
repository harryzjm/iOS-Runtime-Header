//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MFApplicationSceneControllerAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityUpdateDraftLabelForBorrowedView:(id)arg1 withActorAtIndex:(long long)arg2;
- (id)tiltedTabView:(id)arg1 snapshotViewForItemAtIndex:(unsigned long long)arg2;
- (id)tiltedTabView:(id)arg1 contentViewForItemAtIndex:(unsigned long long)arg2;
- (void)tiltedTabViewDidDismiss:(id)arg1;
- (void)tiltedTabViewDidPresent:(id)arg1;
- (void)_axPrepareActorLabel:(id)arg1 index:(long long)arg2;
- (void)_accessibilityUpdateDraftElements;
- (id)_actorItemForActorViewController:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)_setActiveActorItem:(id)arg1 animated:(_Bool)arg2;
- (void)dismissViewController:(struct UIViewController *)arg1 animated:(_Bool)arg2 options:(id)arg3;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2 options:(id)arg3;
- (id)_accessibilitySpeakThisViewController;
- (void)_accessibilitySetMailPresentedViewController:(id)arg1;
- (id)_accessibilityMailPresentedViewController;
- (id)_accessibilityPrimaryViewController;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

