//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SBIconControllerAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_axIconScrollView;
- (void)_axSetCurrentFolderScrollEnabled:(_Bool)arg1;
- (id)_axRecipientIconView;
- (id)_axGrabbedIcons;
- (id)_axGrabbedIconsLabel;
- (_Bool)_axIsIconDragging;
- (id)_axCurrentPageControl;
- (void)setIsEditing:(_Bool)arg1 withFeedbackBehavior:(id)arg2;
- (void)closeFolderAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2;
- (void)pushExpandedIcon:(id)arg1 location:(long long)arg2 withTransitionRequest:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (long long)_accessibilityIconListCount;
- (long long)_accessibilityIconListIndex;
- (_Bool)_accessibilityCloseOpenFolder;
- (void)_accessibilityMarkIconAsAnimating:(id)arg1;
- (void)_accessibilitySimpleMoveIconDropDidFinish:(id)arg1;
- (id)_axLabelForIcons:(id)arg1;
- (void)_accessibilityDropGrabbedIconsOnReceivingIconView:(id)arg1;
- (void)_accessibilityStatusChanged;
- (void)_accessibilityVoiceOverStatusChanged;
- (void)_accessibilitySwitchControlStatusChanged;
- (void)_accessibilityCancelSBAXIconMoveSpeakTimer;
- (_Bool)scrollToIconListAtIndex:(long long)arg1 animate:(_Bool)arg2;
- (id)init;
- (void)handleHomeButtonTap;

@end
