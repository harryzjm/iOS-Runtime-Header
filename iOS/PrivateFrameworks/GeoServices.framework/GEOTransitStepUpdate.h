//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOInstructionSet, GEOTransitScheduleInfo, GEOTransitVehiclePositionInfo, NSData, PBDataReader, PBUnknownFields;

@interface GEOTransitStepUpdate : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOInstructionSet *_instructions;
    GEOTransitScheduleInfo *_scheduleInfo;
    NSData *_updateIdentifier;
    GEOTransitVehiclePositionInfo *_vehiclePositionInfo;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_instructions:1;
        unsigned int read_scheduleInfo:1;
        unsigned int read_updateIdentifier:1;
        unsigned int read_vehiclePositionInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_instructions:1;
        unsigned int wrote_scheduleInfo:1;
        unsigned int wrote_updateIdentifier:1;
        unsigned int wrote_vehiclePositionInfo:1;
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
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property(readonly, nonatomic) _Bool hasScheduleInfo;
- (void)_readScheduleInfo;
@property(retain, nonatomic) GEOTransitVehiclePositionInfo *vehiclePositionInfo;
@property(readonly, nonatomic) _Bool hasVehiclePositionInfo;
- (void)_readVehiclePositionInfo;
@property(retain, nonatomic) GEOInstructionSet *instructions;
@property(readonly, nonatomic) _Bool hasInstructions;
- (void)_readInstructions;
@property(retain, nonatomic) NSData *updateIdentifier;
@property(readonly, nonatomic) _Bool hasUpdateIdentifier;
- (void)_readUpdateIdentifier;

@end
