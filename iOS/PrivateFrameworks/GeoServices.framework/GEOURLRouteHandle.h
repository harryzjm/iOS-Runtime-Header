//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, PBDataReader;

@interface GEOURLRouteHandle : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSData *_directionsResponseID;
    NSData *_routeID;
    NSData *_transitData;
    NSData *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_directionsResponseID:1;
        unsigned int read_routeID:1;
        unsigned int read_transitData:1;
        unsigned int read_zilchPoints:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSData *transitData;
@property(readonly, nonatomic) _Bool hasTransitData;
@property(retain, nonatomic) NSData *zilchPoints;
@property(readonly, nonatomic) _Bool hasZilchPoints;
@property(retain, nonatomic) NSData *routeID;
@property(readonly, nonatomic) _Bool hasRouteID;
@property(retain, nonatomic) NSData *directionsResponseID;
@property(readonly, nonatomic) _Bool hasDirectionsResponseID;
- (id)initWithData:(id)arg1;
- (id)init;

@end
