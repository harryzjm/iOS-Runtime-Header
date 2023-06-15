//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLatLng, GEOStyleAttributes, NSArray, NSString, NSTimeZone;
@protocol GEOTransitDeparture;

__attribute__((visibility("hidden")))
@interface _GEOTransitTripStop : NSObject
{
    NSTimeZone *_timeZone;
    unsigned long long _stationIdentifier;
    NSString *_transitName;
    NSArray *_labelItems;
    GEOLatLng *_location;
    GEOStyleAttributes *_styleAttributes;
    _Bool _isHidden;
    id <GEOTransitDeparture> _departure;
}

+ (id)transitTripStopsForPlaceData:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GEOTransitDeparture> departure; // @synthesize departure=_departure;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) GEOLatLng *location;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSArray *labelItems;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) unsigned long long stationIdentifier;
- (id)initWithTransitSnippet:(id)arg1 departureSequence:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

