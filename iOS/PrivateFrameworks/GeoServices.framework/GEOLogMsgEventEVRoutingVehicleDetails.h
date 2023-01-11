//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOLogMsgEventEVRoutingVehicleDetails : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_make;
    NSString *_model;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _batteryCapacity;
    struct {
        unsigned int has_batteryCapacity:1;
        unsigned int read_make:1;
        unsigned int read_model:1;
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
@property(nonatomic) _Bool hasBatteryCapacity;
@property(nonatomic) unsigned int batteryCapacity;
@property(retain, nonatomic) NSString *model;
@property(readonly, nonatomic) _Bool hasModel;
@property(retain, nonatomic) NSString *make;
@property(readonly, nonatomic) _Bool hasMake;
- (id)initWithData:(id)arg1;
- (id)init;

@end
