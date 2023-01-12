//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLocalizedString, GEOPDMapsIdentifier, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPoiEvent : PBCodable
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_eventCategorys;
    NSMutableArray *_eventDateTimes;
    GEOPDMapsIdentifier *_eventId;
    GEOLocalizedString *_name;
    NSMutableArray *_performers;
    NSMutableArray *_poiIds;
    GEOTimezone *_timezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _expectedAttendance;
    struct {
        unsigned int has_expectedAttendance:1;
        unsigned int read_unknownFields:1;
        unsigned int read_eventCategorys:1;
        unsigned int read_eventDateTimes:1;
        unsigned int read_eventId:1;
        unsigned int read_name:1;
        unsigned int read_performers:1;
        unsigned int read_poiIds:1;
        unsigned int read_timezone:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)init;

@end

