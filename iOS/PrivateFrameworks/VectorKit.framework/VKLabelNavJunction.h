//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, VKLabelNavRoad, VKLabelNavRoadLabel;

__attribute__((visibility("hidden")))
@interface VKLabelNavJunction : NSObject
{
    struct shared_ptr<md::LabelTile> _tile;
    Matrix_8746f91e _tileCoordinate;
    struct GeoCodecsConnectivityJunction *_geoJunction;
    struct PolylineCoordinate _routeOffset;
    NSMutableArray *_roads;
    VKLabelNavRoad *_incomingRoad;
    VKLabelNavRoad *_outgoingRoad;
    float _distanceFromPreviousShieldLabel;
    int _preferredLabelPlacement;
    _Bool _isOnDualCarriageway;
    _Bool _hasSharedRouteDirection;
    Matrix_8746f91e _sharedRouteDirection;
    _Bool _foundRoads;
    _Bool _isOverpass;
    _Bool _isRouteOverpass;
    int _largestRoadClass;
    void *_labelFeature;
    NSString *_name;
    VKLabelNavRoadLabel *_junctionSign;
    _Bool _areLabelsDisabled;
    unsigned long long _depthFromRoute;
    double _worldUnitsPerMeter;
    VKLabelNavJunction *_overpassJunction;
    _Bool _cachedSignVisibility[8];
    _Bool _isVisibilityCached[8];
    _Bool _isVisible;
    _Bool _isPicked;
    Mercator3_d8bb135c _mercatorCoordinate;
    double _sortValue;
    _Bool _isRouteRefineJunction;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const void *tile; // @synthesize tile=_tile;
@property(readonly, nonatomic) const void *mercatorCoordinate; // @synthesize mercatorCoordinate=_mercatorCoordinate;
@property(nonatomic) _Bool isPicked; // @synthesize isPicked=_isPicked;
@property(readonly, nonatomic) VKLabelNavRoadLabel *junctionSign; // @synthesize junctionSign=_junctionSign;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isRouteRefineJunction; // @synthesize isRouteRefineJunction=_isRouteRefineJunction;
@property(nonatomic) _Bool isRouteOverpass; // @synthesize isRouteOverpass=_isRouteOverpass;
@property(readonly, nonatomic) _Bool isOverpass; // @synthesize isOverpass=_isOverpass;
@property(nonatomic) __weak VKLabelNavJunction *overpassJunction; // @synthesize overpassJunction=_overpassJunction;
@property(nonatomic) unsigned long long depthFromRoute; // @synthesize depthFromRoute=_depthFromRoute;
@property(nonatomic) Matrix_8746f91e sharedRouteDirection; // @synthesize sharedRouteDirection=_sharedRouteDirection;
@property(readonly, nonatomic) _Bool hasSharedRouteDirection; // @synthesize hasSharedRouteDirection=_hasSharedRouteDirection;
@property(nonatomic) _Bool isOnDualCarriageway; // @synthesize isOnDualCarriageway=_isOnDualCarriageway;
@property(nonatomic) float distanceFromPreviousShieldLabel; // @synthesize distanceFromPreviousShieldLabel=_distanceFromPreviousShieldLabel;
@property(nonatomic) int preferredLabelPlacement; // @synthesize preferredLabelPlacement=_preferredLabelPlacement;
@property(readonly, nonatomic) __weak VKLabelNavRoad *incomingRoad; // @synthesize incomingRoad=_incomingRoad;
@property(readonly, nonatomic) __weak VKLabelNavRoad *outgoingRoad; // @synthesize outgoingRoad=_outgoingRoad;
@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) Matrix_8746f91e tileCoordinate; // @synthesize tileCoordinate=_tileCoordinate;
@property(readonly, nonatomic) const struct GeoCodecsConnectivityJunction *geoJunction; // @synthesize geoJunction=_geoJunction;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) _Bool isTrafficCameraFeature;
@property(readonly, nonatomic) _Bool isEtaFeature;
@property(readonly, nonatomic) _Bool isGuidanceStepStart;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) _Bool isInGuidance;
@property(readonly, nonatomic) _Bool isStartOfRoadName;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 isDrivingSideRight:(_Bool)arg2 artworkCache:(void *)arg3;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;
@property(readonly, nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)_updateWithNavContext:(struct NavContext *)arg1;
- (void)_updateWithNavContext:(struct NavContext *)arg1 threshold:(double)arg2;
- (Mercator3_d8bb135c)_anchorCoordinateForSignOrientation:(unsigned char)arg1;
- (unsigned char)_signOrientationWithDrivingSide:(_Bool)arg1;
@property(readonly, nonatomic) double worldUnitsPerMeter; // @synthesize worldUnitsPerMeter=_worldUnitsPerMeter;
@property(readonly, nonatomic) int requiredLabelPlacement;
- (void)evaluateCrossStreetsUsingRouteJunction:(id)arg1;
- (void)evaluateCrossStreets;
- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge *)arg1 atA:(_Bool)arg2;
- (void)findRoads;
@property(readonly, nonatomic) int largestRoadClass;
@property(readonly, nonatomic) NSArray *roads; // @synthesize roads=_roads;
@property(readonly, nonatomic) _Bool isMultiRoadIntersection;
@property(readonly, nonatomic) _Bool isIntraRamp;
@property(readonly, nonatomic) _Bool isOffRouteGraph;
@property(readonly, nonatomic) _Bool isAwayFromRoute;
@property(readonly, nonatomic) _Bool isRamp;
@property(readonly, nonatomic) long long intraRoadPriorityForShieldLabel;
@property(readonly, nonatomic) long long intraRoadPriorityForRoadLabel;
@property(readonly, nonatomic) _Bool isIntersection;
@property(readonly, nonatomic) _Bool isOnRoute;
@property(readonly, nonatomic) _Bool isRoadTerminus;
@property(readonly, nonatomic) _Bool isTileEdgeJunction;
- (_Bool)matchesLocationForJunction:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRoadEdge:(const struct GeoCodecsRoadEdge *)arg1 atA:(_Bool)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(const void *)arg4;
- (id)initWithGEOJunction:(struct GeoCodecsConnectivityJunction *)arg1 routeOffset:(struct PolylineCoordinate)arg2 tile:(const void *)arg3;

@end

