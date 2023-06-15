//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDColor, GEOPDMapsIdentifier, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFactoid : PBCodable
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDColor *_color;
    NSString *_icon;
    double _number;
    GEOPDMapsIdentifier *_placeId;
    NSMutableArray *_placeNames;
    NSString *_symbolColor;
    NSString *_text;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _entryType;
    int _unit;
    _Bool _canBeDisplayedInPlaceSummary;
    struct {
        unsigned int has_number:1;
        unsigned int has_entryType:1;
        unsigned int has_unit:1;
        unsigned int has_canBeDisplayedInPlaceSummary:1;
        unsigned int read_unknownFields:1;
        unsigned int read_color:1;
        unsigned int read_icon:1;
        unsigned int read_placeId:1;
        unsigned int read_placeNames:1;
        unsigned int read_symbolColor:1;
        unsigned int read_text:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (id)factoidsForPlaceData:(id)arg1;
+ (_Bool)factoidPairAvailableForPlaceData:(id)arg1;
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
- (id)bestLocalizedPlaceName;

@end

