//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DCMapsLink.h"

@class NSDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface DCStandardMapsLink : DCMapsLink
{
    NSURL *_URL;
    NSDictionary *_queryDictionary;
}

+ (id)mapsLinkWithURL:(id)arg1;
+ (_Bool)isMapsURL:(id)arg1;
+ (_Bool)isStandardGoogleMapsURL:(id)arg1;
+ (_Bool)isStandardAppleMapsURL:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)streetViewLocation;
- (_Bool)showsBicycling;
- (_Bool)showsStreetView;
- (_Bool)showsTransit;
- (_Bool)showsTraffic;
- (unsigned long long)mapType;
- (long long)zoomLevel;
- (id)centerLocation;
- (unsigned long long)directionsMode;
- (id)destinationAddress;
- (id)startAddress;
- (id)searchLocation;
- (id)searchNearQuery;
- (id)searchQuery;
- (id)initWithURL:(id)arg1;

@end

