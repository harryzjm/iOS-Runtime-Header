//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSIndexPath, NSMutableArray, UITableViewCell;

@interface UITableViewCellAccessibilityElement : UIAccessibilityElement
{
    NSIndexPath *_indexPath;
    UITableViewCell *_tableViewCell;
    NSMutableArray *_mockChildren;
    _Bool _usingRealTableViewCell;
}

@property(nonatomic) _Bool usingRealTableViewCell; // @synthesize usingRealTableViewCell=_usingRealTableViewCell;
@property(retain, nonatomic) UITableViewCell *tableViewCell; // @synthesize tableViewCell=_tableViewCell;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityDragSourceDescriptors;
- (_Bool)_accessibilityRetainsCustomRotorActionSetting;
- (id)_privateAccessibilityCustomActions;
- (id)accessibilityCustomActions;
- (unsigned long long)_accessibilityScanningBehaviorTraits;
- (_Bool)_accessibilityShouldIncludeRowRangeInElementDescription;
- (_Bool)_accessibilityHasNativeFocus;
- (_Bool)_accessibilityViewHierarchyHasNativeFocus;
- (_Bool)_accessibilitySetNativeFocus;
- (id)_accessibilitySemanticContextForElement:(id)arg1;
- (id)_accessibilitySpeakThisString;
- (id)_accessibilityTableViewCellContentSubviews;
- (_Bool)_accessibilityIsSpeakThisElement;
- (long long)_accessibilityScannerActivateBehavior;
- (_Bool)_accessibilityIsScannerGroup;
- (_Bool)_accessibilityIsScannerElement;
- (_Bool)_allowCustomActionHintSpeakOverride;
- (id)_accessibilityAbsoluteValue;
- (_Bool)_accessibilityHasTextOperations;
- (void)_accessibilitySelectAll;
- (void)_accessibilityPaste;
- (_Bool)accessibilityPerformMagicTap;
- (_Bool)accessibilityPerformEscape;
- (_Bool)_accessibilityCanPerformEscapeAction;
- (void)_accessibilitySelect;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (void)_accessibilityCut;
- (void)_accessibilityCopy;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (_Bool)_accessibilityCanBecomeNativeFocused;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (_Bool)accessibilityScrollToVisibleWithChild:(id)arg1;
- (_Bool)_accessibilityIsOutsideParentBounds;
- (id)_accessibilityUserTestingVisibleAncestor;
- (_Bool)_accessibilityUserTestingIsPreferredButton;
- (_Bool)_accessibilityUserTestingIsDestructiveButton;
- (_Bool)_accessibilityUserTestingIsDefaultButton;
- (_Bool)_accessibilityUserTestingIsCancelButton;
- (id)_accessibilityUserTestingChildren;
- (id)description;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)_accessibilityEquivalenceTag;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (struct CGRect)_accessibilityChargedLineBoundsForRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint)arg1;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (_Bool)_accessibilitySupportsActivateAction;
- (_Bool)accessibilityActivate;
- (struct CGPoint)_accessibilityMaxScrubberPosition;
- (struct CGPoint)_accessibilityMinScrubberPosition;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (_Bool)isAccessibilityElement;
- (id)accessibilityLanguage;
- (struct CGRect)accessibilityFrame;
- (struct _NSRange)_accessibilityIndexPathAsRange;
- (_Bool)_accessibilityIsInTableCell;
- (struct _NSRange)accessibilityRowRange;
- (id)accessibilityHint;
- (_Bool)_accessibilityIsAwayAlertElement;
- (id)accessibilityHeaderElements;
- (struct CGPoint)accessibilityActivationPoint;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (id)accessibilityLocalizedStringTableName;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizedStringKey;
- (id)accessibilityLabel;
- (_Bool)_accessibilityIsTableCell;
- (void)unregisterMockChild:(id)arg1;
- (void)registerMockChild:(id)arg1;
- (void)unregisterAllChildren;
- (void)dealloc;
- (double)_accessibilityAllowedGeometryOverlap;
- (long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2;
- (_Bool)shouldGroupAccessibilityChildren;
- (long long)_accessibilityUserTestingChildrenCount;
@property(readonly, nonatomic) UITableViewCell *existingTableViewCell;
- (_Bool)_accessibilityBackingElementIsValid;
- (id)_accessibilityProxyView;
@property(readonly, nonatomic) UITableViewCell *realTableViewCell; // @dynamic realTableViewCell;

@end

