//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIFocusItemContainer-Protocol.h"

@class NSArray, NSString, UIFocusEffect, UIView;
@protocol UICoordinateSpace, UIFocusEnvironment, UIFocusItemContainer;

@interface CompactMonthWeekDayNumberAccessibility <UIFocusItemContainer>
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (_Bool)_accessibilityIsSpeakThisElement;
- (id)accessibilityValue;
- (id)_axStringForNumberOfEvents:(unsigned long long)arg1;
- (id)_axEventStore;
- (id)_axCalendarModel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)accessibilityUserInputLabels;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;
- (_Bool)isAccessibilityElement;
- (_Bool)conformsToProtocol:(id)arg1;
@property(readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
- (id)focusItemsInRect:(struct CGRect)arg1;
- (id)_preferredFocusRegionCoordinateSpace;
- (void)_searchForFocusRegionsInContext:(id)arg1;
@property(readonly, nonatomic) _Bool canBecomeFocused;
- (void)_updateFocusLayerFrame;
- (void)_destroyFocusLayer;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(nonatomic) _Bool areChildrenFocused;
- (void)_axSetAreChildrenFocused:(_Bool)arg1;
- (_Bool)_axAreChildrenFocused;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
@property(readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property(readonly, nonatomic) long long focusGroupPriority;
@property(readonly, nonatomic) struct CGRect frame; // @dynamic frame;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransparentFocusItem;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

