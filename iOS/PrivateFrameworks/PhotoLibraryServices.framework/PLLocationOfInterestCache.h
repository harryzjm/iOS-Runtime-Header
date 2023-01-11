//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, PLLocationOfInterestVisit;

@interface PLLocationOfInterestCache : NSObject
{
    NSMutableDictionary *_visitsCache;
    NSMutableSet *_allLocationsOfInterest;
    NSMutableSet *_homeLocations;
    NSMutableSet *_workLocations;
    unsigned long long _numberOfLocationsOfInterestVisits;
    NSDate *_earliestVisitStartDate;
    PLLocationOfInterestVisit *_lastLocationOfInterestVisit;
    unsigned long long _numberOfLocationsOfInterestTransitions;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long numberOfLocationsOfInterestTransitions; // @synthesize numberOfLocationsOfInterestTransitions=_numberOfLocationsOfInterestTransitions;
@property(readonly) PLLocationOfInterestVisit *lastLocationOfInterestVisit; // @synthesize lastLocationOfInterestVisit=_lastLocationOfInterestVisit;
@property(readonly) NSDate *earliestVisitStartDate; // @synthesize earliestVisitStartDate=_earliestVisitStartDate;
@property(readonly) unsigned long long numberOfLocationsOfInterestVisits; // @synthesize numberOfLocationsOfInterestVisits=_numberOfLocationsOfInterestVisits;
@property(retain, nonatomic) NSMutableSet *workLocations; // @synthesize workLocations=_workLocations;
@property(retain, nonatomic) NSMutableSet *homeLocations; // @synthesize homeLocations=_homeLocations;
@property(retain, nonatomic) NSMutableSet *allLocationsOfInterest; // @synthesize allLocationsOfInterest=_allLocationsOfInterest;
@property(retain, nonatomic) NSMutableDictionary *visitsCache; // @synthesize visitsCache=_visitsCache;
@property(readonly) unsigned long long numberOfLocationsOfInterest;
- (id)locationsOfInterestVisitsInDateInterval:(id)arg1;
- (id)locationsOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)closestLocationOfInterestVisitToLocation:(id)arg1 withinDistance:(double)arg2 inDateInterval:(id)arg3;
- (id)locationsOfInterestOfType:(long long)arg1;
- (void)addLocationOfInterest:(id)arg1;
- (id)init;

@end
