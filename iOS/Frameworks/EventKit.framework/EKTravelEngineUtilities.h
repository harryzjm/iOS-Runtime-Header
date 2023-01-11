//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EKTravelEngineUtilities : NSObject
{
}

+ (double)minimumAllowableTravelTime;
+ (double)maximumAllowableTravelTime;
+ (id)effectiveTravelAdvisoryTravelTimeDateForHypothesis:(id)arg1;
+ (double)effectiveTravelAdvisoryTravelTimeForHypothesis:(id)arg1;
+ (_Bool)date:(id)arg1 representsImmediateDepartureForHypothesis:(id)arg2;
+ (_Bool)date:(id)arg1 representsLatenessForHypothesis:(id)arg2;
+ (_Bool)date:(id)arg1 representsApproachingDepartureDateForHypothesis:(id)arg2;
+ (int)geoTransportTypeForCalLocationRoutingMode:(long long)arg1;
+ (id)authorizationStatusAsString:(int)arg1;
+ (unsigned long long)geoTrafficDensityForString:(id)arg1;
+ (id)geoTrafficDensityAsString:(unsigned long long)arg1;
+ (int)geoTransportTypeForString:(id)arg1;
+ (id)geoTransportTypeAsString:(int)arg1;
+ (long long)geoRouteHypothesisTravelStateForString:(id)arg1;
+ (id)formattedLocationCoordinates:(id)arg1;
+ (_Bool)travelStateIndicatesTravelingTowardDestination:(long long)arg1;

@end

