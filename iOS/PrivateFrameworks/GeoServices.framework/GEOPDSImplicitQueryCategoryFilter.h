//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSImplicitQueryIntroTipForHiking, GEOPDSImplicitQuerySearchAroundPOI, GEOPDSImplicitQuerySearchForEVCharger, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSImplicitQueryCategoryFilter : PBCodable
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDSImplicitQueryIntroTipForHiking *_implicitQueryIntroTipForHiking;
    GEOPDSImplicitQuerySearchAroundPOI *_implicitQuerySearchAroundPoi;
    GEOPDSImplicitQuerySearchForEVCharger *_implicitQuerySearchForEvcharger;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _implicitQueryType;
    struct {
        unsigned int has_implicitQueryType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_implicitQueryIntroTipForHiking:1;
        unsigned int read_implicitQuerySearchAroundPoi:1;
        unsigned int read_implicitQuerySearchForEvcharger:1;
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

