//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CKMessageEntryViewAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)touchUpInsideSendButton:(id)arg1;
- (void)collapsedPlaceholderLabelTapped:(id)arg1;
- (void)browserButtonTapped:(id)arg1;
- (void)arrowButtonTapped:(id)arg1;
- (void)loadRecordedAudioViewsIfNeeded;
- (void)touchUpInsideDeleteAudioRecordingButton:(id)arg1;
- (void)audioReplyButtonCancel:(id)arg1;
- (void)audioReplyButtonStop:(id)arg1;
- (void)audioReplyButtonStart:(id)arg1;
- (void)updateEntryView;
- (void)presentAudioActionMenu;
- (void)configureAudioActionMenuControllerForPlayback:(_Bool)arg1;
- (void)audioMenuItemAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 marginInsets:(struct UIEdgeInsets)arg2 shouldAllowImpact:(_Bool)arg3 shouldShowSendButton:(_Bool)arg4 shouldShowSubject:(_Bool)arg5 shouldShowPluginButtons:(_Bool)arg6 shouldShowCharacterCount:(_Bool)arg7;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)layoutSubviews;
- (void)_accessibilityApplySelectedTraitToMediaButton;
- (void)_accessibilityApplyPlaceholderLabel;
- (void)_accessibilityApplyBrowserLabel;
- (void)_accessibilityApplyPhotoLabel;
- (void)_accessibilityApplyArrowLabel;
- (_Bool)accessibilityElementsHidden;
- (_Bool)accessibilityViewIsModal;
- (_Bool)_accessibilityIsMediaJoystickVisible;
- (_Bool)shouldGroupAccessibilityChildren;
- (_Bool)_accessibilityOnlyComparesByXAxis;

@end

