//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitIncident : PBCodable
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_transitIncidents;
}

+ (id)transitIncidentsTTLExpirationDateForPlaceData:(id)arg1;
+ (id)transitIncidentsForPlaceData:(id)arg1 hasTransitIncidentComponent:(_Bool *)arg2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;

@end

