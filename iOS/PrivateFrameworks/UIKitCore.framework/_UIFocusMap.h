//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIFocusSystem, _UIFocusGroupMap, _UIFocusMapSearchInfo, _UIFocusSearchInfo;
@protocol UICoordinateSpace, _UIFocusRegionContainer;

__attribute__((visibility("hidden")))
@interface _UIFocusMap : NSObject
{
    _Bool _minimumSearchAreaIsEmpty;
    _Bool _trackingSearchInfo;
    _Bool _needsSearchInfo;
    _Bool _ignoresRootContainerClippingRect;
    UIFocusSystem *_focusSystem;
    id <_UIFocusRegionContainer> _rootContainer;
    id <UICoordinateSpace> _coordinateSpace;
    _UIFocusGroupMap *_focusGroupMap;
    _UIFocusSearchInfo *_searchInfo;
    _UIFocusMapSearchInfo *_defaultItemSearchInfo;
    _UIFocusMapSearchInfo *_focusMovementSearchInfo;
    struct CGRect _minimumSearchArea;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_focusMovementSearchContext) _UIFocusMapSearchInfo *focusMovementSearchInfo; // @synthesize focusMovementSearchInfo=_focusMovementSearchInfo;
@property(readonly, nonatomic, getter=_defaultItemSearchContext) _UIFocusMapSearchInfo *defaultItemSearchInfo; // @synthesize defaultItemSearchInfo=_defaultItemSearchInfo;
@property(nonatomic) struct CGRect minimumSearchArea; // @synthesize minimumSearchArea=_minimumSearchArea;
@property(readonly, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(readonly, nonatomic) _UIFocusGroupMap *focusGroupMap; // @synthesize focusGroupMap=_focusGroupMap;
@property(readonly, nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
@property(readonly, nonatomic) __weak id <_UIFocusRegionContainer> rootContainer; // @synthesize rootContainer=_rootContainer;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
- (void)diagnoseFocusabilityForItem:(id)arg1 report:(id)arg2;
- (void)_trackExternalSnapshot:(id)arg1;
- (void)_beginTrackingFocusMovementSearchInfoIfNecessary;
- (void)_beginTrackingDefaultItemSearchInfoIfNecessary;
- (id)_stopTrackingSearches;
- (void)_beginTrackingSearches;
- (_Bool)verifyFocusabilityForItem:(id)arg1;
- (id)_linearlySortedFocusItemsForItems:(id)arg1 groupFilter:(long long)arg2 itemStandInMap:(id)arg3;
- (id)_findAllDefaultFocusableRegionsWithSnapshotter:(id)arg1;
- (id)_closestFocusableItemToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 excludingItems:(id)arg3 distanceMeasuringUnitPoint:(struct CGPoint)arg4;
- (id)_allDefaultFocusableRegionsInContainer:(id)arg1 intersectingRegion:(id)arg2;
- (id)_nextFocusedItemForLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;
- (id)_nextFocusedItemForNonLinearFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 withSnapshot:(id)arg4;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inRegions:(id)arg2 withSnapshot:(id)arg3;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 startingFromRegion:(id)arg2;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1;
- (id)_inferredDefaultFocusItemInEnvironment:(id)arg1;
- (id)_allFocusableItemsInEnvironment:(id)arg1;
- (id)_defaultMapSnapshotter;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2 coordinateSpace:(id)arg3 searchInfo:(id)arg4 ignoresRootContainerClippingRect:(_Bool)arg5;
- (id)initWithFocusSystem:(id)arg1 rootContainer:(id)arg2;
- (id)init;

@end

