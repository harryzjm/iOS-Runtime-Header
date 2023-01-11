//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlace, GEOPDPlaceRequest, GEORPTransitLineTileInfo, GEORPTransitPoiCorrections, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPTransitPoiFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEORPTransitPoiCorrections *_corrections;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    GEORPTransitLineTileInfo *_transitLineTileInfo;
    int _correctionType;
    struct {
        unsigned int has_correctionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_corrections:1;
        unsigned int read_directionsRequests:1;
        unsigned int read_directionsResponses:1;
        unsigned int read_placeRequest:1;
        unsigned int read_place:1;
        unsigned int read_transitLineTileInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_corrections:1;
        unsigned int wrote_directionsRequests:1;
        unsigned int wrote_directionsResponses:1;
        unsigned int wrote_placeRequest:1;
        unsigned int wrote_place:1;
        unsigned int wrote_transitLineTileInfo:1;
        unsigned int wrote_correctionType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)directionsResponseType;
+ (Class)directionsRequestType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsResponsesCount;
- (void)_addNoFlagsDirectionsResponse:(id)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (void)clearDirectionsResponses;
@property(retain, nonatomic) NSMutableArray *directionsResponses;
- (void)_readDirectionsResponses;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsRequestsCount;
- (void)_addNoFlagsDirectionsRequest:(id)arg1;
- (void)addDirectionsRequest:(id)arg1;
- (void)clearDirectionsRequests;
@property(retain, nonatomic) NSMutableArray *directionsRequests;
- (void)_readDirectionsRequests;
@property(retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property(readonly, nonatomic) _Bool hasPlaceRequest;
- (void)_readPlaceRequest;
@property(retain, nonatomic) GEORPTransitLineTileInfo *transitLineTileInfo;
@property(readonly, nonatomic) _Bool hasTransitLineTileInfo;
- (void)_readTransitLineTileInfo;
@property(retain, nonatomic) GEOPDPlace *place;
@property(readonly, nonatomic) _Bool hasPlace;
- (void)_readPlace;
@property(retain, nonatomic) GEORPTransitPoiCorrections *corrections;
@property(readonly, nonatomic) _Bool hasCorrections;
- (void)_readCorrections;
- (int)StringAsCorrectionType:(id)arg1;
- (id)correctionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasCorrectionType;
@property(nonatomic) int correctionType;

@end
