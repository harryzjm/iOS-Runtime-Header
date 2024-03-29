//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIView, _UIFocusEnvironmentContainerTuple;
@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusRegionContainerProxy : NSObject
{
    _Bool _allowsLazyLoading;
    _Bool _shouldCreateRegionForOwningItem;
    _Bool _shouldCreateRegionForGuideBehavior;
    _UIFocusEnvironmentContainerTuple *_environmentContainer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIFocusEnvironmentContainerTuple *environmentContainer; // @synthesize environmentContainer=_environmentContainer;
@property(nonatomic) _Bool shouldCreateRegionForGuideBehavior; // @synthesize shouldCreateRegionForGuideBehavior=_shouldCreateRegionForGuideBehavior;
@property(nonatomic) _Bool shouldCreateRegionForOwningItem; // @synthesize shouldCreateRegionForOwningItem=_shouldCreateRegionForOwningItem;
@property(nonatomic) _Bool allowsLazyLoading; // @synthesize allowsLazyLoading=_allowsLazyLoading;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)_preferredFocusRegionCoordinateSpace;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)_itemContainer;
- (id)_owningEnvironment;
- (id)initWithEnvironmentContainer:(id)arg1;
- (id)initWithOwningEnvironment:(id)arg1 itemContainer:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool areChildrenFocused;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=_isEligibleForFocusInteraction) _Bool eligibleForFocusInteraction;
@property(readonly, nonatomic, getter=_isEligibleForFocusOcclusion) _Bool eligibleForFocusOcclusion;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property(readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

