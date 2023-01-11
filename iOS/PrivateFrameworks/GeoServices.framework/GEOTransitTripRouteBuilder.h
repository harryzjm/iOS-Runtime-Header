//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapRegion, GEOPBTransitLine, GEOPDTransitTripGeometry, NSArray, NSMutableArray, NSMutableData;

__attribute__((visibility("hidden")))
@interface GEOTransitTripRouteBuilder : NSObject
{
    NSMutableArray *_steps;
    NSMutableArray *_composedGuidanceEvents;
    NSMutableArray *_legs;
    NSMutableData *_pointsData;
    NSMutableArray *_pointSections;
    GEOMapRegion *_boundingMapRegion;
    GEOPDTransitTripGeometry *_geometry;
    GEOPBTransitLine *_line;
    NSArray *_stops;
}

@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(readonly, nonatomic) NSMutableArray *pointSections; // @synthesize pointSections=_pointSections;
- (void).cxx_destruct;
- (double)_buildPointSectionsForRoute:(id)arg1 pointRange:(struct _NSRange)arg2 stepIndex:(unsigned long long)arg3 currentTransitLineColor:(id)arg4 startDistance:(double)arg5;
- (void)buildPointSectionsForRoute:(id)arg1;
- (void)buildRoute:(id)arg1;
- (id)initWithGeometry:(id)arg1 andLine:(id)arg2 andStops:(id)arg3;

@end
