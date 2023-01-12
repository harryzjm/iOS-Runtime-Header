//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORouteMatch;

__attribute__((visibility("hidden")))
@interface VKPuckAnimatorLocationProjector : NSObject
{
    GEORouteMatch *_routeMatch;
    GEORouteMatch *_projectedRouteMatch;
    Matrix_6e1d3589 _projectedPosition;
    _Bool _isProjectedPositionBehind;
    optional_fcefa02e _elevationInProjectedPosition;
    double _projectedCourse;
    optional_89639096 _currentSnappedSegment;
    _Bool _alwaysUseGoodRouteMatch;
    struct PolylineCoordinate _maxTravelledCoordinate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool alwaysUseGoodRouteMatch; // @synthesize alwaysUseGoodRouteMatch=_alwaysUseGoodRouteMatch;
@property(readonly, nonatomic) _Bool isProjectedPositionBehind; // @synthesize isProjectedPositionBehind=_isProjectedPositionBehind;
@property(readonly, nonatomic) optional_89639096 currentSnappedSegment; // @synthesize currentSnappedSegment=_currentSnappedSegment;
@property(readonly, nonatomic) double projectedCourse; // @synthesize projectedCourse=_projectedCourse;
@property(readonly, nonatomic) optional_e65ed27b elevationInProjectedPostion; // @synthesize elevationInProjectedPostion=_elevationInProjectedPosition;
@property(readonly, nonatomic) Matrix_6e1d3589 projectedPosition; // @synthesize projectedPosition=_projectedPosition;
@property(retain, nonatomic) GEORouteMatch *projectedRouteMatch; // @synthesize projectedRouteMatch=_projectedRouteMatch;
@property(retain, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
- (id)detailedDescription;
@property(readonly, nonatomic) _Bool projectedLocationOnRoute;
@property(readonly, nonatomic) CDStruct_c3b9c2ee projectedLocation;
- (void)projectFromLocation:(id)arg1 routeMatch:(id)arg2 speedMultiplier:(double)arg3 routeLine:(id)arg4;
- (void)_updateCourseAndPositionFromRouteMatch:(id)arg1;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

