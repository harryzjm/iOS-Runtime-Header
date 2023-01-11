//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedTrafficCamera, GEOEnrouteNotice, GEOLatLng, NSArray, NSString;

@interface GEOComposedEnrouteNotice : NSObject
{
    GEOEnrouteNotice *_enrouteNotice;
    GEOComposedRoute *_route;
    NSArray *_guidanceEvents;
    CDStruct_3f2a7a20 _routeCoordinate;
}

@property(readonly, nonatomic) NSArray *guidanceEvents; // @synthesize guidanceEvents=_guidanceEvents;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int groupIdentifier;
@property(readonly, nonatomic) _Bool hasGroupIdentifier;
- (id)detailFormatForLocation:(id)arg1;
- (id)titleFormatForLocation:(id)arg1;
@property(readonly, nonatomic) CDStruct_3f2a7a20 routeCoordinate;
@property(readonly, nonatomic) unsigned int highlightDistance;
@property(readonly, nonatomic) _Bool hasHighlightDistance;
@property(readonly, nonatomic) GEOComposedTrafficCamera *trafficCamera;
@property(readonly, nonatomic) NSString *identifier;
- (id)description;
- (id)initWithEnrouteNotice:(id)arg1 onRoute:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) GEOLatLng *position; // @dynamic position;

@end

