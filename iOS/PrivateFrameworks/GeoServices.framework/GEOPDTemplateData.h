//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDDataItem, GEOPDMapsIdentifier, GEOPDPhoto, GEOStyleAttributes, GEOTimezone, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTemplateData : PBCodable
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDDataItem *_footer;
    GEOPDMapsIdentifier *_mapsId;
    GEOPDPhoto *_photo;
    GEOStyleAttributes *_poiIcon;
    GEOPDDataItem *_subtitle;
    GEOTimezone *_timezone;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _areaHighlight;
    struct {
        unsigned int has_areaHighlight:1;
        unsigned int read_unknownFields:1;
        unsigned int read_footer:1;
        unsigned int read_mapsId:1;
        unsigned int read_photo:1;
        unsigned int read_poiIcon:1;
        unsigned int read_subtitle:1;
        unsigned int read_timezone:1;
        unsigned int read_titles:1;
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
- (id)placeName;

@end

