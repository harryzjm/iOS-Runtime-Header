//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPUserLocationDetails, NSString, PBDataReader;

@interface GEORPIncidentAnnotationDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_incidentId;
    GEORPUserLocationDetails *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _annotationType;
    struct {
        unsigned int has_annotationType:1;
        unsigned int read_incidentId:1;
        unsigned int read_userLocation:1;
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
- (int)StringAsAnnotationType:(id)arg1;
- (id)annotationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAnnotationType;
@property(nonatomic) int annotationType;
@property(retain, nonatomic) NSString *incidentId;
@property(readonly, nonatomic) _Bool hasIncidentId;
@property(retain, nonatomic) GEORPUserLocationDetails *userLocation;
@property(readonly, nonatomic) _Bool hasUserLocation;
- (id)initWithData:(id)arg1;
- (id)init;

@end
