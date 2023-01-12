//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEORouteMatcher.h"

__attribute__((visibility("hidden")))
@interface GEOCyclingRouteMatcher : GEORouteMatcher
{
    unsigned long long _newStepProgressions;
}

- (_Bool)_supportsSnapping;
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeCoordinate:(struct PolylineCoordinate)arg2;
- (double)_maxMatchDistance:(double)arg1 routeCoordinate:(struct PolylineCoordinate)arg2 previousMatchGood:(_Bool)arg3;
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;
- (id)initWithRoute:(id)arg1;

@end

