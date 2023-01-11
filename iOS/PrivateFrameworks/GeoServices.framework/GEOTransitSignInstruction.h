//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOComposedRouteStepTransitInstructionMerging-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitSignInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_commandFormatteds;
    NSMutableArray *_detailFormatteds;
    NSMutableArray *_noticeFormatteds;
    NSMutableArray *_priceFormatteds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_commandFormatteds:1;
        unsigned int read_detailFormatteds:1;
        unsigned int read_noticeFormatteds:1;
        unsigned int read_priceFormatteds:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)priceFormattedType;
+ (Class)noticeFormattedType;
+ (Class)detailFormattedType;
+ (Class)commandFormattedType;
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
- (id)priceFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)priceFormattedsCount;
- (void)addPriceFormatted:(id)arg1;
- (void)clearPriceFormatteds;
@property(retain, nonatomic) NSMutableArray *priceFormatteds;
- (id)noticeFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)noticeFormattedsCount;
- (void)addNoticeFormatted:(id)arg1;
- (void)clearNoticeFormatteds;
@property(retain, nonatomic) NSMutableArray *noticeFormatteds;
- (id)detailFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)detailFormattedsCount;
- (void)addDetailFormatted:(id)arg1;
- (void)clearDetailFormatteds;
@property(retain, nonatomic) NSMutableArray *detailFormatteds;
- (id)commandFormattedAtIndex:(unsigned long long)arg1;
- (unsigned long long)commandFormattedsCount;
- (void)addCommandFormatted:(id)arg1;
- (void)clearCommandFormatteds;
@property(retain, nonatomic) NSMutableArray *commandFormatteds;
- (id)initWithData:(id)arg1;
- (id)init;
- (void)_transit_prepareForDeepMergeFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
