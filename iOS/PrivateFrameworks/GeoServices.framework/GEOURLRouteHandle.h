//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData;

@interface GEOURLRouteHandle : PBCodable <NSCopying>
{
    NSData *_directionsResponseID;
    NSData *_routeID;
    NSData *_transitData;
    NSData *_zilchPoints;
}

@property(retain, nonatomic) NSData *transitData; // @synthesize transitData=_transitData;
@property(retain, nonatomic) NSData *zilchPoints; // @synthesize zilchPoints=_zilchPoints;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(retain, nonatomic) NSData *directionsResponseID; // @synthesize directionsResponseID=_directionsResponseID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTransitData;
@property(readonly, nonatomic) _Bool hasZilchPoints;
@property(readonly, nonatomic) _Bool hasRouteID;
@property(readonly, nonatomic) _Bool hasDirectionsResponseID;

@end

