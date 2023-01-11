//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOURLSerializable-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOStructuredAddress, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_formattedAddressLines;
    GEOStructuredAddress *_structuredAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _formattedAddressType;
    struct {
        unsigned int has_formattedAddressType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_formattedAddressLines:1;
        unsigned int read_structuredAddress:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)formattedAddressLineType;
+ (id)geoAddressForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
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
@property(readonly, copy) NSString *description;
- (int)StringAsFormattedAddressType:(id)arg1;
- (id)formattedAddressTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFormattedAddressType;
@property(nonatomic) int formattedAddressType;
@property(retain, nonatomic) GEOStructuredAddress *structuredAddress;
@property(readonly, nonatomic) _Bool hasStructuredAddress;
- (id)formattedAddressLineAtIndex:(unsigned long long)arg1;
- (unsigned long long)formattedAddressLinesCount;
- (void)addFormattedAddressLine:(id)arg1;
- (void)clearFormattedAddressLines;
@property(retain, nonatomic) NSMutableArray *formattedAddressLines;
- (id)initWithData:(id)arg1;
- (id)init;
- (_Bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)bestName;
- (id)postalAddress;
- (id)initWithPostalAddress:(id)arg1;
- (id)addressDictionary;
- (id)initWithAddressDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
