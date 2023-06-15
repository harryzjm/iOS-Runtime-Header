//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAvailabilityInfo, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEVCharger : PBCodable
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAvailabilityInfo *_aggregatedAvailabilityInfo;
    NSMutableArray *_plugs;
    unsigned long long _ttlSeconds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_ttlSeconds:1;
        unsigned int read_unknownFields:1;
        unsigned int read_aggregatedAvailabilityInfo:1;
        unsigned int read_plugs:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (id)evChargerFromPlaceData:(id)arg1;
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

