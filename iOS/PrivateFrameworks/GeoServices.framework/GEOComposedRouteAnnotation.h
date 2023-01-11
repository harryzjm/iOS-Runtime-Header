//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOLatLng, GEOMiniCard, GEOPBTransitArtwork, GEORouteAnnotation;

@interface GEOComposedRouteAnnotation <NSSecureCoding>
{
    GEORouteAnnotation *_annotation;
    GEOLatLng *_derivedPosition;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) GEOMiniCard *infoCard;
@property(readonly, nonatomic) GEOPBTransitArtwork *artwork;
- (id)position;
- (id)description;
- (id)initWithEnrouteNotice:(id)arg1 enrouteNoticeIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3 annotation:(id)arg4 onRoute:(id)arg5;

@end
