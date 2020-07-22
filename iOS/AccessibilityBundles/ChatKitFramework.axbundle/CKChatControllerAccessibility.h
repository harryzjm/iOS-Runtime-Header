//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CKChatControllerAccessibility
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (unsigned long long)_axLayoutIntentForTarget:(id)arg1 inBalloonView:(id)arg2;
- (id)_axDescriptionForMessageEffectIdentifier:(id)arg1;
- (void)sendSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)dragManagerDidEndDragging:(id)arg1;
- (void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
- (void)dragManagerDidBeginDragging:(id)arg1;
- (void)_axSetCurrentLayoutIntent:(long long)arg1;
- (long long)_axCurrentLayoutIntent;
- (void)_axSetCurrentTargetBalloonView:(id)arg1;
- (id)_axCurrentTargetBalloonView;
- (void)setEffectPickerWindow:(id)arg1;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1;
- (id)_actionsToolbar;
- (void)_showVCalViewerForMediaObject:(id)arg1;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (_Bool)accessibilityPerformEscape;

@end

