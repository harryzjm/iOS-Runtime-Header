//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusBehavior-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIFocusBehavior_IOS : NSObject <_UIFocusBehavior>
{
}

+ (_Bool)featureFlagEnabled;
+ (id)sharedInstance;
- (_Bool)supportsLinearMovementDebugOverlay;
- (_Bool)tabBasedMovementLoops;
- (long long)skipKeyCommandsForKeyEvents;
- (long long)deliverKeyEventsToFocusEngine;
- (_Bool)shouldSupressIndirectMovementOnSelect;
- (_Bool)shouldEnableFocusOnSelect;
- (_Bool)supportsTabKey;
- (_Bool)supportsArrowKeys;
- (_Bool)supportsGameControllers;
- (_Bool)shouldConvertIndirectTapsIntoArrowKeys;
- (_Bool)supportsIndirectPanningMovement;
- (_Bool)showsFocusRingForItem:(id)arg1;
- (_Bool)supportsParentFocusRings;
- (long long)focusRingVisibility;
- (long long)buttonSelectionMode;
- (_Bool)wantsTreeLocking;
- (_Bool)throttlesProgrammaticFocusUpdates;
- (long long)focusCastingMode;
- (_Bool)supportsClipToBounds;
- (_Bool)supportViewTransparencyAndMultipleWindows;
- (_Bool)treatFocusableItemAsLeaf;
- (_Bool)treatFirstAndLastHeadingsAsGlobal;
- (_Bool)defaultValueForSelectionFollowsFocusInTableView:(id)arg1;
- (_Bool)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg1;
- (_Bool)preventsCellFocusabilityWhileEditing;
- (long long)cellFocusability;
- (_Bool)shouldUseAccessibilityCompareForItemGeometry;
- (_Bool)enforcesStrictTargetContentOffsetAdjustmentBehavior;
- (_Bool)supportsFocusGroups;
- (long long)indirectMovementPriority;
- (_Bool)includesContentScrollViewInPreferredFocusEnvironments;
- (_Bool)searchBarTextFieldCanBecomeFocused;
- (_Bool)tabBarButtonCanBecomeFocused;
- (_Bool)tabBarCanBecomeFocused;
- (_Bool)textViewCanBecomeFocused:(id)arg1;
- (_Bool)controlCanBecomeFocused:(id)arg1;
- (_Bool)ignoresKeyWindowStatusWhenRestoringFocus;
- (long long)focusDeferral;
- (_Bool)syncsFocusAndResponder;
- (long long)requiredInputDevices;
- (_Bool)honorsFocusSystemEnabledInfoPlistKey;
- (_Bool)wantsFocusSystemForScene:(id)arg1;
- (_Bool)_shouldOverrideFocusSystemEnabledForScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
