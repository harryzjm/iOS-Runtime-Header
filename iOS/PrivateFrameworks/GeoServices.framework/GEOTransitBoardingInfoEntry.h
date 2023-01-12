//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, GEOTransitExitPlanInfo, GEOTransitListTimeInstruction, GEOTransitOccupancyInfo, PBDataReader, PBUnknownFields;

@interface GEOTransitBoardingInfoEntry : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_alternativeText;
    GEOTransitListTimeInstruction *_alternativeTimeInstruction;
    GEOTransitExitPlanInfo *_exitPlanInfoOverride;
    GEOFormattedString *_mainText;
    GEOTransitListTimeInstruction *_mainTimeInstruction;
    GEOTransitOccupancyInfo *_occupancyInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _expectedDepartureTime;
    _Bool _clearExitPlanInfo;
    struct {
        unsigned int has_expectedDepartureTime:1;
        unsigned int has_clearExitPlanInfo:1;
        unsigned int read_unknownFields:1;
        unsigned int read_alternativeText:1;
        unsigned int read_alternativeTimeInstruction:1;
        unsigned int read_exitPlanInfoOverride:1;
        unsigned int read_mainText:1;
        unsigned int read_mainTimeInstruction:1;
        unsigned int read_occupancyInfo:1;
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
@property(nonatomic) _Bool hasClearExitPlanInfo;
@property(nonatomic) _Bool clearExitPlanInfo;
@property(retain, nonatomic) GEOTransitExitPlanInfo *exitPlanInfoOverride;
@property(readonly, nonatomic) _Bool hasExitPlanInfoOverride;
@property(retain, nonatomic) GEOTransitOccupancyInfo *occupancyInfo;
@property(readonly, nonatomic) _Bool hasOccupancyInfo;
@property(retain, nonatomic) GEOTransitListTimeInstruction *alternativeTimeInstruction;
@property(readonly, nonatomic) _Bool hasAlternativeTimeInstruction;
@property(retain, nonatomic) GEOTransitListTimeInstruction *mainTimeInstruction;
@property(readonly, nonatomic) _Bool hasMainTimeInstruction;
@property(retain, nonatomic) GEOFormattedString *alternativeText;
@property(readonly, nonatomic) _Bool hasAlternativeText;
@property(retain, nonatomic) GEOFormattedString *mainText;
@property(readonly, nonatomic) _Bool hasMainText;
@property(nonatomic) _Bool hasExpectedDepartureTime;
@property(nonatomic) unsigned int expectedDepartureTime;
- (id)initWithData:(id)arg1;
- (id)init;

@end
