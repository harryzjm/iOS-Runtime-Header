//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, NSString;

@interface VKRoadFeatureAccessibilityElement
{
    NSMutableArray *_expandedPaths;
    NSMutableArray *_gutterPaths;
    NSMutableArray *_originalPaths;
    _Bool _lastHitTestNearBorder;
    NSArray *_allPoints;
    int _travelDirection;
    NSString *_roadDirection;
    NSArray *_intersectingRoads;
}

@property(nonatomic) int travelDirection; // @synthesize travelDirection=_travelDirection;
@property(retain, nonatomic) NSArray *intersectingRoads; // @synthesize intersectingRoads=_intersectingRoads;
@property(retain, nonatomic) NSString *roadDirection; // @synthesize roadDirection=_roadDirection;
- (void).cxx_destruct;
- (id)_roadDirectionDescription;
- (id)_nearestIntersectionForPoint:(struct CGPoint)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1;
- (id)detailedFeatureElementInfoAtPoint:(struct CGPoint)arg1;
- (id)_roadLength;
- (id)_nearestPOIsForPoint:(struct CGPoint)arg1;
- (_Bool)_accessibilityRoadContainsTrackingPoint:(struct CGPoint)arg1;
- (float)_accessibilityDistanceFromEndOfRoad:(struct CGPoint)arg1 forAngle:(float)arg2;
- (id)_accessibilityUpcomingRoadsForPoint:(struct CGPoint)arg1 forAngle:(float)arg2;
- (float)_accessibilityDistance:(struct CGPoint)arg1 forAngle:(float)arg2 toRoad:(id)arg3;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityPaths;
- (void)_updatePath;
- (void)_combineRoadPaths:(id)arg1;
@property(readonly, nonatomic) NSArray *originalPaths; // @synthesize originalPaths=_originalPaths;
- (long long)_accessibilityMapRoadType;
- (_Bool)_accessibilityLastHitTestNearBorder;
- (id)accessibilityLabel;
- (id)_axRoadSuffix;
- (id)trueLabel;
- (id)_axRoadPrefix;
- (long long)_accessibilityMapFeatureType;

@end

