//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RPControlCenterModuleViewControllerAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setupRecordingButtonView;
- (void)_axApplyButtonTraits;
- (void)_axUpdateCell:(id)arg1;
- (void)transistionToCountdownStateFromCollapsedView:(_Bool)arg1 recording:(_Bool)arg2;
- (void)_axSpeakAndGo:(long long)arg1;
- (void)setIsCountingDown:(_Bool)arg1;
- (void)_axUpdateCells;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_setAXCountdownTimer:(id)arg1;
- (id)_axCountdownTimer;

@end
