//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VKLabelNavRoadGraph, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface LabelNavRouteLabeler : NSObject
{
    _Bool _needsLayout;
    _Bool _drawRoadSigns;
    VKPolylineOverlay *_route;
    NSString *_currentLocationText;
    _Bool _isOnRoute;
    struct PolylineCoordinate _routeUserOffset;
    unsigned long long _stepIndex;
    _Bool _checkOnRouteLabelsAlignment;
    _Bool _disableTileParseForOneLayout;
    NSMutableSet *_tiles;
    NSMutableSet *_pendingTiles;
    NSMutableArray *_junctions;
    VKLabelNavRoadGraph *_roadGraph;
    vector_c899b68f _activeSigns;
    NSMutableArray *_fadingLabels;
    NSMutableDictionary *_visibleLabelsByName;
    NSMutableArray *_visibleLabels;
    unsigned long long _countVisibleOnRouteRoadSigns;
    unsigned long long _countVisibleOffRouteRoadSigns;
    unsigned long long _countVisibleRoadSigns;
    unsigned long long _maxVisibleOnRouteRoadSigns;
    unsigned long long _maxVisibleOffRouteRoadSigns;
    unsigned long long _maxVisibleRoadSigns;
    unsigned long long _maxOnRoadGraphRoadSigns;
    unsigned long long _minVisibleOffRoadGraphRoadSigns;
    unsigned long long _minVisibleProceedToRouteRoadSigns;
    _Bool _preferRightSideLabelPlacement;
    float _minSignOffsetDistance;
    NSMutableSet *_roadNamesInGuidance;
    NSMutableArray *_guidanceStepInfos;
    NSMutableArray *_routeRoadInfos;
    NSString *_currentRoadName;
    long long _currentRoadNameIndex;
    NSString *_currentShieldGroup;
    _Bool _checkIfRouteSubrangeChanged;
    _Bool _useRouteSubrange;
    struct PolylineCoordinate _routeSubrangeStart;
    struct PolylineCoordinate _routeSubrangeEnd;
    struct VKLabelNavArtworkCache *_artworkCache;
    struct shared_ptr<md::NavCurrentRoadSign> _currentRoadSign;
    _Bool _debugDisableRoadSignLimit;
    unsigned long long _debugCachedMaxVisibleOffRouteRoadSigns;
    unsigned long long _debugCachedMaxVisibleOnRouteRoadSigns;
    _Bool _debugEnableShieldsOnRouteLine;
    shared_ptr_a3c46825 _styleManager;
    _Bool _shouldLabelOppositeCarriageways;
    vector_13142ee6 _externalCollisionLabelsForLayout;
}

@property(nonatomic) struct VKLabelNavArtworkCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property(nonatomic) _Bool debugEnableShieldsOnRouteLine; // @synthesize debugEnableShieldsOnRouteLine=_debugEnableShieldsOnRouteLine;
@property(nonatomic) _Bool debugDisableRoadSignLimit; // @synthesize debugDisableRoadSignLimit=_debugDisableRoadSignLimit;
@property(retain, nonatomic) NSString *currentShieldGroup; // @synthesize currentShieldGroup=_currentShieldGroup;
@property(retain, nonatomic) NSString *currentRoadName; // @synthesize currentRoadName=_currentRoadName;
@property(readonly, nonatomic) const vector_c899b68f *activeSigns; // @synthesize activeSigns=_activeSigns;
@property(retain, nonatomic) NSString *currentLocationText; // @synthesize currentLocationText=_currentLocationText;
@property(nonatomic) struct PolylineCoordinate routeUserOffset; // @synthesize routeUserOffset=_routeUserOffset;
@property(nonatomic) _Bool drawRoadSigns; // @synthesize drawRoadSigns=_drawRoadSigns;
@property(retain, nonatomic) VKPolylineOverlay *route; // @synthesize route=_route;
@property(readonly, nonatomic) _Bool needsLayout; // @synthesize needsLayout=_needsLayout;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const Matrix_8746f91e *)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext *)arg3;
- (_Bool)_updateActiveRouteRange;
- (_Bool)_findRouteOverlappingJunctionFrom:(long long)arg1 routeJunctions:(vector_682a2c99 *)arg2 lookBackward:(_Bool)arg3 firstOverlap:(long long *)arg4 secondOverlap:(long long *)arg5;
- (void)_updateCurrentRoadInfo;
- (void)_initalizeCurrentRoadInfo;
- (void)_updatePreferredLabelPlacements;
- (void)_updateRoadsInGuidance;
- (void)_updateRoadStarts;
- (void)_updateUniqueOffRouteRoads;
- (_Bool)_addJunctionsForTile:(id)arg1;
- (void)_addLabelsForJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxLabelsToAdd:(unsigned long long)arg3 useAllJunctions:(_Bool)arg4 placeShieldsFrontToBack:(_Bool)arg5;
- (void)_addLabelsAtJunctions:(id)arg1 withContext:(struct NavContext *)arg2 maxLabelsToAdd:(unsigned long long)arg3;
- (void)layoutWithNavContext:(struct NavContext *)arg1 externalCollisionLabels:(const vector_13142ee6 *)arg2;
- (unsigned char)orientationForRoadSign:(id)arg1 roadLabel:(id)arg2 navContext:(struct NavContext *)arg3;
- (void)_generateCurrentRoadSignWithContext:(struct NavContext *)arg1;
- (_Bool)_collideLabel:(id)arg1 activeLabel:(id)arg2 labelsToRemove:(id)arg3;
- (void)_tryAddLabel:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(_Bool)arg3;
- (void)_tryAddRoadSignForRoad:(id)arg1 isShield:(_Bool)arg2 navContext:(struct NavContext *)arg3 labelCollisionEnabled:(_Bool)arg4;
- (void)_createOrUpdateLabelForRoad:(id)arg1 isShield:(_Bool)arg2 navContext:(struct NavContext *)arg3;
- (void)_tryAddRoadSignForJunction:(id)arg1 navContext:(struct NavContext *)arg2 labelCollisionEnabled:(_Bool)arg3;
- (void)grabTilesFromScene:(id)arg1;
- (void)_refreshGuidanceRoadNames;
- (void)_reloadRouteJunctions;
- (void)clearSceneIsMemoryWarning:(_Bool)arg1;
- (_Bool)isNavMode;
- (void)dealloc;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1;
- (id)init;
@property(readonly, nonatomic) float currentRoadSignPixelHeight;
@property(readonly, nonatomic) struct NavCurrentRoadSign *currentRoadSign;

@end

