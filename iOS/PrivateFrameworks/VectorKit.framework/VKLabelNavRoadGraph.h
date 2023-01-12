//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VKLabelNavRoadGraph : NSObject
{
    struct unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> _tiles;
    struct unordered_set<std::shared_ptr<md::LabelTile>, std::hash<std::shared_ptr<md::LabelTile>>, std::equal_to<std::shared_ptr<md::LabelTile>>, geo::StdAllocator<std::shared_ptr<md::LabelTile>, mdm::Allocator>> _duplicateTiles;
    NSMutableDictionary *_tileDatasByIndex;
    NSMutableArray *_junctions;
    NSMutableArray *_intersections;
    _Bool _oppositeCarriagewayJunctionsValid;
    NSMutableArray *_oppositeCarriagewayJunctions;
    Matrix_8746f91e _unitHeading;
    _Bool _offRouteJunctionsValid;
    Box_3d7e3c2c _offRouteJunctionSelectRect;
    NSMutableArray *_offRouteJunctions;
    struct PolylineCoordinate _routeUserOffset;
    _Bool _routeFeatureMapValid;
    struct unordered_map<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>, std::hash<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, std::equal_to<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>>, geo::StdAllocator<std::pair<const std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>, std::shared_ptr<NavRoadFeature>>, mdm::Allocator>> _routeFeatureMap;
    _Bool _simplifiedRouteValid;
    struct vector<md::LabelPoint, geo::StdAllocator<md::LabelPoint, mdm::Allocator>> _simplifiedRoutePoints;
    unsigned long long _currentRoadStartSimplifiedPointIndex;
    _Bool _screenRouteValid;
    struct vector<RouteSegment, geo::StdAllocator<RouteSegment, mdm::Allocator>> _screenRouteSegments;
    unsigned long long _firstPOIAligningRouteSegment;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *junctions; // @synthesize junctions=_junctions;
- (id)_nextIntersectionForRoad:(id)arg1;
- (id)nextRoadSegmentForRoad:(id)arg1;
- (id)_findInterTileJunctionForJunction:(id)arg1;
- (id)_junctionForRoadEdge:(const struct GeoCodecsRoadEdge *)arg1 atA:(_Bool)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(const void *)arg4;
- (Matrix_8746f91e)unitHeading;
- (id)junctionForRoad:(id)arg1 nearJunction:(_Bool)arg2 crossTileEdge:(_Bool)arg3;
- (void)setTiles:(const void *)arg1;
- (void)startingLabelLayoutWithContext:(struct NavContext *)arg1 routeUserOffset:(struct PolylineCoordinate)arg2;
- (void)routeJunctionsHaveChanged;
- (void)reset;
- (id)initWithJunctions:(id)arg1;
- (void)debugDraw:(id)arg1 overlayConsole:(void *)arg2 navContext:(struct NavContext *)arg3;
- (_Bool)prepareOppositeCarriagewayJunctions;
- (id)oppositeCarriagewayJunctions;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const void *)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext *)arg3;
- (_Bool)collideRouteWithLabel:(id)arg1 routeCrossProduct:(float *)arg2 context:(struct NavContext *)arg3;
- (void)_transformRouteToScreenWithContext:(struct NavContext *)arg1;
- (void)_updateSimplifiedRoute;
- (_Bool)isPriorRouteCollinearWithRoad:(id)arg1 distance:(float)arg2;
- (void)_findOffRouteJunctions;
- (id)offRouteGraphJunctionsWithNavContext:(struct NavContext *)arg1 maxJunctions:(unsigned long long)arg2 isOnRoute:(_Bool)arg3;
- (void)_updateIntersectionsForDepth:(unsigned long long)arg1;
- (id)offRouteJunctionList;
- (id)junctionListForDepth:(unsigned long long)arg1;
- (unsigned long long)countReadyJunctionLists;
- (void)evaluateDualCarriagewayForJunction:(id)arg1 outputJunctionList:(id)arg2;
- (_Bool)_checkIfDualCarriageWayConnectorRoad:(id)arg1 fromJunction:(id)arg2 toJunction:(id)arg3 checkShields:(_Bool)arg4;
- (id)overpassJunctionForJunction:(id)arg1;
- (void)addRouteRoadEdge:(const struct VKLabelNavRouteRoadEdge *)arg1 atA:(_Bool)arg2 isRouteRefineJunction:(_Bool)arg3 tile:(const void *)arg4 junctionList:(id)arg5;

@end

