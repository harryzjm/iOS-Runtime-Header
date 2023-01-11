//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MessagesViewControllerAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)updateEditButtonVisibilityForceHide:(_Bool)arg1;
- (void)dismissLaunchScreenIfNecessaryForPresentationStyle:(unsigned long long)arg1 controller:(id)arg2;
- (void)willTransitionToPresentationStyle:(unsigned long long)arg1;
- (void)hideUserInfoLabelWithDuration:(double)arg1;
- (void)showUserInfoLabelWithText:(id)arg1;
- (void)_setAXLastUserInfoString:(id)arg1;
- (id)_axLastUserInfoString;
- (void)recordingDidFinish:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleRecordTap:(id)arg1;
- (void)viewDidLoad;
- (void)_accessibilityUpdateCollectionViewAccessibilityForPresentationStyle:(unsigned long long)arg1;
- (void)_accessibilityUpdateRecordButtonLabel;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_setAXAvatarCarousel:(id)arg1;
- (id)_axAvatarCarousel;
- (void)_setAXLiveCell:(id)arg1;
- (id)_axLiveCell;

@end
