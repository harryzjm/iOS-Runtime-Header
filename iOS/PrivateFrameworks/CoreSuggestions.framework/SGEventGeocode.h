//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGEventGeocode : NSObject
{
}

+ (id)poiCategoriesFromString:(id)arg1;
+ (void)geocodeEvent:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)geocodeEvent:(id)arg1;
+ (id)dateForUTCDate:(id)arg1 withTimeZone:(id)arg2;
+ (void)geocodeLocation:(id)arg1 usingMode:(unsigned long long)arg2 withGeoFilters:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)geocodePOIWithName:(id)arg1 ofTypes:(id)arg2 inRegion:(id)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)geocodeAddressWithCanonicalSearch:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)geocodeAddress:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (_Bool)isGeocodeCandidate:(id)arg1;
+ (_Bool)isGeocodeCandidateLocation:(id)arg1 forEvent:(id)arg2;
+ (_Bool)locationIsGeocoded:(id)arg1;
+ (_Bool)locationIsAirport:(id)arg1;
+ (id)_serialQueue;

@end
