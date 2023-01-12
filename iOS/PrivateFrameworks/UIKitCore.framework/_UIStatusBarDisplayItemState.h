//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, _UIStatusBar, _UIStatusBarAnimation, _UIStatusBarDisplayItem, _UIStatusBarDisplayItemPlacementState, _UIStatusBarIdentifier, _UIStatusBarItem, _UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemState : NSObject
{
    _Bool _wasEnabled;
    _Bool _wasVisible;
    _Bool _dataEnabled;
    _Bool _floating;
    _UIStatusBarDisplayItem *_displayItem;
    _UIStatusBarIdentifier *_identifier;
    _UIStatusBar *_statusBar;
    _UIStatusBarItem *_item;
    NSMutableArray *_placementStates;
    long long _preferredPlacementStateIndex;
    long long _currentPlacementStateIndex;
    _UIStatusBarStyleAttributes *_overriddenStyleAttributes;
    long long _previousPlacementStateIndex;
    long long _dataUpdateStatus;
    long long _placementUpdateStatus;
    long long _enabilityStatus;
    long long _visibilityStatus;
    _UIStatusBarAnimation *_addingAnimation;
    _UIStatusBarAnimation *_removingAnimation;
    NSMutableSet *_animations;
}

+ (void)setupRelationsBetweenDisplayItemStates:(id)arg1 visualProvider:(id)arg2;
+ (id)stateForDisplayItemWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *animations; // @synthesize animations=_animations;
@property(retain, nonatomic) _UIStatusBarAnimation *removingAnimation; // @synthesize removingAnimation=_removingAnimation;
@property(retain, nonatomic) _UIStatusBarAnimation *addingAnimation; // @synthesize addingAnimation=_addingAnimation;
@property(nonatomic) long long visibilityStatus; // @synthesize visibilityStatus=_visibilityStatus;
@property(nonatomic) long long enabilityStatus; // @synthesize enabilityStatus=_enabilityStatus;
@property(nonatomic) _Bool floating; // @synthesize floating=_floating;
@property(nonatomic) _Bool dataEnabled; // @synthesize dataEnabled=_dataEnabled;
@property(nonatomic) long long placementUpdateStatus; // @synthesize placementUpdateStatus=_placementUpdateStatus;
@property(nonatomic) long long dataUpdateStatus; // @synthesize dataUpdateStatus=_dataUpdateStatus;
@property(nonatomic) long long previousPlacementStateIndex; // @synthesize previousPlacementStateIndex=_previousPlacementStateIndex;
@property(nonatomic) _Bool wasVisible; // @synthesize wasVisible=_wasVisible;
@property(nonatomic) _Bool wasEnabled; // @synthesize wasEnabled=_wasEnabled;
@property(retain, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes; // @synthesize overriddenStyleAttributes=_overriddenStyleAttributes;
@property(nonatomic) long long currentPlacementStateIndex; // @synthesize currentPlacementStateIndex=_currentPlacementStateIndex;
@property(nonatomic) long long preferredPlacementStateIndex; // @synthesize preferredPlacementStateIndex=_preferredPlacementStateIndex;
@property(retain, nonatomic) NSMutableArray *placementStates; // @synthesize placementStates=_placementStates;
@property(nonatomic) __weak _UIStatusBarItem *item; // @synthesize item=_item;
@property(nonatomic) __weak _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
@property(copy, nonatomic) _UIStatusBarIdentifier *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak _UIStatusBarDisplayItem *displayItem; // @synthesize displayItem=_displayItem;
- (id)description;
@property(readonly, nonatomic) long long priority;
@property(readonly, copy, nonatomic) NSArray *potentialPlacementRegionIdentifiers;
- (_Bool)isCurrentPlacement:(id)arg1;
- (_Bool)prepareAnimation:(id)arg1;
- (id)_animationWithUpdateAnimation:(id)arg1;
- (void)_cancelObsoleteAnimations;
@property(readonly, nonatomic, getter=_animationType) long long animationType;
- (id)_effectiveStyleAttributesFromStyleAttributes:(id)arg1 data:(id)arg2 styleAttributesChanged:(_Bool *)arg3;
- (id)_updateForUpdatedData:(id)arg1 updatedStyleAttributes:(id)arg2 updatedEnability:(id)arg3;
- (id)_updateForItem:(id)arg1 data:(id)arg2 styleAttributes:(id)arg3;
- (id)updateWithData:(id)arg1 styleAttributes:(id)arg2;
- (_Bool)updatePlacement;
- (void)resetToPreferredPlacement;
- (_Bool)_updatePlacementWithRecursionBlock:(CDUnknownBlockType)arg1;
- (_Bool)_resolveDependentItemStatesWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateStatuses;
- (void)prepareForDataUpdate;
- (void)prepareForOverflowDataUpdate;
- (id)placementStateForPlacement:(id)arg1;
- (void)addPlacement:(id)arg1 inRegion:(id)arg2;
- (_Bool)_updateToNextPlacementStateIfNeeded;
- (void)updateToNextEnabledPlacement;
@property(readonly, nonatomic) _UIStatusBarDisplayItemPlacementState *currentPlacementState;
- (_Bool)hasRunningAnimations;
@property(readonly, nonatomic, getter=isEnabledIgnoringAnimations) _Bool enabledIgnoringAnimations;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;

@end

