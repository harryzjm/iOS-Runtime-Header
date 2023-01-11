//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVendorIDLink : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _reservationTypes;
    NSString *_externalItemId;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_reservationTypes:1;
        unsigned int read_externalItemId:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsReservationTypes:(id)arg1;
- (id)reservationTypesAsString:(int)arg1;
- (void)setReservationTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)reservationTypeAtIndex:(unsigned long long)arg1;
- (void)addReservationType:(int)arg1;
- (void)clearReservationTypes;
@property(readonly, nonatomic) int *reservationTypes;
@property(readonly, nonatomic) unsigned long long reservationTypesCount;
@property(retain, nonatomic) NSString *externalItemId;
@property(readonly, nonatomic) _Bool hasExternalItemId;
@property(retain, nonatomic) NSString *vendorId;
@property(readonly, nonatomic) _Bool hasVendorId;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end
