//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRouteSection, GEOSnappedRoutePath, VKPolylineOverlay;

__attribute__((visibility("hidden")))
@interface VKPolylinePath : NSObject
{
    VKPolylineOverlay *_overlay;
    GEOComposedRouteSection *_section;
    GEOSnappedRoutePath *_snappedPath;
    Matrix_8746f91e *_points;
    unsigned int _pointCount;
    _Bool _ownsPoints;
    struct PolylineCoordinate _routeStart;
    struct PolylineCoordinate _routeEnd;
    double _startDistance;
    unsigned char _trafficSpeed;
    double _sectionLengthScaleFactor;
}

@property(nonatomic) double startDistance; // @synthesize startDistance=_startDistance;
@property(nonatomic) unsigned char trafficSpeed; // @synthesize trafficSpeed=_trafficSpeed;
@property(readonly, nonatomic) GEOComposedRouteSection *section; // @synthesize section=_section;
@property(readonly, nonatomic) GEOSnappedRoutePath *snappedPath; // @synthesize snappedPath=_snappedPath;
@property(nonatomic) struct PolylineCoordinate routeEnd; // @synthesize routeEnd=_routeEnd;
@property(nonatomic) struct PolylineCoordinate routeStart; // @synthesize routeStart=_routeStart;
@property(readonly, nonatomic) unsigned int pointCount; // @synthesize pointCount=_pointCount;
@property(readonly, nonatomic) Matrix_8746f91e *points; // @synthesize points=_points;
- (id).cxx_construct;
- (void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(struct TrafficSegmentsAlongRoute *)arg2 shouldSnap:(_Bool)arg3;
- (void)assignTo:(id)arg1 withSegment:(const struct TrafficSegment *)arg2;
- (void)assignPoints:(Matrix_8746f91e *)arg1 count:(unsigned int)arg2;
- (id)description;
@property(readonly) _Bool isMapMatched;
@property(readonly) _Bool hasCompletedMapMatching;
- (void)dealloc;
- (id)initWithOverlay:(id)arg1 snappedPath:(id)arg2;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned int)arg3 routeEndIndex:(unsigned int)arg4;
- (id)initWithOverlay:(id)arg1 section:(id)arg2;

@end

