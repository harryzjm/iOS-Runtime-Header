//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLocation, GEOMapFeatureAccess, GEOMapFeatureRoad, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEORoadConnectivityPenalty : NSObject
{
    GEOLocation *_location;
    GEOMapFeatureRoad *_originRoad;
    NSMutableDictionary *_roadIntersections;
    GEOMapFeatureAccess *_mapFeatureAccess;
    unsigned long long _maxDepthForRoadConnectivity;
    _Bool _completedConnectivityMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *roadIntersections; // @synthesize roadIntersections=_roadIntersections;
- (double)penaltyForCandidate:(id)arg1;
- (unsigned long long)shortestLengthToRoad:(id)arg1;
@property(readonly, nonatomic) GEOMapFeatureRoad *originRoad;
- (void)_addRoadsFromOriginRoad:(id)arg1 currentDepth:(unsigned long long)arg2;
- (void)_initConnectivityMap;
- (id)initWithOriginRoad:(id)arg1;
- (id)init;

@end

